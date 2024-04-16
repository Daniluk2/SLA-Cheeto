// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Helper functions

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <string>
#include <codecvt>
#include "helpers.h"

// Helper function to get the module base address
uintptr_t il2cppi_get_base_address() {
    return (uintptr_t) GetModuleHandleW(L"GameAssembly.dll");
}

// Helper function to open a new console window and redirect stdout there
void il2cppi_new_console() {
    AllocConsole();
    freopen_s((FILE**)stdin, "CONIN$", "r", stdin);
    freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);
    freopen_s((FILE**)stderr, "CONOUT$", "w", stderr);
    SetConsoleOutputCP(CP_UTF8);
}

void il2cppi_close_console() {
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
    FreeConsole();
}

template<typename ... Args>
std::string string_format(const std::string& format, Args ... args)
{
    int size_s = std::snprintf(nullptr, 0, format.c_str(), args ...) + 1; // Extra space for '\0'
    if (size_s <= 0) { throw std::runtime_error("Error during formatting."); }
    auto size = static_cast<size_t>(size_s);
    auto buf = std::make_unique<char[]>(size);
    std::snprintf(buf.get(), size, format.c_str(), args ...);
    return std::string(buf.get(), buf.get() + size - 1); // We don't want the '\0' inside
}

#if _MSC_VER >= 1920
// Helper function to convert Il2CppString to std::string
std::string il2cppi_to_string(Il2CppString* str) {
    std::u16string u16(reinterpret_cast<const char16_t*>(str->chars));
    return std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t>{}.to_bytes(u16);
}

// Helper function to convert System.String to std::string
std::string il2cppi_to_string(app::String* str) {
    if (str == nullptr)
        return std::string("<nullptr>");
    return il2cppi_to_string(reinterpret_cast<Il2CppString*>(str));
}

app::String* string_to_il2cppi(std::string input) {
    return app::Marshal_PtrToStringAnsi((void*)input.c_str(), nullptr);
}

app::String* string_to_il2cppi(std::wstring input) {
    return app::Marshal_PtrToStringUni((void*)input.c_str(), nullptr);
}

std::string il2cppi_to_string(app::Vector2 vec) {
    return string_format("{ x = %f, y = %f }", vec.x, vec.y);
}

std::string il2cppi_to_string(app::Vector3 vec) {
    return string_format("{ x = %f, y = %f, z = %f }", vec.x, vec.y, vec.z);
}

#else
std::string il2cppi_to_string(Il2CppString* str) {
	Il2CppChar* buffer = il2cpp_string_chars(str);
	size_t length = il2cpp_string_length(str);
	std::string result(reinterpret_cast<const char*>(buffer), length);
	return result;
}

std::string il2cppi_to_string(app::String* str) {
	auto fields = str->fields;
	auto length = fields.length;
	auto startChar = reinterpret_cast<const char16_t*>(fields.start_char);
	std::u16string u16Str(startChar, length);
	std::string utf8Str;
	utf8Str.reserve(length * 3); 
	for (char16_t c : u16Str) {
		if (c <= 0x7F) {
			utf8Str.push_back(static_cast<char>(c));
		}
		else if (c <= 0x7FF) {
			utf8Str.push_back(static_cast<char>(0xC0 | (c >> 6)));
			utf8Str.push_back(static_cast<char>(0x80 | (c & 0x3F)));
		}
		else {
			utf8Str.push_back(static_cast<char>(0xE0 | (c >> 12)));
			utf8Str.push_back(static_cast<char>(0x80 | ((c >> 6) & 0x3F)));
			utf8Str.push_back(static_cast<char>(0x80 | (c & 0x3F)));
		}
	}
	return utf8Str;
}

app::String* string_to_il2cppi(std::string input) {
	std::u16string u16Input;
	for (char c : input) {
		u16Input.push_back(static_cast<uint16_t>(c));
	}
	int32_t length = static_cast<int32_t>(u16Input.length());
	app::String* str = reinterpret_cast<app::String*>(malloc(sizeof(app::String) + (length + 1) * sizeof(uint16_t)));
	str->fields.length = length;
	str->fields.start_char = 0;
	memcpy(reinterpret_cast<uint16_t*>(str + 1), u16Input.c_str(), (length + 1) * sizeof(uint16_t));
	return str;
}
app::String* string_to_il2cppi(std::wstring input) {
	std::u16string u16Input(input.begin(), input.end());
	int32_t length = static_cast<int32_t>(u16Input.length());
	app::String* str = reinterpret_cast<app::String*>(malloc(sizeof(app::String) + (length + 1) * sizeof(uint16_t)));
	str->fields.length = length;
	str->fields.start_char = 0;
	memcpy(reinterpret_cast<uint16_t*>(str + 1), u16Input.c_str(), (length + 1) * sizeof(uint16_t));
	return str;
}
std::string il2cppi_to_string(app::Vector2 vec) {
	return string_format("{ x = %f, y = %f }", vec.x, vec.y);
}

std::string il2cppi_to_string(app::Vector3 vec) {
	return string_format("{ x = %f, y = %f, z = %f }", vec.x, vec.y, vec.z);
}

#endif
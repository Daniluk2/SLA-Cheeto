#include "inject.h"
#include "injector.h"
#include <fstream>
#include <iostream>
#include "util.h"

std::vector<char> ReadFileToMemory(const std::string& filePath) {
	std::ifstream file(filePath, std::ios::binary | std::ios::ate);
	if (!file.is_open()) {
		throw std::runtime_error("Failed to open file: " + filePath);
	}

	size_t fileSize = file.tellg();
	file.seekg(0, std::ios::beg);

	std::vector<char> buffer(fileSize);
	file.read(buffer.data(), fileSize);
	file.close();

	return buffer;
}

bool Inject(HANDLE hProcess, const std::string& dllPath) {
	if (GetFileAttributesA(dllPath.c_str()) == INVALID_FILE_ATTRIBUTES) {
		std::cerr << "DLL file not found: " << dllPath << std::endl;
		return false;
	}

	std::vector<char> dllBuffer;
	try {
		dllBuffer = ReadFileToMemory(dllPath);
	}
	catch (const std::exception& e) {
		std::cerr << "Failed to read DLL file: " << e.what() << std::endl;
		return false;
	}

	if (!ManualMapDll(hProcess, reinterpret_cast<BYTE*>(dllBuffer.data()), dllBuffer.size(), true, true, false, false, DLL_PROCESS_ATTACH, nullptr)) {
		std::cerr << "Failed to inject DLL using manual map" << std::endl;
		return false;
	}

	return true;
}


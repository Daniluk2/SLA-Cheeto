// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Target Unity version: 2021.2.0+

// ******************************************************************************
// * IL2CPP application-specific method definition addresses and signatures
// ******************************************************************************
using namespace app;

//DO_APP_FUNC(0x00454960, void, GameFrameWork_Update, (GameFrameWork* __this, MethodInfo* method));
DO_APP_FUNC(0x00455F30, void, GameFrameWork_Update, (GameFrameWork* __this, MethodInfo* method));

//DO_APP_FUNC(0x0202DAF0, String*, Marshal_PtrToStringAnsi, (void* ptr, MethodInfo* method));
DO_APP_FUNC(0x0208ABF0, String*, Marshal_PtrToStringAnsi, (void* ptr, MethodInfo* method));
//DO_APP_FUNC(0x0202DB10, String*, Marshal_PtrToStringUni, (void* ptr, MethodInfo* method));
DO_APP_FUNC(0x0208AC10, String*, Marshal_PtrToStringUni, (void* ptr, MethodInfo* method));

// FovChanger
//DO_APP_FUNC(0x0301C600, void, Camera_set_fieldOfView, (void* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x030797E0, void, Camera_set_fieldOfView, (void* __this, float value, MethodInfo * method));

// FPSUnlock
//DO_APP_FUNC(0x03015300, int, Application_get_targetFrameRate, (MethodInfo* method));
DO_APP_FUNC(0x03072580, int32_t, Application_get_targetFrameRate, (MethodInfo* method));

//DO_APP_FUNC(0x03015A20, void, Application_set_targetFrameRate, (int value, MethodInfo* method));
DO_APP_FUNC(0x03072CA0, void, Application_set_targetFrameRate, (int32_t value, MethodInfo* method));

//DO_APP_FUNC(0x3039880, void, QualitySettings_set_vSyncCount, (int value, MethodInfo* method));
DO_APP_FUNC(0x03096A60, void, QualitySettings_set_vSyncCount, (int32_t value, MethodInfo* method));

// TimeScale
//DO_APP_FUNC(0x03071EC0, float, Time_get_timeScale, (MethodInfo* method));
DO_APP_FUNC(0x030CF0A0, float, Time_get_timeScale, (MethodInfo* method));

//DO_APP_FUNC(0x03071FB0, void, Time_set_timeScale, (float value, MethodInfo* method));
DO_APP_FUNC(0x030CF190, void, Time_set_timeScale, (float value, MethodInfo* method));

// Unity & C# Stuff
//DO_APP_FUNC(0x03060E70, GameObject*, GameObject_Find, (String* name, MethodInfo* method));
DO_APP_FUNC(0x030BE050, GameObject*, GameObject_Find, (String* name, MethodInfo * method));

//DO_APP_FUNC(0x03061EC0, Transform*, GameObject_get_transform, (GameObject* __this, MethodInfo* method));
DO_APP_FUNC(0x030BF0A0, Transform*, GameObject_get_transform, (GameObject* __this, MethodInfo* method));

//DO_APP_FUNC(0x030610C0, Component*, GameObject_GetComponent, (GameObject* __this, Type* type, MethodInfo* method));
DO_APP_FUNC(0x030BE2A0, Component*, GameObject_GetComponent, (GameObject* __this, Type* type, MethodInfo* method));


//DO_APP_FUNC(0x0305EC20, GameObject*, Component_get_gameObject, (Component* __this, MethodInfo* method));
DO_APP_FUNC(0x030BBE00, GameObject*, Component_get_gameObject, (Component* __this, MethodInfo* method));

//DO_APP_FUNC(0x01066100, GameObject*, GameObject_get_gameObject, (GameObject* __this, MethodInfo* method));
DO_APP_FUNC(0x010B2BD0, GameObject*, GameObject_get_gameObject, (GameObject* __this, MethodInfo* method));

//DO_APP_FUNC(0x03076340, int32_t, Transform_get_childCount, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x030D3520, int32_t, Transform_get_childCount, (Transform* __this, MethodInfo* method));


//DO_APP_FUNC(0x03065C60, Object_1__Array*, Object_1_FindObjectsOfType_1, (Type* type, bool includeInactive, MethodInfo* method));
//UnityEngine_Object__FindObjectsOfType
DO_APP_FUNC(0x030C2E40, Object_1__Array*, Object_1_FindObjectsOfType_1, (Type* type, bool includeInactive, MethodInfo* method));

//DO_APP_FUNC(0x02162DF0, Type*, Type_GetType_3, (String* typeName, MethodInfo* method));
//System_Type__GetType
DO_APP_FUNC(0x021BFF00, Type*, Type_GetType_3, (String* typeName, MethodInfo* method));

//DO_APP_FUNC(0x02045210, Assembly*, Assembly_LoadWithPartialName, (String* partialName, MethodInfo* method));
DO_APP_FUNC(0x020A2310, Assembly*, Assembly_LoadWithPartialName, (String* partialName, MethodInfo* method));

//DO_APP_FUNC(0x020450F0, Type*, Assembly_GetType, (Assembly* __this, String* name, MethodInfo* method));
//System_Reflection_Assembly__GetType
DO_APP_FUNC(0x020A21F0, Type*, Assembly_GetType, (Assembly* __this, String* name, MethodInfo* method));

//DO_APP_FUNC(0x0308E5B0, Scene, SceneManager_GetActiveScene, (MethodInfo* method));
DO_APP_FUNC(0x030EB790, Scene, SceneManager_GetActiveScene, (MethodInfo* method));

//DO_APP_FUNC(0x0308FBE0, String*, Scene_GetNameInternal, (int32_t sceneHandle, MethodInfo* method));
DO_APP_FUNC(0x030ECDC0, String*, Scene_GetNameInternal, (int32_t sceneHandle, MethodInfo* method));

//DO_APP_FUNC(0x030651F0, void, Object_1_Destroy_1, (Object_1* obj, MethodInfo* method));
//UnityEngine_Object__Destroy
DO_APP_FUNC(0x030C23D0, void, Object_1_Destroy_1, (Object_1* obj, MethodInfo* method));

//DO_APP_FUNC(0x03067140, String*, Object_1_get_name, (Object_1* __this, MethodInfo* method));
//UnityEngine_Object__get_name
DO_APP_FUNC(0x030C4320, String*, Object_1_get_name, (Object_1* __this, MethodInfo* method));

//DO_APP_FUNC(0x0300C190, float, Animator_get_speed, (Animator* __this, MethodInfo* method));
DO_APP_FUNC(0x03069410, float, Animator_get_speed, (Animator* __this, MethodInfo* method));

//DO_APP_FUNC(0x0300CBF0, void, Animator_set_speed, (Animator* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x03069E70, void, Animator_set_speed, (Animator* __this, float value, MethodInfo* method));

//DO_APP_FUNC(0x03076A50, Vector3, Transform_get_position, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x030D3C30, Vector3, Transform_get_position, (Transform* __this, MethodInfo* method));

//DO_APP_FUNC(0x030772C0, void, Transform_set_position, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x030D44A0, void, Transform_set_position, (Transform* __this, Vector3 value, MethodInfo* method));

//DO_APP_FUNC(0x03076720, Vector3, Transform_get_localPosition, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x030D3900, Vector3, Transform_get_localPosition, (Transform* __this, MethodInfo* method));

//DO_APP_FUNC(0x03077020, void, Transform_set_localPosition, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x030D4200, void, Transform_set_localPosition, (Transform* __this, Vector3 value, MethodInfo* method));

//DO_APP_FUNC(0x03073AC0, Vector3, Transform_GetLocalEulerAngles, (Transform* __this, RotationOrder__Enum order, MethodInfo* method));
DO_APP_FUNC(0x030D0CA0, Vector3, Transform_GetLocalEulerAngles, (Transform* __this, RotationOrder__Enum order, MethodInfo* method));

//DO_APP_FUNC(0x03075400, void, Transform_SetLocalEulerAngles, (Transform* __this, Vector3 euler, RotationOrder__Enum order, MethodInfo* method));
DO_APP_FUNC(0x030D25E0, void, Transform_SetLocalEulerAngles, (Transform* __this, Vector3 euler, RotationOrder__Enum order, MethodInfo* method));

//DO_APP_FUNC(0x030754B0, void, Transform_SetLocalEulerHint, (Transform* __this, Vector3 euler, MethodInfo* method));
DO_APP_FUNC(0x030D2690, void, Transform_SetLocalEulerHint, (Transform* __this, Vector3 euler, MethodInfo* method));

//DO_APP_FUNC(0x03076380, Vector3, Transform_get_eulerAngles, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x030D3560, Vector3, Transform_get_eulerAngles, (Transform* __this, MethodInfo* method));

//DO_APP_FUNC(0x03076DD0, void, Transform_set_eulerAngles, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x030D3FB0, void, Transform_set_eulerAngles, (Transform* __this, Vector3 value, MethodInfo* method));

//DO_APP_FUNC(0x030765F0, Vector3, Transform_get_localEulerAngles, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x030D37D0, Vector3, Transform_get_localEulerAngles, (Transform* __this, MethodInfo* method));

//DO_APP_FUNC(0x03076F30, void, Transform_set_localEulerAngles, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x030D4110, void, Transform_set_localEulerAngles, (Transform* __this, Vector3 value, MethodInfo* method));

//DO_APP_FUNC(0x03076AA0, Vector3, Transform_get_right, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x030D3C80, Vector3, Transform_get_right, (Transform* __this, MethodInfo* method));

//DO_APP_FUNC(0x03077310, void, Transform_set_right, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x030D44F0, void, Transform_set_right, (Transform* __this, Vector3 value, MethodInfo* method));

//DO_APP_FUNC(0x03076C10, Vector3, Transform_get_up, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x030D3DF0, Vector3, Transform_get_up, (Transform* __this, MethodInfo* method));

//DO_APP_FUNC(0x03077460, void, Transform_set_up, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x030D4640, void, Transform_set_up, (Transform* __this, Vector3 value, MethodInfo* method));

//DO_APP_FUNC(0x03076460, Vector3, Transform_get_forward, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x030D3640, Vector3, Transform_get_forward, (Transform* __this, MethodInfo* method));

//DO_APP_FUNC(0x03076E70, void, Transform_set_forward, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x030D4050, void, Transform_set_forward, (Transform* __this, Vector3 value, MethodInfo* method));

//DO_APP_FUNC(0x03076BC0, Quaternion, Transform_get_rotation, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x030D3DA0, Quaternion, Transform_get_rotation, (Transform* __this, MethodInfo* method));

//DO_APP_FUNC(0x03077410, void, Transform_set_rotation, (Transform* __this, Quaternion value, MethodInfo* method));
DO_APP_FUNC(0x030D45F0, void, Transform_set_rotation, (Transform* __this, Quaternion value, MethodInfo* method));

//DO_APP_FUNC(0x030767C0, Quaternion, Transform_get_localRotation, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x030D39A0, Quaternion, Transform_get_localRotation, (Transform* __this, MethodInfo* method));

//DO_APP_FUNC(0x030770C0, void, Transform_set_localRotation, (Transform* __this, Quaternion value, MethodInfo* method));
DO_APP_FUNC(0x030D42A0, void, Transform_set_localRotation, (Transform * __this, Quaternion value, MethodInfo * method));

//DO_APP_FUNC(0x0305B760, float, Vector3_Distance, (Vector3 a, Vector3 b, MethodInfo* method));
DO_APP_FUNC(0x030B8940, float, Vector3_Distance, (Vector3 a, Vector3 b, MethodInfo* method));

//DO_APP_FUNC(0x0305B9D0, Vector3, Vector3_Lerp, (Vector3 a, Vector3 b, float t, MethodInfo* method));
DO_APP_FUNC(0x030B8BB0, Vector3, Vector3_Lerp, (Vector3 a, Vector3 b, float t, MethodInfo* method));

// No Cooldown
// mb??? 0x00852E70
//(DAICCIIPJPK) new 0x008546C0(WORK) old 0x0075EF00
// (SHIT DONT USE) mb 0x0072E760 -> UnityEngine_UI_Extensions_CooldownButton__set_CooldownActive
//DO_APP_FUNC(0x0075EF00, void/*KAAIFMKPKAG*/*, KAAIFMKPKAG_IOFMGMJCCFO, (KAAIFMKPKAG* __this, bool DEJNILEHENL, MethodInfo* method));
DO_APP_FUNC(0x008546C0, void *, KAAIFMKPKAG_IOFMGMJCCFO, (KAAIFMKPKAG* __this, bool DEJNILEHENL, MethodInfo* method));



// Damage Hack

//GIIHNOKCDEB__GCDOMBOBFOL = YEP (EHPMFEKGKBN)
// new 0x00830370 old 0x0073D410
DO_APP_FUNC(0x00830370, void, PIPHNBOBFEF_KBCIIEFLPGB, (PIPHNBOBFEF* __this, ESpecialState__Enum OCKAHFDGNEL, int64_t MGFPJFANLBG, int64_t DIACKALMMKH, int64_t PBAPBJGDAPJ, String* DLOACPLHGMP, MethodInfo* method));



// God Mode
// new 0x009D6CB0 old 0x00956020
DO_APP_FUNC(0x00956020, int32_t, GHINOEFFMPN_EKHGIHBHEPL, (SkillIdentity* EKPKPIJBPKE, void/*IEnumerable_1_UnityEngine_Component_*/* FKJDKGJBGOD, TargetHitData* COFCDKGCOGJ, MethodInfo* method));


// Dumb Enemies
// new 0x00A65FC0 old 0x009E4270
DO_APP_FUNC(0x00A65FC0, void, EvadeProxy_Init, (EvadeProxy* __this, ENNEJEPMJLJ* IGBKKNODEGM, EvadePenetration* DHPMEMDBDMC, MethodInfo* method));

// EntityManager
// NMOBMODHBDM__Fields = ENHPKNIEKMI
// old 0x00756780
// mb new 0x00866320
// ? 0x00866400
// ? 0x00865C80
// md new? 0x00865E30

DO_APP_FUNC(0x00865E30, void, ENHPKNIEKMI_MIFDFEHDDDD, (ENHPKNIEKMI* __this, MethodInfo* method));

// new 0x00A3C540 old 0x009833C0
// KFIDCCOOGKM  = ENHPKNIEKMI
DO_APP_FUNC(0x00A3C540, ENHPKNIEKMI*, ENNEJEPMJLJ_FIGHFBNIDJA, (ENNEJEPMJLJ* __this, MethodInfo* method));

// new 0x00A32AE0 old 0x00998A00
DO_APP_FUNC(0x00A32AE0, bool, PCILGJOEPJM_PPAKPBOJLIP, (ENNEJEPMJLJ* IGBKKNODEGM, MethodInfo* method)); // Check if Entity is alive????

// Mission Time
// new 0x00E40850 old 0x00D87DD0
DO_APP_FUNC(0x00E40850, void, StageReadyPage_EnterUI, (StageReadyPage* __this, MethodInfo* method));
// new 0x00E42FE0 old 0x00D8BA20
DO_APP_FUNC(0x00E42FE0, void, StoryQuestChapterPage_EnterUI, (StoryQuestChapterPage* __this,MethodInfo* method));


// Intro Movie
// new 0x00B40AC0 old 0x00A9AE20
DO_APP_FUNC(0x00B40AC0, void, GameMovie_Update, (GameMovie* __this, MethodInfo* method));
// new 0x00B44FE0 old 0x00A9C720
DO_APP_FUNC(0x00B44FE0, void, IntroMovie_Update, (IntroMovie* __this, MethodInfo* method));


// Disable Web View
// new 0x022E4BE0 old 0x02287AD0
DO_APP_FUNC(0x022E4BE0, void, WebViewDialog_Show, (void* __this, MethodInfo* method));
// new 0x022E6950 old 0x02289840
DO_APP_FUNC(0x022E6950, void, WebViewUI_RefreshSize, (void* __this, MethodInfo* method));


// EFOALPDEJAJ
// BKBKEGEMPBB__Enum 
// new 0x00431040 old 0x00430040
// no - 0x00431040 || 0x0040F5D0 || 0x005DA8D0 || 
//DO_APP_FUNC(0x0040F5D0, List_1_ECLBMHDCAIP_ *, EFOALPDEJAJ_MACJNFFBGNA, (EFOALPDEJAJ * __this, MethodInfo * method));

DO_APP_FUNC(0x00431040, EGLGAPIAANF__Enum, JIBDAHKJHOG_PCLINKFFGNE, (JIBDAHKJHOG* __this, MethodInfo* method));

// new 0x008B5480 old 0x00837FE0
DO_APP_FUNC(0x008B5520, void, JIBDAHKJHOG_KPDGECAFJKA, (JIBDAHKJHOG* __this, MethodInfo* method));

// new 0x008B5190 || 0x008B4860 || 0x008B4BC0 || 0x008B4BC0 || 0x008B5DA0 old 0x00837510
DO_APP_FUNC(0x008B4BC0, void, JIBDAHKJHOG_HLLNLMAECBD, (JIBDAHKJHOG* __this, MEOJHACEIPF* JONOLJGMLBE, MHKEJMMHEJA* BHMPNNCBFGN, MethodInfo* method)); // EnterBattleReq

// new 0x008B5480 || 0x008B5F30 || 0x008B5D00 || 0x008B5520 || 0x008B5D40 || 0x008B49F0 || 0x008B4990 || 0x008B65B0 || 0x008B72C0 old 0x00836650
DO_APP_FUNC(0x008B4990, void, JIBDAHKJHOG_EJLDBPGJGPN, (JIBDAHKJHOG* __this, MethodInfo* method)); // NextStageBattle

// new 0x008B5480 || 0x008B5F30 || 0x008B5D00 || 0x008B5520 || 0x008B5D40 || 0x008B49F0 || 0x008B4990 || 0x008B65B0 || 0x008B72C0 old 0x00836410
DO_APP_FUNC(0x008B72C0, void, JIBDAHKJHOG_COLDHPFDOHG, (JIBDAHKJHOG* __this, MethodInfo* method)); // StageStart


// Shadow Cooldown And Limit
// KEMLMFGFLBK = JLLMICINIDA
// new 0x00680190 || 0x00A58160 || 0x00A58B00 || 0x00A57810 || 0x00A579B0 || 0x00A58180 old 0x009A41E0
DO_APP_FUNC(0x00A57810, void, JLLMICINIDA_LFCGJLAFFOM, (JLLMICINIDA* __this, MethodInfo* method));

// Singletons
// new mb?? 0x019D6930 old 0x00344840
DO_APP_FUNC(0x00344840, void*, TSingleton_GetInstance, (MethodInfo* method)); // Search for this in IDA. Seems to be Singleton<T> class
// ComponentSingleton_1_System_Object__get_instance
// new 0x017738F0 old 0x0042C0E0
DO_APP_FUNC(0x0042D0E0, Object*, TSingleton_1_System_Object__get_Instance, (MethodInfo* method)); // Get the instance of the singleton
// ? 0x04081B98 || new mb??? 0x040807D8 old 0x04038380
DO_APP_FUNC_METHODINFO(0x04081B98, TSingleton_1_JIBDAHKJHOG__get_Instance__MethodInfo);
//DO_APP_FUNC_METHODINFO(0x040807D8, TSingleton_1_T_SingletonAllocator_System_Object__CreateInstance__MethodInfo);

// DO_APP_FUNC_METHODINFO(0x0403AC70, TSingleton_1_PJKMAOEINNH__get_Instance__MethodInfo); // Probably EntityManager or something similar
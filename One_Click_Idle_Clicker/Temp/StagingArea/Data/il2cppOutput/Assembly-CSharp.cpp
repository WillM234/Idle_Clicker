#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// ScoreTracking
struct ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral78A96FAA2CB53CC4443DE9699871BBE0F12CF2C4;
IL2CPP_EXTERN_C String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
IL2CPP_EXTERN_C String_t* _stringLiteralBFB19FE9EF3759175839E7AF4411B6DC4EFF0F10;
IL2CPP_EXTERN_C String_t* _stringLiteralF2B514B25684DE761EF0E0E4F386F3D5B3E68033;
IL2CPP_EXTERN_C const uint32_t ScoreTracking_Update_mD001D3EE15BD0D3ADFD8C2632FFBE6C1BE793E5F_MetadataUsageId;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// ScoreTracking
struct  ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text ScoreTracking::payableScore
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___payableScore_4;
	// UnityEngine.UI.Text ScoreTracking::ClicksPerSecond
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___ClicksPerSecond_5;
	// UnityEngine.UI.Text ScoreTracking::MClickPerClick
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___MClickPerClick_6;
	// System.Single ScoreTracking::totalscore
	float ___totalscore_7;
	// System.Single ScoreTracking::totalMClicks
	float ___totalMClicks_8;
	// System.Single ScoreTracking::addMClicks
	float ___addMClicks_9;
	// System.Single ScoreTracking::addIClicks
	float ___addIClicks_10;
	// System.Single ScoreTracking::manualClicks
	float ___manualClicks_11;
	// System.Single ScoreTracking::idleClicksPerSec
	float ___idleClicksPerSec_12;
	// System.Single ScoreTracking::timer
	float ___timer_13;
	// UnityEngine.UI.Text ScoreTracking::OnClick1Cost
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___OnClick1Cost_14;
	// UnityEngine.UI.Text ScoreTracking::OnClick5Cost
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___OnClick5Cost_15;
	// UnityEngine.UI.Text ScoreTracking::OnClick10Cost
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___OnClick10Cost_16;
	// UnityEngine.UI.Text ScoreTracking::OnClick100Cost
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___OnClick100Cost_17;
	// UnityEngine.UI.Text ScoreTracking::IClick1Cost
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___IClick1Cost_18;
	// UnityEngine.UI.Text ScoreTracking::IClick5Cost
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___IClick5Cost_19;
	// UnityEngine.UI.Text ScoreTracking::IClick10Cost
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___IClick10Cost_20;
	// UnityEngine.UI.Text ScoreTracking::IClick100Cost
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___IClick100Cost_21;
	// UnityEngine.UI.Text ScoreTracking::IClick500Cost
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___IClick500Cost_22;
	// UnityEngine.UI.Text ScoreTracking::IClick1000Cost
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___IClick1000Cost_23;
	// System.Single ScoreTracking::onClick1Cost
	float ___onClick1Cost_24;
	// System.Single ScoreTracking::onClick5Cost
	float ___onClick5Cost_25;
	// System.Single ScoreTracking::onClick10Cost
	float ___onClick10Cost_26;
	// System.Single ScoreTracking::onClick100Cost
	float ___onClick100Cost_27;
	// System.Single ScoreTracking::iClick1Cost
	float ___iClick1Cost_28;
	// System.Single ScoreTracking::iClick5Cost
	float ___iClick5Cost_29;
	// System.Single ScoreTracking::iClick10Cost
	float ___iClick10Cost_30;
	// System.Single ScoreTracking::iClick100Cost
	float ___iClick100Cost_31;
	// System.Single ScoreTracking::iClick500Cost
	float ___iClick500Cost_32;
	// System.Single ScoreTracking::iClick1000Cost
	float ___iClick1000Cost_33;
	// System.Single ScoreTracking::oC1Level
	float ___oC1Level_34;
	// System.Single ScoreTracking::oC5Level
	float ___oC5Level_35;
	// System.Single ScoreTracking::oC10Level
	float ___oC10Level_36;
	// System.Single ScoreTracking::oC100Level
	float ___oC100Level_37;
	// System.Single ScoreTracking::iC1Level
	float ___iC1Level_38;
	// System.Single ScoreTracking::iC5Level
	float ___iC5Level_39;
	// System.Single ScoreTracking::iC10Level
	float ___iC10Level_40;
	// System.Single ScoreTracking::iC100Level
	float ___iC100Level_41;
	// System.Single ScoreTracking::iC500Level
	float ___iC500Level_42;
	// System.Single ScoreTracking::iC1000Level
	float ___iC1000Level_43;

public:
	inline static int32_t get_offset_of_payableScore_4() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___payableScore_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_payableScore_4() const { return ___payableScore_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_payableScore_4() { return &___payableScore_4; }
	inline void set_payableScore_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___payableScore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payableScore_4), (void*)value);
	}

	inline static int32_t get_offset_of_ClicksPerSecond_5() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___ClicksPerSecond_5)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_ClicksPerSecond_5() const { return ___ClicksPerSecond_5; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_ClicksPerSecond_5() { return &___ClicksPerSecond_5; }
	inline void set_ClicksPerSecond_5(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___ClicksPerSecond_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClicksPerSecond_5), (void*)value);
	}

	inline static int32_t get_offset_of_MClickPerClick_6() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___MClickPerClick_6)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_MClickPerClick_6() const { return ___MClickPerClick_6; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_MClickPerClick_6() { return &___MClickPerClick_6; }
	inline void set_MClickPerClick_6(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___MClickPerClick_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MClickPerClick_6), (void*)value);
	}

	inline static int32_t get_offset_of_totalscore_7() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___totalscore_7)); }
	inline float get_totalscore_7() const { return ___totalscore_7; }
	inline float* get_address_of_totalscore_7() { return &___totalscore_7; }
	inline void set_totalscore_7(float value)
	{
		___totalscore_7 = value;
	}

	inline static int32_t get_offset_of_totalMClicks_8() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___totalMClicks_8)); }
	inline float get_totalMClicks_8() const { return ___totalMClicks_8; }
	inline float* get_address_of_totalMClicks_8() { return &___totalMClicks_8; }
	inline void set_totalMClicks_8(float value)
	{
		___totalMClicks_8 = value;
	}

	inline static int32_t get_offset_of_addMClicks_9() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___addMClicks_9)); }
	inline float get_addMClicks_9() const { return ___addMClicks_9; }
	inline float* get_address_of_addMClicks_9() { return &___addMClicks_9; }
	inline void set_addMClicks_9(float value)
	{
		___addMClicks_9 = value;
	}

	inline static int32_t get_offset_of_addIClicks_10() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___addIClicks_10)); }
	inline float get_addIClicks_10() const { return ___addIClicks_10; }
	inline float* get_address_of_addIClicks_10() { return &___addIClicks_10; }
	inline void set_addIClicks_10(float value)
	{
		___addIClicks_10 = value;
	}

	inline static int32_t get_offset_of_manualClicks_11() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___manualClicks_11)); }
	inline float get_manualClicks_11() const { return ___manualClicks_11; }
	inline float* get_address_of_manualClicks_11() { return &___manualClicks_11; }
	inline void set_manualClicks_11(float value)
	{
		___manualClicks_11 = value;
	}

	inline static int32_t get_offset_of_idleClicksPerSec_12() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___idleClicksPerSec_12)); }
	inline float get_idleClicksPerSec_12() const { return ___idleClicksPerSec_12; }
	inline float* get_address_of_idleClicksPerSec_12() { return &___idleClicksPerSec_12; }
	inline void set_idleClicksPerSec_12(float value)
	{
		___idleClicksPerSec_12 = value;
	}

	inline static int32_t get_offset_of_timer_13() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___timer_13)); }
	inline float get_timer_13() const { return ___timer_13; }
	inline float* get_address_of_timer_13() { return &___timer_13; }
	inline void set_timer_13(float value)
	{
		___timer_13 = value;
	}

	inline static int32_t get_offset_of_OnClick1Cost_14() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___OnClick1Cost_14)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_OnClick1Cost_14() const { return ___OnClick1Cost_14; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_OnClick1Cost_14() { return &___OnClick1Cost_14; }
	inline void set_OnClick1Cost_14(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___OnClick1Cost_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClick1Cost_14), (void*)value);
	}

	inline static int32_t get_offset_of_OnClick5Cost_15() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___OnClick5Cost_15)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_OnClick5Cost_15() const { return ___OnClick5Cost_15; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_OnClick5Cost_15() { return &___OnClick5Cost_15; }
	inline void set_OnClick5Cost_15(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___OnClick5Cost_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClick5Cost_15), (void*)value);
	}

	inline static int32_t get_offset_of_OnClick10Cost_16() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___OnClick10Cost_16)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_OnClick10Cost_16() const { return ___OnClick10Cost_16; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_OnClick10Cost_16() { return &___OnClick10Cost_16; }
	inline void set_OnClick10Cost_16(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___OnClick10Cost_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClick10Cost_16), (void*)value);
	}

	inline static int32_t get_offset_of_OnClick100Cost_17() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___OnClick100Cost_17)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_OnClick100Cost_17() const { return ___OnClick100Cost_17; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_OnClick100Cost_17() { return &___OnClick100Cost_17; }
	inline void set_OnClick100Cost_17(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___OnClick100Cost_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClick100Cost_17), (void*)value);
	}

	inline static int32_t get_offset_of_IClick1Cost_18() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___IClick1Cost_18)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_IClick1Cost_18() const { return ___IClick1Cost_18; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_IClick1Cost_18() { return &___IClick1Cost_18; }
	inline void set_IClick1Cost_18(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___IClick1Cost_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IClick1Cost_18), (void*)value);
	}

	inline static int32_t get_offset_of_IClick5Cost_19() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___IClick5Cost_19)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_IClick5Cost_19() const { return ___IClick5Cost_19; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_IClick5Cost_19() { return &___IClick5Cost_19; }
	inline void set_IClick5Cost_19(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___IClick5Cost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IClick5Cost_19), (void*)value);
	}

	inline static int32_t get_offset_of_IClick10Cost_20() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___IClick10Cost_20)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_IClick10Cost_20() const { return ___IClick10Cost_20; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_IClick10Cost_20() { return &___IClick10Cost_20; }
	inline void set_IClick10Cost_20(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___IClick10Cost_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IClick10Cost_20), (void*)value);
	}

	inline static int32_t get_offset_of_IClick100Cost_21() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___IClick100Cost_21)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_IClick100Cost_21() const { return ___IClick100Cost_21; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_IClick100Cost_21() { return &___IClick100Cost_21; }
	inline void set_IClick100Cost_21(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___IClick100Cost_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IClick100Cost_21), (void*)value);
	}

	inline static int32_t get_offset_of_IClick500Cost_22() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___IClick500Cost_22)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_IClick500Cost_22() const { return ___IClick500Cost_22; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_IClick500Cost_22() { return &___IClick500Cost_22; }
	inline void set_IClick500Cost_22(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___IClick500Cost_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IClick500Cost_22), (void*)value);
	}

	inline static int32_t get_offset_of_IClick1000Cost_23() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___IClick1000Cost_23)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_IClick1000Cost_23() const { return ___IClick1000Cost_23; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_IClick1000Cost_23() { return &___IClick1000Cost_23; }
	inline void set_IClick1000Cost_23(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___IClick1000Cost_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IClick1000Cost_23), (void*)value);
	}

	inline static int32_t get_offset_of_onClick1Cost_24() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___onClick1Cost_24)); }
	inline float get_onClick1Cost_24() const { return ___onClick1Cost_24; }
	inline float* get_address_of_onClick1Cost_24() { return &___onClick1Cost_24; }
	inline void set_onClick1Cost_24(float value)
	{
		___onClick1Cost_24 = value;
	}

	inline static int32_t get_offset_of_onClick5Cost_25() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___onClick5Cost_25)); }
	inline float get_onClick5Cost_25() const { return ___onClick5Cost_25; }
	inline float* get_address_of_onClick5Cost_25() { return &___onClick5Cost_25; }
	inline void set_onClick5Cost_25(float value)
	{
		___onClick5Cost_25 = value;
	}

	inline static int32_t get_offset_of_onClick10Cost_26() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___onClick10Cost_26)); }
	inline float get_onClick10Cost_26() const { return ___onClick10Cost_26; }
	inline float* get_address_of_onClick10Cost_26() { return &___onClick10Cost_26; }
	inline void set_onClick10Cost_26(float value)
	{
		___onClick10Cost_26 = value;
	}

	inline static int32_t get_offset_of_onClick100Cost_27() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___onClick100Cost_27)); }
	inline float get_onClick100Cost_27() const { return ___onClick100Cost_27; }
	inline float* get_address_of_onClick100Cost_27() { return &___onClick100Cost_27; }
	inline void set_onClick100Cost_27(float value)
	{
		___onClick100Cost_27 = value;
	}

	inline static int32_t get_offset_of_iClick1Cost_28() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___iClick1Cost_28)); }
	inline float get_iClick1Cost_28() const { return ___iClick1Cost_28; }
	inline float* get_address_of_iClick1Cost_28() { return &___iClick1Cost_28; }
	inline void set_iClick1Cost_28(float value)
	{
		___iClick1Cost_28 = value;
	}

	inline static int32_t get_offset_of_iClick5Cost_29() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___iClick5Cost_29)); }
	inline float get_iClick5Cost_29() const { return ___iClick5Cost_29; }
	inline float* get_address_of_iClick5Cost_29() { return &___iClick5Cost_29; }
	inline void set_iClick5Cost_29(float value)
	{
		___iClick5Cost_29 = value;
	}

	inline static int32_t get_offset_of_iClick10Cost_30() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___iClick10Cost_30)); }
	inline float get_iClick10Cost_30() const { return ___iClick10Cost_30; }
	inline float* get_address_of_iClick10Cost_30() { return &___iClick10Cost_30; }
	inline void set_iClick10Cost_30(float value)
	{
		___iClick10Cost_30 = value;
	}

	inline static int32_t get_offset_of_iClick100Cost_31() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___iClick100Cost_31)); }
	inline float get_iClick100Cost_31() const { return ___iClick100Cost_31; }
	inline float* get_address_of_iClick100Cost_31() { return &___iClick100Cost_31; }
	inline void set_iClick100Cost_31(float value)
	{
		___iClick100Cost_31 = value;
	}

	inline static int32_t get_offset_of_iClick500Cost_32() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___iClick500Cost_32)); }
	inline float get_iClick500Cost_32() const { return ___iClick500Cost_32; }
	inline float* get_address_of_iClick500Cost_32() { return &___iClick500Cost_32; }
	inline void set_iClick500Cost_32(float value)
	{
		___iClick500Cost_32 = value;
	}

	inline static int32_t get_offset_of_iClick1000Cost_33() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___iClick1000Cost_33)); }
	inline float get_iClick1000Cost_33() const { return ___iClick1000Cost_33; }
	inline float* get_address_of_iClick1000Cost_33() { return &___iClick1000Cost_33; }
	inline void set_iClick1000Cost_33(float value)
	{
		___iClick1000Cost_33 = value;
	}

	inline static int32_t get_offset_of_oC1Level_34() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___oC1Level_34)); }
	inline float get_oC1Level_34() const { return ___oC1Level_34; }
	inline float* get_address_of_oC1Level_34() { return &___oC1Level_34; }
	inline void set_oC1Level_34(float value)
	{
		___oC1Level_34 = value;
	}

	inline static int32_t get_offset_of_oC5Level_35() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___oC5Level_35)); }
	inline float get_oC5Level_35() const { return ___oC5Level_35; }
	inline float* get_address_of_oC5Level_35() { return &___oC5Level_35; }
	inline void set_oC5Level_35(float value)
	{
		___oC5Level_35 = value;
	}

	inline static int32_t get_offset_of_oC10Level_36() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___oC10Level_36)); }
	inline float get_oC10Level_36() const { return ___oC10Level_36; }
	inline float* get_address_of_oC10Level_36() { return &___oC10Level_36; }
	inline void set_oC10Level_36(float value)
	{
		___oC10Level_36 = value;
	}

	inline static int32_t get_offset_of_oC100Level_37() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___oC100Level_37)); }
	inline float get_oC100Level_37() const { return ___oC100Level_37; }
	inline float* get_address_of_oC100Level_37() { return &___oC100Level_37; }
	inline void set_oC100Level_37(float value)
	{
		___oC100Level_37 = value;
	}

	inline static int32_t get_offset_of_iC1Level_38() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___iC1Level_38)); }
	inline float get_iC1Level_38() const { return ___iC1Level_38; }
	inline float* get_address_of_iC1Level_38() { return &___iC1Level_38; }
	inline void set_iC1Level_38(float value)
	{
		___iC1Level_38 = value;
	}

	inline static int32_t get_offset_of_iC5Level_39() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___iC5Level_39)); }
	inline float get_iC5Level_39() const { return ___iC5Level_39; }
	inline float* get_address_of_iC5Level_39() { return &___iC5Level_39; }
	inline void set_iC5Level_39(float value)
	{
		___iC5Level_39 = value;
	}

	inline static int32_t get_offset_of_iC10Level_40() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___iC10Level_40)); }
	inline float get_iC10Level_40() const { return ___iC10Level_40; }
	inline float* get_address_of_iC10Level_40() { return &___iC10Level_40; }
	inline void set_iC10Level_40(float value)
	{
		___iC10Level_40 = value;
	}

	inline static int32_t get_offset_of_iC100Level_41() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___iC100Level_41)); }
	inline float get_iC100Level_41() const { return ___iC100Level_41; }
	inline float* get_address_of_iC100Level_41() { return &___iC100Level_41; }
	inline void set_iC100Level_41(float value)
	{
		___iC100Level_41 = value;
	}

	inline static int32_t get_offset_of_iC500Level_42() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___iC500Level_42)); }
	inline float get_iC500Level_42() const { return ___iC500Level_42; }
	inline float* get_address_of_iC500Level_42() { return &___iC500Level_42; }
	inline void set_iC500Level_42(float value)
	{
		___iC500Level_42 = value;
	}

	inline static int32_t get_offset_of_iC1000Level_43() { return static_cast<int32_t>(offsetof(ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD, ___iC1000Level_43)); }
	inline float get_iC1000Level_43() const { return ___iC1000Level_43; }
	inline float* get_address_of_iC1000Level_43() { return &___iC1000Level_43; }
	inline void set_iC1000Level_43(float value)
	{
		___iC1000Level_43 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_29;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_31;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_32;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_33;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_29)); }
	inline bool get_m_IncludeForMasking_29() const { return ___m_IncludeForMasking_29; }
	inline bool* get_address_of_m_IncludeForMasking_29() { return &___m_IncludeForMasking_29; }
	inline void set_m_IncludeForMasking_29(bool value)
	{
		___m_IncludeForMasking_29 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_30)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_30() const { return ___m_OnCullStateChanged_30; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_30() { return &___m_OnCullStateChanged_30; }
	inline void set_m_OnCullStateChanged_30(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_31)); }
	inline bool get_m_ShouldRecalculate_31() const { return ___m_ShouldRecalculate_31; }
	inline bool* get_address_of_m_ShouldRecalculate_31() { return &___m_ShouldRecalculate_31; }
	inline void set_m_ShouldRecalculate_31(bool value)
	{
		___m_ShouldRecalculate_31 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_32)); }
	inline int32_t get_m_StencilValue_32() const { return ___m_StencilValue_32; }
	inline int32_t* get_address_of_m_StencilValue_32() { return &___m_StencilValue_32; }
	inline void set_m_StencilValue_32(int32_t value)
	{
		___m_StencilValue_32 = value;
	}

	inline static int32_t get_offset_of_m_Corners_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_33)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_33() const { return ___m_Corners_33; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_33() { return &___m_Corners_33; }
	inline void set_m_Corners_33(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_33), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_34;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_35;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_37;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_39;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_40;

public:
	inline static int32_t get_offset_of_m_FontData_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_34)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_34() const { return ___m_FontData_34; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_34() { return &___m_FontData_34; }
	inline void set_m_FontData_34(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_35)); }
	inline String_t* get_m_Text_35() const { return ___m_Text_35; }
	inline String_t** get_address_of_m_Text_35() { return &___m_Text_35; }
	inline void set_m_Text_35(String_t* value)
	{
		___m_Text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_36)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_36() const { return ___m_TextCache_36; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_36() { return &___m_TextCache_36; }
	inline void set_m_TextCache_36(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_37() const { return ___m_TextCacheForLayout_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_37() { return &___m_TextCacheForLayout_37; }
	inline void set_m_TextCacheForLayout_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_39)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_39() const { return ___m_DisableFontTextureRebuiltCallback_39; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_39() { return &___m_DisableFontTextureRebuiltCallback_39; }
	inline void set_m_DisableFontTextureRebuiltCallback_39(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_39 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_40)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_40() const { return ___m_TempVerts_40; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_40() { return &___m_TempVerts_40; }
	inline void set_m_TempVerts_40(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_40), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_38;

public:
	inline static int32_t get_offset_of_s_DefaultText_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_38)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_38() const { return ___s_DefaultText_38; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_38() { return &___s_DefaultText_38; }
	inline void set_s_DefaultText_38(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_38), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScoreTracking::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTracking_Start_mE94DA2B49B9ED2C123D3EF7C2EFECA83C8C6DD43 (ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD * __this, const RuntimeMethod* method)
{
	{
		__this->set_addIClicks_10((0.0f));
		__this->set_addMClicks_9((1.0f));
		__this->set_oC1Level_34((1.0f));
		__this->set_oC5Level_35((0.0f));
		__this->set_oC10Level_36((0.0f));
		__this->set_oC100Level_37((0.0f));
		__this->set_iC1Level_38((0.0f));
		__this->set_iC5Level_39((0.0f));
		__this->set_iC10Level_40((0.0f));
		__this->set_iC100Level_41((0.0f));
		__this->set_iC500Level_42((0.0f));
		__this->set_iC1000Level_43((0.0f));
		__this->set_onClick5Cost_25((100.0f));
		__this->set_onClick10Cost_26((500.0f));
		__this->set_onClick100Cost_27((1000.0f));
		__this->set_iClick1Cost_28((75.0f));
		__this->set_iClick5Cost_29((250.0f));
		__this->set_iClick10Cost_30((400.0f));
		__this->set_iClick100Cost_31((1500.0f));
		__this->set_iClick500Cost_32((4000.0f));
		__this->set_iClick1000Cost_33((9000.0f));
		return;
	}
}
// System.Void ScoreTracking::MainButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTracking_MainButtonClick_m7BF4BDC01F761B29378CD0D1BA11435F7244E9DF (ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_manualClicks_11();
		__this->set_totalMClicks_8(L_0);
		float L_1 = __this->get_totalscore_7();
		float L_2 = __this->get_totalMClicks_8();
		__this->set_totalscore_7(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		return;
	}
}
// System.Void ScoreTracking::OnClick1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTracking_OnClick1_m201CE1E070358804A9E0CD370EAECBA6C2667937 (ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_totalscore_7();
		float L_1 = __this->get_onClick1Cost_24();
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0045;
		}
	}
	{
		float L_2 = __this->get_addMClicks_9();
		__this->set_addMClicks_9(((float)il2cpp_codegen_add((float)L_2, (float)(1.0f))));
		float L_3 = __this->get_totalscore_7();
		float L_4 = __this->get_onClick1Cost_24();
		__this->set_totalscore_7(((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)));
		float L_5 = __this->get_oC1Level_34();
		__this->set_oC1Level_34(((float)il2cpp_codegen_add((float)L_5, (float)(1.0f))));
	}

IL_0045:
	{
		return;
	}
}
// System.Void ScoreTracking::OnClick5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTracking_OnClick5_m30390031401C6B3B8929F5084364DA248B3E71C0 (ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_totalscore_7();
		float L_1 = __this->get_onClick5Cost_25();
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0045;
		}
	}
	{
		float L_2 = __this->get_addMClicks_9();
		__this->set_addMClicks_9(((float)il2cpp_codegen_add((float)L_2, (float)(5.0f))));
		float L_3 = __this->get_totalscore_7();
		float L_4 = __this->get_onClick5Cost_25();
		__this->set_totalscore_7(((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)));
		float L_5 = __this->get_oC5Level_35();
		__this->set_oC5Level_35(((float)il2cpp_codegen_add((float)L_5, (float)(1.0f))));
	}

IL_0045:
	{
		return;
	}
}
// System.Void ScoreTracking::OnClick10()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTracking_OnClick10_m309A45C8E615D38F1857885E57BD1700F51AC007 (ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_totalscore_7();
		float L_1 = __this->get_onClick10Cost_26();
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0045;
		}
	}
	{
		float L_2 = __this->get_addMClicks_9();
		__this->set_addMClicks_9(((float)il2cpp_codegen_add((float)L_2, (float)(10.0f))));
		float L_3 = __this->get_totalscore_7();
		float L_4 = __this->get_onClick10Cost_26();
		__this->set_totalscore_7(((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)));
		float L_5 = __this->get_oC10Level_36();
		__this->set_oC10Level_36(((float)il2cpp_codegen_add((float)L_5, (float)(1.0f))));
	}

IL_0045:
	{
		return;
	}
}
// System.Void ScoreTracking::OnClick100()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTracking_OnClick100_m2F728015C6B1E89B93B6E928401B42F13788F7CD (ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_totalscore_7();
		float L_1 = __this->get_onClick100Cost_27();
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0045;
		}
	}
	{
		float L_2 = __this->get_addMClicks_9();
		__this->set_addMClicks_9(((float)il2cpp_codegen_add((float)L_2, (float)(100.0f))));
		float L_3 = __this->get_totalscore_7();
		float L_4 = __this->get_onClick100Cost_27();
		__this->set_totalscore_7(((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)));
		float L_5 = __this->get_oC100Level_37();
		__this->set_oC100Level_37(((float)il2cpp_codegen_add((float)L_5, (float)(1.0f))));
	}

IL_0045:
	{
		return;
	}
}
// System.Void ScoreTracking::IClick1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTracking_IClick1_m24C4571C494C5F6B0DFEAD0156BE223A301AEC6C (ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_totalscore_7();
		float L_1 = __this->get_iClick1Cost_28();
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0045;
		}
	}
	{
		float L_2 = __this->get_addIClicks_10();
		__this->set_addIClicks_10(((float)il2cpp_codegen_add((float)L_2, (float)(1.0f))));
		float L_3 = __this->get_totalscore_7();
		float L_4 = __this->get_iClick1Cost_28();
		__this->set_totalscore_7(((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)));
		float L_5 = __this->get_iC1Level_38();
		__this->set_iC1Level_38(((float)il2cpp_codegen_add((float)L_5, (float)(1.0f))));
	}

IL_0045:
	{
		return;
	}
}
// System.Void ScoreTracking::IClick5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTracking_IClick5_m89CF2F1A36B605721A5E76BE923BE486097A0BEC (ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_totalscore_7();
		float L_1 = __this->get_iClick5Cost_29();
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0045;
		}
	}
	{
		float L_2 = __this->get_addIClicks_10();
		__this->set_addIClicks_10(((float)il2cpp_codegen_add((float)L_2, (float)(5.0f))));
		float L_3 = __this->get_totalscore_7();
		float L_4 = __this->get_iClick5Cost_29();
		__this->set_totalscore_7(((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)));
		float L_5 = __this->get_iC5Level_39();
		__this->set_iC5Level_39(((float)il2cpp_codegen_add((float)L_5, (float)(1.0f))));
	}

IL_0045:
	{
		return;
	}
}
// System.Void ScoreTracking::IClicks10()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTracking_IClicks10_m6EBFCE9D382545E0570B60F0607BACF19C21E233 (ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_totalscore_7();
		float L_1 = __this->get_iClick10Cost_30();
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0045;
		}
	}
	{
		float L_2 = __this->get_addIClicks_10();
		__this->set_addIClicks_10(((float)il2cpp_codegen_add((float)L_2, (float)(10.0f))));
		float L_3 = __this->get_totalscore_7();
		float L_4 = __this->get_iClick10Cost_30();
		__this->set_totalscore_7(((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)));
		float L_5 = __this->get_iC10Level_40();
		__this->set_iC10Level_40(((float)il2cpp_codegen_add((float)L_5, (float)(1.0f))));
	}

IL_0045:
	{
		return;
	}
}
// System.Void ScoreTracking::IClicks100()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTracking_IClicks100_m1F079D5B22EA9FEF03D8FD2092217E55C7AF303F (ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_totalscore_7();
		float L_1 = __this->get_iClick100Cost_31();
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0045;
		}
	}
	{
		float L_2 = __this->get_addIClicks_10();
		__this->set_addIClicks_10(((float)il2cpp_codegen_add((float)L_2, (float)(100.0f))));
		float L_3 = __this->get_totalscore_7();
		float L_4 = __this->get_iClick100Cost_31();
		__this->set_totalscore_7(((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)));
		float L_5 = __this->get_iC100Level_41();
		__this->set_iC100Level_41(((float)il2cpp_codegen_add((float)L_5, (float)(1.0f))));
	}

IL_0045:
	{
		return;
	}
}
// System.Void ScoreTracking::IClicks500()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTracking_IClicks500_m286660C86B199A86C8F1D5D95ABC97B887C1A460 (ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_totalscore_7();
		float L_1 = __this->get_iClick500Cost_32();
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0045;
		}
	}
	{
		float L_2 = __this->get_addIClicks_10();
		__this->set_addIClicks_10(((float)il2cpp_codegen_add((float)L_2, (float)(500.0f))));
		float L_3 = __this->get_totalscore_7();
		float L_4 = __this->get_iClick500Cost_32();
		__this->set_totalscore_7(((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)));
		float L_5 = __this->get_iC500Level_42();
		__this->set_iC500Level_42(((float)il2cpp_codegen_add((float)L_5, (float)(1.0f))));
	}

IL_0045:
	{
		return;
	}
}
// System.Void ScoreTracking::IClicks1000()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTracking_IClicks1000_m1495B5E5CA0956BF30CBD3E7158F091770AB3E9A (ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_totalscore_7();
		float L_1 = __this->get_iClick1000Cost_33();
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0045;
		}
	}
	{
		float L_2 = __this->get_addIClicks_10();
		__this->set_addIClicks_10(((float)il2cpp_codegen_add((float)L_2, (float)(1000.0f))));
		float L_3 = __this->get_totalscore_7();
		float L_4 = __this->get_iClick1000Cost_33();
		__this->set_totalscore_7(((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)));
		float L_5 = __this->get_iC1000Level_43();
		__this->set_iC1000Level_43(((float)il2cpp_codegen_add((float)L_5, (float)(1.0f))));
	}

IL_0045:
	{
		return;
	}
}
// System.Void ScoreTracking::ReSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTracking_ReSet_m398D4BEDA4FA1AFEECFE6078CFD589D99658ED1A (ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD * __this, const RuntimeMethod* method)
{
	{
		__this->set_addIClicks_10((0.0f));
		__this->set_addMClicks_9((1.0f));
		__this->set_oC1Level_34((1.0f));
		__this->set_oC5Level_35((0.0f));
		__this->set_oC10Level_36((0.0f));
		__this->set_oC100Level_37((0.0f));
		__this->set_iC1Level_38((0.0f));
		__this->set_iC5Level_39((0.0f));
		__this->set_iC10Level_40((0.0f));
		__this->set_iC100Level_41((0.0f));
		__this->set_iC500Level_42((0.0f));
		__this->set_iC1000Level_43((0.0f));
		__this->set_totalscore_7((0.0f));
		return;
	}
}
// System.Void ScoreTracking::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTracking_Update_mD001D3EE15BD0D3ADFD8C2632FFBE6C1BE793E5F (ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreTracking_Update_mD001D3EE15BD0D3ADFD8C2632FFBE6C1BE793E5F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_addMClicks_9();
		__this->set_manualClicks_11(L_0);
		float L_1 = __this->get_timer_13();
		float L_2 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_timer_13(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		float L_3 = __this->get_addIClicks_10();
		__this->set_idleClicksPerSec_12(((float)il2cpp_codegen_multiply((float)L_3, (float)(1.0f))));
		float L_4 = __this->get_timer_13();
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		float L_5 = __this->get_totalscore_7();
		float L_6 = __this->get_idleClicksPerSec_12();
		__this->set_totalscore_7(((float)il2cpp_codegen_add((float)L_5, (float)L_6)));
		__this->set_timer_13((1.0f));
	}

IL_005b:
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_7 = __this->get_payableScore_4();
		float L_8 = __this->get_totalscore_7();
		float L_9 = L_8;
		RuntimeObject * L_10 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralF2B514B25684DE761EF0E0E4F386F3D5B3E68033, L_10, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_11);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_12 = __this->get_ClicksPerSecond_5();
		float L_13 = __this->get_idleClicksPerSec_12();
		float L_14 = L_13;
		RuntimeObject * L_15 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral78A96FAA2CB53CC4443DE9699871BBE0F12CF2C4, L_15, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_16);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_17 = __this->get_MClickPerClick_6();
		float L_18 = __this->get_totalMClicks_8();
		float L_19 = L_18;
		RuntimeObject * L_20 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralBFB19FE9EF3759175839E7AF4411B6DC4EFF0F10, L_20, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_21);
		float L_22 = __this->get_oC1Level_34();
		__this->set_onClick1Cost_24(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_22, (float)(5.0f))), (float)(5.0f))));
		float L_23 = __this->get_oC5Level_35();
		if ((!(((float)L_23) > ((float)(0.0f)))))
		{
			goto IL_00f8;
		}
	}
	{
		float L_24 = __this->get_oC5Level_35();
		__this->set_onClick5Cost_25(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_24, (float)(25.0f))), (float)(5.0f))));
	}

IL_00f8:
	{
		float L_25 = __this->get_oC10Level_36();
		if ((!(((float)L_25) > ((float)(0.0f)))))
		{
			goto IL_011d;
		}
	}
	{
		float L_26 = __this->get_oC10Level_36();
		__this->set_onClick10Cost_26(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_26, (float)(50.0f))), (float)(10.0f))));
	}

IL_011d:
	{
		float L_27 = __this->get_oC100Level_37();
		if ((!(((float)L_27) > ((float)(0.0f)))))
		{
			goto IL_0142;
		}
	}
	{
		float L_28 = __this->get_oC100Level_37();
		__this->set_onClick100Cost_27(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_28, (float)(100.0f))), (float)(10.0f))));
	}

IL_0142:
	{
		float L_29 = __this->get_iC1Level_38();
		if ((!(((float)L_29) > ((float)(0.0f)))))
		{
			goto IL_0167;
		}
	}
	{
		float L_30 = __this->get_iC1Level_38();
		__this->set_iClick1Cost_28(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_30, (float)(5.0f))), (float)(10.0f))));
	}

IL_0167:
	{
		float L_31 = __this->get_iC5Level_39();
		if ((!(((float)L_31) > ((float)(0.0f)))))
		{
			goto IL_018c;
		}
	}
	{
		float L_32 = __this->get_iC5Level_39();
		__this->set_iClick5Cost_29(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_32, (float)(10.0f))), (float)(10.0f))));
	}

IL_018c:
	{
		float L_33 = __this->get_iC10Level_40();
		if ((!(((float)L_33) > ((float)(0.0f)))))
		{
			goto IL_01b1;
		}
	}
	{
		float L_34 = __this->get_iC10Level_40();
		__this->set_iClick10Cost_30(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_34, (float)(20.0f))), (float)(10.0f))));
	}

IL_01b1:
	{
		float L_35 = __this->get_iC100Level_41();
		if ((!(((float)L_35) > ((float)(0.0f)))))
		{
			goto IL_01d6;
		}
	}
	{
		float L_36 = __this->get_iC100Level_41();
		__this->set_iClick100Cost_31(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_36, (float)(200.0f))), (float)(10.0f))));
	}

IL_01d6:
	{
		float L_37 = __this->get_iC500Level_42();
		if ((!(((float)L_37) > ((float)(0.0f)))))
		{
			goto IL_01fb;
		}
	}
	{
		float L_38 = __this->get_iC500Level_42();
		__this->set_iClick500Cost_32(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_38, (float)(500.0f))), (float)(10.0f))));
	}

IL_01fb:
	{
		float L_39 = __this->get_iC1000Level_43();
		if ((!(((float)L_39) > ((float)(0.0f)))))
		{
			goto IL_0220;
		}
	}
	{
		float L_40 = __this->get_iC1000Level_43();
		__this->set_iClick1000Cost_33(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_40, (float)(1000.0f))), (float)(10.0f))));
	}

IL_0220:
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_41 = __this->get_OnClick1Cost_14();
		float L_42 = __this->get_onClick1Cost_24();
		float L_43 = L_42;
		RuntimeObject * L_44 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_43);
		String_t* L_45 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, L_44, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_41, L_45);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_46 = __this->get_OnClick5Cost_15();
		float L_47 = __this->get_onClick5Cost_25();
		float L_48 = L_47;
		RuntimeObject * L_49 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_48);
		String_t* L_50 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, L_49, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_46, L_50);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_51 = __this->get_OnClick10Cost_16();
		float L_52 = __this->get_onClick10Cost_26();
		float L_53 = L_52;
		RuntimeObject * L_54 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_53);
		String_t* L_55 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, L_54, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_51, L_55);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_56 = __this->get_OnClick100Cost_17();
		float L_57 = __this->get_onClick100Cost_27();
		float L_58 = L_57;
		RuntimeObject * L_59 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_58);
		String_t* L_60 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, L_59, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_56, L_60);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_61 = __this->get_IClick1Cost_18();
		float L_62 = __this->get_iClick1Cost_28();
		float L_63 = L_62;
		RuntimeObject * L_64 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_63);
		String_t* L_65 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, L_64, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_61, L_65);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_66 = __this->get_IClick5Cost_19();
		float L_67 = __this->get_iClick5Cost_29();
		float L_68 = L_67;
		RuntimeObject * L_69 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_68);
		String_t* L_70 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, L_69, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_66, L_70);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_71 = __this->get_IClick10Cost_20();
		float L_72 = __this->get_iClick10Cost_30();
		float L_73 = L_72;
		RuntimeObject * L_74 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_73);
		String_t* L_75 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, L_74, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_71, L_75);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_76 = __this->get_IClick100Cost_21();
		float L_77 = __this->get_iClick100Cost_31();
		float L_78 = L_77;
		RuntimeObject * L_79 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_78);
		String_t* L_80 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, L_79, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_76, L_80);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_81 = __this->get_IClick500Cost_22();
		float L_82 = __this->get_iClick500Cost_32();
		float L_83 = L_82;
		RuntimeObject * L_84 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_83);
		String_t* L_85 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, L_84, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_81, L_85);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_86 = __this->get_IClick1000Cost_23();
		float L_87 = __this->get_iClick1000Cost_33();
		float L_88 = L_87;
		RuntimeObject * L_89 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_88);
		String_t* L_90 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, L_89, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_86, L_90);
		return;
	}
}
// System.Void ScoreTracking::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTracking__ctor_mFE5592846DA12AC89327AD4D8A40992D45E96D41 (ScoreTracking_t8AC4DE81A93FD39C60324FC9A3EF3A51F4CBE1AD * __this, const RuntimeMethod* method)
{
	{
		__this->set_timer_13((1.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

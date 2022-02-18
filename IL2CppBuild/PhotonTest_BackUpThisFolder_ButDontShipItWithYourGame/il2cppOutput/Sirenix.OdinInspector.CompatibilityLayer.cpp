#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Type,Sirenix.Serialization.Serializer>
struct Dictionary_2_t947E84BF0185C77E5BBCB61281FD0C68C23E05FF;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506;
// Sirenix.Serialization.MinimalBaseFormatter`1<UnityEngine.Vector2Int>
struct MinimalBaseFormatter_1_t54C64334B9DAB277DFFD91EB1B1A5DDF431CE997;
// Sirenix.Serialization.MinimalBaseFormatter`1<UnityEngine.Vector3Int>
struct MinimalBaseFormatter_1_t8EF7C385DA60815C0983972A878C45D87DD99D23;
// Sirenix.Serialization.Serializer`1<System.Int32>
struct Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2;
// Sirenix.Serialization.IDataReader
struct IDataReader_t2CA67678CEF3177FAD3CF602BA7E27B12BE7E570;
// Sirenix.Serialization.IDataWriter
struct IDataWriter_tA8A5EC9E9A5165A9C4EA77D7B79383BED8C02D14;
// Sirenix.Serialization.Vector2IntFormatter
struct Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B;
// Sirenix.Serialization.Vector3IntFormatter
struct Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B;

IL2CPP_EXTERN_C RuntimeClass* MinimalBaseFormatter_1_t54C64334B9DAB277DFFD91EB1B1A5DDF431CE997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MinimalBaseFormatter_1_t8EF7C385DA60815C0983972A878C45D87DD99D23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_tFF10388CC7516340184D5C0F587943EB66568085_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinimalBaseFormatter_1__ctor_mDF654F27209327980FDE0633D23588967DD3C9D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinimalBaseFormatter_1__ctor_mFD7F4C2F7B98D8BCD1F4F8FA38A8344A032A90B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Serializer_1_WriteValue_mD9B60B7A38F6BA57C75D03233367098CF078FEF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Serializer_Get_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mA659B7800D1E88C021CAA860D29AF1F9EA5E9165_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB63DAE1AD8A9AED3DDA5908767F8D6956A06931A 
{
public:

public:
};


// System.Object


// Sirenix.Serialization.MinimalBaseFormatter`1<UnityEngine.Vector2Int>
struct MinimalBaseFormatter_1_t54C64334B9DAB277DFFD91EB1B1A5DDF431CE997  : public RuntimeObject
{
public:

public:
};

struct MinimalBaseFormatter_1_t54C64334B9DAB277DFFD91EB1B1A5DDF431CE997_StaticFields
{
public:
	// System.Boolean Sirenix.Serialization.MinimalBaseFormatter`1::IsValueType
	bool ___IsValueType_0;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(MinimalBaseFormatter_1_t54C64334B9DAB277DFFD91EB1B1A5DDF431CE997_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}
};


// Sirenix.Serialization.MinimalBaseFormatter`1<UnityEngine.Vector3Int>
struct MinimalBaseFormatter_1_t8EF7C385DA60815C0983972A878C45D87DD99D23  : public RuntimeObject
{
public:

public:
};

struct MinimalBaseFormatter_1_t8EF7C385DA60815C0983972A878C45D87DD99D23_StaticFields
{
public:
	// System.Boolean Sirenix.Serialization.MinimalBaseFormatter`1::IsValueType
	bool ___IsValueType_0;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(MinimalBaseFormatter_1_t8EF7C385DA60815C0983972A878C45D87DD99D23_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Sirenix.Serialization.Serializer
struct Serializer_tFF10388CC7516340184D5C0F587943EB66568085  : public RuntimeObject
{
public:

public:
};

struct Serializer_tFF10388CC7516340184D5C0F587943EB66568085_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type> Sirenix.Serialization.Serializer::PrimitiveReaderWriterTypes
	Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 * ___PrimitiveReaderWriterTypes_0;
	// System.Object Sirenix.Serialization.Serializer::LOCK
	RuntimeObject * ___LOCK_1;
	// System.Collections.Generic.Dictionary`2<System.Type,Sirenix.Serialization.Serializer> Sirenix.Serialization.Serializer::ReaderWriterCache
	Dictionary_2_t947E84BF0185C77E5BBCB61281FD0C68C23E05FF * ___ReaderWriterCache_2;

public:
	inline static int32_t get_offset_of_PrimitiveReaderWriterTypes_0() { return static_cast<int32_t>(offsetof(Serializer_tFF10388CC7516340184D5C0F587943EB66568085_StaticFields, ___PrimitiveReaderWriterTypes_0)); }
	inline Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 * get_PrimitiveReaderWriterTypes_0() const { return ___PrimitiveReaderWriterTypes_0; }
	inline Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 ** get_address_of_PrimitiveReaderWriterTypes_0() { return &___PrimitiveReaderWriterTypes_0; }
	inline void set_PrimitiveReaderWriterTypes_0(Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 * value)
	{
		___PrimitiveReaderWriterTypes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrimitiveReaderWriterTypes_0), (void*)value);
	}

	inline static int32_t get_offset_of_LOCK_1() { return static_cast<int32_t>(offsetof(Serializer_tFF10388CC7516340184D5C0F587943EB66568085_StaticFields, ___LOCK_1)); }
	inline RuntimeObject * get_LOCK_1() const { return ___LOCK_1; }
	inline RuntimeObject ** get_address_of_LOCK_1() { return &___LOCK_1; }
	inline void set_LOCK_1(RuntimeObject * value)
	{
		___LOCK_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LOCK_1), (void*)value);
	}

	inline static int32_t get_offset_of_ReaderWriterCache_2() { return static_cast<int32_t>(offsetof(Serializer_tFF10388CC7516340184D5C0F587943EB66568085_StaticFields, ___ReaderWriterCache_2)); }
	inline Dictionary_2_t947E84BF0185C77E5BBCB61281FD0C68C23E05FF * get_ReaderWriterCache_2() const { return ___ReaderWriterCache_2; }
	inline Dictionary_2_t947E84BF0185C77E5BBCB61281FD0C68C23E05FF ** get_address_of_ReaderWriterCache_2() { return &___ReaderWriterCache_2; }
	inline void set_ReaderWriterCache_2(Dictionary_2_t947E84BF0185C77E5BBCB61281FD0C68C23E05FF * value)
	{
		___ReaderWriterCache_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReaderWriterCache_2), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Sirenix.Serialization.Serializer`1<System.Int32>
struct Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2  : public Serializer_tFF10388CC7516340184D5C0F587943EB66568085
{
public:

public:
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// Sirenix.Serialization.Vector2IntFormatter
struct Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B  : public MinimalBaseFormatter_1_t54C64334B9DAB277DFFD91EB1B1A5DDF431CE997
{
public:

public:
};

struct Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B_StaticFields
{
public:
	// Sirenix.Serialization.Serializer`1<System.Int32> Sirenix.Serialization.Vector2IntFormatter::Serializer
	Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * ___Serializer_1;

public:
	inline static int32_t get_offset_of_Serializer_1() { return static_cast<int32_t>(offsetof(Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B_StaticFields, ___Serializer_1)); }
	inline Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * get_Serializer_1() const { return ___Serializer_1; }
	inline Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 ** get_address_of_Serializer_1() { return &___Serializer_1; }
	inline void set_Serializer_1(Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * value)
	{
		___Serializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Serializer_1), (void*)value);
	}
};


// UnityEngine.Vector3Int
struct Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA 
{
public:
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}

	inline static int32_t get_offset_of_m_Z_2() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Z_2)); }
	inline int32_t get_m_Z_2() const { return ___m_Z_2; }
	inline int32_t* get_address_of_m_Z_2() { return &___m_Z_2; }
	inline void set_m_Z_2(int32_t value)
	{
		___m_Z_2 = value;
	}
};

struct Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields
{
public:
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Back_10;

public:
	inline static int32_t get_offset_of_s_Zero_3() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Zero_3)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Zero_3() const { return ___s_Zero_3; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Zero_3() { return &___s_Zero_3; }
	inline void set_s_Zero_3(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Zero_3 = value;
	}

	inline static int32_t get_offset_of_s_One_4() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_One_4)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_One_4() const { return ___s_One_4; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_One_4() { return &___s_One_4; }
	inline void set_s_One_4(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_One_4 = value;
	}

	inline static int32_t get_offset_of_s_Up_5() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Up_5)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Up_5() const { return ___s_Up_5; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Up_5() { return &___s_Up_5; }
	inline void set_s_Up_5(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Up_5 = value;
	}

	inline static int32_t get_offset_of_s_Down_6() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Down_6)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Down_6() const { return ___s_Down_6; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Down_6() { return &___s_Down_6; }
	inline void set_s_Down_6(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Down_6 = value;
	}

	inline static int32_t get_offset_of_s_Left_7() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Left_7)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Left_7() const { return ___s_Left_7; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Left_7() { return &___s_Left_7; }
	inline void set_s_Left_7(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Left_7 = value;
	}

	inline static int32_t get_offset_of_s_Right_8() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Right_8)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Right_8() const { return ___s_Right_8; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Right_8() { return &___s_Right_8; }
	inline void set_s_Right_8(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Right_8 = value;
	}

	inline static int32_t get_offset_of_s_Forward_9() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Forward_9)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Forward_9() const { return ___s_Forward_9; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Forward_9() { return &___s_Forward_9; }
	inline void set_s_Forward_9(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Forward_9 = value;
	}

	inline static int32_t get_offset_of_s_Back_10() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Back_10)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Back_10() const { return ___s_Back_10; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Back_10() { return &___s_Back_10; }
	inline void set_s_Back_10(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Back_10 = value;
	}
};


// Sirenix.Serialization.Vector3IntFormatter
struct Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B  : public MinimalBaseFormatter_1_t8EF7C385DA60815C0983972A878C45D87DD99D23
{
public:

public:
};

struct Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_StaticFields
{
public:
	// Sirenix.Serialization.Serializer`1<System.Int32> Sirenix.Serialization.Vector3IntFormatter::Serializer
	Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * ___Serializer_1;

public:
	inline static int32_t get_offset_of_Serializer_1() { return static_cast<int32_t>(offsetof(Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_StaticFields, ___Serializer_1)); }
	inline Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * get_Serializer_1() const { return ___Serializer_1; }
	inline Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 ** get_address_of_Serializer_1() { return &___Serializer_1; }
	inline void set_Serializer_1(Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * value)
	{
		___Serializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Serializer_1), (void*)value);
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Sirenix.Serialization.Serializer`1<System.Int32>::WriteValue(!0,Sirenix.Serialization.IDataWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_1_WriteValue_mD9B60B7A38F6BA57C75D03233367098CF078FEF1_gshared (Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * __this, int32_t ___value0, RuntimeObject* ___writer1, const RuntimeMethod* method);
// System.Void Sirenix.Serialization.MinimalBaseFormatter`1<UnityEngine.Vector2Int>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinimalBaseFormatter_1__ctor_mFD7F4C2F7B98D8BCD1F4F8FA38A8344A032A90B0_gshared (MinimalBaseFormatter_1_t54C64334B9DAB277DFFD91EB1B1A5DDF431CE997 * __this, const RuntimeMethod* method);
// Sirenix.Serialization.Serializer`1<!!0> Sirenix.Serialization.Serializer::Get<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * Serializer_Get_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mA659B7800D1E88C021CAA860D29AF1F9EA5E9165_gshared (const RuntimeMethod* method);
// System.Void Sirenix.Serialization.MinimalBaseFormatter`1<UnityEngine.Vector3Int>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinimalBaseFormatter_1__ctor_mDF654F27209327980FDE0633D23588967DD3C9D3_gshared (MinimalBaseFormatter_1_t8EF7C385DA60815C0983972A878C45D87DD99D23 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Vector2Int::set_x(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m58F3B1895453A0A4BC964CA331D56B7C3D873B7C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2Int::set_y(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_m55A40AE7AF833E31D968E0C515A5C773F251C21A_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Void Sirenix.Serialization.Serializer`1<System.Int32>::WriteValue(!0,Sirenix.Serialization.IDataWriter)
inline void Serializer_1_WriteValue_mD9B60B7A38F6BA57C75D03233367098CF078FEF1 (Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * __this, int32_t ___value0, RuntimeObject* ___writer1, const RuntimeMethod* method)
{
	((  void (*) (Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 *, int32_t, RuntimeObject*, const RuntimeMethod*))Serializer_1_WriteValue_mD9B60B7A38F6BA57C75D03233367098CF078FEF1_gshared)(__this, ___value0, ___writer1, method);
}
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Void Sirenix.Serialization.MinimalBaseFormatter`1<UnityEngine.Vector2Int>::.ctor()
inline void MinimalBaseFormatter_1__ctor_mFD7F4C2F7B98D8BCD1F4F8FA38A8344A032A90B0 (MinimalBaseFormatter_1_t54C64334B9DAB277DFFD91EB1B1A5DDF431CE997 * __this, const RuntimeMethod* method)
{
	((  void (*) (MinimalBaseFormatter_1_t54C64334B9DAB277DFFD91EB1B1A5DDF431CE997 *, const RuntimeMethod*))MinimalBaseFormatter_1__ctor_mFD7F4C2F7B98D8BCD1F4F8FA38A8344A032A90B0_gshared)(__this, method);
}
// Sirenix.Serialization.Serializer`1<!!0> Sirenix.Serialization.Serializer::Get<System.Int32>()
inline Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * Serializer_Get_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mA659B7800D1E88C021CAA860D29AF1F9EA5E9165 (const RuntimeMethod* method)
{
	return ((  Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * (*) (const RuntimeMethod*))Serializer_Get_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mA659B7800D1E88C021CAA860D29AF1F9EA5E9165_gshared)(method);
}
// System.Void UnityEngine.Vector3Int::set_x(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Int_set_x_m9C1C34588D4C8256BBA51A561D9638F3BDF6162C (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3Int::set_y(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Int_set_y_m313A1298D787BC81171146C71FC882F6AEA9E111 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3Int::set_z(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Int_set_z_mD4EF095FC12E4CA9D16B0AE52DCB646BF6E11D18 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.Void Sirenix.Serialization.MinimalBaseFormatter`1<UnityEngine.Vector3Int>::.ctor()
inline void MinimalBaseFormatter_1__ctor_mDF654F27209327980FDE0633D23588967DD3C9D3 (MinimalBaseFormatter_1_t8EF7C385DA60815C0983972A878C45D87DD99D23 * __this, const RuntimeMethod* method)
{
	((  void (*) (MinimalBaseFormatter_1_t8EF7C385DA60815C0983972A878C45D87DD99D23 *, const RuntimeMethod*))MinimalBaseFormatter_1__ctor_mDF654F27209327980FDE0633D23588967DD3C9D3_gshared)(__this, method);
}
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
// System.Void Sirenix.Serialization.Vector2IntFormatter::Read(UnityEngine.Vector2Int&,Sirenix.Serialization.IDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2IntFormatter_Read_m6AF701C3535E1CF7B4FA36AA8D3A576196108E5F (Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * ___value0, RuntimeObject* ___reader1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// value.x = Vector2IntFormatter.Serializer.ReadValue(reader);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B_il2cpp_TypeInfo_var);
		Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * L_1 = ((Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B_StaticFields*)il2cpp_codegen_static_fields_for(Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B_il2cpp_TypeInfo_var))->get_Serializer_1();
		RuntimeObject* L_2 = ___reader1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(6 /* !0 Sirenix.Serialization.Serializer`1<System.Int32>::ReadValue(Sirenix.Serialization.IDataReader) */, L_1, L_2);
		Vector2Int_set_x_m58F3B1895453A0A4BC964CA331D56B7C3D873B7C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_0, L_3, /*hidden argument*/NULL);
		// value.y = Vector2IntFormatter.Serializer.ReadValue(reader);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_4 = ___value0;
		Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * L_5 = ((Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B_StaticFields*)il2cpp_codegen_static_fields_for(Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B_il2cpp_TypeInfo_var))->get_Serializer_1();
		RuntimeObject* L_6 = ___reader1;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(6 /* !0 Sirenix.Serialization.Serializer`1<System.Int32>::ReadValue(Sirenix.Serialization.IDataReader) */, L_5, L_6);
		Vector2Int_set_y_m55A40AE7AF833E31D968E0C515A5C773F251C21A_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_4, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Sirenix.Serialization.Vector2IntFormatter::Write(UnityEngine.Vector2Int&,Sirenix.Serialization.IDataWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2IntFormatter_Write_m20045AE22A0BF701A803AA11187140AE4F12109C (Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * ___value0, RuntimeObject* ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_1_WriteValue_mD9B60B7A38F6BA57C75D03233367098CF078FEF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector2IntFormatter.Serializer.WriteValue(value.x, writer);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B_il2cpp_TypeInfo_var);
		Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * L_0 = ((Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B_StaticFields*)il2cpp_codegen_static_fields_for(Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B_il2cpp_TypeInfo_var))->get_Serializer_1();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_1 = ___value0;
		int32_t L_2;
		L_2 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_3 = ___writer1;
		NullCheck(L_0);
		Serializer_1_WriteValue_mD9B60B7A38F6BA57C75D03233367098CF078FEF1(L_0, L_2, L_3, /*hidden argument*/Serializer_1_WriteValue_mD9B60B7A38F6BA57C75D03233367098CF078FEF1_RuntimeMethod_var);
		// Vector2IntFormatter.Serializer.WriteValue(value.y, writer);
		Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * L_4 = ((Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B_StaticFields*)il2cpp_codegen_static_fields_for(Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B_il2cpp_TypeInfo_var))->get_Serializer_1();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_5 = ___value0;
		int32_t L_6;
		L_6 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_5, /*hidden argument*/NULL);
		RuntimeObject* L_7 = ___writer1;
		NullCheck(L_4);
		Serializer_1_WriteValue_mD9B60B7A38F6BA57C75D03233367098CF078FEF1(L_4, L_6, L_7, /*hidden argument*/Serializer_1_WriteValue_mD9B60B7A38F6BA57C75D03233367098CF078FEF1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Sirenix.Serialization.Vector2IntFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2IntFormatter__ctor_m010B75B624A875C343F739CC2ED2527BD11A3FE2 (Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimalBaseFormatter_1__ctor_mFD7F4C2F7B98D8BCD1F4F8FA38A8344A032A90B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimalBaseFormatter_1_t54C64334B9DAB277DFFD91EB1B1A5DDF431CE997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MinimalBaseFormatter_1_t54C64334B9DAB277DFFD91EB1B1A5DDF431CE997_il2cpp_TypeInfo_var);
		MinimalBaseFormatter_1__ctor_mFD7F4C2F7B98D8BCD1F4F8FA38A8344A032A90B0(__this, /*hidden argument*/MinimalBaseFormatter_1__ctor_mFD7F4C2F7B98D8BCD1F4F8FA38A8344A032A90B0_RuntimeMethod_var);
		return;
	}
}
// System.Void Sirenix.Serialization.Vector2IntFormatter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2IntFormatter__cctor_m3CE7E86F8DC9E4EC407A09F406A58F48FF567CA1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_Get_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mA659B7800D1E88C021CAA860D29AF1F9EA5E9165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_tFF10388CC7516340184D5C0F587943EB66568085_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Serializer<int> Serializer = Serialization.Serializer.Get<int>();
		IL2CPP_RUNTIME_CLASS_INIT(Serializer_tFF10388CC7516340184D5C0F587943EB66568085_il2cpp_TypeInfo_var);
		Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * L_0;
		L_0 = Serializer_Get_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mA659B7800D1E88C021CAA860D29AF1F9EA5E9165(/*hidden argument*/Serializer_Get_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mA659B7800D1E88C021CAA860D29AF1F9EA5E9165_RuntimeMethod_var);
		((Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B_StaticFields*)il2cpp_codegen_static_fields_for(Vector2IntFormatter_t1271CB47C6C43731D042A5AD4AFA57991A853A3B_il2cpp_TypeInfo_var))->set_Serializer_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.Serialization.Vector3IntFormatter::Read(UnityEngine.Vector3Int&,Sirenix.Serialization.IDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntFormatter_Read_mFCB5C92157F4828B0F4EFAB29C0D0369B91AE128 (Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * ___value0, RuntimeObject* ___reader1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// value.x = Vector3IntFormatter.Serializer.ReadValue(reader);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_il2cpp_TypeInfo_var);
		Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * L_1 = ((Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_il2cpp_TypeInfo_var))->get_Serializer_1();
		RuntimeObject* L_2 = ___reader1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(6 /* !0 Sirenix.Serialization.Serializer`1<System.Int32>::ReadValue(Sirenix.Serialization.IDataReader) */, L_1, L_2);
		Vector3Int_set_x_m9C1C34588D4C8256BBA51A561D9638F3BDF6162C((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_0, L_3, /*hidden argument*/NULL);
		// value.y = Vector3IntFormatter.Serializer.ReadValue(reader);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_4 = ___value0;
		Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * L_5 = ((Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_il2cpp_TypeInfo_var))->get_Serializer_1();
		RuntimeObject* L_6 = ___reader1;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(6 /* !0 Sirenix.Serialization.Serializer`1<System.Int32>::ReadValue(Sirenix.Serialization.IDataReader) */, L_5, L_6);
		Vector3Int_set_y_m313A1298D787BC81171146C71FC882F6AEA9E111((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_4, L_7, /*hidden argument*/NULL);
		// value.z = Vector3IntFormatter.Serializer.ReadValue(reader);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_8 = ___value0;
		Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * L_9 = ((Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_il2cpp_TypeInfo_var))->get_Serializer_1();
		RuntimeObject* L_10 = ___reader1;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(6 /* !0 Sirenix.Serialization.Serializer`1<System.Int32>::ReadValue(Sirenix.Serialization.IDataReader) */, L_9, L_10);
		Vector3Int_set_z_mD4EF095FC12E4CA9D16B0AE52DCB646BF6E11D18((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_8, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Sirenix.Serialization.Vector3IntFormatter::Write(UnityEngine.Vector3Int&,Sirenix.Serialization.IDataWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntFormatter_Write_mCBADA0EDA6A113D44EC9A5B457CD01279D5B5D8A (Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * ___value0, RuntimeObject* ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_1_WriteValue_mD9B60B7A38F6BA57C75D03233367098CF078FEF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector3IntFormatter.Serializer.WriteValue(value.x, writer);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_il2cpp_TypeInfo_var);
		Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * L_0 = ((Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_il2cpp_TypeInfo_var))->get_Serializer_1();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_1 = ___value0;
		int32_t L_2;
		L_2 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_3 = ___writer1;
		NullCheck(L_0);
		Serializer_1_WriteValue_mD9B60B7A38F6BA57C75D03233367098CF078FEF1(L_0, L_2, L_3, /*hidden argument*/Serializer_1_WriteValue_mD9B60B7A38F6BA57C75D03233367098CF078FEF1_RuntimeMethod_var);
		// Vector3IntFormatter.Serializer.WriteValue(value.y, writer);
		Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * L_4 = ((Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_il2cpp_TypeInfo_var))->get_Serializer_1();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_5 = ___value0;
		int32_t L_6;
		L_6 = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_5, /*hidden argument*/NULL);
		RuntimeObject* L_7 = ___writer1;
		NullCheck(L_4);
		Serializer_1_WriteValue_mD9B60B7A38F6BA57C75D03233367098CF078FEF1(L_4, L_6, L_7, /*hidden argument*/Serializer_1_WriteValue_mD9B60B7A38F6BA57C75D03233367098CF078FEF1_RuntimeMethod_var);
		// Vector3IntFormatter.Serializer.WriteValue(value.z, writer);
		Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * L_8 = ((Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_il2cpp_TypeInfo_var))->get_Serializer_1();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_9 = ___value0;
		int32_t L_10;
		L_10 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_9, /*hidden argument*/NULL);
		RuntimeObject* L_11 = ___writer1;
		NullCheck(L_8);
		Serializer_1_WriteValue_mD9B60B7A38F6BA57C75D03233367098CF078FEF1(L_8, L_10, L_11, /*hidden argument*/Serializer_1_WriteValue_mD9B60B7A38F6BA57C75D03233367098CF078FEF1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Sirenix.Serialization.Vector3IntFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntFormatter__ctor_mADE35180D9A59C48542B1C84A6E426ECDCA223AA (Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimalBaseFormatter_1__ctor_mDF654F27209327980FDE0633D23588967DD3C9D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimalBaseFormatter_1_t8EF7C385DA60815C0983972A878C45D87DD99D23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MinimalBaseFormatter_1_t8EF7C385DA60815C0983972A878C45D87DD99D23_il2cpp_TypeInfo_var);
		MinimalBaseFormatter_1__ctor_mDF654F27209327980FDE0633D23588967DD3C9D3(__this, /*hidden argument*/MinimalBaseFormatter_1__ctor_mDF654F27209327980FDE0633D23588967DD3C9D3_RuntimeMethod_var);
		return;
	}
}
// System.Void Sirenix.Serialization.Vector3IntFormatter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntFormatter__cctor_m9C6D2A3E09FCA21B0EB4ACC452D45806B8DFF4C4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_Get_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mA659B7800D1E88C021CAA860D29AF1F9EA5E9165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_tFF10388CC7516340184D5C0F587943EB66568085_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Serializer<int> Serializer = Serialization.Serializer.Get<int>();
		IL2CPP_RUNTIME_CLASS_INIT(Serializer_tFF10388CC7516340184D5C0F587943EB66568085_il2cpp_TypeInfo_var);
		Serializer_1_tB0F0BEEF35210CADB016BD3CF6333216529D5AE2 * L_0;
		L_0 = Serializer_Get_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mA659B7800D1E88C021CAA860D29AF1F9EA5E9165(/*hidden argument*/Serializer_Get_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mA659B7800D1E88C021CAA860D29AF1F9EA5E9165_RuntimeMethod_var);
		((Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntFormatter_t0802D72311BA780E0F58B0AB9A2B60A01FB5E38B_il2cpp_TypeInfo_var))->set_Serializer_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m58F3B1895453A0A4BC964CA331D56B7C3D873B7C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_X_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_m55A40AE7AF833E31D968E0C515A5C773F251C21A_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Y_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_X_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Y_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}

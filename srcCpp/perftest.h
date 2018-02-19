

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from perftest.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef perftest_1283481695_h
#define perftest_1283481695_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

static const DDS_Long MAX_SYNCHRONOUS_SIZE= 63000;
static const DDS_Long MAX_BOUNDED_SEQ_SIZE= 63000;
static const DDS_Long MAX_PERFTEST_SAMPLE_SIZE= 2147483128;
static const DDS_Long MAX_CFT_VALUE= 65535;
static const DDS_Long KEY_SIZE= 4;
extern "C" {

    extern const char *TestData_tTYPENAME;

}

struct TestData_tSeq;
#ifndef NDDS_STANDALONE_TYPE
class TestData_tTypeSupport;
class TestData_tDataWriter;
class TestData_tDataReader;
#endif

class TestData_t 
{
  public:
    typedef struct TestData_tSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef TestData_tTypeSupport TypeSupport;
    typedef TestData_tDataWriter DataWriter;
    typedef TestData_tDataReader DataReader;
    #endif

    DDS_Octet   key [(KEY_SIZE)];
    DDS_Long   entity_id ;
    DDS_UnsignedLong   seq_num ;
    DDS_Long   timestamp_sec ;
    DDS_UnsignedLong   timestamp_usec ;
    DDS_Long   latency_ping ;
    DDS_OctetSeq  bin_data ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* TestData_t_get_typecode(void); /* Type code */

DDS_SEQUENCE(TestData_tSeq, TestData_t);

NDDSUSERDllExport
RTIBool TestData_t_initialize(
    TestData_t* self);

NDDSUSERDllExport
RTIBool TestData_t_initialize_ex(
    TestData_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool TestData_t_initialize_w_params(
    TestData_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void TestData_t_finalize(
    TestData_t* self);

NDDSUSERDllExport
void TestData_t_finalize_ex(
    TestData_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void TestData_t_finalize_w_params(
    TestData_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void TestData_t_finalize_optional_members(
    TestData_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool TestData_t_copy(
    TestData_t* dst,
    const TestData_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *TestDataKeyed_tTYPENAME;

}

struct TestDataKeyed_tSeq;
#ifndef NDDS_STANDALONE_TYPE
class TestDataKeyed_tTypeSupport;
class TestDataKeyed_tDataWriter;
class TestDataKeyed_tDataReader;
#endif

class TestDataKeyed_t 
{
  public:
    typedef struct TestDataKeyed_tSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef TestDataKeyed_tTypeSupport TypeSupport;
    typedef TestDataKeyed_tDataWriter DataWriter;
    typedef TestDataKeyed_tDataReader DataReader;
    #endif

    DDS_Octet   key [(KEY_SIZE)];
    DDS_Long   entity_id ;
    DDS_UnsignedLong   seq_num ;
    DDS_Long   timestamp_sec ;
    DDS_UnsignedLong   timestamp_usec ;
    DDS_Long   latency_ping ;
    DDS_OctetSeq  bin_data ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* TestDataKeyed_t_get_typecode(void); /* Type code */

DDS_SEQUENCE(TestDataKeyed_tSeq, TestDataKeyed_t);

NDDSUSERDllExport
RTIBool TestDataKeyed_t_initialize(
    TestDataKeyed_t* self);

NDDSUSERDllExport
RTIBool TestDataKeyed_t_initialize_ex(
    TestDataKeyed_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool TestDataKeyed_t_initialize_w_params(
    TestDataKeyed_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void TestDataKeyed_t_finalize(
    TestDataKeyed_t* self);

NDDSUSERDllExport
void TestDataKeyed_t_finalize_ex(
    TestDataKeyed_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void TestDataKeyed_t_finalize_w_params(
    TestDataKeyed_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void TestDataKeyed_t_finalize_optional_members(
    TestDataKeyed_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool TestDataKeyed_t_copy(
    TestDataKeyed_t* dst,
    const TestDataKeyed_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *TestDataLarge_tTYPENAME;

}

struct TestDataLarge_tSeq;
#ifndef NDDS_STANDALONE_TYPE
class TestDataLarge_tTypeSupport;
class TestDataLarge_tDataWriter;
class TestDataLarge_tDataReader;
#endif

class TestDataLarge_t 
{
  public:
    typedef struct TestDataLarge_tSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef TestDataLarge_tTypeSupport TypeSupport;
    typedef TestDataLarge_tDataWriter DataWriter;
    typedef TestDataLarge_tDataReader DataReader;
    #endif

    DDS_Octet   key [(KEY_SIZE)];
    DDS_Long   entity_id ;
    DDS_UnsignedLong   seq_num ;
    DDS_Long   timestamp_sec ;
    DDS_UnsignedLong   timestamp_usec ;
    DDS_Long   latency_ping ;
    DDS_OctetSeq  bin_data ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* TestDataLarge_t_get_typecode(void); /* Type code */

DDS_SEQUENCE(TestDataLarge_tSeq, TestDataLarge_t);

NDDSUSERDllExport
RTIBool TestDataLarge_t_initialize(
    TestDataLarge_t* self);

NDDSUSERDllExport
RTIBool TestDataLarge_t_initialize_ex(
    TestDataLarge_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool TestDataLarge_t_initialize_w_params(
    TestDataLarge_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void TestDataLarge_t_finalize(
    TestDataLarge_t* self);

NDDSUSERDllExport
void TestDataLarge_t_finalize_ex(
    TestDataLarge_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void TestDataLarge_t_finalize_w_params(
    TestDataLarge_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void TestDataLarge_t_finalize_optional_members(
    TestDataLarge_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool TestDataLarge_t_copy(
    TestDataLarge_t* dst,
    const TestDataLarge_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *TestDataKeyedLarge_tTYPENAME;

}

struct TestDataKeyedLarge_tSeq;
#ifndef NDDS_STANDALONE_TYPE
class TestDataKeyedLarge_tTypeSupport;
class TestDataKeyedLarge_tDataWriter;
class TestDataKeyedLarge_tDataReader;
#endif

class TestDataKeyedLarge_t 
{
  public:
    typedef struct TestDataKeyedLarge_tSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef TestDataKeyedLarge_tTypeSupport TypeSupport;
    typedef TestDataKeyedLarge_tDataWriter DataWriter;
    typedef TestDataKeyedLarge_tDataReader DataReader;
    #endif

    DDS_Octet   key [(KEY_SIZE)];
    DDS_Long   entity_id ;
    DDS_UnsignedLong   seq_num ;
    DDS_Long   timestamp_sec ;
    DDS_UnsignedLong   timestamp_usec ;
    DDS_Long   latency_ping ;
    DDS_OctetSeq  bin_data ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* TestDataKeyedLarge_t_get_typecode(void); /* Type code */

DDS_SEQUENCE(TestDataKeyedLarge_tSeq, TestDataKeyedLarge_t);

NDDSUSERDllExport
RTIBool TestDataKeyedLarge_t_initialize(
    TestDataKeyedLarge_t* self);

NDDSUSERDllExport
RTIBool TestDataKeyedLarge_t_initialize_ex(
    TestDataKeyedLarge_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool TestDataKeyedLarge_t_initialize_w_params(
    TestDataKeyedLarge_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void TestDataKeyedLarge_t_finalize(
    TestDataKeyedLarge_t* self);

NDDSUSERDllExport
void TestDataKeyedLarge_t_finalize_ex(
    TestDataKeyedLarge_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void TestDataKeyedLarge_t_finalize_w_params(
    TestDataKeyedLarge_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void TestDataKeyedLarge_t_finalize_optional_members(
    TestDataKeyedLarge_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool TestDataKeyedLarge_t_copy(
    TestDataKeyedLarge_t* dst,
    const TestDataKeyedLarge_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* perftest */


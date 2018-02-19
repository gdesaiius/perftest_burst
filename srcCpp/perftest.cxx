

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from perftest.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "perftest.h"

#include <new>

/* ========================================================================= */
const char *TestData_tTYPENAME = "TestData_t";

DDS_TypeCode* TestData_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode TestData_t_g_tc_key_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,(KEY_SIZE), NULL,NULL);
    static DDS_TypeCode TestData_t_g_tc_bin_data_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(((MAX_BOUNDED_SEQ_SIZE)),NULL);
    static DDS_TypeCode_Member TestData_t_g_tc_members[7]=
    {

        {
            (char *)"key",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"entity_id",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"seq_num",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"timestamp_sec",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"timestamp_usec",/* Member name */
            {
                4,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"latency_ping",/* Member name */
            {
                5,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"bin_data",/* Member name */
            {
                6,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode TestData_t_g_tc =
    {{
            DDS_TK_STRUCT| DDS_TK_FINAL_EXTENSIBILITY,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"TestData_t", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            7, /* Number of members */
            TestData_t_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for TestData_t*/

    if (is_initialized) {
        return &TestData_t_g_tc;
    }

    TestData_t_g_tc_key_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

    TestData_t_g_tc_bin_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    TestData_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& TestData_t_g_tc_key_array;
    TestData_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    TestData_t_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    TestData_t_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    TestData_t_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    TestData_t_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    TestData_t_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& TestData_t_g_tc_bin_data_sequence;

    is_initialized = RTI_TRUE;

    return &TestData_t_g_tc;
}

RTIBool TestData_t_initialize(
    TestData_t* sample) {
    return TestData_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool TestData_t_initialize_ex(
    TestData_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return TestData_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool TestData_t_initialize_w_params(
    TestData_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initArray(
        sample->key, ((KEY_SIZE)), RTI_CDR_OCTET_SIZE)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->entity_id)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initUnsignedLong(&sample->seq_num)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->timestamp_sec)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initUnsignedLong(&sample->timestamp_usec)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->latency_ping)) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        DDS_OctetSeq_initialize(&sample->bin_data  );
        DDS_OctetSeq_set_absolute_maximum(&sample->bin_data , ((MAX_BOUNDED_SEQ_SIZE)));
        if (!DDS_OctetSeq_set_maximum(&sample->bin_data , ((MAX_BOUNDED_SEQ_SIZE)))) {
            return RTI_FALSE;
        }
    } else { 
        DDS_OctetSeq_set_length(&sample->bin_data, 0);
    }
    return RTI_TRUE;
}

void TestData_t_finalize(
    TestData_t* sample)
{

    TestData_t_finalize_ex(sample,RTI_TRUE);
}

void TestData_t_finalize_ex(
    TestData_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    TestData_t_finalize_w_params(
        sample,&deallocParams);
}

void TestData_t_finalize_w_params(
    TestData_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    DDS_OctetSeq_finalize(&sample->bin_data);

}

void TestData_t_finalize_optional_members(
    TestData_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool TestData_t_copy(
    TestData_t* dst,
    const TestData_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyArray(
            dst->key ,src->key,((KEY_SIZE)), RTI_CDR_OCTET_SIZE)) {
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->entity_id, &src->entity_id)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyUnsignedLong (
            &dst->seq_num, &src->seq_num)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->timestamp_sec, &src->timestamp_sec)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyUnsignedLong (
            &dst->timestamp_usec, &src->timestamp_usec)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->latency_ping, &src->latency_ping)) { 
            return RTI_FALSE;
        }
        if (!DDS_OctetSeq_copy(&dst->bin_data ,
        &src->bin_data )) {
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'TestData_t' sequence class.
*/
#define T TestData_t
#define TSeq TestData_tSeq

#define T_initialize_w_params TestData_t_initialize_w_params

#define T_finalize_w_params   TestData_t_finalize_w_params
#define T_copy       TestData_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *TestDataKeyed_tTYPENAME = "TestDataKeyed_t";

DDS_TypeCode* TestDataKeyed_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode TestDataKeyed_t_g_tc_key_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,(KEY_SIZE), NULL,NULL);
    static DDS_TypeCode TestDataKeyed_t_g_tc_bin_data_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(((MAX_BOUNDED_SEQ_SIZE)),NULL);
    static DDS_TypeCode_Member TestDataKeyed_t_g_tc_members[7]=
    {

        {
            (char *)"key",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"entity_id",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"seq_num",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"timestamp_sec",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"timestamp_usec",/* Member name */
            {
                4,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"latency_ping",/* Member name */
            {
                5,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"bin_data",/* Member name */
            {
                6,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode TestDataKeyed_t_g_tc =
    {{
            DDS_TK_STRUCT| DDS_TK_FINAL_EXTENSIBILITY,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"TestDataKeyed_t", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            7, /* Number of members */
            TestDataKeyed_t_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for TestDataKeyed_t*/

    if (is_initialized) {
        return &TestDataKeyed_t_g_tc;
    }

    TestDataKeyed_t_g_tc_key_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

    TestDataKeyed_t_g_tc_bin_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    TestDataKeyed_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& TestDataKeyed_t_g_tc_key_array;
    TestDataKeyed_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    TestDataKeyed_t_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    TestDataKeyed_t_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    TestDataKeyed_t_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    TestDataKeyed_t_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    TestDataKeyed_t_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& TestDataKeyed_t_g_tc_bin_data_sequence;

    is_initialized = RTI_TRUE;

    return &TestDataKeyed_t_g_tc;
}

RTIBool TestDataKeyed_t_initialize(
    TestDataKeyed_t* sample) {
    return TestDataKeyed_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool TestDataKeyed_t_initialize_ex(
    TestDataKeyed_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return TestDataKeyed_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool TestDataKeyed_t_initialize_w_params(
    TestDataKeyed_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initArray(
        sample->key, ((KEY_SIZE)), RTI_CDR_OCTET_SIZE)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->entity_id)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initUnsignedLong(&sample->seq_num)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->timestamp_sec)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initUnsignedLong(&sample->timestamp_usec)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->latency_ping)) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        DDS_OctetSeq_initialize(&sample->bin_data  );
        DDS_OctetSeq_set_absolute_maximum(&sample->bin_data , ((MAX_BOUNDED_SEQ_SIZE)));
        if (!DDS_OctetSeq_set_maximum(&sample->bin_data , ((MAX_BOUNDED_SEQ_SIZE)))) {
            return RTI_FALSE;
        }
    } else { 
        DDS_OctetSeq_set_length(&sample->bin_data, 0);
    }
    return RTI_TRUE;
}

void TestDataKeyed_t_finalize(
    TestDataKeyed_t* sample)
{

    TestDataKeyed_t_finalize_ex(sample,RTI_TRUE);
}

void TestDataKeyed_t_finalize_ex(
    TestDataKeyed_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    TestDataKeyed_t_finalize_w_params(
        sample,&deallocParams);
}

void TestDataKeyed_t_finalize_w_params(
    TestDataKeyed_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    DDS_OctetSeq_finalize(&sample->bin_data);

}

void TestDataKeyed_t_finalize_optional_members(
    TestDataKeyed_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool TestDataKeyed_t_copy(
    TestDataKeyed_t* dst,
    const TestDataKeyed_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyArray(
            dst->key ,src->key,((KEY_SIZE)), RTI_CDR_OCTET_SIZE)) {
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->entity_id, &src->entity_id)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyUnsignedLong (
            &dst->seq_num, &src->seq_num)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->timestamp_sec, &src->timestamp_sec)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyUnsignedLong (
            &dst->timestamp_usec, &src->timestamp_usec)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->latency_ping, &src->latency_ping)) { 
            return RTI_FALSE;
        }
        if (!DDS_OctetSeq_copy(&dst->bin_data ,
        &src->bin_data )) {
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'TestDataKeyed_t' sequence class.
*/
#define T TestDataKeyed_t
#define TSeq TestDataKeyed_tSeq

#define T_initialize_w_params TestDataKeyed_t_initialize_w_params

#define T_finalize_w_params   TestDataKeyed_t_finalize_w_params
#define T_copy       TestDataKeyed_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *TestDataLarge_tTYPENAME = "TestDataLarge_t";

DDS_TypeCode* TestDataLarge_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode TestDataLarge_t_g_tc_key_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,(KEY_SIZE), NULL,NULL);
    static DDS_TypeCode TestDataLarge_t_g_tc_bin_data_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
    static DDS_TypeCode_Member TestDataLarge_t_g_tc_members[7]=
    {

        {
            (char *)"key",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"entity_id",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"seq_num",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"timestamp_sec",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"timestamp_usec",/* Member name */
            {
                4,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"latency_ping",/* Member name */
            {
                5,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"bin_data",/* Member name */
            {
                6,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode TestDataLarge_t_g_tc =
    {{
            DDS_TK_STRUCT| DDS_TK_FINAL_EXTENSIBILITY,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"TestDataLarge_t", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            7, /* Number of members */
            TestDataLarge_t_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for TestDataLarge_t*/

    if (is_initialized) {
        return &TestDataLarge_t_g_tc;
    }

    TestDataLarge_t_g_tc_key_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

    TestDataLarge_t_g_tc_bin_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    TestDataLarge_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& TestDataLarge_t_g_tc_key_array;
    TestDataLarge_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    TestDataLarge_t_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    TestDataLarge_t_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    TestDataLarge_t_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    TestDataLarge_t_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    TestDataLarge_t_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& TestDataLarge_t_g_tc_bin_data_sequence;

    is_initialized = RTI_TRUE;

    return &TestDataLarge_t_g_tc;
}

RTIBool TestDataLarge_t_initialize(
    TestDataLarge_t* sample) {
    return TestDataLarge_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool TestDataLarge_t_initialize_ex(
    TestDataLarge_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return TestDataLarge_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool TestDataLarge_t_initialize_w_params(
    TestDataLarge_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initArray(
        sample->key, ((KEY_SIZE)), RTI_CDR_OCTET_SIZE)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->entity_id)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initUnsignedLong(&sample->seq_num)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->timestamp_sec)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initUnsignedLong(&sample->timestamp_usec)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->latency_ping)) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        DDS_OctetSeq_initialize(&sample->bin_data  );
        DDS_OctetSeq_set_absolute_maximum(&sample->bin_data , RTI_INT32_MAX);
        if (!DDS_OctetSeq_set_maximum(&sample->bin_data , (0))) {
            return RTI_FALSE;
        }
    } else { 
        DDS_OctetSeq_set_length(&sample->bin_data, 0);
    }
    return RTI_TRUE;
}

void TestDataLarge_t_finalize(
    TestDataLarge_t* sample)
{

    TestDataLarge_t_finalize_ex(sample,RTI_TRUE);
}

void TestDataLarge_t_finalize_ex(
    TestDataLarge_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    TestDataLarge_t_finalize_w_params(
        sample,&deallocParams);
}

void TestDataLarge_t_finalize_w_params(
    TestDataLarge_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    DDS_OctetSeq_finalize(&sample->bin_data);

}

void TestDataLarge_t_finalize_optional_members(
    TestDataLarge_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool TestDataLarge_t_copy(
    TestDataLarge_t* dst,
    const TestDataLarge_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyArray(
            dst->key ,src->key,((KEY_SIZE)), RTI_CDR_OCTET_SIZE)) {
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->entity_id, &src->entity_id)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyUnsignedLong (
            &dst->seq_num, &src->seq_num)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->timestamp_sec, &src->timestamp_sec)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyUnsignedLong (
            &dst->timestamp_usec, &src->timestamp_usec)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->latency_ping, &src->latency_ping)) { 
            return RTI_FALSE;
        }
        if (!DDS_OctetSeq_copy(&dst->bin_data ,
        &src->bin_data )) {
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'TestDataLarge_t' sequence class.
*/
#define T TestDataLarge_t
#define TSeq TestDataLarge_tSeq

#define T_initialize_w_params TestDataLarge_t_initialize_w_params

#define T_finalize_w_params   TestDataLarge_t_finalize_w_params
#define T_copy       TestDataLarge_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *TestDataKeyedLarge_tTYPENAME = "TestDataKeyedLarge_t";

DDS_TypeCode* TestDataKeyedLarge_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode TestDataKeyedLarge_t_g_tc_key_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,(KEY_SIZE), NULL,NULL);
    static DDS_TypeCode TestDataKeyedLarge_t_g_tc_bin_data_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
    static DDS_TypeCode_Member TestDataKeyedLarge_t_g_tc_members[7]=
    {

        {
            (char *)"key",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"entity_id",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"seq_num",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"timestamp_sec",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"timestamp_usec",/* Member name */
            {
                4,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"latency_ping",/* Member name */
            {
                5,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"bin_data",/* Member name */
            {
                6,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode TestDataKeyedLarge_t_g_tc =
    {{
            DDS_TK_STRUCT| DDS_TK_FINAL_EXTENSIBILITY,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"TestDataKeyedLarge_t", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            7, /* Number of members */
            TestDataKeyedLarge_t_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for TestDataKeyedLarge_t*/

    if (is_initialized) {
        return &TestDataKeyedLarge_t_g_tc;
    }

    TestDataKeyedLarge_t_g_tc_key_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

    TestDataKeyedLarge_t_g_tc_bin_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    TestDataKeyedLarge_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& TestDataKeyedLarge_t_g_tc_key_array;
    TestDataKeyedLarge_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    TestDataKeyedLarge_t_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    TestDataKeyedLarge_t_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    TestDataKeyedLarge_t_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    TestDataKeyedLarge_t_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    TestDataKeyedLarge_t_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& TestDataKeyedLarge_t_g_tc_bin_data_sequence;

    is_initialized = RTI_TRUE;

    return &TestDataKeyedLarge_t_g_tc;
}

RTIBool TestDataKeyedLarge_t_initialize(
    TestDataKeyedLarge_t* sample) {
    return TestDataKeyedLarge_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool TestDataKeyedLarge_t_initialize_ex(
    TestDataKeyedLarge_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return TestDataKeyedLarge_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool TestDataKeyedLarge_t_initialize_w_params(
    TestDataKeyedLarge_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initArray(
        sample->key, ((KEY_SIZE)), RTI_CDR_OCTET_SIZE)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->entity_id)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initUnsignedLong(&sample->seq_num)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->timestamp_sec)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initUnsignedLong(&sample->timestamp_usec)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->latency_ping)) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        DDS_OctetSeq_initialize(&sample->bin_data  );
        DDS_OctetSeq_set_absolute_maximum(&sample->bin_data , RTI_INT32_MAX);
        if (!DDS_OctetSeq_set_maximum(&sample->bin_data , (0))) {
            return RTI_FALSE;
        }
    } else { 
        DDS_OctetSeq_set_length(&sample->bin_data, 0);
    }
    return RTI_TRUE;
}

void TestDataKeyedLarge_t_finalize(
    TestDataKeyedLarge_t* sample)
{

    TestDataKeyedLarge_t_finalize_ex(sample,RTI_TRUE);
}

void TestDataKeyedLarge_t_finalize_ex(
    TestDataKeyedLarge_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    TestDataKeyedLarge_t_finalize_w_params(
        sample,&deallocParams);
}

void TestDataKeyedLarge_t_finalize_w_params(
    TestDataKeyedLarge_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    DDS_OctetSeq_finalize(&sample->bin_data);

}

void TestDataKeyedLarge_t_finalize_optional_members(
    TestDataKeyedLarge_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool TestDataKeyedLarge_t_copy(
    TestDataKeyedLarge_t* dst,
    const TestDataKeyedLarge_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyArray(
            dst->key ,src->key,((KEY_SIZE)), RTI_CDR_OCTET_SIZE)) {
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->entity_id, &src->entity_id)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyUnsignedLong (
            &dst->seq_num, &src->seq_num)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->timestamp_sec, &src->timestamp_sec)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyUnsignedLong (
            &dst->timestamp_usec, &src->timestamp_usec)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->latency_ping, &src->latency_ping)) { 
            return RTI_FALSE;
        }
        if (!DDS_OctetSeq_copy(&dst->bin_data ,
        &src->bin_data )) {
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'TestDataKeyedLarge_t' sequence class.
*/
#define T TestDataKeyedLarge_t
#define TSeq TestDataKeyedLarge_tSeq

#define T_initialize_w_params TestDataKeyedLarge_t_initialize_w_params

#define T_finalize_w_params   TestDataKeyedLarge_t_finalize_w_params
#define T_copy       TestDataKeyedLarge_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T


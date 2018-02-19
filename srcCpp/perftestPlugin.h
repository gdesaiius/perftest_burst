

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from perftest.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef perftestPlugin_1283481695_h
#define perftestPlugin_1283481695_h

#include "perftest.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

extern "C" {

    #define TestData_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define TestData_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define TestData_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define TestData_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define TestData_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern TestData_t*
    TestData_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern TestData_t*
    TestData_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern TestData_t*
    TestData_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    TestData_tPluginSupport_copy_data(
        TestData_t *out,
        const TestData_t *in);

    NDDSUSERDllExport extern void 
    TestData_tPluginSupport_destroy_data_w_params(
        TestData_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    TestData_tPluginSupport_destroy_data_ex(
        TestData_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TestData_tPluginSupport_destroy_data(
        TestData_t *sample);

    NDDSUSERDllExport extern void 
    TestData_tPluginSupport_print_data(
        const TestData_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    TestData_tPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    TestData_tPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    TestData_tPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    TestData_tPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    TestData_tPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        TestData_t *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    TestData_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        TestData_t *out,
        const TestData_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    TestData_tPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const TestData_t *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    TestData_tPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        TestData_t *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    TestData_tPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const TestData_t *sample); 

    NDDSUSERDllExport extern RTIBool 
    TestData_tPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        TestData_t **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    TestData_tPlugin_deserialize_from_cdr_buffer(
        TestData_t *sample,
        const char * buffer,
        unsigned int length);    
    NDDSUSERDllExport extern DDS_ReturnCode_t
    TestData_tPlugin_data_to_string(
        const TestData_t *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    

    NDDSUSERDllExport extern RTIBool
    TestData_tPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    TestData_tPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    TestData_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    TestData_tPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    TestData_tPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const TestData_t * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    TestData_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    TestData_tPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    TestData_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    TestData_tPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const TestData_t *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    TestData_tPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        TestData_t * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    TestData_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        TestData_t ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    TestData_tPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        TestData_t *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    TestData_tPlugin_new(void);

    NDDSUSERDllExport extern void
    TestData_tPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct TestDataKeyed_t
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct TestDataKeyed_t)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * TestDataKeyed_t must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct TestDataKeyed_t.
    */
    typedef  class TestDataKeyed_t TestDataKeyed_tKeyHolder;

    #define TestDataKeyed_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define TestDataKeyed_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define TestDataKeyed_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define TestDataKeyed_tPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define TestDataKeyed_tPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define TestDataKeyed_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define TestDataKeyed_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern TestDataKeyed_t*
    TestDataKeyed_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern TestDataKeyed_t*
    TestDataKeyed_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern TestDataKeyed_t*
    TestDataKeyed_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyed_tPluginSupport_copy_data(
        TestDataKeyed_t *out,
        const TestDataKeyed_t *in);

    NDDSUSERDllExport extern void 
    TestDataKeyed_tPluginSupport_destroy_data_w_params(
        TestDataKeyed_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    TestDataKeyed_tPluginSupport_destroy_data_ex(
        TestDataKeyed_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TestDataKeyed_tPluginSupport_destroy_data(
        TestDataKeyed_t *sample);

    NDDSUSERDllExport extern void 
    TestDataKeyed_tPluginSupport_print_data(
        const TestDataKeyed_t *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern TestDataKeyed_t*
    TestDataKeyed_tPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern TestDataKeyed_t*
    TestDataKeyed_tPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    TestDataKeyed_tPluginSupport_destroy_key_ex(
        TestDataKeyed_tKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TestDataKeyed_tPluginSupport_destroy_key(
        TestDataKeyed_tKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    TestDataKeyed_tPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    TestDataKeyed_tPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    TestDataKeyed_tPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    TestDataKeyed_tPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    TestDataKeyed_tPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        TestDataKeyed_t *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyed_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        TestDataKeyed_t *out,
        const TestDataKeyed_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyed_tPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const TestDataKeyed_t *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyed_tPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        TestDataKeyed_t *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    TestDataKeyed_tPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const TestDataKeyed_t *sample); 

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyed_tPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        TestDataKeyed_t **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    TestDataKeyed_tPlugin_deserialize_from_cdr_buffer(
        TestDataKeyed_t *sample,
        const char * buffer,
        unsigned int length);    
    NDDSUSERDllExport extern DDS_ReturnCode_t
    TestDataKeyed_tPlugin_data_to_string(
        const TestDataKeyed_t *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    

    NDDSUSERDllExport extern RTIBool
    TestDataKeyed_tPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    TestDataKeyed_tPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    TestDataKeyed_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    TestDataKeyed_tPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    TestDataKeyed_tPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const TestDataKeyed_t * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    TestDataKeyed_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    TestDataKeyed_tPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    TestDataKeyed_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyed_tPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const TestDataKeyed_t *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyed_tPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        TestDataKeyed_t * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyed_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        TestDataKeyed_t ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    TestDataKeyed_tPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        TestDataKeyed_t *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyed_tPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        TestDataKeyed_tKeyHolder *key, 
        const TestDataKeyed_t *instance);

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyed_tPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        TestDataKeyed_t *instance, 
        const TestDataKeyed_tKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyed_tPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const TestDataKeyed_t *instance);

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyed_tPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    TestDataKeyed_tPlugin_new(void);

    NDDSUSERDllExport extern void
    TestDataKeyed_tPlugin_delete(struct PRESTypePlugin *);

    #define TestDataLarge_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define TestDataLarge_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define TestDataLarge_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define TestDataLarge_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define TestDataLarge_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern TestDataLarge_t*
    TestDataLarge_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern TestDataLarge_t*
    TestDataLarge_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern TestDataLarge_t*
    TestDataLarge_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    TestDataLarge_tPluginSupport_copy_data(
        TestDataLarge_t *out,
        const TestDataLarge_t *in);

    NDDSUSERDllExport extern void 
    TestDataLarge_tPluginSupport_destroy_data_w_params(
        TestDataLarge_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    TestDataLarge_tPluginSupport_destroy_data_ex(
        TestDataLarge_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TestDataLarge_tPluginSupport_destroy_data(
        TestDataLarge_t *sample);

    NDDSUSERDllExport extern void 
    TestDataLarge_tPluginSupport_print_data(
        const TestDataLarge_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    TestDataLarge_tPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    TestDataLarge_tPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    TestDataLarge_tPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    TestDataLarge_tPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    TestDataLarge_tPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        TestDataLarge_t *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    TestDataLarge_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        TestDataLarge_t *out,
        const TestDataLarge_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    TestDataLarge_tPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const TestDataLarge_t *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    TestDataLarge_tPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        TestDataLarge_t *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    TestDataLarge_tPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const TestDataLarge_t *sample); 

    NDDSUSERDllExport extern RTIBool 
    TestDataLarge_tPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        TestDataLarge_t **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    TestDataLarge_tPlugin_deserialize_from_cdr_buffer(
        TestDataLarge_t *sample,
        const char * buffer,
        unsigned int length);    
    NDDSUSERDllExport extern DDS_ReturnCode_t
    TestDataLarge_tPlugin_data_to_string(
        const TestDataLarge_t *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    

    NDDSUSERDllExport extern RTIBool
    TestDataLarge_tPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    TestDataLarge_tPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    TestDataLarge_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    TestDataLarge_tPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    TestDataLarge_tPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const TestDataLarge_t * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    TestDataLarge_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    TestDataLarge_tPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    TestDataLarge_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    TestDataLarge_tPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const TestDataLarge_t *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    TestDataLarge_tPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        TestDataLarge_t * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    TestDataLarge_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        TestDataLarge_t ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    TestDataLarge_tPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        TestDataLarge_t *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    TestDataLarge_tPlugin_new(void);

    NDDSUSERDllExport extern void
    TestDataLarge_tPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct TestDataKeyedLarge_t
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct TestDataKeyedLarge_t)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * TestDataKeyedLarge_t must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct TestDataKeyedLarge_t.
    */
    typedef  class TestDataKeyedLarge_t TestDataKeyedLarge_tKeyHolder;

    #define TestDataKeyedLarge_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define TestDataKeyedLarge_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define TestDataKeyedLarge_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define TestDataKeyedLarge_tPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define TestDataKeyedLarge_tPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define TestDataKeyedLarge_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define TestDataKeyedLarge_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern TestDataKeyedLarge_t*
    TestDataKeyedLarge_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern TestDataKeyedLarge_t*
    TestDataKeyedLarge_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern TestDataKeyedLarge_t*
    TestDataKeyedLarge_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyedLarge_tPluginSupport_copy_data(
        TestDataKeyedLarge_t *out,
        const TestDataKeyedLarge_t *in);

    NDDSUSERDllExport extern void 
    TestDataKeyedLarge_tPluginSupport_destroy_data_w_params(
        TestDataKeyedLarge_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    TestDataKeyedLarge_tPluginSupport_destroy_data_ex(
        TestDataKeyedLarge_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TestDataKeyedLarge_tPluginSupport_destroy_data(
        TestDataKeyedLarge_t *sample);

    NDDSUSERDllExport extern void 
    TestDataKeyedLarge_tPluginSupport_print_data(
        const TestDataKeyedLarge_t *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern TestDataKeyedLarge_t*
    TestDataKeyedLarge_tPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern TestDataKeyedLarge_t*
    TestDataKeyedLarge_tPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    TestDataKeyedLarge_tPluginSupport_destroy_key_ex(
        TestDataKeyedLarge_tKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TestDataKeyedLarge_tPluginSupport_destroy_key(
        TestDataKeyedLarge_tKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    TestDataKeyedLarge_tPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    TestDataKeyedLarge_tPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    TestDataKeyedLarge_tPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    TestDataKeyedLarge_tPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    TestDataKeyedLarge_tPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        TestDataKeyedLarge_t *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyedLarge_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        TestDataKeyedLarge_t *out,
        const TestDataKeyedLarge_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyedLarge_tPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const TestDataKeyedLarge_t *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyedLarge_tPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        TestDataKeyedLarge_t *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    TestDataKeyedLarge_tPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const TestDataKeyedLarge_t *sample); 

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyedLarge_tPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        TestDataKeyedLarge_t **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    TestDataKeyedLarge_tPlugin_deserialize_from_cdr_buffer(
        TestDataKeyedLarge_t *sample,
        const char * buffer,
        unsigned int length);    
    NDDSUSERDllExport extern DDS_ReturnCode_t
    TestDataKeyedLarge_tPlugin_data_to_string(
        const TestDataKeyedLarge_t *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    

    NDDSUSERDllExport extern RTIBool
    TestDataKeyedLarge_tPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    TestDataKeyedLarge_tPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    TestDataKeyedLarge_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    TestDataKeyedLarge_tPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    TestDataKeyedLarge_tPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const TestDataKeyedLarge_t * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    TestDataKeyedLarge_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    TestDataKeyedLarge_tPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    TestDataKeyedLarge_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyedLarge_tPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const TestDataKeyedLarge_t *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyedLarge_tPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        TestDataKeyedLarge_t * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyedLarge_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        TestDataKeyedLarge_t ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    TestDataKeyedLarge_tPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        TestDataKeyedLarge_t *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyedLarge_tPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        TestDataKeyedLarge_tKeyHolder *key, 
        const TestDataKeyedLarge_t *instance);

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyedLarge_tPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        TestDataKeyedLarge_t *instance, 
        const TestDataKeyedLarge_tKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyedLarge_tPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const TestDataKeyedLarge_t *instance);

    NDDSUSERDllExport extern RTIBool 
    TestDataKeyedLarge_tPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    TestDataKeyedLarge_tPlugin_new(void);

    NDDSUSERDllExport extern void
    TestDataKeyedLarge_tPlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* perftestPlugin_1283481695_h */


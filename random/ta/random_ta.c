#include "include/random_ta.h"

#include <stdio.h>/
#include <stdlib.h>/

#include <tee_internal_api.h>
#include <tee_client_api_extensions.h>

TEE_Result random_number_gener　

TEE_Result CreateEntryPoint(void) {
    return TEE_SUCCESS;
}

TEE_Result DestroyEntryPoint(void) {

}

TEE_Result OpenSessionEntryPoint(uint32_t param_types, TEE_Param params[4], void **session_context) {
    uint32_t exp_param_types = TEE_PARAM_TYPES(TEE_PARAM_TYPE_NONE,
                                               TEE_PARAM_TYPE_NONE,
                                               TEE_PARAM_TYPE_NONE,
                                               TEE_PARAM_TYPE_NONE,)

    if (param_types != exp_param_types) {
        return TEE_ERROR_BAD_PARAMETERS;
    }

    return TEE_SUCCESS;
}


TEE_Result CloseSessionEntryPoint(void) {

}

TEE_Result InvokeCommandEntryPoint(void **session_context,
                                   uint32_t cmd_id,
                                   uint32_t param_types,
                                   TEE_Param params[4])
{
    switch (cmd_id) {
        case TA_RANDOM_CMD_GENERATE:
            return
    }
}
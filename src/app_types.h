/*******************************************************************************
*   (c) 2018 ZondaX GmbH
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/
#pragma once
#include <stdint.h>
#include "libxmss/xmss_types.h"
#include "lib/qrl_types.h"

#pragma pack(push, 1)
typedef union {
    xmss_sig_ctx_t xmss_sig_ctx;
    qrltx_t qrltx;
    uint16_t new_idx;
} app_ctx_t;
#pragma pack(pop)

/*
 * Copyright 2017-2020 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/*********************************************************
**********************************************************
**********************************************************

THIS FILE IS AUTOGENERATED. DO NOT EDIT

**********************************************************
**********************************************************
*********************************************************/

#ifndef PHONECALLCONTROLLER_DTMFERROR_H
#define PHONECALLCONTROLLER_DTMFERROR_H

#include <string>
#include <vector>

#include <unordered_map>
#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>

namespace aasb {
namespace message {
namespace phoneCallController {

//Enum Definition
enum class DTMFError {
    CALL_NOT_IN_PROGRESS,
    DTMF_FAILED,
};

inline std::string toString(DTMFError enumValue) {
    switch (enumValue) {
        case (DTMFError::CALL_NOT_IN_PROGRESS):
            return "CALL_NOT_IN_PROGRESS";
        case (DTMFError::DTMF_FAILED):
            return "DTMF_FAILED";
    }
    throw std::runtime_error("invalidDTMFErrorType");
}

inline DTMFError toDTMFError(const std::string& stringValue) {
    static std::unordered_map<std::string, DTMFError> map = {
        {"CALL_NOT_IN_PROGRESS", DTMFError::CALL_NOT_IN_PROGRESS},
        {"DTMF_FAILED", DTMFError::DTMF_FAILED},
    };

    auto search = map.find(stringValue);
    if (search != map.end()) {
        return search->second;
    }
    throw std::runtime_error("invalidDTMFErrorType");
}

inline void to_json(nlohmann::json& j, const DTMFError& c) {
    j = toString(c);
}

inline void from_json(const nlohmann::json& j, DTMFError& c) {
    c = toDTMFError(j);
}

}  // namespace phoneCallController
}  // namespace message
}  // namespace aasb

#endif  // PHONECALLCONTROLLER_DTMFERROR_H
/*
* Copyright 2014 BlackBerry Limited.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef SMS_JS_HPP_
#define SMS_JS_HPP_

#include <string>
#include "../public/plugin.h"
#include "sms_ndk.hpp"

class SMS_JS: public JSExt {

public:
    explicit SMS_JS(const std::string& id);
    virtual ~SMS_JS();
    virtual bool CanDelete();
    virtual std::string InvokeMethod(const std::string& command);
    void NotifyEvent(const std::string& event);

private:
    std::string m_id;
    // Definition of a pointer to the actual native extension code
    webworks::SMS_NDK *m_pTemplateController;
};

#endif /* SMS_JS_HPP_ */

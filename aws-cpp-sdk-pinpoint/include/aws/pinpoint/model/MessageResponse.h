﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/MessageResult.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * Send message response.
   */
  class AWS_PINPOINT_API MessageResponse
  {
  public:
    MessageResponse();
    MessageResponse(const Aws::Utils::Json::JsonValue& jsonValue);
    MessageResponse& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * Application id of the message.
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * Application id of the message.
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * Application id of the message.
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * Application id of the message.
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * Application id of the message.
     */
    inline MessageResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * Application id of the message.
     */
    inline MessageResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * Application id of the message.
     */
    inline MessageResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}

    /**
     * Original request Id for which this message was delivered.
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * Original request Id for which this message was delivered.
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * Original request Id for which this message was delivered.
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * Original request Id for which this message was delivered.
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * Original request Id for which this message was delivered.
     */
    inline MessageResponse& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * Original request Id for which this message was delivered.
     */
    inline MessageResponse& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * Original request Id for which this message was delivered.
     */
    inline MessageResponse& WithRequestId(const char* value) { SetRequestId(value); return *this;}

    /**
     * A map containing a multi part response for each address, with the address as the
     * key(Email address, phone number or push token) and the result as the value.
     */
    inline const Aws::Map<Aws::String, MessageResult>& GetResult() const{ return m_result; }

    /**
     * A map containing a multi part response for each address, with the address as the
     * key(Email address, phone number or push token) and the result as the value.
     */
    inline void SetResult(const Aws::Map<Aws::String, MessageResult>& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * A map containing a multi part response for each address, with the address as the
     * key(Email address, phone number or push token) and the result as the value.
     */
    inline void SetResult(Aws::Map<Aws::String, MessageResult>&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

    /**
     * A map containing a multi part response for each address, with the address as the
     * key(Email address, phone number or push token) and the result as the value.
     */
    inline MessageResponse& WithResult(const Aws::Map<Aws::String, MessageResult>& value) { SetResult(value); return *this;}

    /**
     * A map containing a multi part response for each address, with the address as the
     * key(Email address, phone number or push token) and the result as the value.
     */
    inline MessageResponse& WithResult(Aws::Map<Aws::String, MessageResult>&& value) { SetResult(std::move(value)); return *this;}

    /**
     * A map containing a multi part response for each address, with the address as the
     * key(Email address, phone number or push token) and the result as the value.
     */
    inline MessageResponse& AddResult(const Aws::String& key, const MessageResult& value) { m_resultHasBeenSet = true; m_result.emplace(key, value); return *this; }

    /**
     * A map containing a multi part response for each address, with the address as the
     * key(Email address, phone number or push token) and the result as the value.
     */
    inline MessageResponse& AddResult(Aws::String&& key, const MessageResult& value) { m_resultHasBeenSet = true; m_result.emplace(std::move(key), value); return *this; }

    /**
     * A map containing a multi part response for each address, with the address as the
     * key(Email address, phone number or push token) and the result as the value.
     */
    inline MessageResponse& AddResult(const Aws::String& key, MessageResult&& value) { m_resultHasBeenSet = true; m_result.emplace(key, std::move(value)); return *this; }

    /**
     * A map containing a multi part response for each address, with the address as the
     * key(Email address, phone number or push token) and the result as the value.
     */
    inline MessageResponse& AddResult(Aws::String&& key, MessageResult&& value) { m_resultHasBeenSet = true; m_result.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A map containing a multi part response for each address, with the address as the
     * key(Email address, phone number or push token) and the result as the value.
     */
    inline MessageResponse& AddResult(const char* key, MessageResult&& value) { m_resultHasBeenSet = true; m_result.emplace(key, std::move(value)); return *this; }

    /**
     * A map containing a multi part response for each address, with the address as the
     * key(Email address, phone number or push token) and the result as the value.
     */
    inline MessageResponse& AddResult(const char* key, const MessageResult& value) { m_resultHasBeenSet = true; m_result.emplace(key, value); return *this; }

  private:
    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;
    Aws::String m_requestId;
    bool m_requestIdHasBeenSet;
    Aws::Map<Aws::String, MessageResult> m_result;
    bool m_resultHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

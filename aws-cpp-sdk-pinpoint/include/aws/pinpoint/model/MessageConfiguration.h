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
#include <aws/pinpoint/model/Message.h>
#include <aws/pinpoint/model/CampaignEmailMessage.h>
#include <aws/pinpoint/model/CampaignSmsMessage.h>
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
   * Message configuration for a campaign.
   */
  class AWS_PINPOINT_API MessageConfiguration
  {
  public:
    MessageConfiguration();
    MessageConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    MessageConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * The message that the campaign delivers to APNS channels. Overrides the default
     * message.
     */
    inline const Message& GetAPNSMessage() const{ return m_aPNSMessage; }

    /**
     * The message that the campaign delivers to APNS channels. Overrides the default
     * message.
     */
    inline void SetAPNSMessage(const Message& value) { m_aPNSMessageHasBeenSet = true; m_aPNSMessage = value; }

    /**
     * The message that the campaign delivers to APNS channels. Overrides the default
     * message.
     */
    inline void SetAPNSMessage(Message&& value) { m_aPNSMessageHasBeenSet = true; m_aPNSMessage = std::move(value); }

    /**
     * The message that the campaign delivers to APNS channels. Overrides the default
     * message.
     */
    inline MessageConfiguration& WithAPNSMessage(const Message& value) { SetAPNSMessage(value); return *this;}

    /**
     * The message that the campaign delivers to APNS channels. Overrides the default
     * message.
     */
    inline MessageConfiguration& WithAPNSMessage(Message&& value) { SetAPNSMessage(std::move(value)); return *this;}

    /**
     * The default message for all channels.
     */
    inline const Message& GetDefaultMessage() const{ return m_defaultMessage; }

    /**
     * The default message for all channels.
     */
    inline void SetDefaultMessage(const Message& value) { m_defaultMessageHasBeenSet = true; m_defaultMessage = value; }

    /**
     * The default message for all channels.
     */
    inline void SetDefaultMessage(Message&& value) { m_defaultMessageHasBeenSet = true; m_defaultMessage = std::move(value); }

    /**
     * The default message for all channels.
     */
    inline MessageConfiguration& WithDefaultMessage(const Message& value) { SetDefaultMessage(value); return *this;}

    /**
     * The default message for all channels.
     */
    inline MessageConfiguration& WithDefaultMessage(Message&& value) { SetDefaultMessage(std::move(value)); return *this;}

    /**
     * The email message configuration.
     */
    inline const CampaignEmailMessage& GetEmailMessage() const{ return m_emailMessage; }

    /**
     * The email message configuration.
     */
    inline void SetEmailMessage(const CampaignEmailMessage& value) { m_emailMessageHasBeenSet = true; m_emailMessage = value; }

    /**
     * The email message configuration.
     */
    inline void SetEmailMessage(CampaignEmailMessage&& value) { m_emailMessageHasBeenSet = true; m_emailMessage = std::move(value); }

    /**
     * The email message configuration.
     */
    inline MessageConfiguration& WithEmailMessage(const CampaignEmailMessage& value) { SetEmailMessage(value); return *this;}

    /**
     * The email message configuration.
     */
    inline MessageConfiguration& WithEmailMessage(CampaignEmailMessage&& value) { SetEmailMessage(std::move(value)); return *this;}

    /**
     * The message that the campaign delivers to GCM channels. Overrides the default
     * message.
     */
    inline const Message& GetGCMMessage() const{ return m_gCMMessage; }

    /**
     * The message that the campaign delivers to GCM channels. Overrides the default
     * message.
     */
    inline void SetGCMMessage(const Message& value) { m_gCMMessageHasBeenSet = true; m_gCMMessage = value; }

    /**
     * The message that the campaign delivers to GCM channels. Overrides the default
     * message.
     */
    inline void SetGCMMessage(Message&& value) { m_gCMMessageHasBeenSet = true; m_gCMMessage = std::move(value); }

    /**
     * The message that the campaign delivers to GCM channels. Overrides the default
     * message.
     */
    inline MessageConfiguration& WithGCMMessage(const Message& value) { SetGCMMessage(value); return *this;}

    /**
     * The message that the campaign delivers to GCM channels. Overrides the default
     * message.
     */
    inline MessageConfiguration& WithGCMMessage(Message&& value) { SetGCMMessage(std::move(value)); return *this;}

    /**
     * The SMS message configuration.
     */
    inline const CampaignSmsMessage& GetSMSMessage() const{ return m_sMSMessage; }

    /**
     * The SMS message configuration.
     */
    inline void SetSMSMessage(const CampaignSmsMessage& value) { m_sMSMessageHasBeenSet = true; m_sMSMessage = value; }

    /**
     * The SMS message configuration.
     */
    inline void SetSMSMessage(CampaignSmsMessage&& value) { m_sMSMessageHasBeenSet = true; m_sMSMessage = std::move(value); }

    /**
     * The SMS message configuration.
     */
    inline MessageConfiguration& WithSMSMessage(const CampaignSmsMessage& value) { SetSMSMessage(value); return *this;}

    /**
     * The SMS message configuration.
     */
    inline MessageConfiguration& WithSMSMessage(CampaignSmsMessage&& value) { SetSMSMessage(std::move(value)); return *this;}

  private:
    Message m_aPNSMessage;
    bool m_aPNSMessageHasBeenSet;
    Message m_defaultMessage;
    bool m_defaultMessageHasBeenSet;
    CampaignEmailMessage m_emailMessage;
    bool m_emailMessageHasBeenSet;
    Message m_gCMMessage;
    bool m_gCMMessageHasBeenSet;
    CampaignSmsMessage m_sMSMessage;
    bool m_sMSMessageHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

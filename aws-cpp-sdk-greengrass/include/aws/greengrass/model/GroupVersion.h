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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * Information on group version<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GroupVersion">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API GroupVersion
  {
  public:
    GroupVersion();
    GroupVersion(const Aws::Utils::Json::JsonValue& jsonValue);
    GroupVersion& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Core definition version arn for this group.
     */
    inline const Aws::String& GetCoreDefinitionVersionArn() const{ return m_coreDefinitionVersionArn; }

    /**
     * Core definition version arn for this group.
     */
    inline void SetCoreDefinitionVersionArn(const Aws::String& value) { m_coreDefinitionVersionArnHasBeenSet = true; m_coreDefinitionVersionArn = value; }

    /**
     * Core definition version arn for this group.
     */
    inline void SetCoreDefinitionVersionArn(Aws::String&& value) { m_coreDefinitionVersionArnHasBeenSet = true; m_coreDefinitionVersionArn = std::move(value); }

    /**
     * Core definition version arn for this group.
     */
    inline void SetCoreDefinitionVersionArn(const char* value) { m_coreDefinitionVersionArnHasBeenSet = true; m_coreDefinitionVersionArn.assign(value); }

    /**
     * Core definition version arn for this group.
     */
    inline GroupVersion& WithCoreDefinitionVersionArn(const Aws::String& value) { SetCoreDefinitionVersionArn(value); return *this;}

    /**
     * Core definition version arn for this group.
     */
    inline GroupVersion& WithCoreDefinitionVersionArn(Aws::String&& value) { SetCoreDefinitionVersionArn(std::move(value)); return *this;}

    /**
     * Core definition version arn for this group.
     */
    inline GroupVersion& WithCoreDefinitionVersionArn(const char* value) { SetCoreDefinitionVersionArn(value); return *this;}


    /**
     * Device definition version arn for this group.
     */
    inline const Aws::String& GetDeviceDefinitionVersionArn() const{ return m_deviceDefinitionVersionArn; }

    /**
     * Device definition version arn for this group.
     */
    inline void SetDeviceDefinitionVersionArn(const Aws::String& value) { m_deviceDefinitionVersionArnHasBeenSet = true; m_deviceDefinitionVersionArn = value; }

    /**
     * Device definition version arn for this group.
     */
    inline void SetDeviceDefinitionVersionArn(Aws::String&& value) { m_deviceDefinitionVersionArnHasBeenSet = true; m_deviceDefinitionVersionArn = std::move(value); }

    /**
     * Device definition version arn for this group.
     */
    inline void SetDeviceDefinitionVersionArn(const char* value) { m_deviceDefinitionVersionArnHasBeenSet = true; m_deviceDefinitionVersionArn.assign(value); }

    /**
     * Device definition version arn for this group.
     */
    inline GroupVersion& WithDeviceDefinitionVersionArn(const Aws::String& value) { SetDeviceDefinitionVersionArn(value); return *this;}

    /**
     * Device definition version arn for this group.
     */
    inline GroupVersion& WithDeviceDefinitionVersionArn(Aws::String&& value) { SetDeviceDefinitionVersionArn(std::move(value)); return *this;}

    /**
     * Device definition version arn for this group.
     */
    inline GroupVersion& WithDeviceDefinitionVersionArn(const char* value) { SetDeviceDefinitionVersionArn(value); return *this;}


    /**
     * Function definition version arn for this group.
     */
    inline const Aws::String& GetFunctionDefinitionVersionArn() const{ return m_functionDefinitionVersionArn; }

    /**
     * Function definition version arn for this group.
     */
    inline void SetFunctionDefinitionVersionArn(const Aws::String& value) { m_functionDefinitionVersionArnHasBeenSet = true; m_functionDefinitionVersionArn = value; }

    /**
     * Function definition version arn for this group.
     */
    inline void SetFunctionDefinitionVersionArn(Aws::String&& value) { m_functionDefinitionVersionArnHasBeenSet = true; m_functionDefinitionVersionArn = std::move(value); }

    /**
     * Function definition version arn for this group.
     */
    inline void SetFunctionDefinitionVersionArn(const char* value) { m_functionDefinitionVersionArnHasBeenSet = true; m_functionDefinitionVersionArn.assign(value); }

    /**
     * Function definition version arn for this group.
     */
    inline GroupVersion& WithFunctionDefinitionVersionArn(const Aws::String& value) { SetFunctionDefinitionVersionArn(value); return *this;}

    /**
     * Function definition version arn for this group.
     */
    inline GroupVersion& WithFunctionDefinitionVersionArn(Aws::String&& value) { SetFunctionDefinitionVersionArn(std::move(value)); return *this;}

    /**
     * Function definition version arn for this group.
     */
    inline GroupVersion& WithFunctionDefinitionVersionArn(const char* value) { SetFunctionDefinitionVersionArn(value); return *this;}


    /**
     * Logger definitionv ersion arn for this group.
     */
    inline const Aws::String& GetLoggerDefinitionVersionArn() const{ return m_loggerDefinitionVersionArn; }

    /**
     * Logger definitionv ersion arn for this group.
     */
    inline void SetLoggerDefinitionVersionArn(const Aws::String& value) { m_loggerDefinitionVersionArnHasBeenSet = true; m_loggerDefinitionVersionArn = value; }

    /**
     * Logger definitionv ersion arn for this group.
     */
    inline void SetLoggerDefinitionVersionArn(Aws::String&& value) { m_loggerDefinitionVersionArnHasBeenSet = true; m_loggerDefinitionVersionArn = std::move(value); }

    /**
     * Logger definitionv ersion arn for this group.
     */
    inline void SetLoggerDefinitionVersionArn(const char* value) { m_loggerDefinitionVersionArnHasBeenSet = true; m_loggerDefinitionVersionArn.assign(value); }

    /**
     * Logger definitionv ersion arn for this group.
     */
    inline GroupVersion& WithLoggerDefinitionVersionArn(const Aws::String& value) { SetLoggerDefinitionVersionArn(value); return *this;}

    /**
     * Logger definitionv ersion arn for this group.
     */
    inline GroupVersion& WithLoggerDefinitionVersionArn(Aws::String&& value) { SetLoggerDefinitionVersionArn(std::move(value)); return *this;}

    /**
     * Logger definitionv ersion arn for this group.
     */
    inline GroupVersion& WithLoggerDefinitionVersionArn(const char* value) { SetLoggerDefinitionVersionArn(value); return *this;}


    /**
     * Subscription definition version arn for this group.
     */
    inline const Aws::String& GetSubscriptionDefinitionVersionArn() const{ return m_subscriptionDefinitionVersionArn; }

    /**
     * Subscription definition version arn for this group.
     */
    inline void SetSubscriptionDefinitionVersionArn(const Aws::String& value) { m_subscriptionDefinitionVersionArnHasBeenSet = true; m_subscriptionDefinitionVersionArn = value; }

    /**
     * Subscription definition version arn for this group.
     */
    inline void SetSubscriptionDefinitionVersionArn(Aws::String&& value) { m_subscriptionDefinitionVersionArnHasBeenSet = true; m_subscriptionDefinitionVersionArn = std::move(value); }

    /**
     * Subscription definition version arn for this group.
     */
    inline void SetSubscriptionDefinitionVersionArn(const char* value) { m_subscriptionDefinitionVersionArnHasBeenSet = true; m_subscriptionDefinitionVersionArn.assign(value); }

    /**
     * Subscription definition version arn for this group.
     */
    inline GroupVersion& WithSubscriptionDefinitionVersionArn(const Aws::String& value) { SetSubscriptionDefinitionVersionArn(value); return *this;}

    /**
     * Subscription definition version arn for this group.
     */
    inline GroupVersion& WithSubscriptionDefinitionVersionArn(Aws::String&& value) { SetSubscriptionDefinitionVersionArn(std::move(value)); return *this;}

    /**
     * Subscription definition version arn for this group.
     */
    inline GroupVersion& WithSubscriptionDefinitionVersionArn(const char* value) { SetSubscriptionDefinitionVersionArn(value); return *this;}

  private:

    Aws::String m_coreDefinitionVersionArn;
    bool m_coreDefinitionVersionArnHasBeenSet;

    Aws::String m_deviceDefinitionVersionArn;
    bool m_deviceDefinitionVersionArnHasBeenSet;

    Aws::String m_functionDefinitionVersionArn;
    bool m_functionDefinitionVersionArnHasBeenSet;

    Aws::String m_loggerDefinitionVersionArn;
    bool m_loggerDefinitionVersionArnHasBeenSet;

    Aws::String m_subscriptionDefinitionVersionArn;
    bool m_subscriptionDefinitionVersionArnHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws

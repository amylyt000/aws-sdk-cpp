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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{
  class AWS_SSM_API CreateActivationResult
  {
  public:
    CreateActivationResult();
    CreateActivationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateActivationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID number generated by the system when it processed the activation. The
     * activation ID functions like a user name.</p>
     */
    inline const Aws::String& GetActivationId() const{ return m_activationId; }

    /**
     * <p>The ID number generated by the system when it processed the activation. The
     * activation ID functions like a user name.</p>
     */
    inline void SetActivationId(const Aws::String& value) { m_activationId = value; }

    /**
     * <p>The ID number generated by the system when it processed the activation. The
     * activation ID functions like a user name.</p>
     */
    inline void SetActivationId(Aws::String&& value) { m_activationId = std::move(value); }

    /**
     * <p>The ID number generated by the system when it processed the activation. The
     * activation ID functions like a user name.</p>
     */
    inline void SetActivationId(const char* value) { m_activationId.assign(value); }

    /**
     * <p>The ID number generated by the system when it processed the activation. The
     * activation ID functions like a user name.</p>
     */
    inline CreateActivationResult& WithActivationId(const Aws::String& value) { SetActivationId(value); return *this;}

    /**
     * <p>The ID number generated by the system when it processed the activation. The
     * activation ID functions like a user name.</p>
     */
    inline CreateActivationResult& WithActivationId(Aws::String&& value) { SetActivationId(std::move(value)); return *this;}

    /**
     * <p>The ID number generated by the system when it processed the activation. The
     * activation ID functions like a user name.</p>
     */
    inline CreateActivationResult& WithActivationId(const char* value) { SetActivationId(value); return *this;}


    /**
     * <p>The code the system generates when it processes the activation. The
     * activation code functions like a password to validate the activation ID. </p>
     */
    inline const Aws::String& GetActivationCode() const{ return m_activationCode; }

    /**
     * <p>The code the system generates when it processes the activation. The
     * activation code functions like a password to validate the activation ID. </p>
     */
    inline void SetActivationCode(const Aws::String& value) { m_activationCode = value; }

    /**
     * <p>The code the system generates when it processes the activation. The
     * activation code functions like a password to validate the activation ID. </p>
     */
    inline void SetActivationCode(Aws::String&& value) { m_activationCode = std::move(value); }

    /**
     * <p>The code the system generates when it processes the activation. The
     * activation code functions like a password to validate the activation ID. </p>
     */
    inline void SetActivationCode(const char* value) { m_activationCode.assign(value); }

    /**
     * <p>The code the system generates when it processes the activation. The
     * activation code functions like a password to validate the activation ID. </p>
     */
    inline CreateActivationResult& WithActivationCode(const Aws::String& value) { SetActivationCode(value); return *this;}

    /**
     * <p>The code the system generates when it processes the activation. The
     * activation code functions like a password to validate the activation ID. </p>
     */
    inline CreateActivationResult& WithActivationCode(Aws::String&& value) { SetActivationCode(std::move(value)); return *this;}

    /**
     * <p>The code the system generates when it processes the activation. The
     * activation code functions like a password to validate the activation ID. </p>
     */
    inline CreateActivationResult& WithActivationCode(const char* value) { SetActivationCode(value); return *this;}

  private:

    Aws::String m_activationId;

    Aws::String m_activationCode;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

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
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API UpdateGroupRequest : public GreengrassRequest
  {
  public:
    UpdateGroupRequest();
    Aws::String SerializePayload() const override;


    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline UpdateGroupRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline UpdateGroupRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline UpdateGroupRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * name of the definition
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * name of the definition
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * name of the definition
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * name of the definition
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * name of the definition
     */
    inline UpdateGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * name of the definition
     */
    inline UpdateGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * name of the definition
     */
    inline UpdateGroupRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws

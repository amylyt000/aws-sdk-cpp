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

#include <aws/mediastore/model/PutLifecyclePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutLifecyclePolicyRequest::PutLifecyclePolicyRequest() : 
    m_containerNameHasBeenSet(false),
    m_lifecyclePolicyHasBeenSet(false)
{
}

Aws::String PutLifecyclePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("ContainerName", m_containerName);

  }

  if(m_lifecyclePolicyHasBeenSet)
  {
   payload.WithString("LifecyclePolicy", m_lifecyclePolicy);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutLifecyclePolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MediaStore_20170901.PutLifecyclePolicy"));
  return headers;

}





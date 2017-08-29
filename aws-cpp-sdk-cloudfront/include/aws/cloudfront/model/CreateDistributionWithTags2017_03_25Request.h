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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/DistributionConfigWithTags.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   * <p>The request to create a new distribution with tags. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/CreateDistributionWithTagsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API CreateDistributionWithTags2017_03_25Request : public CloudFrontRequest
  {
  public:
    CreateDistributionWithTags2017_03_25Request();
    Aws::String SerializePayload() const override;


    /**
     * <p>The distribution's configuration information. </p>
     */
    inline const DistributionConfigWithTags& GetDistributionConfigWithTags() const{ return m_distributionConfigWithTags; }

    /**
     * <p>The distribution's configuration information. </p>
     */
    inline void SetDistributionConfigWithTags(const DistributionConfigWithTags& value) { m_distributionConfigWithTagsHasBeenSet = true; m_distributionConfigWithTags = value; }

    /**
     * <p>The distribution's configuration information. </p>
     */
    inline void SetDistributionConfigWithTags(DistributionConfigWithTags&& value) { m_distributionConfigWithTagsHasBeenSet = true; m_distributionConfigWithTags = std::move(value); }

    /**
     * <p>The distribution's configuration information. </p>
     */
    inline CreateDistributionWithTags2017_03_25Request& WithDistributionConfigWithTags(const DistributionConfigWithTags& value) { SetDistributionConfigWithTags(value); return *this;}

    /**
     * <p>The distribution's configuration information. </p>
     */
    inline CreateDistributionWithTags2017_03_25Request& WithDistributionConfigWithTags(DistributionConfigWithTags&& value) { SetDistributionConfigWithTags(std::move(value)); return *this;}

  private:

    DistributionConfigWithTags m_distributionConfigWithTags;
    bool m_distributionConfigWithTagsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws

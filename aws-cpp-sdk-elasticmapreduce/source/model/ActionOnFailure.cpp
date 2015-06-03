/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticmapreduce/model/ActionOnFailure.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int TERMINATE_JOB_FLOW_HASH = HashingUtils::HashString("TERMINATE_JOB_FLOW");
static const int TERMINATE_CLUSTER_HASH = HashingUtils::HashString("TERMINATE_CLUSTER");
static const int CANCEL_AND_WAIT_HASH = HashingUtils::HashString("CANCEL_AND_WAIT");
static const int CONTINUE_HASH = HashingUtils::HashString("CONTINUE");

namespace Aws
{
namespace EMR
{
namespace Model
{
namespace ActionOnFailureMapper
{
ActionOnFailure GetActionOnFailureForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == TERMINATE_JOB_FLOW_HASH)
  {
    return ActionOnFailure::TERMINATE_JOB_FLOW;
  }
  else if (hashCode == TERMINATE_CLUSTER_HASH)
  {
    return ActionOnFailure::TERMINATE_CLUSTER;
  }
  else if (hashCode == CANCEL_AND_WAIT_HASH)
  {
    return ActionOnFailure::CANCEL_AND_WAIT;
  }
  else if (hashCode == CONTINUE_HASH)
  {
    return ActionOnFailure::CONTINUE;
  }

  return ActionOnFailure::TERMINATE_JOB_FLOW;
}

Aws::String GetNameForActionOnFailure(ActionOnFailure value)
{
  switch(value)
  {
  case ActionOnFailure::TERMINATE_JOB_FLOW:
    return "TERMINATE_JOB_FLOW";
  case ActionOnFailure::TERMINATE_CLUSTER:
    return "TERMINATE_CLUSTER";
  case ActionOnFailure::CANCEL_AND_WAIT:
    return "CANCEL_AND_WAIT";
  case ActionOnFailure::CONTINUE:
    return "CONTINUE";
  default:
    return "TERMINATE_JOB_FLOW";
  }
}

} // namespace ActionOnFailureMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
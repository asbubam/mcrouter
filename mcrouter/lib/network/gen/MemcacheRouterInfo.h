/*
 *  Copyright (c) 2016, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 */
#pragma once

#include "mcrouter/lib/network/gen/MemcacheRouteHandleIf.h"

namespace facebook {
namespace memcache {

namespace detail {

using MemcacheRoutableRequests = carbon::List<
    McAddRequest,
    McAppendRequest,
    McCasRequest,
    McDecrRequest,
    McDeleteRequest,
    McFlushAllRequest,
    McFlushReRequest,
    McGetRequest,
    McGetsRequest,
    McIncrRequest,
    McLeaseGetRequest,
    McLeaseSetRequest,
    McMetagetRequest,
    McPrependRequest,
    McReplaceRequest,
    McSetRequest,
    McTouchRequest>;

} // detail

struct MemcacheRouterInfo {
  using RouteHandleIf = MemcacheRouteHandleIf;

  template <class Route>
  using RouteHandle = MemcacheRouteHandle<Route>;
  using RoutableRequests = detail::MemcacheRoutableRequests;
};

} // memcache
} // facebook

#pragma once
/*
 *      Copyright (C) 2015 Team XBMC
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include "interfaces/legacy/swighelper.h"
#include "interfaces/legacy/mod_python/HttpRequest.h"

#include "network/httprequesthandler/IHTTPRequestHandler.h"

namespace XBMCAddon
{
  namespace xbmcmod_python
  {
    // add HTTP method constants
    SWIG_CONSTANT2(string, GET, HTTP_METHOD_GET);
    SWIG_CONSTANT2(string, HEAD, HTTP_METHOD_HEAD);
    SWIG_CONSTANT2(string, POST, HTTP_METHOD_POST);

    // add HTTP status code constants
    SWIG_CONSTANT2(int, HTTP_CONTINUE, MHD_HTTP_CONTINUE);
    SWIG_CONSTANT2(int, HTTP_SWITCHING_PROTOCOLS, MHD_HTTP_SWITCHING_PROTOCOLS);
    SWIG_CONSTANT2(int, HTTP_PROCESSING, MHD_HTTP_PROCESSING);
    SWIG_CONSTANT2(int, HTTP_OK, MHD_HTTP_OK);
    SWIG_CONSTANT2(int, HTTP_CREATED, MHD_HTTP_CREATED);
    SWIG_CONSTANT2(int, HTTP_ACCEPTED, MHD_HTTP_ACCEPTED);
    SWIG_CONSTANT2(int, HTTP_NON_AUTHORITATIVE_INFORMATION, MHD_HTTP_NON_AUTHORITATIVE_INFORMATION);
    SWIG_CONSTANT2(int, HTTP_NO_CONTENT, MHD_HTTP_NO_CONTENT);
    SWIG_CONSTANT2(int, HTTP_RESET_CONTENT, MHD_HTTP_RESET_CONTENT);
    SWIG_CONSTANT2(int, HTTP_PARTIAL_CONTENT, MHD_HTTP_PARTIAL_CONTENT);
    SWIG_CONSTANT2(int, HTTP_MULTI_STATUS, MHD_HTTP_MULTI_STATUS);
    SWIG_CONSTANT2(int, HTTP_MULTIPLE_CHOICES, MHD_HTTP_MULTIPLE_CHOICES);
    SWIG_CONSTANT2(int, HTTP_MOVED_PERMANENTLY, MHD_HTTP_MOVED_PERMANENTLY);
    SWIG_CONSTANT2(int, HTTP_FOUND, MHD_HTTP_FOUND);
    SWIG_CONSTANT2(int, HTTP_SEE_OTHER, MHD_HTTP_SEE_OTHER);
    SWIG_CONSTANT2(int, HTTP_NOT_MODIFIED, MHD_HTTP_NOT_MODIFIED);
    SWIG_CONSTANT2(int, HTTP_USE_PROXY, MHD_HTTP_USE_PROXY);
    SWIG_CONSTANT2(int, HTTP_SWITCH_PROXY, MHD_HTTP_SWITCH_PROXY);
    SWIG_CONSTANT2(int, HTTP_TEMPORARY_REDIRECT, MHD_HTTP_TEMPORARY_REDIRECT);
    SWIG_CONSTANT2(int, HTTP_BAD_REQUEST, MHD_HTTP_BAD_REQUEST);
    SWIG_CONSTANT2(int, HTTP_UNAUTHORIZED, MHD_HTTP_UNAUTHORIZED);
    SWIG_CONSTANT2(int, HTTP_PAYMENT_REQUIRED, MHD_HTTP_PAYMENT_REQUIRED);
    SWIG_CONSTANT2(int, HTTP_FORBIDDEN, MHD_HTTP_FORBIDDEN);
    SWIG_CONSTANT2(int, HTTP_NOT_FOUND, MHD_HTTP_NOT_FOUND);
    SWIG_CONSTANT2(int, HTTP_METHOD_NOT_ALLOWED, MHD_HTTP_METHOD_NOT_ALLOWED);
    SWIG_CONSTANT2(int, HTTP_METHOD_NOT_ACCEPTABLE, MHD_HTTP_METHOD_NOT_ACCEPTABLE);
    SWIG_CONSTANT2(int, HTTP_PROXY_AUTHENTICATION_REQUIRED, MHD_HTTP_PROXY_AUTHENTICATION_REQUIRED);
    SWIG_CONSTANT2(int, HTTP_REQUEST_TIMEOUT, MHD_HTTP_REQUEST_TIMEOUT);
    SWIG_CONSTANT2(int, HTTP_CONFLICT, MHD_HTTP_CONFLICT);
    SWIG_CONSTANT2(int, HTTP_GONE, MHD_HTTP_GONE);
    SWIG_CONSTANT2(int, HTTP_LENGTH_REQUIRED, MHD_HTTP_LENGTH_REQUIRED);
    SWIG_CONSTANT2(int, HTTP_PRECONDITION_FAILED, MHD_HTTP_PRECONDITION_FAILED);
    SWIG_CONSTANT2(int, HTTP_REQUEST_ENTITY_TOO_LARGE, MHD_HTTP_REQUEST_ENTITY_TOO_LARGE);
    SWIG_CONSTANT2(int, HTTP_REQUEST_URI_TOO_LONG, MHD_HTTP_REQUEST_URI_TOO_LONG);
    SWIG_CONSTANT2(int, HTTP_UNSUPPORTED_MEDIA_TYPE, MHD_HTTP_UNSUPPORTED_MEDIA_TYPE);
    SWIG_CONSTANT2(int, HTTP_REQUESTED_RANGE_NOT_SATISFIABLE, MHD_HTTP_REQUESTED_RANGE_NOT_SATISFIABLE);
    SWIG_CONSTANT2(int, HTTP_EXPECTATION_FAILED, MHD_HTTP_EXPECTATION_FAILED);
    SWIG_CONSTANT2(int, HTTP_UNPROCESSABLE_ENTITY, MHD_HTTP_UNPROCESSABLE_ENTITY);
    SWIG_CONSTANT2(int, HTTP_LOCKED, MHD_HTTP_LOCKED);
    SWIG_CONSTANT2(int, HTTP_FAILED_DEPENDENCY, MHD_HTTP_FAILED_DEPENDENCY);
    SWIG_CONSTANT2(int, HTTP_UNORDERED_COLLECTION, MHD_HTTP_UNORDERED_COLLECTION);
    SWIG_CONSTANT2(int, HTTP_UPGRADE_REQUIRED, MHD_HTTP_UPGRADE_REQUIRED);
    SWIG_CONSTANT2(int, HTTP_RETRY_WITH, MHD_HTTP_RETRY_WITH);
    SWIG_CONSTANT2(int, HTTP_INTERNAL_SERVER_ERROR, MHD_HTTP_INTERNAL_SERVER_ERROR);
    SWIG_CONSTANT2(int, HTTP_NOT_IMPLEMENTED, MHD_HTTP_NOT_IMPLEMENTED);
    SWIG_CONSTANT2(int, HTTP_BAD_GATEWAY, MHD_HTTP_BAD_GATEWAY);
    SWIG_CONSTANT2(int, HTTP_SERVICE_UNAVAILABLE, MHD_HTTP_SERVICE_UNAVAILABLE);
    SWIG_CONSTANT2(int, HTTP_GATEWAY_TIMEOUT, MHD_HTTP_GATEWAY_TIMEOUT);
    SWIG_CONSTANT2(int, HTTP_HTTP_VERSION_NOT_SUPPORTED, MHD_HTTP_HTTP_VERSION_NOT_SUPPORTED);
    SWIG_CONSTANT2(int, HTTP_VARIANT_ALSO_NEGOTIATES, MHD_HTTP_VARIANT_ALSO_NEGOTIATES);
    SWIG_CONSTANT2(int, HTTP_INSUFFICIENT_STORAGE, MHD_HTTP_INSUFFICIENT_STORAGE);
    SWIG_CONSTANT2(int, HTTP_BANDWIDTH_LIMIT_EXCEEDED, MHD_HTTP_BANDWIDTH_LIMIT_EXCEEDED);
    SWIG_CONSTANT2(int, HTTP_NOT_EXTENDED, MHD_HTTP_NOT_EXTENDED);

    // add HTTP header fields
    SWIG_CONSTANT2(string, HTTP_HEADER_ACCEPT, MHD_HTTP_HEADER_ACCEPT);
    SWIG_CONSTANT2(string, HTTP_HEADER_ACCEPT_CHARSET, MHD_HTTP_HEADER_ACCEPT_CHARSET);
    SWIG_CONSTANT2(string, HTTP_HEADER_ACCEPT_ENCODING, MHD_HTTP_HEADER_ACCEPT_ENCODING);
    SWIG_CONSTANT2(string, HTTP_HEADER_ACCEPT_LANGUAGE, MHD_HTTP_HEADER_ACCEPT_LANGUAGE);
    SWIG_CONSTANT2(string, HTTP_HEADER_ACCEPT_RANGES, MHD_HTTP_HEADER_ACCEPT_RANGES);
    SWIG_CONSTANT2(string, HTTP_HEADER_AGE, MHD_HTTP_HEADER_AGE);
    SWIG_CONSTANT2(string, HTTP_HEADER_ALLOW, MHD_HTTP_HEADER_ALLOW);
    SWIG_CONSTANT2(string, HTTP_HEADER_AUTHORIZATION, MHD_HTTP_HEADER_AUTHORIZATION);
    SWIG_CONSTANT2(string, HTTP_HEADER_CACHE_CONTROL, MHD_HTTP_HEADER_CACHE_CONTROL);
    SWIG_CONSTANT2(string, HTTP_HEADER_CONNECTION, MHD_HTTP_HEADER_CONNECTION);
    SWIG_CONSTANT2(string, HTTP_HEADER_CONTENT_ENCODING, MHD_HTTP_HEADER_CONTENT_ENCODING);
    SWIG_CONSTANT2(string, HTTP_HEADER_CONTENT_LANGUAGE, MHD_HTTP_HEADER_CONTENT_LANGUAGE);
    SWIG_CONSTANT2(string, HTTP_HEADER_CONTENT_LENGTH, MHD_HTTP_HEADER_CONTENT_LENGTH);
    SWIG_CONSTANT2(string, HTTP_HEADER_CONTENT_LOCATION, MHD_HTTP_HEADER_CONTENT_LOCATION);
    SWIG_CONSTANT2(string, HTTP_HEADER_CONTENT_MD5, MHD_HTTP_HEADER_CONTENT_MD5);
    SWIG_CONSTANT2(string, HTTP_HEADER_CONTENT_RANGE, MHD_HTTP_HEADER_CONTENT_RANGE);
    SWIG_CONSTANT2(string, HTTP_HEADER_CONTENT_TYPE, MHD_HTTP_HEADER_CONTENT_TYPE);
    SWIG_CONSTANT2(string, HTTP_HEADER_COOKIE, MHD_HTTP_HEADER_COOKIE);
    SWIG_CONSTANT2(string, HTTP_HEADER_DATE, MHD_HTTP_HEADER_DATE);
    SWIG_CONSTANT2(string, HTTP_HEADER_ETAG, MHD_HTTP_HEADER_ETAG);
    SWIG_CONSTANT2(string, HTTP_HEADER_EXPECT, MHD_HTTP_HEADER_EXPECT);
    SWIG_CONSTANT2(string, HTTP_HEADER_EXPIRES, MHD_HTTP_HEADER_EXPIRES);
    SWIG_CONSTANT2(string, HTTP_HEADER_FROM, MHD_HTTP_HEADER_FROM);
    SWIG_CONSTANT2(string, HTTP_HEADER_HOST, MHD_HTTP_HEADER_HOST);
    SWIG_CONSTANT2(string, HTTP_HEADER_IF_MATCH, MHD_HTTP_HEADER_IF_MATCH);
    SWIG_CONSTANT2(string, HTTP_HEADER_IF_MODIFIED_SINCE, MHD_HTTP_HEADER_IF_MODIFIED_SINCE);
    SWIG_CONSTANT2(string, HTTP_HEADER_IF_NONE_MATCH, MHD_HTTP_HEADER_IF_NONE_MATCH);
    SWIG_CONSTANT2(string, HTTP_HEADER_IF_RANGE, MHD_HTTP_HEADER_IF_RANGE);
    SWIG_CONSTANT2(string, HTTP_HEADER_IF_UNMODIFIED_SINCE, MHD_HTTP_HEADER_IF_UNMODIFIED_SINCE);
    SWIG_CONSTANT2(string, HTTP_HEADER_LAST_MODIFIED, MHD_HTTP_HEADER_LAST_MODIFIED);
    SWIG_CONSTANT2(string, HTTP_HEADER_LOCATION, MHD_HTTP_HEADER_LOCATION);
    SWIG_CONSTANT2(string, HTTP_HEADER_MAX_FORWARDS, MHD_HTTP_HEADER_MAX_FORWARDS);
    SWIG_CONSTANT2(string, HTTP_HEADER_PRAGMA, MHD_HTTP_HEADER_PRAGMA);
    SWIG_CONSTANT2(string, HTTP_HEADER_PROXY_AUTHENTICATE, MHD_HTTP_HEADER_PROXY_AUTHENTICATE);
    SWIG_CONSTANT2(string, HTTP_HEADER_PROXY_AUTHORIZATION, MHD_HTTP_HEADER_PROXY_AUTHORIZATION);
    SWIG_CONSTANT2(string, HTTP_HEADER_RANGE, MHD_HTTP_HEADER_RANGE);
    SWIG_CONSTANT2(string, HTTP_HEADER_REFERER, MHD_HTTP_HEADER_REFERER);
    SWIG_CONSTANT2(string, HTTP_HEADER_RETRY_AFTER, MHD_HTTP_HEADER_RETRY_AFTER);
    SWIG_CONSTANT2(string, HTTP_HEADER_SERVER, MHD_HTTP_HEADER_SERVER);
    SWIG_CONSTANT2(string, HTTP_HEADER_SET_COOKIE, MHD_HTTP_HEADER_SET_COOKIE);
    SWIG_CONSTANT2(string, HTTP_HEADER_SET_COOKIE2, MHD_HTTP_HEADER_SET_COOKIE2);
    SWIG_CONSTANT2(string, HTTP_HEADER_TE, MHD_HTTP_HEADER_TE);
    SWIG_CONSTANT2(string, HTTP_HEADER_TRAILER, MHD_HTTP_HEADER_TRAILER);
    SWIG_CONSTANT2(string, HTTP_HEADER_TRANSFER_ENCODING, MHD_HTTP_HEADER_TRANSFER_ENCODING);
    SWIG_CONSTANT2(string, HTTP_HEADER_UPGRADE, MHD_HTTP_HEADER_UPGRADE);
    SWIG_CONSTANT2(string, HTTP_HEADER_USER_AGENT, MHD_HTTP_HEADER_USER_AGENT);
    SWIG_CONSTANT2(string, HTTP_HEADER_VARY, MHD_HTTP_HEADER_VARY);
    SWIG_CONSTANT2(string, HTTP_HEADER_VIA, MHD_HTTP_HEADER_VIA);
    SWIG_CONSTANT2(string, HTTP_HEADER_WARNING, MHD_HTTP_HEADER_WARNING);
    SWIG_CONSTANT2(string, HTTP_HEADER_WWW_AUTHENTICATE, MHD_HTTP_HEADER_WWW_AUTHENTICATE);
  }
}
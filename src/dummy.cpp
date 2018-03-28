//! Assertion.
/*! \ingroup RAPIDJSON_CONFIG
 By default, rapidjson uses C \c assert() for internal assertions.
 User can override it by defining RAPIDJSON_ASSERT(x) macro.
 */
#ifndef RAPIDJSON_ASSERT
#define RAPIDJSON_ASSERT(x) ((void)0)
#endif // RAPIDJSON_ASSERT

/*
 * git clone https://github.com/tencent/rapidjson --branch v1.1.0 --depth 1
 */

#include "rapidjson/document.h"
#include <Rcpp.h>
using namespace Rcpp;


#pragma once
#define CHECK_TYPE(X) using TERMINATE_COMPILATION = decltype(X)::TYPE_CHECK;
#define CHECK_DTYPE(X) using TERMINATE_COMPILATION = typename decltype(X)::TYPE_CHECK;
#include<catch.hpp>
#define EXAMPLE(NAME) TEST_CASE( MODULE ": " #NAME, "[" MODULE "]" )

#include "pch.h"

#include <windows.h>
#include <combaseapi.h>
#undef interface

#include "nitf_Test.h"

#define TEST_CASE(X) TEST(test_image_loading__, X)
#include "nitf/unittests/test_image_loading++.cpp"

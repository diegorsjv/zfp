#include "array/zfparray2.h"
using namespace zfp;

extern "C" {
  #include "utils/hash64.h"
  #include "utils/rand64.h"
};

#define ARRAY_DIMS_SCALAR_TEST Array2dTest
#define ARRAY_DIMS_SCALAR_TEST_VIEWS Array2dTestViews

#include "utils/gtest2dTest.h"

#define ZFP_ARRAY_TYPE array2d
#define SCALAR double
#define DIMS 2

#include "testArrayViewsBase.cpp"
#include "testArray2ViewsBase.cpp"

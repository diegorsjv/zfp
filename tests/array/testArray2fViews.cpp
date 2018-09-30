#include "array/zfparray2.h"
using namespace zfp;

extern "C" {
  #include "utils/hash32.h"
  #include "utils/rand32.h"
};

#define ARRAY_DIMS_SCALAR_TEST Array2fTest
#define ARRAY_DIMS_SCALAR_TEST_VIEWS Array2fTestViews

#include "utils/gtest2fTest.h"

#define ZFP_ARRAY_TYPE array2f
#define SCALAR float
#define DIMS 2

#include "testArrayViewsBase.cpp"
#include "testArray2ViewsBase.cpp"

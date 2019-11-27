#include "cfparray1d.h"
#include "zfparray1.h"

#include "template/template.h"

#define CFP_ARRAY_TYPE cfp_array1d
#define CFP_REF_TYPE cfp_ref1d
#define CFP_PTR_TYPE cfp_ptr1d
#define ZFP_ARRAY_TYPE zfp::array1d
#define ZFP_SCALAR_TYPE double

#include "cfparray_source.cpp"
#include "cfparray1_source.cpp"

#undef CFP_ARRAY_TYPE
#undef CFP_REF_TYPE
#undef CFP_PTR_TYPE
#undef ZFP_ARRAY_TYPE
#undef ZFP_SCALAR_TYPE

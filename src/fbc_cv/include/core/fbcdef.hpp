// fbc_cv is free software and uses the same licence as OpenCV
// Email: fengbingchun@163.com

#ifndef FBC_CV_CORE_FBCDEF_HPP_
#define FBC_CV_CORE_FBCDEF_HPP_

// reference: include/opencv2/core/cvdef.h

#define FBC_EXPORTS __declspec(dllexport)

#ifndef MIN
	#define MIN(a,b)  ((a) > (b) ? (b) : (a))
#endif

#ifndef MAX
	#define MAX(a,b)  ((a) < (b) ? (b) : (a))
#endif

// fundamental constants
#define FBC_PI 3.1415926535897932384626433832795

#endif // FBC_CV_CORE_FBCDEF_HPP_

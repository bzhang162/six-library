/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class nitf_SumSq2BandDownSampler */

#ifndef _Included_nitf_SumSq2BandDownSampler
#define _Included_nitf_SumSq2BandDownSampler
#ifdef __cplusplus
extern "C" {
#endif
#undef nitf_SumSq2BandDownSampler_INVALID_ADDRESS
#define nitf_SumSq2BandDownSampler_INVALID_ADDRESS 0L
/*
 * Class:     nitf_SumSq2BandDownSampler
 * Method:    construct
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_nitf_SumSq2BandDownSampler_construct
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     nitf_SumSq2BandDownSampler
 * Method:    apply
 * Signature: ([[B[[BIIIIIIIII)Z
 */
JNIEXPORT jboolean JNICALL Java_nitf_SumSq2BandDownSampler_apply
  (JNIEnv *, jobject, jobjectArray, jobjectArray, jint, jint, jint, jint, jint, jint, jint, jint, jint);

/*
 * Class:     nitf_SumSq2BandDownSampler
 * Method:    getRowSkip
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_nitf_SumSq2BandDownSampler_getRowSkip
  (JNIEnv *, jobject);

/*
 * Class:     nitf_SumSq2BandDownSampler
 * Method:    getColSkip
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_nitf_SumSq2BandDownSampler_getColSkip
  (JNIEnv *, jobject);

/*
 * Class:     nitf_SumSq2BandDownSampler
 * Method:    getMinSupportedBands
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_nitf_SumSq2BandDownSampler_getMinSupportedBands
  (JNIEnv *, jobject);

/*
 * Class:     nitf_SumSq2BandDownSampler
 * Method:    getMaxSupportedBands
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_nitf_SumSq2BandDownSampler_getMaxSupportedBands
  (JNIEnv *, jobject);

/*
 * Class:     nitf_SumSq2BandDownSampler
 * Method:    isMultiBand
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_nitf_SumSq2BandDownSampler_isMultiBand
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
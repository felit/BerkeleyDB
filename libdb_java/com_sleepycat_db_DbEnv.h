/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_sleepycat_db_DbEnv */

#ifndef _Included_com_sleepycat_db_DbEnv
#define _Included_com_sleepycat_db_DbEnv
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_sleepycat_db_DbEnv
 * Method:    appexit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_DbEnv_appexit
  (JNIEnv *, jobject);

/*
 * Class:     com_sleepycat_db_DbEnv
 * Method:    appinit
 * Signature: (Ljava/lang/String;[Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_DbEnv_appinit
  (JNIEnv *, jobject, jstring, jobjectArray, jint);

/*
 * Class:     com_sleepycat_db_DbEnv
 * Method:    finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_DbEnv_finalize
  (JNIEnv *, jobject);

/*
 * Class:     com_sleepycat_db_DbEnv
 * Method:    get_version_major
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sleepycat_db_DbEnv_get_1version_1major
  (JNIEnv *, jclass);

/*
 * Class:     com_sleepycat_db_DbEnv
 * Method:    get_version_minor
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sleepycat_db_DbEnv_get_1version_1minor
  (JNIEnv *, jclass);

/*
 * Class:     com_sleepycat_db_DbEnv
 * Method:    get_version_patch
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sleepycat_db_DbEnv_get_1version_1patch
  (JNIEnv *, jclass);

/*
 * Class:     com_sleepycat_db_DbEnv
 * Method:    get_version_string
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_sleepycat_db_DbEnv_get_1version_1string
  (JNIEnv *, jclass);

/*
 * Class:     com_sleepycat_db_DbEnv
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_DbEnv_init
  (JNIEnv *, jobject);

/*
 * Class:     com_sleepycat_db_DbEnv
 * Method:    set_errcall
 * Signature: (Lcom/sleepycat/db/DbErrcall;)V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_DbEnv_set_1errcall
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_sleepycat_db_DbEnv
 * Method:    set_errpfx
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_DbEnv_set_1errpfx
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_sleepycat_db_DbEnv
 * Method:    set_lg_max
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_DbEnv_set_1lg_1max
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_sleepycat_db_DbEnv
 * Method:    set_lk_conflicts
 * Signature: ([[B)V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_DbEnv_set_1lk_1conflicts
  (JNIEnv *, jobject, jobjectArray);

/*
 * Class:     com_sleepycat_db_DbEnv
 * Method:    set_lk_detect
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_DbEnv_set_1lk_1detect
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_sleepycat_db_DbEnv
 * Method:    set_lk_max
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_DbEnv_set_1lk_1max
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_sleepycat_db_DbEnv
 * Method:    set_lk_modes
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_DbEnv_set_1lk_1modes
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_sleepycat_db_DbEnv
 * Method:    set_lorder
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_DbEnv_set_1lorder
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_sleepycat_db_DbEnv
 * Method:    set_mp_mmapsize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_DbEnv_set_1mp_1mmapsize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_sleepycat_db_DbEnv
 * Method:    set_mp_size
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_DbEnv_set_1mp_1size
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_sleepycat_db_DbEnv
 * Method:    set_tx_max
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_DbEnv_set_1tx_1max
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_sleepycat_db_DbEnv
 * Method:    set_verbose
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_sleepycat_db_DbEnv_set_1verbose
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
/*
 * Copyright 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include <jni.h>
#include "common/hello.h"

extern "C"
JNIEXPORT jstring
Java_com_facebook_buck_demo_Hello_getHelloString(JNIEnv *env, jobject obj)
{
  const char *str = helloString();
  return env->NewStringUTF(str);
}

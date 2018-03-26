//
// Created by dell on 2018/3/12.
//

#include "test-ceshi.h"

JNIEXPORT jstring JNICALL
Java_com_lulu_ndkdemo_NativeHelper_getAppKey(JNIEnv *env, jclass type) {

    //测试代码, 没有任何意义
    char* app_key = "5465465416948";

    //生成 Java 中的字符串对象
    //指针的指针
//     env <=> JNINativeInterface** C语言
    return (*env)->NewStringUTF(env, app_key);
}

#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_pactera_dell_firstndkdemo_MainActivity_stringFromJNI_two(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++ 我写个C语言的Demo";
    return env->NewStringUTF(hello.c_str());
}

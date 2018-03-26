#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_pactera_dell_firstndkdemo_MainActivity_stringFromJNITwo(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++two";
    return env->NewStringUTF(hello.c_str());
}

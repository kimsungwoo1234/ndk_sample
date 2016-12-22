#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_kr_co_swkim_ndksample_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "안녕 헬로우 C++";
    return env->NewStringUTF(hello.c_str());
}

JNIEXPORT jstring JNICALL
Java_kr_co_swkim_ndksample_MainActivity_stringSampleFromJNI(
        JNIEnv* env,
jobject /* this */) {
std::string hello = "안녕 헬로우 C++";
return env->NewStringUTF(hello.c_str());
}

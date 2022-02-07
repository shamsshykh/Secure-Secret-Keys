//
// Created by Shams on 1/18/22.
//

#include <jni.h>
#include <string>
extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_secure_Keys_apiKey(JNIEnv *env, jobject thiz) {
    std::string api_key = "YzUyN2FhOGZhZGNiNThmMWNjY2VmNzVlM2E2NGEzYWU=";
    return env->NewStringUTF(api_key.c_str());
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_secure_Keys_baseUrl(JNIEnv *env, jobject thiz) {
    std::string baseUrl = "aHR0cHM6Ly9GYWtlQXBpLmNvbS8=";
    return env->NewStringUTF(baseUrl.c_str());
}
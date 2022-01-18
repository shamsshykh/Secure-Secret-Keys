//
// Created by ezhire on 1/18/22.
//

#include <jni.h>
#include <string>
extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_secure_Keys_apiKey(JNIEnv *env, jobject thiz) {
    std::string api_key = "c527aa8fadcb58f1cccef75e3a64a3ae";
    return env->NewStringUTF(api_key.c_str());
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_secure_Keys_baseUrl(JNIEnv *env, jobject thiz) {
    std::string baseUrl = "https://FakeApi.com/";
    return env->NewStringUTF(baseUrl.c_str());
}
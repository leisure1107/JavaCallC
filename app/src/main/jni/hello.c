//
// Created by ASUS on 2018/1/4.
//

#include <jni.h>
#include "com_example_javacallc_JNI.h"

/**
*jstring 返回值
*Java_方法全类名_方法名
*参数：JNIEnv* env    必须要的，里面有很多可用的系统方法
*      jobject obj   自定义的
*/
jstring Java_com_example_javacallc_JNI_sayhello(JNIEnv * env,jobject obj){
    //jstring     (*NewStringUTF)(JNIEnv*, const char*);
    //根据指针字符串返回一个java类型的string字符串
    char* text = "i am a hero";
   return  (*env)->NewStringUTF(env,text);
}


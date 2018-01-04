package com.example.javacallc;

/**
 * Created by ASUS on 2018/1/4.
 * Java调用C代码
 */

public class JNI {
    static {
        //名字注意，需要跟你的build.gradle ndk节点下面的名字一样
        System.loadLibrary("NameProvider");
    }

    /**
     * 定义native方法
     * 调用C代码对应方法
     * @return
     */
    public native String sayhello();
}

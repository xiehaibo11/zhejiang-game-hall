package com.bianfeng.netlibsdk;

public interface ResponseDelivery {
    void postError(com.bianfeng.netlibsdk.Request<?> r1, com.bianfeng.netlibsdk.utils.NetException r2);

    void postResponse(com.bianfeng.netlibsdk.Request<?> r1, com.bianfeng.netlibsdk.Response<?> r2);

    void postResponse(com.bianfeng.netlibsdk.Request<?> r1, com.bianfeng.netlibsdk.Response<?> r2, java.lang.Runnable r3);
}

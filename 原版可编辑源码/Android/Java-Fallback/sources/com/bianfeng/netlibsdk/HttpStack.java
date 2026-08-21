package com.bianfeng.netlibsdk;

public interface HttpStack {
    com.bianfeng.netlibsdk.HttpResponse executeRequest(com.bianfeng.netlibsdk.Request<?> r1) throws java.io.IOException;
}

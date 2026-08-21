package com.bianfeng.netlibsdk;

public interface Network {
    com.bianfeng.netlibsdk.NetworkResponse performRequest(com.bianfeng.netlibsdk.Request<?> r1) throws com.bianfeng.netlibsdk.utils.NetException;
}

package com.bianfeng.netlibsdk;

public interface RetryPolicy {
    int getCurrentRetryCount();

    int getCurrentTimeout();

    void retry(com.bianfeng.netlibsdk.utils.NetException r1) throws com.bianfeng.netlibsdk.utils.NetException;
}

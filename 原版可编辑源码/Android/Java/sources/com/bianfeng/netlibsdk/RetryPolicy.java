package com.bianfeng.netlibsdk;

import com.bianfeng.netlibsdk.utils.NetException;

public interface RetryPolicy {
    int getCurrentRetryCount();

    int getCurrentTimeout();

    void retry(NetException netException) throws NetException;
}

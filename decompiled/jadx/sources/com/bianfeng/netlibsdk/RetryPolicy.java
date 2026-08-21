package com.bianfeng.netlibsdk;

import com.bianfeng.netlibsdk.utils.NetException;

/* JADX INFO: loaded from: classes.dex */
public interface RetryPolicy {
    int getCurrentRetryCount();

    int getCurrentTimeout();

    void retry(NetException netException) throws NetException;
}

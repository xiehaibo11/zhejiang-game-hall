package com.bianfeng.netlibsdk;

import com.bianfeng.netlibsdk.utils.NetException;

/* JADX INFO: loaded from: classes.dex */
public interface ResponseDelivery {
    void postError(Request<?> request, NetException netException);

    void postResponse(Request<?> request, Response<?> response);

    void postResponse(Request<?> request, Response<?> response, Runnable runnable);
}

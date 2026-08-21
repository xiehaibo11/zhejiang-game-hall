package com.mbridge.msdk.foundation.same.net;

/* JADX INFO: compiled from: IListener.java */
/* JADX INFO: loaded from: classes2.dex */
public interface e<T> {
    void onCancel();

    void onError(com.mbridge.msdk.foundation.same.net.a.a aVar);

    void onFinish();

    void onNetworking();

    void onPreExecute();

    void onProgressChange(long j, long j2);

    void onRetry();

    void onSuccess(k<T> kVar);
}

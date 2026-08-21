package com.bianfeng.netlib;

/* JADX INFO: loaded from: classes.dex */
public interface HttpListener {
    void onComplete(String str);

    void onError(int i, String str);
}

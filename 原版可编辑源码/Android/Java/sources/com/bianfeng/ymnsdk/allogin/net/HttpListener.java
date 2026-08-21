package com.bianfeng.ymnsdk.allogin.net;

public interface HttpListener {
    void onComplete(String str);

    void onError(int i, String str);
}

package com.bianfeng.netlib;

public interface HttpListener {
    void onComplete(String str);

    void onError(int i, String str);
}

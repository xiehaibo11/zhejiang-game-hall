package com.bianfeng.paylib.action;

public interface HttpListener {
    void onComplete(String str);

    void onError(int i, String str);
}

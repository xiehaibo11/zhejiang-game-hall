package com.bianfeng.ymnsdk.action;

public interface HttpListener {
    void onComplete(String str);

    void onError(int i, String str);
}

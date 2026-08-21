package com.bianfeng.ymnsdk.action;

public interface HttpListener {
    void onComplete(String r1);

    void onError(int r1, String r2);
}

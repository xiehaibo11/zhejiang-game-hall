package com.bianfeng.paylib.action;

public interface HttpListener {
    void onComplete(java.lang.String r1);

    void onError(int r1, java.lang.String r2);
}

package com.bianfeng.ymnsdk.allogin.net;

public interface getPreLoginCallback {
    void onPreLoginError(int i, String str);

    void onPreLoginSuccess(String str);
}

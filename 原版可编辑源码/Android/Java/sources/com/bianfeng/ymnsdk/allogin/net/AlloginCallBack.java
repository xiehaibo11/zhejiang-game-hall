package com.bianfeng.ymnsdk.allogin.net;

public interface AlloginCallBack {
    void onPreLoginError(int i, String str);

    void onPreLoginSuccess(String str);
}

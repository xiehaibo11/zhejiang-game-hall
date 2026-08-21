package com.bianfeng.splitscreenlib;

/* JADX INFO: loaded from: classes.dex */
public interface YmnH5Callback {
    void onCloseGame();

    void onCloseGameList();

    void onFullScreen();

    void onGameListFail(String str);

    void onGameListSuccess();

    void onLoginFail(String str);

    void onLoginSuccess();

    void onPayFail(String str);

    void onPaySuccess();

    void onSplitScreen();
}

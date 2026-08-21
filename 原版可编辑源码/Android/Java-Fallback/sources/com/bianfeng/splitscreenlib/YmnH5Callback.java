package com.bianfeng.splitscreenlib;

public interface YmnH5Callback {
    void onCloseGame();

    void onCloseGameList();

    void onFullScreen();

    void onGameListFail(java.lang.String r1);

    void onGameListSuccess();

    void onLoginFail(java.lang.String r1);

    void onLoginSuccess();

    void onPayFail(java.lang.String r1);

    void onPaySuccess();

    void onSplitScreen();
}

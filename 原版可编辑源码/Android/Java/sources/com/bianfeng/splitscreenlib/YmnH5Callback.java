package com.bianfeng.splitscreenlib;

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

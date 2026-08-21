package com.bianfeng.splitscreenlib.gameroom;

public class YmnGoomCallback implements com.bianfeng.roomlib.YmnH5GameRoomCallback {
    public YmnGoomCallback() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onClose() {
            r1 = this;
            com.bianfeng.splitscreenlib.YmnH5GameSdk r0 = com.bianfeng.splitscreenlib.YmnH5GameSdk.getInstance()
            com.bianfeng.splitscreenlib.YmnH5Callback r0 = r0.getCallback()
            r0.onCloseGameList()
            return
    }

    @Override
    public void onFail(java.lang.String r2) {
            r1 = this;
            com.bianfeng.splitscreenlib.YmnH5GameSdk r0 = com.bianfeng.splitscreenlib.YmnH5GameSdk.getInstance()
            com.bianfeng.splitscreenlib.YmnH5Callback r0 = r0.getCallback()
            r0.onGameListFail(r2)
            return
    }

    @Override
    public void onSelectGame(java.lang.String r2, java.lang.String r3, int r4, int r5) {
            r1 = this;
            com.bianfeng.loginlib.YmnH5GameLoginSdk r0 = com.bianfeng.loginlib.YmnH5GameLoginSdk.getInstance()
            r0.startGame(r2, r3, r4, r5)
            return
    }

    @Override
    public void onSuccess() {
            r1 = this;
            com.bianfeng.splitscreenlib.YmnH5GameSdk r0 = com.bianfeng.splitscreenlib.YmnH5GameSdk.getInstance()
            com.bianfeng.splitscreenlib.YmnH5Callback r0 = r0.getCallback()
            r0.onGameListSuccess()
            return
    }
}

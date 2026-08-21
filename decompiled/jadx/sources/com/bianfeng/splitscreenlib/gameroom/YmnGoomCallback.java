package com.bianfeng.splitscreenlib.gameroom;

import com.bianfeng.loginlib.YmnH5GameLoginSdk;
import com.bianfeng.roomlib.YmnH5GameRoomCallback;
import com.bianfeng.splitscreenlib.YmnH5GameSdk;

/* JADX INFO: loaded from: classes.dex */
public class YmnGoomCallback implements YmnH5GameRoomCallback {
    @Override // com.bianfeng.roomlib.YmnH5GameRoomCallback
    public void onFail(String str) {
        YmnH5GameSdk.getInstance().getCallback().onGameListFail(str);
    }

    @Override // com.bianfeng.roomlib.YmnH5GameRoomCallback
    public void onSelectGame(String str, String str2, int i, int i2) {
        YmnH5GameLoginSdk.getInstance().startGame(str, str2, i, i2);
    }

    @Override // com.bianfeng.roomlib.YmnH5GameRoomCallback
    public void onSuccess() {
        YmnH5GameSdk.getInstance().getCallback().onGameListSuccess();
    }

    @Override // com.bianfeng.roomlib.YmnH5GameRoomCallback
    public void onClose() {
        YmnH5GameSdk.getInstance().getCallback().onCloseGameList();
    }
}

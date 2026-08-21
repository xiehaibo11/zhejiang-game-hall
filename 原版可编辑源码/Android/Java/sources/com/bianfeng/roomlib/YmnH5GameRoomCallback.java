package com.bianfeng.roomlib;

public interface YmnH5GameRoomCallback {
    void onClose();

    void onFail(String str);

    void onSelectGame(String str, String str2, int i, int i2);

    void onSuccess();
}

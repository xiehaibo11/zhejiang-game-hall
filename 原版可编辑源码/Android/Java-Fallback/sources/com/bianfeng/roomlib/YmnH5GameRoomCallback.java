package com.bianfeng.roomlib;

public interface YmnH5GameRoomCallback {
    void onClose();

    void onFail(java.lang.String r1);

    void onSelectGame(java.lang.String r1, java.lang.String r2, int r3, int r4);

    void onSuccess();
}

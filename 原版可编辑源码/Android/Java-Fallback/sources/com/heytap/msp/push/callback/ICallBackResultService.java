package com.heytap.msp.push.callback;

public interface ICallBackResultService {
    void onError(int r1, java.lang.String r2);

    void onGetNotificationStatus(int r1, int r2);

    void onGetPushStatus(int r1, int r2);

    void onRegister(int r1, java.lang.String r2);

    void onSetPushTime(int r1, java.lang.String r2);

    void onUnRegister(int r1);
}

package com.igexin.sdk.aidl;

public interface IGexinMsgService extends android.os.IInterface {
    byte[] extFunction(byte[] r1);

    int isStarted(java.lang.String r1);

    int onASNLConnected(java.lang.String r1, java.lang.String r2, java.lang.String r3, long r4);

    int onASNLNetworkConnected();

    int onASNLNetworkDisconnected();

    int onPSNLConnected(java.lang.String r1, java.lang.String r2, java.lang.String r3, long r4);

    int receiveToPSNL(java.lang.String r1, java.lang.String r2, byte[] r3);

    int sendByASNL(java.lang.String r1, java.lang.String r2, byte[] r3);

    int setSilentTime(int r1, int r2, java.lang.String r3);

    int startService(java.lang.String r1);

    int stopService(java.lang.String r1);
}

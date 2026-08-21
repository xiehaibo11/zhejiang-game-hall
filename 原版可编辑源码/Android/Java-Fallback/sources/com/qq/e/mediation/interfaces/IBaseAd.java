package com.qq.e.mediation.interfaces;

public interface IBaseAd {
    int getECPM();

    java.util.Map<java.lang.String, java.lang.Object> getExtraInfo();

    java.lang.String getReqId();

    void sendLossNotification(int r1, int r2, java.lang.String r3);

    void sendWinNotification(int r1);

    void setBidECPM(int r1);

    void setPayload(java.lang.String r1);
}

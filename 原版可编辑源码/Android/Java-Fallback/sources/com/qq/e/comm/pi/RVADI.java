package com.qq.e.comm.pi;

public interface RVADI extends com.qq.e.comm.pi.LADI {
    java.lang.String getAdNetWorkName();

    @java.lang.Deprecated
    long getExpireTimestamp();

    int getRewardAdType();

    int getVideoDuration();

    boolean hasShown();

    void loadAD();

    void setLoadAdParams(com.qq.e.comm.constants.LoadAdParams r1);

    void setServerSideVerificationOptions(com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r1);

    void setVolumeOn(boolean r1);

    void showAD();

    void showAD(android.app.Activity r1);
}

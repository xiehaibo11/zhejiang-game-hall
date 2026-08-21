package com.qq.e.comm.pi;

public interface NEADI extends com.qq.e.comm.pi.ADI {
    java.lang.String getAdNetWorkName();

    void loadAd(int r1);

    void loadAd(int r1, com.qq.e.comm.constants.LoadAdParams r2);

    void setMaxVideoDuration(int r1);

    void setMinVideoDuration(int r1);

    void setServerSideVerificationOptions(com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r1);

    void setVideoOption(com.qq.e.ads.cfg.VideoOption r1);
}

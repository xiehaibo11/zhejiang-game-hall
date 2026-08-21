package com.qq.e.comm.pi;

public interface UBVI extends com.qq.e.comm.pi.LADI {
    void destroy();

    void fetchAd();

    java.lang.String getAdNetWorkName();

    void onWindowFocusChanged(boolean r1);

    void setDownAPPConfirmPolicy(com.qq.e.ads.cfg.DownAPPConfirmPolicy r1);

    void setLoadAdParams(com.qq.e.comm.constants.LoadAdParams r1);

    void setRefresh(int r1);

    void setServerSideVerificationOptions(com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r1);
}

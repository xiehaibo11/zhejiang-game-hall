package com.qq.e.comm.pi;

public interface UIADI extends com.qq.e.comm.pi.LADI {
    void close();

    void destroy();

    java.lang.String getAdNetWorkName();

    int getAdPatternType();

    int getVideoDuration();

    void loadAd();

    void loadFullScreenAD();

    void setDownAPPConfirmPolicy(com.qq.e.ads.cfg.DownAPPConfirmPolicy r1);

    void setLoadAdParams(com.qq.e.comm.constants.LoadAdParams r1);

    void setMaxVideoDuration(int r1);

    void setMinVideoDuration(int r1);

    void setServerSideVerificationOptions(com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r1);

    void setVideoOption(com.qq.e.ads.cfg.VideoOption r1);

    void show();

    void show(android.app.Activity r1);

    void showAsPopupWindow();

    void showAsPopupWindow(android.app.Activity r1);

    void showFullScreenAD(android.app.Activity r1);
}

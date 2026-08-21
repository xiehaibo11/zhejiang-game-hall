package com.qq.e.comm.pi;

public interface NSPVI extends com.qq.e.comm.pi.LADI {
    void fetchAdOnly();

    void fetchAndShowIn(android.view.ViewGroup r1);

    void fetchFullScreenAdOnly();

    void fetchFullScreenAndShowIn(android.view.ViewGroup r1);

    java.lang.String getAdNetWorkName();

    android.graphics.Bitmap getZoomOutBitmap();

    void preload();

    void setAdListener(com.qq.e.comm.adevent.ADListener r1);

    void setDeveloperLogo(int r1);

    void setDeveloperLogo(byte[] r1);

    void setFetchDelay(int r1);

    void setLoadAdParams(com.qq.e.comm.constants.LoadAdParams r1);

    void setServerSideVerificationOptions(com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r1);

    @java.lang.Deprecated
    void setSkipView(android.view.View r1);

    void setSupportZoomOut(boolean r1);

    void showAd(android.view.ViewGroup r1);

    void showFullScreenAd(android.view.ViewGroup r1);

    void zoomOutAnimationFinish();
}

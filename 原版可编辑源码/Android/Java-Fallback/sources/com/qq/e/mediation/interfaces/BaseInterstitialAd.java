package com.qq.e.mediation.interfaces;

public abstract class BaseInterstitialAd implements com.qq.e.mediation.interfaces.IBaseAd {
    public static final int DEFAULT_PRIORITY = -1;

    public BaseInterstitialAd(android.app.Activity r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void close();

    public abstract void destory();

    public abstract int getAdPatternType();

    public int getAdapterPriority() {
            r1 = this;
            r0 = -1
            return r0
    }

    public abstract java.lang.String getECPMLevel();

    public abstract int getVideoDuration();

    public abstract boolean isValid();

    public abstract void loadAd();

    public abstract void loadFullScreenAD();

    @Override
    public void sendLossNotification(int r1, int r2, java.lang.String r3) {
            r0 = this;
            return
    }

    @Override
    public void sendWinNotification(int r1) {
            r0 = this;
            return
    }

    public abstract void setAdListener(com.qq.e.comm.adevent.ADListener r1);

    @Override
    public void setBidECPM(int r1) {
            r0 = this;
            return
    }

    public abstract void setDownAPPConfirmPolicy(com.qq.e.ads.cfg.DownAPPConfirmPolicy r1);

    public abstract void setMaxVideoDuration(int r1);

    public abstract void setMinVideoDuration(int r1);

    @Override
    public void setPayload(java.lang.String r1) {
            r0 = this;
            return
    }

    public abstract void setServerSideVerificationOptions(com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r1);

    public abstract void setVideoOption(com.qq.e.ads.cfg.VideoOption r1);

    public abstract void show();

    public abstract void show(android.app.Activity r1);

    public abstract void showAsPopupWindow();

    public abstract void showAsPopupWindow(android.app.Activity r1);

    public abstract void showFullScreenAD(android.app.Activity r1);
}

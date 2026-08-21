package com.qq.e.mediation.interfaces;

public abstract class BaseSplashAd implements com.qq.e.mediation.interfaces.IBaseAd {
    public static final int DEFAULT_PRIORITY = -1;

    public BaseSplashAd(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void fetchAdOnly();

    public abstract void fetchFullScreenAdOnly();

    public int getAdapterPriority() {
            r1 = this;
            r0 = -1
            return r0
    }

    public abstract java.lang.String getECPMLevel();

    public abstract android.graphics.Bitmap getZoomOutBitmap();

    public abstract boolean isValid();

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

    public abstract void setADListener(com.qq.e.comm.adevent.ADListener r1);

    @Override
    public void setBidECPM(int r1) {
            r0 = this;
            return
    }

    public abstract void setDeveloperLogo(int r1);

    public abstract void setDeveloperLogo(byte[] r1);

    public abstract void setFetchDelay(int r1);

    public abstract void setLoadAdParams(com.qq.e.comm.constants.LoadAdParams r1);

    @Override
    public void setPayload(java.lang.String r1) {
            r0 = this;
            return
    }

    public abstract void setServerSideVerificationOptions(com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r1);

    public abstract void setSkipView(android.view.View r1);

    public abstract void setSupportZoomOut(boolean r1);

    public abstract void showAd(android.view.ViewGroup r1);

    public abstract void showFullScreenAd(android.view.ViewGroup r1);

    public abstract void zoomOutAnimationFinish();
}

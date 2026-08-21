package com.qq.e.mediation.interfaces;

public abstract class BaseBannerAd implements com.qq.e.mediation.interfaces.IBaseAd {
    public BaseBannerAd(android.app.Activity r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void destroy();

    public abstract android.view.View getAdView();

    public abstract boolean isValid();

    public abstract void loadAD();

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

    public abstract void setAdSize(int r1, int r2);

    @Override
    public void setBidECPM(int r1) {
            r0 = this;
            return
    }

    @Override
    public void setPayload(java.lang.String r1) {
            r0 = this;
            return
    }

    public abstract void setServerSideVerificationOptions(com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r1);
}

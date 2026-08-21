package com.qq.e.mediation.interfaces;

public abstract class BaseNativeUnifiedAd implements com.qq.e.mediation.interfaces.IBaseAd {
    public static final int DEFAULT_PRIORITY = -1;

    public BaseNativeUnifiedAd(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            return
    }

    public int getAdapterPriority() {
            r1 = this;
            r0 = -1
            return r0
    }

    public abstract void loadData(int r1);

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

    public abstract void setCategories(java.util.List<java.lang.String> r1);

    public abstract void setDownAPPConfirmPolicy(com.qq.e.ads.cfg.DownAPPConfirmPolicy r1);

    public abstract void setECPMLevel(java.lang.String r1);

    public abstract void setMaxVideoDuration(int r1);

    public abstract void setMinVideoDuration(int r1);

    @Override
    public void setPayload(java.lang.String r1) {
            r0 = this;
            return
    }
}

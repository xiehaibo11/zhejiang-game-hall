package com.qq.e.ads;

import com.qq.e.comm.pi.LADI;

public abstract class LiteAbstractAD<T extends com.qq.e.comm.pi.LADI> extends com.qq.e.ads.AbstractAD<T> implements com.qq.e.comm.pi.LADI, com.qq.e.comm.compliance.DownloadConfirmListener {
    private com.qq.e.comm.compliance.DownloadConfirmListener f;

    public LiteAbstractAD() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String getApkInfoUrl() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.LADI r0 = (com.qq.e.comm.pi.LADI) r0
            java.lang.String r0 = r0.getApkInfoUrl()
            return r0
        Lb:
            java.lang.String r0 = "getApkInfoUrl"
            r1.a(r0)
            r0 = 0
            return r0
    }

    @Override
    public int getECPM() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.LADI r0 = (com.qq.e.comm.pi.LADI) r0
            int r0 = r0.getECPM()
            return r0
        Lb:
            java.lang.String r0 = "getECPM"
            r1.a(r0)
            r0 = -1
            return r0
    }

    @Override
    public java.lang.String getECPMLevel() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.LADI r0 = (com.qq.e.comm.pi.LADI) r0
            java.lang.String r0 = r0.getECPMLevel()
            return r0
        Lb:
            java.lang.String r0 = "getECPMLevel"
            r1.a(r0)
            r0 = 0
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.Object> getExtraInfo() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.LADI r0 = (com.qq.e.comm.pi.LADI) r0
            java.util.Map r0 = r0.getExtraInfo()
            return r0
        Lb:
            java.lang.String r0 = "getExtraInfo"
            r1.a(r0)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            return r0
    }

    @Override
    public boolean isValid() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.LADI r0 = (com.qq.e.comm.pi.LADI) r0
            boolean r0 = r0.isValid()
            return r0
        Lb:
            java.lang.String r0 = "isValid"
            r1.a(r0)
            r0 = 0
            return r0
    }

    @Override
    public void onDownloadConfirm(android.app.Activity r2, int r3, java.lang.String r4, com.qq.e.comm.compliance.DownloadConfirmCallBack r5) {
            r1 = this;
            com.qq.e.comm.compliance.DownloadConfirmListener r0 = r1.f
            if (r0 == 0) goto L7
            r0.onDownloadConfirm(r2, r3, r4, r5)
        L7:
            return
    }

    @Override
    public void sendLossNotification(int r2, int r3, java.lang.String r4) {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto La
            com.qq.e.comm.pi.LADI r0 = (com.qq.e.comm.pi.LADI) r0
            r0.sendLossNotification(r2, r3, r4)
            goto Lf
        La:
            java.lang.String r2 = "sendLossNotification"
            r1.a(r2)
        Lf:
            return
    }

    @Override
    public void sendLossNotification(java.util.Map<java.lang.String, java.lang.Object> r2) {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto La
            com.qq.e.comm.pi.LADI r0 = (com.qq.e.comm.pi.LADI) r0
            r0.sendLossNotification(r2)
            goto Lf
        La:
            java.lang.String r2 = "sendLossNotification"
            r1.a(r2)
        Lf:
            return
    }

    @Override
    public void sendWinNotification(int r2) {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto La
            com.qq.e.comm.pi.LADI r0 = (com.qq.e.comm.pi.LADI) r0
            r0.sendWinNotification(r2)
            goto Lf
        La:
            java.lang.String r2 = "sendWinNotification"
            r1.a(r2)
        Lf:
            return
    }

    @Override
    public void sendWinNotification(java.util.Map<java.lang.String, java.lang.Object> r2) {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto La
            com.qq.e.comm.pi.LADI r0 = (com.qq.e.comm.pi.LADI) r0
            r0.sendWinNotification(r2)
            goto Lf
        La:
            java.lang.String r2 = "sendWinNotification"
            r1.a(r2)
        Lf:
            return
    }

    @Override
    public void setBidECPM(int r2) {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto La
            com.qq.e.comm.pi.LADI r0 = (com.qq.e.comm.pi.LADI) r0
            r0.setBidECPM(r2)
            goto Lf
        La:
            java.lang.String r2 = "setBidECPM"
            r1.a(r2)
        Lf:
            return
    }

    @Override
    public void setDownloadConfirmListener(com.qq.e.comm.compliance.DownloadConfirmListener r1) {
            r0 = this;
            r0.f = r1
            T r1 = r0.a
            if (r1 == 0) goto Lb
            com.qq.e.comm.pi.LADI r1 = (com.qq.e.comm.pi.LADI) r1
            r1.setDownloadConfirmListener(r0)
        Lb:
            return
    }
}

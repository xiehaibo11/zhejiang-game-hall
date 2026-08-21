package com.qq.e.ads.banner2;

public class UnifiedBannerView extends android.widget.FrameLayout implements com.qq.e.comm.compliance.ApkDownloadComplianceInterface, com.qq.e.comm.pi.IBidding, com.qq.e.comm.pi.NFBI, com.qq.e.comm.pi.IReward {
    final com.qq.e.ads.banner2.UnifiedBannerAD a;

    public UnifiedBannerView(android.app.Activity r2, java.lang.String r3, com.qq.e.ads.banner2.UnifiedBannerADListener r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public UnifiedBannerView(android.app.Activity r1, java.lang.String r2, com.qq.e.ads.banner2.UnifiedBannerADListener r3, java.util.Map r4) {
            r0 = this;
            r0.<init>(r1)
            com.qq.e.ads.banner2.UnifiedBannerAD r4 = new com.qq.e.ads.banner2.UnifiedBannerAD
            r4.<init>(r1, r0, r2, r3)
            r0.a = r4
            r0.a()
            return
    }

    public UnifiedBannerView(android.app.Activity r7, java.lang.String r8, com.qq.e.ads.banner2.UnifiedBannerADListener r9, java.util.Map r10, java.lang.String r11) {
            r6 = this;
            r6.<init>(r7)
            boolean r10 = android.text.TextUtils.isEmpty(r11)
            if (r10 == 0) goto L23
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.Class<com.qq.e.ads.banner2.UnifiedBannerView> r0 = com.qq.e.ads.banner2.UnifiedBannerView.class
            java.lang.String r0 = r0.getSimpleName()
            r10.append(r0)
            java.lang.String r0 = "构造函数中 token 参数不可为空"
            r10.append(r0)
            java.lang.String r10 = r10.toString()
            com.qq.e.comm.util.GDTLogger.e(r10)
        L23:
            com.qq.e.ads.banner2.UnifiedBannerAD r10 = new com.qq.e.ads.banner2.UnifiedBannerAD
            r0 = r10
            r1 = r7
            r2 = r6
            r3 = r8
            r4 = r11
            r5 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            r6.a = r10
            r6.a()
            return
    }

    private void a() {
            r3 = this;
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r1 = -1
            r2 = -2
            r0.<init>(r1, r2)
            r3.setLayoutParams(r0)
            return
    }

    public void destroy() {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerAD r0 = r1.a
            r0.destroy()
            return
    }

    public java.lang.String getAdNetWorkName() {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerAD r0 = r1.a
            java.lang.String r0 = r0.getAdNetWorkName()
            return r0
    }

    @Override
    public java.lang.String getApkInfoUrl() {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerAD r0 = r1.a
            java.lang.String r0 = r0.getApkInfoUrl()
            return r0
    }

    public int getECPM() {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerAD r0 = r1.a
            int r0 = r0.getECPM()
            return r0
    }

    public java.lang.String getECPMLevel() {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerAD r0 = r1.a
            java.lang.String r0 = r0.getECPMLevel()
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.Object> getExtraInfo() {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerAD r0 = r1.a
            java.util.Map r0 = r0.getExtraInfo()
            return r0
    }

    public boolean isValid() {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerAD r0 = r1.a
            boolean r0 = r0.isValid()
            return r0
    }

    public void loadAD() {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerAD r0 = r1.a
            r0.loadAD()
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r2) {
            r1 = this;
            super.onWindowFocusChanged(r2)
            com.qq.e.ads.banner2.UnifiedBannerAD r0 = r1.a
            r0.onWindowFocusChanged(r2)
            return
    }

    @Override
    public void sendLossNotification(int r2, int r3, java.lang.String r4) {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerAD r0 = r1.a
            r0.sendLossNotification(r2, r3, r4)
            return
    }

    @Override
    public void sendLossNotification(java.util.Map<java.lang.String, java.lang.Object> r2) {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerAD r0 = r1.a
            r0.sendLossNotification(r2)
            return
    }

    @Override
    public void sendWinNotification(int r2) {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerAD r0 = r1.a
            r0.sendWinNotification(r2)
            return
    }

    @Override
    public void sendWinNotification(java.util.Map<java.lang.String, java.lang.Object> r2) {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerAD r0 = r1.a
            r0.sendWinNotification(r2)
            return
    }

    @Override
    public void setBidECPM(int r2) {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerAD r0 = r1.a
            r0.setBidECPM(r2)
            return
    }

    public void setDownConfirmPolicy(com.qq.e.ads.cfg.DownAPPConfirmPolicy r2) {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerAD r0 = r1.a
            r0.a(r2)
            return
    }

    @Override
    public void setDownloadConfirmListener(com.qq.e.comm.compliance.DownloadConfirmListener r2) {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerAD r0 = r1.a
            r0.setDownloadConfirmListener(r2)
            return
    }

    public void setLoadAdParams(com.qq.e.comm.constants.LoadAdParams r2) {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerAD r0 = r1.a
            r0.setLoadAdParams(r2)
            return
    }

    @Override
    public void setNegativeFeedbackListener(com.qq.e.comm.listeners.NegativeFeedbackListener r2) {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerAD r0 = r1.a
            r0.setNegativeFeedbackListener(r2)
            return
    }

    public void setRefresh(int r2) {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerAD r0 = r1.a
            r0.c(r2)
            return
    }

    @Override
    public void setRewardListener(com.qq.e.comm.listeners.ADRewardListener r2) {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerAD r0 = r1.a
            r0.setRewardListener(r2)
            return
    }

    @Override
    public void setServerSideVerificationOptions(com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r2) {
            r1 = this;
            com.qq.e.ads.banner2.UnifiedBannerAD r0 = r1.a
            r0.setServerSideVerificationOptions(r2)
            return
    }
}

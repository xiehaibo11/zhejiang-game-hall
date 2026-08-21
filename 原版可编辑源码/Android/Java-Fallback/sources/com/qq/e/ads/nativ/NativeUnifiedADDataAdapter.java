package com.qq.e.ads.nativ;

public class NativeUnifiedADDataAdapter implements com.qq.e.ads.nativ.NativeUnifiedADData, com.qq.e.comm.compliance.DownloadConfirmListener {
    private com.qq.e.ads.nativ.NativeUnifiedADData a;
    private com.qq.e.ads.nativ.NativeADEventListener b;
    private com.qq.e.ads.nativ.NativeADMediaListener c;
    private com.qq.e.comm.compliance.DownloadConfirmListener d;
    private com.qq.e.comm.listeners.NegativeFeedbackListener e;

    static class 1 {
    }

    private class UnifiedAdListener implements com.qq.e.comm.adevent.ADListener {
        final com.qq.e.ads.nativ.NativeUnifiedADDataAdapter a;

        private UnifiedAdListener(com.qq.e.ads.nativ.NativeUnifiedADDataAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        UnifiedAdListener(com.qq.e.ads.nativ.NativeUnifiedADDataAdapter r1, com.qq.e.ads.nativ.NativeUnifiedADDataAdapter.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void onADEvent(com.qq.e.comm.adevent.ADEvent r2) {
                r1 = this;
                com.qq.e.ads.nativ.NativeUnifiedADDataAdapter r0 = r1.a
                boolean r0 = com.qq.e.ads.nativ.NativeUnifiedADDataAdapter.a(r0, r2)
                if (r0 == 0) goto L9
                return
            L9:
                com.qq.e.ads.nativ.NativeUnifiedADDataAdapter r0 = r1.a
                boolean r0 = com.qq.e.ads.nativ.NativeUnifiedADDataAdapter.b(r0, r2)
                if (r0 == 0) goto L12
                return
            L12:
                com.qq.e.ads.nativ.NativeUnifiedADDataAdapter r0 = r1.a
                if (r0 == 0) goto L1b
                boolean r2 = com.qq.e.ads.nativ.NativeUnifiedADDataAdapter.c(r0, r2)
                return
            L1b:
                r2 = 0
                throw r2
        }
    }

    public NativeUnifiedADDataAdapter(com.qq.e.ads.nativ.NativeUnifiedADData r3) {
            r2 = this;
            r2.<init>()
            r2.a = r3
            boolean r0 = r3 instanceof com.qq.e.comm.adevent.ADEventListener
            if (r0 == 0) goto L14
            com.qq.e.comm.adevent.ADEventListener r3 = (com.qq.e.comm.adevent.ADEventListener) r3
            com.qq.e.ads.nativ.NativeUnifiedADDataAdapter$UnifiedAdListener r0 = new com.qq.e.ads.nativ.NativeUnifiedADDataAdapter$UnifiedAdListener
            r1 = 0
            r0.<init>(r2, r1)
            r3.setAdListener(r0)
        L14:
            return
    }

    static boolean a(com.qq.e.ads.nativ.NativeUnifiedADDataAdapter r2, com.qq.e.comm.adevent.ADEvent r3) {
            com.qq.e.ads.nativ.NativeADEventListener r0 = r2.b
            if (r0 != 0) goto L5
            goto L19
        L5:
            int r0 = r3.getType()
            r1 = 103(0x67, float:1.44E-43)
            if (r0 == r1) goto L53
            r1 = 105(0x69, float:1.47E-43)
            if (r0 == r1) goto L39
            r1 = 107(0x6b, float:1.5E-43)
            if (r0 == r1) goto L21
            r3 = 111(0x6f, float:1.56E-43)
            if (r0 == r3) goto L1b
        L19:
            r2 = 0
            goto L59
        L1b:
            com.qq.e.ads.nativ.NativeADEventListener r2 = r2.b
            r2.onADStatusChanged()
            goto L58
        L21:
            java.lang.Class<java.lang.Integer> r0 = java.lang.Integer.class
            java.lang.Object r3 = r3.getParam(r0)
            java.lang.Integer r3 = (java.lang.Integer) r3
            if (r3 == 0) goto L58
            com.qq.e.ads.nativ.NativeADEventListener r2 = r2.b
            int r3 = r3.intValue()
            com.qq.e.comm.util.AdError r3 = com.qq.e.comm.util.AdErrorConvertor.formatErrorCode(r3)
            r2.onADError(r3)
            goto L58
        L39:
            com.qq.e.ads.nativ.NativeADEventListener r0 = r2.b
            boolean r1 = r0 instanceof com.qq.e.ads.nativ.NativeADEventListenerWithClickInfo
            if (r1 == 0) goto L4f
            java.lang.Class<android.view.View> r0 = android.view.View.class
            java.lang.Object r3 = r3.getParam(r0)
            android.view.View r3 = (android.view.View) r3
            com.qq.e.ads.nativ.NativeADEventListener r2 = r2.b
            com.qq.e.ads.nativ.NativeADEventListenerWithClickInfo r2 = (com.qq.e.ads.nativ.NativeADEventListenerWithClickInfo) r2
            r2.onADClicked(r3)
            goto L58
        L4f:
            r0.onADClicked()
            goto L58
        L53:
            com.qq.e.ads.nativ.NativeADEventListener r2 = r2.b
            r2.onADExposed()
        L58:
            r2 = 1
        L59:
            return r2
    }

    static boolean b(com.qq.e.ads.nativ.NativeUnifiedADDataAdapter r1, com.qq.e.comm.adevent.ADEvent r2) {
            com.qq.e.ads.nativ.NativeADMediaListener r0 = r1.c
            if (r0 != 0) goto L6
            goto L71
        L6:
            int r0 = r2.getType()
            switch(r0) {
                case 201: goto L5c;
                case 202: goto L56;
                case 203: goto L50;
                case 204: goto L4a;
                case 205: goto L44;
                case 206: goto L3e;
                case 207: goto L26;
                case 208: goto L20;
                case 209: goto L1a;
                case 210: goto L14;
                case 211: goto Le;
                default: goto Ld;
            }
        Ld:
            goto L71
        Le:
            com.qq.e.ads.nativ.NativeADMediaListener r1 = r1.c
            r1.onVideoLoading()
            goto L6f
        L14:
            com.qq.e.ads.nativ.NativeADMediaListener r1 = r1.c
            r1.onVideoReady()
            goto L6f
        L1a:
            com.qq.e.ads.nativ.NativeADMediaListener r1 = r1.c
            r1.onVideoInit()
            goto L6f
        L20:
            com.qq.e.ads.nativ.NativeADMediaListener r1 = r1.c
            r1.onVideoClicked()
            goto L6f
        L26:
            java.lang.Class<java.lang.Integer> r0 = java.lang.Integer.class
            java.lang.Object r2 = r2.getParam(r0)
            java.lang.Integer r2 = (java.lang.Integer) r2
            if (r2 == 0) goto L6f
            com.qq.e.ads.nativ.NativeADMediaListener r1 = r1.c
            int r2 = r2.intValue()
            com.qq.e.comm.util.AdError r2 = com.qq.e.comm.util.AdErrorConvertor.formatErrorCode(r2)
            r1.onVideoError(r2)
            goto L6f
        L3e:
            com.qq.e.ads.nativ.NativeADMediaListener r1 = r1.c
            r1.onVideoCompleted()
            goto L6f
        L44:
            com.qq.e.ads.nativ.NativeADMediaListener r1 = r1.c
            r1.onVideoStop()
            goto L6f
        L4a:
            com.qq.e.ads.nativ.NativeADMediaListener r1 = r1.c
            r1.onVideoPause()
            goto L6f
        L50:
            com.qq.e.ads.nativ.NativeADMediaListener r1 = r1.c
            r1.onVideoResume()
            goto L6f
        L56:
            com.qq.e.ads.nativ.NativeADMediaListener r1 = r1.c
            r1.onVideoStart()
            goto L6f
        L5c:
            java.lang.Class<java.lang.Integer> r0 = java.lang.Integer.class
            java.lang.Object r2 = r2.getParam(r0)
            java.lang.Integer r2 = (java.lang.Integer) r2
            if (r2 == 0) goto L6f
            com.qq.e.ads.nativ.NativeADMediaListener r1 = r1.c
            int r2 = r2.intValue()
            r1.onVideoLoaded(r2)
        L6f:
            r1 = 1
            goto L72
        L71:
            r1 = 0
        L72:
            return r1
    }

    static boolean c(com.qq.e.ads.nativ.NativeUnifiedADDataAdapter r1, com.qq.e.comm.adevent.ADEvent r2) {
            com.qq.e.comm.listeners.NegativeFeedbackListener r0 = r1.e
            if (r0 != 0) goto L5
            goto Ld
        L5:
            int r2 = r2.getType()
            r0 = 304(0x130, float:4.26E-43)
            if (r2 == r0) goto Lf
        Ld:
            r1 = 0
            goto L15
        Lf:
            com.qq.e.comm.listeners.NegativeFeedbackListener r1 = r1.e
            r1.onComplainSuccess()
            r1 = 1
        L15:
            return r1
    }

    @Override
    public void bindAdToCustomVideo(android.view.ViewGroup r2, android.content.Context r3, java.util.List<android.view.View> r4, java.util.List<android.view.View> r5) {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            r0.bindAdToCustomVideo(r2, r3, r4, r5)
            return
    }

    @Override
    public void bindAdToView(android.content.Context r2, com.qq.e.ads.nativ.widget.NativeAdContainer r3, android.widget.FrameLayout.LayoutParams r4, java.util.List<android.view.View> r5) {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            r0.bindAdToView(r2, r3, r4, r5)
            return
    }

    @Override
    public void bindAdToView(android.content.Context r7, com.qq.e.ads.nativ.widget.NativeAdContainer r8, android.widget.FrameLayout.LayoutParams r9, java.util.List<android.view.View> r10, java.util.List<android.view.View> r11) {
            r6 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r6.a
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.bindAdToView(r1, r2, r3, r4, r5)
            return
    }

    @Override
    public void bindCTAViews(java.util.List<android.view.View> r2) {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            r0.bindCTAViews(r2)
            return
    }

    @Override
    public void bindImageViews(java.util.List<android.widget.ImageView> r2, int r3) {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            r0.bindImageViews(r2, r3)
            return
    }

    @Override
    public void bindImageViews(java.util.List<android.widget.ImageView> r2, byte[] r3) {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            r0.bindImageViews(r2, r3)
            return
    }

    @Override
    public void bindMediaView(com.qq.e.ads.nativ.MediaView r2, com.qq.e.ads.cfg.VideoOption r3, com.qq.e.ads.nativ.NativeADMediaListener r4) {
            r1 = this;
            r1.c = r4
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            r0.bindMediaView(r2, r3, r4)
            return
    }

    @Override
    public void destroy() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            r0.destroy()
            return
    }

    @Override
    public boolean equalsAdData(com.qq.e.ads.nativ.NativeUnifiedADData r2) {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            boolean r2 = r0.equalsAdData(r2)
            return r2
    }

    public com.qq.e.ads.nativ.NativeUnifiedADData getAdData() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            return r0
    }

    @Override
    public int getAdPatternType() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            int r0 = r0.getAdPatternType()
            return r0
    }

    @Override
    public java.lang.String getApkInfoUrl() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            java.lang.String r0 = r0.getApkInfoUrl()
            return r0
    }

    @Override
    public com.qq.e.ads.nativ.NativeUnifiedADAppMiitInfo getAppMiitInfo() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            com.qq.e.ads.nativ.NativeUnifiedADAppMiitInfo r0 = r0.getAppMiitInfo()
            return r0
    }

    @Override
    public double getAppPrice() {
            r2 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r2.a
            double r0 = r0.getAppPrice()
            return r0
    }

    @Override
    public int getAppScore() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            int r0 = r0.getAppScore()
            return r0
    }

    @Override
    public int getAppStatus() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            int r0 = r0.getAppStatus()
            return r0
    }

    @Override
    public java.lang.String getButtonText() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            java.lang.String r0 = r0.getButtonText()
            return r0
    }

    @Override
    public java.lang.String getCTAText() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            java.lang.String r0 = r0.getCTAText()
            return r0
    }

    @Override
    public com.qq.e.ads.nativ.CustomizeVideo getCustomizeVideo() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            com.qq.e.ads.nativ.CustomizeVideo r0 = r0.getCustomizeVideo()
            return r0
    }

    @Override
    public java.lang.String getDesc() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            java.lang.String r0 = r0.getDesc()
            return r0
    }

    @Override
    public long getDownloadCount() {
            r2 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r2.a
            long r0 = r0.getDownloadCount()
            return r0
    }

    @Override
    public int getECPM() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            int r0 = r0.getECPM()
            return r0
    }

    @Override
    public java.lang.String getECPMLevel() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            java.lang.String r0 = r0.getECPMLevel()
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.Object> getExtraInfo() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            java.util.Map r0 = r0.getExtraInfo()
            return r0
    }

    @Override
    public java.lang.String getIconUrl() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            java.lang.String r0 = r0.getIconUrl()
            return r0
    }

    @Override
    public java.util.List<java.lang.String> getImgList() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            java.util.List r0 = r0.getImgList()
            return r0
    }

    @Override
    public java.lang.String getImgUrl() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            java.lang.String r0 = r0.getImgUrl()
            return r0
    }

    @Override
    public int getPictureHeight() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            int r0 = r0.getPictureHeight()
            return r0
    }

    @Override
    public int getPictureWidth() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            int r0 = r0.getPictureWidth()
            return r0
    }

    @Override
    public int getProgress() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            int r0 = r0.getProgress()
            return r0
    }

    @Override
    public java.lang.String getTitle() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            java.lang.String r0 = r0.getTitle()
            return r0
    }

    @Override
    public int getVideoCurrentPosition() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            int r0 = r0.getVideoCurrentPosition()
            return r0
    }

    @Override
    public int getVideoDuration() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            int r0 = r0.getVideoDuration()
            return r0
    }

    @Override
    public boolean isAppAd() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            boolean r0 = r0.isAppAd()
            return r0
    }

    @Override
    public boolean isValid() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            boolean r0 = r0.isValid()
            return r0
    }

    @Override
    public boolean isWeChatCanvasAd() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            boolean r0 = r0.isWeChatCanvasAd()
            return r0
    }

    @Override
    public void negativeFeedback() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            r0.negativeFeedback()
            return
    }

    @Override
    public void onDownloadConfirm(android.app.Activity r2, int r3, java.lang.String r4, com.qq.e.comm.compliance.DownloadConfirmCallBack r5) {
            r1 = this;
            com.qq.e.comm.compliance.DownloadConfirmListener r0 = r1.d
            if (r0 == 0) goto L7
            r0.onDownloadConfirm(r2, r3, r4, r5)
        L7:
            return
    }

    @Override
    public void pauseAppDownload() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            r0.pauseAppDownload()
            return
    }

    @Override
    public void pauseVideo() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            r0.pauseVideo()
            return
    }

    @Override
    public void resume() {
            r0 = this;
            return
    }

    @Override
    public void resumeAppDownload() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            r0.resumeAppDownload()
            return
    }

    @Override
    public void resumeVideo() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            r0.resumeVideo()
            return
    }

    @Override
    public void sendLossNotification(int r2, int r3, java.lang.String r4) {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            r0.sendLossNotification(r2, r3, r4)
            return
    }

    @Override
    public void sendLossNotification(java.util.Map<java.lang.String, java.lang.Object> r2) {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            r0.sendLossNotification(r2)
            return
    }

    @Override
    public void sendWinNotification(int r2) {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            r0.sendWinNotification(r2)
            return
    }

    @Override
    public void sendWinNotification(java.util.Map<java.lang.String, java.lang.Object> r2) {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            r0.sendWinNotification(r2)
            return
    }

    @Override
    public void setBidECPM(int r2) {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            r0.setBidECPM(r2)
            return
    }

    @Override
    public void setDownloadConfirmListener(com.qq.e.comm.compliance.DownloadConfirmListener r1) {
            r0 = this;
            r0.d = r1
            com.qq.e.ads.nativ.NativeUnifiedADData r1 = r0.a
            if (r1 == 0) goto L9
            r1.setDownloadConfirmListener(r0)
        L9:
            return
    }

    @Override
    public void setNativeAdEventListener(com.qq.e.ads.nativ.NativeADEventListener r1) {
            r0 = this;
            r0.b = r1
            return
    }

    @Override
    public void setNegativeFeedbackListener(com.qq.e.comm.listeners.NegativeFeedbackListener r1) {
            r0 = this;
            r0.e = r1
            return
    }

    @Override
    public void setVideoMute(boolean r2) {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            r0.setVideoMute(r2)
            return
    }

    @Override
    public void startVideo() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            r0.startVideo()
            return
    }

    @Override
    public void stopVideo() {
            r1 = this;
            com.qq.e.ads.nativ.NativeUnifiedADData r0 = r1.a
            r0.stopVideo()
            return
    }
}

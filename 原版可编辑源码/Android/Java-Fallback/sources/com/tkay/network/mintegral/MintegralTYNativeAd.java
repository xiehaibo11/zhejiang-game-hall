package com.tkay.network.mintegral;

public class MintegralTYNativeAd extends com.tkay.nativead.unitgroup.api.CustomNativeAd {
    android.content.Context a;
    com.mbridge.msdk.out.MBNativeHandler b;
    com.mbridge.msdk.out.MBBidNativeHandler c;
    com.mbridge.msdk.out.Campaign d;
    java.lang.String e;
    com.mbridge.msdk.nativex.view.MBMediaView f;
    com.mbridge.msdk.out.OnMBMediaViewListenerPlus g;
    boolean h;
    private final java.lang.String i;




    public MintegralTYNativeAd(android.content.Context r2, java.lang.String r3, java.lang.String r4, com.mbridge.msdk.out.Campaign r5, boolean r6) {
            r1 = this;
            r1.<init>()
            java.lang.Class<com.tkay.network.mintegral.MintegralTYNativeAd> r0 = com.tkay.network.mintegral.MintegralTYNativeAd.class
            java.lang.String r0 = r0.getSimpleName()
            r1.i = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.a = r2
            if (r6 == 0) goto L18
            java.util.Map r2 = com.mbridge.msdk.out.MBBidNativeHandler.getNativeProperties(r3, r4)
            goto L1c
        L18:
            java.util.Map r2 = com.mbridge.msdk.out.MBNativeHandler.getNativeProperties(r3, r4)
        L1c:
            r1.d = r5
            if (r6 == 0) goto L32
            com.mbridge.msdk.out.MBBidNativeHandler r3 = new com.mbridge.msdk.out.MBBidNativeHandler
            android.content.Context r4 = r1.a
            r3.<init>(r2, r4)
            r1.c = r3
            com.tkay.network.mintegral.MintegralTYNativeAd$1 r2 = new com.tkay.network.mintegral.MintegralTYNativeAd$1
            r2.<init>(r1)
            r3.setAdListener(r2)
            goto L43
        L32:
            com.mbridge.msdk.out.MBNativeHandler r3 = new com.mbridge.msdk.out.MBNativeHandler
            android.content.Context r4 = r1.a
            r3.<init>(r2, r4)
            r1.b = r3
            com.tkay.network.mintegral.MintegralTYNativeAd$2 r2 = new com.tkay.network.mintegral.MintegralTYNativeAd$2
            r2.<init>(r1)
            r3.setAdListener(r2)
        L43:
            r1.setAdData()
            return
    }

    private void a(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    private void a(boolean r1) {
            r0 = this;
            r0.h = r1
            return
    }

    @Override
    public void clear(android.view.View r3) {
            r2 = this;
            com.mbridge.msdk.out.MBNativeHandler r0 = r2.b
            if (r0 == 0) goto L9
            com.mbridge.msdk.out.Campaign r1 = r2.d
            r0.unregisterView(r3, r1)
        L9:
            com.mbridge.msdk.out.MBBidNativeHandler r0 = r2.c
            if (r0 == 0) goto L12
            com.mbridge.msdk.out.Campaign r1 = r2.d
            r0.unregisterView(r3, r1)
        L12:
            return
    }

    @Override
    public void destroy() {
            r2 = this;
            com.mbridge.msdk.nativex.view.MBMediaView r0 = r2.f
            r1 = 0
            if (r0 == 0) goto Lc
            r2.g = r1
            r0.destory()
            r2.f = r1
        Lc:
            com.mbridge.msdk.out.MBNativeHandler r0 = r2.b
            if (r0 == 0) goto L1f
            r0.setAdListener(r1)
            com.mbridge.msdk.out.MBNativeHandler r0 = r2.b
            r0.clearVideoCache()
            com.mbridge.msdk.out.MBNativeHandler r0 = r2.b
            r0.release()
            r2.b = r1
        L1f:
            com.mbridge.msdk.out.MBBidNativeHandler r0 = r2.c
            if (r0 == 0) goto L32
            r0.setAdListener(r1)
            com.mbridge.msdk.out.MBBidNativeHandler r0 = r2.c
            r0.clearVideoCache()
            com.mbridge.msdk.out.MBBidNativeHandler r0 = r2.c
            r0.bidRelease()
            r2.c = r1
        L32:
            r2.a = r1
            r2.d = r1
            return
    }

    @Override
    public android.view.View getAdMediaView(java.lang.Object... r6) {
            r5 = this;
            com.mbridge.msdk.nativex.view.MBMediaView r6 = r5.f     // Catch: java.lang.Throwable -> L63
            if (r6 != 0) goto L60
            com.mbridge.msdk.nativex.view.MBMediaView r6 = new com.mbridge.msdk.nativex.view.MBMediaView     // Catch: java.lang.Throwable -> L63
            android.content.Context r0 = r5.a     // Catch: java.lang.Throwable -> L63
            r6.<init>(r0)     // Catch: java.lang.Throwable -> L63
            r5.f = r6     // Catch: java.lang.Throwable -> L63
            r0 = 1
            r6.setIsAllowFullScreen(r0)     // Catch: java.lang.Throwable -> L63
            com.mbridge.msdk.nativex.view.MBMediaView r6 = r5.f     // Catch: java.lang.Throwable -> L63
            com.mbridge.msdk.out.Campaign r1 = r5.d     // Catch: java.lang.Throwable -> L63
            r6.setNativeAd(r1)     // Catch: java.lang.Throwable -> L63
            java.lang.String r6 = r5.e     // Catch: java.lang.Throwable -> L63
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L63
            if (r6 != 0) goto L54
            java.lang.String r6 = r5.e     // Catch: java.lang.Throwable -> L63
            r1 = -1
            int r2 = r6.hashCode()     // Catch: java.lang.Throwable -> L63
            r3 = 48
            r4 = 0
            if (r2 == r3) goto L3b
            r3 = 49
            if (r2 == r3) goto L31
            goto L44
        L31:
            java.lang.String r2 = "1"
            boolean r6 = r6.equals(r2)     // Catch: java.lang.Throwable -> L63
            if (r6 == 0) goto L44
            r1 = r0
            goto L44
        L3b:
            java.lang.String r2 = "0"
            boolean r6 = r6.equals(r2)     // Catch: java.lang.Throwable -> L63
            if (r6 == 0) goto L44
            r1 = r4
        L44:
            if (r1 == 0) goto L4f
            if (r1 == r0) goto L49
            goto L54
        L49:
            com.mbridge.msdk.nativex.view.MBMediaView r6 = r5.f     // Catch: java.lang.Throwable -> L63
            r6.setVideoSoundOnOff(r0)     // Catch: java.lang.Throwable -> L63
            goto L54
        L4f:
            com.mbridge.msdk.nativex.view.MBMediaView r6 = r5.f     // Catch: java.lang.Throwable -> L63
            r6.setVideoSoundOnOff(r4)     // Catch: java.lang.Throwable -> L63
        L54:
            com.tkay.network.mintegral.MintegralTYNativeAd$3 r6 = new com.tkay.network.mintegral.MintegralTYNativeAd$3     // Catch: java.lang.Throwable -> L63
            r6.<init>(r5)     // Catch: java.lang.Throwable -> L63
            r5.g = r6     // Catch: java.lang.Throwable -> L63
            com.mbridge.msdk.nativex.view.MBMediaView r0 = r5.f     // Catch: java.lang.Throwable -> L63
            r0.setOnMediaViewListener(r6)     // Catch: java.lang.Throwable -> L63
        L60:
            com.mbridge.msdk.nativex.view.MBMediaView r6 = r5.f     // Catch: java.lang.Throwable -> L63
            return r6
        L63:
            r6 = move-exception
            r6.printStackTrace()
            r6 = 0
            return r6
    }

    @Override
    public void prepare(android.view.View r3, com.tkay.nativead.api.TYNativePrepareInfo r4) {
            r2 = this;
            java.util.List r4 = r4.getClickViewList()     // Catch: java.lang.Throwable -> L25
            com.mbridge.msdk.out.MBNativeHandler r0 = r2.b     // Catch: java.lang.Throwable -> L25
            if (r0 == 0) goto Lf
            com.mbridge.msdk.out.MBNativeHandler r0 = r2.b     // Catch: java.lang.Throwable -> L25
            com.mbridge.msdk.out.Campaign r1 = r2.d     // Catch: java.lang.Throwable -> L25
            r0.registerView(r3, r4, r1)     // Catch: java.lang.Throwable -> L25
        Lf:
            com.mbridge.msdk.out.MBBidNativeHandler r0 = r2.c     // Catch: java.lang.Throwable -> L25
            if (r0 == 0) goto L1a
            com.mbridge.msdk.out.MBBidNativeHandler r0 = r2.c     // Catch: java.lang.Throwable -> L25
            com.mbridge.msdk.out.Campaign r1 = r2.d     // Catch: java.lang.Throwable -> L25
            r0.registerView(r3, r4, r1)     // Catch: java.lang.Throwable -> L25
        L1a:
            int r4 = r4.size()     // Catch: java.lang.Throwable -> L25
            if (r4 <= 0) goto L24
            r4 = 0
            r3.setOnClickListener(r4)     // Catch: java.lang.Throwable -> L25
        L24:
            return
        L25:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    public void setAdData() {
            r5 = this;
            com.mbridge.msdk.out.Campaign r0 = r5.d
            java.lang.String r0 = r0.getAppName()
            r5.setTitle(r0)
            com.mbridge.msdk.out.Campaign r0 = r5.d
            java.lang.String r0 = r0.getAppDesc()
            r5.setDescriptionText(r0)
            com.mbridge.msdk.out.Campaign r0 = r5.d
            java.lang.String r0 = r0.getIconUrl()
            r5.setIconImageUrl(r0)
            com.mbridge.msdk.out.Campaign r0 = r5.d
            java.lang.String r0 = r0.getAdCall()
            r5.setCallToActionText(r0)
            com.mbridge.msdk.out.Campaign r0 = r5.d
            java.lang.String r0 = r0.getImageUrl()
            r5.setMainImageUrl(r0)
            com.mbridge.msdk.out.Campaign r0 = r5.d
            double r0 = r0.getRating()
            java.lang.Double r0 = java.lang.Double.valueOf(r0)
            r5.setStarRating(r0)
            com.mbridge.msdk.out.Campaign r0 = r5.d
            int r0 = r0.getVideoLength()
            double r0 = (double) r0
            r5.setVideoDuration(r0)
            com.mbridge.msdk.widget.MBAdChoice r0 = new com.mbridge.msdk.widget.MBAdChoice
            android.content.Context r1 = r5.a
            r0.<init>(r1)
            com.mbridge.msdk.out.Campaign r1 = r5.d
            r0.setCampaign(r1)
            r5.setAdLogoView(r0)
            com.mbridge.msdk.out.Campaign r0 = r5.d
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            java.lang.String r1 = r0.getVideoUrlEncode()
            if (r1 == 0) goto L6c
            java.lang.String r0 = r0.getVideoUrlEncode()
            int r0 = r0.length()
            if (r0 <= 0) goto L6c
            java.lang.String r0 = "1"
            r5.mAdSourceType = r0
            goto L70
        L6c:
            java.lang.String r0 = "2"
            r5.mAdSourceType = r0
        L70:
            com.mbridge.msdk.out.Campaign r0 = r5.d
            com.mbridge.msdk.out.ApkDisplayInfo r0 = r0.getApkDisplayInfo()
            if (r0 == 0) goto L92
            r1 = 0
            com.mbridge.msdk.out.Campaign r3 = r5.d     // Catch: java.lang.Exception -> L84
            java.lang.String r3 = r3.getSize()     // Catch: java.lang.Exception -> L84
            long r1 = java.lang.Long.parseLong(r3)     // Catch: java.lang.Exception -> L84
        L84:
            com.tkay.network.mintegral.MintegralATDownloadAppInfo r3 = new com.tkay.network.mintegral.MintegralATDownloadAppInfo
            com.mbridge.msdk.out.Campaign r4 = r5.d
            java.lang.String r4 = r4.getPackageName()
            r3.<init>(r0, r4, r1)
            r5.setAdAppInfo(r3)
        L92:
            return
    }

    @Override
    public void setVideoMute(boolean r2) {
            r1 = this;
            super.setVideoMute(r2)
            com.mbridge.msdk.nativex.view.MBMediaView r0 = r1.f
            if (r0 == 0) goto Lc
            r2 = r2 ^ 1
            r0.setVideoSoundOnOff(r2)
        Lc:
            return
    }
}

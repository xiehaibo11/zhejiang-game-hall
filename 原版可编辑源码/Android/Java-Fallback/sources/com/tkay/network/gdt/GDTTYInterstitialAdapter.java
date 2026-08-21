package com.tkay.network.gdt;

public class GDTTYInterstitialAdapter extends com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter implements com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener {
    public static java.lang.String TAG;
    com.qq.e.ads.interstitial2.UnifiedInterstitialAD a;
    java.lang.String b;
    java.lang.String c;
    java.lang.String d;
    int e;
    java.lang.String f;
    boolean g;
    boolean h;

    final class 1 implements com.qq.e.ads.interstitial2.UnifiedInterstitialADListener {
        final com.tkay.network.gdt.GDTTYInterstitialAdapter a;


        1(com.tkay.network.gdt.GDTTYInterstitialAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onADClicked() {
                r1 = this;
                com.tkay.network.gdt.GDTTYInterstitialAdapter r0 = r1.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = com.tkay.network.gdt.GDTTYInterstitialAdapter.g(r0)
                if (r0 == 0) goto L11
                com.tkay.network.gdt.GDTTYInterstitialAdapter r0 = r1.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = com.tkay.network.gdt.GDTTYInterstitialAdapter.h(r0)
                r0.onInterstitialAdClicked()
            L11:
                return
        }

        @Override
        public final void onADClosed() {
                r1 = this;
                com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
                r0.b()
                com.tkay.network.gdt.GDTTYInterstitialAdapter r0 = r1.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = com.tkay.network.gdt.GDTTYInterstitialAdapter.i(r0)
                if (r0 == 0) goto L18
                com.tkay.network.gdt.GDTTYInterstitialAdapter r0 = r1.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = com.tkay.network.gdt.GDTTYInterstitialAdapter.j(r0)
                r0.onInterstitialAdClose()
            L18:
                com.tkay.network.gdt.GDTTYInterstitialAdapter r0 = r1.a
                com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r0.a
                if (r0 == 0) goto L25
                com.tkay.network.gdt.GDTTYInterstitialAdapter r0 = r1.a
                com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r0.a
                r0.destroy()
            L25:
                return
        }

        @Override
        public final void onADExposure() {
                r4 = this;
                com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()     // Catch: java.lang.Throwable -> L1a
                com.tkay.network.gdt.GDTTYInterstitialAdapter r1 = r4.a     // Catch: java.lang.Throwable -> L1a
                com.tkay.core.common.f.d r1 = r1.getTrackingInfo()     // Catch: java.lang.Throwable -> L1a
                java.lang.String r1 = r1.l()     // Catch: java.lang.Throwable -> L1a
                java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference     // Catch: java.lang.Throwable -> L1a
                com.tkay.network.gdt.GDTTYInterstitialAdapter r3 = r4.a     // Catch: java.lang.Throwable -> L1a
                com.qq.e.ads.interstitial2.UnifiedInterstitialAD r3 = r3.a     // Catch: java.lang.Throwable -> L1a
                r2.<init>(r3)     // Catch: java.lang.Throwable -> L1a
                r0.a(r1, r2)     // Catch: java.lang.Throwable -> L1a
            L1a:
                com.tkay.network.gdt.GDTTYInterstitialAdapter r0 = r4.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = com.tkay.network.gdt.GDTTYInterstitialAdapter.e(r0)
                if (r0 == 0) goto L2b
                com.tkay.network.gdt.GDTTYInterstitialAdapter r0 = r4.a
                com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = com.tkay.network.gdt.GDTTYInterstitialAdapter.f(r0)
                r0.onInterstitialAdShow()
            L2b:
                return
        }

        @Override
        public final void onADLeftApplication() {
                r0 = this;
                return
        }

        @Override
        public final void onADOpened() {
                r0 = this;
                return
        }

        @Override
        public final void onADReceive() {
                r7 = this;
                com.tkay.network.gdt.GDTTYInterstitialAdapter r0 = r7.a
                com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r0.a
                if (r0 == 0) goto L18
                com.tkay.network.gdt.GDTTYInterstitialAdapter r0 = r7.a
                boolean r0 = r0.g
                if (r0 == 0) goto L18
                com.tkay.network.gdt.GDTTYInterstitialAdapter r0 = r7.a
                com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r0.a
                com.tkay.network.gdt.GDTTYInterstitialAdapter$1$1 r1 = new com.tkay.network.gdt.GDTTYInterstitialAdapter$1$1
                r1.<init>(r7)
                r0.setDownloadConfirmListener(r1)
            L18:
                com.tkay.network.gdt.GDTTYInterstitialAdapter r0 = r7.a
                boolean r0 = r0.h
                if (r0 == 0) goto L55
                com.tkay.network.gdt.GDTTYInterstitialAdapter r0 = r7.a
                com.tkay.core.api.TYBiddingListener r0 = r0.mBiddingListener
                if (r0 == 0) goto L66
                com.tkay.network.gdt.GDTTYInterstitialAdapter r0 = r7.a
                com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r0.a
                int r0 = r0.getECPM()
                double r0 = (double) r0
                com.tkay.network.gdt.GDTTYBiddingNotice r2 = new com.tkay.network.gdt.GDTTYBiddingNotice
                com.tkay.network.gdt.GDTTYInterstitialAdapter r3 = r7.a
                com.qq.e.ads.interstitial2.UnifiedInterstitialAD r3 = r3.a
                r2.<init>(r3)
                com.tkay.network.gdt.GDTTYInterstitialAdapter r3 = r7.a
                com.tkay.core.api.TYBiddingListener r3 = r3.mBiddingListener
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                long r5 = java.lang.System.currentTimeMillis()
                r4.append(r5)
                java.lang.String r4 = r4.toString()
                com.tkay.core.api.TYAdConst$CURRENCY r5 = com.tkay.core.api.TYAdConst.CURRENCY.RMB_CENT
                com.tkay.core.api.TYBiddingResult r0 = com.tkay.core.api.TYBiddingResult.success(r0, r4, r2, r5)
                r1 = 0
                r3.onC2SBiddingResultWithCache(r0, r1)
                return
            L55:
                com.tkay.network.gdt.GDTTYInterstitialAdapter r0 = r7.a
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.gdt.GDTTYInterstitialAdapter.c(r0)
                if (r0 == 0) goto L66
                com.tkay.network.gdt.GDTTYInterstitialAdapter r0 = r7.a
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.gdt.GDTTYInterstitialAdapter.d(r0)
                r0.onAdDataLoaded()
            L66:
                return
        }

        @Override
        public final void onNoAD(com.qq.e.comm.util.AdError r3) {
                r2 = this;
                com.tkay.network.gdt.GDTTYInterstitialAdapter r0 = r2.a
                int r1 = r3.getErrorCode()
                java.lang.String r1 = java.lang.String.valueOf(r1)
                java.lang.String r3 = r3.getErrorMsg()
                r0.notifyATLoadFail(r1, r3)
                return
        }

        @Override
        public final void onRenderFail() {
                r3 = this;
                com.tkay.network.gdt.GDTTYInterstitialAdapter r0 = r3.a
                java.lang.String r1 = ""
                java.lang.String r2 = "GDT: onRenderFail()"
                r0.notifyATLoadFail(r1, r2)
                return
        }

        @Override
        public final void onRenderSuccess() {
                r2 = this;
                com.tkay.network.gdt.GDTTYInterstitialAdapter r0 = r2.a
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.gdt.GDTTYInterstitialAdapter.k(r0)
                if (r0 == 0) goto L14
                com.tkay.network.gdt.GDTTYInterstitialAdapter r0 = r2.a
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.gdt.GDTTYInterstitialAdapter.l(r0)
                r1 = 0
                com.tkay.core.api.BaseAd[] r1 = new com.tkay.core.api.BaseAd[r1]
                r0.onAdCacheLoaded(r1)
            L14:
                return
        }

        @Override
        public final void onVideoCached() {
                r0 = this;
                return
        }
    }


    static {
            java.lang.Class<com.tkay.network.gdt.GDTTYInterstitialAdapter> r0 = com.tkay.network.gdt.GDTTYInterstitialAdapter.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.network.gdt.GDTTYInterstitialAdapter.TAG = r0
            return
    }

    public GDTTYInterstitialAdapter() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.e = r0
            return
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener a(com.tkay.network.gdt.GDTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    private void a(android.content.Context r8, java.util.Map<java.lang.String, java.lang.Object> r9) {
            r7 = this;
            boolean r0 = r8 instanceof android.app.Activity
            if (r0 != 0) goto Lc
            java.lang.String r8 = ""
            java.lang.String r9 = "GDT UnifiedInterstitial's context must be activity."
            r7.notifyATLoadFail(r8, r9)
            return
        Lc:
            com.tkay.network.gdt.GDTTYInterstitialAdapter$1 r3 = new com.tkay.network.gdt.GDTTYInterstitialAdapter$1
            r3.<init>(r7)
            java.lang.String r0 = r7.d
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2f
            boolean r0 = r7.h
            if (r0 == 0) goto L1e
            goto L2f
        L1e:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r6 = new com.qq.e.ads.interstitial2.UnifiedInterstitialAD
            r1 = r8
            android.app.Activity r1 = (android.app.Activity) r1
            java.lang.String r2 = r7.c
            r4 = 0
            java.lang.String r5 = r7.d
            r0 = r6
            r0.<init>(r1, r2, r3, r4, r5)
            r7.a = r6
            goto L44
        L2f:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = new com.qq.e.ads.interstitial2.UnifiedInterstitialAD
            android.app.Activity r8 = (android.app.Activity) r8
            java.lang.String r1 = r7.c
            r0.<init>(r8, r1, r3)
            r7.a = r0
            com.tkay.network.gdt.GDTTYInitManager.getInstance()
            com.qq.e.comm.constants.LoadAdParams r8 = com.tkay.network.gdt.GDTTYInitManager.a(r9)
            r0.setLoadAdParams(r8)
        L44:
            r8 = 0
            java.lang.String r0 = "video_muted"
            int r0 = com.tkay.core.api.TYInitMediation.getIntFromMap(r9, r0, r8)
            r1 = 1
            java.lang.String r2 = "video_autoplay"
            int r2 = com.tkay.core.api.TYInitMediation.getIntFromMap(r9, r2, r1)
            r3 = -1
            java.lang.String r4 = "video_duration"
            int r9 = com.tkay.core.api.TYInitMediation.getIntFromMap(r9, r4, r3)
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r4 = r7.a
            if (r4 == 0) goto L86
            com.qq.e.ads.cfg.VideoOption$Builder r4 = new com.qq.e.ads.cfg.VideoOption$Builder
            r4.<init>()
            if (r0 != r1) goto L66
            r5 = r1
            goto L67
        L66:
            r5 = r8
        L67:
            com.qq.e.ads.cfg.VideoOption$Builder r4 = r4.setAutoPlayMuted(r5)
            if (r0 != r1) goto L6e
            r8 = r1
        L6e:
            com.qq.e.ads.cfg.VideoOption$Builder r8 = r4.setDetailPageMuted(r8)
            com.qq.e.ads.cfg.VideoOption$Builder r8 = r8.setAutoPlayPolicy(r2)
            com.qq.e.ads.cfg.VideoOption r8 = r8.build()
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r7.a
            r0.setVideoOption(r8)
            if (r9 == r3) goto L86
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r8 = r7.a
            r8.setMaxVideoDuration(r9)
        L86:
            java.lang.String r8 = r7.f
            java.lang.String r9 = "1"
            boolean r8 = android.text.TextUtils.equals(r9, r8)
            if (r8 == 0) goto L96
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r8 = r7.a
            r8.loadFullScreenAD()
            return
        L96:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r8 = r7.a
            r8.loadAD()
            return
    }

    private void a(android.content.Context r8, java.util.Map<java.lang.String, java.lang.Object> r9, java.util.Map<java.lang.String, java.lang.Object> r10) {
            r7 = this;
            java.lang.String r0 = "is_fullscreen"
            java.lang.String r1 = "0"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r9, r0, r1)
            r7.f = r0
            r0 = 0
            java.lang.String r1 = "ad_click_confirm_status"
            boolean r10 = com.tkay.core.api.TYInitMediation.getBooleanFromMap(r10, r1, r0)
            r7.g = r10
            boolean r10 = r8 instanceof android.app.Activity
            if (r10 != 0) goto L1f
            java.lang.String r8 = ""
            java.lang.String r9 = "GDT UnifiedInterstitial's context must be activity."
            r7.notifyATLoadFail(r8, r9)
            return
        L1f:
            com.tkay.network.gdt.GDTTYInterstitialAdapter$1 r4 = new com.tkay.network.gdt.GDTTYInterstitialAdapter$1
            r4.<init>(r7)
            java.lang.String r10 = r7.d
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            if (r10 != 0) goto L42
            boolean r10 = r7.h
            if (r10 == 0) goto L31
            goto L42
        L31:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r10 = new com.qq.e.ads.interstitial2.UnifiedInterstitialAD
            r2 = r8
            android.app.Activity r2 = (android.app.Activity) r2
            java.lang.String r3 = r7.c
            r5 = 0
            java.lang.String r6 = r7.d
            r1 = r10
            r1.<init>(r2, r3, r4, r5, r6)
            r7.a = r10
            goto L57
        L42:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r10 = new com.qq.e.ads.interstitial2.UnifiedInterstitialAD
            android.app.Activity r8 = (android.app.Activity) r8
            java.lang.String r1 = r7.c
            r10.<init>(r8, r1, r4)
            r7.a = r10
            com.tkay.network.gdt.GDTTYInitManager.getInstance()
            com.qq.e.comm.constants.LoadAdParams r8 = com.tkay.network.gdt.GDTTYInitManager.a(r9)
            r10.setLoadAdParams(r8)
        L57:
            java.lang.String r8 = "video_muted"
            int r8 = com.tkay.core.api.TYInitMediation.getIntFromMap(r9, r8, r0)
            r10 = 1
            java.lang.String r1 = "video_autoplay"
            int r1 = com.tkay.core.api.TYInitMediation.getIntFromMap(r9, r1, r10)
            r2 = -1
            java.lang.String r3 = "video_duration"
            int r9 = com.tkay.core.api.TYInitMediation.getIntFromMap(r9, r3, r2)
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r3 = r7.a
            if (r3 == 0) goto L98
            com.qq.e.ads.cfg.VideoOption$Builder r3 = new com.qq.e.ads.cfg.VideoOption$Builder
            r3.<init>()
            if (r8 != r10) goto L78
            r4 = r10
            goto L79
        L78:
            r4 = r0
        L79:
            com.qq.e.ads.cfg.VideoOption$Builder r3 = r3.setAutoPlayMuted(r4)
            if (r8 != r10) goto L80
            r0 = r10
        L80:
            com.qq.e.ads.cfg.VideoOption$Builder r8 = r3.setDetailPageMuted(r0)
            com.qq.e.ads.cfg.VideoOption$Builder r8 = r8.setAutoPlayPolicy(r1)
            com.qq.e.ads.cfg.VideoOption r8 = r8.build()
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r10 = r7.a
            r10.setVideoOption(r8)
            if (r9 == r2) goto L98
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r8 = r7.a
            r8.setMaxVideoDuration(r9)
        L98:
            java.lang.String r8 = r7.f
            java.lang.String r9 = "1"
            boolean r8 = android.text.TextUtils.equals(r9, r8)
            if (r8 == 0) goto La8
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r8 = r7.a
            r8.loadFullScreenAD()
            return
        La8:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r8 = r7.a
            r8.loadAD()
            return
    }

    static void a(com.tkay.network.gdt.GDTTYInterstitialAdapter r7, android.content.Context r8, java.util.Map r9, java.util.Map r10) {
            java.lang.String r0 = "is_fullscreen"
            java.lang.String r1 = "0"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r9, r0, r1)
            r7.f = r0
            r0 = 0
            java.lang.String r1 = "ad_click_confirm_status"
            boolean r10 = com.tkay.core.api.TYInitMediation.getBooleanFromMap(r10, r1, r0)
            r7.g = r10
            boolean r10 = r8 instanceof android.app.Activity
            if (r10 != 0) goto L1f
            java.lang.String r8 = ""
            java.lang.String r9 = "GDT UnifiedInterstitial's context must be activity."
            r7.notifyATLoadFail(r8, r9)
            return
        L1f:
            com.tkay.network.gdt.GDTTYInterstitialAdapter$1 r4 = new com.tkay.network.gdt.GDTTYInterstitialAdapter$1
            r4.<init>(r7)
            java.lang.String r10 = r7.d
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            if (r10 != 0) goto L42
            boolean r10 = r7.h
            if (r10 == 0) goto L31
            goto L42
        L31:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r10 = new com.qq.e.ads.interstitial2.UnifiedInterstitialAD
            r2 = r8
            android.app.Activity r2 = (android.app.Activity) r2
            java.lang.String r3 = r7.c
            r5 = 0
            java.lang.String r6 = r7.d
            r1 = r10
            r1.<init>(r2, r3, r4, r5, r6)
            r7.a = r10
            goto L57
        L42:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r10 = new com.qq.e.ads.interstitial2.UnifiedInterstitialAD
            android.app.Activity r8 = (android.app.Activity) r8
            java.lang.String r1 = r7.c
            r10.<init>(r8, r1, r4)
            r7.a = r10
            com.tkay.network.gdt.GDTTYInitManager.getInstance()
            com.qq.e.comm.constants.LoadAdParams r8 = com.tkay.network.gdt.GDTTYInitManager.a(r9)
            r10.setLoadAdParams(r8)
        L57:
            java.lang.String r8 = "video_muted"
            int r8 = com.tkay.core.api.TYInitMediation.getIntFromMap(r9, r8, r0)
            r10 = 1
            java.lang.String r1 = "video_autoplay"
            int r1 = com.tkay.core.api.TYInitMediation.getIntFromMap(r9, r1, r10)
            r2 = -1
            java.lang.String r3 = "video_duration"
            int r9 = com.tkay.core.api.TYInitMediation.getIntFromMap(r9, r3, r2)
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r3 = r7.a
            if (r3 == 0) goto L98
            com.qq.e.ads.cfg.VideoOption$Builder r3 = new com.qq.e.ads.cfg.VideoOption$Builder
            r3.<init>()
            if (r8 != r10) goto L78
            r4 = r10
            goto L79
        L78:
            r4 = r0
        L79:
            com.qq.e.ads.cfg.VideoOption$Builder r3 = r3.setAutoPlayMuted(r4)
            if (r8 != r10) goto L80
            r0 = r10
        L80:
            com.qq.e.ads.cfg.VideoOption$Builder r8 = r3.setDetailPageMuted(r0)
            com.qq.e.ads.cfg.VideoOption$Builder r8 = r8.setAutoPlayPolicy(r1)
            com.qq.e.ads.cfg.VideoOption r8 = r8.build()
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r10 = r7.a
            r10.setVideoOption(r8)
            if (r9 == r2) goto L98
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r8 = r7.a
            r8.setMaxVideoDuration(r9)
        L98:
            java.lang.String r8 = r7.f
            java.lang.String r9 = "1"
            boolean r8 = android.text.TextUtils.equals(r9, r8)
            if (r8 == 0) goto La8
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r7 = r7.a
            r7.loadFullScreenAD()
            return
        La8:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r7 = r7.a
            r7.loadAD()
            return
    }

    private void a(java.util.Map<java.lang.String, java.lang.Object> r2) {
            r1 = this;
            java.lang.String r0 = "app_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r2, r0)
            r1.b = r0
            java.lang.String r0 = "unit_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r2, r0)
            r1.c = r0
            java.lang.String r0 = "unit_version"
            int r0 = com.tkay.core.api.TYInitMediation.getIntFromMap(r2, r0)
            r1.e = r0
            java.lang.String r0 = "payload"
            java.lang.String r2 = com.tkay.core.api.TYInitMediation.getStringFromMap(r2, r0)
            r1.d = r2
            return
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener b(com.tkay.network.gdt.GDTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    private void b(java.util.Map<java.lang.String, java.lang.Object> r8) {
            r7 = this;
            r0 = 0
            java.lang.String r1 = "video_muted"
            int r1 = com.tkay.core.api.TYInitMediation.getIntFromMap(r8, r1, r0)
            r2 = 1
            java.lang.String r3 = "video_autoplay"
            int r3 = com.tkay.core.api.TYInitMediation.getIntFromMap(r8, r3, r2)
            r4 = -1
            java.lang.String r5 = "video_duration"
            int r8 = com.tkay.core.api.TYInitMediation.getIntFromMap(r8, r5, r4)
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r5 = r7.a
            if (r5 == 0) goto L42
            com.qq.e.ads.cfg.VideoOption$Builder r5 = new com.qq.e.ads.cfg.VideoOption$Builder
            r5.<init>()
            if (r1 != r2) goto L22
            r6 = r2
            goto L23
        L22:
            r6 = r0
        L23:
            com.qq.e.ads.cfg.VideoOption$Builder r5 = r5.setAutoPlayMuted(r6)
            if (r1 != r2) goto L2a
            r0 = r2
        L2a:
            com.qq.e.ads.cfg.VideoOption$Builder r0 = r5.setDetailPageMuted(r0)
            com.qq.e.ads.cfg.VideoOption$Builder r0 = r0.setAutoPlayPolicy(r3)
            com.qq.e.ads.cfg.VideoOption r0 = r0.build()
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r1 = r7.a
            r1.setVideoOption(r0)
            if (r8 == r4) goto L42
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r7.a
            r0.setMaxVideoDuration(r8)
        L42:
            return
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.gdt.GDTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.gdt.GDTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener e(com.tkay.network.gdt.GDTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener f(com.tkay.network.gdt.GDTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener g(com.tkay.network.gdt.GDTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener h(com.tkay.network.gdt.GDTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener i(com.tkay.network.gdt.GDTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener j(com.tkay.network.gdt.GDTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener k(com.tkay.network.gdt.GDTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener l(com.tkay.network.gdt.GDTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    @Override
    public void destory() {
            r2 = this;
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r2.a
            if (r0 == 0) goto Lf
            r1 = 0
            r0.setMediaListener(r1)
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r2.a
            r0.destroy()
            r2.a = r1
        Lf:
            return
    }

    @Override
    public void getBidRequestInfo(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4, com.tkay.core.api.TYBidRequestInfoListener r5) {
            r1 = this;
            java.lang.String r0 = "unit_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r3, r0)
            r1.c = r0
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            r0.a(r2, r3, r4, r5)
            return
    }

    @Override
    public com.tkay.core.api.TYInitMediation getMediationInitManager() {
            r1 = this;
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            return r0
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkName()
            return r0
    }

    @Override
    public java.lang.String getNetworkPlacementId() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    @Override
    public java.lang.String getNetworkSDKVersion() {
            r1 = this;
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkVersion()
            return r0
    }

    @Override
    public boolean isAdReady() {
            r1 = this;
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r1.a
            if (r0 == 0) goto L9
            boolean r0 = r0.isValid()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r2 = this;
            java.lang.String r0 = "app_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r0)
            r2.b = r0
            java.lang.String r0 = "unit_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r0)
            r2.c = r0
            java.lang.String r0 = "unit_version"
            int r0 = com.tkay.core.api.TYInitMediation.getIntFromMap(r4, r0)
            r2.e = r0
            java.lang.String r0 = "payload"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r0)
            r2.d = r0
            java.lang.String r0 = r2.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L3e
            java.lang.String r0 = r2.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L31
            goto L3e
        L31:
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            com.tkay.network.gdt.GDTTYInterstitialAdapter$2 r1 = new com.tkay.network.gdt.GDTTYInterstitialAdapter$2
            r1.<init>(r2, r3, r4, r5)
            r0.initSDK(r3, r4, r1)
            return
        L3e:
            java.lang.String r3 = ""
            java.lang.String r4 = "GDT appid or unitId is empty."
            r2.notifyATLoadFail(r3, r4)
            return
    }

    @Override
    public void onVideoComplete() {
            r1 = this;
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r1.mImpressListener
            if (r0 == 0) goto L9
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r1.mImpressListener
            r0.onInterstitialAdVideoEnd()
        L9:
            return
    }

    @Override
    public void onVideoError(com.qq.e.comm.util.AdError r4) {
            r3 = this;
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            r0.b()
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r3.mImpressListener
            if (r0 == 0) goto L24
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r3.mImpressListener
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r2 = r4.getErrorCode()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r4 = r4.getErrorMsg()
            r0.onInterstitialAdVideoError(r1, r4)
        L24:
            return
    }

    @Override
    public void onVideoInit() {
            r0 = this;
            return
    }

    @Override
    public void onVideoLoading() {
            r0 = this;
            return
    }

    @Override
    public void onVideoPageClose() {
            r0 = this;
            return
    }

    @Override
    public void onVideoPageOpen() {
            r0 = this;
            return
    }

    @Override
    public void onVideoPause() {
            r0 = this;
            return
    }

    @Override
    public void onVideoReady(long r1) {
            r0 = this;
            return
    }

    @Override
    public void onVideoStart() {
            r1 = this;
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r1.mImpressListener
            if (r0 == 0) goto L9
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r1.mImpressListener
            r0.onInterstitialAdVideoStart()
        L9:
            return
    }

    @Override
    public void show(android.app.Activity r4) {
            r3 = this;
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r3.a
            if (r0 == 0) goto L44
            r0.setMediaListener(r3)
            java.lang.String r0 = r3.f
            java.lang.String r1 = "1"
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            if (r0 == 0) goto L2c
            if (r4 == 0) goto L24
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            java.lang.String r1 = r3.c
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r2 = r3.a
            r0.a(r1, r2)
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r3.a
            r0.showFullScreenAD(r4)
            return
        L24:
            java.lang.String r4 = com.tkay.network.gdt.GDTTYInterstitialAdapter.TAG
            java.lang.String r0 = "Gdt (Full Screen) show fail: context need be Activity"
            android.util.Log.e(r4, r0)
            return
        L2c:
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            java.lang.String r1 = r3.c
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r2 = r3.a
            r0.a(r1, r2)
            if (r4 == 0) goto L3f
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r0 = r3.a
            r0.show(r4)
            return
        L3f:
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r4 = r3.a
            r4.show()
        L44:
            return
    }

    @Override
    public boolean startBiddingRequest(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3, com.tkay.core.api.TYBiddingListener r4) {
            r0 = this;
            r4 = 1
            r0.h = r4
            r0.loadCustomNetworkAd(r1, r2, r3)
            return r4
    }
}

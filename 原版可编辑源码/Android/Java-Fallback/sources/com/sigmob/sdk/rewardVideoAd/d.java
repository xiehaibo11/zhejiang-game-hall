package com.sigmob.sdk.rewardVideoAd;

public class d implements com.sigmob.sdk.base.common.f.b, com.sigmob.sdk.base.network.d.a, com.sigmob.sdk.rewardVideoAd.e.a {
    private final android.os.Handler a;
    private com.sigmob.sdk.rewardVideoAd.f b;
    private boolean c;
    private com.czhj.sdk.common.models.AdStatus d;
    private java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> e;
    private com.sigmob.sdk.base.models.BaseAdUnit f;
    private long g;
    private long h;
    private com.sigmob.sdk.base.models.LoadAdRequest i;
    private int j;
    private final int k;
    private java.lang.String l;
    private com.sigmob.sdk.rewardVideoAd.e m;
    private com.sigmob.sdk.rewardVideoAd.g n;
    private boolean o;











    protected d(boolean r2) {
            r1 = this;
            r1.<init>()
            r0 = 8193(0x2001, float:1.1481E-41)
            r1.k = r0
            r1.o = r2
            com.sigmob.sdk.rewardVideoAd.d$1 r2 = new com.sigmob.sdk.rewardVideoAd.d$1
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r2.<init>(r1, r0)
            r1.a = r2
            return
    }

    static long a(com.sigmob.sdk.rewardVideoAd.d r0, long r1) {
            r0.g = r1
            return r1
    }

    static com.czhj.sdk.common.models.AdStatus a(com.sigmob.sdk.rewardVideoAd.d r0) {
            com.czhj.sdk.common.models.AdStatus r0 = r0.d
            return r0
    }

    static java.util.List a(com.sigmob.sdk.rewardVideoAd.d r0, java.util.List r1) {
            r0.e = r1
            return r1
    }

    private void a(com.sigmob.sdk.base.models.BaseAdUnit r2, java.lang.String r3, int r4, java.lang.String r5, java.lang.String r6, com.sigmob.windad.WindAdError r7) {
            r1 = this;
            com.sigmob.sdk.rewardVideoAd.d$7 r0 = new com.sigmob.sdk.rewardVideoAd.d$7
            r0.<init>(r1, r6, r5, r4)
            com.sigmob.sdk.base.common.z.a(r3, r7, r2, r0)
            return
    }

    private void a(com.sigmob.sdk.base.models.LoadAdRequest r9, com.sigmob.sdk.rewardVideoAd.a r10, com.sigmob.sdk.base.network.d.a r11) {
            r8 = this;
            java.lang.String r0 = r9.getPlacementId()
            r8.g()
            java.lang.Integer r1 = r10.a()
            int r1 = r1.intValue()
            r9.setRequest_scene_type(r1)
            com.sigmob.sdk.rewardVideoAd.a r1 = com.sigmob.sdk.rewardVideoAd.a.c
            if (r10 == r1) goto L21
            r4 = 0
            r5 = 0
            r7 = 0
            java.lang.String r2 = "request"
            java.lang.String r3 = "play"
            r6 = r9
            com.sigmob.sdk.base.common.z.a(r2, r3, r4, r5, r6, r7)
        L21:
            boolean r10 = r8.e()
            r9.setExpired(r10)
            com.sigmob.sdk.base.network.d.a(r9, r11)
            r10 = 0
            r8.j = r10
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "adsRequest loadAdRequest = ["
            r10.append(r11)
            r10.append(r9)
            java.lang.String r9 = "], placementId = ["
            r10.append(r9)
            r10.append(r0)
            java.lang.String r9 = "]"
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            com.czhj.sdk.logger.SigmobLog.d(r9)
            return
    }

    static void a(com.sigmob.sdk.rewardVideoAd.d r0, com.sigmob.sdk.base.models.BaseAdUnit r1, java.lang.String r2, int r3, java.lang.String r4, java.lang.String r5, com.sigmob.windad.WindAdError r6) {
            r0.a(r1, r2, r3, r4, r5, r6)
            return
    }

    static void a(com.sigmob.sdk.rewardVideoAd.d r0, com.sigmob.sdk.base.models.LoadAdRequest r1) {
            r0.b(r1)
            return
    }

    static void a(com.sigmob.sdk.rewardVideoAd.d r0, com.sigmob.windad.WindAdError r1) {
            r0.c(r1)
            return
    }

    private void a(com.sigmob.windad.WindAdError r3) {
            r2 = this;
            r2.g()
            r0 = 0
            r2.f = r0
            android.os.Handler r0 = r2.a
            com.sigmob.sdk.rewardVideoAd.d$8 r1 = new com.sigmob.sdk.rewardVideoAd.d$8
            r1.<init>(r2, r3)
            r0.post(r1)
            return
    }

    static long b(com.sigmob.sdk.rewardVideoAd.d r0, long r1) {
            r0.h = r1
            return r1
    }

    static android.os.Handler b(com.sigmob.sdk.rewardVideoAd.d r0) {
            android.os.Handler r0 = r0.a
            return r0
    }

    private void b(com.sigmob.sdk.base.models.LoadAdRequest r3) {
            r2 = this;
            com.sigmob.sdk.rewardVideoAd.a r0 = com.sigmob.sdk.rewardVideoAd.a.b
            com.sigmob.sdk.rewardVideoAd.d$6 r1 = new com.sigmob.sdk.rewardVideoAd.d$6
            r1.<init>(r2)
            r2.a(r3, r0, r1)
            return
    }

    private void b(com.sigmob.windad.WindAdError r3) {
            r2 = this;
            com.czhj.sdk.common.models.AdStatus r0 = r2.d
            com.czhj.sdk.common.models.AdStatus r1 = com.czhj.sdk.common.models.AdStatus.AdStatusLoading
            if (r0 == r1) goto L7
            return
        L7:
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r2.f
            if (r0 == 0) goto Lc
            return
        Lc:
            android.os.Handler r0 = r2.a
            com.sigmob.sdk.rewardVideoAd.d$10 r1 = new com.sigmob.sdk.rewardVideoAd.d$10
            r1.<init>(r2, r3)
            r0.post(r1)
            return
    }

    static com.sigmob.sdk.base.models.LoadAdRequest c(com.sigmob.sdk.rewardVideoAd.d r0) {
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r0.i
            return r0
    }

    private void c(com.sigmob.windad.WindAdError r5) {
            r4 = this;
            com.czhj.sdk.common.models.AdStatus r0 = r4.d
            com.czhj.sdk.common.models.AdStatus r1 = com.czhj.sdk.common.models.AdStatus.AdStatusLoading
            if (r0 == r1) goto L7
            return
        L7:
            if (r5 != 0) goto L29
            com.czhj.sdk.common.models.AdStatus r0 = com.czhj.sdk.common.models.AdStatus.AdStatusReady
            r4.d = r0
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r4.e
            if (r0 == 0) goto L2d
            int r0 = r0.size()
            if (r0 <= 0) goto L2d
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r4.e
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r0 = (com.sigmob.sdk.base.models.BaseAdUnit) r0
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r4.i
            r2 = 0
            java.lang.String r3 = "ready"
            com.sigmob.sdk.base.common.z.a(r3, r2, r0, r1, r2)
            goto L2d
        L29:
            com.czhj.sdk.common.models.AdStatus r0 = com.czhj.sdk.common.models.AdStatus.AdStatusNone
            r4.d = r0
        L2d:
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r4.f
            if (r0 == 0) goto L32
            return
        L32:
            android.os.Handler r0 = r4.a
            com.sigmob.sdk.rewardVideoAd.d$2 r1 = new com.sigmob.sdk.rewardVideoAd.d$2
            r1.<init>(r4, r5)
            r0.post(r1)
            return
    }

    static com.sigmob.sdk.rewardVideoAd.e d(com.sigmob.sdk.rewardVideoAd.d r0) {
            com.sigmob.sdk.rewardVideoAd.e r0 = r0.m
            return r0
    }

    static void e(com.sigmob.sdk.rewardVideoAd.d r0) {
            r0.f()
            return
    }

    private boolean e() {
            r6 = this;
            long r0 = r6.g
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 0
            if (r0 == 0) goto L1e
            long r4 = r6.h
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 != 0) goto L10
            goto L1e
        L10:
            long r2 = java.lang.System.currentTimeMillis()
            long r4 = r6.h
            long r2 = r2 - r4
            long r4 = r6.g
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 <= 0) goto L1e
            r1 = 1
        L1e:
            return r1
    }

    private void f() {
            r2 = this;
            com.czhj.sdk.common.models.AdStatus r0 = r2.d
            com.czhj.sdk.common.models.AdStatus r1 = com.czhj.sdk.common.models.AdStatus.AdStatusLoading
            if (r0 == r1) goto L7
            return
        L7:
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r2.f
            if (r0 == 0) goto Lc
            return
        Lc:
            android.os.Handler r0 = r2.a
            com.sigmob.sdk.rewardVideoAd.d$9 r1 = new com.sigmob.sdk.rewardVideoAd.d$9
            r1.<init>(r2)
            r0.post(r1)
            return
    }

    static void f(com.sigmob.sdk.rewardVideoAd.d r0) {
            r0.g()
            return
    }

    static com.sigmob.sdk.rewardVideoAd.g g(com.sigmob.sdk.rewardVideoAd.d r0) {
            com.sigmob.sdk.rewardVideoAd.g r0 = r0.n
            return r0
    }

    private void g() {
            r3 = this;
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r3.e
            if (r0 == 0) goto L28
            int r0 = r0.size()
            if (r0 <= 0) goto L28
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r3.e
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r0 = (com.sigmob.sdk.base.models.BaseAdUnit) r0
            if (r0 == 0) goto L28
            java.lang.String r1 = r0.getAd_source_channel()
            java.lang.String r2 = "1000"
            boolean r1 = r1.equalsIgnoreCase(r2)
            if (r1 == 0) goto L28
            com.sigmob.sdk.base.common.f r1 = com.sigmob.sdk.base.common.f.e()
            r1.d(r0)
        L28:
            r0 = 0
            r3.e = r0
            return
    }

    static java.lang.String h(com.sigmob.sdk.rewardVideoAd.d r0) {
            java.lang.String r0 = r0.l
            return r0
    }

    static com.sigmob.sdk.rewardVideoAd.f i(com.sigmob.sdk.rewardVideoAd.d r0) {
            com.sigmob.sdk.rewardVideoAd.f r0 = r0.b
            return r0
    }

    private boolean j(com.sigmob.sdk.base.models.BaseAdUnit r2) {
            r1 = this;
            int r0 = r2.getPlayMode()     // Catch: java.lang.Throwable -> L14
            if (r0 == 0) goto L8
            r2 = 1
            return r2
        L8:
            boolean r2 = r2.isEndCardIndexExist()     // Catch: java.lang.Throwable -> L14
            if (r2 != 0) goto L13
            java.lang.String r0 = "endIndex file not ready"
            com.czhj.sdk.logger.SigmobLog.e(r0)     // Catch: java.lang.Throwable -> L14
        L13:
            return r2
        L14:
            r2 = 0
            return r2
    }

    private com.sigmob.sdk.rewardVideoAd.e k(com.sigmob.sdk.base.models.BaseAdUnit r4) {
            r3 = this;
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_AD_PLAY_CHECK_FAIL
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r3.f
            if (r1 == 0) goto L10
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_AD_PLAY_HAS_PLAYING
            java.lang.String r1 = r1.getMessage()
        Lc:
            r0.setMessage(r1)
            goto L37
        L10:
            if (r4 != 0) goto L15
            java.lang.String r1 = "not ready adUnit"
            goto Lc
        L15:
            com.sigmob.sdk.rewardVideoAd.e r1 = r3.m
            if (r1 != 0) goto L1c
            java.lang.String r1 = "interstitial object is null"
            goto Lc
        L1c:
            com.czhj.sdk.common.models.AdStatus r1 = r3.d
            com.czhj.sdk.common.models.AdStatus r2 = com.czhj.sdk.common.models.AdStatus.AdStatusReady
            if (r1 == r2) goto L25
            java.lang.String r1 = "ad status is not ready"
            goto Lc
        L25:
            boolean r1 = r3.e()
            if (r1 == 0) goto L2e
            java.lang.String r1 = "ad unit is expired"
            goto Lc
        L2e:
            boolean r1 = r3.j(r4)
            if (r1 != 0) goto L39
            java.lang.String r1 = "check ad unit endcard is invalid"
            goto Lc
        L37:
            r1 = 0
            goto L3a
        L39:
            r1 = 1
        L3a:
            if (r1 != 0) goto L48
            r3.a(r0)
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r3.i
            java.lang.String r2 = "play"
            com.sigmob.sdk.base.common.z.a(r2, r0, r4, r1)
            r4 = 0
            return r4
        L48:
            com.sigmob.sdk.rewardVideoAd.e r4 = r3.m
            return r4
    }

    @Override
    public void a(int r2, java.lang.String r3, java.lang.String r4, com.sigmob.sdk.base.models.LoadAdRequest r5) {
            r1 = this;
            java.lang.String r4 = "0"
            java.lang.String r0 = "respond"
            com.sigmob.sdk.base.common.z.a(r0, r4, r5)
            com.sigmob.sdk.base.common.z.a(r0, r4, r2, r3, r5)
            com.sigmob.windad.WindAdError r4 = com.sigmob.windad.WindAdError.getWindAdError(r2)
            if (r4 != 0) goto L15
            com.sigmob.windad.WindAdError r4 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_REQUEST
            r4.setErrorMessage(r2, r3)
        L15:
            r1.b(r4)
            r1.c(r4)
            return
    }

    @Override
    public void a(com.sigmob.sdk.base.models.BaseAdUnit r7) {
            r6 = this;
            com.sigmob.sdk.base.models.LoadAdRequest r4 = r6.i
            java.lang.String r0 = "loadstart"
            r1 = 0
            r3 = 0
            r5 = 0
            r2 = r7
            com.sigmob.sdk.base.common.z.a(r0, r1, r2, r3, r4, r5)
            com.sigmob.sdk.base.common.a r0 = com.sigmob.sdk.base.common.a.y
            com.sigmob.sdk.base.network.f.a(r7, r0)
            return
    }

    @Override
    public void a(com.sigmob.sdk.base.models.BaseAdUnit r9, java.lang.String r10) {
            r8 = this;
            java.lang.String r0 = "onInterstitialLoaded() called"
            com.czhj.sdk.logger.SigmobLog.d(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            if (r0 == 0) goto Le
            com.sigmob.sdk.base.common.a r0 = com.sigmob.sdk.base.common.a.z
            goto L10
        Le:
            com.sigmob.sdk.base.common.a r0 = com.sigmob.sdk.base.common.a.A
        L10:
            com.sigmob.sdk.base.network.f.a(r9, r0)
            android.os.Handler r0 = r8.a
            r1 = 8193(0x2001, float:1.1481E-41)
            r0.removeMessages(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            if (r0 == 0) goto L23
            java.lang.String r0 = "1"
            goto L25
        L23:
            java.lang.String r0 = "0"
        L25:
            r2 = r0
            r4 = 0
            com.sigmob.sdk.base.models.LoadAdRequest r5 = r8.i
            r6 = 0
            java.lang.String r1 = "loadend"
            r3 = r9
            com.sigmob.sdk.base.common.z.a(r1, r2, r3, r4, r5, r6)
            if (r9 == 0) goto L73
            int r0 = r9.getPlayMode()
            if (r0 != 0) goto L73
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            if (r0 == 0) goto L54
            java.lang.Integer r9 = r9.getAdExpiredTime()
            int r9 = r9.intValue()
            long r9 = (long) r9
            r8.g = r9
            long r9 = java.lang.System.currentTimeMillis()
            r8.h = r9
            r9 = 0
            r8.c(r9)
            goto L73
        L54:
            com.sigmob.windad.WindAdError r7 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_FILE_DOWNLOAD
            r7.setMessage(r10)
            int r3 = r9.getAd_type()
            java.lang.String r4 = r9.getadslot_id()
            java.lang.String r5 = r9.getLoad_id()
            java.lang.String r2 = "load"
            r0 = r8
            r1 = r9
            r6 = r7
            r0.a(r1, r2, r3, r4, r5, r6)
            r8.c(r7)
            r8.g()
        L73:
            return
    }

    void a(com.sigmob.sdk.base.models.LoadAdRequest r5) {
            r4 = this;
            com.czhj.sdk.common.models.AdStatus r0 = com.czhj.sdk.common.models.AdStatus.AdStatusLoading
            r4.d = r0
            if (r5 == 0) goto Ldf
            java.lang.String r0 = r5.getPlacementId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L12
            goto Ldf
        L12:
            com.sigmob.sdk.Sigmob r0 = com.sigmob.sdk.Sigmob.getInstance()     // Catch: java.lang.Exception -> L4f
            if (r0 == 0) goto L53
            com.sigmob.sdk.Sigmob r0 = com.sigmob.sdk.Sigmob.getInstance()     // Catch: java.lang.Exception -> L4f
            com.sigmob.windad.WindAdError r0 = r0.getSigMobError()     // Catch: java.lang.Exception -> L4f
            if (r0 == 0) goto L53
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4f
            r1.<init>()     // Catch: java.lang.Exception -> L4f
            java.lang.String r2 = "check loadAd error "
            r1.append(r2)     // Catch: java.lang.Exception -> L4f
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Exception -> L4f
            r1.append(r2)     // Catch: java.lang.Exception -> L4f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L4f
            com.czhj.sdk.logger.SigmobLog.e(r1)     // Catch: java.lang.Exception -> L4f
            java.lang.String r1 = "load"
            int r2 = r0.getErrorCode()     // Catch: java.lang.Exception -> L4f
            java.lang.String r3 = r0.getMessage()     // Catch: java.lang.Exception -> L4f
            com.sigmob.sdk.base.mta.PointEntitySigmobError r1 = com.sigmob.sdk.base.mta.PointEntitySigmobError.SigmobError(r1, r2, r3)     // Catch: java.lang.Exception -> L4f
            r1.commit()     // Catch: java.lang.Exception -> L4f
            r4.c(r0)     // Catch: java.lang.Exception -> L4f
            return
        L4f:
            r0 = move-exception
            r0.printStackTrace()
        L53:
            java.lang.String r0 = r5.getPlacementId()
            r4.l = r0
            r4.i = r5
            com.sigmob.sdk.rewardVideoAd.e r0 = r4.m
            if (r0 != 0) goto L68
            com.sigmob.sdk.rewardVideoAd.e r0 = new com.sigmob.sdk.rewardVideoAd.e
            boolean r1 = r4.o
            r0.<init>(r4, r1)
            r4.m = r0
        L68:
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r4.i
            java.lang.String r0 = r0.getBidToken()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L77
            r4.g()
        L77:
            boolean r0 = r4.a()
            if (r0 == 0) goto Lb4
            int r5 = r4.j
            int r5 = r5 + 1
            r4.j = r5
            com.sigmob.sdk.rewardVideoAd.e r5 = r4.m
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r4.e
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r0 = (com.sigmob.sdk.base.models.BaseAdUnit) r0
            r1 = 0
            r5.a(r1, r0)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "adsRequest isReady  placementId = ["
            r5.append(r0)
            java.lang.String r0 = r4.l
            r5.append(r0)
            java.lang.String r0 = "]"
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            com.czhj.sdk.logger.SigmobLog.d(r5)
            r4.f()
            r4.c(r1)
            return
        Lb4:
            com.sigmob.sdk.base.common.f r0 = com.sigmob.sdk.base.common.f.e()
            java.lang.String r0 = r0.l()
            r5.setLastCampid(r0)
            com.sigmob.sdk.base.common.f r0 = com.sigmob.sdk.base.common.f.e()
            java.lang.String r0 = r0.k()
            r5.setLastCrid(r0)
            android.os.Handler r0 = r4.a
            r1 = 8193(0x2001, float:1.1481E-41)
            com.sigmob.sdk.base.i r2 = com.sigmob.sdk.base.i.a()
            long r2 = r2.p()
            r0.sendEmptyMessageDelayed(r1, r2)
            com.sigmob.sdk.rewardVideoAd.a r0 = com.sigmob.sdk.rewardVideoAd.a.c
            r4.a(r5, r0, r4)
            return
        Ldf:
            java.lang.String r5 = "loadAd error loadAdRequest or placementId is null"
            com.czhj.sdk.logger.SigmobLog.e(r5)
            com.sigmob.windad.WindAdError r5 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_PLACEMENTID_EMPTY
            r4.c(r5)
            return
    }

    public void a(com.sigmob.sdk.base.models.LoadAdRequest r4, com.sigmob.sdk.rewardVideoAd.g r5) {
            r3 = this;
            r3.n = r5
            r3.i = r4
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r4 = r3.e
            if (r4 == 0) goto L13b
            int r4 = r4.size()
            if (r4 > 0) goto L10
            goto L13b
        L10:
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r4 = r3.e
            r5 = 0
            java.lang.Object r4 = r4.get(r5)
            com.sigmob.sdk.base.models.BaseAdUnit r4 = (com.sigmob.sdk.base.models.BaseAdUnit) r4
            com.sigmob.sdk.rewardVideoAd.e r4 = r3.k(r4)
            if (r4 != 0) goto L20
            return
        L20:
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r3.e
            java.lang.Object r5 = r0.get(r5)
            com.sigmob.sdk.base.models.BaseAdUnit r5 = (com.sigmob.sdk.base.models.BaseAdUnit) r5
            r3.f = r5
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r3.i
            java.lang.String r0 = r0.getLoadId()
            r5.setLoad_id(r0)
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r3.f
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r3.i
            java.lang.String r0 = r0.getBidToken()
            r5.setBid_token(r0)
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r3.f
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r3.i
            java.lang.String r0 = r0.getAdSceneId()
            r5.setAd_scene_id(r0)
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r3.f
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r3.i
            java.lang.String r0 = r0.getAdSceneDesc()
            r5.setAd_scene_desc(r0)
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r3.f
            com.sigmob.sdk.base.models.SigMacroCommon r5 = r5.getMacroCommon()
            boolean r0 = r5 instanceof com.sigmob.sdk.base.models.SigMacroCommon
            if (r0 == 0) goto Ld0
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r3.i
            java.lang.String r0 = r0.getAdSceneDesc()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L78
            r0 = r5
            com.sigmob.sdk.base.models.SigMacroCommon r0 = (com.sigmob.sdk.base.models.SigMacroCommon) r0
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r3.i
            java.lang.String r1 = r1.getAdSceneDesc()
            java.lang.String r2 = "_ADSCENE_"
            r0.addMarcoKey(r2, r1)
        L78:
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r3.i
            java.lang.String r0 = r0.getAdSceneId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L92
            r0 = r5
            com.sigmob.sdk.base.models.SigMacroCommon r0 = (com.sigmob.sdk.base.models.SigMacroCommon) r0
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r3.i
            java.lang.String r1 = r1.getAdSceneId()
            java.lang.String r2 = "_ADSCENEID_"
            r0.addMarcoKey(r2, r1)
        L92:
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r3.f
            java.lang.String r0 = r0.getVideo_url()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Ld0
            r0 = r5
            com.sigmob.sdk.base.models.SigMacroCommon r0 = (com.sigmob.sdk.base.models.SigMacroCommon) r0
            com.sigmob.sdk.base.common.f r1 = com.sigmob.sdk.base.common.f.e()
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r3.f
            java.lang.String r2 = r2.getVideoPath()
            java.lang.String r1 = r1.e(r2)
            java.lang.String r2 = "_VMD5_"
            r0.addMarcoKey(r2, r1)
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r3.f     // Catch: java.io.UnsupportedEncodingException -> Lc8
            java.lang.String r0 = r0.getVideo_url()     // Catch: java.io.UnsupportedEncodingException -> Lc8
            java.lang.String r1 = "UTF-8"
            java.lang.String r0 = java.net.URLEncoder.encode(r0, r1)     // Catch: java.io.UnsupportedEncodingException -> Lc8
            com.sigmob.sdk.base.models.SigMacroCommon r5 = (com.sigmob.sdk.base.models.SigMacroCommon) r5     // Catch: java.io.UnsupportedEncodingException -> Lc8
            java.lang.String r1 = "_VURL_"
            r5.addMarcoKey(r1, r0)     // Catch: java.io.UnsupportedEncodingException -> Lc8
            goto Ld0
        Lc8:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r5)
        Ld0:
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r3.f
            int r5 = r5.getCreativeType()
            com.sigmob.sdk.base.common.l r0 = com.sigmob.sdk.base.common.l.i
            int r0 = r0.a()
            if (r5 != r0) goto Lf9
            com.sigmob.sdk.base.common.c r5 = new com.sigmob.sdk.base.common.c
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r3.e
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r3.i
            r5.<init>(r0, r3, r1)
            r0 = 1
            boolean r5 = r5.a(r0)
            if (r5 != 0) goto L115
            java.util.HashMap r5 = new java.util.HashMap
            r5.<init>()
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r3.f
            r4.a(r5, r0)
            goto L115
        Lf9:
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r3.f
            int r5 = r5.getPlayMode()
            r0 = 2
            if (r5 != r0) goto L115
            java.util.HashMap r5 = new java.util.HashMap
            r5.<init>()
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r3.f
            r4.a(r5, r0)
            com.sigmob.sdk.base.common.f r5 = com.sigmob.sdk.base.common.f.e()
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r3.f
            r5.a(r0, r3)
        L115:
            android.os.Bundle r5 = new android.os.Bundle
            r5.<init>()
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r3.i
            boolean r0 = r0.isEnable_keep_on()
            java.lang.String r1 = "enablekeepon"
            r5.putBoolean(r1, r0)
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r3.i
            boolean r0 = r0.isEnable_screen_lock_displayad()
            java.lang.String r1 = "enablescreenlockdisplayad"
            r5.putBoolean(r1, r0)
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r3.f
            r4.a(r0, r5)
            r4 = 0
            r3.h = r4
            r3.g = r4
        L13b:
            return
    }

    public void a(com.sigmob.sdk.rewardVideoAd.f r1) {
            r0 = this;
            r0.b = r1
            return
    }

    @Override
    public void a(java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r10, com.sigmob.sdk.base.models.LoadAdRequest r11) {
            r9 = this;
            java.lang.String r0 = "0"
            java.lang.String r1 = "respond"
            if (r10 == 0) goto Ld4
            int r2 = r10.size()     // Catch: java.lang.Throwable -> Lec
            if (r2 <= 0) goto Ld4
            r2 = 0
            java.lang.Object r3 = r10.get(r2)     // Catch: java.lang.Throwable -> Lec
            com.sigmob.sdk.base.models.BaseAdUnit r3 = (com.sigmob.sdk.base.models.BaseAdUnit) r3     // Catch: java.lang.Throwable -> Lec
            r9.e = r10     // Catch: java.lang.Throwable -> Lec
            java.lang.String r4 = "1"
            com.sigmob.sdk.rewardVideoAd.d$3 r5 = new com.sigmob.sdk.rewardVideoAd.d$3     // Catch: java.lang.Throwable -> Lec
            r5.<init>(r9, r10)     // Catch: java.lang.Throwable -> Lec
            r6 = 0
            com.sigmob.sdk.base.common.z.a(r1, r4, r6, r11, r5)     // Catch: java.lang.Throwable -> Lec
            com.sigmob.sdk.rewardVideoAd.e r4 = r9.m     // Catch: java.lang.Throwable -> Lec
            if (r4 != 0) goto L2d
            com.sigmob.sdk.rewardVideoAd.e r4 = new com.sigmob.sdk.rewardVideoAd.e     // Catch: java.lang.Throwable -> Lec
            boolean r5 = r9.o     // Catch: java.lang.Throwable -> Lec
            r4.<init>(r9, r5)     // Catch: java.lang.Throwable -> Lec
            r9.m = r4     // Catch: java.lang.Throwable -> Lec
        L2d:
            com.sigmob.sdk.rewardVideoAd.e r4 = r9.m     // Catch: java.lang.Throwable -> Lec
            boolean r4 = r4.a(r3)     // Catch: java.lang.Throwable -> Lec
            if (r4 != 0) goto L3b
            com.sigmob.windad.WindAdError r10 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_INFORMATION_LOSE     // Catch: java.lang.Throwable -> Lec
            r9.c(r10)     // Catch: java.lang.Throwable -> Lec
            return
        L3b:
            r9.f()     // Catch: java.lang.Throwable -> Lec
            com.sigmob.sdk.base.common.f.a(r10)     // Catch: java.lang.Throwable -> Lec
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r4 = r9.e     // Catch: java.lang.Throwable -> Lec
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> Lec
        L47:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> Lec
            if (r5 == 0) goto L67
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> Lec
            com.sigmob.sdk.base.models.BaseAdUnit r5 = (com.sigmob.sdk.base.models.BaseAdUnit) r5     // Catch: java.lang.Throwable -> Lec
            java.lang.String r7 = r5.getAd_source_channel()     // Catch: java.lang.Throwable -> Lec
            java.lang.String r8 = "1000"
            boolean r7 = r7.equalsIgnoreCase(r8)     // Catch: java.lang.Throwable -> Lec
            if (r7 == 0) goto L47
            com.sigmob.sdk.base.common.f r7 = com.sigmob.sdk.base.common.f.e()     // Catch: java.lang.Throwable -> Lec
            r7.e(r5)     // Catch: java.lang.Throwable -> Lec
            goto L47
        L67:
            int r4 = r3.getCreativeType()     // Catch: java.lang.Throwable -> Lec
            com.sigmob.sdk.base.common.l r5 = com.sigmob.sdk.base.common.l.i     // Catch: java.lang.Throwable -> Lec
            int r5 = r5.a()     // Catch: java.lang.Throwable -> Lec
            if (r4 != r5) goto La1
            com.sigmob.sdk.base.common.c r4 = new com.sigmob.sdk.base.common.c     // Catch: java.lang.Throwable -> Lec
            com.sigmob.sdk.base.models.LoadAdRequest r5 = r9.i     // Catch: java.lang.Throwable -> Lec
            r4.<init>(r10, r9, r5)     // Catch: java.lang.Throwable -> Lec
            boolean r10 = r4.a(r2)     // Catch: java.lang.Throwable -> Lec
            if (r10 == 0) goto L8c
            java.util.HashMap r10 = new java.util.HashMap     // Catch: java.lang.Throwable -> Lec
            r10.<init>()     // Catch: java.lang.Throwable -> Lec
            com.sigmob.sdk.rewardVideoAd.e r2 = r9.m     // Catch: java.lang.Throwable -> Lec
            r2.a(r10, r3)     // Catch: java.lang.Throwable -> Lec
            goto L10e
        L8c:
            java.lang.Integer r10 = r3.getAdExpiredTime()     // Catch: java.lang.Throwable -> Lec
            int r10 = r10.intValue()     // Catch: java.lang.Throwable -> Lec
            long r2 = (long) r10     // Catch: java.lang.Throwable -> Lec
            r9.g = r2     // Catch: java.lang.Throwable -> Lec
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lec
            r9.h = r2     // Catch: java.lang.Throwable -> Lec
            r9.c(r6)     // Catch: java.lang.Throwable -> Lec
            goto L10e
        La1:
            int r10 = r3.getPlayMode()     // Catch: java.lang.Throwable -> Lec
            if (r10 == 0) goto Lbb
            java.lang.Integer r10 = r3.getAdExpiredTime()     // Catch: java.lang.Throwable -> Lec
            int r10 = r10.intValue()     // Catch: java.lang.Throwable -> Lec
            long r4 = (long) r10     // Catch: java.lang.Throwable -> Lec
            r9.g = r4     // Catch: java.lang.Throwable -> Lec
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lec
            r9.h = r4     // Catch: java.lang.Throwable -> Lec
            r9.c(r6)     // Catch: java.lang.Throwable -> Lec
        Lbb:
            int r10 = r3.getPlayMode()     // Catch: java.lang.Throwable -> Lec
            r2 = 2
            if (r10 == r2) goto L10e
            java.util.HashMap r10 = new java.util.HashMap     // Catch: java.lang.Throwable -> Lec
            r10.<init>()     // Catch: java.lang.Throwable -> Lec
            com.sigmob.sdk.rewardVideoAd.e r2 = r9.m     // Catch: java.lang.Throwable -> Lec
            r2.a(r10, r3)     // Catch: java.lang.Throwable -> Lec
            com.sigmob.sdk.base.common.f r10 = com.sigmob.sdk.base.common.f.e()     // Catch: java.lang.Throwable -> Lec
            r10.a(r3, r9)     // Catch: java.lang.Throwable -> Lec
            goto L10e
        Ld4:
            com.sigmob.windad.WindAdError r10 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_INFORMATION_LOSE     // Catch: java.lang.Throwable -> Lec
            com.sigmob.windad.WindAdError r2 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_INFORMATION_LOSE     // Catch: java.lang.Throwable -> Lec
            r9.b(r2)     // Catch: java.lang.Throwable -> Lec
            int r2 = r10.getErrorCode()     // Catch: java.lang.Throwable -> Lec
            java.lang.String r10 = r10.getMessage()     // Catch: java.lang.Throwable -> Lec
            com.sigmob.sdk.base.common.z.a(r1, r0, r2, r10, r11)     // Catch: java.lang.Throwable -> Lec
            com.sigmob.windad.WindAdError r10 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_INFORMATION_LOSE     // Catch: java.lang.Throwable -> Lec
            r9.c(r10)     // Catch: java.lang.Throwable -> Lec
            goto L10e
        Lec:
            r10 = move-exception
            java.lang.String r2 = r10.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r2)
            r9.g()
            com.sigmob.windad.WindAdError r2 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_INFORMATION_LOSE
            java.lang.String r10 = r10.getMessage()
            r2.setMessage(r10)
            int r10 = r2.getErrorCode()
            java.lang.String r3 = r2.getMessage()
            com.sigmob.sdk.base.common.z.a(r1, r0, r10, r3, r11)
            r9.c(r2)
        L10e:
            return
    }

    boolean a() {
            r3 = this;
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r3.e
            r1 = 0
            if (r0 == 0) goto L2d
            int r0 = r0.size()
            if (r0 <= 0) goto L2d
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r3.e
            java.lang.Object r0 = r0.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r0 = (com.sigmob.sdk.base.models.BaseAdUnit) r0
            if (r0 == 0) goto L24
            boolean r2 = r3.e()
            if (r2 != 0) goto L24
            boolean r2 = r3.j(r0)
            if (r2 != 0) goto L22
            goto L24
        L22:
            r0 = 1
            return r0
        L24:
            if (r0 == 0) goto L2d
            com.sigmob.sdk.base.common.f r2 = com.sigmob.sdk.base.common.f.e()
            r2.d(r0)
        L2d:
            return r1
    }

    public void b() {
            r1 = this;
            r1.g()
            r0 = 0
            r1.f = r0
            return
    }

    @Override
    public void b(com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r2 = this;
            java.lang.String r0 = "onInterstitialShown() called"
            com.czhj.sdk.logger.SigmobLog.d(r0)
            r0 = 0
            r2.c = r0
            r2.g()
            if (r3 == 0) goto L7d
            com.sigmob.sdk.rewardVideoAd.g r0 = r2.n
            if (r0 == 0) goto L18
            java.lang.String r1 = r3.getAdslot_id()
            r0.onVideoAdPlayStart(r1)
        L18:
            boolean r0 = r3.getDisableAutoLoad()
            if (r0 != 0) goto L7d
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r2.i
            java.lang.String r0 = r0.getBidToken()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L7d
            com.sigmob.sdk.base.models.rtb.BiddingResponse r0 = r3.bidding_response
            if (r0 != 0) goto L7d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r3.getPlayMode()
            r0.append(r1)
            java.lang.String r1 = " adsRequest onInterstitialShown: "
            r0.append(r1)
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r2.i
            java.lang.String r1 = r1.getBidToken()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            int r0 = r3.getPlayMode()
            if (r0 != 0) goto L7d
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r2.i
            java.lang.String r0 = r0.getBidToken()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L7d
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r2.i
            java.lang.String r1 = r3.getCamp_id()
            r0.setLastCampid(r1)
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r2.i
            java.lang.String r3 = r3.getCrid()
            r0.setLastCrid(r3)
            android.os.Handler r3 = r2.a
            com.sigmob.sdk.rewardVideoAd.d$4 r0 = new com.sigmob.sdk.rewardVideoAd.d$4
            r0.<init>(r2)
            r3.post(r0)
        L7d:
            return
    }

    @Override
    public void b(com.sigmob.sdk.base.models.BaseAdUnit r9, java.lang.String r10) {
            r8 = this;
            android.os.Handler r0 = r8.a
            r1 = 8193(0x2001, float:1.1481E-41)
            r0.removeMessages(r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onInterstitialFailed() called with: errorCode = ["
            r0.append(r1)
            r0.append(r10)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            com.sigmob.sdk.base.models.LoadAdRequest r5 = r8.i
            java.lang.String r1 = "loadend"
            java.lang.String r2 = "0"
            r4 = 0
            r6 = 0
            r3 = r9
            com.sigmob.sdk.base.common.z.a(r1, r2, r3, r4, r5, r6)
            com.sigmob.sdk.base.common.a r0 = com.sigmob.sdk.base.common.a.A
            com.sigmob.sdk.base.network.f.a(r9, r0)
            r8.g()
            if (r9 == 0) goto L58
            int r0 = r9.getPlayMode()
            if (r0 != 0) goto L58
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_FILE_DOWNLOAD
            r0.setMessage(r10)
            int r4 = r9.getAd_type()
            java.lang.String r5 = r9.getadslot_id()
            java.lang.String r6 = r9.getLoad_id()
            java.lang.String r3 = "load"
            r1 = r8
            r2 = r9
            r7 = r0
            r1.a(r2, r3, r4, r5, r6, r7)
            r8.c(r0)
        L58:
            return
    }

    public java.lang.String c() {
            r2 = this;
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r2.e
            if (r0 == 0) goto L30
            int r0 = r0.size()
            if (r0 <= 0) goto L30
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r2.e
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            if (r0 == 0) goto L30
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r2.e
            java.lang.Object r0 = r0.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r0 = (com.sigmob.sdk.base.models.BaseAdUnit) r0
            com.sigmob.sdk.base.models.rtb.BiddingResponse r0 = r0.bidding_response
            if (r0 == 0) goto L30
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r2.e
            java.lang.Object r0 = r0.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r0 = (com.sigmob.sdk.base.models.BaseAdUnit) r0
            com.sigmob.sdk.base.models.rtb.BiddingResponse r0 = r0.bidding_response
            java.lang.Integer r0 = r0.ecpm
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
        L30:
            r0 = 0
            return r0
    }

    @Override
    public void c(com.sigmob.sdk.base.models.BaseAdUnit r2) {
            r1 = this;
            java.lang.String r0 = "onInterstitialClicked() called"
            com.czhj.sdk.logger.SigmobLog.d(r0)
            com.sigmob.sdk.rewardVideoAd.g r0 = r1.n
            if (r0 == 0) goto L12
            if (r2 == 0) goto L12
            java.lang.String r2 = r2.getAdslot_id()
            r0.onVideoAdClicked(r2)
        L12:
            return
    }

    @Override
    public void c(com.sigmob.sdk.base.models.BaseAdUnit r9, java.lang.String r10) {
            r8 = this;
            if (r9 == 0) goto L15
            java.lang.String r0 = r9.getAd_source_channel()
            java.lang.String r1 = "1000"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L15
            com.sigmob.sdk.base.common.f r0 = com.sigmob.sdk.base.common.f.e()
            r0.d(r9)
        L15:
            if (r9 == 0) goto L32
            com.sigmob.windad.WindAdError r7 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_AD_PLAY
            r7.setMessage(r10)
            r8.a(r7)
            int r4 = r9.getAd_type()
            java.lang.String r5 = r9.getadslot_id()
            java.lang.String r6 = r9.getLoad_id()
            java.lang.String r3 = "play"
            r1 = r8
            r2 = r9
            r1.a(r2, r3, r4, r5, r6, r7)
        L32:
            java.lang.String r9 = "onVideoPlayFail() called"
            com.czhj.sdk.logger.SigmobLog.d(r9)
            return
    }

    public java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> d() {
            r1 = this;
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r1.e
            return r0
    }

    @Override
    public void d(com.sigmob.sdk.base.models.BaseAdUnit r2) {
            r1 = this;
            java.lang.String r0 = "onInterstitialDismissed() called"
            com.czhj.sdk.logger.SigmobLog.d(r0)
            r0 = 0
            r1.f = r0
            if (r2 != 0) goto Lb
            return
        Lb:
            com.sigmob.sdk.rewardVideoAd.e r0 = r1.m
            if (r0 == 0) goto L12
            r0.b(r2)
        L12:
            com.sigmob.sdk.rewardVideoAd.g r0 = r1.n
            if (r0 == 0) goto L1d
            java.lang.String r2 = r2.getAdslot_id()
            r0.onVideoAdClosed(r2)
        L1d:
            return
    }

    @Override
    public void e(com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r2 = this;
            if (r3 == 0) goto L1f
            com.czhj.sdk.common.models.AdStatus r0 = com.czhj.sdk.common.models.AdStatus.AdStatusPlaying
            r2.d = r0
            com.sigmob.sdk.base.common.f r0 = com.sigmob.sdk.base.common.f.e()
            java.lang.String r1 = r3.getCamp_id()
            r0.d(r1)
            com.sigmob.sdk.base.common.f r0 = com.sigmob.sdk.base.common.f.e()
            java.lang.String r3 = r3.getCrid()
            r0.c(r3)
            r2.g()
        L1f:
            return
    }

    @Override
    public void f(com.sigmob.sdk.base.models.BaseAdUnit r4) {
            r3 = this;
            java.lang.String r0 = "onVideoComplete() called"
            com.czhj.sdk.logger.SigmobLog.d(r0)
            r0 = 1
            r3.c = r0
            com.sigmob.sdk.rewardVideoAd.g r1 = r3.n
            if (r1 == 0) goto L1a
            if (r4 == 0) goto L1a
            com.sigmob.windad.rewardVideo.WindRewardInfo r2 = new com.sigmob.windad.rewardVideo.WindRewardInfo
            r2.<init>(r0)
            java.lang.String r4 = r4.getAdslot_id()
            r1.onVideoAdPlayComplete(r2, r4)
        L1a:
            return
    }

    @Override
    public void g(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0 = this;
            java.lang.String r1 = "onVideoPlay() called"
            com.czhj.sdk.logger.SigmobLog.d(r1)
            return
    }

    @Override
    public void h(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0 = this;
            java.lang.String r1 = "onVideoSkip() called"
            com.czhj.sdk.logger.SigmobLog.d(r1)
            return
    }

    @Override
    public void i(com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r2 = this;
            r0 = 0
            r2.f = r0
            com.sigmob.sdk.rewardVideoAd.g r0 = r2.n
            if (r0 == 0) goto Le
            java.lang.String r1 = r3.getAdslot_id()
            r0.onVideoAdPlayEnd(r1)
        Le:
            boolean r0 = r3.getDisableAutoLoad()
            if (r0 != 0) goto L77
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r2.i
            java.lang.String r0 = r0.getBidToken()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L77
            com.sigmob.sdk.base.models.rtb.BiddingResponse r0 = r3.bidding_response
            if (r0 != 0) goto L77
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r3.getPlayMode()
            r0.append(r1)
            java.lang.String r1 = " adsRequest onVideoClose: "
            r0.append(r1)
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r2.i
            java.lang.String r1 = r1.getBidToken()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            int r0 = r3.getPlayMode()
            if (r0 == 0) goto L77
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r2.i
            java.lang.String r0 = r0.getBidToken()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L77
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r2.i
            java.lang.String r1 = r3.getCamp_id()
            r0.setLastCampid(r1)
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r2.i
            java.lang.String r3 = r3.getCrid()
            r0.setLastCrid(r3)
            com.czhj.sdk.common.models.AdStatus r3 = com.czhj.sdk.common.models.AdStatus.AdStatusNone
            r2.d = r3
            android.os.Handler r3 = r2.a
            com.sigmob.sdk.rewardVideoAd.d$5 r0 = new com.sigmob.sdk.rewardVideoAd.d$5
            r0.<init>(r2)
            r3.post(r0)
        L77:
            return
    }
}

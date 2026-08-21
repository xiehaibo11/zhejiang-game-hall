package com.tkay.rewardvideo.a;

public final class e implements com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener {
    long a;
    long b;
    boolean c;
    com.tkay.core.common.f.d d;
    boolean e;
    long f;
    long g;
    int h;
    boolean i;
    private com.tkay.rewardvideo.api.TYRewardVideoListener j;
    private com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter k;
    private com.tkay.core.common.g.c l;
    private long m;
    private long n;


    public e(com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r3, com.tkay.core.common.g.c r4, com.tkay.rewardvideo.api.TYRewardVideoListener r5) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.h = r0
            r0 = 0
            r2.a = r0
            r2.j = r5
            r2.k = r3
            r2.l = r4
            r3 = 1
            r2.i = r3
            return
    }

    private com.tkay.core.common.f.d a() {
            r4 = this;
            com.tkay.core.common.f.d r0 = r4.d
            if (r0 != 0) goto L2e
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r0 = r4.k
            if (r0 == 0) goto L2e
            com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
            com.tkay.core.common.f.d r0 = r0.N()
            r4.d = r0
            r1 = 6
            r0.q = r1
            com.tkay.core.common.f.d r0 = r4.d
            java.lang.String r0 = r0.X()
            com.tkay.core.common.f.d r1 = r4.d
            java.lang.String r1 = r1.x()
            long r2 = java.lang.System.currentTimeMillis()
            java.lang.String r0 = com.tkay.core.common.l.g.b(r0, r1, r2)
            com.tkay.core.common.f.d r1 = r4.d
            r1.h(r0)
        L2e:
            com.tkay.core.common.f.d r0 = r4.d
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter a(com.tkay.rewardvideo.a.e r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r0 = r0.k
            return r0
    }

    private void a(com.tkay.core.api.AdError r4, com.tkay.core.common.f.d r5) {
            r3 = this;
            java.lang.String r0 = com.tkay.core.common.b.f.i.c
            java.lang.String r1 = com.tkay.core.common.b.f.i.m
            java.lang.String r2 = r4.printStackTrace()
            com.tkay.core.common.l.g.a(r5, r0, r1, r2)
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r0 = r3.k
            if (r0 == 0) goto L14
            java.util.Map r0 = r0.getNetworkInfoMap()
            goto L15
        L14:
            r0 = 0
        L15:
            com.tkay.core.common.k.c.a(r5, r4, r0)
            return
    }

    private void a(com.tkay.core.common.f.d r4) {
            r3 = this;
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r0 = r3.k
            java.lang.String r0 = r0.getILRD()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto Lf
            r4.a(r0)
        Lf:
            boolean r0 = r3.i
            if (r0 == 0) goto L24
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.k.a r0 = com.tkay.core.common.k.a.a(r0)
            r1 = 8
            r0.a(r1, r4)
        L24:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.k.a r0 = com.tkay.core.common.k.a.a(r0)
            r1 = 4
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r2 = r3.k
            com.tkay.core.common.f.aj r2 = r2.getUnitGroupInfo()
            r0.a(r1, r4, r2)
            java.lang.String r0 = com.tkay.core.common.b.f.i.c
            java.lang.String r1 = com.tkay.core.common.b.f.i.l
            java.lang.String r2 = ""
            com.tkay.core.common.l.g.a(r4, r0, r1, r2)
            return
    }

    private static void a(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L7
            return
        L7:
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            com.tkay.core.common.f.c r0 = r0.c(r3)
            if (r0 == 0) goto L33
            com.tkay.core.common.v r1 = com.tkay.core.common.v.a()
            r1.d(r3)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            com.tkay.rewardvideo.a.a r1 = com.tkay.rewardvideo.a.a.a(r1, r3)
            com.tkay.core.common.v r2 = com.tkay.core.common.v.a()
            java.lang.String r0 = r0.a()
            java.lang.String r3 = r2.b(r3, r0)
            r1.d(r3)
        L33:
            return
    }

    private static void b(com.tkay.core.common.f.d r3) {
            java.lang.String r0 = com.tkay.core.common.b.f.i.f
            java.lang.String r1 = com.tkay.core.common.b.f.i.l
            java.lang.String r2 = ""
            com.tkay.core.common.l.g.a(r3, r0, r1, r2)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.k.a r0 = com.tkay.core.common.k.a.a(r0)
            r1 = 9
            r0.a(r1, r3)
            return
    }

    private static void c(com.tkay.core.common.f.d r3) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.k.a r0 = com.tkay.core.common.k.a.a(r0)
            r1 = 6
            r0.a(r1, r3)
            java.lang.String r0 = com.tkay.core.common.b.f.i.d
            java.lang.String r1 = com.tkay.core.common.b.f.i.l
            java.lang.String r2 = ""
            com.tkay.core.common.l.g.a(r3, r0, r1, r2)
            return
    }

    private void d(com.tkay.core.common.f.d r4) {
            r3 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.k.a r0 = com.tkay.core.common.k.a.a(r0)
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r1 = r3.k
            com.tkay.core.common.f.aj r1 = r1.getUnitGroupInfo()
            r2 = 13
            r0.a(r2, r4, r1)
            r3.a(r4)
            return
    }

    @Override
    public final void onAgainReward() {
            r8 = this;
            com.tkay.core.common.f.d r7 = r8.a()
            boolean r0 = r8.e
            if (r0 != 0) goto L16
            com.tkay.core.common.g.c r0 = r8.l
            if (r0 == 0) goto L16
            long r1 = r8.f
            long r3 = r8.g
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r5 = r8.k
            r6 = r7
            r0.a(r1, r3, r5, r6)
        L16:
            r0 = 1
            r8.e = r0
            com.tkay.rewardvideo.api.TYRewardVideoListener r0 = r8.j
            if (r0 == 0) goto L2c
            boolean r1 = r0 instanceof com.tkay.rewardvideo.api.TYRewardVideoExListener
            if (r1 == 0) goto L2c
            com.tkay.rewardvideo.api.TYRewardVideoExListener r0 = (com.tkay.rewardvideo.api.TYRewardVideoExListener) r0
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r1 = r8.k
            com.tkay.core.common.b.i r1 = com.tkay.core.common.b.i.a(r7, r1)
            r0.onAgainReward(r1)
        L2c:
            return
    }

    @Override
    public final void onDeeplinkCallback(boolean r4) {
            r3 = this;
            com.tkay.rewardvideo.api.TYRewardVideoListener r0 = r3.j
            if (r0 == 0) goto L13
            boolean r1 = r0 instanceof com.tkay.rewardvideo.api.TYRewardVideoExListener
            if (r1 == 0) goto L13
            com.tkay.rewardvideo.api.TYRewardVideoExListener r0 = (com.tkay.rewardvideo.api.TYRewardVideoExListener) r0
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r1 = r3.k
            com.tkay.core.common.b.i r1 = com.tkay.core.common.b.i.a(r1)
            r0.onDeeplinkCallback(r1, r4)
        L13:
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r0 = r3.k
            if (r0 == 0) goto L29
            com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
            if (r4 == 0) goto L20
            java.lang.String r4 = com.tkay.core.common.b.f.i.l
            goto L22
        L20:
            java.lang.String r4 = com.tkay.core.common.b.f.i.m
        L22:
            java.lang.String r1 = com.tkay.core.common.b.f.i.i
            java.lang.String r2 = ""
            com.tkay.core.common.l.g.a(r0, r1, r4, r2)
        L29:
            return
    }

    @Override
    public final void onDownloadConfirm(android.content.Context r3, com.tkay.core.api.TYNetworkConfirmInfo r4) {
            r2 = this;
            com.tkay.rewardvideo.api.TYRewardVideoListener r0 = r2.j
            if (r0 == 0) goto L13
            boolean r1 = r0 instanceof com.tkay.rewardvideo.api.TYRewardVideoExListener
            if (r1 == 0) goto L13
            com.tkay.rewardvideo.api.TYRewardVideoExListener r0 = (com.tkay.rewardvideo.api.TYRewardVideoExListener) r0
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r1 = r2.k
            com.tkay.core.common.b.i r1 = com.tkay.core.common.b.i.a(r1)
            r0.onDownloadConfirm(r3, r1, r4)
        L13:
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r3 = r2.k
            if (r3 == 0) goto L24
            com.tkay.core.common.f.d r3 = r3.getTrackingInfo()
            java.lang.String r4 = com.tkay.core.common.b.f.i.j
            java.lang.String r0 = com.tkay.core.common.b.f.i.l
            java.lang.String r1 = ""
            com.tkay.core.common.l.g.a(r3, r4, r0, r1)
        L24:
            return
    }

    @Override
    public final void onReward() {
            r8 = this;
            boolean r0 = r8.c
            if (r0 != 0) goto L15
            com.tkay.core.common.g.c r1 = r8.l
            if (r1 == 0) goto L15
            long r2 = r8.m
            long r4 = r8.n
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r6 = r8.k
            com.tkay.core.common.f.d r7 = r6.getTrackingInfo()
            r1.a(r2, r4, r6, r7)
        L15:
            r0 = 1
            r8.c = r0
            com.tkay.rewardvideo.api.TYRewardVideoListener r0 = r8.j
            if (r0 == 0) goto L25
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r1 = r8.k
            com.tkay.core.common.b.i r1 = com.tkay.core.common.b.i.a(r1)
            r0.onReward(r1)
        L25:
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r0 = r8.k
            if (r0 == 0) goto L36
            com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
            java.lang.String r1 = com.tkay.core.common.b.f.i.h
            java.lang.String r2 = com.tkay.core.common.b.f.i.l
            java.lang.String r3 = ""
            com.tkay.core.common.l.g.a(r0, r1, r2, r3)
        L36:
            return
    }

    @Override
    public final void onRewardedVideoAdAgainPlayClicked() {
            r3 = this;
            com.tkay.core.common.f.d r0 = r3.a()
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r1 = r3.k
            if (r1 == 0) goto Ld
            if (r0 == 0) goto Ld
            c(r0)
        Ld:
            com.tkay.rewardvideo.api.TYRewardVideoListener r1 = r3.j
            if (r1 == 0) goto L20
            boolean r2 = r1 instanceof com.tkay.rewardvideo.api.TYRewardVideoExListener
            if (r2 == 0) goto L20
            com.tkay.rewardvideo.api.TYRewardVideoExListener r1 = (com.tkay.rewardvideo.api.TYRewardVideoExListener) r1
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r2 = r3.k
            com.tkay.core.common.b.i r0 = com.tkay.core.common.b.i.a(r0, r2)
            r1.onRewardedVideoAdAgainPlayClicked(r0)
        L20:
            return
    }

    @Override
    public final void onRewardedVideoAdAgainPlayEnd() {
            r4 = this;
            long r0 = r4.g
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto Le
            long r0 = android.os.SystemClock.elapsedRealtime()
            r4.g = r0
        Le:
            com.tkay.core.common.f.d r0 = r4.a()
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r1 = r4.k
            if (r1 == 0) goto L1b
            if (r0 == 0) goto L1b
            b(r0)
        L1b:
            com.tkay.rewardvideo.api.TYRewardVideoListener r1 = r4.j
            if (r1 == 0) goto L2e
            boolean r2 = r1 instanceof com.tkay.rewardvideo.api.TYRewardVideoExListener
            if (r2 == 0) goto L2e
            com.tkay.rewardvideo.api.TYRewardVideoExListener r1 = (com.tkay.rewardvideo.api.TYRewardVideoExListener) r1
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r2 = r4.k
            com.tkay.core.common.b.i r0 = com.tkay.core.common.b.i.a(r0, r2)
            r1.onRewardedVideoAdAgainPlayEnd(r0)
        L2e:
            return
    }

    @Override
    public final void onRewardedVideoAdAgainPlayFailed(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            r0 = 99
            r2.h = r0
            java.lang.String r0 = "4006"
            com.tkay.core.api.AdError r3 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r3, r4)
            com.tkay.core.common.f.d r4 = r2.a()
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r0 = r2.k
            if (r0 == 0) goto L17
            if (r4 == 0) goto L17
            r2.a(r3, r4)
        L17:
            com.tkay.rewardvideo.api.TYRewardVideoListener r0 = r2.j
            if (r0 == 0) goto L2a
            boolean r1 = r0 instanceof com.tkay.rewardvideo.api.TYRewardVideoExListener
            if (r1 == 0) goto L2a
            com.tkay.rewardvideo.api.TYRewardVideoExListener r0 = (com.tkay.rewardvideo.api.TYRewardVideoExListener) r0
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r1 = r2.k
            com.tkay.core.common.b.i r4 = com.tkay.core.common.b.i.a(r4, r1)
            r0.onRewardedVideoAdAgainPlayFailed(r3, r4)
        L2a:
            return
    }

    @Override
    public final void onRewardedVideoAdAgainPlayStart() {
            r4 = this;
            r0 = 0
            r4.h = r0
            long r0 = r4.f
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L11
            long r0 = android.os.SystemClock.elapsedRealtime()
            r4.f = r0
        L11:
            r4.g = r2
            com.tkay.core.common.f.d r0 = r4.a()
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r1 = r4.k
            if (r1 == 0) goto L37
            if (r0 == 0) goto L37
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            com.tkay.core.common.k.a r1 = com.tkay.core.common.k.a.a(r1)
            r2 = 13
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r3 = r4.k
            com.tkay.core.common.f.aj r3 = r3.getUnitGroupInfo()
            r1.a(r2, r0, r3)
            r4.a(r0)
        L37:
            com.tkay.rewardvideo.api.TYRewardVideoListener r1 = r4.j
            if (r1 == 0) goto L4a
            boolean r2 = r1 instanceof com.tkay.rewardvideo.api.TYRewardVideoExListener
            if (r2 == 0) goto L4a
            com.tkay.rewardvideo.api.TYRewardVideoExListener r1 = (com.tkay.rewardvideo.api.TYRewardVideoExListener) r1
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r2 = r4.k
            com.tkay.core.common.b.i r0 = com.tkay.core.common.b.i.a(r0, r2)
            r1.onRewardedVideoAdAgainPlayStart(r0)
        L4a:
            return
    }

    @Override
    public final void onRewardedVideoAdClosed() {
            r11 = this;
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r0 = r11.k
            if (r0 == 0) goto L72
            com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
            int r1 = r11.h
            if (r1 != 0) goto L12
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r1 = r11.k
            int r1 = r1.getDismissType()
        L12:
            if (r1 != 0) goto L15
            r1 = 1
        L15:
            r0.y(r1)
            java.lang.String r1 = com.tkay.core.common.b.f.i.e
            java.lang.String r2 = com.tkay.core.common.b.f.i.l
            java.lang.String r3 = ""
            com.tkay.core.common.l.g.a(r0, r1, r2, r3)
            long r3 = r11.a
            r1 = 0
            int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r1 == 0) goto L3a
            boolean r2 = r11.c
            long r5 = java.lang.System.currentTimeMillis()
            long r7 = android.os.SystemClock.elapsedRealtime()
            long r9 = r11.b
            long r7 = r7 - r9
            r1 = r0
            com.tkay.core.common.k.c.a(r1, r2, r3, r5, r7)
        L3a:
            boolean r1 = r11.c
            com.tkay.core.common.k.c.a(r0, r1)
            boolean r1 = r11.c
            if (r1 == 0) goto L4e
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r1 = r11.k     // Catch: java.lang.Throwable -> L5c
            r1.clearImpressionListener()     // Catch: java.lang.Throwable -> L5c
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r1 = r11.k     // Catch: java.lang.Throwable -> L5c
            r1.destory()     // Catch: java.lang.Throwable -> L5c
            goto L5c
        L4e:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            com.tkay.rewardvideo.a.e$1 r2 = new com.tkay.rewardvideo.a.e$1
            r2.<init>(r11)
            r3 = 5000(0x1388, double:2.4703E-320)
            r1.a(r2, r3)
        L5c:
            if (r0 == 0) goto L65
            java.lang.String r1 = r0.W()
            a(r1)
        L65:
            com.tkay.rewardvideo.api.TYRewardVideoListener r1 = r11.j
            if (r1 == 0) goto L72
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r2 = r11.k
            com.tkay.core.common.b.i r0 = com.tkay.core.common.b.i.a(r0, r2)
            r1.onRewardedVideoAdClosed(r0)
        L72:
            return
    }

    @Override
    public final void onRewardedVideoAdPlayClicked() {
            r2 = this;
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r0 = r2.k
            if (r0 == 0) goto Lb
            com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
            c(r0)
        Lb:
            com.tkay.rewardvideo.api.TYRewardVideoListener r0 = r2.j
            if (r0 == 0) goto L18
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r1 = r2.k
            com.tkay.core.common.b.i r1 = com.tkay.core.common.b.i.a(r1)
            r0.onRewardedVideoAdPlayClicked(r1)
        L18:
            return
    }

    @Override
    public final void onRewardedVideoAdPlayEnd() {
            r4 = this;
            long r0 = r4.n
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto Le
            long r0 = android.os.SystemClock.elapsedRealtime()
            r4.n = r0
        Le:
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r0 = r4.k
            if (r0 == 0) goto L24
            int r0 = r0.getDismissType()
            if (r0 != 0) goto L1b
            r0 = 3
            r4.h = r0
        L1b:
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r0 = r4.k
            com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
            b(r0)
        L24:
            com.tkay.rewardvideo.api.TYRewardVideoListener r0 = r4.j
            if (r0 == 0) goto L31
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r1 = r4.k
            com.tkay.core.common.b.i r1 = com.tkay.core.common.b.i.a(r1)
            r0.onRewardedVideoAdPlayEnd(r1)
        L31:
            return
    }

    @Override
    public final void onRewardedVideoAdPlayFailed(java.lang.String r8, java.lang.String r9) {
            r7 = this;
            r0 = 99
            r7.h = r0
            java.lang.String r0 = "4006"
            com.tkay.core.api.AdError r8 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r8, r9)
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r9 = r7.k
            if (r9 == 0) goto L55
            com.tkay.core.common.f.d r9 = r9.getTrackingInfo()
            int r0 = r9.H()
            r1 = 66
            if (r0 != r1) goto L1d
            r0 = 0
            r7.i = r0
        L1d:
            java.lang.String r0 = r9.W()
            r7.a(r8, r9)
            if (r9 == 0) goto L2d
            java.lang.String r9 = r9.W()
            a(r9)
        L2d:
            boolean r9 = android.text.TextUtils.isEmpty(r0)
            if (r9 != 0) goto L55
            com.tkay.core.common.b.m r9 = com.tkay.core.common.b.m.a()
            android.content.Context r9 = r9.D()
            com.tkay.rewardvideo.a.a r1 = com.tkay.rewardvideo.a.a.a(r9, r0)
            r9 = 0
            boolean r9 = r1.a(r9)
            if (r9 == 0) goto L55
            com.tkay.core.common.b.m r9 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r9.D()
            r3 = 7
            r4 = 0
            r5 = 0
            r6 = 0
            r1.a(r2, r3, r4, r5, r6)
        L55:
            com.tkay.rewardvideo.api.TYRewardVideoListener r9 = r7.j
            if (r9 == 0) goto L62
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r0 = r7.k
            com.tkay.core.common.b.i r0 = com.tkay.core.common.b.i.a(r0)
            r9.onRewardedVideoAdPlayFailed(r8, r0)
        L62:
            return
    }

    @Override
    public final void onRewardedVideoAdPlayStart() {
            r9 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r9.a = r0
            long r0 = android.os.SystemClock.elapsedRealtime()
            r9.b = r0
            long r2 = r9.m
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L16
            r9.m = r0
        L16:
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r0 = r9.k
            com.tkay.core.common.b.i r0 = com.tkay.core.common.b.i.a(r0)
            com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter r1 = r9.k
            if (r1 == 0) goto L5f
            com.tkay.core.common.f.d r1 = r1.getTrackingInfo()
            r9.a(r1)
            if (r1 == 0) goto L35
            java.lang.String r1 = r1.W()
            com.tkay.core.common.v r2 = com.tkay.core.common.v.a()
            r2.a(r1, r0)
            goto L37
        L35:
            java.lang.String r1 = ""
        L37:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L5f
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.D()
            com.tkay.rewardvideo.a.a r3 = com.tkay.rewardvideo.a.a.a(r2, r1)
            r1 = 0
            boolean r1 = r3.a(r1)
            if (r1 == 0) goto L5f
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r4 = r1.D()
            r5 = 6
            r6 = 0
            r7 = 0
            r8 = 0
            r3.a(r4, r5, r6, r7, r8)
        L5f:
            boolean r1 = r9.i
            if (r1 == 0) goto L6a
            com.tkay.rewardvideo.api.TYRewardVideoListener r1 = r9.j
            if (r1 == 0) goto L6a
            r1.onRewardedVideoAdPlayStart(r0)
        L6a:
            return
    }
}

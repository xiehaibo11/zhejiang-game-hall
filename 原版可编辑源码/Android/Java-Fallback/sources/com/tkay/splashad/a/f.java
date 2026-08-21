package com.tkay.splashad.a;

public final class f implements com.tkay.splashad.unitgroup.api.CustomSplashEventListener {
    com.tkay.splashad.unitgroup.api.CustomSplashAdapter a;
    com.tkay.splashad.a.a b;
    long c;
    private java.util.Timer d;
    private boolean e;
    private int f;

    final class 1 extends java.util.TimerTask {
        final android.view.ViewGroup a;
        final com.tkay.core.common.l.a.f.b b;
        final com.tkay.splashad.api.TYSplashSkipAdListener c;
        final long d;
        final long e;
        final com.tkay.splashad.a.f f;


        1(com.tkay.splashad.a.f r1, android.view.ViewGroup r2, com.tkay.core.common.l.a.f.b r3, com.tkay.splashad.api.TYSplashSkipAdListener r4, long r5, long r7) {
                r0 = this;
                r0.f = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.d = r5
                r0.e = r7
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r2 = this;
                android.view.ViewGroup r0 = r2.a
                if (r0 == 0) goto Lc
                com.tkay.core.common.l.a.f$b r1 = r2.b
                boolean r0 = com.tkay.core.common.l.u.a(r0, r1)
                if (r0 == 0) goto L18
            Lc:
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
                com.tkay.splashad.a.f$1$1 r1 = new com.tkay.splashad.a.f$1$1
                r1.<init>(r2)
                r0.a(r1)
            L18:
                return
        }
    }

    final class 2 implements java.lang.Runnable {
        final com.tkay.splashad.api.TYSplashSkipAdListener a;
        final long b;
        final long c;
        final com.tkay.splashad.a.f d;

        2(com.tkay.splashad.a.f r1, com.tkay.splashad.api.TYSplashSkipAdListener r2, long r3, long r5) {
                r0 = this;
                r0.d = r1
                r0.a = r2
                r0.b = r3
                r0.c = r5
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r5 = this;
                com.tkay.splashad.api.TYSplashSkipAdListener r0 = r5.a
                if (r0 == 0) goto L16
                long r1 = r5.b
                com.tkay.splashad.a.f r3 = r5.d
                long r3 = r3.c
                r0.onAdTick(r1, r3)
                com.tkay.splashad.a.f r0 = r5.d
                long r1 = r0.c
                long r3 = r5.c
                long r1 = r1 - r3
                r0.c = r1
            L16:
                return
        }
    }

    public f(com.tkay.splashad.unitgroup.api.CustomSplashAdapter r2, com.tkay.splashad.a.a r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.e = r0
            r1.f = r0
            r1.a = r2
            r1.b = r3
            return
    }

    private void a() {
            r1 = this;
            java.util.Timer r0 = r1.d
            if (r0 == 0) goto La
            r0.cancel()
            r0 = 0
            r1.d = r0
        La:
            return
    }

    private void a(com.tkay.splashad.api.TYSplashSkipInfo r18) {
            r17 = this;
            r9 = r17
            java.util.Timer r0 = r9.d
            if (r0 != 0) goto L49
            long r10 = r18.getCallbackInterval()
            long r12 = r18.getCountDownDuration()
            android.view.ViewGroup r2 = r18.getContainer()
            com.tkay.core.common.l.a.f$b r3 = new com.tkay.core.common.l.a.f$b
            r3.<init>()
            com.tkay.splashad.api.TYSplashSkipAdListener r14 = r18.getTYSplashSkipAdListener()
            r9.c = r12
            java.util.Timer r15 = new java.util.Timer
            r15.<init>()
            r9.d = r15
            com.tkay.splashad.a.f$1 r16 = new com.tkay.splashad.a.f$1
            r0 = r16
            r1 = r17
            r4 = r14
            r5 = r12
            r7 = r10
            r0.<init>(r1, r2, r3, r4, r5, r7)
            r1 = r15
            r2 = r16
            r3 = r10
            r5 = r10
            r1.schedule(r2, r3, r5)
            com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()
            com.tkay.splashad.a.f$2 r8 = new com.tkay.splashad.a.f$2
            r0 = r8
            r1 = r17
            r2 = r14
            r3 = r12
            r0.<init>(r1, r2, r3, r5)
            r7.a(r8)
        L49:
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
            com.tkay.splashad.a.c r1 = com.tkay.splashad.a.c.a(r1, r3)
            com.tkay.core.common.v r2 = com.tkay.core.common.v.a()
            java.lang.String r0 = r0.a()
            java.lang.String r3 = r2.b(r3, r0)
            r1.d(r3)
        L33:
            return
    }

    final void a(int r1) {
            r0 = this;
            r0.f = r1
            return
    }

    @Override
    public final void onDeeplinkCallback(boolean r4) {
            r3 = this;
            com.tkay.splashad.a.a r0 = r3.b
            if (r0 == 0) goto Ld
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r1 = r3.a
            com.tkay.core.common.b.i r1 = com.tkay.core.common.b.i.a(r1)
            r0.onDeeplinkCallback(r1, r4)
        Ld:
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r0 = r3.a
            if (r0 == 0) goto L23
            com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
            if (r4 == 0) goto L1a
            java.lang.String r4 = com.tkay.core.common.b.f.i.l
            goto L1c
        L1a:
            java.lang.String r4 = com.tkay.core.common.b.f.i.m
        L1c:
            java.lang.String r1 = com.tkay.core.common.b.f.i.i
            java.lang.String r2 = ""
            com.tkay.core.common.l.g.a(r0, r1, r4, r2)
        L23:
            return
    }

    @Override
    public final void onDownloadConfirm(android.content.Context r3, com.tkay.core.api.TYNetworkConfirmInfo r4) {
            r2 = this;
            com.tkay.splashad.a.a r0 = r2.b
            if (r0 == 0) goto Ld
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r1 = r2.a
            com.tkay.core.common.b.i r1 = com.tkay.core.common.b.i.a(r1)
            r0.onDownloadConfirm(r3, r1, r4)
        Ld:
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r3 = r2.a
            if (r3 == 0) goto L1e
            com.tkay.core.common.f.d r3 = r3.getTrackingInfo()
            java.lang.String r4 = com.tkay.core.common.b.f.i.j
            java.lang.String r0 = com.tkay.core.common.b.f.i.l
            java.lang.String r1 = ""
            com.tkay.core.common.l.g.a(r3, r4, r0, r1)
        L1e:
            return
    }

    @Override
    public final void onSplashAdClicked() {
            r4 = this;
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r0 = r4.a
            if (r0 == 0) goto L21
            com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            com.tkay.core.common.k.a r1 = com.tkay.core.common.k.a.a(r1)
            r2 = 6
            r1.a(r2, r0)
            java.lang.String r1 = com.tkay.core.common.b.f.i.d
            java.lang.String r2 = com.tkay.core.common.b.f.i.l
            java.lang.String r3 = ""
            com.tkay.core.common.l.g.a(r0, r1, r2, r3)
        L21:
            com.tkay.splashad.a.a r0 = r4.b
            if (r0 == 0) goto L2e
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r1 = r4.a
            com.tkay.core.common.b.i r1 = com.tkay.core.common.b.i.a(r1)
            r0.onAdClick(r1)
        L2e:
            return
    }

    @Override
    public final void onSplashAdDismiss() {
            r8 = this;
            java.util.Timer r0 = r8.d
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r0 = r8.a
            if (r0 == 0) goto Lbe
            com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
            int r1 = r8.f
            r2 = 1
            if (r1 == 0) goto L18
            r0.y(r1)
            goto L24
        L18:
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r1 = r8.a
            int r1 = r1.getDismissType()
            if (r1 != 0) goto L21
            r1 = r2
        L21:
            r0.y(r1)
        L24:
            r3 = 0
            com.tkay.core.common.k.c.a(r0, r3)
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r3 = r8.a
            com.tkay.splashad.api.TYSplashSkipInfo r3 = r3.getSplashSkipInfo()
            r4 = 0
            if (r3 == 0) goto L4d
            boolean r5 = r3.canUseCustomSkipView()
            if (r5 == 0) goto L4d
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r5 = r8.a
            r5.startSplashCustomSkipViewClickEye()
            java.util.Timer r5 = r8.d
            if (r5 == 0) goto L45
            r5.cancel()
            r8.d = r4
        L45:
            r3.destroy()
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r3 = r8.a
            r3.setSplashSkipInfo(r4)
        L4d:
            java.lang.String r3 = com.tkay.core.common.b.f.i.e
            java.lang.String r5 = com.tkay.core.common.b.f.i.l
            java.lang.String r6 = ""
            com.tkay.core.common.l.g.a(r0, r3, r5, r6)
            java.lang.String r3 = r0.W()
            boolean r5 = android.text.TextUtils.isEmpty(r3)
            if (r5 != 0) goto L8c
            com.tkay.core.common.v r5 = com.tkay.core.common.v.a()
            com.tkay.core.common.f.c r5 = r5.c(r3)
            if (r5 == 0) goto L8c
            com.tkay.core.common.v r6 = com.tkay.core.common.v.a()
            r6.d(r3)
            com.tkay.core.common.b.m r6 = com.tkay.core.common.b.m.a()
            android.content.Context r6 = r6.f()
            com.tkay.splashad.a.c r6 = com.tkay.splashad.a.c.a(r6, r3)
            com.tkay.core.common.v r7 = com.tkay.core.common.v.a()
            java.lang.String r5 = r5.a()
            java.lang.String r3 = r7.b(r3, r5)
            r6.d(r3)
        L8c:
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r3 = r8.a
            boolean r5 = r3 instanceof com.tkay.splashad.unitgroup.api.CustomSplashAdapter
            if (r5 == 0) goto L96
            com.tkay.splashad.api.ITYSplashEyeAd r4 = r3.getSplashEyeAd()
        L96:
            com.tkay.splashad.a.a r3 = r8.b
            if (r3 == 0) goto Lae
            boolean r5 = r8.e
            if (r5 != 0) goto Lae
            r8.e = r2
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r2 = r8.a
            com.tkay.core.common.b.i r0 = com.tkay.core.common.b.i.a(r0, r2)
            com.tkay.splashad.api.TYSplashAdExtraInfo r2 = new com.tkay.splashad.api.TYSplashAdExtraInfo
            r2.<init>(r1, r4)
            r3.onCallbackAdDismiss(r0, r2)
        Lae:
            if (r4 != 0) goto Lbe
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r0 = r8.a
            if (r0 == 0) goto Lb7
            r0.cleanImpressionListener()
        Lb7:
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r0 = r8.a
            if (r0 == 0) goto Lbe
            r0.destory()
        Lbe:
            return
    }

    @Override
    public final void onSplashAdShow() {
            r19 = this;
            r9 = r19
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r0 = r9.a
            com.tkay.core.common.b.i r10 = com.tkay.core.common.b.i.a(r0)
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r0 = r9.a
            if (r0 == 0) goto L9d
            com.tkay.core.common.f.d r11 = r0.getTrackingInfo()
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.k.a r0 = com.tkay.core.common.k.a.a(r0)
            r1 = 4
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r2 = r9.a
            com.tkay.core.common.f.aj r2 = r2.getUnitGroupInfo()
            r0.a(r1, r11, r2)
            java.lang.String r0 = com.tkay.core.common.b.f.i.c
            java.lang.String r1 = com.tkay.core.common.b.f.i.l
            java.lang.String r2 = ""
            com.tkay.core.common.l.g.a(r11, r0, r1, r2)
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r0 = r9.a
            com.tkay.splashad.api.TYSplashSkipInfo r0 = r0.getSplashSkipInfo()
            if (r0 == 0) goto L90
            boolean r1 = r0.canUseCustomSkipView()
            if (r1 == 0) goto L90
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r1 = r9.a
            boolean r1 = r1.isSupportCustomSkipView()
            if (r1 == 0) goto L90
            java.util.Timer r1 = r9.d
            if (r1 != 0) goto L90
            long r12 = r0.getCallbackInterval()
            long r14 = r0.getCountDownDuration()
            android.view.ViewGroup r2 = r0.getContainer()
            com.tkay.core.common.l.a.f$b r3 = new com.tkay.core.common.l.a.f$b
            r3.<init>()
            com.tkay.splashad.api.TYSplashSkipAdListener r16 = r0.getTYSplashSkipAdListener()
            r9.c = r14
            java.util.Timer r7 = new java.util.Timer
            r7.<init>()
            r9.d = r7
            com.tkay.splashad.a.f$1 r17 = new com.tkay.splashad.a.f$1
            r0 = r17
            r1 = r19
            r4 = r16
            r5 = r14
            r18 = r7
            r7 = r12
            r0.<init>(r1, r2, r3, r4, r5, r7)
            r2 = r18
            r3 = r17
            r4 = r12
            r6 = r12
            r2.schedule(r3, r4, r6)
            com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()
            com.tkay.splashad.a.f$2 r8 = new com.tkay.splashad.a.f$2
            r0 = r8
            r2 = r16
            r3 = r14
            r5 = r12
            r0.<init>(r1, r2, r3, r5)
            r7.a(r8)
        L90:
            if (r11 == 0) goto L9d
            java.lang.String r0 = r11.W()
            com.tkay.core.common.v r1 = com.tkay.core.common.v.a()
            r1.a(r0, r10)
        L9d:
            com.tkay.splashad.a.a r0 = r9.b
            if (r0 == 0) goto La4
            r0.onAdShow(r10)
        La4:
            return
    }

    @Override
    public final void onSplashAdShowFail(com.tkay.core.api.AdError r4) {
            r3 = this;
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r0 = r3.a
            if (r0 == 0) goto L21
            com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r1 = r3.a
            java.util.Map r1 = r1.getNetworkInfoMap()
            com.tkay.core.common.k.c.a(r0, r4, r1)
            if (r4 == 0) goto L18
            java.lang.String r4 = r4.getFullErrorInfo()
            goto L1a
        L18:
            java.lang.String r4 = ""
        L1a:
            java.lang.String r1 = com.tkay.core.common.b.f.i.k
            java.lang.String r2 = com.tkay.core.common.b.f.i.m
            com.tkay.core.common.l.g.a(r0, r1, r2, r4)
        L21:
            return
    }
}

package com.tkay.interstitial.a;

public final class d implements com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener {
    com.tkay.interstitial.api.TYInterstitialListener a;
    com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter b;
    long c;
    long d;
    int e;
    boolean f;

    public d(com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r2, com.tkay.interstitial.api.TYInterstitialListener r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.e = r0
            r1.a = r3
            r1.b = r2
            r2 = 1
            r1.f = r2
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
            com.tkay.interstitial.a.a r1 = com.tkay.interstitial.a.a.a(r1, r3)
            com.tkay.core.common.v r2 = com.tkay.core.common.v.a()
            java.lang.String r0 = r0.a()
            java.lang.String r3 = r2.b(r3, r0)
            r1.d(r3)
        L33:
            return
    }

    @Override
    public final void onDeeplinkCallback(boolean r4) {
            r3 = this;
            com.tkay.interstitial.api.TYInterstitialListener r0 = r3.a
            if (r0 == 0) goto L13
            boolean r1 = r0 instanceof com.tkay.interstitial.api.TYInterstitialExListener
            if (r1 == 0) goto L13
            com.tkay.interstitial.api.TYInterstitialExListener r0 = (com.tkay.interstitial.api.TYInterstitialExListener) r0
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r1 = r3.b
            com.tkay.core.common.b.i r1 = com.tkay.core.common.b.i.a(r1)
            r0.onDeeplinkCallback(r1, r4)
        L13:
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r0 = r3.b
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
            com.tkay.interstitial.api.TYInterstitialListener r0 = r2.a
            if (r0 == 0) goto L13
            boolean r1 = r0 instanceof com.tkay.interstitial.api.TYInterstitialExListener
            if (r1 == 0) goto L13
            com.tkay.interstitial.api.TYInterstitialExListener r0 = (com.tkay.interstitial.api.TYInterstitialExListener) r0
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r1 = r2.b
            com.tkay.core.common.b.i r1 = com.tkay.core.common.b.i.a(r1)
            r0.onDownloadConfirm(r3, r1, r4)
        L13:
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r3 = r2.b
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
    public final void onInterstitialAdClicked() {
            r4 = this;
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r0 = r4.b
            if (r0 == 0) goto L21
            com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
            java.lang.String r1 = com.tkay.core.common.b.f.i.d
            java.lang.String r2 = com.tkay.core.common.b.f.i.l
            java.lang.String r3 = ""
            com.tkay.core.common.l.g.a(r0, r1, r2, r3)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            com.tkay.core.common.k.a r1 = com.tkay.core.common.k.a.a(r1)
            r2 = 6
            r1.a(r2, r0)
        L21:
            com.tkay.interstitial.api.TYInterstitialListener r0 = r4.a
            if (r0 == 0) goto L2e
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r1 = r4.b
            com.tkay.core.common.b.i r1 = com.tkay.core.common.b.i.a(r1)
            r0.onInterstitialAdClicked(r1)
        L2e:
            return
    }

    @Override
    public final void onInterstitialAdClose() {
            r11 = this;
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r0 = r11.b
            if (r0 == 0) goto L5d
            com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
            int r1 = r11.e
            if (r1 != 0) goto L12
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r1 = r11.b
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
            long r3 = r11.c
            r1 = 0
            int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r1 == 0) goto L39
            r2 = 0
            long r5 = java.lang.System.currentTimeMillis()
            long r7 = android.os.SystemClock.elapsedRealtime()
            long r9 = r11.d
            long r7 = r7 - r9
            r1 = r0
            com.tkay.core.common.k.c.a(r1, r2, r3, r5, r7)
        L39:
            r1 = 0
            com.tkay.core.common.k.c.a(r0, r1)
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r1 = r11.b     // Catch: java.lang.Throwable -> L47
            r1.clearImpressionListener()     // Catch: java.lang.Throwable -> L47
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r1 = r11.b     // Catch: java.lang.Throwable -> L47
            r1.destory()     // Catch: java.lang.Throwable -> L47
        L47:
            com.tkay.interstitial.api.TYInterstitialListener r1 = r11.a
            if (r1 == 0) goto L54
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r2 = r11.b
            com.tkay.core.common.b.i r2 = com.tkay.core.common.b.i.a(r0, r2)
            r1.onInterstitialAdClose(r2)
        L54:
            if (r0 == 0) goto L5d
            java.lang.String r0 = r0.W()
            a(r0)
        L5d:
            return
    }

    @Override
    public final void onInterstitialAdShow() {
            r11 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r11.c = r0
            long r0 = android.os.SystemClock.elapsedRealtime()
            r11.d = r0
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r0 = r11.b
            com.tkay.core.common.b.i r0 = com.tkay.core.common.b.i.a(r0)
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r1 = r11.b
            if (r1 == 0) goto L7d
            com.tkay.core.common.f.d r1 = r1.getTrackingInfo()
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r2 = r11.b
            java.lang.String r2 = r2.getILRD()
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L29
            r1.a(r2)
        L29:
            java.lang.String r2 = com.tkay.core.common.b.f.i.c
            java.lang.String r3 = com.tkay.core.common.b.f.i.l
            java.lang.String r4 = ""
            com.tkay.core.common.l.g.a(r1, r2, r3, r4)
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            com.tkay.core.common.k.a r2 = com.tkay.core.common.k.a.a(r2)
            r3 = 4
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r5 = r11.b
            com.tkay.core.common.f.aj r5 = r5.getUnitGroupInfo()
            r2.a(r3, r1, r5)
            if (r1 == 0) goto L55
            java.lang.String r4 = r1.W()
            com.tkay.core.common.v r1 = com.tkay.core.common.v.a()
            r1.a(r4, r0)
        L55:
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 != 0) goto L7d
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.D()
            com.tkay.interstitial.a.a r5 = com.tkay.interstitial.a.a.a(r1, r4)
            r1 = 0
            boolean r1 = r5.a(r1)
            if (r1 == 0) goto L7d
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r6 = r1.D()
            r7 = 6
            r8 = 0
            r9 = 0
            r10 = 0
            r5.a(r6, r7, r8, r9, r10)
        L7d:
            com.tkay.interstitial.api.TYInterstitialListener r1 = r11.a
            if (r1 == 0) goto L84
            r1.onInterstitialAdShow(r0)
        L84:
            return
    }

    @Override
    public final void onInterstitialAdVideoEnd() {
            r4 = this;
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r0 = r4.b
            if (r0 == 0) goto L3a
            int r0 = r0.getDismissType()
            if (r0 != 0) goto Ld
            r0 = 3
            r4.e = r0
        Ld:
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r0 = r4.b
            com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            com.tkay.core.common.k.a r1 = com.tkay.core.common.k.a.a(r1)
            r2 = 9
            r1.a(r2, r0)
            com.tkay.interstitial.api.TYInterstitialListener r1 = r4.a
            if (r1 == 0) goto L31
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r2 = r4.b
            com.tkay.core.common.b.i r2 = com.tkay.core.common.b.i.a(r2)
            r1.onInterstitialAdVideoEnd(r2)
        L31:
            java.lang.String r1 = com.tkay.core.common.b.f.i.f
            java.lang.String r2 = com.tkay.core.common.b.f.i.l
            java.lang.String r3 = ""
            com.tkay.core.common.l.g.a(r0, r1, r2, r3)
        L3a:
            return
    }

    @Override
    public final void onInterstitialAdVideoError(java.lang.String r10, java.lang.String r11) {
            r9 = this;
            r0 = 99
            r9.e = r0
            java.lang.String r0 = "4006"
            com.tkay.core.api.AdError r10 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r10, r11)
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r0 = r9.b
            if (r0 == 0) goto L65
            com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
            int r1 = r0.H()
            r2 = 66
            if (r1 != r2) goto L1d
            r1 = 0
            r9.f = r1
        L1d:
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r1 = r9.b
            java.util.Map r1 = r1.getNetworkInfoMap()
            com.tkay.core.common.k.c.a(r0, r10, r1)
            if (r0 == 0) goto L34
            java.lang.String r1 = r0.W()
            java.lang.String r2 = r0.W()
            a(r2)
            goto L36
        L34:
            java.lang.String r1 = ""
        L36:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L5e
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.D()
            com.tkay.interstitial.a.a r3 = com.tkay.interstitial.a.a.a(r2, r1)
            r1 = 0
            boolean r1 = r3.a(r1)
            if (r1 == 0) goto L5e
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r4 = r1.D()
            r5 = 7
            r6 = 0
            r7 = 0
            r8 = 0
            r3.a(r4, r5, r6, r7, r8)
        L5e:
            java.lang.String r1 = com.tkay.core.common.b.f.i.g
            java.lang.String r2 = com.tkay.core.common.b.f.i.m
            com.tkay.core.common.l.g.a(r0, r1, r2, r11)
        L65:
            com.tkay.interstitial.api.TYInterstitialListener r11 = r9.a
            if (r11 == 0) goto L6c
            r11.onInterstitialAdVideoError(r10)
        L6c:
            return
    }

    @Override
    public final void onInterstitialAdVideoStart() {
            r3 = this;
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r0 = r3.b
            if (r0 == 0) goto L2a
            com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
            boolean r1 = r3.f
            if (r1 == 0) goto L2a
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            com.tkay.core.common.k.a r1 = com.tkay.core.common.k.a.a(r1)
            r2 = 8
            r1.a(r2, r0)
            com.tkay.interstitial.api.TYInterstitialListener r0 = r3.a
            if (r0 == 0) goto L2a
            com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter r1 = r3.b
            com.tkay.core.common.b.i r1 = com.tkay.core.common.b.i.a(r1)
            r0.onInterstitialAdVideoStart(r1)
        L2a:
            return
    }
}

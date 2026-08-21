package com.tkay.splashad.a;

public final class d {
    boolean a;
    com.tkay.splashad.a.b b;
    long c;
    com.tkay.core.common.f.a d;
    java.lang.String e;
    java.lang.String f;
    java.lang.String g;
    int h;
    java.lang.String i;
    java.lang.String j;
    int k;
    java.util.Map<java.lang.String, java.lang.Object> l;
    private android.content.Context m;
    private boolean n;

    final class 1 implements java.lang.Runnable {
        final com.tkay.splashad.a.d a;

        1(com.tkay.splashad.a.d r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.tkay.splashad.a.d r0 = r2.a
                com.tkay.splashad.a.b r0 = r0.b
                if (r0 == 0) goto Ld
                com.tkay.splashad.a.d r0 = r2.a
                com.tkay.splashad.a.b r0 = r0.b
                r0.onAdLoaded()
            Ld:
                com.tkay.splashad.a.d r0 = r2.a
                r1 = 0
                r0.b = r1
                return
        }
    }

    final class 2 implements java.lang.Runnable {
        final com.tkay.splashad.unitgroup.api.CustomSplashAdapter a;
        final com.tkay.core.api.AdError b;
        final com.tkay.splashad.a.d c;

        2(com.tkay.splashad.a.d r1, com.tkay.splashad.unitgroup.api.CustomSplashAdapter r2, com.tkay.core.api.AdError r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.tkay.splashad.unitgroup.api.CustomSplashAdapter r0 = r2.a
                if (r0 == 0) goto L7
                r0.destory()
            L7:
                com.tkay.splashad.a.d r0 = r2.c
                com.tkay.splashad.a.b r0 = r0.b
                if (r0 == 0) goto L16
                com.tkay.splashad.a.d r0 = r2.c
                com.tkay.splashad.a.b r0 = r0.b
                com.tkay.core.api.AdError r1 = r2.b
                r0.onAdLoadFail(r1)
            L16:
                com.tkay.splashad.a.d r0 = r2.c
                r1 = 0
                r0.b = r1
                return
        }
    }

    private class a implements com.tkay.core.api.TYCustomLoadListener {
        com.tkay.splashad.unitgroup.api.CustomSplashAdapter a;
        final com.tkay.splashad.a.d b;

        public a(com.tkay.splashad.a.d r1, com.tkay.splashad.unitgroup.api.CustomSplashAdapter r2) {
                r0 = this;
                r0.b = r1
                r0.<init>()
                r0.a = r2
                return
        }

        @Override
        public final void onAdCacheLoaded(com.tkay.core.api.BaseAd... r3) {
                r2 = this;
                com.tkay.splashad.a.d r0 = r2.b
                com.tkay.splashad.unitgroup.api.CustomSplashAdapter r1 = r2.a
                r0.a(r1, r3)
                return
        }

        @Override
        public final void onAdDataLoaded() {
                r0 = this;
                return
        }

        @Override
        public final void onAdLoadError(java.lang.String r4, java.lang.String r5) {
                r3 = this;
                com.tkay.splashad.a.d r0 = r3.b
                com.tkay.splashad.unitgroup.api.CustomSplashAdapter r1 = r3.a
                java.lang.String r2 = "4001"
                com.tkay.core.api.AdError r4 = com.tkay.core.api.ErrorCode.getErrorCode(r2, r4, r5)
                r0.a(r1, r4)
                return
        }
    }

    public d(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.k = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.m = r2
            return
    }

    private void a(com.tkay.core.api.TYMediationRequestInfo r3) {
            r2 = this;
            java.lang.String r0 = r3.getAdSourceId()
            r2.g = r0
            int r0 = r3.getNetworkFirmId()
            r2.h = r0
            java.lang.String r0 = r3.getClassName()
            r2.i = r0
            java.util.Map r3 = r3.getRequestParamMap()
            r2.l = r3
            r0 = 4
            r2.k = r0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r1 = "ad_type"
            r3.put(r1, r0)
            return
    }

    private void a(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "ad_type"
            java.lang.String r1 = "0"
            r3.g = r1
            java.util.HashMap r1 = new java.util.HashMap
            r2 = 1
            r1.<init>(r2)
            r3.l = r1
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L4c
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r4 = "unit_id"
            java.lang.String r4 = r1.optString(r4)     // Catch: java.lang.Throwable -> L4c
            r3.g = r4     // Catch: java.lang.Throwable -> L4c
            java.lang.String r4 = "nw_firm_id"
            int r4 = r1.optInt(r4)     // Catch: java.lang.Throwable -> L4c
            r3.h = r4     // Catch: java.lang.Throwable -> L4c
            java.lang.String r4 = "adapter_class"
            java.lang.String r4 = r1.optString(r4)     // Catch: java.lang.Throwable -> L4c
            r3.i = r4     // Catch: java.lang.Throwable -> L4c
            java.lang.String r4 = "content"
            java.lang.String r4 = r1.optString(r4)     // Catch: java.lang.Throwable -> L4c
            r3.j = r4     // Catch: java.lang.Throwable -> L4c
            r4 = -1
            int r4 = r1.optInt(r0, r4)     // Catch: java.lang.Throwable -> L4c
            r3.k = r4     // Catch: java.lang.Throwable -> L4c
            java.lang.String r4 = r3.j     // Catch: java.lang.Throwable -> L4c
            java.util.Map r4 = com.tkay.core.common.l.h.c(r4)     // Catch: java.lang.Throwable -> L4c
            r3.l = r4     // Catch: java.lang.Throwable -> L4c
            int r1 = r3.k     // Catch: java.lang.Throwable -> L4c
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L4c
            r4.put(r0, r1)     // Catch: java.lang.Throwable -> L4c
            return
        L4c:
            r4 = move-exception
            r4.printStackTrace()
            return
    }

    private void b() {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.splashad.a.d$1 r1 = new com.tkay.splashad.a.d$1
            r1.<init>(r2)
            r0.a(r1)
            return
    }

    private void b(com.tkay.splashad.unitgroup.api.CustomSplashAdapter r3, com.tkay.core.api.AdError r4) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.splashad.a.d$2 r1 = new com.tkay.splashad.a.d$2
            r1.<init>(r2, r3, r4)
            r0.a(r1)
            return
    }

    private void c() {
            r1 = this;
            r0 = 0
            r1.b = r0
            return
    }

    private void d() {
            r1 = this;
            r0 = 0
            r1.d = r0
            return
    }

    private void e() {
            r4 = this;
            com.tkay.core.common.f.d r0 = new com.tkay.core.common.f.d
            r0.<init>()
            java.lang.String r1 = r4.f
            r0.x(r1)
            java.lang.String r1 = r4.e
            r0.y(r1)
            java.lang.String r1 = "4"
            r0.z(r1)
            java.lang.String r1 = "0"
            r0.w(r1)
            r1 = 1
            r0.a(r1)
            java.lang.String r1 = "2001"
            java.lang.String r2 = ""
            java.lang.String r3 = "Splash FetchAd Timeout."
            com.tkay.core.api.AdError r1 = com.tkay.core.api.ErrorCode.getErrorCode(r1, r2, r3)
            com.tkay.core.common.k.c.a(r0, r1)
            return
    }

    private com.tkay.core.common.f.a f() {
            r1 = this;
            com.tkay.core.common.f.a r0 = r1.d
            if (r0 == 0) goto Ld
            int r0 = r0.d()
            if (r0 > 0) goto Ld
            com.tkay.core.common.f.a r0 = r1.d
            return r0
        Ld:
            r0 = 0
            return r0
    }

    private com.tkay.core.common.f.a g() {
            r1 = this;
            com.tkay.core.common.f.a r0 = r1.d
            return r0
    }

    public final void a(android.content.Context r5, java.lang.String r6, java.lang.String r7, com.tkay.core.api.TYMediationRequestInfo r8, java.lang.String r9, com.tkay.splashad.a.b r10, int r11) {
            r4 = this;
            java.lang.String r0 = ""
            r4.b = r10
            r4.e = r7
            r4.f = r6
            boolean r10 = android.text.TextUtils.isEmpty(r9)
            java.lang.String r1 = "ad_type"
            java.lang.String r2 = "0"
            r3 = 1
            if (r10 != 0) goto L5f
            r4.g = r2
            java.util.HashMap r8 = new java.util.HashMap
            r8.<init>(r3)
            r4.l = r8
            org.json.JSONObject r8 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L5a
            r8.<init>(r9)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r10 = "unit_id"
            java.lang.String r10 = r8.optString(r10)     // Catch: java.lang.Throwable -> L5a
            r4.g = r10     // Catch: java.lang.Throwable -> L5a
            java.lang.String r10 = "nw_firm_id"
            int r10 = r8.optInt(r10)     // Catch: java.lang.Throwable -> L5a
            r4.h = r10     // Catch: java.lang.Throwable -> L5a
            java.lang.String r10 = "adapter_class"
            java.lang.String r10 = r8.optString(r10)     // Catch: java.lang.Throwable -> L5a
            r4.i = r10     // Catch: java.lang.Throwable -> L5a
            java.lang.String r10 = "content"
            java.lang.String r10 = r8.optString(r10)     // Catch: java.lang.Throwable -> L5a
            r4.j = r10     // Catch: java.lang.Throwable -> L5a
            r10 = -1
            int r8 = r8.optInt(r1, r10)     // Catch: java.lang.Throwable -> L5a
            r4.k = r8     // Catch: java.lang.Throwable -> L5a
            java.lang.String r8 = r4.j     // Catch: java.lang.Throwable -> L5a
            java.util.Map r8 = com.tkay.core.common.l.h.c(r8)     // Catch: java.lang.Throwable -> L5a
            r4.l = r8     // Catch: java.lang.Throwable -> L5a
            int r10 = r4.k     // Catch: java.lang.Throwable -> L5a
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Throwable -> L5a
            r8.put(r1, r10)     // Catch: java.lang.Throwable -> L5a
            goto L83
        L5a:
            r8 = move-exception
            r8.printStackTrace()
            goto L83
        L5f:
            if (r8 == 0) goto L83
            java.lang.String r10 = r8.getAdSourceId()
            r4.g = r10
            int r10 = r8.getNetworkFirmId()
            r4.h = r10
            java.lang.String r10 = r8.getClassName()
            r4.i = r10
            java.util.Map r8 = r8.getRequestParamMap()
            r4.l = r8
            r10 = 4
            r4.k = r10
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)
            r8.put(r1, r10)
        L83:
            com.tkay.core.common.b.m.a()
            java.lang.String r8 = r4.g
            com.tkay.core.common.b.m.n(r8)
            com.tkay.core.common.f.d r8 = new com.tkay.core.common.f.d
            r8.<init>()
            r8.x(r6)
            r8.y(r7)
            int r7 = r4.h
            r8.u(r7)
            java.lang.String r7 = "4"
            r8.z(r7)
            java.lang.String r7 = r4.g
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 == 0) goto Laa
            r7 = r2
            goto Lac
        Laa:
            java.lang.String r7 = r4.g
        Lac:
            r8.l(r7)
            r8.w(r2)
            r8.a(r3)
            java.lang.String r7 = r4.j
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto Lc2
            java.lang.String r7 = r4.j
            r8.n(r7)
        Lc2:
            boolean r7 = android.text.TextUtils.isEmpty(r9)
            if (r7 != 0) goto Lcd
            r7 = 8
            r8.c(r7)
        Lcd:
            int r7 = r4.k
            r8.w(r7)
            java.lang.String r7 = r4.i     // Catch: java.lang.Throwable -> L139
            com.tkay.core.api.TYBaseAdAdapter r7 = com.tkay.core.common.l.i.a(r7)     // Catch: java.lang.Throwable -> L139
            boolean r9 = r7 instanceof com.tkay.splashad.unitgroup.api.CustomSplashAdapter     // Catch: java.lang.Throwable -> L139
            if (r9 == 0) goto L131
            r9 = r7
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r9 = (com.tkay.splashad.unitgroup.api.CustomSplashAdapter) r9     // Catch: java.lang.Throwable -> L139
            r9.setFetchAdTimeout(r11)     // Catch: java.lang.Throwable -> L139
            r4.n = r3     // Catch: java.lang.Throwable -> L139
            r9 = 0
            r4.a = r9     // Catch: java.lang.Throwable -> L139
            long r9 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L139
            r4.c = r9     // Catch: java.lang.Throwable -> L139
            java.lang.String r9 = r7.getNetworkName()     // Catch: java.lang.Throwable -> Lfd
            r8.v(r9)     // Catch: java.lang.Throwable -> Lfd
            java.lang.String r9 = r7.getNetworkSDKVersion()     // Catch: java.lang.Throwable -> Lfd
            r8.u = r9     // Catch: java.lang.Throwable -> Lfd
            r9 = 2
            r8.q = r9     // Catch: java.lang.Throwable -> Lfd
        Lfd:
            r7.setTrackingInfo(r8)     // Catch: java.lang.Throwable -> L139
            java.lang.String r9 = com.tkay.core.common.b.f.i.a     // Catch: java.lang.Throwable -> L139
            java.lang.String r10 = com.tkay.core.common.b.f.i.n     // Catch: java.lang.Throwable -> L139
            com.tkay.core.common.l.g.a(r8, r9, r10, r0)     // Catch: java.lang.Throwable -> L139
            android.content.Context r9 = r4.m     // Catch: java.lang.Throwable -> L139
            com.tkay.core.common.k.a r9 = com.tkay.core.common.k.a.a(r9)     // Catch: java.lang.Throwable -> L139
            r10 = 10
            r9.a(r10, r8)     // Catch: java.lang.Throwable -> L139
            android.content.Context r9 = r4.m     // Catch: java.lang.Throwable -> L139
            com.tkay.core.common.k.a r9 = com.tkay.core.common.k.a.a(r9)     // Catch: java.lang.Throwable -> L139
            r9.a(r3, r8)     // Catch: java.lang.Throwable -> L139
            java.util.Map<java.lang.String, java.lang.Object> r8 = r4.l     // Catch: java.lang.Throwable -> L139
            com.tkay.core.common.v r9 = com.tkay.core.common.v.a()     // Catch: java.lang.Throwable -> L139
            java.util.Map r6 = r9.b(r6)     // Catch: java.lang.Throwable -> L139
            com.tkay.splashad.a.d$a r9 = new com.tkay.splashad.a.d$a     // Catch: java.lang.Throwable -> L139
            r10 = r7
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r10 = (com.tkay.splashad.unitgroup.api.CustomSplashAdapter) r10     // Catch: java.lang.Throwable -> L139
            r9.<init>(r4, r10)     // Catch: java.lang.Throwable -> L139
            r7.internalLoad(r5, r8, r6, r9)     // Catch: java.lang.Throwable -> L139
            return
        L131:
            java.lang.Exception r5 = new java.lang.Exception     // Catch: java.lang.Throwable -> L139
            java.lang.String r6 = "The class isn't instanceof CustomSplashAdapter"
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L139
            throw r5     // Catch: java.lang.Throwable -> L139
        L139:
            r5 = move-exception
            com.tkay.splashad.a.b r6 = r4.b
            if (r6 == 0) goto L14d
            java.lang.String r5 = r5.getMessage()
            java.lang.String r6 = "2002"
            com.tkay.core.api.AdError r5 = com.tkay.core.api.ErrorCode.getErrorCode(r6, r0, r5)
            com.tkay.splashad.a.b r6 = r4.b
            r6.onAdLoadFail(r5)
        L14d:
            r5 = 0
            r4.b = r5
            return
    }

    public final void a(com.tkay.splashad.unitgroup.api.CustomSplashAdapter r5, com.tkay.core.api.AdError r6) {
            r4 = this;
            boolean r0 = r4.a
            if (r0 == 0) goto L5
            return
        L5:
            if (r5 == 0) goto L16
            com.tkay.core.common.f.d r0 = r5.getTrackingInfo()
            java.lang.String r1 = com.tkay.core.common.b.f.i.b
            java.lang.String r2 = com.tkay.core.common.b.f.i.m
            java.lang.String r3 = r6.printStackTrace()
            com.tkay.core.common.l.g.a(r0, r1, r2, r3)
        L16:
            r0 = 1
            r4.a = r0
            r0 = 0
            r4.n = r0
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.splashad.a.d$2 r1 = new com.tkay.splashad.a.d$2
            r1.<init>(r4, r5, r6)
            r0.a(r1)
            return
    }

    public final void a(com.tkay.splashad.unitgroup.api.CustomSplashAdapter r7, com.tkay.core.api.BaseAd... r8) {
            r6 = this;
            boolean r0 = r6.a
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 0
            if (r7 == 0) goto L8a
            com.tkay.core.common.f.d r1 = r7.getTrackingInfo()
            long r2 = android.os.SystemClock.elapsedRealtime()
            long r4 = r6.c
            long r2 = r2 - r4
            r1.d(r2)
            com.tkay.core.common.f.d r1 = r7.getTrackingInfo()
            java.lang.String r2 = r7.getNetworkPlacementId()
            r1.g(r2)
            com.tkay.core.common.f.d r1 = r7.getTrackingInfo()
            java.lang.String r2 = com.tkay.core.common.b.f.i.b
            java.lang.String r3 = com.tkay.core.common.b.f.i.l
            java.lang.String r4 = ""
            com.tkay.core.common.l.g.a(r1, r2, r3, r4)
            android.content.Context r1 = r6.m
            com.tkay.core.common.k.a r1 = com.tkay.core.common.k.a.a(r1)
            r2 = 12
            com.tkay.core.common.f.d r3 = r7.getTrackingInfo()
            r1.a(r2, r3)
            android.content.Context r1 = r6.m
            com.tkay.core.common.k.a r1 = com.tkay.core.common.k.a.a(r1)
            r2 = 2
            com.tkay.core.common.f.d r3 = r7.getTrackingInfo()
            r1.a(r2, r3)
            com.tkay.core.common.f.a r1 = new com.tkay.core.common.f.a
            r1.<init>()
            r1.b(r0)
            r1.a(r7)
            long r2 = java.lang.System.currentTimeMillis()
            r1.c(r2)
            r2 = 600000(0x927c0, double:2.964394E-318)
            r1.b(r2)
            com.tkay.core.common.f.d r4 = r7.getTrackingInfo()
            java.lang.String r4 = r4.X()
            r1.a(r4)
            r1.a(r2)
            if (r8 == 0) goto L88
            int r2 = r8.length
            if (r2 <= 0) goto L88
            r2 = r8[r0]
            com.tkay.core.common.f.d r7 = r7.getTrackingInfo()
            com.tkay.core.common.f.d r7 = r7.N()
            r2.setTrackingInfo(r7)
            r7 = r8[r0]
            r1.a(r7)
        L88:
            r6.d = r1
        L8a:
            r7 = 1
            r6.a = r7
            r6.n = r0
            com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()
            com.tkay.splashad.a.d$1 r8 = new com.tkay.splashad.a.d$1
            r8.<init>(r6)
            r7.a(r8)
            return
    }

    protected final boolean a() {
            r1 = this;
            boolean r0 = r1.n
            return r0
    }
}

package com.tkay.splashad.a;

public class c extends com.tkay.core.common.f<com.tkay.splashad.a.g> {
    com.tkay.splashad.a.d a;


    final class 2 implements com.tkay.core.common.b.k {
        final boolean[] a;
        final com.tkay.splashad.a.f b;
        final com.tkay.splashad.a.c c;

        2(com.tkay.splashad.a.c r1, boolean[] r2, com.tkay.splashad.a.f r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void onAdClicked(android.view.View r1) {
                r0 = this;
                com.tkay.splashad.a.f r1 = r0.b
                r1.onSplashAdClicked()
                return
        }

        @Override
        public final void onAdDislikeButtonClick() {
                r0 = this;
                return
        }

        @Override
        public final void onAdImpressed() {
                r3 = this;
                boolean[] r0 = r3.a
                r1 = 0
                boolean r2 = r0[r1]
                if (r2 == 0) goto L8
                return
            L8:
                r2 = 1
                r0[r1] = r2
                com.tkay.splashad.a.f r0 = r3.b
                r0.onSplashAdShow()
                return
        }

        @Override
        public final void onAdVideoEnd() {
                r0 = this;
                return
        }

        @Override
        public final void onAdVideoProgress(int r1) {
                r0 = this;
                return
        }

        @Override
        public final void onAdVideoStart() {
                r0 = this;
                return
        }

        @Override
        public final void onDeeplinkCallback(boolean r2) {
                r1 = this;
                com.tkay.splashad.a.f r0 = r1.b
                r0.onDeeplinkCallback(r2)
                return
        }

        @Override
        public final void onDownloadConfirmCallback(android.content.Context r1, android.view.View r2, com.tkay.core.api.TYNetworkConfirmInfo r3) {
                r0 = this;
                com.tkay.splashad.a.f r2 = r0.b
                r2.onDownloadConfirm(r1, r3)
                return
        }
    }

    final class 3 implements com.tkay.basead.e.a {
        final com.tkay.splashad.a.f a;
        final com.tkay.splashad.a.c b;

        3(com.tkay.splashad.a.c r1, com.tkay.splashad.a.f r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void onAdClick(int r1) {
                r0 = this;
                return
        }

        @Override
        public final void onAdClosed() {
                r1 = this;
                com.tkay.splashad.a.f r0 = r1.a
                r0.onSplashAdDismiss()
                return
        }

        @Override
        public final void onAdShow() {
                r0 = this;
                return
        }

        @Override
        public final void onDeeplinkCallback(boolean r1) {
                r0 = this;
                return
        }

        @Override
        public final void onShowFailed(com.tkay.basead.c.e r1) {
                r0 = this;
                return
        }
    }

    private c(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    private static com.tkay.core.common.h a(com.tkay.splashad.a.g r2) {
            com.tkay.splashad.a.e r0 = new com.tkay.splashad.a.e
            android.content.Context r1 = r2.a()
            r0.<init>(r1)
            int r1 = r2.h
            r0.T = r1
            int r2 = r2.d
            r0.a(r2)
            return r0
    }

    public static com.tkay.splashad.a.c a(android.content.Context r3, java.lang.String r4) {
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.lang.String r1 = "4"
            com.tkay.core.common.f r0 = r0.a(r4, r1)
            if (r0 == 0) goto L10
            boolean r2 = r0 instanceof com.tkay.splashad.a.c
            if (r2 != 0) goto L1c
        L10:
            com.tkay.splashad.a.c r0 = new com.tkay.splashad.a.c
            r0.<init>(r3, r4)
            com.tkay.core.common.v r3 = com.tkay.core.common.v.a()
            r3.a(r4, r1, r0)
        L1c:
            com.tkay.splashad.a.c r0 = (com.tkay.splashad.a.c) r0
            return r0
    }

    static java.lang.String a(com.tkay.splashad.a.c r0) {
            java.lang.String r0 = r0.g
            return r0
    }

    private void a(android.app.Activity r9, android.view.ViewGroup r10, com.tkay.splashad.a.f r11, boolean r12, com.tkay.core.api.BaseAd r13, com.tkay.core.common.f.d r14) {
            r8 = this;
            if (r13 == 0) goto L5d
            boolean r0 = r13 instanceof com.tkay.core.common.f.a.e
            if (r0 == 0) goto L5d
            r0 = 1
            boolean[] r0 = new boolean[r0]
            r1 = 0
            r0[r1] = r1
            com.tkay.core.common.f.a.b r5 = new com.tkay.core.common.f.a.b
            r1 = r13
            com.tkay.core.common.f.a.e r1 = (com.tkay.core.common.f.a.e) r1
            r5.<init>(r1)
            com.tkay.core.common.f.a.c r4 = new com.tkay.core.common.f.a.c
            r1 = r13
            com.tkay.core.common.f.a.a r1 = (com.tkay.core.common.f.a.a) r1
            java.lang.String r2 = "4"
            int r2 = java.lang.Integer.parseInt(r2)
            r4.<init>(r1, r14, r2)
            java.lang.String r7 = a(r4)
            com.tkay.splashad.a.c$2 r14 = new com.tkay.splashad.a.c$2
            r14.<init>(r8, r0, r11)
            r13.setNativeEventListener(r14)
            com.tkay.basead.d.i r14 = com.tkay.basead.d.i.a()
            r14.a(r7, r13)
            com.tkay.basead.ui.ThirdPartySplashATView r14 = new com.tkay.basead.ui.ThirdPartySplashATView
            android.content.Context r3 = r9.getApplicationContext()
            com.tkay.splashad.a.c$3 r6 = new com.tkay.splashad.a.c$3
            r6.<init>(r8, r11)
            r2 = r14
            r2.<init>(r3, r4, r5, r6, r7)
            r14.setDontCountDown(r12)
            android.view.ViewGroup r9 = r13.getCustomAdContainer()
            if (r9 == 0) goto L55
            android.view.ViewGroup r9 = r13.getCustomAdContainer()
            r9.addView(r14)
            goto L56
        L55:
            r9 = r14
        L56:
            r14.registerNativeClickListener(r10)
            r10.addView(r9)
            return
        L5d:
            java.lang.String r9 = "showThirdPartyNativeSplash fail,AdCache return illegal type adObject"
            java.lang.String r10 = "tkay"
            android.util.Log.e(r10, r9)
            if (r11 == 0) goto L79
            r10 = 99
            r11.a(r10)
            java.lang.String r10 = "4006"
            java.lang.String r12 = ""
            com.tkay.core.api.AdError r9 = com.tkay.core.api.ErrorCode.getErrorCode(r10, r12, r9)
            r11.onSplashAdShowFail(r9)
            r11.onSplashAdDismiss()
        L79:
            return
    }

    static void a(com.tkay.splashad.a.c r8, android.app.Activity r9, android.view.ViewGroup r10, com.tkay.splashad.a.f r11, boolean r12, com.tkay.core.api.BaseAd r13, com.tkay.core.common.f.d r14) {
            if (r13 == 0) goto L5d
            boolean r0 = r13 instanceof com.tkay.core.common.f.a.e
            if (r0 == 0) goto L5d
            r0 = 1
            boolean[] r0 = new boolean[r0]
            r1 = 0
            r0[r1] = r1
            com.tkay.core.common.f.a.b r5 = new com.tkay.core.common.f.a.b
            r1 = r13
            com.tkay.core.common.f.a.e r1 = (com.tkay.core.common.f.a.e) r1
            r5.<init>(r1)
            com.tkay.core.common.f.a.c r4 = new com.tkay.core.common.f.a.c
            r1 = r13
            com.tkay.core.common.f.a.a r1 = (com.tkay.core.common.f.a.a) r1
            java.lang.String r2 = "4"
            int r2 = java.lang.Integer.parseInt(r2)
            r4.<init>(r1, r14, r2)
            java.lang.String r7 = a(r4)
            com.tkay.splashad.a.c$2 r14 = new com.tkay.splashad.a.c$2
            r14.<init>(r8, r0, r11)
            r13.setNativeEventListener(r14)
            com.tkay.basead.d.i r14 = com.tkay.basead.d.i.a()
            r14.a(r7, r13)
            com.tkay.basead.ui.ThirdPartySplashATView r14 = new com.tkay.basead.ui.ThirdPartySplashATView
            android.content.Context r3 = r9.getApplicationContext()
            com.tkay.splashad.a.c$3 r6 = new com.tkay.splashad.a.c$3
            r6.<init>(r8, r11)
            r2 = r14
            r2.<init>(r3, r4, r5, r6, r7)
            r14.setDontCountDown(r12)
            android.view.ViewGroup r8 = r13.getCustomAdContainer()
            if (r8 == 0) goto L55
            android.view.ViewGroup r8 = r13.getCustomAdContainer()
            r8.addView(r14)
            goto L56
        L55:
            r8 = r14
        L56:
            r14.registerNativeClickListener(r10)
            r10.addView(r8)
            return
        L5d:
            java.lang.String r8 = "showThirdPartyNativeSplash fail,AdCache return illegal type adObject"
            java.lang.String r9 = "tkay"
            android.util.Log.e(r9, r8)
            r9 = 99
            r11.a(r9)
            java.lang.String r9 = "4006"
            java.lang.String r10 = ""
            com.tkay.core.api.AdError r8 = com.tkay.core.api.ErrorCode.getErrorCode(r9, r10, r8)
            r11.onSplashAdShowFail(r8)
            r11.onSplashAdDismiss()
            return
    }

    private boolean a(java.lang.String r10, java.lang.String r11, com.tkay.splashad.a.g r12, com.tkay.core.common.b.a r13) {
            r9 = this;
            if (r13 == 0) goto L23
            boolean r0 = r13 instanceof com.tkay.splashad.a.b
            if (r0 == 0) goto L23
            com.tkay.splashad.a.d r1 = new com.tkay.splashad.a.d
            android.content.Context r0 = r9.b
            r1.<init>(r0)
            r9.a = r1
            android.content.Context r2 = r12.a()
            com.tkay.core.api.TYMediationRequestInfo r5 = r12.b
            java.lang.String r6 = r12.c
            r7 = r13
            com.tkay.splashad.a.b r7 = (com.tkay.splashad.a.b) r7
            int r8 = r12.h
            r3 = r10
            r4 = r11
            r1.a(r2, r3, r4, r5, r6, r7, r8)
            r10 = 1
            return r10
        L23:
            r10 = 0
            return r10
    }

    static android.content.Context b(com.tkay.splashad.a.c r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    static android.content.Context c(com.tkay.splashad.a.c r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    static android.content.Context d(com.tkay.splashad.a.c r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    private void e(java.lang.String r10) {
            r9 = this;
            com.tkay.splashad.a.d r0 = r9.a
            java.lang.String r1 = "Splash FetchAd Timeout."
            java.lang.String r2 = ""
            java.lang.String r3 = "2001"
            r4 = 1
            java.lang.String r5 = "0"
            java.lang.String r6 = "4"
            if (r0 == 0) goto L35
            com.tkay.core.common.f.d r7 = new com.tkay.core.common.f.d
            r7.<init>()
            java.lang.String r8 = r0.f
            r7.x(r8)
            java.lang.String r0 = r0.e
            r7.y(r0)
            r7.z(r6)
            r7.w(r5)
            r7.a(r4)
            com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r3, r2, r1)
            com.tkay.core.common.k.c.a(r7, r0)
            com.tkay.splashad.a.d r0 = r9.a
            r7 = 0
            r0.b = r7
            r9.a = r7
        L35:
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            if (r0 != 0) goto L71
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.h> r0 = r9.d
            java.lang.Object r0 = r0.get(r10)
            com.tkay.core.common.h r0 = (com.tkay.core.common.h) r0
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.h> r7 = r9.d
            r7.remove(r10)
            if (r0 == 0) goto L54
            boolean r10 = r0 instanceof com.tkay.splashad.a.e
            if (r10 == 0) goto L71
            com.tkay.splashad.a.e r0 = (com.tkay.splashad.a.e) r0
            r0.j()
            return
        L54:
            com.tkay.core.common.f.d r0 = new com.tkay.core.common.f.d
            r0.<init>()
            java.lang.String r7 = r9.c
            r0.x(r7)
            r0.y(r10)
            r0.z(r6)
            r0.w(r5)
            r0.a(r4)
            com.tkay.core.api.AdError r10 = com.tkay.core.api.ErrorCode.getErrorCode(r3, r2, r1)
            com.tkay.core.common.k.c.a(r0, r10)
        L71:
            return
    }

    @Override
    public final com.tkay.core.common.f.a a(android.content.Context r15, boolean r16, boolean r17, java.util.Map<java.lang.String, java.lang.Object> r18) {
            r14 = this;
            r0 = r14
            com.tkay.splashad.a.d r1 = r0.a
            r2 = 0
            if (r1 == 0) goto L14
            com.tkay.core.common.f.a r3 = r1.d
            if (r3 == 0) goto L14
            com.tkay.core.common.f.a r3 = r1.d
            int r3 = r3.d()
            if (r3 > 0) goto L14
            com.tkay.core.common.f.a r2 = r1.d
        L14:
            if (r2 == 0) goto L3e
            com.tkay.core.common.f.d r3 = r2.h()
            if (r16 == 0) goto L3d
            r4 = 1
            r5 = -1
            r6 = 0
            java.lang.String r7 = r3.x()
            int r8 = r3.H()
            java.lang.String r9 = r3.u
            java.lang.String r11 = r3.X()
            int r1 = r3.q
            r10 = 3
            if (r1 != r10) goto L34
            r1 = 1
            goto L35
        L34:
            r1 = 0
        L35:
            r12 = r1
            java.lang.String r10 = ""
            java.lang.String r13 = ""
            com.tkay.core.common.k.c.a(r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
        L3d:
            return r2
        L3e:
            com.tkay.core.common.f.a r1 = super.a(r15, r16, r17, r18)
            return r1
    }

    @Override
    public final com.tkay.core.common.h a(com.tkay.core.common.j r3) {
            r2 = this;
            com.tkay.splashad.a.g r3 = (com.tkay.splashad.a.g) r3
            com.tkay.splashad.a.e r0 = new com.tkay.splashad.a.e
            android.content.Context r1 = r3.a()
            r0.<init>(r1)
            int r1 = r3.h
            r0.T = r1
            int r3 = r3.d
            r0.a(r3)
            return r0
    }

    @Override
    protected final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "4"
            return r0
    }

    public final synchronized void a(android.app.Activity r14, android.view.ViewGroup r15, com.tkay.splashad.a.a r16, com.tkay.core.api.TYEventInterface r17, com.tkay.splashad.api.TYSplashSkipInfo r18, java.lang.String r19, java.util.Map<java.lang.String, java.lang.Object> r20) {
            r13 = this;
            r11 = r13
            monitor-enter(r13)
            r0 = 0
            r1 = 1
            r4 = r14
            r6 = r20
            com.tkay.core.common.f.a r3 = r13.a(r14, r0, r1, r6)     // Catch: java.lang.Throwable -> L59
            if (r3 != 0) goto L16
            java.lang.String r0 = "tkay"
            java.lang.String r1 = "Splash No Cache."
            android.util.Log.e(r0, r1)     // Catch: java.lang.Throwable -> L59
            monitor-exit(r13)
            return
        L16:
            if (r3 == 0) goto L57
            com.tkay.core.api.TYBaseAdAdapter r0 = r3.e()     // Catch: java.lang.Throwable -> L59
            boolean r0 = r0 instanceof com.tkay.splashad.unitgroup.api.CustomSplashAdapter     // Catch: java.lang.Throwable -> L59
            if (r0 == 0) goto L57
            r13.a(r3)     // Catch: java.lang.Throwable -> L59
            r13.f()     // Catch: java.lang.Throwable -> L59
            int r0 = r3.d()     // Catch: java.lang.Throwable -> L59
            int r0 = r0 + r1
            r3.a(r0)     // Catch: java.lang.Throwable -> L59
            com.tkay.splashad.a.d r0 = r11.a     // Catch: java.lang.Throwable -> L59
            if (r0 == 0) goto L3d
            com.tkay.splashad.a.d r0 = r11.a     // Catch: java.lang.Throwable -> L59
            com.tkay.core.common.f.a r0 = r0.d     // Catch: java.lang.Throwable -> L59
            if (r0 != r3) goto L3d
            com.tkay.splashad.a.d r0 = r11.a     // Catch: java.lang.Throwable -> L59
            r1 = 0
            r0.d = r1     // Catch: java.lang.Throwable -> L59
        L3d:
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Throwable -> L59
            com.tkay.splashad.a.c$1 r12 = new com.tkay.splashad.a.c$1     // Catch: java.lang.Throwable -> L59
            r1 = r12
            r2 = r13
            r4 = r14
            r5 = r19
            r6 = r20
            r7 = r17
            r8 = r18
            r9 = r15
            r10 = r16
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L59
            r0.a(r12)     // Catch: java.lang.Throwable -> L59
        L57:
            monitor-exit(r13)
            return
        L59:
            r0 = move-exception
            monitor-exit(r13)
            throw r0
    }

    public final void a(android.content.Context r7, com.tkay.core.api.TYMediationRequestInfo r8, java.lang.String r9, com.tkay.splashad.a.b r10, int r11, int r12, com.tkay.core.common.b.b r13, java.util.Map<java.lang.String, java.lang.Object> r14) {
            r6 = this;
            com.tkay.splashad.a.g r4 = new com.tkay.splashad.a.g
            r4.<init>()
            r4.a(r7)
            r4.b = r8
            r4.c = r9
            r4.h = r11
            r4.d = r12
            r4.e = r13
            r4.g = r14
            android.content.Context r1 = r6.b
            java.lang.String r3 = r6.c
            java.lang.String r2 = "4"
            r0 = r6
            r5 = r10
            super.a(r1, r2, r3, r4, r5)
            return
    }

    @Override
    public final void a(java.lang.String r2, com.tkay.core.common.b.a r3) {
            r1 = this;
            if (r3 == 0) goto Lb
            boolean r0 = r3 instanceof com.tkay.splashad.a.b
            if (r0 == 0) goto Lb
            com.tkay.splashad.a.b r3 = (com.tkay.splashad.a.b) r3
            r3.setRequestId(r2)
        Lb:
            return
    }

    @Override
    public final boolean a(java.lang.String r10, java.lang.String r11, com.tkay.core.common.j r12, com.tkay.core.common.b.a r13) {
            r9 = this;
            com.tkay.splashad.a.g r12 = (com.tkay.splashad.a.g) r12
            if (r13 == 0) goto L25
            boolean r0 = r13 instanceof com.tkay.splashad.a.b
            if (r0 == 0) goto L25
            com.tkay.splashad.a.d r1 = new com.tkay.splashad.a.d
            android.content.Context r0 = r9.b
            r1.<init>(r0)
            r9.a = r1
            android.content.Context r2 = r12.a()
            com.tkay.core.api.TYMediationRequestInfo r5 = r12.b
            java.lang.String r6 = r12.c
            r7 = r13
            com.tkay.splashad.a.b r7 = (com.tkay.splashad.a.b) r7
            int r8 = r12.h
            r3 = r10
            r4 = r11
            r1.a(r2, r3, r4, r5, r6, r7, r8)
            r10 = 1
            return r10
        L25:
            r10 = 0
            return r10
    }

    @Override
    public final boolean g() {
            r1 = this;
            com.tkay.splashad.a.d r0 = r1.a
            if (r0 == 0) goto Lc
            boolean r0 = r0.a()
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    @Override
    public final boolean i() {
            r1 = this;
            com.tkay.splashad.a.d r0 = r1.a
            if (r0 == 0) goto L10
            java.lang.String r0 = r0.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
        L10:
            boolean r0 = super.i()
            return r0
    }
}

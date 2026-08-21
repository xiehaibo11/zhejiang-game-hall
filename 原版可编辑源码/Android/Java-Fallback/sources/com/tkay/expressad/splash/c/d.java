package com.tkay.expressad.splash.c;

public final class d {
    public android.os.Handler a;
    android.graphics.Rect b;
    private java.lang.String c;
    private com.tkay.expressad.foundation.d.c d;
    private com.tkay.expressad.splash.view.TYSplashView e;
    private com.tkay.expressad.splash.d.d f;
    private com.tkay.expressad.a.a g;
    private boolean h;
    private android.widget.TextView i;
    private android.view.View j;
    private java.lang.String k;
    private java.lang.String l;
    private int m;
    private java.lang.String n;
    private java.lang.String o;
    private java.lang.String p;
    private java.lang.String q;
    private boolean r;
    private boolean s;
    private boolean t;
    private android.content.Context u;
    private android.view.View.OnClickListener v;
    private com.tkay.core.common.l.a.f.b w;
    private com.tkay.expressad.splash.d.a x;






    final class 6 implements com.tkay.expressad.foundation.f.a {
        final com.tkay.expressad.splash.c.d a;

        6(com.tkay.expressad.splash.c.d r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a() {
                r3 = this;
                com.tkay.expressad.splash.c.d r0 = r3.a
                r0.e()
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1f
                r0.<init>()     // Catch: java.lang.Throwable -> L1f
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L1f
                android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L1f
                if (r1 == 0) goto L1a
                java.lang.String r1 = "status"
                r2 = 1
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L1f
            L1a:
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1f
                goto L2a
            L1f:
                r0 = move-exception
                com.tkay.expressad.splash.c.d r1 = r3.a
                com.tkay.expressad.splash.c.d.i(r1)
                r0.getMessage()
                java.lang.String r0 = ""
            L2a:
                byte[] r0 = r0.getBytes()
                r1 = 2
                java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)
                com.tkay.expressad.atsignalcommon.windvane.j.a()
                com.tkay.expressad.splash.c.d r1 = r3.a
                com.tkay.expressad.splash.view.TYSplashView r1 = com.tkay.expressad.splash.c.d.d(r1)
                com.tkay.expressad.splash.view.TYSplashWebview r1 = r1.getSplashWebview()
                java.lang.String r2 = "onFeedbackAlertStatusNotify"
                com.tkay.expressad.atsignalcommon.windvane.j.a(r1, r2, r0)
                return
        }

        @Override
        public final void b() {
                r3 = this;
                com.tkay.expressad.splash.c.d r0 = r3.a
                r0.d()
                r0 = 2
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1f
                r1.<init>()     // Catch: java.lang.Throwable -> L1f
                com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L1f
                android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> L1f
                if (r2 == 0) goto L1a
                java.lang.String r2 = "status"
                r1.put(r2, r0)     // Catch: java.lang.Throwable -> L1f
            L1a:
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1f
                goto L2a
            L1f:
                r1 = move-exception
                com.tkay.expressad.splash.c.d r2 = r3.a
                com.tkay.expressad.splash.c.d.i(r2)
                r1.getMessage()
                java.lang.String r1 = ""
            L2a:
                byte[] r1 = r1.getBytes()
                java.lang.String r0 = android.util.Base64.encodeToString(r1, r0)
                com.tkay.expressad.atsignalcommon.windvane.j.a()
                com.tkay.expressad.splash.c.d r1 = r3.a
                com.tkay.expressad.splash.view.TYSplashView r1 = com.tkay.expressad.splash.c.d.d(r1)
                com.tkay.expressad.splash.view.TYSplashWebview r1 = r1.getSplashWebview()
                java.lang.String r2 = "onFeedbackAlertStatusNotify"
                com.tkay.expressad.atsignalcommon.windvane.j.a(r1, r2, r0)
                return
        }

        @Override
        public final void c() {
                r3 = this;
                com.tkay.expressad.splash.c.d r0 = r3.a
                r0.d()
                r0 = 2
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1f
                r1.<init>()     // Catch: java.lang.Throwable -> L1f
                com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L1f
                android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> L1f
                if (r2 == 0) goto L1a
                java.lang.String r2 = "status"
                r1.put(r2, r0)     // Catch: java.lang.Throwable -> L1f
            L1a:
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1f
                goto L2a
            L1f:
                r1 = move-exception
                com.tkay.expressad.splash.c.d r2 = r3.a
                com.tkay.expressad.splash.c.d.i(r2)
                r1.getMessage()
                java.lang.String r1 = ""
            L2a:
                byte[] r1 = r1.getBytes()
                java.lang.String r0 = android.util.Base64.encodeToString(r1, r0)
                com.tkay.expressad.atsignalcommon.windvane.j.a()
                com.tkay.expressad.splash.c.d r1 = r3.a
                com.tkay.expressad.splash.view.TYSplashView r1 = com.tkay.expressad.splash.c.d.d(r1)
                com.tkay.expressad.splash.view.TYSplashWebview r1 = r1.getSplashWebview()
                java.lang.String r2 = "onFeedbackAlertStatusNotify"
                com.tkay.expressad.atsignalcommon.windvane.j.a(r1, r2, r0)
                return
        }
    }

    public d(android.content.Context r8, java.lang.String r9, java.lang.String r10) {
            r7 = this;
            r7.<init>()
            java.lang.String r0 = "SplashShowManager"
            r7.c = r0
            r0 = 5
            r7.m = r0
            java.lang.String r0 = ""
            r7.n = r0
            r7.o = r0
            r7.p = r0
            r7.q = r0
            r0 = 0
            r7.t = r0
            com.tkay.expressad.splash.c.d$1 r1 = new com.tkay.expressad.splash.c.d$1
            r1.<init>(r7)
            r7.v = r1
            com.tkay.core.common.l.a.f$b r1 = new com.tkay.core.common.l.a.f$b
            r1.<init>()
            r7.w = r1
            com.tkay.expressad.splash.c.d$2 r1 = new com.tkay.expressad.splash.c.d$2
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            r1.<init>(r7, r2)
            r7.a = r1
            com.tkay.expressad.splash.c.d$3 r1 = new com.tkay.expressad.splash.c.d$3
            r1.<init>(r7)
            r7.x = r1
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r7.b = r1
            r7.k = r10
            r7.l = r9
            r7.u = r8
            android.content.Context r9 = r8.getApplicationContext()
            java.lang.String r10 = "tkay_splash_count_time_can_skip"
            java.lang.String r1 = "string"
            int r9 = com.tkay.expressad.foundation.h.i.a(r9, r10, r1)
            android.content.Context r2 = r7.u
            android.content.Context r2 = r2.getApplicationContext()
            java.lang.String r3 = "tkay_splash_count_time_can_skip_not"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r1)
            android.content.Context r4 = r7.u
            android.content.Context r4 = r4.getApplicationContext()
            java.lang.String r5 = "tkay_splash_count_time_can_skip_s"
            int r4 = com.tkay.expressad.foundation.h.i.a(r4, r5, r1)
            android.content.Context r6 = r7.u
            android.content.res.Resources r6 = r6.getResources()
            java.lang.String r9 = r6.getString(r9)
            r7.o = r9
            android.content.Context r9 = r7.u
            android.content.res.Resources r9 = r9.getResources()
            java.lang.String r9 = r9.getString(r2)
            r7.q = r9
            android.content.Context r9 = r7.u
            android.content.res.Resources r9 = r9.getResources()
            java.lang.String r9 = r9.getString(r4)
            r7.p = r9
            android.widget.TextView r9 = r7.i
            if (r9 != 0) goto L153
            android.widget.TextView r9 = new android.widget.TextView
            r9.<init>(r8)
            r7.i = r9
            r2 = 1
            r9.setGravity(r2)
            android.widget.TextView r9 = r7.i
            r9.setTextIsSelectable(r0)
            android.widget.TextView r9 = r7.i
            r0 = 1084227584(0x40a00000, float:5.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r8, r0)
            int r4 = com.tkay.expressad.foundation.h.t.b(r8, r0)
            int r6 = com.tkay.expressad.foundation.h.t.b(r8, r0)
            int r0 = com.tkay.expressad.foundation.h.t.b(r8, r0)
            r9.setPadding(r2, r4, r6, r0)
            android.widget.TextView r9 = r7.i
            android.view.ViewGroup$LayoutParams r9 = r9.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r9 = (android.widget.RelativeLayout.LayoutParams) r9
            if (r9 != 0) goto Ld2
            android.widget.RelativeLayout$LayoutParams r9 = new android.widget.RelativeLayout$LayoutParams
            r0 = 1120403456(0x42c80000, float:100.0)
            int r0 = com.tkay.expressad.foundation.h.t.b(r8, r0)
            r2 = 1112014848(0x42480000, float:50.0)
            int r8 = com.tkay.expressad.foundation.h.t.b(r8, r2)
            r9.<init>(r0, r8)
        Ld2:
            android.widget.TextView r8 = r7.i
            r8.setLayoutParams(r9)
            com.tkay.core.common.b.m r8 = com.tkay.core.common.b.m.a()
            android.content.Context r8 = r8.f()
            if (r8 == 0) goto L153
            com.tkay.expressad.foundation.b.b r9 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r9 = r9.a()
            android.content.res.Resources r0 = r8.getResources()
            int r10 = r0.getIdentifier(r10, r1, r9)
            android.content.res.Resources r0 = r8.getResources()
            int r0 = r0.getIdentifier(r3, r1, r9)
            android.content.res.Resources r2 = r8.getResources()
            int r1 = r2.getIdentifier(r5, r1, r9)
            android.content.res.Resources r2 = r8.getResources()
            java.lang.String r10 = r2.getString(r10)
            r7.o = r10
            android.content.res.Resources r10 = r8.getResources()
            java.lang.String r10 = r10.getString(r0)
            r7.q = r10
            r7.n = r10
            android.content.res.Resources r10 = r8.getResources()
            java.lang.String r10 = r10.getString(r1)
            r7.p = r10
            android.widget.TextView r10 = r7.i
            android.content.res.Resources r0 = r8.getResources()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.a()
            java.lang.String r2 = "tkay_splash_close_bg"
            java.lang.String r3 = "drawable"
            int r0 = r0.getIdentifier(r2, r3, r1)
            r10.setBackgroundResource(r0)
            android.content.res.Resources r10 = r8.getResources()
            java.lang.String r0 = "tkay_splash_count_time_skip_text_color"
            java.lang.String r1 = "color"
            int r9 = r10.getIdentifier(r0, r1, r9)
            android.widget.TextView r10 = r7.i
            android.content.res.Resources r8 = r8.getResources()
            int r8 = r8.getColor(r9)
            r10.setTextColor(r8)
        L153:
            return
    }

    private static void a(com.tkay.expressad.foundation.d.c r3, android.content.Context r4, java.lang.String r5) {
            if (r3 == 0) goto L27
            java.util.List r0 = r3.e()     // Catch: java.lang.Throwable -> L23
            if (r0 == 0) goto L27
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L23
            if (r1 <= 0) goto L27
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L23
        L12:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L23
            if (r1 == 0) goto L27
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L23
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L23
            r2 = 1
            com.tkay.expressad.a.a.a(r4, r3, r5, r1, r2)     // Catch: java.lang.Throwable -> L23
            goto L12
        L23:
            r3 = move-exception
            r3.getMessage()
        L27:
            return
    }

    static void a(com.tkay.expressad.splash.c.d r1, int r2) {
            com.tkay.expressad.splash.view.TYSplashView r0 = r1.e
            if (r0 == 0) goto L18
            r0.updateCountdown(r2)
            com.tkay.expressad.splash.view.TYSplashView r0 = r1.e
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r0.getSplashJSBridgeImpl()
            if (r0 == 0) goto L18
            com.tkay.expressad.splash.view.TYSplashView r0 = r1.e
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r0.getSplashJSBridgeImpl()
            r0.updateCountDown(r2)
        L18:
            if (r2 >= 0) goto L1d
            r1.m = r2
            return
        L1d:
            android.view.View r2 = r1.j
            if (r2 != 0) goto L24
            r1.i()
        L24:
            return
    }

    static void a(com.tkay.expressad.splash.c.d r1, java.lang.String r2) {
            com.tkay.expressad.splash.d.d r1 = r1.f
            if (r1 == 0) goto L11
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r0 = "web show failed:"
            java.lang.String r2 = r0.concat(r2)
            r1.a(r2)
        L11:
            return
    }

    private void a(java.lang.String r3) {
            r2 = this;
            com.tkay.expressad.splash.d.d r0 = r2.f
            if (r0 == 0) goto L11
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r1 = "web show failed:"
            java.lang.String r3 = r1.concat(r3)
            r0.a(r3)
        L11:
            return
    }

    private boolean a(android.view.View r6) {
            r5 = this;
            r0 = 0
            if (r6 == 0) goto L37
            int r1 = r6.getVisibility()
            if (r1 != 0) goto L37
            android.view.ViewParent r1 = r6.getParent()
            if (r1 == 0) goto L37
            int r1 = r6.getWindowVisibility()
            if (r1 == 0) goto L16
            goto L37
        L16:
            android.graphics.Rect r1 = r5.b
            boolean r6 = r6.getGlobalVisibleRect(r1)
            if (r6 != 0) goto L1f
            return r0
        L1f:
            android.graphics.Rect r6 = r5.b
            int r6 = r6.height()
            long r1 = (long) r6
            android.graphics.Rect r6 = r5.b
            int r6 = r6.width()
            long r3 = (long) r6
            long r1 = r1 * r3
            r3 = 0
            int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r6 > 0) goto L35
            return r0
        L35:
            r6 = 1
            return r6
        L37:
            return r0
    }

    static boolean a(com.tkay.expressad.splash.c.d r0) {
            boolean r0 = r0.h
            return r0
    }

    static boolean a(com.tkay.expressad.splash.c.d r3, android.view.View r4) {
            r0 = 0
            if (r4 == 0) goto L37
            int r1 = r4.getVisibility()
            if (r1 != 0) goto L37
            android.view.ViewParent r1 = r4.getParent()
            if (r1 == 0) goto L37
            int r1 = r4.getWindowVisibility()
            if (r1 == 0) goto L16
            goto L37
        L16:
            android.graphics.Rect r1 = r3.b
            boolean r4 = r4.getGlobalVisibleRect(r1)
            if (r4 != 0) goto L1f
            return r0
        L1f:
            android.graphics.Rect r4 = r3.b
            int r4 = r4.height()
            long r1 = (long) r4
            android.graphics.Rect r3 = r3.b
            int r3 = r3.width()
            long r3 = (long) r3
            long r1 = r1 * r3
            r3 = 0
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 > 0) goto L35
            return r0
        L35:
            r3 = 1
            return r3
        L37:
            return r0
    }

    static int b(com.tkay.expressad.splash.c.d r0, int r1) {
            r0.m = r1
            return r1
    }

    private void b(int r2) {
            r1 = this;
            com.tkay.expressad.splash.view.TYSplashView r0 = r1.e
            if (r0 == 0) goto L18
            r0.updateCountdown(r2)
            com.tkay.expressad.splash.view.TYSplashView r0 = r1.e
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r0.getSplashJSBridgeImpl()
            if (r0 == 0) goto L18
            com.tkay.expressad.splash.view.TYSplashView r0 = r1.e
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r0.getSplashJSBridgeImpl()
            r0.updateCountDown(r2)
        L18:
            if (r2 >= 0) goto L1d
            r1.m = r2
            return
        L1d:
            android.view.View r2 = r1.j
            if (r2 != 0) goto L24
            r1.i()
        L24:
            return
    }

    private void b(android.view.View r2) {
            r1 = this;
            if (r2 == 0) goto L7
            android.view.View$OnClickListener r0 = r1.v
            r2.setOnClickListener(r0)
        L7:
            return
    }

    private void b(com.tkay.expressad.foundation.d.c r4) {
            r3 = this;
            boolean r0 = r4.s()
            r1 = 1
            if (r0 != 0) goto L1f
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r2 = r3.k
            c(r4, r0, r2)
            r4.c(r1)
            java.lang.String r0 = r3.k
            java.lang.String r2 = "splash"
            com.tkay.expressad.foundation.g.a.f.a(r0, r4, r2)
            goto L20
        L1f:
            r1 = 0
        L20:
            if (r1 == 0) goto L3c
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r1 = r3.k
            b(r4, r0, r1)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r1 = r3.k
            a(r4, r0, r1)
        L3c:
            return
    }

    private static void b(com.tkay.expressad.foundation.d.c r8, android.content.Context r9, java.lang.String r10) {
            if (r8 == 0) goto L1f
            java.lang.String r0 = r8.ai()     // Catch: java.lang.Throwable -> L1b
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L1b
            if (r0 != 0) goto L1f
            java.lang.String r4 = r8.ai()     // Catch: java.lang.Throwable -> L1b
            r5 = 0
            r6 = 1
            int r7 = com.tkay.expressad.a.a.a.j     // Catch: java.lang.Throwable -> L1b
            r1 = r9
            r2 = r8
            r3 = r10
            com.tkay.expressad.a.a.a(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L1b
            goto L1f
        L1b:
            r8 = move-exception
            r8.getMessage()
        L1f:
            return
    }

    static void b(com.tkay.expressad.splash.c.d r2) {
            r0 = 1
            r2.t = r0     // Catch: java.lang.Throwable -> L24
            com.tkay.expressad.splash.d.d r0 = r2.f     // Catch: java.lang.Throwable -> L24
            r1 = 0
            if (r0 == 0) goto Lf
            com.tkay.expressad.splash.d.d r0 = r2.f     // Catch: java.lang.Throwable -> L24
            r0.b()     // Catch: java.lang.Throwable -> L24
            r2.f = r1     // Catch: java.lang.Throwable -> L24
        Lf:
            r0 = 0
            r2.s = r0     // Catch: java.lang.Throwable -> L24
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.e     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L1b
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.e     // Catch: java.lang.Throwable -> L24
            r0.getSplashWebview()     // Catch: java.lang.Throwable -> L24
        L1b:
            android.os.Handler r0 = r2.a     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L24
            android.os.Handler r2 = r2.a     // Catch: java.lang.Throwable -> L24
            r2.removeCallbacksAndMessages(r1)     // Catch: java.lang.Throwable -> L24
        L24:
            return
    }

    private void c(com.tkay.expressad.foundation.d.c r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r1 = r2.k
            b(r3, r0, r1)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r1 = r2.k
            c(r3, r0, r1)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r1 = r2.k
            a(r3, r0, r1)
            r0 = 1
            r3.c(r0)
            java.lang.String r0 = r2.k
            java.lang.String r1 = "splash"
            com.tkay.expressad.foundation.g.a.f.a(r0, r3, r1)
            return
    }

    private static void c(com.tkay.expressad.foundation.d.c r8, android.content.Context r9, java.lang.String r10) {
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            r0.b(r9)
            java.lang.String r0 = r8.ag()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1f
            java.lang.String r4 = r8.ag()
            r5 = 0
            r6 = 1
            int r7 = com.tkay.expressad.a.a.a.i
            r1 = r9
            r2 = r8
            r3 = r10
            com.tkay.expressad.a.a.a(r1, r2, r3, r4, r5, r6, r7)
        L1f:
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            if (r0 != 0) goto L41
            com.tkay.expressad.foundation.d.n r0 = r8.L()
            if (r0 == 0) goto L41
            com.tkay.expressad.foundation.d.n r0 = r8.L()
            java.lang.String[] r0 = r0.o()
            if (r0 == 0) goto L41
            com.tkay.expressad.foundation.d.n r0 = r8.L()
            java.lang.String[] r0 = r0.o()
            r1 = 0
            com.tkay.expressad.a.a.a(r9, r8, r10, r0, r1)
        L41:
            return
    }

    static boolean c(com.tkay.expressad.splash.c.d r0) {
            boolean r0 = r0.t
            return r0
    }

    static com.tkay.expressad.splash.view.TYSplashView d(com.tkay.expressad.splash.c.d r0) {
            com.tkay.expressad.splash.view.TYSplashView r0 = r0.e
            return r0
    }

    private void d(com.tkay.expressad.foundation.d.c r2) {
            r1 = this;
            com.tkay.expressad.splash.d.d r0 = r1.f
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    static com.tkay.core.common.l.a.f.b e(com.tkay.expressad.splash.c.d r0) {
            com.tkay.core.common.l.a.f$b r0 = r0.w
            return r0
    }

    static int f(com.tkay.expressad.splash.c.d r0) {
            int r0 = r0.m
            return r0
    }

    private void f() {
            r7 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            if (r0 == 0) goto L84
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.a()
            android.content.res.Resources r2 = r0.getResources()
            java.lang.String r3 = "string"
            java.lang.String r4 = "tkay_splash_count_time_can_skip"
            int r2 = r2.getIdentifier(r4, r3, r1)
            android.content.res.Resources r4 = r0.getResources()
            java.lang.String r5 = "tkay_splash_count_time_can_skip_not"
            int r4 = r4.getIdentifier(r5, r3, r1)
            android.content.res.Resources r5 = r0.getResources()
            java.lang.String r6 = "tkay_splash_count_time_can_skip_s"
            int r3 = r5.getIdentifier(r6, r3, r1)
            android.content.res.Resources r5 = r0.getResources()
            java.lang.String r2 = r5.getString(r2)
            r7.o = r2
            android.content.res.Resources r2 = r0.getResources()
            java.lang.String r2 = r2.getString(r4)
            r7.q = r2
            r7.n = r2
            android.content.res.Resources r2 = r0.getResources()
            java.lang.String r2 = r2.getString(r3)
            r7.p = r2
            android.widget.TextView r2 = r7.i
            android.content.res.Resources r3 = r0.getResources()
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r4 = r4.a()
            java.lang.String r5 = "tkay_splash_close_bg"
            java.lang.String r6 = "drawable"
            int r3 = r3.getIdentifier(r5, r6, r4)
            r2.setBackgroundResource(r3)
            android.content.res.Resources r2 = r0.getResources()
            java.lang.String r3 = "tkay_splash_count_time_skip_text_color"
            java.lang.String r4 = "color"
            int r1 = r2.getIdentifier(r3, r4, r1)
            android.widget.TextView r2 = r7.i
            android.content.res.Resources r0 = r0.getResources()
            int r0 = r0.getColor(r1)
            r2.setTextColor(r0)
        L84:
            return
    }

    static int g(com.tkay.expressad.splash.c.d r2) {
            int r0 = r2.m
            int r1 = r0 + (-1)
            r2.m = r1
            return r0
    }

    private synchronized void g() {
            r4 = this;
            monitor-enter(r4)
            com.tkay.expressad.foundation.d.c r0 = r4.d     // Catch: java.lang.Throwable -> Lbf
            if (r0 == 0) goto Lbd
            boolean r0 = r4.s     // Catch: java.lang.Throwable -> Lbf
            if (r0 == 0) goto Lb
            goto Lbd
        Lb:
            r0 = 1
            r4.s = r0     // Catch: java.lang.Throwable -> Lbf
            com.tkay.expressad.splash.d.d r1 = r4.f     // Catch: java.lang.Throwable -> Lbf
            if (r1 == 0) goto L38
            com.tkay.expressad.splash.view.TYSplashView r1 = r4.e     // Catch: java.lang.Throwable -> Lbf
            if (r1 == 0) goto L38
            android.content.Context r1 = r4.u     // Catch: java.lang.Throwable -> Lbf
            if (r1 == 0) goto L33
            android.content.Context r1 = r4.u     // Catch: java.lang.Throwable -> Lbf
            boolean r1 = r1 instanceof android.app.Activity     // Catch: java.lang.Throwable -> Lbf
            if (r1 == 0) goto L33
            android.content.Context r1 = r4.u     // Catch: java.lang.Throwable -> Lbf
            android.app.Activity r1 = (android.app.Activity) r1     // Catch: java.lang.Throwable -> Lbf
            boolean r1 = r1.isFinishing()     // Catch: java.lang.Throwable -> Lbf
            if (r1 == 0) goto L33
            com.tkay.expressad.splash.d.d r0 = r4.f     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r1 = "Activity is finishing"
            r0.a(r1)     // Catch: java.lang.Throwable -> Lbf
            monitor-exit(r4)
            return
        L33:
            com.tkay.expressad.splash.d.d r1 = r4.f     // Catch: java.lang.Throwable -> Lbf
            r1.a()     // Catch: java.lang.Throwable -> Lbf
        L38:
            com.tkay.expressad.foundation.d.c r1 = r4.d     // Catch: java.lang.Throwable -> Lbf
            boolean r1 = r1.V()     // Catch: java.lang.Throwable -> Lbf
            if (r1 != 0) goto Lbb
            com.tkay.expressad.splash.view.TYSplashView r1 = r4.e     // Catch: java.lang.Throwable -> Lbf
            boolean r1 = r1.isDynamicView()     // Catch: java.lang.Throwable -> Lbf
            if (r1 != 0) goto L88
            com.tkay.expressad.foundation.d.c r1 = r4.d     // Catch: java.lang.Throwable -> Lbf
            r2 = 0
            boolean r3 = r1.s()     // Catch: java.lang.Throwable -> Lbf
            if (r3 != 0) goto L69
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lbf
            android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r3 = r4.k     // Catch: java.lang.Throwable -> Lbf
            c(r1, r2, r3)     // Catch: java.lang.Throwable -> Lbf
            r1.c(r0)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r2 = r4.k     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r3 = "splash"
            com.tkay.expressad.foundation.g.a.f.a(r2, r1, r3)     // Catch: java.lang.Throwable -> Lbf
            goto L6a
        L69:
            r0 = r2
        L6a:
            if (r0 == 0) goto L86
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lbf
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r2 = r4.k     // Catch: java.lang.Throwable -> Lbf
            b(r1, r0, r2)     // Catch: java.lang.Throwable -> Lbf
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lbf
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r2 = r4.k     // Catch: java.lang.Throwable -> Lbf
            a(r1, r0, r2)     // Catch: java.lang.Throwable -> Lbf
        L86:
            monitor-exit(r4)
            return
        L88:
            com.tkay.expressad.foundation.d.c r1 = r4.d     // Catch: java.lang.Throwable -> Lbf
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lbf
            android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r3 = r4.k     // Catch: java.lang.Throwable -> Lbf
            b(r1, r2, r3)     // Catch: java.lang.Throwable -> Lbf
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lbf
            android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r3 = r4.k     // Catch: java.lang.Throwable -> Lbf
            c(r1, r2, r3)     // Catch: java.lang.Throwable -> Lbf
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lbf
            android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r3 = r4.k     // Catch: java.lang.Throwable -> Lbf
            a(r1, r2, r3)     // Catch: java.lang.Throwable -> Lbf
            r1.c(r0)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r0 = r4.k     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r2 = "splash"
            com.tkay.expressad.foundation.g.a.f.a(r0, r1, r2)     // Catch: java.lang.Throwable -> Lbf
        Lbb:
            monitor-exit(r4)
            return
        Lbd:
            monitor-exit(r4)
            return
        Lbf:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    static com.tkay.expressad.foundation.d.c h(com.tkay.expressad.splash.c.d r0) {
            com.tkay.expressad.foundation.d.c r0 = r0.d
            return r0
    }

    private void h() {
            r4 = this;
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            boolean r0 = r0.b()
            if (r0 != 0) goto Lb
            return
        Lb:
            com.tkay.expressad.splash.view.TYSplashView r0 = r4.e
            boolean r0 = r0.isDynamicView()
            if (r0 == 0) goto L14
            return
        L14:
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r1 = r4.k
            com.tkay.expressad.splash.c.d$6 r2 = new com.tkay.expressad.splash.c.d$6
            r2.<init>(r4)
            r0.a(r1, r2)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r1 = r4.k
            com.tkay.expressad.widget.FeedBackButton r0 = r0.b(r1)
            if (r0 == 0) goto L74
            r1 = 0
            android.view.ViewGroup$LayoutParams r2 = r0.getLayoutParams()     // Catch: java.lang.Exception -> L37
            android.widget.RelativeLayout$LayoutParams r2 = (android.widget.RelativeLayout.LayoutParams) r2     // Catch: java.lang.Exception -> L37
            r1 = r2
            goto L3b
        L37:
            r2 = move-exception
            r2.printStackTrace()
        L3b:
            if (r1 != 0) goto L46
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            int r2 = com.tkay.expressad.foundation.f.b.a
            int r3 = com.tkay.expressad.foundation.f.b.b
            r1.<init>(r2, r3)
        L46:
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            r3 = 1092616192(0x41200000, float:10.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r3)
            r1.topMargin = r2
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r3)
            r1.leftMargin = r2
            android.view.ViewParent r2 = r0.getParent()
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            if (r2 == 0) goto L6f
            r2.removeView(r0)
        L6f:
            com.tkay.expressad.splash.view.TYSplashView r2 = r4.e
            r2.addView(r0, r1)
        L74:
            com.tkay.expressad.foundation.d.c r0 = r4.d
            java.lang.String r1 = r4.k
            r0.l(r1)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r1 = r4.k
            com.tkay.expressad.foundation.d.c r2 = r4.d
            r0.a(r1, r2)
            return
    }

    static java.lang.String i(com.tkay.expressad.splash.c.d r0) {
            java.lang.String r0 = r0.c
            return r0
    }

    private void i() {
            r2 = this;
            boolean r0 = r2.h
            if (r0 == 0) goto L1d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.o
            r0.append(r1)
            int r1 = r2.m
            r0.append(r1)
            java.lang.String r1 = r2.p
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            goto L30
        L1d:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r2.m
            r0.append(r1)
            java.lang.String r1 = r2.q
            r0.append(r1)
            java.lang.String r0 = r0.toString()
        L30:
            android.widget.TextView r1 = r2.i
            r1.setText(r0)
            return
    }

    static com.tkay.expressad.splash.d.d j(com.tkay.expressad.splash.c.d r0) {
            com.tkay.expressad.splash.d.d r0 = r0.f
            return r0
    }

    private void j() {
            r2 = this;
            r0 = 1
            r2.t = r0     // Catch: java.lang.Throwable -> L24
            com.tkay.expressad.splash.d.d r0 = r2.f     // Catch: java.lang.Throwable -> L24
            r1 = 0
            if (r0 == 0) goto Lf
            com.tkay.expressad.splash.d.d r0 = r2.f     // Catch: java.lang.Throwable -> L24
            r0.b()     // Catch: java.lang.Throwable -> L24
            r2.f = r1     // Catch: java.lang.Throwable -> L24
        Lf:
            r0 = 0
            r2.s = r0     // Catch: java.lang.Throwable -> L24
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.e     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L1b
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.e     // Catch: java.lang.Throwable -> L24
            r0.getSplashWebview()     // Catch: java.lang.Throwable -> L24
        L1b:
            android.os.Handler r0 = r2.a     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L24
            android.os.Handler r0 = r2.a     // Catch: java.lang.Throwable -> L24
            r0.removeCallbacksAndMessages(r1)     // Catch: java.lang.Throwable -> L24
        L24:
            return
    }

    private void k() {
            r4 = this;
            r0 = 0
            r4.r = r0
            int r0 = r4.m
            if (r0 <= 0) goto L16
            android.os.Handler r0 = r4.a
            if (r0 == 0) goto L16
            r1 = 1
            r0.removeMessages(r1)
            android.os.Handler r0 = r4.a
            r2 = 1000(0x3e8, double:4.94E-321)
            r0.sendEmptyMessageDelayed(r1, r2)
        L16:
            com.tkay.expressad.splash.view.TYSplashView r0 = r4.e
            if (r0 == 0) goto L2d
            com.tkay.expressad.splash.view.TYSplashWebview r0 = r0.getSplashWebview()
            if (r0 == 0) goto L2d
            boolean r1 = r0.isDestroyed()
            if (r1 != 0) goto L2d
            java.lang.String r1 = "onInstallAlertHide"
            java.lang.String r2 = ""
            com.tkay.expressad.splash.js.SplashJsUtils.sendEventToH5(r0, r1, r2)
        L2d:
            return
    }

    static void k(com.tkay.expressad.splash.c.d r0) {
            r0.g()
            return
    }

    private void l() {
            r3 = this;
            r0 = 1
            r3.r = r0
            int r1 = r3.m
            if (r1 <= 0) goto Le
            android.os.Handler r1 = r3.a
            if (r1 == 0) goto Le
            r1.removeMessages(r0)
        Le:
            com.tkay.expressad.splash.view.TYSplashView r0 = r3.e
            if (r0 == 0) goto L25
            com.tkay.expressad.splash.view.TYSplashWebview r0 = r0.getSplashWebview()
            if (r0 == 0) goto L25
            boolean r1 = r0.isDestroyed()
            if (r1 != 0) goto L25
            java.lang.String r1 = "onInstallAlertShow"
            java.lang.String r2 = ""
            com.tkay.expressad.splash.js.SplashJsUtils.sendEventToH5(r0, r1, r2)
        L25:
            return
    }

    public final com.tkay.expressad.splash.d.a a() {
            r1 = this;
            com.tkay.expressad.splash.d.a r0 = r1.x
            return r0
    }

    public final void a(int r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public final void a(android.view.ViewGroup r2) {
            r1 = this;
            if (r2 == 0) goto L7
            android.view.View$OnClickListener r0 = r1.v
            r2.setOnClickListener(r0)
        L7:
            r1.j = r2
            return
    }

    public final void a(com.tkay.expressad.foundation.d.c r2) {
            r1 = this;
            if (r2 == 0) goto La
            r2.aA()     // Catch: java.lang.Throwable -> L6
            goto La
        L6:
            r0 = move-exception
            r0.getMessage()
        La:
            com.tkay.expressad.splash.d.d r0 = r1.f
            if (r0 == 0) goto L11
            r0.a(r2)
        L11:
            return
    }

    public final void a(com.tkay.expressad.foundation.d.c r5, com.tkay.expressad.splash.view.TYSplashView r6) {
            r4 = this;
            boolean r0 = r4.h
            r4.a(r0)
            r4.d = r5
            r4.e = r6
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r6.getSplashJSBridgeImpl()
            if (r0 != 0) goto L27
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = new com.tkay.expressad.splash.js.SplashJSBridgeImpl
            android.content.Context r1 = r6.getContext()
            java.lang.String r2 = r4.l
            java.lang.String r3 = r4.k
            r0.<init>(r1, r2, r3)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r1.add(r5)
            r0.setCampaignList(r1)
        L27:
            int r1 = r4.m
            r0.setCountdownS(r1)
            boolean r1 = r4.h
            r0.setAllowSkip(r1)
            com.tkay.expressad.splash.d.a r1 = r4.x
            r0.setSplashBridgeListener(r1)
            r6.setSplashJSBridgeImpl(r0)
            boolean r5 = r5.s()
            android.view.View r0 = r4.j
            r1 = 8
            if (r0 != 0) goto L58
            if (r5 == 0) goto L4a
            android.widget.TextView r5 = r4.i
            r5.setVisibility(r1)
        L4a:
            r4.i()
            android.widget.TextView r5 = r4.i
            r4.b(r5)
            android.widget.TextView r5 = r4.i
            r6.setCloseView(r5)
            goto L67
        L58:
            if (r5 == 0) goto L5d
            r0.setVisibility(r1)
        L5d:
            android.view.View r5 = r4.j
            r4.b(r5)
            android.view.View r5 = r4.j
            r6.setCloseView(r5)
        L67:
            r6.show()
            com.tkay.expressad.foundation.d.c r5 = r4.d
            if (r5 == 0) goto L79
            boolean r5 = r5.ay()
            if (r5 == 0) goto L79
            if (r6 == 0) goto L79
            r6.getSplashWebview()
        L79:
            com.tkay.expressad.splash.c.d$4 r5 = new com.tkay.expressad.splash.c.d$4
            r5.<init>(r4)
            r6.addOnAttachStateChangeListener(r5)
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()
            com.tkay.expressad.splash.c.d$5 r6 = new com.tkay.expressad.splash.c.d$5
            r6.<init>(r4)
            r0 = 30
            r5.a(r6, r0)
            com.tkay.expressad.foundation.d.c r5 = r4.d
            java.lang.String r5 = r5.be()
            com.tkay.expressad.splash.c.b.a(r5)
            android.os.Handler r5 = r4.a
            r6 = 1
            r5.removeMessages(r6)
            android.os.Handler r5 = r4.a
            r0 = 1000(0x3e8, double:4.94E-321)
            r5.sendEmptyMessageDelayed(r6, r0)
            android.os.Handler r5 = r4.a
            r6 = 2
            r5.sendEmptyMessageDelayed(r6, r0)
            com.tkay.expressad.foundation.f.b r5 = com.tkay.expressad.foundation.f.b.a()
            boolean r5 = r5.b()
            if (r5 == 0) goto L12f
            com.tkay.expressad.splash.view.TYSplashView r5 = r4.e
            boolean r5 = r5.isDynamicView()
            if (r5 != 0) goto L12f
            com.tkay.expressad.foundation.f.b r5 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r6 = r4.k
            com.tkay.expressad.splash.c.d$6 r0 = new com.tkay.expressad.splash.c.d$6
            r0.<init>(r4)
            r5.a(r6, r0)
            com.tkay.expressad.foundation.f.b r5 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r6 = r4.k
            com.tkay.expressad.widget.FeedBackButton r5 = r5.b(r6)
            if (r5 == 0) goto L11d
            r6 = 0
            android.view.ViewGroup$LayoutParams r0 = r5.getLayoutParams()     // Catch: java.lang.Exception -> Le0
            android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0     // Catch: java.lang.Exception -> Le0
            r6 = r0
            goto Le4
        Le0:
            r0 = move-exception
            r0.printStackTrace()
        Le4:
            if (r6 != 0) goto Lef
            android.widget.RelativeLayout$LayoutParams r6 = new android.widget.RelativeLayout$LayoutParams
            int r0 = com.tkay.expressad.foundation.f.b.a
            int r1 = com.tkay.expressad.foundation.f.b.b
            r6.<init>(r0, r1)
        Lef:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            r1 = 1092616192(0x41200000, float:10.0)
            int r0 = com.tkay.expressad.foundation.h.t.b(r0, r1)
            r6.topMargin = r0
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            int r0 = com.tkay.expressad.foundation.h.t.b(r0, r1)
            r6.leftMargin = r0
            android.view.ViewParent r0 = r5.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            if (r0 == 0) goto L118
            r0.removeView(r5)
        L118:
            com.tkay.expressad.splash.view.TYSplashView r0 = r4.e
            r0.addView(r5, r6)
        L11d:
            com.tkay.expressad.foundation.d.c r5 = r4.d
            java.lang.String r6 = r4.k
            r5.l(r6)
            com.tkay.expressad.foundation.f.b r5 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r6 = r4.k
            com.tkay.expressad.foundation.d.c r0 = r4.d
            r5.a(r6, r0)
        L12f:
            return
    }

    public final void a(com.tkay.expressad.splash.d.d r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.h = r1
            if (r1 == 0) goto L9
            java.lang.String r1 = r0.o
            r0.n = r1
            return
        L9:
            java.lang.String r1 = r0.q
            r0.n = r1
            return
    }

    public final java.lang.String b() {
            r1 = this;
            com.tkay.expressad.foundation.d.c r0 = r1.d
            if (r0 == 0) goto L11
            java.lang.String r0 = r0.Z()
            if (r0 == 0) goto L11
            com.tkay.expressad.foundation.d.c r0 = r1.d
            java.lang.String r0 = r0.Z()
            return r0
        L11:
            java.lang.String r0 = ""
            return r0
    }

    public final void c() {
            r2 = this;
            com.tkay.expressad.splash.d.d r0 = r2.f
            r1 = 0
            if (r0 == 0) goto L7
            r2.f = r1
        L7:
            com.tkay.expressad.splash.d.a r0 = r2.x
            if (r0 == 0) goto Ld
            r2.x = r1
        Ld:
            android.view.View$OnClickListener r0 = r2.v
            if (r0 == 0) goto L13
            r2.v = r1
        L13:
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.e
            if (r0 == 0) goto L1a
            r0.destroy()
        L1a:
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r1 = r2.k
            r0.c(r1)
            return
    }

    public final void d() {
            r4 = this;
            boolean r0 = r4.r
            if (r0 != 0) goto L37
            boolean r0 = com.tkay.expressad.foundation.f.b.c
            if (r0 != 0) goto L37
            int r0 = r4.m
            if (r0 <= 0) goto L1b
            android.os.Handler r0 = r4.a
            if (r0 == 0) goto L1b
            r1 = 1
            r0.removeMessages(r1)
            android.os.Handler r0 = r4.a
            r2 = 1000(0x3e8, double:4.94E-321)
            r0.sendEmptyMessageDelayed(r1, r2)
        L1b:
            com.tkay.expressad.splash.view.TYSplashView r0 = r4.e
            if (r0 == 0) goto L37
            r0.onResume()
            com.tkay.expressad.splash.view.TYSplashView r0 = r4.e
            com.tkay.expressad.splash.view.TYSplashWebview r0 = r0.getSplashWebview()
            if (r0 == 0) goto L37
            boolean r1 = r0.isDestroyed()
            if (r1 != 0) goto L37
            java.lang.String r1 = "onSystemResume"
            java.lang.String r2 = ""
            com.tkay.expressad.splash.js.SplashJsUtils.sendEventToH5(r0, r1, r2)
        L37:
            return
    }

    public final void e() {
            r3 = this;
            int r0 = r3.m
            if (r0 <= 0) goto Lc
            android.os.Handler r0 = r3.a
            if (r0 == 0) goto Lc
            r1 = 1
            r0.removeMessages(r1)
        Lc:
            com.tkay.expressad.splash.view.TYSplashView r0 = r3.e
            if (r0 == 0) goto L28
            r0.onPause()
            com.tkay.expressad.splash.view.TYSplashView r0 = r3.e
            com.tkay.expressad.splash.view.TYSplashWebview r0 = r0.getSplashWebview()
            if (r0 == 0) goto L28
            boolean r1 = r0.isDestroyed()
            if (r1 != 0) goto L28
            java.lang.String r1 = "onSystemPause"
            java.lang.String r2 = ""
            com.tkay.expressad.splash.js.SplashJsUtils.sendEventToH5(r0, r1, r2)
        L28:
            return
    }
}

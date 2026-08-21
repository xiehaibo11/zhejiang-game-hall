package com.tkay.expressad.splash.c;

public final class e {
    private static final java.lang.String a = "WebViewRenderManager";
    private boolean b;
    private boolean c;


    static class a {
        private static final com.tkay.expressad.splash.c.e a = null;

        static {
                com.tkay.expressad.splash.c.e r0 = new com.tkay.expressad.splash.c.e
                r1 = 0
                r0.<init>(r1)
                com.tkay.expressad.splash.c.e.a.a = r0
                return
        }

        a() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.tkay.expressad.splash.c.e a() {
                com.tkay.expressad.splash.c.e r0 = com.tkay.expressad.splash.c.e.a.a
                return r0
        }
    }

    public interface b {
        void a();

        void a(int r1);

        void a(java.lang.String r1);
    }

    public static class c {
        private java.lang.String a;
        private java.lang.String b;
        private com.tkay.expressad.foundation.d.c c;
        private java.lang.String d;
        private boolean e;
        private int f;
        private boolean g;

        public c() {
                r0 = this;
                r0.<init>()
                return
        }

        private boolean g() {
                r1 = this;
                boolean r0 = r1.g
                return r0
        }

        public final java.lang.String a() {
                r1 = this;
                java.lang.String r0 = r1.d
                return r0
        }

        public final void a(int r1) {
                r0 = this;
                r0.f = r1
                return
        }

        public final void a(com.tkay.expressad.foundation.d.c r1) {
                r0 = this;
                r0.c = r1
                return
        }

        public final void a(java.lang.String r1) {
                r0 = this;
                r0.d = r1
                return
        }

        public final void a(boolean r1) {
                r0 = this;
                r0.g = r1
                return
        }

        public final java.lang.String b() {
                r1 = this;
                java.lang.String r0 = r1.a
                return r0
        }

        public final void b(java.lang.String r1) {
                r0 = this;
                r0.a = r1
                return
        }

        public final void b(boolean r1) {
                r0 = this;
                r0.e = r1
                return
        }

        public final java.lang.String c() {
                r1 = this;
                java.lang.String r0 = r1.b
                return r0
        }

        public final void c(java.lang.String r1) {
                r0 = this;
                r0.b = r1
                return
        }

        public final com.tkay.expressad.foundation.d.c d() {
                r1 = this;
                com.tkay.expressad.foundation.d.c r0 = r1.c
                return r0
        }

        public final boolean e() {
                r1 = this;
                boolean r0 = r1.e
                return r0
        }

        public final int f() {
                r1 = this;
                int r0 = r1.f
                return r0
        }
    }

    private e() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.b = r0
            r1.c = r0
            return
    }

    e(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static boolean a(com.tkay.expressad.splash.c.e r1) {
            r0 = 1
            r1.c = r0
            return r0
    }

    static boolean a(com.tkay.expressad.splash.c.e r0, boolean r1) {
            r0.b = r1
            return r1
    }

    private static com.tkay.expressad.splash.c.e b() {
            com.tkay.expressad.splash.c.e r0 = com.tkay.expressad.splash.c.e.a.a()
            return r0
    }

    public final void a() {
            r1 = this;
            r0 = 0
            r1.b = r0
            r1.c = r0
            return
    }

    public final void a(com.tkay.expressad.splash.view.TYSplashView r9, com.tkay.expressad.splash.c.e.c r10, com.tkay.expressad.splash.c.e.b r11) {
            r8 = this;
            if (r9 == 0) goto La4
            java.lang.String r0 = r10.c()
            java.lang.String r1 = r10.b()
            com.tkay.expressad.foundation.d.c r2 = r10.d()
            java.lang.String r3 = r10.a()
            boolean r4 = r10.e()
            int r10 = r10.f()
            com.tkay.expressad.splash.view.TYSplashWebview r5 = r9.getSplashWebview()
            if (r5 != 0) goto L21
            return
        L21:
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r6 = new com.tkay.expressad.splash.js.SplashJSBridgeImpl
            android.content.Context r7 = r9.getContext()
            r6.<init>(r7, r1, r0)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r2)
            r6.setCampaignList(r0)
            r6.setAllowSkip(r4)
            r6.setCountdownS(r10)
            r9.setSplashJSBridgeImpl(r6)
            java.lang.String r10 = r2.Z()
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            if (r10 == 0) goto L4d
            java.lang.String r10 = r2.aa()
            goto L51
        L4d:
            java.lang.String r10 = r2.Z()
        L51:
            java.lang.String r0 = r5.getRequestId()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r4 = "CampaignEx RequestId = "
            r1.<init>(r4)
            r1.append(r10)
            java.lang.String r4 = " WebView RequestId = "
            r1.append(r4)
            r1.append(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L85
            boolean r0 = r0.equals(r10)
            if (r0 == 0) goto L85
            boolean r0 = r8.b
            if (r0 != 0) goto L7b
            boolean r0 = r8.c
            if (r0 == 0) goto L85
        L7b:
            r10 = 1
            r9.setH5Ready(r10)
            if (r11 == 0) goto L84
            r11.a(r10)
        L84:
            return
        L85:
            r8.a()
            r5.setRequestId(r10)
            java.lang.System.currentTimeMillis()
            com.tkay.expressad.splash.c.e$1 r10 = new com.tkay.expressad.splash.c.e$1
            r10.<init>(r8, r11, r9, r2)
            r5.setWebViewListener(r10)
            boolean r10 = r5.isDestroyed()
            if (r10 != 0) goto La0
            r5.loadUrl(r3)
            return
        La0:
            r10 = 0
            r9.setH5Ready(r10)
        La4:
            return
    }
}

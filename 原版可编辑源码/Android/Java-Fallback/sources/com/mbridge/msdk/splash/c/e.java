package com.mbridge.msdk.splash.c;

public final class e {
    private boolean a;
    private boolean b;


    static class a {
        private static final com.mbridge.msdk.splash.c.e a = null;

        static {
                com.mbridge.msdk.splash.c.e r0 = new com.mbridge.msdk.splash.c.e
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.splash.c.e.a.a = r0
                return
        }

        static com.mbridge.msdk.splash.c.e a() {
                com.mbridge.msdk.splash.c.e r0 = com.mbridge.msdk.splash.c.e.a.a
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
        private com.mbridge.msdk.foundation.entity.CampaignEx c;
        private java.lang.String d;
        private boolean e;
        private int f;

        public c() {
                r0 = this;
                r0.<init>()
                return
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

        public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r1) {
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
                r0.e = r1
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

        public final com.mbridge.msdk.foundation.entity.CampaignEx d() {
                r1 = this;
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.c
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
            r1.a = r0
            r1.b = r0
            return
    }

    e(com.mbridge.msdk.splash.c.e.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static boolean a(com.mbridge.msdk.splash.c.e r0, boolean r1) {
            r0.a = r1
            return r1
    }

    static boolean b(com.mbridge.msdk.splash.c.e r0, boolean r1) {
            r0.b = r1
            return r1
    }

    public final void a() {
            r1 = this;
            r0 = 0
            r1.a = r0
            r1.b = r0
            return
    }

    public final void a(com.mbridge.msdk.splash.view.MBSplashView r18, com.mbridge.msdk.splash.c.e.c r19, com.mbridge.msdk.splash.c.e.b r20) {
            r17 = this;
            r8 = r17
            r9 = r18
            r2 = r20
            if (r9 == 0) goto L13d
            if (r19 == 0) goto L13d
            java.lang.String r10 = r19.c()
            java.lang.String r0 = r19.b()
            com.mbridge.msdk.foundation.entity.CampaignEx r11 = r19.d()
            java.lang.String r12 = r19.a()
            boolean r1 = r19.e()
            int r3 = r19.f()
            com.mbridge.msdk.splash.view.MBSplashWebview r13 = r18.getSplashWebview()
            if (r13 != 0) goto L29
            return
        L29:
            com.mbridge.msdk.splash.js.b r4 = new com.mbridge.msdk.splash.js.b
            android.content.Context r5 = r18.getContext()
            r4.<init>(r5, r0, r10)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r11)
            r4.a(r0)
            r4.a(r1)
            r4.b(r3)
            r9.setSplashJSBridgeImpl(r4)
            java.lang.String r0 = r11.getRequestId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L55
            java.lang.String r0 = r11.getRequestIdNotice()
            goto L59
        L55:
            java.lang.String r0 = r11.getRequestId()
        L59:
            java.lang.String r1 = r13.getRequestId()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "CampaignEx RequestId = "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r4 = " WebView RequestId = "
            r3.append(r4)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            java.lang.String r14 = "WebViewRenderManager"
            com.mbridge.msdk.foundation.tools.z.d(r14, r3)
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            if (r3 != 0) goto L99
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L99
            boolean r1 = r8.a
            if (r1 != 0) goto L8f
            boolean r1 = r8.b
            if (r1 == 0) goto L99
        L8f:
            r0 = 1
            r9.setH5Ready(r0)
            if (r2 == 0) goto L98
            r2.a(r0)
        L98:
            return
        L99:
            r17.a()
            r13.setRequestId(r0)
            com.mbridge.msdk.splash.a.b r0 = com.mbridge.msdk.splash.a.b.a()
            java.lang.String r1 = r11.getId()
            com.mbridge.msdk.splash.a.b r0 = r0.c(r1)
            java.lang.String r1 = r11.getRequestId()
            com.mbridge.msdk.splash.a.b r0 = r0.d(r1)
            java.lang.String r1 = r11.getRequestIdNotice()
            com.mbridge.msdk.splash.a.b r0 = r0.g(r1)
            com.mbridge.msdk.splash.a.b r0 = r0.b(r10)
            boolean r1 = r11.isBidCampaign()
            com.mbridge.msdk.splash.a.b r0 = r0.a(r1)
            if (r0 == 0) goto Lf3
            java.lang.String r1 = "2000067"
            r0.a(r1)
            com.mbridge.msdk.foundation.same.report.b r1 = com.mbridge.msdk.foundation.same.report.b.a()
            boolean r1 = r1.c()
            if (r1 == 0) goto Le4
            com.mbridge.msdk.foundation.same.report.b r1 = com.mbridge.msdk.foundation.same.report.b.a()
            java.lang.String r0 = r0.b()
            r1.a(r0)
            goto Lf3
        Le4:
            java.lang.String r0 = r0.b()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            com.mbridge.msdk.foundation.same.report.c.a(r0, r1, r10)
        Lf3:
            long r15 = java.lang.System.currentTimeMillis()
            com.mbridge.msdk.splash.c.e$1 r6 = new com.mbridge.msdk.splash.c.e$1
            r0 = r6
            r1 = r17
            r2 = r20
            r3 = r18
            r4 = r11
            r5 = r10
            r8 = r6
            r6 = r15
            r0.<init>(r1, r2, r3, r4, r5, r6)
            r13.setWebViewListener(r8)
            boolean r0 = r13.isDestoryed()
            if (r0 != 0) goto L128
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "======开始渲染："
            r0.append(r1)
            r0.append(r12)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.a(r14, r0)
            r13.loadUrl(r12)
            goto L13d
        L128:
            r0 = 0
            r9.setH5Ready(r0)
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            r6 = 3
            java.lang.String r3 = "webview had destory"
            r1 = r11
            r2 = r10
            r4 = r15
            com.mbridge.msdk.splash.e.a.a(r0, r1, r2, r3, r4, r6)
        L13d:
            return
    }
}

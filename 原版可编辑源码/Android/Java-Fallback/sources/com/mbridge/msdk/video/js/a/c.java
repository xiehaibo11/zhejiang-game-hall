package com.mbridge.msdk.video.js.a;

public class c implements com.mbridge.msdk.video.js.c {
    protected boolean a;
    protected boolean b;
    protected int c;
    protected int d;
    protected int e;
    protected int f;
    protected int g;
    protected int h;
    protected int i;
    protected java.lang.String j;
    protected com.mbridge.msdk.videocommon.d.c k;
    protected com.mbridge.msdk.click.b l;
    public com.mbridge.msdk.video.js.c.a m;
    protected int n;

    public static class a implements com.mbridge.msdk.video.js.c.a {
        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void a() {
                r2 = this;
                java.lang.String r0 = "DefaultJSCommon"
                java.lang.String r1 = "onInitSuccess"
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)
                return
        }

        @Override
        public void a(int r3, java.lang.String r4) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "onH5Error,code:"
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = "，msg:"
                r0.append(r3)
                r0.append(r4)
                java.lang.String r3 = r0.toString()
                java.lang.String r4 = "DefaultJSCommon"
                com.mbridge.msdk.foundation.tools.z.a(r4, r3)
                return
        }

        @Override
        public void a(boolean r2) {
                r1 = this;
                java.lang.String r2 = "DefaultJSCommon"
                java.lang.String r0 = "onStartInstall"
                com.mbridge.msdk.foundation.tools.z.a(r2, r0)
                return
        }

        @Override
        public void b() {
                r2 = this;
                java.lang.String r0 = "DefaultJSCommon"
                java.lang.String r1 = "videoLocationReady"
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)
                return
        }

        @Override
        public void onDismissLoading(com.mbridge.msdk.out.Campaign r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "onDismissLoading,campaign:"
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                java.lang.String r0 = "DefaultJSCommon"
                com.mbridge.msdk.foundation.tools.z.a(r0, r3)
                return
        }

        @Override
        public void onDownloadFinish(com.mbridge.msdk.out.Campaign r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "onDownloadFinish,campaign:"
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                java.lang.String r0 = "DefaultJSCommon"
                com.mbridge.msdk.foundation.tools.z.a(r0, r3)
                return
        }

        @Override
        public void onDownloadProgress(int r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "onDownloadProgress,progress:"
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                java.lang.String r0 = "DefaultJSCommon"
                com.mbridge.msdk.foundation.tools.z.a(r0, r3)
                return
        }

        @Override
        public void onDownloadStart(com.mbridge.msdk.out.Campaign r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "onDownloadStart,campaign:"
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                java.lang.String r0 = "DefaultJSCommon"
                com.mbridge.msdk.foundation.tools.z.a(r0, r3)
                return
        }

        @Override
        public void onFinishRedirection(com.mbridge.msdk.out.Campaign r3, java.lang.String r4) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "onFinishRedirection,campaign:"
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = ",url:"
                r0.append(r3)
                r0.append(r4)
                java.lang.String r3 = r0.toString()
                java.lang.String r4 = "DefaultJSCommon"
                com.mbridge.msdk.foundation.tools.z.a(r4, r3)
                return
        }

        @Override
        public boolean onInterceptDefaultLoadingDialog() {
                r2 = this;
                java.lang.String r0 = "DefaultJSCommon"
                java.lang.String r1 = "onInterceptDefaultLoadingDialog"
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)
                r0 = 0
                return r0
        }

        @Override
        public void onRedirectionFailed(com.mbridge.msdk.out.Campaign r3, java.lang.String r4) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "onFinishRedirection,campaign:"
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = ",url:"
                r0.append(r3)
                r0.append(r4)
                java.lang.String r3 = r0.toString()
                java.lang.String r4 = "DefaultJSCommon"
                com.mbridge.msdk.foundation.tools.z.a(r4, r3)
                return
        }

        @Override
        public void onShowLoading(com.mbridge.msdk.out.Campaign r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "onShowLoading,campaign:"
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                java.lang.String r0 = "DefaultJSCommon"
                com.mbridge.msdk.foundation.tools.z.a(r0, r3)
                return
        }

        @Override
        public void onStartRedirection(com.mbridge.msdk.out.Campaign r3, java.lang.String r4) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "onStartRedirection,campaign:"
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = ",url:"
                r0.append(r3)
                r0.append(r4)
                java.lang.String r3 = r0.toString()
                java.lang.String r4 = "DefaultJSCommon"
                com.mbridge.msdk.foundation.tools.z.a(r4, r3)
                return
        }
    }

    public static class b implements com.mbridge.msdk.video.js.c.a {
        private com.mbridge.msdk.video.js.c a;
        private com.mbridge.msdk.video.js.c.a b;

        public b(com.mbridge.msdk.video.js.c r1, com.mbridge.msdk.video.js.c.a r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        @Override
        public final void a() {
                r1 = this;
                com.mbridge.msdk.video.js.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.a()
            L7:
                return
        }

        @Override
        public final void a(int r2, java.lang.String r3) {
                r1 = this;
                com.mbridge.msdk.video.js.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.a(r2, r3)
            L7:
                return
        }

        @Override
        public final void a(boolean r2) {
                r1 = this;
                com.mbridge.msdk.video.js.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.a(r2)
            L7:
                return
        }

        @Override
        public final void b() {
                r1 = this;
                com.mbridge.msdk.video.js.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.b()
            L7:
                return
        }

        @Override
        public final void onDismissLoading(com.mbridge.msdk.out.Campaign r2) {
                r1 = this;
                com.mbridge.msdk.video.js.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.onDismissLoading(r2)
            L7:
                return
        }

        @Override
        public final void onDownloadFinish(com.mbridge.msdk.out.Campaign r2) {
                r1 = this;
                com.mbridge.msdk.video.js.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.onDownloadFinish(r2)
            L7:
                return
        }

        @Override
        public final void onDownloadProgress(int r2) {
                r1 = this;
                com.mbridge.msdk.video.js.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.onDownloadProgress(r2)
            L7:
                return
        }

        @Override
        public final void onDownloadStart(com.mbridge.msdk.out.Campaign r2) {
                r1 = this;
                com.mbridge.msdk.video.js.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.onDownloadStart(r2)
            L7:
                return
        }

        @Override
        public final void onFinishRedirection(com.mbridge.msdk.out.Campaign r2, java.lang.String r3) {
                r1 = this;
                com.mbridge.msdk.video.js.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.onFinishRedirection(r2, r3)
            L7:
                com.mbridge.msdk.video.js.c r2 = r1.a
                if (r2 == 0) goto Le
                r2.e()
            Le:
                return
        }

        @Override
        public final boolean onInterceptDefaultLoadingDialog() {
                r1 = this;
                com.mbridge.msdk.video.js.c$a r0 = r1.b
                if (r0 == 0) goto Lc
                boolean r0 = r0.onInterceptDefaultLoadingDialog()
                if (r0 == 0) goto Lc
                r0 = 1
                goto Ld
            Lc:
                r0 = 0
            Ld:
                return r0
        }

        @Override
        public final void onRedirectionFailed(com.mbridge.msdk.out.Campaign r2, java.lang.String r3) {
                r1 = this;
                com.mbridge.msdk.video.js.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.onRedirectionFailed(r2, r3)
            L7:
                com.mbridge.msdk.video.js.c r2 = r1.a
                if (r2 == 0) goto Le
                r2.e()
            Le:
                return
        }

        @Override
        public final void onShowLoading(com.mbridge.msdk.out.Campaign r2) {
                r1 = this;
                com.mbridge.msdk.video.js.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.onShowLoading(r2)
            L7:
                return
        }

        @Override
        public final void onStartRedirection(com.mbridge.msdk.out.Campaign r2, java.lang.String r3) {
                r1 = this;
                com.mbridge.msdk.video.js.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.onStartRedirection(r2, r3)
            L7:
                return
        }
    }

    public c() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.b = r0
            r1.c = r0
            r1.d = r0
            r1.e = r0
            r1.f = r0
            r1.g = r0
            r0 = 1
            r1.h = r0
            r0 = -1
            r1.i = r0
            com.mbridge.msdk.video.js.a.c$a r0 = new com.mbridge.msdk.video.js.a.c$a
            r0.<init>()
            r1.m = r0
            r0 = 2
            r1.n = r0
            return
    }

    @Override
    public final int a() {
            r1 = this;
            int r0 = r1.f
            return r0
    }

    @Override
    public final void a(int r1) {
            r0 = this;
            r0.n = r1
            return
    }

    @Override
    public void a(int r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "statistics,type:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = ",json:"
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "DefaultJSCommon"
            com.mbridge.msdk.foundation.tools.z.a(r4, r3)
            return
    }

    @Override
    public void a(android.app.Activity r2) {
            r1 = this;
            java.lang.String r2 = "DefaultJSCommon"
            java.lang.String r0 = "setActivity "
            com.mbridge.msdk.foundation.tools.z.a(r2, r0)
            return
    }

    @Override
    public void a(android.content.Context r2) {
            r1 = this;
            java.lang.String r2 = "DefaultJSCommon"
            java.lang.String r0 = "setViewContext "
            com.mbridge.msdk.foundation.tools.z.a(r2, r0)
            return
    }

    @Override
    public void a(com.mbridge.msdk.video.bt.module.a.b r2) {
            r1 = this;
            java.lang.String r2 = "DefaultJSCommon"
            java.lang.String r0 = "setInstallDialogCallback "
            com.mbridge.msdk.foundation.tools.z.a(r2, r0)
            return
    }

    @Override
    public final void a(com.mbridge.msdk.video.js.c.a r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setTrackingListener:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "DefaultJSCommon"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
            r2.m = r3
            return
    }

    @Override
    public final void a(com.mbridge.msdk.videocommon.d.c r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setSetting:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "DefaultJSCommon"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
            r2.k = r3
            return
    }

    @Override
    public final void a(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setUnitId:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "DefaultJSCommon"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
            r2.j = r3
            return
    }

    @Override
    public final void a(boolean r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setIsShowingTransparent:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "DefaultJSCommon"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
            r2.b = r3
            return
    }

    @Override
    public final int b() {
            r1 = this;
            int r0 = r1.g
            return r0
    }

    @Override
    public final void b(int r1) {
            r0 = this;
            r0.d = r1
            return
    }

    @Override
    public void b(java.lang.String r2) {
            r1 = this;
            java.lang.String r2 = "DefaultJSCommon"
            java.lang.String r0 = "setNotchArea"
            com.mbridge.msdk.foundation.tools.z.a(r2, r0)
            return
    }

    @Override
    public final void b(boolean r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    public final void c(int r1) {
            r0 = this;
            r0.c = r1
            return
    }

    @Override
    public final boolean c() {
            r1 = this;
            boolean r0 = r1.a
            return r0
    }

    @Override
    public void click(int r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "click:type"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = ",pt:"
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "DefaultJSCommon"
            com.mbridge.msdk.foundation.tools.z.a(r4, r3)
            return
    }

    @Override
    public java.lang.String d() {
            r2 = this;
            java.lang.String r0 = "DefaultJSCommon"
            java.lang.String r1 = "init"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            java.lang.String r0 = "{}"
            return r0
    }

    @Override
    public final void d(int r1) {
            r0 = this;
            r0.e = r1
            return
    }

    @Override
    public void e() {
            r2 = this;
            java.lang.String r0 = "DefaultJSCommon"
            java.lang.String r1 = "finish"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            return
    }

    @Override
    public final void e(int r1) {
            r0 = this;
            r0.f = r1
            return
    }

    @Override
    public final void f() {
            r2 = this;
            java.lang.String r0 = "DefaultJSCommon"
            java.lang.String r1 = "release"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            com.mbridge.msdk.click.b r0 = r2.l
            if (r0 == 0) goto L1a
            r1 = 0
            r0.a(r1)
            com.mbridge.msdk.click.b r0 = r2.l
            r1 = 0
            r0.a(r1)
            com.mbridge.msdk.click.b r0 = r2.l
            r0.a()
        L1a:
            return
    }

    @Override
    public final void f(int r1) {
            r0 = this;
            r0.g = r1
            return
    }

    @Override
    public void g() {
            r0 = this;
            return
    }

    @Override
    public final void g(int r1) {
            r0 = this;
            r0.i = r1
            return
    }

    @Override
    public final int h() {
            r1 = this;
            int r0 = r1.i
            return r0
    }

    @Override
    public java.lang.String h(int r2) {
            r1 = this;
            java.lang.String r2 = "DefaultJSCommon"
            java.lang.String r0 = "getSDKInfo"
            com.mbridge.msdk.foundation.tools.z.a(r2, r0)
            java.lang.String r2 = "{}"
            return r2
    }

    @Override
    public void handlerH5Exception(int r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "handlerH5Exception,code="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = ",msg:"
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "DefaultJSCommon"
            com.mbridge.msdk.foundation.tools.z.a(r4, r3)
            return
    }

    @Override
    public final int i() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "getAlertDialogRole "
            r0.append(r1)
            int r1 = r2.h
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "DefaultJSCommon"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
            int r0 = r2.h
            return r0
    }

    @Override
    public final void i(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setAlertDialogRole "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "DefaultJSCommon"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
            r2.h = r3
            return
    }

    @Override
    public java.lang.String j() {
            r2 = this;
            java.lang.String r0 = "DefaultJSCommon"
            java.lang.String r1 = "getNotchArea"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            r0 = 0
            return r0
    }

    public final int k() {
            r1 = this;
            int r0 = r1.c
            if (r0 != 0) goto Lb
            boolean r0 = r1.b
            if (r0 == 0) goto Lb
            r0 = 1
            r1.c = r0
        Lb:
            int r0 = r1.c
            return r0
    }

    public final int l() {
            r1 = this;
            int r0 = r1.d
            if (r0 != 0) goto Lb
            boolean r0 = r1.b
            if (r0 == 0) goto Lb
            r0 = 1
            r1.d = r0
        Lb:
            int r0 = r1.d
            return r0
    }

    public final int m() {
            r1 = this;
            int r0 = r1.e
            if (r0 != 0) goto Lb
            boolean r0 = r1.b
            if (r0 == 0) goto Lb
            r0 = 1
            r1.e = r0
        Lb:
            int r0 = r1.e
            return r0
    }

    public final boolean n() {
            r1 = this;
            boolean r0 = r1.b
            return r0
    }
}

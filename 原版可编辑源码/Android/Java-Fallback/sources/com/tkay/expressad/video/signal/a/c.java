package com.tkay.expressad.video.signal.a;

public class c implements com.tkay.expressad.video.signal.c {
    protected static final java.lang.String d = "DefaultJSCommon";
    protected boolean e;
    protected boolean f;
    protected int g;
    protected int h;
    protected int i;
    protected int j;
    protected int k;
    protected int l;
    protected int m;
    protected java.lang.String n;
    protected com.tkay.expressad.videocommon.e.d o;
    protected com.tkay.expressad.videocommon.c.c p;
    protected com.tkay.expressad.a.a q;
    public com.tkay.expressad.video.signal.c.a r;
    protected int s;

    public static class a implements com.tkay.expressad.video.signal.c.a {
        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void a(int r3, java.lang.String r4) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "onH5Error,code:"
                r0.<init>(r1)
                r0.append(r3)
                java.lang.String r3 = "，msg:"
                r0.append(r3)
                r0.append(r4)
                return
        }

        @Override
        public void a(com.tkay.expressad.foundation.d.c r3, java.lang.String r4) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "onStartRedirection,campaign:"
                r0.<init>(r1)
                r0.append(r3)
                java.lang.String r3 = ",url:"
                r0.append(r3)
                r0.append(r4)
                return
        }

        @Override
        public void a(com.tkay.expressad.foundation.d.c r1, boolean r2) {
                r0 = this;
                return
        }

        @Override
        public final void a(com.tkay.expressad.out.d r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "onShowLoading,campaign:"
                r0.<init>(r1)
                r0.append(r3)
                return
        }

        @Override
        public void a(com.tkay.expressad.out.d r3, java.lang.String r4) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "onFinishRedirection,campaign:"
                r0.<init>(r1)
                r0.append(r3)
                java.lang.String r3 = ",url:"
                r0.append(r3)
                r0.append(r4)
                return
        }

        @Override
        public final boolean a() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public final void b() {
                r0 = this;
                return
        }

        @Override
        public final void b(com.tkay.expressad.out.d r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "onDismissLoading,campaign:"
                r0.<init>(r1)
                r0.append(r3)
                return
        }

        @Override
        public void b(com.tkay.expressad.out.d r3, java.lang.String r4) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "onFinishRedirection,campaign:"
                r0.<init>(r1)
                r0.append(r3)
                java.lang.String r3 = ",url:"
                r0.append(r3)
                r0.append(r4)
                return
        }

        @Override
        public void c() {
                r0 = this;
                return
        }

        @Override
        public final void c(com.tkay.expressad.out.d r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "onDownloadStart,campaign:"
                r0.<init>(r1)
                r0.append(r3)
                return
        }

        @Override
        public void d() {
                r0 = this;
                return
        }

        @Override
        public final void d(com.tkay.expressad.out.d r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "onDownloadFinish,campaign:"
                r0.<init>(r1)
                r0.append(r3)
                return
        }
    }

    public static class b implements com.tkay.expressad.video.signal.c.a {
        private com.tkay.expressad.video.signal.c a;
        private com.tkay.expressad.video.signal.c.a b;

        public b(com.tkay.expressad.video.signal.c r1, com.tkay.expressad.video.signal.c.a r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        @Override
        public final void a(int r2, java.lang.String r3) {
                r1 = this;
                com.tkay.expressad.video.signal.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.a(r2, r3)
            L7:
                return
        }

        @Override
        public final void a(com.tkay.expressad.foundation.d.c r2, java.lang.String r3) {
                r1 = this;
                com.tkay.expressad.video.signal.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.a(r2, r3)
            L7:
                return
        }

        @Override
        public final void a(com.tkay.expressad.foundation.d.c r2, boolean r3) {
                r1 = this;
                com.tkay.expressad.video.signal.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.a(r2, r3)
            L7:
                return
        }

        @Override
        public final void a(com.tkay.expressad.out.d r2) {
                r1 = this;
                com.tkay.expressad.video.signal.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.a(r2)
            L7:
                return
        }

        @Override
        public final void a(com.tkay.expressad.out.d r2, java.lang.String r3) {
                r1 = this;
                com.tkay.expressad.video.signal.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.a(r2, r3)
            L7:
                com.tkay.expressad.video.signal.c r2 = r1.a
                if (r2 == 0) goto Le
                r2.j()
            Le:
                return
        }

        @Override
        public final boolean a() {
                r1 = this;
                com.tkay.expressad.video.signal.c$a r0 = r1.b
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
        public final void b() {
                r0 = this;
                return
        }

        @Override
        public final void b(com.tkay.expressad.out.d r2) {
                r1 = this;
                com.tkay.expressad.video.signal.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.b(r2)
            L7:
                return
        }

        @Override
        public final void b(com.tkay.expressad.out.d r2, java.lang.String r3) {
                r1 = this;
                com.tkay.expressad.video.signal.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.b(r2, r3)
            L7:
                com.tkay.expressad.video.signal.c r2 = r1.a
                if (r2 == 0) goto Le
                r2.j()
            Le:
                return
        }

        @Override
        public final void c() {
                r1 = this;
                com.tkay.expressad.video.signal.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.c()
            L7:
                return
        }

        @Override
        public final void c(com.tkay.expressad.out.d r2) {
                r1 = this;
                com.tkay.expressad.video.signal.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.c(r2)
            L7:
                return
        }

        @Override
        public final void d() {
                r1 = this;
                com.tkay.expressad.video.signal.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.d()
            L7:
                return
        }

        @Override
        public final void d(com.tkay.expressad.out.d r2) {
                r1 = this;
                com.tkay.expressad.video.signal.c$a r0 = r1.b
                if (r0 == 0) goto L7
                r0.d(r2)
            L7:
                return
        }
    }

    public c() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.e = r0
            r1.f = r0
            r1.g = r0
            r1.h = r0
            r1.i = r0
            r1.j = r0
            r1.k = r0
            r0 = 1
            r1.l = r0
            r0 = -1
            r1.m = r0
            com.tkay.expressad.video.signal.a.c$a r0 = new com.tkay.expressad.video.signal.a.c$a
            r0.<init>()
            r1.r = r0
            r0 = 2
            r1.s = r0
            return
    }

    private void a(com.tkay.expressad.videocommon.c.c r1) {
            r0 = this;
            r0.p = r1
            return
    }

    @Override
    public final void a(int r1) {
            r0 = this;
            r0.s = r1
            return
    }

    @Override
    public void a(int r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "statistics,type:"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = ",json:"
            r0.append(r3)
            r0.append(r4)
            return
    }

    @Override
    public void a(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public void a(android.content.Context r1) {
            r0 = this;
            return
    }

    @Override
    public final void a(com.tkay.expressad.video.signal.c.a r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "setTrackingListener:"
            r0.<init>(r1)
            r0.append(r3)
            r2.r = r3
            return
    }

    @Override
    public final void a(com.tkay.expressad.videocommon.e.d r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "setSetting:"
            r0.<init>(r1)
            r0.append(r3)
            r2.o = r3
            return
    }

    @Override
    public final void a(java.lang.String r1) {
            r0 = this;
            r0.n = r1
            return
    }

    @Override
    public final void a(boolean r1) {
            r0 = this;
            r0.f = r1
            return
    }

    @Override
    public final boolean a() {
            r1 = this;
            boolean r0 = r1.f
            return r0
    }

    @Override
    public final int b() {
            r1 = this;
            int r0 = r1.h
            if (r0 != 0) goto Lb
            boolean r0 = r1.f
            if (r0 == 0) goto Lb
            r0 = 1
            r1.h = r0
        Lb:
            int r0 = r1.h
            return r0
    }

    @Override
    public final void b(int r1) {
            r0 = this;
            r0.h = r1
            return
    }

    @Override
    public void b(java.lang.String r1) {
            r0 = this;
            return
    }

    @Override
    public final int c() {
            r1 = this;
            int r0 = r1.g
            if (r0 != 0) goto Lb
            boolean r0 = r1.f
            if (r0 == 0) goto Lb
            r0 = 1
            r1.g = r0
        Lb:
            int r0 = r1.g
            return r0
    }

    @Override
    public final void c(int r1) {
            r0 = this;
            r0.g = r1
            return
    }

    @Override
    public void click(int r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "click:type"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = ",pt:"
            r0.append(r3)
            r0.append(r4)
            return
    }

    @Override
    public final int d() {
            r1 = this;
            int r0 = r1.i
            if (r0 != 0) goto Lb
            boolean r0 = r1.f
            if (r0 == 0) goto Lb
            r0 = 1
            r1.i = r0
        Lb:
            int r0 = r1.i
            return r0
    }

    @Override
    public final void d(int r1) {
            r0 = this;
            r0.i = r1
            return
    }

    @Override
    public final int e() {
            r1 = this;
            int r0 = r1.j
            return r0
    }

    @Override
    public final void e(int r1) {
            r0 = this;
            r0.j = r1
            return
    }

    @Override
    public final int f() {
            r1 = this;
            int r0 = r1.k
            return r0
    }

    @Override
    public final void f(int r1) {
            r0 = this;
            r0.k = r1
            return
    }

    @Override
    public final void g(int r1) {
            r0 = this;
            r0.m = r1
            return
    }

    @Override
    public final boolean g() {
            r1 = this;
            boolean r0 = r1.e
            return r0
    }

    @Override
    public java.lang.String h(int r1) {
            r0 = this;
            java.lang.String r1 = "{}"
            return r1
    }

    @Override
    public final void h() {
            r1 = this;
            r0 = 1
            r1.e = r0
            return
    }

    @Override
    public void handlerH5Exception(int r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "handlerH5Exception,code="
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = ",msg:"
            r0.append(r3)
            r0.append(r4)
            return
    }

    @Override
    public java.lang.String i() {
            r1 = this;
            java.lang.String r0 = "{}"
            return r0
    }

    @Override
    public final void i(int r1) {
            r0 = this;
            r0.l = r1
            return
    }

    @Override
    public void j() {
            r0 = this;
            return
    }

    @Override
    public final void k() {
            r2 = this;
            com.tkay.expressad.a.a r0 = r2.q
            if (r0 == 0) goto L12
            r0.a()
            com.tkay.expressad.a.a r0 = r2.q
            r1 = 0
            r0.a(r1)
            com.tkay.expressad.a.a r0 = r2.q
            r0.b()
        L12:
            return
    }

    @Override
    public void l() {
            r0 = this;
            return
    }

    @Override
    public final int m() {
            r1 = this;
            int r0 = r1.m
            return r0
    }

    @Override
    public final int n() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getAlertDialogRole "
            r0.<init>(r1)
            int r1 = r2.l
            r0.append(r1)
            int r0 = r2.l
            return r0
    }

    @Override
    public java.lang.String o() {
            r1 = this;
            r0 = 0
            return r0
    }
}

package com.tkay.expressad.a;

public class g {
    public static long a = 0;
    private static final java.lang.String d = null;
    private static final int p = 1;
    private static final int q = 2;
    private static final int r = 0;
    boolean b;
    boolean c;
    private int e;
    private int f;
    private android.os.Handler g;
    private com.tkay.expressad.d.a h;
    private com.tkay.expressad.a.g.a i;
    private java.lang.String j;
    private java.lang.String k;
    private android.webkit.WebView l;
    private boolean m;
    private java.lang.String n;
    private int o;
    private boolean s;
    private boolean t;
    private final java.lang.Runnable u;
    private final java.lang.Runnable v;






    interface a {
        void a(java.lang.String r1, java.lang.String r2);

        void a(java.lang.String r1, java.lang.String r2, java.lang.String r3);

        boolean a();

        boolean a(java.lang.String r1);

        boolean b(java.lang.String r1);
    }

    static {
            java.lang.Class<com.tkay.expressad.a.g> r0 = com.tkay.expressad.a.g.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.a.g.d = r0
            r0 = 0
            com.tkay.expressad.a.g.a = r0
            return
    }

    public g(boolean r3) {
            r2 = this;
            r2.<init>()
            r0 = 15000(0x3a98, float:2.102E-41)
            r2.e = r0
            r0 = 3000(0xbb8, float:4.204E-42)
            r2.f = r0
            r0 = 0
            r2.s = r0
            com.tkay.expressad.a.g$4 r0 = new com.tkay.expressad.a.g$4
            r0.<init>(r2)
            r2.u = r0
            com.tkay.expressad.a.g$5 r0 = new com.tkay.expressad.a.g$5
            r0.<init>(r2)
            r2.v = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.g = r0
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            r0.e()
            com.tkay.expressad.d.a r0 = com.tkay.expressad.d.b.b()
            r2.h = r0
            if (r0 != 0) goto L42
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.d.a r0 = com.tkay.expressad.d.b.c()
            r2.h = r0
        L42:
            com.tkay.expressad.d.a r0 = r2.h
            boolean r0 = r0.v()
            r2.m = r0
            if (r3 == 0) goto L5f
            com.tkay.expressad.d.a r3 = r2.h
            long r0 = r3.q()
            int r3 = (int) r0
            r2.e = r3
            com.tkay.expressad.d.a r3 = r2.h
            long r0 = r3.q()
            int r3 = (int) r0
            r2.f = r3
            return
        L5f:
            com.tkay.expressad.d.a r3 = r2.h
            long r0 = r3.r()
            int r3 = (int) r0
            r2.e = r3
            com.tkay.expressad.d.a r3 = r2.h
            long r0 = r3.r()
            int r3 = (int) r0
            r2.f = r3
            return
    }

    static int a(com.tkay.expressad.a.g r0, int r1) {
            r0.o = r1
            return r1
    }

    static java.lang.String a() {
            java.lang.String r0 = com.tkay.expressad.a.g.d
            return r0
    }

    static java.lang.String a(com.tkay.expressad.a.g r0) {
            java.lang.String r0 = r0.j
            return r0
    }

    static java.lang.String a(com.tkay.expressad.a.g r0, java.lang.String r1) {
            r0.j = r1
            return r1
    }

    private void a(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            android.webkit.WebView r0 = new android.webkit.WebView
            r0.<init>(r2)
            r1.l = r0
            android.webkit.WebSettings r2 = r0.getSettings()
            r0 = 1
            r2.setJavaScriptEnabled(r0)
            android.webkit.WebView r2 = r1.l
            android.webkit.WebSettings r2 = r2.getSettings()
            r0 = 2
            r2.setCacheMode(r0)
            android.webkit.WebView r2 = r1.l
            android.webkit.WebSettings r2 = r2.getSettings()
            r0 = 0
            r2.setLoadsImagesAutomatically(r0)
            android.webkit.WebView r2 = r1.l
            com.tkay.expressad.a.g$2 r0 = new com.tkay.expressad.a.g$2
            r0.<init>(r1, r4, r3)
            r2.setWebViewClient(r0)
            com.tkay.expressad.a.g$3 r2 = new com.tkay.expressad.a.g$3
            r2.<init>(r1)
            android.webkit.WebView r3 = r1.l
            r3.setWebChromeClient(r2)
            return
    }

    static void a(com.tkay.expressad.a.g r0, java.lang.String r1, java.lang.String r2, android.content.Context r3, java.lang.String r4) {
            r0.a(r1, r2, r3, r4)
            return
    }

    private void a(java.lang.String r7, java.lang.String r8, android.content.Context r9, java.lang.String r10) {
            r6 = this;
            r6.a(r9, r7, r8)     // Catch: java.lang.Throwable -> L52
            java.lang.String r7 = r6.k     // Catch: java.lang.Throwable -> L52
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L52
            if (r7 != 0) goto L2a
            android.webkit.WebView r7 = r6.l     // Catch: java.lang.Throwable -> L52
            android.webkit.WebSettings r7 = r7.getSettings()     // Catch: java.lang.Throwable -> L52
            java.lang.String r8 = "utf-8"
            r7.setDefaultTextEncodingName(r8)     // Catch: java.lang.Throwable -> L52
            r7 = 2000(0x7d0, float:2.803E-42)
            r6.f = r7     // Catch: java.lang.Throwable -> L52
            r6.e = r7     // Catch: java.lang.Throwable -> L52
            android.webkit.WebView r0 = r6.l     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = r6.k     // Catch: java.lang.Throwable -> L52
            java.lang.String r3 = "*/*"
            java.lang.String r4 = "utf-8"
            r1 = r10
            r5 = r10
            r0.loadDataWithBaseURL(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L52
            return
        L2a:
            boolean r7 = r6.m     // Catch: java.lang.Throwable -> L52
            if (r7 == 0) goto L4c
            java.util.HashMap r7 = new java.util.HashMap     // Catch: java.lang.Throwable -> L52
            r7.<init>()     // Catch: java.lang.Throwable -> L52
            android.webkit.WebView r8 = r6.l     // Catch: java.lang.Throwable -> L52
            java.lang.String r8 = r8.getUrl()     // Catch: java.lang.Throwable -> L52
            if (r8 == 0) goto L46
            java.lang.String r8 = "Referer"
            android.webkit.WebView r9 = r6.l     // Catch: java.lang.Throwable -> L52
            java.lang.String r9 = r9.getUrl()     // Catch: java.lang.Throwable -> L52
            r7.put(r8, r9)     // Catch: java.lang.Throwable -> L52
        L46:
            android.webkit.WebView r8 = r6.l     // Catch: java.lang.Throwable -> L52
            r8.loadUrl(r10, r7)     // Catch: java.lang.Throwable -> L52
            return
        L4c:
            android.webkit.WebView r7 = r6.l     // Catch: java.lang.Throwable -> L52
            r7.loadUrl(r10)     // Catch: java.lang.Throwable -> L52
            return
        L52:
            r7 = move-exception
            com.tkay.expressad.a.g$a r8 = r6.i     // Catch: java.lang.Exception -> L64
            if (r8 == 0) goto L64
            com.tkay.expressad.a.g$a r8 = r6.i     // Catch: java.lang.Exception -> L64
            java.lang.String r9 = r6.j     // Catch: java.lang.Exception -> L64
            java.lang.String r7 = r7.getMessage()     // Catch: java.lang.Exception -> L64
            java.lang.String r10 = r6.n     // Catch: java.lang.Exception -> L64
            r8.a(r9, r7, r10)     // Catch: java.lang.Exception -> L64
        L64:
            return
    }

    private void a(java.lang.String r9, java.lang.String r10, java.lang.String r11, android.content.Context r12) {
            r8 = this;
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            java.lang.Thread r1 = r1.getThread()
            if (r0 != r1) goto L14
            java.lang.String r9 = r8.j
            r8.a(r10, r11, r12, r9)
            return
        L14:
            android.os.Handler r0 = r8.g
            com.tkay.expressad.a.g$1 r7 = new com.tkay.expressad.a.g$1
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6)
            r0.post(r7)
            return
    }

    private void b() {
            r4 = this;
            java.lang.String r0 = com.tkay.expressad.a.g.d
            monitor-enter(r0)
            r4.f()     // Catch: java.lang.Throwable -> L13
            com.tkay.expressad.a.g$a r1 = r4.i     // Catch: java.lang.Throwable -> L13
            if (r1 == 0) goto L13
            com.tkay.expressad.a.g$a r1 = r4.i     // Catch: java.lang.Throwable -> L13
            java.lang.String r2 = r4.j     // Catch: java.lang.Throwable -> L13
            java.lang.String r3 = r4.n     // Catch: java.lang.Throwable -> L13
            r1.a(r2, r3)     // Catch: java.lang.Throwable -> L13
        L13:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            return
        L15:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    static boolean b(com.tkay.expressad.a.g r0) {
            boolean r0 = r0.t
            return r0
    }

    private void c() {
            r4 = this;
            java.lang.String r0 = com.tkay.expressad.a.g.d
            monitor-enter(r0)
            r4.f()     // Catch: java.lang.Throwable -> L18
            android.webkit.WebView r1 = r4.l     // Catch: java.lang.Throwable -> L18
            r1.destroy()     // Catch: java.lang.Throwable -> L18
            com.tkay.expressad.a.g$a r1 = r4.i     // Catch: java.lang.Throwable -> L18
            if (r1 == 0) goto L18
            com.tkay.expressad.a.g$a r1 = r4.i     // Catch: java.lang.Throwable -> L18
            java.lang.String r2 = r4.j     // Catch: java.lang.Throwable -> L18
            java.lang.String r3 = r4.n     // Catch: java.lang.Throwable -> L18
            r1.a(r2, r3)     // Catch: java.lang.Throwable -> L18
        L18:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            return
        L1a:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    static void c(com.tkay.expressad.a.g r3) {
            java.lang.String r0 = com.tkay.expressad.a.g.d
            monitor-enter(r0)
            r3.f()     // Catch: java.lang.Throwable -> L13
            com.tkay.expressad.a.g$a r1 = r3.i     // Catch: java.lang.Throwable -> L13
            if (r1 == 0) goto L13
            com.tkay.expressad.a.g$a r1 = r3.i     // Catch: java.lang.Throwable -> L13
            java.lang.String r2 = r3.j     // Catch: java.lang.Throwable -> L13
            java.lang.String r3 = r3.n     // Catch: java.lang.Throwable -> L13
            r1.a(r2, r3)     // Catch: java.lang.Throwable -> L13
        L13:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            return
        L15:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    static com.tkay.expressad.a.g.a d(com.tkay.expressad.a.g r0) {
            com.tkay.expressad.a.g$a r0 = r0.i
            return r0
    }

    private void d() {
            r4 = this;
            r4.h()
            android.os.Handler r0 = r4.g
            java.lang.Runnable r1 = r4.v
            int r2 = r4.e
            long r2 = (long) r2
            r0.postDelayed(r1, r2)
            return
    }

    private void e() {
            r4 = this;
            r4.j()
            android.os.Handler r0 = r4.g
            java.lang.Runnable r1 = r4.u
            int r2 = r4.f
            long r2 = (long) r2
            r0.postDelayed(r1, r2)
            return
    }

    static boolean e(com.tkay.expressad.a.g r1) {
            r0 = 1
            r1.t = r0
            return r0
    }

    private void f() {
            r0 = this;
            r0.j()
            r0.h()
            return
    }

    static void f(com.tkay.expressad.a.g r4) {
            r4.h()
            android.os.Handler r0 = r4.g
            java.lang.Runnable r1 = r4.v
            int r4 = r4.e
            long r2 = (long) r4
            r0.postDelayed(r1, r2)
            return
    }

    private void g() {
            r4 = this;
            android.os.Handler r0 = r4.g
            java.lang.Runnable r1 = r4.v
            int r2 = r4.e
            long r2 = (long) r2
            r0.postDelayed(r1, r2)
            return
    }

    static void g(com.tkay.expressad.a.g r0) {
            r0.j()
            return
    }

    private void h() {
            r2 = this;
            android.os.Handler r0 = r2.g
            java.lang.Runnable r1 = r2.v
            r0.removeCallbacks(r1)
            return
    }

    static void h(com.tkay.expressad.a.g r0) {
            r0.h()
            return
    }

    private void i() {
            r4 = this;
            android.os.Handler r0 = r4.g
            java.lang.Runnable r1 = r4.u
            int r2 = r4.f
            long r2 = (long) r2
            r0.postDelayed(r1, r2)
            return
    }

    static boolean i(com.tkay.expressad.a.g r0) {
            boolean r0 = r0.m
            return r0
    }

    static android.webkit.WebView j(com.tkay.expressad.a.g r0) {
            android.webkit.WebView r0 = r0.l
            return r0
    }

    private void j() {
            r2 = this;
            android.os.Handler r0 = r2.g
            java.lang.Runnable r1 = r2.u
            r0.removeCallbacks(r1)
            return
    }

    static void k(com.tkay.expressad.a.g r0) {
            r0.f()
            return
    }

    static java.lang.String l(com.tkay.expressad.a.g r0) {
            java.lang.String r0 = r0.n
            return r0
    }

    static void m(com.tkay.expressad.a.g r4) {
            r4.j()
            android.os.Handler r0 = r4.g
            java.lang.Runnable r1 = r4.u
            int r4 = r4.f
            long r2 = (long) r4
            r0.postDelayed(r1, r2)
            return
    }

    static boolean n(com.tkay.expressad.a.g r1) {
            r0 = 1
            r1.s = r0
            return r0
    }

    static int o(com.tkay.expressad.a.g r0) {
            int r0 = r0.f
            return r0
    }

    static void p(com.tkay.expressad.a.g r3) {
            java.lang.String r0 = com.tkay.expressad.a.g.d
            monitor-enter(r0)
            r3.f()     // Catch: java.lang.Throwable -> L18
            android.webkit.WebView r1 = r3.l     // Catch: java.lang.Throwable -> L18
            r1.destroy()     // Catch: java.lang.Throwable -> L18
            com.tkay.expressad.a.g$a r1 = r3.i     // Catch: java.lang.Throwable -> L18
            if (r1 == 0) goto L18
            com.tkay.expressad.a.g$a r1 = r3.i     // Catch: java.lang.Throwable -> L18
            java.lang.String r2 = r3.j     // Catch: java.lang.Throwable -> L18
            java.lang.String r3 = r3.n     // Catch: java.lang.Throwable -> L18
            r1.a(r2, r3)     // Catch: java.lang.Throwable -> L18
        L18:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            return
        L1a:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    static int q(com.tkay.expressad.a.g r0) {
            int r0 = r0.e
            return r0
    }

    public final void a(java.lang.String r1, java.lang.String r2, java.lang.String r3, android.content.Context r4, java.lang.String r5, com.tkay.expressad.a.g.a r6) {
            r0 = this;
            if (r6 == 0) goto La
            r0.j = r5
            r0.i = r6
            r0.a(r1, r2, r3, r4)
            return
        La:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "OverrideUrlLoadingListener can not be null"
            r1.<init>(r2)
            throw r1
    }

    public final void a(java.lang.String r1, java.lang.String r2, java.lang.String r3, android.content.Context r4, java.lang.String r5, java.lang.String r6, com.tkay.expressad.a.g.a r7) {
            r0 = this;
            if (r7 == 0) goto Lc
            r0.k = r6
            r0.j = r5
            r0.i = r7
            r0.a(r1, r2, r3, r4)
            return
        Lc:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "OverrideUrlLoadingListener can not be null"
            r1.<init>(r2)
            throw r1
    }
}

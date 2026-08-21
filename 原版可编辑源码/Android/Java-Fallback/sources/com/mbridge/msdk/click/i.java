package com.mbridge.msdk.click;

public class i {
    public static long a;
    private static final java.lang.String d = null;
    boolean b;
    boolean c;
    private int e;
    private int f;
    private android.os.Handler g;
    private com.mbridge.msdk.c.a h;
    private com.mbridge.msdk.click.i.a i;
    private java.lang.String j;
    private java.lang.String k;
    private android.webkit.WebView l;
    private boolean m;
    private java.lang.String n;
    private int o;
    private boolean p;
    private boolean q;
    private final java.lang.Runnable r;
    private final java.lang.Runnable s;






    interface a {
        void a(int r1, java.lang.String r2, java.lang.String r3, java.lang.String r4);

        void a(java.lang.String r1, boolean r2, java.lang.String r3);

        boolean a(java.lang.String r1);

        boolean b(java.lang.String r1);

        boolean c(java.lang.String r1);
    }

    static {
            java.lang.Class<com.mbridge.msdk.click.i> r0 = com.mbridge.msdk.click.i.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.click.i.d = r0
            r0 = 0
            com.mbridge.msdk.click.i.a = r0
            return
    }

    public i(boolean r3) {
            r2 = this;
            r2.<init>()
            r0 = 15000(0x3a98, float:2.102E-41)
            r2.e = r0
            r0 = 3000(0xbb8, float:4.204E-42)
            r2.f = r0
            r0 = 0
            r2.p = r0
            com.mbridge.msdk.click.i$4 r0 = new com.mbridge.msdk.click.i$4
            r0.<init>(r2)
            r2.r = r0
            com.mbridge.msdk.click.i$5 r0 = new com.mbridge.msdk.click.i$5
            r0.<init>(r2)
            r2.s = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.g = r0
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            com.mbridge.msdk.c.a r0 = r0.b(r1)
            r2.h = r0
            if (r0 != 0) goto L45
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r0 = r0.b()
            r2.h = r0
        L45:
            com.mbridge.msdk.c.a r0 = r2.h
            boolean r0 = r0.af()
            r2.m = r0
            if (r3 == 0) goto L62
            com.mbridge.msdk.c.a r3 = r2.h
            long r0 = r3.ab()
            int r3 = (int) r0
            r2.e = r3
            com.mbridge.msdk.c.a r3 = r2.h
            long r0 = r3.ab()
            int r3 = (int) r0
            r2.f = r3
            goto L74
        L62:
            com.mbridge.msdk.c.a r3 = r2.h
            long r0 = r3.ac()
            int r3 = (int) r0
            r2.e = r3
            com.mbridge.msdk.c.a r3 = r2.h
            long r0 = r3.ac()
            int r3 = (int) r0
            r2.f = r3
        L74:
            return
    }

    static int a(com.mbridge.msdk.click.i r0, int r1) {
            r0.o = r1
            return r1
    }

    static java.lang.String a() {
            java.lang.String r0 = com.mbridge.msdk.click.i.d
            return r0
    }

    static java.lang.String a(com.mbridge.msdk.click.i r0) {
            java.lang.String r0 = r0.j
            return r0
    }

    static java.lang.String a(com.mbridge.msdk.click.i r0, java.lang.String r1) {
            r0.j = r1
            return r1
    }

    private void a(android.content.Context r9, java.lang.String r10, java.lang.String r11, java.lang.String r12) {
            r8 = this;
            android.webkit.WebView r0 = new android.webkit.WebView
            r0.<init>(r9)
            r8.l = r0
            android.webkit.WebSettings r0 = r0.getSettings()
            r1 = 1
            r0.setJavaScriptEnabled(r1)
            android.webkit.WebView r0 = r8.l
            android.webkit.WebSettings r0 = r0.getSettings()
            r1 = 2
            r0.setCacheMode(r1)
            android.webkit.WebView r0 = r8.l
            android.webkit.WebSettings r0 = r0.getSettings()
            r1 = 0
            r0.setLoadsImagesAutomatically(r1)
            android.webkit.WebView r0 = r8.l
            com.mbridge.msdk.click.i$2 r7 = new com.mbridge.msdk.click.i$2
            r1 = r7
            r2 = r8
            r3 = r12
            r4 = r11
            r5 = r9
            r6 = r10
            r1.<init>(r2, r3, r4, r5, r6)
            r0.setWebViewClient(r7)
            com.mbridge.msdk.click.i$3 r9 = new com.mbridge.msdk.click.i$3
            r9.<init>(r8)
            android.webkit.WebView r10 = r8.l
            r10.setWebChromeClient(r9)
            return
    }

    static void a(com.mbridge.msdk.click.i r0, java.lang.String r1, java.lang.String r2, java.lang.String r3, android.content.Context r4, java.lang.String r5) {
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    private void a(java.lang.String r9, java.lang.String r10, java.lang.String r11, android.content.Context r12) {
            r8 = this;
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            java.lang.Thread r1 = r1.getThread()
            if (r0 != r1) goto L19
            java.lang.String r7 = r8.j
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r2.a(r3, r4, r5, r6, r7)
            goto L29
        L19:
            android.os.Handler r0 = r8.g
            com.mbridge.msdk.click.i$1 r7 = new com.mbridge.msdk.click.i$1
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6)
            r0.post(r7)
        L29:
            return
    }

    private void a(java.lang.String r7, java.lang.String r8, java.lang.String r9, android.content.Context r10, java.lang.String r11) {
            r6 = this;
            r6.a(r10, r7, r8, r9)     // Catch: java.lang.Throwable -> L59
            java.lang.String r7 = r6.k     // Catch: java.lang.Throwable -> L59
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L59
            if (r7 != 0) goto L31
            android.webkit.WebView r7 = r6.l     // Catch: java.lang.Throwable -> L59
            android.webkit.WebSettings r7 = r7.getSettings()     // Catch: java.lang.Throwable -> L59
            java.lang.String r8 = "utf-8"
            r7.setDefaultTextEncodingName(r8)     // Catch: java.lang.Throwable -> L59
            r7 = 2000(0x7d0, float:2.803E-42)
            r6.f = r7     // Catch: java.lang.Throwable -> L59
            r6.e = r7     // Catch: java.lang.Throwable -> L59
            java.lang.String r7 = com.mbridge.msdk.click.i.d     // Catch: java.lang.Throwable -> L59
            java.lang.String r8 = r6.k     // Catch: java.lang.Throwable -> L59
            com.mbridge.msdk.foundation.tools.z.b(r7, r8)     // Catch: java.lang.Throwable -> L59
            android.webkit.WebView r0 = r6.l     // Catch: java.lang.Throwable -> L59
            java.lang.String r2 = r6.k     // Catch: java.lang.Throwable -> L59
            java.lang.String r3 = "*/*"
            java.lang.String r4 = "utf-8"
            r1 = r11
            r5 = r11
            r0.loadDataWithBaseURL(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L59
            goto L6c
        L31:
            boolean r7 = r6.m     // Catch: java.lang.Throwable -> L59
            if (r7 == 0) goto L53
            java.util.HashMap r7 = new java.util.HashMap     // Catch: java.lang.Throwable -> L59
            r7.<init>()     // Catch: java.lang.Throwable -> L59
            android.webkit.WebView r8 = r6.l     // Catch: java.lang.Throwable -> L59
            java.lang.String r8 = r8.getUrl()     // Catch: java.lang.Throwable -> L59
            if (r8 == 0) goto L4d
            java.lang.String r8 = "Referer"
            android.webkit.WebView r9 = r6.l     // Catch: java.lang.Throwable -> L59
            java.lang.String r9 = r9.getUrl()     // Catch: java.lang.Throwable -> L59
            r7.put(r8, r9)     // Catch: java.lang.Throwable -> L59
        L4d:
            android.webkit.WebView r8 = r6.l     // Catch: java.lang.Throwable -> L59
            r8.loadUrl(r11, r7)     // Catch: java.lang.Throwable -> L59
            goto L6c
        L53:
            android.webkit.WebView r7 = r6.l     // Catch: java.lang.Throwable -> L59
            r7.loadUrl(r11)     // Catch: java.lang.Throwable -> L59
            goto L6c
        L59:
            r7 = move-exception
            com.mbridge.msdk.click.i$a r8 = r6.i     // Catch: java.lang.Exception -> L6c
            if (r8 == 0) goto L6c
            com.mbridge.msdk.click.i$a r8 = r6.i     // Catch: java.lang.Exception -> L6c
            r9 = 0
            java.lang.String r10 = r6.j     // Catch: java.lang.Exception -> L6c
            java.lang.String r7 = r7.getMessage()     // Catch: java.lang.Exception -> L6c
            java.lang.String r11 = r6.n     // Catch: java.lang.Exception -> L6c
            r8.a(r9, r10, r7, r11)     // Catch: java.lang.Exception -> L6c
        L6c:
            return
    }

    static boolean a(com.mbridge.msdk.click.i r0, boolean r1) {
            r0.q = r1
            return r1
    }

    private void b() {
            r0 = this;
            r0.d()
            r0.c()
            return
    }

    static boolean b(com.mbridge.msdk.click.i r0) {
            boolean r0 = r0.q
            return r0
    }

    static boolean b(com.mbridge.msdk.click.i r0, boolean r1) {
            r0.p = r1
            return r1
    }

    private void c() {
            r2 = this;
            android.os.Handler r0 = r2.g
            java.lang.Runnable r1 = r2.s
            r0.removeCallbacks(r1)
            return
    }

    static void c(com.mbridge.msdk.click.i r4) {
            java.lang.String r0 = com.mbridge.msdk.click.i.d
            monitor-enter(r0)
            r4.b()     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L1e
            com.mbridge.msdk.click.i$a r1 = r4.i     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L1e
            if (r1 == 0) goto L25
            com.mbridge.msdk.click.i$a r1 = r4.i     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L1e
            java.lang.String r2 = r4.j     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L1e
            boolean r3 = r4.p     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L1e
            java.lang.String r4 = r4.n     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L1e
            r1.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L1e
            goto L25
        L16:
            java.lang.String r4 = com.mbridge.msdk.click.i.d     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = "webview colse to failed"
            com.mbridge.msdk.foundation.tools.z.d(r4, r1)     // Catch: java.lang.Throwable -> L27
            goto L25
        L1e:
            java.lang.String r4 = com.mbridge.msdk.click.i.d     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = "webview colse to failed"
            com.mbridge.msdk.foundation.tools.z.d(r4, r1)     // Catch: java.lang.Throwable -> L27
        L25:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L27
            return
        L27:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L27
            throw r4
    }

    static com.mbridge.msdk.click.i.a d(com.mbridge.msdk.click.i r0) {
            com.mbridge.msdk.click.i$a r0 = r0.i
            return r0
    }

    private void d() {
            r2 = this;
            android.os.Handler r0 = r2.g
            java.lang.Runnable r1 = r2.r
            r0.removeCallbacks(r1)
            return
    }

    static void e(com.mbridge.msdk.click.i r4) {
            r4.c()
            boolean r0 = r4.b
            android.os.Handler r0 = r4.g
            java.lang.Runnable r1 = r4.s
            int r4 = r4.e
            long r2 = (long) r4
            r0.postDelayed(r1, r2)
            return
    }

    static void f(com.mbridge.msdk.click.i r0) {
            r0.d()
            return
    }

    static void g(com.mbridge.msdk.click.i r0) {
            r0.c()
            return
    }

    static boolean h(com.mbridge.msdk.click.i r0) {
            boolean r0 = r0.m
            return r0
    }

    static android.webkit.WebView i(com.mbridge.msdk.click.i r0) {
            android.webkit.WebView r0 = r0.l
            return r0
    }

    static void j(com.mbridge.msdk.click.i r0) {
            r0.b()
            return
    }

    static java.lang.String k(com.mbridge.msdk.click.i r0) {
            java.lang.String r0 = r0.n
            return r0
    }

    static void l(com.mbridge.msdk.click.i r4) {
            r4.d()
            boolean r0 = r4.b
            android.os.Handler r0 = r4.g
            java.lang.Runnable r1 = r4.r
            int r4 = r4.f
            long r2 = (long) r4
            r0.postDelayed(r1, r2)
            return
    }

    static int m(com.mbridge.msdk.click.i r0) {
            int r0 = r0.f
            return r0
    }

    static void n(com.mbridge.msdk.click.i r4) {
            java.lang.String r0 = com.mbridge.msdk.click.i.d
            monitor-enter(r0)
            r4.b()     // Catch: java.lang.Throwable -> L1b java.lang.Exception -> L23
            android.webkit.WebView r1 = r4.l     // Catch: java.lang.Throwable -> L1b java.lang.Exception -> L23
            r1.destroy()     // Catch: java.lang.Throwable -> L1b java.lang.Exception -> L23
            com.mbridge.msdk.click.i$a r1 = r4.i     // Catch: java.lang.Throwable -> L1b java.lang.Exception -> L23
            if (r1 == 0) goto L2a
            com.mbridge.msdk.click.i$a r1 = r4.i     // Catch: java.lang.Throwable -> L1b java.lang.Exception -> L23
            java.lang.String r2 = r4.j     // Catch: java.lang.Throwable -> L1b java.lang.Exception -> L23
            boolean r3 = r4.p     // Catch: java.lang.Throwable -> L1b java.lang.Exception -> L23
            java.lang.String r4 = r4.n     // Catch: java.lang.Throwable -> L1b java.lang.Exception -> L23
            r1.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L1b java.lang.Exception -> L23
            goto L2a
        L1b:
            java.lang.String r4 = com.mbridge.msdk.click.i.d     // Catch: java.lang.Throwable -> L2c
            java.lang.String r1 = "webview colse to failed"
            com.mbridge.msdk.foundation.tools.z.d(r4, r1)     // Catch: java.lang.Throwable -> L2c
            goto L2a
        L23:
            java.lang.String r4 = com.mbridge.msdk.click.i.d     // Catch: java.lang.Throwable -> L2c
            java.lang.String r1 = "webview colse to failed"
            com.mbridge.msdk.foundation.tools.z.d(r4, r1)     // Catch: java.lang.Throwable -> L2c
        L2a:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
            return
        L2c:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
            throw r4
    }

    static int o(com.mbridge.msdk.click.i r0) {
            int r0 = r0.e
            return r0
    }

    public final void a(java.lang.String r1, java.lang.String r2, java.lang.String r3, android.content.Context r4, java.lang.String r5, com.mbridge.msdk.click.i.a r6) {
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

    public final void a(java.lang.String r1, java.lang.String r2, java.lang.String r3, android.content.Context r4, java.lang.String r5, java.lang.String r6, com.mbridge.msdk.click.i.a r7) {
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

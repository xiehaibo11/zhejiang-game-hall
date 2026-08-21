package com.mbridge.msdk.foundation.webview;

public class a implements com.mbridge.msdk.foundation.webview.BrowserView.a {
    private static java.lang.String a;
    private android.content.Context b;
    private com.mbridge.msdk.out.BaseTrackingListener c;
    private com.mbridge.msdk.foundation.entity.CampaignEx d;
    private boolean e;
    private com.mbridge.msdk.foundation.webview.BrowserView f;
    private android.os.Handler g;
    private com.mbridge.msdk.click.b h;
    private long i;
    private int j;
    private boolean k;
    private com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult l;
    private java.lang.String m;
    private boolean n;
    private final java.lang.Runnable o;





    static {
            java.lang.Class<com.mbridge.msdk.foundation.webview.a> r0 = com.mbridge.msdk.foundation.webview.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.webview.a.a = r0
            return
    }

    public a(android.content.Context r2, com.mbridge.msdk.foundation.entity.CampaignEx r3, com.mbridge.msdk.click.b r4, com.mbridge.msdk.foundation.webview.BrowserView r5, com.mbridge.msdk.out.BaseTrackingListener r6) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.e = r0
            r0 = 10000(0x2710, float:1.4013E-41)
            r1.j = r0
            r0 = 0
            r1.k = r0
            r0 = 0
            r1.l = r0
            com.mbridge.msdk.foundation.webview.a$1 r0 = new com.mbridge.msdk.foundation.webview.a$1
            r0.<init>(r1)
            r1.o = r0
            r1.b = r2
            r1.d = r3
            r1.f = r5
            r1.c = r6
            android.os.Handler r2 = new android.os.Handler
            android.os.Looper r3 = android.os.Looper.getMainLooper()
            r2.<init>(r3)
            r1.g = r2
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r3 = r3.k()
            com.mbridge.msdk.c.a r2 = r2.b(r3)
            if (r2 != 0) goto L44
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r2 = r2.b()
        L44:
            r1.h = r4
            com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r3 = new com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult
            r3.<init>()
            r1.l = r3
            long r2 = r2.ac()
            int r2 = (int) r2
            r1.j = r2
            return
    }

    static int a(com.mbridge.msdk.foundation.webview.a r0) {
            int r0 = r0.j
            return r0
    }

    private void a(android.content.Context r5, java.lang.String r6, com.mbridge.msdk.foundation.entity.CampaignEx r7) {
            r4 = this;
            java.lang.String r0 = "url"
            java.lang.String r1 = "com.mbridge.msdk.activity.MBCommonActivity"
            if (r5 != 0) goto L7
            return
        L7:
            java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L65
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L65
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Exception -> L65
            r2.<init>(r5, r1)     // Catch: java.lang.Exception -> L65
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L65
            if (r1 == 0) goto L1a
            return
        L1a:
            java.util.HashMap<java.lang.String, com.mbridge.msdk.foundation.webview.BrowserView> r1 = com.mbridge.msdk.foundation.webview.b.a     // Catch: java.lang.Exception -> L65
            com.mbridge.msdk.foundation.webview.BrowserView r3 = r4.f     // Catch: java.lang.Exception -> L65
            r1.put(r6, r3)     // Catch: java.lang.Exception -> L65
            boolean r1 = com.mbridge.msdk.foundation.tools.ad.a.b(r6)     // Catch: java.lang.Exception -> L65
            if (r1 == 0) goto L40
            java.lang.String r1 = "market://details?id="
            java.lang.String r3 = ""
            java.lang.String r6 = r6.replace(r1, r3)     // Catch: java.lang.Exception -> L65
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L65
            r1.<init>()     // Catch: java.lang.Exception -> L65
            java.lang.String r3 = "https://play.google.com/store/apps/details?id="
            r1.append(r3)     // Catch: java.lang.Exception -> L65
            r1.append(r6)     // Catch: java.lang.Exception -> L65
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Exception -> L65
        L40:
            r2.putExtra(r0, r6)     // Catch: java.lang.Exception -> L65
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L65
            r1.<init>()     // Catch: java.lang.Exception -> L65
            java.lang.String r3 = "webview url = "
            r1.append(r3)     // Catch: java.lang.Exception -> L65
            r1.append(r6)     // Catch: java.lang.Exception -> L65
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L65
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L65
            r0 = 805306368(0x30000000, float:4.656613E-10)
            r2.setFlags(r0)     // Catch: java.lang.Exception -> L65
            java.lang.String r0 = "mvcommon"
            r2.putExtra(r0, r7)     // Catch: java.lang.Exception -> L65
            r5.startActivity(r2)     // Catch: java.lang.Exception -> L65
            goto L6a
        L65:
            com.mbridge.msdk.out.BaseTrackingListener r7 = r4.c
            com.mbridge.msdk.foundation.tools.ad.a(r5, r6, r7)
        L6a:
            return
    }

    static void a(com.mbridge.msdk.foundation.webview.a r0, android.content.Context r1, java.lang.String r2, com.mbridge.msdk.foundation.entity.CampaignEx r3) {
            r0.a(r1, r2, r3)
            return
    }

    static boolean a(com.mbridge.msdk.foundation.webview.a r0, android.webkit.WebView r1, java.lang.String r2) {
            boolean r0 = r0.d(r1, r2)
            return r0
    }

    static boolean a(com.mbridge.msdk.foundation.webview.a r0, boolean r1) {
            r0.k = r1
            return r1
    }

    static com.mbridge.msdk.click.b b(com.mbridge.msdk.foundation.webview.a r0) {
            com.mbridge.msdk.click.b r0 = r0.h
            return r0
    }

    static java.lang.String b() {
            java.lang.String r0 = com.mbridge.msdk.foundation.webview.a.a
            return r0
    }

    static com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult c(com.mbridge.msdk.foundation.webview.a r0) {
            com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = r0.l
            return r0
    }

    private void c() {
            r4 = this;
            android.os.Handler r0 = r4.g
            java.lang.Runnable r1 = r4.o
            int r2 = r4.j
            long r2 = (long) r2
            r0.postDelayed(r1, r2)
            return
    }

    static java.lang.String d(com.mbridge.msdk.foundation.webview.a r0) {
            java.lang.String r0 = r0.m
            return r0
    }

    private void d() {
            r2 = this;
            android.os.Handler r0 = r2.g
            java.lang.Runnable r1 = r2.o
            r0.removeCallbacks(r1)
            return
    }

    private boolean d(android.webkit.WebView r7, java.lang.String r8) {
            r6 = this;
            java.lang.String r7 = "http"
            r0 = 1
            boolean r1 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> La5
            if (r1 == 0) goto La
            return r0
        La:
            android.net.Uri r1 = android.net.Uri.parse(r8)     // Catch: java.lang.Throwable -> La5
            java.lang.String r2 = r1.getScheme()     // Catch: java.lang.Throwable -> La5
            boolean r2 = r2.equals(r7)     // Catch: java.lang.Throwable -> La5
            java.lang.String r3 = "https"
            r4 = 0
            if (r2 != 0) goto L28
            java.lang.String r2 = r1.getScheme()     // Catch: java.lang.Throwable -> La5
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> La5
            if (r2 == 0) goto L26
            goto L28
        L26:
            r2 = r4
            goto L29
        L28:
            r2 = r0
        L29:
            if (r2 == 0) goto L2c
            return r0
        L2c:
            java.lang.String r1 = r1.getScheme()     // Catch: java.lang.Throwable -> La5
            java.lang.String r2 = "intent"
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Throwable -> La5
            if (r1 == 0) goto L94
            android.content.Intent r1 = android.content.Intent.parseUri(r8, r0)     // Catch: java.lang.Throwable -> La5
            java.lang.String r2 = r1.getPackage()     // Catch: java.lang.Throwable -> L53
            boolean r5 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L53
            if (r5 != 0) goto L5d
            android.content.Context r5 = r6.b     // Catch: java.lang.Throwable -> L53
            android.content.pm.PackageManager r5 = r5.getPackageManager()     // Catch: java.lang.Throwable -> L53
            android.content.Intent r2 = r5.getLaunchIntentForPackage(r2)     // Catch: java.lang.Throwable -> L53
            if (r2 == 0) goto L5d
            return r4
        L53:
            r2 = move-exception
            java.lang.String r5 = com.mbridge.msdk.foundation.webview.a.a     // Catch: java.lang.Throwable -> La5
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> La5
            com.mbridge.msdk.foundation.tools.z.d(r5, r2)     // Catch: java.lang.Throwable -> La5
        L5d:
            java.lang.String r2 = "browser_fallback_url"
            java.lang.String r1 = r1.getStringExtra(r2)     // Catch: java.lang.Throwable -> L8a
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L8a
            if (r2 != 0) goto L94
            android.net.Uri r2 = android.net.Uri.parse(r8)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r5 = r2.getScheme()     // Catch: java.lang.Throwable -> L8a
            boolean r7 = r5.equals(r7)     // Catch: java.lang.Throwable -> L8a
            if (r7 != 0) goto L84
            java.lang.String r7 = r2.getScheme()     // Catch: java.lang.Throwable -> L8a
            boolean r7 = r7.equals(r3)     // Catch: java.lang.Throwable -> L8a
            if (r7 == 0) goto L82
            goto L84
        L82:
            r7 = r4
            goto L85
        L84:
            r7 = r0
        L85:
            if (r7 == 0) goto L88
            return r0
        L88:
            r8 = r1
            goto L94
        L8a:
            r7 = move-exception
            java.lang.String r1 = com.mbridge.msdk.foundation.webview.a.a     // Catch: java.lang.Throwable -> La5
            java.lang.String r7 = r7.getMessage()     // Catch: java.lang.Throwable -> La5
            com.mbridge.msdk.foundation.tools.z.d(r1, r7)     // Catch: java.lang.Throwable -> La5
        L94:
            android.content.Context r7 = r6.b     // Catch: java.lang.Throwable -> La5
            boolean r7 = com.mbridge.msdk.click.c.e(r7, r8)     // Catch: java.lang.Throwable -> La5
            if (r7 == 0) goto La4
            java.lang.String r7 = com.mbridge.msdk.foundation.webview.a.a     // Catch: java.lang.Throwable -> La5
            java.lang.String r8 = "openDeepLink"
            com.mbridge.msdk.foundation.tools.z.d(r7, r8)     // Catch: java.lang.Throwable -> La5
            return r4
        La4:
            return r0
        La5:
            r7 = move-exception
            java.lang.String r8 = com.mbridge.msdk.foundation.webview.a.a
            java.lang.String r7 = r7.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r8, r7)
            return r0
    }

    static com.mbridge.msdk.foundation.entity.CampaignEx e(com.mbridge.msdk.foundation.webview.a r0) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.d
            return r0
    }

    private boolean e(android.webkit.WebView r8, java.lang.String r9) {
            r7 = this;
            java.lang.String r0 = "http"
            r1 = 0
            boolean r2 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> Lb6
            if (r2 == 0) goto La
            return r1
        La:
            android.net.Uri r2 = android.net.Uri.parse(r9)     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r3 = r2.getScheme()     // Catch: java.lang.Throwable -> Lb6
            boolean r3 = r3.equals(r0)     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r4 = "https"
            r5 = 1
            if (r3 != 0) goto L28
            java.lang.String r3 = r2.getScheme()     // Catch: java.lang.Throwable -> Lb6
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> Lb6
            if (r3 == 0) goto L26
            goto L28
        L26:
            r3 = r1
            goto L29
        L28:
            r3 = r5
        L29:
            if (r3 == 0) goto L2c
            return r1
        L2c:
            java.lang.String r2 = r2.getScheme()     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r3 = "intent"
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> Lb6
            if (r2 == 0) goto La3
            android.content.Intent r2 = android.content.Intent.parseUri(r9, r5)     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r3 = r2.getPackage()     // Catch: java.lang.Throwable -> L5f
            boolean r6 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L5f
            if (r6 != 0) goto L69
            android.content.Context r6 = r7.b     // Catch: java.lang.Throwable -> L5f
            android.content.pm.PackageManager r6 = r6.getPackageManager()     // Catch: java.lang.Throwable -> L5f
            android.content.Intent r3 = r6.getLaunchIntentForPackage(r3)     // Catch: java.lang.Throwable -> L5f
            if (r3 == 0) goto L69
            r3 = 268435456(0x10000000, float:2.524355E-29)
            r2.setFlags(r3)     // Catch: java.lang.Throwable -> L5f
            android.content.Context r3 = r7.b     // Catch: java.lang.Throwable -> L5f
            r3.startActivity(r2)     // Catch: java.lang.Throwable -> L5f
            r7.k = r5     // Catch: java.lang.Throwable -> L5f
            return r5
        L5f:
            r3 = move-exception
            java.lang.String r6 = com.mbridge.msdk.foundation.webview.a.a     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r3 = r3.getMessage()     // Catch: java.lang.Throwable -> Lb6
            com.mbridge.msdk.foundation.tools.z.d(r6, r3)     // Catch: java.lang.Throwable -> Lb6
        L69:
            java.lang.String r3 = "browser_fallback_url"
            java.lang.String r2 = r2.getStringExtra(r3)     // Catch: java.lang.Throwable -> L99
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L99
            if (r3 != 0) goto La3
            android.net.Uri r3 = android.net.Uri.parse(r9)     // Catch: java.lang.Throwable -> L99
            java.lang.String r6 = r3.getScheme()     // Catch: java.lang.Throwable -> L99
            boolean r0 = r6.equals(r0)     // Catch: java.lang.Throwable -> L99
            if (r0 != 0) goto L90
            java.lang.String r0 = r3.getScheme()     // Catch: java.lang.Throwable -> L99
            boolean r0 = r0.equals(r4)     // Catch: java.lang.Throwable -> L99
            if (r0 == 0) goto L8e
            goto L90
        L8e:
            r0 = r1
            goto L91
        L90:
            r0 = r5
        L91:
            if (r0 == 0) goto L97
            r8.loadUrl(r2)     // Catch: java.lang.Throwable -> L99
            return r1
        L97:
            r9 = r2
            goto La3
        L99:
            r8 = move-exception
            java.lang.String r0 = com.mbridge.msdk.foundation.webview.a.a     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r8 = r8.getMessage()     // Catch: java.lang.Throwable -> Lb6
            com.mbridge.msdk.foundation.tools.z.d(r0, r8)     // Catch: java.lang.Throwable -> Lb6
        La3:
            android.content.Context r8 = r7.b     // Catch: java.lang.Throwable -> Lb6
            boolean r8 = com.mbridge.msdk.click.c.e(r8, r9)     // Catch: java.lang.Throwable -> Lb6
            if (r8 == 0) goto Lb5
            java.lang.String r8 = com.mbridge.msdk.foundation.webview.a.a     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r9 = "openDeepLink"
            com.mbridge.msdk.foundation.tools.z.d(r8, r9)     // Catch: java.lang.Throwable -> Lb6
            r7.k = r5     // Catch: java.lang.Throwable -> Lb6
            return r5
        Lb5:
            return r1
        Lb6:
            r8 = move-exception
            java.lang.String r9 = com.mbridge.msdk.foundation.webview.a.a
            java.lang.String r8 = r8.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r9, r8)
            return r1
    }

    static boolean f(com.mbridge.msdk.foundation.webview.a r0) {
            boolean r0 = r0.k
            return r0
    }

    static android.content.Context g(com.mbridge.msdk.foundation.webview.a r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    static com.mbridge.msdk.out.BaseTrackingListener h(com.mbridge.msdk.foundation.webview.a r0) {
            com.mbridge.msdk.out.BaseTrackingListener r0 = r0.c
            return r0
    }

    @Override
    public final void a() {
            r0 = this;
            return
    }

    @Override
    public final void a(android.webkit.WebView r2, int r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            java.lang.String r3 = com.mbridge.msdk.foundation.webview.a.a
            com.mbridge.msdk.foundation.tools.z.c(r3, r4)
            r1.d()
            java.util.concurrent.ThreadPoolExecutor r3 = com.mbridge.msdk.foundation.same.f.b.b()
            com.mbridge.msdk.foundation.webview.a$4 r0 = new com.mbridge.msdk.foundation.webview.a$4
            r0.<init>(r1, r5, r4)
            r3.execute(r0)
            boolean r2 = r1.d(r2, r5)
            if (r2 == 0) goto L28
            boolean r2 = r1.k
            if (r2 != 0) goto L28
            r2 = 1
            r1.k = r2
            android.content.Context r2 = r1.b
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r1.d
            r1.a(r2, r5, r3)
        L28:
            return
    }

    @Override
    public final void a(android.webkit.WebView r5, java.lang.String r6) {
            r4 = this;
            long r0 = r4.i
            r2 = 0
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r0 = 1
            if (r5 != 0) goto L18
            long r1 = java.lang.System.currentTimeMillis()
            r4.i = r1
            boolean r5 = r4.n
            if (r5 != 0) goto L18
            r4.n = r0
            r4.c()
        L18:
            r4.m = r6
            r4.e = r0
            return
    }

    @Override
    public final void a(android.webkit.WebView r5, java.lang.String r6, android.graphics.Bitmap r7) {
            r4 = this;
            long r0 = r4.i
            r2 = 0
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r7 = 1
            if (r5 != 0) goto L1b
            long r0 = java.lang.System.currentTimeMillis()
            r4.i = r0
            boolean r5 = r4.n
            if (r5 != 0) goto L18
            r4.n = r7
            r4.c()
        L18:
            r5 = 0
            r4.k = r5
        L1b:
            r4.m = r6
            r4.e = r7
            return
    }

    @Override
    public final boolean b(android.webkit.WebView r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.foundation.webview.a.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "shouldOverrideUrlLoading1  "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            r0 = 0
            r3.e = r0
            boolean r1 = com.mbridge.msdk.foundation.tools.ad.a.a(r5)
            if (r1 == 0) goto L2b
            android.content.Context r1 = r3.b
            r2 = 0
            boolean r1 = com.mbridge.msdk.foundation.tools.ad.a.a(r1, r5, r2)
            if (r1 == 0) goto L2b
            r1 = 1
            r3.k = r1
        L2b:
            boolean r4 = r3.e(r4, r5)
            if (r4 == 0) goto L46
            r1 = 0
            r3.i = r1
            r3.e = r0
            r3.d()
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.b()
            com.mbridge.msdk.foundation.webview.a$2 r1 = new com.mbridge.msdk.foundation.webview.a$2
            r1.<init>(r3, r5)
            r0.execute(r1)
        L46:
            return r4
    }

    @Override
    public final void c(android.webkit.WebView r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r4 = com.mbridge.msdk.foundation.webview.a.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onPageFinished1  "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.d(r4, r0)
            boolean r4 = r3.e
            if (r4 != 0) goto L1b
            return
        L1b:
            r0 = 0
            r3.i = r0
            r4 = 0
            r3.e = r4
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.b()
            com.mbridge.msdk.foundation.webview.a$3 r1 = new com.mbridge.msdk.foundation.webview.a$3
            r1.<init>(r3, r5)
            r0.execute(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L35
            return
        L35:
            r3.d()
            android.net.Uri r0 = android.net.Uri.parse(r5)
            java.lang.String r1 = r0.getScheme()
            java.lang.String r2 = "http"
            boolean r1 = r1.equals(r2)
            r2 = 1
            if (r1 != 0) goto L55
            java.lang.String r0 = r0.getScheme()
            java.lang.String r1 = "https"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L56
        L55:
            r4 = r2
        L56:
            if (r4 == 0) goto L65
            boolean r4 = r3.k
            if (r4 != 0) goto L65
            r3.k = r2
            android.content.Context r4 = r3.b
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.d
            r3.a(r4, r5, r0)
        L65:
            return
    }
}

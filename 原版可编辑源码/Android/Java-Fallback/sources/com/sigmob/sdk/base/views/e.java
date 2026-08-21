package com.sigmob.sdk.base.views;

public class e extends android.webkit.WebView {
    private static boolean a;
    private com.sigmob.sdk.nativead.APKStatusBroadcastReceiver b;
    private java.lang.ref.WeakReference<com.sigmob.sdk.base.common.m.a> c;
    private com.sigmob.sdk.base.models.BaseAdUnit d;
    private android.webkit.WebViewClient e;
    private java.util.Map<java.lang.String, java.lang.String> f;



    private class a {
        final com.sigmob.sdk.base.views.e a;

        public a(com.sigmob.sdk.base.views.e r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @android.webkit.JavascriptInterface
        public int getApKDownloadProcess() {
                r7 = this;
                com.sigmob.sdk.base.views.e r0 = r7.a
                r0.a()
                com.sigmob.sdk.base.views.e r0 = r7.a
                android.content.Context r0 = r0.getContext()
                if (r0 == 0) goto L46
                com.sigmob.sdk.base.views.e r0 = r7.a
                com.sigmob.sdk.base.models.BaseAdUnit r0 = com.sigmob.sdk.base.views.e.b(r0)
                if (r0 == 0) goto L46
                com.sigmob.sdk.base.views.e r0 = r7.a
                android.content.Context r0 = r0.getContext()
                com.sigmob.sdk.base.views.e r1 = r7.a
                com.sigmob.sdk.base.models.BaseAdUnit r1 = com.sigmob.sdk.base.views.e.b(r1)
                java.lang.Long r1 = r1.getDownloadId()
                long[] r0 = com.sigmob.sdk.base.common.n.a(r0, r1)
                r1 = 2
                r2 = r0[r1]
                int r2 = (int) r2
                r3 = 0
                r4 = 1
                if (r2 == r4) goto L45
                if (r2 == r1) goto L3b
                r0 = 8
                if (r2 == r0) goto L38
                goto L46
            L38:
                r0 = 100
                return r0
            L3b:
                r1 = r0[r3]
                r3 = r0[r4]
                r5 = 100
                long r1 = r1 * r5
                long r1 = r1 / r3
                int r0 = (int) r1
                return r0
            L45:
                return r3
            L46:
                r0 = -1
                return r0
        }
    }

    static {
            return
    }

    public e(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.f = r1
            android.webkit.WebSettings r1 = r0.getSettings()
            r0.a(r1)
            boolean r1 = com.sigmob.sdk.base.views.e.a
            if (r1 != 0) goto L1f
            android.content.Context r1 = r0.getContext()
            r0.a(r1)
            r1 = 1
            com.sigmob.sdk.base.views.e.a = r1
        L1f:
            r0.resumeTimers()
            return
    }

    static com.sigmob.sdk.base.common.m.a a(com.sigmob.sdk.base.views.e r0) {
            com.sigmob.sdk.base.common.m$a r0 = r0.getListener()
            return r0
    }

    private void a(android.content.Context r9) {
            r8 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 != r1) goto L47
            android.webkit.WebView r0 = new android.webkit.WebView
            android.content.Context r1 = r9.getApplicationContext()
            r0.<init>(r1)
            r1 = 0
            r0.setBackgroundColor(r1)
            r3 = 0
            r7 = 0
            java.lang.String r4 = ""
            java.lang.String r5 = "text/html"
            java.lang.String r6 = "UTF-8"
            r2 = r0
            r2.loadDataWithBaseURL(r3, r4, r5, r6, r7)
            android.view.WindowManager$LayoutParams r1 = new android.view.WindowManager$LayoutParams
            r1.<init>()
            r2 = 1
            r1.width = r2
            r1.height = r2
            r2 = 2005(0x7d5, float:2.81E-42)
            r1.type = r2
            r2 = 16777240(0x1000018, float:2.3509954E-38)
            r1.flags = r2
            r2 = -2
            r1.format = r2
            r2 = 8388659(0x800033, float:1.1755015E-38)
            r1.gravity = r2
            java.lang.String r2 = "window"
            java.lang.Object r9 = r9.getSystemService(r2)
            android.view.WindowManager r9 = (android.view.WindowManager) r9
            if (r9 == 0) goto L47
            r9.addView(r0, r1)
        L47:
            return
    }

    private void a(android.webkit.WebSettings r6) {
            r5 = this;
            r0 = 2
            r1 = 1
            com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder r2 = new com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder     // Catch: java.lang.Exception -> L1f
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Exception -> L1f
            java.lang.String r4 = "c2V0SmF2YVNjcmlwdEVuYWJsZWQ="
            byte[] r4 = android.util.Base64.decode(r4, r0)     // Catch: java.lang.Exception -> L1f
            r3.<init>(r4)     // Catch: java.lang.Exception -> L1f
            r2.<init>(r6, r3)     // Catch: java.lang.Exception -> L1f
            java.lang.Class r3 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L1f
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r1)     // Catch: java.lang.Exception -> L1f
            r2.addParam(r3, r4)     // Catch: java.lang.Exception -> L1f
            r2.execute()     // Catch: java.lang.Exception -> L1f
            goto L23
        L1f:
            r2 = move-exception
            r2.printStackTrace()
        L23:
            com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder r2 = new com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder     // Catch: java.lang.Exception -> L40
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Exception -> L40
            java.lang.String r4 = "c2V0QWxsb3dGaWxlQWNjZXNz"
            byte[] r4 = android.util.Base64.decode(r4, r0)     // Catch: java.lang.Exception -> L40
            r3.<init>(r4)     // Catch: java.lang.Exception -> L40
            r2.<init>(r6, r3)     // Catch: java.lang.Exception -> L40
            java.lang.Class r3 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L40
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r1)     // Catch: java.lang.Exception -> L40
            r2.addParam(r3, r4)     // Catch: java.lang.Exception -> L40
            r2.execute()     // Catch: java.lang.Exception -> L40
            goto L44
        L40:
            r2 = move-exception
            r2.printStackTrace()
        L44:
            r6.setDomStorageEnabled(r1)
            r6.setUseWideViewPort(r1)
            r6.setBuiltInZoomControls(r1)
            r6.setLoadWithOverviewMode(r1)
            r6.setSupportZoom(r1)
            java.lang.String r2 = "UTF-8"
            r6.setDefaultTextEncodingName(r2)
            r6.setCacheMode(r0)
            android.webkit.WebSettings$PluginState r0 = android.webkit.WebSettings.PluginState.ON
            r6.setPluginState(r0)
            r0 = 0
            r6.setBlockNetworkImage(r0)
            r6.setBlockNetworkLoads(r0)
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 17
            if (r2 < r3) goto L70
            r6.setMediaPlaybackRequiresUserGesture(r0)
        L70:
            r6.setLoadsImagesAutomatically(r1)
            r6.setAllowContentAccess(r1)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 16
            if (r1 >= r2) goto L7f
            r6.setAllowUniversalAccessFromFileURLs(r0)
        L7f:
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 26
            if (r1 < r2) goto L88
            r6.setSafeBrowsingEnabled(r0)
        L88:
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r1 < r2) goto L91
            r6.setMixedContentMode(r0)
        L91:
            com.sigmob.sdk.base.views.e$a r6 = new com.sigmob.sdk.base.views.e$a
            r6.<init>(r5)
            java.lang.String r0 = "sigandroidapk"
            r5.addJavascriptInterface(r6, r0)
            return
    }

    public static void a(android.webkit.WebView r3) {
            android.webkit.CookieManager r0 = android.webkit.CookieManager.getInstance()
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r1 < r2) goto L15
            com.sigmob.sdk.base.c r1 = com.sigmob.sdk.base.c.a()
            boolean r1 = r1.i()
            r0.setAcceptThirdPartyCookies(r3, r1)
        L15:
            return
    }

    static com.sigmob.sdk.base.models.BaseAdUnit b(com.sigmob.sdk.base.views.e r0) {
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r0.d
            return r0
    }

    public static void c() {
            android.webkit.CookieManager r0 = android.webkit.CookieManager.getInstance()
            com.sigmob.sdk.base.c r1 = com.sigmob.sdk.base.c.a()
            boolean r1 = r1.i()
            if (r1 == 0) goto L16
            r1 = 1
            r0.setAcceptCookie(r1)
            android.webkit.CookieManager.setAcceptFileSchemeCookies(r1)
            return
        L16:
            r1 = 0
            r0.setAcceptCookie(r1)
            android.webkit.CookieManager.setAcceptFileSchemeCookies(r1)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r1 < r2) goto L2e
            r1 = 0
            r0.removeSessionCookies(r1)
            r0.removeAllCookies(r1)
            r0.flush()
            goto L34
        L2e:
            r0.removeSessionCookie()
            r0.removeAllCookie()
        L34:
            return
    }

    private com.sigmob.sdk.base.common.m.a getListener() {
            r1 = this;
            java.lang.ref.WeakReference<com.sigmob.sdk.base.common.m$a> r0 = r1.c
            if (r0 == 0) goto Lb
            java.lang.Object r0 = r0.get()
            com.sigmob.sdk.base.common.m$a r0 = (com.sigmob.sdk.base.common.m.a) r0
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public void a() {
            r3 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r3.d
            if (r0 == 0) goto L1d
            com.sigmob.sdk.nativead.APKStatusBroadcastReceiver r0 = r3.b
            if (r0 != 0) goto L1d
            com.sigmob.sdk.nativead.APKStatusBroadcastReceiver r0 = new com.sigmob.sdk.nativead.APKStatusBroadcastReceiver
            com.sigmob.sdk.base.views.e$1 r1 = new com.sigmob.sdk.base.views.e$1
            r1.<init>(r3)
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r3.d
            java.lang.String r2 = r2.getUuid()
            r0.<init>(r1, r2)
            r3.b = r0
            r0.a(r0)
        L1d:
            return
    }

    public void a(com.sigmob.sdk.base.common.m.a r2) {
            r1 = this;
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.c = r0
            return
    }

    void a(java.lang.String r3, android.webkit.ValueCallback r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Injecting Javascript into MRAID WebView:\n\t"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L1e
            r2.evaluateJavascript(r3, r4)
            goto L32
        L1e:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "javascript:"
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            r2.loadUrl(r3)
        L32:
            return
    }

    public void a(boolean r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto L7
            return
        L7:
            if (r3 == 0) goto L10
            android.webkit.WebSettings r3 = r2.getSettings()
            android.webkit.WebSettings$PluginState r0 = android.webkit.WebSettings.PluginState.ON
            goto L16
        L10:
            android.webkit.WebSettings r3 = r2.getSettings()
            android.webkit.WebSettings$PluginState r0 = android.webkit.WebSettings.PluginState.OFF
        L16:
            r3.setPluginState(r0)
            return
    }

    public void b() {
            r1 = this;
            com.sigmob.sdk.base.views.e$2 r0 = new com.sigmob.sdk.base.views.e$2
            r0.<init>(r1)
            r1.setWebChromeClient(r0)
            return
    }

    public void b(boolean r1) {
            r0 = this;
            if (r1 == 0) goto La
            r0.stopLoading()
            java.lang.String r1 = ""
            r0.loadUrl(r1)
        La:
            r0.onPause()
            return
    }

    void d() {
            r2 = this;
            java.lang.String r0 = "sigmob.notifyApkDownloadStartEvent();"
            r1 = 0
            r2.a(r0, r1)
            return
    }

    @Override
    public void destroy() {
            r1 = this;
            java.lang.String r0 = " BaseWebView destroy called "
            com.czhj.sdk.logger.SigmobLog.d(r0)
            com.czhj.sdk.common.utils.ViewUtil.removeFromParent(r1)
            com.sigmob.sdk.nativead.APKStatusBroadcastReceiver r0 = r1.b
            if (r0 == 0) goto L12
            r0.b(r0)
            r0 = 0
            r1.b = r0
        L12:
            r1.removeAllViews()
            super.destroy()
            return
    }

    void e() {
            r2 = this;
            java.lang.String r0 = "sigmob.notifyApkDownloadFailEvent();"
            r1 = 0
            r2.a(r0, r1)
            return
    }

    void f() {
            r2 = this;
            java.lang.String r0 = "sigmob.notifyApkDownloadEndEvent();"
            r1 = 0
            r2.a(r0, r1)
            return
    }

    void g() {
            r2 = this;
            java.lang.String r0 = "sigmob.notifyApkDownloadInstalledEvent();"
            r1 = 0
            r2.a(r0, r1)
            return
    }

    @Override
    public void loadUrl(java.lang.String r4) {
            r3 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.f
            java.lang.String r1 = ""
            java.lang.String r2 = "Referer"
            r0.put(r2, r1)
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r3.d
            if (r0 == 0) goto L1a
            boolean r0 = r0.isDisablexRequestWith()
            if (r0 == 0) goto L1a
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.f
            java.lang.String r2 = "X-Requested-With"
            r0.put(r2, r1)
        L1a:
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.f
            r3.loadUrl(r4, r0)
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r0 = this;
            super.onAttachedToWindow()
            return
    }

    public void setAdUnit(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0 = this;
            r0.d = r1
            return
    }

    @Override
    public void setWebViewClient(android.webkit.WebViewClient r1) {
            r0 = this;
            r0.e = r1
            super.setWebViewClient(r1)
            return
    }
}

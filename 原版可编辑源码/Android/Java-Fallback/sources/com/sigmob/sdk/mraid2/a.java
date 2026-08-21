package com.sigmob.sdk.mraid2;

abstract class a extends android.webkit.WebView {
    public static java.util.HashMap<java.lang.String, com.sigmob.sdk.mraid.i> a = null;
    private static java.lang.String b = "BaseWebView2";
    private static boolean c;
    private java.util.Map<java.lang.String, com.sigmob.sdk.nativead.APKStatusBroadcastReceiver> d;
    private java.util.Map<java.lang.String, java.lang.String> e;



    private class a {
        final com.sigmob.sdk.mraid2.a a;

        public a(com.sigmob.sdk.mraid2.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @android.webkit.JavascriptInterface
        public int getApKDownloadProcessId(java.lang.String r7) {
                r6 = this;
                com.sigmob.sdk.mraid2.a r0 = r6.a
                java.util.List r0 = r0.getAdUnitList()
                r1 = 0
                if (r0 == 0) goto L3e
                com.sigmob.sdk.mraid2.a r0 = r6.a
                java.util.List r0 = r0.getAdUnitList()
                int r0 = r0.size()
                if (r0 <= 0) goto L3e
                r0 = r1
            L16:
                com.sigmob.sdk.mraid2.a r2 = r6.a
                java.util.List r2 = r2.getAdUnitList()
                int r2 = r2.size()
                if (r0 >= r2) goto L3e
                com.sigmob.sdk.mraid2.a r2 = r6.a
                java.util.List r2 = r2.getAdUnitList()
                java.lang.Object r2 = r2.get(r0)
                com.sigmob.sdk.base.models.BaseAdUnit r2 = (com.sigmob.sdk.base.models.BaseAdUnit) r2
                com.sigmob.sdk.base.models.rtb.Ad r3 = r2.getAd()
                java.lang.String r3 = r3.vid
                boolean r3 = r3.equals(r7)
                if (r3 == 0) goto L3b
                goto L3f
            L3b:
                int r0 = r0 + 1
                goto L16
            L3e:
                r2 = 0
            L3f:
                java.lang.String r0 = com.sigmob.sdk.mraid2.a.f()
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                r3.append(r2)
                java.lang.String r4 = "-----------getApKDownloadProcessId---------"
                r3.append(r4)
                r3.append(r7)
                java.lang.String r7 = r3.toString()
                android.util.Log.d(r0, r7)
                if (r2 != 0) goto L69
                com.sigmob.sdk.mraid2.a r7 = r6.a
                java.util.List r7 = r7.getAdUnitList()
                java.lang.Object r7 = r7.get(r1)
                r2 = r7
                com.sigmob.sdk.base.models.BaseAdUnit r2 = (com.sigmob.sdk.base.models.BaseAdUnit) r2
            L69:
                com.sigmob.sdk.mraid2.a r7 = r6.a
                android.content.Context r7 = r7.getContext()
                if (r7 == 0) goto L9d
                if (r2 == 0) goto L9d
                com.sigmob.sdk.mraid2.a r7 = r6.a
                android.content.Context r7 = r7.getContext()
                java.lang.Long r0 = r2.getDownloadId()
                long[] r7 = com.sigmob.sdk.base.common.n.a(r7, r0)
                r0 = 2
                r2 = r7[r0]
                int r2 = (int) r2
                r3 = 1
                if (r2 == r3) goto L9c
                if (r2 == r0) goto L92
                r7 = 8
                if (r2 == r7) goto L8f
                goto L9d
            L8f:
                r7 = 100
                return r7
            L92:
                r0 = r7[r1]
                r2 = r7[r3]
                r4 = 100
                long r0 = r0 * r4
                long r0 = r0 / r2
                int r7 = (int) r0
                return r7
            L9c:
                return r1
            L9d:
                r7 = -1
                return r7
        }

        @android.webkit.JavascriptInterface
        public void registerDownloadEvent(java.lang.String r6) {
                r5 = this;
                com.sigmob.sdk.mraid2.a r0 = r5.a
                java.util.List r0 = r0.getAdUnitList()
                r1 = 0
                if (r0 == 0) goto L3e
                com.sigmob.sdk.mraid2.a r0 = r5.a
                java.util.List r0 = r0.getAdUnitList()
                int r0 = r0.size()
                if (r0 <= 0) goto L3e
                r0 = r1
            L16:
                com.sigmob.sdk.mraid2.a r2 = r5.a
                java.util.List r2 = r2.getAdUnitList()
                int r2 = r2.size()
                if (r0 >= r2) goto L3e
                com.sigmob.sdk.mraid2.a r2 = r5.a
                java.util.List r2 = r2.getAdUnitList()
                java.lang.Object r2 = r2.get(r0)
                com.sigmob.sdk.base.models.BaseAdUnit r2 = (com.sigmob.sdk.base.models.BaseAdUnit) r2
                com.sigmob.sdk.base.models.rtb.Ad r3 = r2.getAd()
                java.lang.String r3 = r3.vid
                boolean r3 = r3.equals(r6)
                if (r3 == 0) goto L3b
                goto L3f
            L3b:
                int r0 = r0 + 1
                goto L16
            L3e:
                r2 = 0
            L3f:
                java.lang.String r0 = com.sigmob.sdk.mraid2.a.f()
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                r3.append(r2)
                java.lang.String r4 = "-----------registerDownloadEvent---------"
                r3.append(r4)
                r3.append(r6)
                java.lang.String r6 = r3.toString()
                android.util.Log.d(r0, r6)
                if (r2 != 0) goto L69
                com.sigmob.sdk.mraid2.a r6 = r5.a
                java.util.List r6 = r6.getAdUnitList()
                java.lang.Object r6 = r6.get(r1)
                r2 = r6
                com.sigmob.sdk.base.models.BaseAdUnit r2 = (com.sigmob.sdk.base.models.BaseAdUnit) r2
            L69:
                com.sigmob.sdk.mraid2.a r6 = r5.a
                r6.a(r2)
                return
        }
    }

    static {
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            com.sigmob.sdk.mraid2.a.a = r0
            return
    }

    public a(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.d = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.e = r1
            android.webkit.WebSettings r1 = r0.getSettings()
            r0.a(r1)
            boolean r1 = com.sigmob.sdk.mraid2.a.c
            if (r1 != 0) goto L26
            android.content.Context r1 = r0.getContext()
            r0.a(r1)
            r1 = 1
            com.sigmob.sdk.mraid2.a.c = r1
        L26:
            return
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
            com.sigmob.sdk.mraid2.a$a r6 = new com.sigmob.sdk.mraid2.a$a
            r6.<init>(r5)
            java.lang.String r0 = "sigandroidapk"
            r5.addJavascriptInterface(r6, r0)
            return
    }

    static java.lang.String f() {
            java.lang.String r0 = com.sigmob.sdk.mraid2.a.b
            return r0
    }

    void a() {
            r1 = this;
            java.lang.String r0 = "download_start"
            r1.a(r0)
            return
    }

    public void a(com.sigmob.sdk.base.models.BaseAdUnit r4) {
            r3 = this;
            if (r4 == 0) goto L2a
            java.util.Map<java.lang.String, com.sigmob.sdk.nativead.APKStatusBroadcastReceiver> r0 = r3.d
            java.lang.String r1 = r4.getUuid()
            java.lang.Object r0 = r0.get(r1)
            com.sigmob.sdk.nativead.APKStatusBroadcastReceiver r0 = (com.sigmob.sdk.nativead.APKStatusBroadcastReceiver) r0
            if (r0 != 0) goto L2a
            com.sigmob.sdk.nativead.APKStatusBroadcastReceiver r0 = new com.sigmob.sdk.nativead.APKStatusBroadcastReceiver
            com.sigmob.sdk.mraid2.a$1 r1 = new com.sigmob.sdk.mraid2.a$1
            r1.<init>(r3)
            java.lang.String r2 = r4.getUuid()
            r0.<init>(r1, r2)
            r0.a(r0)
            java.util.Map<java.lang.String, com.sigmob.sdk.nativead.APKStatusBroadcastReceiver> r1 = r3.d
            java.lang.String r4 = r4.getUuid()
            r1.put(r4, r0)
        L2a:
            return
    }

    void a(java.lang.String r2) {
            r1 = this;
            com.sigmob.sdk.mraid2.a$2 r0 = new com.sigmob.sdk.mraid2.a$2
            r0.<init>(r1, r2)
            r1.post(r0)
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

    void b() {
            r1 = this;
            java.lang.String r0 = "download_fail"
            r1.a(r0)
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

    void c() {
            r1 = this;
            java.lang.String r0 = "download_end"
            r1.a(r0)
            return
    }

    void d() {
            r1 = this;
            java.lang.String r0 = "install_start"
            r1.a(r0)
            return
    }

    @Override
    public void destroy() {
            r2 = this;
            java.lang.String r0 = " BaseWebView destroy called "
            com.czhj.sdk.logger.SigmobLog.d(r0)
            com.czhj.sdk.common.utils.ViewUtil.removeFromParent(r2)
            java.util.Map<java.lang.String, com.sigmob.sdk.nativead.APKStatusBroadcastReceiver> r0 = r2.d
            if (r0 == 0) goto L31
            int r0 = r0.size()
            if (r0 <= 0) goto L31
            java.util.Map<java.lang.String, com.sigmob.sdk.nativead.APKStatusBroadcastReceiver> r0 = r2.d
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        L1c:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2c
            java.lang.Object r1 = r0.next()
            com.sigmob.sdk.nativead.APKStatusBroadcastReceiver r1 = (com.sigmob.sdk.nativead.APKStatusBroadcastReceiver) r1
            r1.b(r1)
            goto L1c
        L2c:
            java.util.Map<java.lang.String, com.sigmob.sdk.nativead.APKStatusBroadcastReceiver> r0 = r2.d
            r0.clear()
        L31:
            java.util.HashMap<java.lang.String, com.sigmob.sdk.mraid.i> r0 = com.sigmob.sdk.mraid2.a.a
            if (r0 == 0) goto L5c
            int r0 = r0.size()
            if (r0 <= 0) goto L5c
            java.util.HashMap<java.lang.String, com.sigmob.sdk.mraid.i> r0 = com.sigmob.sdk.mraid2.a.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        L45:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L57
            java.lang.Object r1 = r0.next()
            com.sigmob.sdk.mraid.i r1 = (com.sigmob.sdk.mraid.i) r1
            if (r1 == 0) goto L45
            r1.c()
            goto L45
        L57:
            java.util.HashMap<java.lang.String, com.sigmob.sdk.mraid.i> r0 = com.sigmob.sdk.mraid2.a.a
            r0.clear()
        L5c:
            r2.removeAllViews()
            super.destroy()
            return
    }

    void e() {
            r1 = this;
            java.lang.String r0 = "install_end"
            r1.a(r0)
            return
    }

    abstract java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> getAdUnitList();

    @Override
    public void loadUrl(java.lang.String r4) {
            r3 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.e
            java.lang.String r1 = ""
            java.lang.String r2 = "Referer"
            r0.put(r2, r1)
            java.util.List r0 = r3.getAdUnitList()
            if (r0 == 0) goto L31
            java.util.List r0 = r3.getAdUnitList()
            r2 = 0
            java.lang.Object r0 = r0.get(r2)
            if (r0 == 0) goto L31
            java.util.List r0 = r3.getAdUnitList()
            java.lang.Object r0 = r0.get(r2)
            com.sigmob.sdk.base.models.BaseAdUnit r0 = (com.sigmob.sdk.base.models.BaseAdUnit) r0
            boolean r0 = r0.isDisablexRequestWith()
            if (r0 == 0) goto L31
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.e
            java.lang.String r2 = "X-Requested-With"
            r0.put(r2, r1)
        L31:
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.e
            r3.loadUrl(r4, r0)
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r0 = this;
            super.onAttachedToWindow()
            return
    }

    @Override
    public void setWebViewClient(android.webkit.WebViewClient r1) {
            r0 = this;
            super.setWebViewClient(r1)
            return
    }
}

package com.alipay.sdk.auth;

public class AuthActivity extends android.app.Activity {
    static final java.lang.String a = "params";
    static final java.lang.String b = "redirectUri";
    private android.webkit.WebView c;
    private java.lang.String d;
    private com.alipay.sdk.widget.a e;
    private android.os.Handler f;
    private boolean g;
    private boolean h;

    private static final class a implements java.lang.Runnable {
        private final java.lang.ref.WeakReference<com.alipay.sdk.auth.AuthActivity> a;

        private a(com.alipay.sdk.auth.AuthActivity r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.a = r0
                return
        }

        a(com.alipay.sdk.auth.AuthActivity r1, com.alipay.sdk.auth.a r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void run() {
                r1 = this;
                java.lang.ref.WeakReference<com.alipay.sdk.auth.AuthActivity> r0 = r1.a
                java.lang.Object r0 = r0.get()
                com.alipay.sdk.auth.AuthActivity r0 = (com.alipay.sdk.auth.AuthActivity) r0
                if (r0 == 0) goto Ld
                com.alipay.sdk.auth.AuthActivity.e(r0)
            Ld:
                return
        }
    }

    private class b extends android.webkit.WebChromeClient {
        final com.alipay.sdk.auth.AuthActivity a;

        private b(com.alipay.sdk.auth.AuthActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        b(com.alipay.sdk.auth.AuthActivity r1, com.alipay.sdk.auth.a r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public boolean onConsoleMessage(android.webkit.ConsoleMessage r5) {
                r4 = this;
                java.lang.String r0 = r5.message()
                boolean r1 = android.text.TextUtils.isEmpty(r0)
                if (r1 == 0) goto Lf
                boolean r5 = super.onConsoleMessage(r5)
                return r5
            Lf:
                r1 = 0
                java.lang.String r2 = "h5container.message: "
                boolean r3 = r0.startsWith(r2)
                if (r3 == 0) goto L1e
                java.lang.String r1 = ""
                java.lang.String r1 = r0.replaceFirst(r2, r1)
            L1e:
                boolean r0 = android.text.TextUtils.isEmpty(r1)
                if (r0 == 0) goto L29
                boolean r5 = super.onConsoleMessage(r5)
                return r5
            L29:
                com.alipay.sdk.auth.AuthActivity r0 = r4.a
                com.alipay.sdk.auth.AuthActivity.b(r0, r1)
                boolean r5 = super.onConsoleMessage(r5)
                return r5
        }
    }

    private class c extends android.webkit.WebViewClient {
        final com.alipay.sdk.auth.AuthActivity a;

        private c(com.alipay.sdk.auth.AuthActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        c(com.alipay.sdk.auth.AuthActivity r1, com.alipay.sdk.auth.a r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void onPageFinished(android.webkit.WebView r1, java.lang.String r2) {
                r0 = this;
                com.alipay.sdk.auth.AuthActivity r1 = r0.a
                com.alipay.sdk.auth.AuthActivity.e(r1)
                com.alipay.sdk.auth.AuthActivity r1 = r0.a
                android.os.Handler r1 = com.alipay.sdk.auth.AuthActivity.d(r1)
                r2 = 0
                r1.removeCallbacksAndMessages(r2)
                return
        }

        @Override
        public void onPageStarted(android.webkit.WebView r5, java.lang.String r6, android.graphics.Bitmap r7) {
                r4 = this;
                com.alipay.sdk.auth.AuthActivity r0 = r4.a
                com.alipay.sdk.auth.AuthActivity.c(r0)
                com.alipay.sdk.auth.AuthActivity r0 = r4.a
                android.os.Handler r0 = com.alipay.sdk.auth.AuthActivity.d(r0)
                com.alipay.sdk.auth.AuthActivity$a r1 = new com.alipay.sdk.auth.AuthActivity$a
                com.alipay.sdk.auth.AuthActivity r2 = r4.a
                r3 = 0
                r1.<init>(r2, r3)
                r2 = 30000(0x7530, double:1.4822E-319)
                r0.postDelayed(r1, r2)
                super.onPageStarted(r5, r6, r7)
                return
        }

        @Override
        public void onReceivedError(android.webkit.WebView r3, int r4, java.lang.String r5, java.lang.String r6) {
                r2 = this;
                com.alipay.sdk.auth.AuthActivity r0 = r2.a
                r1 = 1
                com.alipay.sdk.auth.AuthActivity.a(r0, r1)
                super.onReceivedError(r3, r4, r5, r6)
                return
        }

        @Override
        public void onReceivedSslError(android.webkit.WebView r1, android.webkit.SslErrorHandler r2, android.net.http.SslError r3) {
                r0 = this;
                com.alipay.sdk.auth.AuthActivity r1 = r0.a
                boolean r1 = com.alipay.sdk.auth.AuthActivity.a(r1)
                if (r1 == 0) goto L12
                r2.proceed()
                com.alipay.sdk.auth.AuthActivity r1 = r0.a
                r2 = 0
                com.alipay.sdk.auth.AuthActivity.b(r1, r2)
                return
            L12:
                com.alipay.sdk.auth.AuthActivity r1 = r0.a
                com.alipay.sdk.auth.d r3 = new com.alipay.sdk.auth.d
                r3.<init>(r0, r2)
                r1.runOnUiThread(r3)
                return
        }

        @Override
        public boolean shouldOverrideUrlLoading(android.webkit.WebView r6, java.lang.String r7) {
                r5 = this;
                java.lang.String r0 = r7.toLowerCase()
                java.lang.String r1 = "alipays://platformapi/startApp?"
                java.lang.String r2 = r1.toLowerCase()
                boolean r0 = r0.startsWith(r2)
                java.lang.String r2 = "intent://platformapi/startapp?"
                r3 = 1
                if (r0 != 0) goto L33
                java.lang.String r0 = r7.toLowerCase()
                java.lang.String r4 = r2.toLowerCase()
                boolean r0 = r0.startsWith(r4)
                if (r0 == 0) goto L22
                goto L33
            L22:
                com.alipay.sdk.auth.AuthActivity r0 = r5.a
                boolean r0 = com.alipay.sdk.auth.AuthActivity.a(r0, r7)
                if (r0 == 0) goto L2e
                r6.stopLoading()
                return r3
            L2e:
                boolean r6 = super.shouldOverrideUrlLoading(r6, r7)
                return r6
            L33:
                com.alipay.sdk.auth.AuthActivity r6 = r5.a     // Catch: java.lang.Throwable -> L67
                java.util.List<com.alipay.sdk.data.a$a> r0 = com.alipay.sdk.app.i.a     // Catch: java.lang.Throwable -> L67
                com.alipay.sdk.util.n$a r6 = com.alipay.sdk.util.n.a(r6, r0)     // Catch: java.lang.Throwable -> L67
                if (r6 == 0) goto L67
                boolean r0 = r6.a()     // Catch: java.lang.Throwable -> L67
                if (r0 != 0) goto L67
                boolean r6 = r6.b()     // Catch: java.lang.Throwable -> L67
                if (r6 == 0) goto L4a
                goto L67
            L4a:
                java.lang.String r6 = "intent://platformapi/startapp"
                boolean r6 = r7.startsWith(r6)     // Catch: java.lang.Throwable -> L67
                if (r6 == 0) goto L56
                java.lang.String r7 = r7.replaceFirst(r2, r1)     // Catch: java.lang.Throwable -> L67
            L56:
                android.content.Intent r6 = new android.content.Intent     // Catch: java.lang.Throwable -> L67
                java.lang.String r0 = "android.intent.action.VIEW"
                android.net.Uri r7 = android.net.Uri.parse(r7)     // Catch: java.lang.Throwable -> L67
                r6.<init>(r0, r7)     // Catch: java.lang.Throwable -> L67
                com.alipay.sdk.auth.AuthActivity r7 = r5.a     // Catch: java.lang.Throwable -> L67
                r7.startActivity(r6)     // Catch: java.lang.Throwable -> L67
            L67:
                return r3
        }
    }

    public AuthActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a() {
            r2 = this;
            com.alipay.sdk.widget.a r0 = r2.e     // Catch: java.lang.Exception -> L13
            if (r0 != 0) goto Ld
            com.alipay.sdk.widget.a r0 = new com.alipay.sdk.widget.a     // Catch: java.lang.Exception -> L13
            java.lang.String r1 = "正在加载"
            r0.<init>(r2, r1)     // Catch: java.lang.Exception -> L13
            r2.e = r0     // Catch: java.lang.Exception -> L13
        Ld:
            com.alipay.sdk.widget.a r0 = r2.e     // Catch: java.lang.Exception -> L13
            r0.b()     // Catch: java.lang.Exception -> L13
            goto L16
        L13:
            r0 = 0
            r2.e = r0
        L16:
            return
    }

    static void a(com.alipay.sdk.auth.AuthActivity r0, com.alipay.sdk.authjs.a r1) {
            r0.a(r1)
            return
    }

    private void a(com.alipay.sdk.authjs.a r4) {
            r3 = this;
            android.webkit.WebView r0 = r3.c
            if (r0 == 0) goto L26
            if (r4 != 0) goto L7
            goto L26
        L7:
            java.lang.String r4 = r4.g()     // Catch: org.json.JSONException -> L20
            java.lang.String r0 = "AlipayJSBridge._invokeJS(%s)"
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: org.json.JSONException -> L20
            r2 = 0
            r1[r2] = r4     // Catch: org.json.JSONException -> L20
            java.lang.String r4 = java.lang.String.format(r0, r1)     // Catch: org.json.JSONException -> L20
            com.alipay.sdk.auth.c r0 = new com.alipay.sdk.auth.c     // Catch: org.json.JSONException -> L20
            r0.<init>(r3, r4)     // Catch: org.json.JSONException -> L20
            r3.runOnUiThread(r0)     // Catch: org.json.JSONException -> L20
            goto L26
        L20:
            r4 = move-exception
            java.lang.String r0 = "msp"
            com.alipay.sdk.util.c.a(r0, r4)
        L26:
            return
    }

    static boolean a(com.alipay.sdk.auth.AuthActivity r0) {
            boolean r0 = r0.g
            return r0
    }

    static boolean a(com.alipay.sdk.auth.AuthActivity r0, java.lang.String r1) {
            boolean r0 = r0.a(r1)
            return r0
    }

    static boolean a(com.alipay.sdk.auth.AuthActivity r0, boolean r1) {
            r0.h = r1
            return r1
    }

    private boolean a(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String r0 = "http://"
            boolean r0 = r3.startsWith(r0)
            if (r0 != 0) goto L42
            java.lang.String r0 = "https://"
            boolean r0 = r3.startsWith(r0)
            if (r0 == 0) goto L19
            goto L42
        L19:
            java.lang.String r0 = "SDKLite://h5quit"
            boolean r0 = r0.equalsIgnoreCase(r3)
            if (r0 != 0) goto L3d
            java.lang.String r0 = r2.d
            boolean r0 = android.text.TextUtils.equals(r3, r0)
            if (r0 == 0) goto L3a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "?resultCode=150"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
        L3a:
            com.alipay.sdk.auth.g.a(r2, r3)
        L3d:
            r2.finish()
            r3 = 1
            return r3
        L42:
            return r1
    }

    static java.lang.String b(com.alipay.sdk.auth.AuthActivity r0) {
            java.lang.String r0 = r0.d
            return r0
    }

    private void b() {
            r1 = this;
            com.alipay.sdk.widget.a r0 = r1.e
            if (r0 == 0) goto L7
            r0.c()
        L7:
            r0 = 0
            r1.e = r0
            return
    }

    static void b(com.alipay.sdk.auth.AuthActivity r0, java.lang.String r1) {
            r0.b(r1)
            return
    }

    private void b(java.lang.String r4) {
            r3 = this;
            com.alipay.sdk.authjs.d r0 = new com.alipay.sdk.authjs.d
            android.content.Context r1 = r3.getApplicationContext()
            com.alipay.sdk.auth.b r2 = new com.alipay.sdk.auth.b
            r2.<init>(r3)
            r0.<init>(r1, r2)
            r0.a(r4)
            return
    }

    static boolean b(com.alipay.sdk.auth.AuthActivity r0, boolean r1) {
            r0.g = r1
            return r1
    }

    static void c(com.alipay.sdk.auth.AuthActivity r0) {
            r0.a()
            return
    }

    static android.os.Handler d(com.alipay.sdk.auth.AuthActivity r0) {
            android.os.Handler r0 = r0.f
            return r0
    }

    static void e(com.alipay.sdk.auth.AuthActivity r0) {
            r0.b()
            return
    }

    static android.webkit.WebView f(com.alipay.sdk.auth.AuthActivity r0) {
            android.webkit.WebView r0 = r0.c
            return r0
    }

    @Override
    public void onBackPressed() {
            r3 = this;
            android.webkit.WebView r0 = r3.c
            boolean r0 = r0.canGoBack()
            java.lang.String r1 = "?resultCode=150"
            if (r0 == 0) goto L26
            boolean r0 = r3.h
            if (r0 == 0) goto L25
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r3.d
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.alipay.sdk.auth.g.a(r3, r0)
            r3.finish()
        L25:
            return
        L26:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r3.d
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.alipay.sdk.auth.g.a(r3, r0)
            r3.finish()
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onConfigurationChanged(r1)
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r9) {
            r8 = this;
            java.lang.String r0 = "accessibilityTraversal"
            java.lang.String r1 = "accessibility"
            java.lang.String r2 = "searchBoxJavaBridge_"
            super.onCreate(r9)
            android.content.Intent r9 = r8.getIntent()     // Catch: java.lang.Exception -> L15c
            android.os.Bundle r9 = r9.getExtras()     // Catch: java.lang.Exception -> L15c
            if (r9 != 0) goto L17
            r8.finish()
            return
        L17:
            java.lang.String r3 = "redirectUri"
            java.lang.String r3 = r9.getString(r3)     // Catch: java.lang.Exception -> L158
            r8.d = r3     // Catch: java.lang.Exception -> L158
            java.lang.String r3 = "params"
            java.lang.String r9 = r9.getString(r3)     // Catch: java.lang.Exception -> L158
            boolean r3 = com.alipay.sdk.util.n.f(r9)
            if (r3 != 0) goto L2f
            r8.finish()
            return
        L2f:
            r3 = 1
            super.requestWindowFeature(r3)
            android.os.Handler r4 = new android.os.Handler
            android.os.Looper r5 = r8.getMainLooper()
            r4.<init>(r5)
            r8.f = r4
            android.widget.LinearLayout r4 = new android.widget.LinearLayout
            r4.<init>(r8)
            android.widget.LinearLayout$LayoutParams r5 = new android.widget.LinearLayout$LayoutParams
            r6 = -1
            r5.<init>(r6, r6)
            r4.setOrientation(r3)
            r8.setContentView(r4, r5)
            android.webkit.WebView r6 = new android.webkit.WebView
            r6.<init>(r8)
            r8.c = r6
            r6 = 1065353216(0x3f800000, float:1.0)
            r5.weight = r6
            android.webkit.WebView r6 = r8.c
            r7 = 0
            r6.setVisibility(r7)
            android.webkit.WebView r6 = r8.c
            r4.addView(r6, r5)
            android.webkit.WebView r4 = r8.c
            android.webkit.WebSettings r4 = r4.getSettings()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = r4.getUserAgentString()
            r5.append(r6)
            android.content.Context r6 = r8.getApplicationContext()
            java.lang.String r6 = com.alipay.sdk.util.n.c(r6)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r4.setUserAgentString(r5)
            android.webkit.WebSettings$RenderPriority r5 = android.webkit.WebSettings.RenderPriority.HIGH
            r4.setRenderPriority(r5)
            r4.setSupportMultipleWindows(r3)
            r4.setJavaScriptEnabled(r3)
            r4.setSavePassword(r7)
            r4.setJavaScriptCanOpenWindowsAutomatically(r3)
            int r5 = r4.getMinimumFontSize()
            int r5 = r5 + 8
            r4.setMinimumFontSize(r5)
            r4.setAllowFileAccess(r7)
            r4.setAllowFileAccessFromFileURLs(r7)
            r4.setAllowUniversalAccessFromFileURLs(r7)
            r4.setAllowContentAccess(r7)
            android.webkit.WebSettings$TextSize r5 = android.webkit.WebSettings.TextSize.NORMAL
            r4.setTextSize(r5)
            android.webkit.WebView r4 = r8.c
            r4.setVerticalScrollbarOverlay(r3)
            android.webkit.WebView r4 = r8.c
            com.alipay.sdk.auth.AuthActivity$c r5 = new com.alipay.sdk.auth.AuthActivity$c
            r6 = 0
            r5.<init>(r8, r6)
            r4.setWebViewClient(r5)
            android.webkit.WebView r4 = r8.c
            com.alipay.sdk.auth.AuthActivity$b r5 = new com.alipay.sdk.auth.AuthActivity$b
            r5.<init>(r8, r6)
            r4.setWebChromeClient(r5)
            android.webkit.WebView r4 = r8.c
            com.alipay.sdk.auth.a r5 = new com.alipay.sdk.auth.a
            r5.<init>(r8)
            r4.setDownloadListener(r5)
            android.webkit.WebView r4 = r8.c
            r4.loadUrl(r9)
            int r9 = android.os.Build.VERSION.SDK_INT
            r4 = 7
            if (r9 < r4) goto L10b
            android.webkit.WebView r9 = r8.c     // Catch: java.lang.Exception -> L10b
            android.webkit.WebSettings r9 = r9.getSettings()     // Catch: java.lang.Exception -> L10b
            java.lang.Class r9 = r9.getClass()     // Catch: java.lang.Exception -> L10b
            java.lang.String r4 = "setDomStorageEnabled"
            java.lang.Class[] r5 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L10b
            java.lang.Class r6 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L10b
            r5[r7] = r6     // Catch: java.lang.Exception -> L10b
            java.lang.reflect.Method r9 = r9.getMethod(r4, r5)     // Catch: java.lang.Exception -> L10b
            if (r9 == 0) goto L10b
            android.webkit.WebView r4 = r8.c     // Catch: java.lang.Exception -> L10b
            android.webkit.WebSettings r4 = r4.getSettings()     // Catch: java.lang.Exception -> L10b
            java.lang.Object[] r5 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L10b
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r3)     // Catch: java.lang.Exception -> L10b
            r5[r7] = r6     // Catch: java.lang.Exception -> L10b
            r9.invoke(r4, r5)     // Catch: java.lang.Exception -> L10b
        L10b:
            android.webkit.WebView r9 = r8.c     // Catch: java.lang.Throwable -> L11b
            r9.removeJavascriptInterface(r2)     // Catch: java.lang.Throwable -> L11b
            android.webkit.WebView r9 = r8.c     // Catch: java.lang.Throwable -> L11b
            r9.removeJavascriptInterface(r1)     // Catch: java.lang.Throwable -> L11b
            android.webkit.WebView r9 = r8.c     // Catch: java.lang.Throwable -> L11b
            r9.removeJavascriptInterface(r0)     // Catch: java.lang.Throwable -> L11b
            goto L148
        L11b:
            android.webkit.WebView r9 = r8.c     // Catch: java.lang.Throwable -> L147
            java.lang.Class r9 = r9.getClass()     // Catch: java.lang.Throwable -> L147
            java.lang.String r4 = "removeJavascriptInterface"
            java.lang.Class[] r5 = new java.lang.Class[r7]     // Catch: java.lang.Throwable -> L147
            java.lang.reflect.Method r9 = r9.getMethod(r4, r5)     // Catch: java.lang.Throwable -> L147
            if (r9 == 0) goto L148
            android.webkit.WebView r4 = r8.c     // Catch: java.lang.Throwable -> L147
            java.lang.Object[] r5 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L147
            r5[r7] = r2     // Catch: java.lang.Throwable -> L147
            r9.invoke(r4, r5)     // Catch: java.lang.Throwable -> L147
            android.webkit.WebView r2 = r8.c     // Catch: java.lang.Throwable -> L147
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L147
            r4[r7] = r1     // Catch: java.lang.Throwable -> L147
            r9.invoke(r2, r4)     // Catch: java.lang.Throwable -> L147
            android.webkit.WebView r1 = r8.c     // Catch: java.lang.Throwable -> L147
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L147
            r2[r7] = r0     // Catch: java.lang.Throwable -> L147
            r9.invoke(r1, r2)     // Catch: java.lang.Throwable -> L147
            goto L148
        L147:
        L148:
            int r9 = android.os.Build.VERSION.SDK_INT
            r0 = 19
            if (r9 < r0) goto L157
            android.webkit.WebView r9 = r8.c
            android.webkit.WebSettings r9 = r9.getSettings()
            r9.setCacheMode(r3)
        L157:
            return
        L158:
            r8.finish()
            return
        L15c:
            r8.finish()
            return
    }

    @Override
    protected void onDestroy() {
            r1 = this;
            super.onDestroy()
            android.webkit.WebView r0 = r1.c
            if (r0 == 0) goto L12
            r0.removeAllViews()
            android.webkit.WebView r0 = r1.c     // Catch: java.lang.Throwable -> Lf
            r0.destroy()     // Catch: java.lang.Throwable -> Lf
        Lf:
            r0 = 0
            r1.c = r0
        L12:
            return
    }
}

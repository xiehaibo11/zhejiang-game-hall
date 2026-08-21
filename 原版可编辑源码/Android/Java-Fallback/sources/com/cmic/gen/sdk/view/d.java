package com.cmic.gen.sdk.view;

public class d extends android.app.Dialog {
    private android.webkit.WebView a;
    private java.lang.String b;
    private java.lang.String c;
    private android.widget.LinearLayout d;



    public d(android.content.Context r1, int r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.c = r3     // Catch: java.lang.Exception -> L8
            r0.b = r4     // Catch: java.lang.Exception -> L8
            goto Lc
        L8:
            r1 = move-exception
            r1.printStackTrace()
        Lc:
            return
    }

    static android.webkit.WebView a(com.cmic.gen.sdk.view.d r0) {
            android.webkit.WebView r0 = r0.a
            return r0
    }

    private android.view.ViewGroup c() {
            r10 = this;
            android.widget.LinearLayout r0 = new android.widget.LinearLayout     // Catch: java.lang.Exception -> L98
            android.content.Context r1 = r10.getContext()     // Catch: java.lang.Exception -> L98
            r0.<init>(r1)     // Catch: java.lang.Exception -> L98
            r10.d = r0     // Catch: java.lang.Exception -> L98
            r1 = 1
            r0.setOrientation(r1)     // Catch: java.lang.Exception -> L98
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Exception -> L98
            r1 = -1
            r0.<init>(r1, r1)     // Catch: java.lang.Exception -> L98
            android.widget.LinearLayout r2 = r10.d     // Catch: java.lang.Exception -> L98
            r2.setLayoutParams(r0)     // Catch: java.lang.Exception -> L98
            android.content.Context r0 = r10.getContext()     // Catch: java.lang.Exception -> L98
            com.cmic.gen.sdk.auth.GenAuthnHelper r0 = com.cmic.gen.sdk.auth.GenAuthnHelper.getInstance(r0)     // Catch: java.lang.Exception -> L98
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r0.getAuthThemeConfig()     // Catch: java.lang.Exception -> L98
            int r2 = r0.getClauseLayoutResID()     // Catch: java.lang.Exception -> L98
            java.lang.String r3 = r10.c     // Catch: java.lang.Exception -> L98
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L98
            if (r3 == 0) goto L3b
            java.lang.String[] r3 = com.cmic.gen.sdk.c.d     // Catch: java.lang.Exception -> L98
            int r4 = r0.getAppLanguageType()     // Catch: java.lang.Exception -> L98
            r3 = r3[r4]     // Catch: java.lang.Exception -> L98
            goto L3d
        L3b:
            java.lang.String r3 = r10.c     // Catch: java.lang.Exception -> L98
        L3d:
            r8 = r3
            if (r2 == r1) goto L7e
            android.view.LayoutInflater r1 = r10.getLayoutInflater()     // Catch: java.lang.Exception -> L98
            android.widget.LinearLayout r3 = r10.d     // Catch: java.lang.Exception -> L98
            r4 = 0
            android.view.View r5 = r1.inflate(r2, r3, r4)     // Catch: java.lang.Exception -> L98
            android.content.Context r4 = r10.getContext()     // Catch: java.lang.Exception -> L98
            r6 = 1118481(0x111111, float:1.567326E-39)
            r7 = 0
            r9 = 0
            android.widget.RelativeLayout r1 = com.cmic.gen.sdk.view.e.a(r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> L98
            java.lang.String r0 = r0.getClauseLayoutReturnID()     // Catch: java.lang.Exception -> L98
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L98
            if (r2 != 0) goto L78
            android.content.Context r2 = r10.getContext()     // Catch: java.lang.Exception -> L98
            int r0 = com.cmic.gen.sdk.view.c.a(r2, r0)     // Catch: java.lang.Exception -> L98
            android.view.View r0 = r1.findViewById(r0)     // Catch: java.lang.Exception -> L98
            if (r0 == 0) goto L78
            com.cmic.gen.sdk.view.d$1 r2 = new com.cmic.gen.sdk.view.d$1     // Catch: java.lang.Exception -> L98
            r2.<init>(r10)     // Catch: java.lang.Exception -> L98
            r0.setOnClickListener(r2)     // Catch: java.lang.Exception -> L98
        L78:
            android.widget.LinearLayout r0 = r10.d     // Catch: java.lang.Exception -> L98
            r0.addView(r1)     // Catch: java.lang.Exception -> L98
            goto L9c
        L7e:
            android.content.Context r4 = r10.getContext()     // Catch: java.lang.Exception -> L98
            r5 = 0
            r6 = 1118481(0x111111, float:1.567326E-39)
            r7 = 2236962(0x222222, float:3.134651E-39)
            com.cmic.gen.sdk.view.d$2 r9 = new com.cmic.gen.sdk.view.d$2     // Catch: java.lang.Exception -> L98
            r9.<init>(r10)     // Catch: java.lang.Exception -> L98
            android.widget.RelativeLayout r0 = com.cmic.gen.sdk.view.e.a(r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> L98
            android.widget.LinearLayout r1 = r10.d     // Catch: java.lang.Exception -> L98
            r1.addView(r0)     // Catch: java.lang.Exception -> L98
            goto L9c
        L98:
            r0 = move-exception
            r0.printStackTrace()
        L9c:
            android.widget.LinearLayout r0 = r10.d
            return r0
    }

    private void d() {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            com.cmic.gen.sdk.auth.GenAuthnHelper r0 = com.cmic.gen.sdk.auth.GenAuthnHelper.getInstance(r0)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r0.getAuthThemeConfig()
            android.webkit.WebView r1 = new android.webkit.WebView
            android.content.Context r2 = r3.getContext()
            r1.<init>(r2)
            r3.a = r1
            android.webkit.WebSettings r1 = r1.getSettings()
            r2 = 0
            r1.setAllowFileAccess(r2)
            r1.setAllowContentAccess(r2)
            r1.setSavePassword(r2)
            boolean r0 = r0.getWebStorage()
            r1.setDomStorageEnabled(r0)
            r0 = 1
            r1.setJavaScriptEnabled(r0)
            android.widget.LinearLayout$LayoutParams r0 = new android.widget.LinearLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            android.widget.LinearLayout r1 = r3.d
            android.webkit.WebView r2 = r3.a
            r1.addView(r2, r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 >= r1) goto L58
            android.webkit.WebView r0 = r3.a
            java.lang.String r1 = "searchBoxJavaBridge_"
            r0.removeJavascriptInterface(r1)
            android.webkit.WebView r0 = r3.a
            java.lang.String r1 = "accessibility"
            r0.removeJavascriptInterface(r1)
            android.webkit.WebView r0 = r3.a
            java.lang.String r1 = "accessibilityTraversal"
            r0.removeJavascriptInterface(r1)
        L58:
            android.webkit.WebView r0 = r3.a
            android.webkit.WebViewClient r1 = new android.webkit.WebViewClient
            r1.<init>()
            r0.setWebViewClient(r1)
            android.webkit.WebView r0 = r3.a
            java.lang.String r1 = r3.b
            r0.loadUrl(r1)
            return
    }

    protected void a() {
            r4 = this;
            r0 = 1
            r4.requestWindowFeature(r0)
            android.view.Window r0 = r4.getWindow()
            r1 = 0
            r0.setFeatureDrawableAlpha(r1, r1)
            android.content.Context r0 = r4.getContext()
            com.cmic.gen.sdk.auth.GenAuthnHelper r0 = com.cmic.gen.sdk.auth.GenAuthnHelper.getInstance(r0)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r0.getAuthThemeConfig()
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 21
            if (r2 < r3) goto L4c
            int r2 = r0.getStatusBarColor()
            if (r2 == 0) goto L4c
            android.view.Window r2 = r4.getWindow()
            r3 = -2147483648(0xffffffff80000000, float:-0.0)
            r2.addFlags(r3)
            android.view.Window r2 = r4.getWindow()
            r3 = 67108864(0x4000000, float:1.5046328E-36)
            r2.clearFlags(r3)
            android.view.Window r2 = r4.getWindow()
            int r3 = r0.getStatusBarColor()
            r2.setStatusBarColor(r3)
            android.view.Window r2 = r4.getWindow()
            int r3 = r0.getStatusBarColor()
            r2.setNavigationBarColor(r3)
        L4c:
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 23
            if (r2 < r3) goto L71
            boolean r0 = r0.isLightColor()
            if (r0 == 0) goto L66
            android.view.Window r0 = r4.getWindow()
            android.view.View r0 = r0.getDecorView()
            r1 = 8192(0x2000, float:1.148E-41)
            r0.setSystemUiVisibility(r1)
            goto L71
        L66:
            android.view.Window r0 = r4.getWindow()
            android.view.View r0 = r0.getDecorView()
            r0.setSystemUiVisibility(r1)
        L71:
            android.view.ViewGroup r0 = r4.c()
            r4.setContentView(r0)
            return
    }

    public void b() {
            r1 = this;
            android.webkit.WebView r0 = r1.a
            boolean r0 = r0.canGoBack()
            if (r0 == 0) goto Le
            android.webkit.WebView r0 = r1.a
            r0.goBack()
            goto L11
        Le:
            r1.dismiss()
        L11:
            return
    }

    @Override
    public void dismiss() {
            r1 = this;
            super.dismiss()
            android.webkit.WebView r0 = r1.a
            if (r0 == 0) goto La
            r0.stopLoading()
        La:
            return
    }

    @Override
    public void show() {
            r1 = this;
            android.widget.LinearLayout r0 = r1.d
            if (r0 != 0) goto L7
            r1.a()
        L7:
            android.webkit.WebView r0 = r1.a
            if (r0 != 0) goto Le
            r1.d()
        Le:
            super.show()
            return
    }
}

package com.tkay.expressad.atsignalcommon.base;

public class BaseWebView extends android.webkit.WebView {
    private android.view.View.OnTouchListener a;
    private android.view.View.OnTouchListener b;
    protected android.content.Context e;
    public long lastTouchTime;
    public com.tkay.expressad.atsignalcommon.base.b mWebViewClient;


    public BaseWebView(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            r0 = 0
            r2.lastTouchTime = r0
            com.tkay.expressad.atsignalcommon.base.BaseWebView$1 r0 = new com.tkay.expressad.atsignalcommon.base.BaseWebView$1
            r0.<init>(r2)
            r2.a = r0
            r2.e = r3
            r2.a()
            return
    }

    public BaseWebView(android.content.Context r3, android.util.AttributeSet r4) {
            r2 = this;
            r2.<init>(r3, r4)
            r0 = 0
            r2.lastTouchTime = r0
            com.tkay.expressad.atsignalcommon.base.BaseWebView$1 r4 = new com.tkay.expressad.atsignalcommon.base.BaseWebView$1
            r4.<init>(r2)
            r2.a = r4
            r2.e = r3
            r2.a()
            return
    }

    public BaseWebView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r2 = 0
            r0.lastTouchTime = r2
            com.tkay.expressad.atsignalcommon.base.BaseWebView$1 r2 = new com.tkay.expressad.atsignalcommon.base.BaseWebView$1
            r2.<init>(r0)
            r0.a = r2
            r0.e = r1
            r0.a()
            return
    }

    static android.view.View.OnTouchListener a(com.tkay.expressad.atsignalcommon.base.BaseWebView r0) {
            android.view.View$OnTouchListener r0 = r0.b
            return r0
    }

    protected java.lang.String a(java.lang.String r5) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 != 0) goto L33
            java.lang.String r0 = "../"
            boolean r0 = r5.contains(r0)
            r2 = 1
            if (r0 == 0) goto L12
        L10:
            r1 = r2
            goto L33
        L12:
            java.lang.String r0 = "file"
            boolean r0 = r5.startsWith(r0)
            if (r0 == 0) goto L33
            android.net.Uri r0 = android.net.Uri.parse(r5)
            java.lang.String r0 = r0.getPath()
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 != 0) goto L10
            java.lang.String r3 = com.tkay.expressad.foundation.h.r.a()
            boolean r0 = r0.contains(r3)
            if (r0 != 0) goto L33
            goto L10
        L33:
            if (r1 == 0) goto L46
            java.lang.String r5 = java.lang.String.valueOf(r5)
            java.lang.String r0 = "illegal URL: "
            java.lang.String r5 = r0.concat(r5)
            java.lang.String r0 = "tkay_express"
            android.util.Log.e(r0, r5)
            java.lang.String r5 = "about:blank"
        L46:
            return r5
    }

    protected void a() {
            r7 = this;
            com.tkay.expressad.atsignalcommon.base.b r0 = r7.mWebViewClient
            if (r0 != 0) goto Le
            com.tkay.expressad.atsignalcommon.base.b r0 = new com.tkay.expressad.atsignalcommon.base.b
            r0.<init>()
            r7.mWebViewClient = r0
            r7.setWebViewClient(r0)
        Le:
            r0 = 0
            r7.setHorizontalScrollBarEnabled(r0)
            r7.setVerticalScrollBarEnabled(r0)
            r7.setVerticalScrollBarEnabled(r0)
            r7.requestFocus()
            android.webkit.WebSettings r1 = r7.getSettings()
            r2 = 1
            r1.setJavaScriptEnabled(r2)
            r1.setAppCacheEnabled(r2)
            r3 = 5242880(0x500000, double:2.590327E-317)
            r1.setAppCacheMaxSize(r3)
            r1.setAllowFileAccess(r2)
            r1.setBuiltInZoomControls(r2)
            r1.setJavaScriptCanOpenWindowsAutomatically(r2)
            r1.setDomStorageEnabled(r2)
            r1.setSupportZoom(r0)
            r1.setSavePassword(r0)
            r1.setDatabaseEnabled(r2)
            r1.setUseWideViewPort(r2)
            r1.setLoadWithOverviewMode(r2)
            android.webkit.WebSettings$RenderPriority r3 = android.webkit.WebSettings.RenderPriority.HIGH
            r1.setRenderPriority(r3)
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 26
            if (r3 < r4) goto L5a
            r1.setSafeBrowsingEnabled(r0)     // Catch: java.lang.Throwable -> L56
            goto L5a
        L56:
            r3 = move-exception
            r3.printStackTrace()
        L5a:
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 17
            if (r3 < r4) goto L63
            r1.setMediaPlaybackRequiresUserGesture(r0)
        L63:
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L6d
            r4 = 16
            if (r3 < r4) goto L71
            r1.setAllowUniversalAccessFromFileURLs(r0)     // Catch: java.lang.Throwable -> L6d
            goto L71
        L6d:
            r3 = move-exception
            r3.printStackTrace()
        L71:
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L7b
            r4 = 21
            if (r3 < r4) goto L7f
            r1.setMixedContentMode(r0)     // Catch: java.lang.Exception -> L7b
            goto L7f
        L7b:
            r3 = move-exception
            r3.printStackTrace()
        L7f:
            r1.setDatabaseEnabled(r2)
            android.content.Context r3 = r7.e
            java.lang.String r4 = "database"
            java.io.File r3 = r3.getDir(r4, r0)
            java.lang.String r3 = r3.getPath()
            r1.setDatabasePath(r3)
            r1.setGeolocationEnabled(r2)
            r1.setGeolocationDatabasePath(r3)
            java.lang.Class<android.webkit.WebSettings> r3 = android.webkit.WebSettings.class
            java.lang.String r4 = "setDisplayZoomControls"
            java.lang.Class[] r5 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> Lb1
            java.lang.Class r6 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> Lb1
            r5[r0] = r6     // Catch: java.lang.Exception -> Lb1
            java.lang.reflect.Method r3 = r3.getDeclaredMethod(r4, r5)     // Catch: java.lang.Exception -> Lb1
            r3.setAccessible(r2)     // Catch: java.lang.Exception -> Lb1
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> Lb1
            java.lang.Boolean r5 = java.lang.Boolean.FALSE     // Catch: java.lang.Exception -> Lb1
            r4[r0] = r5     // Catch: java.lang.Exception -> Lb1
            r3.invoke(r1, r4)     // Catch: java.lang.Exception -> Lb1
        Lb1:
            java.lang.Class<android.webkit.WebSettings> r3 = android.webkit.WebSettings.class
            java.lang.String r4 = "c2V0QWxsb3dVbml2ZXJzYWxBY2Nlc3NGcm9tRmlsZVVSTHM="
            java.lang.String r4 = com.tkay.core.common.l.c.b(r4)     // Catch: java.lang.Throwable -> Lcf
            java.lang.Class[] r5 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> Lcf
            java.lang.Class r6 = java.lang.Boolean.TYPE     // Catch: java.lang.Throwable -> Lcf
            r5[r0] = r6     // Catch: java.lang.Throwable -> Lcf
            java.lang.reflect.Method r3 = r3.getDeclaredMethod(r4, r5)     // Catch: java.lang.Throwable -> Lcf
            r3.setAccessible(r2)     // Catch: java.lang.Throwable -> Lcf
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> Lcf
            java.lang.Boolean r4 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> Lcf
            r2[r0] = r4     // Catch: java.lang.Throwable -> Lcf
            r3.invoke(r1, r2)     // Catch: java.lang.Throwable -> Lcf
        Lcf:
            android.view.View$OnTouchListener r0 = r7.a
            super.setOnTouchListener(r0)
            return
    }

    public com.tkay.expressad.atsignalcommon.base.b getBaseWebViewClient() {
            r1 = this;
            com.tkay.expressad.atsignalcommon.base.b r0 = r1.mWebViewClient
            return r0
    }

    @Override
    public void loadDataWithBaseURL(java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11) {
            r6 = this;
            java.lang.String r1 = r6.a(r7)
            r0 = r6
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            super.loadDataWithBaseURL(r1, r2, r3, r4, r5)
            return
    }

    @Override
    public void loadUrl(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = r0.a(r1)
            super.loadUrl(r1)
            return
    }

    @Override
    public void loadUrl(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2) {
            r0 = this;
            java.lang.String r1 = r0.a(r1)
            super.loadUrl(r1, r2)
            return
    }

    @Override
    public void reload() {
            r0 = this;
            super.reload()
            return
    }

    public void setFilter(com.tkay.expressad.atsignalcommon.base.a r2) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.base.b r0 = r1.mWebViewClient
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    @Override
    public void setOnTouchListener(android.view.View.OnTouchListener r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void setTransparent() {
            r2 = this;
            r0 = 1
            r1 = 0
            r2.setLayerType(r0, r1)
            r0 = 0
            r2.setBackgroundColor(r0)
            return
    }

    @Override
    public void setWebViewClient(android.webkit.WebViewClient r2) {
            r1 = this;
            super.setWebViewClient(r2)
            boolean r0 = r2 instanceof com.tkay.expressad.atsignalcommon.base.b
            if (r0 == 0) goto Lb
            com.tkay.expressad.atsignalcommon.base.b r2 = (com.tkay.expressad.atsignalcommon.base.b) r2
            r1.mWebViewClient = r2
        Lb:
            return
    }
}

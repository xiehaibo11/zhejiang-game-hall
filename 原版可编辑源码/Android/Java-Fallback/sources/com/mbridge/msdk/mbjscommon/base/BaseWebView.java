package com.mbridge.msdk.mbjscommon.base;

public class BaseWebView extends android.webkit.WebView {
    protected android.content.Context a;
    private android.view.View.OnTouchListener b;
    private android.view.View.OnTouchListener c;
    public long lastTouchTime;
    public com.mbridge.msdk.mbjscommon.base.b mWebViewClient;


    public BaseWebView(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            r0 = 0
            r2.lastTouchTime = r0
            com.mbridge.msdk.mbjscommon.base.BaseWebView$1 r0 = new com.mbridge.msdk.mbjscommon.base.BaseWebView$1
            r0.<init>(r2)
            r2.b = r0
            r2.a = r3
            r2.a()
            return
    }

    public BaseWebView(android.content.Context r3, android.util.AttributeSet r4) {
            r2 = this;
            r2.<init>(r3, r4)
            r0 = 0
            r2.lastTouchTime = r0
            com.mbridge.msdk.mbjscommon.base.BaseWebView$1 r4 = new com.mbridge.msdk.mbjscommon.base.BaseWebView$1
            r4.<init>(r2)
            r2.b = r4
            r2.a = r3
            r2.a()
            return
    }

    public BaseWebView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r2 = 0
            r0.lastTouchTime = r2
            com.mbridge.msdk.mbjscommon.base.BaseWebView$1 r2 = new com.mbridge.msdk.mbjscommon.base.BaseWebView$1
            r2.<init>(r0)
            r0.b = r2
            r0.a = r1
            r0.a()
            return
    }

    static android.view.View.OnTouchListener a(com.mbridge.msdk.mbjscommon.base.BaseWebView r0) {
            android.view.View$OnTouchListener r0 = r0.c
            return r0
    }

    protected void a() {
            r7 = this;
            com.mbridge.msdk.mbjscommon.base.b r0 = r7.mWebViewClient
            if (r0 != 0) goto Le
            com.mbridge.msdk.mbjscommon.base.b r0 = new com.mbridge.msdk.mbjscommon.base.b
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
            r1.setAllowUniversalAccessFromFileURLs(r2)     // Catch: java.lang.Throwable -> L67
            goto L6b
        L67:
            r3 = move-exception
            r3.printStackTrace()
        L6b:
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L75
            r4 = 21
            if (r3 < r4) goto L79
            r1.setMixedContentMode(r0)     // Catch: java.lang.Exception -> L75
            goto L79
        L75:
            r3 = move-exception
            r3.printStackTrace()
        L79:
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 5
            if (r3 < r4) goto L96
            r1.setDatabaseEnabled(r2)
            android.content.Context r3 = r7.a
            java.lang.String r4 = "database"
            java.io.File r3 = r3.getDir(r4, r0)
            java.lang.String r3 = r3.getPath()
            r1.setDatabasePath(r3)
            r1.setGeolocationEnabled(r2)
            r1.setGeolocationDatabasePath(r3)
        L96:
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 11
            if (r3 < r4) goto Lb8
            java.lang.Class<android.webkit.WebSettings> r3 = android.webkit.WebSettings.class
            java.lang.String r4 = "setDisplayZoomControls"
            java.lang.Class[] r5 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> Lb8
            java.lang.Class r6 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> Lb8
            r5[r0] = r6     // Catch: java.lang.Exception -> Lb8
            java.lang.reflect.Method r3 = r3.getDeclaredMethod(r4, r5)     // Catch: java.lang.Exception -> Lb8
            r3.setAccessible(r2)     // Catch: java.lang.Exception -> Lb8
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> Lb8
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r0)     // Catch: java.lang.Exception -> Lb8
            r2[r0] = r4     // Catch: java.lang.Exception -> Lb8
            r3.invoke(r1, r2)     // Catch: java.lang.Exception -> Lb8
        Lb8:
            android.view.View$OnTouchListener r0 = r7.b
            super.setOnTouchListener(r0)
            return
    }

    @Override
    public void reload() {
            r0 = this;
            super.reload()
            return
    }

    public void setFilter(com.mbridge.msdk.mbjscommon.base.a r2) {
            r1 = this;
            com.mbridge.msdk.mbjscommon.base.b r0 = r1.mWebViewClient
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    @Override
    public void setOnTouchListener(android.view.View.OnTouchListener r1) {
            r0 = this;
            r0.c = r1
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
            boolean r0 = r2 instanceof com.mbridge.msdk.mbjscommon.base.b
            if (r0 == 0) goto Lb
            com.mbridge.msdk.mbjscommon.base.b r2 = (com.mbridge.msdk.mbjscommon.base.b) r2
            r1.mWebViewClient = r2
        Lb:
            return
    }
}

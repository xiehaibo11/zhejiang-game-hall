package com.mbridge.msdk.mbjscommon.windvane;

public class WindVaneWebView extends com.mbridge.msdk.mbjscommon.base.BaseWebView {
    protected com.mbridge.msdk.mbjscommon.windvane.l b;
    protected com.mbridge.msdk.mbjscommon.windvane.b c;
    protected com.mbridge.msdk.mbjscommon.windvane.g d;
    private java.lang.Object e;
    private java.lang.Object f;
    private java.lang.String g;
    private com.mbridge.msdk.mbjscommon.windvane.d h;
    private java.lang.String i;
    private boolean j;
    private float k;
    private float l;


    public WindVaneWebView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.j = r1
            r1 = 0
            r0.k = r1
            r0.l = r1
            return
    }

    public WindVaneWebView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.j = r1
            r1 = 0
            r0.k = r1
            r0.l = r1
            return
    }

    public WindVaneWebView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 0
            r0.j = r1
            r1 = 0
            r0.k = r1
            r0.l = r1
            return
    }

    static boolean a(com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0, boolean r1) {
            r0.j = r1
            return r1
    }

    @Override
    protected final void a() {
            r3 = this;
            super.a()
            android.webkit.WebSettings r0 = r3.getSettings()
            r1 = 0
            r0.setSavePassword(r1)
            android.webkit.WebSettings r0 = r3.getSettings()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            android.webkit.WebSettings r2 = r3.getSettings()
            java.lang.String r2 = r2.getUserAgentString()
            r1.append(r2)
            java.lang.String r2 = " WindVane/3.0.2"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.setUserAgentString(r1)
            com.mbridge.msdk.mbjscommon.windvane.l r0 = r3.b
            if (r0 != 0) goto L36
            com.mbridge.msdk.mbjscommon.windvane.l r0 = new com.mbridge.msdk.mbjscommon.windvane.l
            r0.<init>(r3)
            r3.b = r0
        L36:
            com.mbridge.msdk.mbjscommon.windvane.l r0 = r3.b
            r3.setWebViewChromeClient(r0)
            com.mbridge.msdk.mbjscommon.windvane.m r0 = new com.mbridge.msdk.mbjscommon.windvane.m
            r0.<init>()
            r3.mWebViewClient = r0
            com.mbridge.msdk.mbjscommon.base.b r0 = r3.mWebViewClient
            r3.setWebViewClient(r0)
            com.mbridge.msdk.mbjscommon.windvane.b r0 = r3.c
            if (r0 != 0) goto L57
            com.mbridge.msdk.mbjscommon.windvane.i r0 = new com.mbridge.msdk.mbjscommon.windvane.i
            android.content.Context r1 = r3.a
            r0.<init>(r1)
            r3.c = r0
            r3.setJsBridge(r0)
        L57:
            com.mbridge.msdk.mbjscommon.windvane.g r0 = new com.mbridge.msdk.mbjscommon.windvane.g
            android.content.Context r1 = r3.a
            r0.<init>(r1, r3)
            r3.d = r0
            return
    }

    public void clearWebView() {
            r1 = this;
            boolean r0 = r1.j
            if (r0 != 0) goto L9
            java.lang.String r0 = "about:blank"
            r1.loadUrl(r0)
        L9:
            return
    }

    public java.lang.String getCampaignId() {
            r1 = this;
            java.lang.String r0 = r1.g
            return r0
    }

    public com.mbridge.msdk.mbjscommon.windvane.b getJsBridge() {
            r1 = this;
            com.mbridge.msdk.mbjscommon.windvane.b r0 = r1.c
            return r0
    }

    public java.lang.Object getJsObject(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.mbjscommon.windvane.g r0 = r1.d
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            java.lang.Object r2 = r0.a(r2)
            return r2
    }

    public java.lang.Object getMraidObject() {
            r1 = this;
            java.lang.Object r0 = r1.f
            return r0
    }

    public java.lang.Object getObject() {
            r1 = this;
            java.lang.Object r0 = r1.e
            return r0
    }

    public java.lang.String getRid() {
            r1 = this;
            java.lang.String r0 = r1.i
            return r0
    }

    public com.mbridge.msdk.mbjscommon.windvane.d getWebViewListener() {
            r1 = this;
            com.mbridge.msdk.mbjscommon.windvane.d r0 = r1.h
            return r0
    }

    public boolean isDestoryed() {
            r1 = this;
            boolean r0 = r1.j
            return r0
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r8) {
            r7 = this;
            com.mbridge.msdk.mbjscommon.base.b r0 = r7.mWebViewClient
            if (r0 == 0) goto L7f
            com.mbridge.msdk.mbjscommon.base.b r0 = r7.mWebViewClient
            com.mbridge.msdk.mbjscommon.base.a r0 = r0.b()
            boolean r0 = r0 instanceof com.mbridge.msdk.mbjscommon.base.c
            if (r0 == 0) goto L7f
            java.lang.String r0 = r7.getUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L7f
            java.lang.String r1 = "https://play.google.com"
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L7f
            int r0 = r8.getAction()
            if (r0 != 0) goto L33
            float r0 = r8.getRawX()
            r7.k = r0
            float r0 = r8.getRawY()
            r7.l = r0
            goto L7f
        L33:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            r1 = 1097859072(0x41700000, float:15.0)
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r0, r1)
            float r1 = r8.getRawX()
            float r2 = r7.k
            float r1 = r1 - r2
            float r2 = r8.getY()
            float r3 = r7.l
            float r2 = r2 - r3
            r3 = 0
            int r4 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            r5 = -1082130432(0xffffffffbf800000, float:-1.0)
            if (r4 >= 0) goto L5d
            float r4 = r1 * r5
            float r6 = (float) r0
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 > 0) goto L7f
        L5d:
            int r4 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r4 <= 0) goto L66
            float r4 = (float) r0
            int r1 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
            if (r1 > 0) goto L7f
        L66:
            int r1 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r1 >= 0) goto L70
            float r5 = r5 * r2
            float r1 = (float) r0
            int r1 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r1 > 0) goto L7f
        L70:
            int r1 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r1 <= 0) goto L79
            float r0 = (float) r0
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 > 0) goto L7f
        L79:
            r8 = 0
            r7.setClickable(r8)
            r8 = 1
            return r8
        L7f:
            boolean r8 = super.onTouchEvent(r8)
            return r8
    }

    public void registerWindVanePlugin(java.lang.Class r2) {
            r1 = this;
            com.mbridge.msdk.mbjscommon.windvane.g r0 = r1.d
            if (r0 != 0) goto L5
            return
        L5:
            r0.a(r2)
            return
    }

    public void release() {
            r5 = this;
            r0 = 8
            r5.setVisibility(r0)     // Catch: java.lang.Throwable -> L30
            r5.removeAllViews()     // Catch: java.lang.Throwable -> L30
            r0 = 0
            r5.setDownloadListener(r0)     // Catch: java.lang.Throwable -> L30
            r5.e = r0     // Catch: java.lang.Throwable -> L30
            android.content.Context r0 = r5.getContext()     // Catch: java.lang.Throwable -> L30
            int r0 = com.mbridge.msdk.foundation.tools.ae.m(r0)     // Catch: java.lang.Throwable -> L30
            if (r0 != 0) goto L1f
            r0 = 1
            r5.j = r0     // Catch: java.lang.Throwable -> L30
            r5.destroy()     // Catch: java.lang.Throwable -> L30
            goto L34
        L1f:
            android.os.Handler r1 = new android.os.Handler     // Catch: java.lang.Throwable -> L30
            r1.<init>()     // Catch: java.lang.Throwable -> L30
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView$1 r2 = new com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView$1     // Catch: java.lang.Throwable -> L30
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L30
            int r0 = r0 * 1000
            long r3 = (long) r0     // Catch: java.lang.Throwable -> L30
            r1.postDelayed(r2, r3)     // Catch: java.lang.Throwable -> L30
            goto L34
        L30:
            r0 = move-exception
            r0.printStackTrace()
        L34:
            return
    }

    public void setApiManagerContext(android.content.Context r2) {
            r1 = this;
            com.mbridge.msdk.mbjscommon.windvane.g r0 = r1.d
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public void setApiManagerJSFactory(java.lang.Object r2) {
            r1 = this;
            com.mbridge.msdk.mbjscommon.windvane.g r0 = r1.d
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public void setCampaignId(java.lang.String r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void setJsBridge(com.mbridge.msdk.mbjscommon.windvane.b r1) {
            r0 = this;
            r0.c = r1
            r1.a(r0)
            return
    }

    public void setMraidObject(java.lang.Object r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void setObject(java.lang.Object r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void setRid(java.lang.String r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public void setWebViewChromeClient(com.mbridge.msdk.mbjscommon.windvane.l r1) {
            r0 = this;
            r0.b = r1
            r0.setWebChromeClient(r1)
            return
    }

    public void setWebViewListener(com.mbridge.msdk.mbjscommon.windvane.d r2) {
            r1 = this;
            r1.h = r2
            com.mbridge.msdk.mbjscommon.windvane.l r0 = r1.b
            if (r0 == 0) goto L9
            r0.a(r2)
        L9:
            com.mbridge.msdk.mbjscommon.base.b r0 = r1.mWebViewClient
            if (r0 == 0) goto L12
            com.mbridge.msdk.mbjscommon.base.b r0 = r1.mWebViewClient
            r0.a(r2)
        L12:
            return
    }

    public void setWebViewTransparent() {
            r0 = this;
            super.setTransparent()
            return
    }
}

package com.tkay.expressad.atsignalcommon.windvane;

public class WindVaneWebView extends com.tkay.expressad.atsignalcommon.base.BaseWebView {
    private java.lang.Object a;
    private java.lang.Object b;
    private java.lang.String c;
    private com.tkay.expressad.atsignalcommon.windvane.e d;
    protected com.tkay.expressad.atsignalcommon.windvane.o f;
    protected com.tkay.expressad.atsignalcommon.windvane.d g;
    protected com.tkay.expressad.atsignalcommon.windvane.i h;
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

    static boolean a(com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1) {
            r0 = 1
            r1.j = r0
            return r0
    }

    @Override
    protected final void a() {
            r4 = this;
            java.lang.String r0 = " WindVane/3.0.2"
            super.a()
            android.webkit.WebSettings r1 = r4.getSettings()
            r2 = 0
            r1.setSavePassword(r2)
            android.webkit.WebSettings r1 = r4.getSettings()     // Catch: java.lang.Throwable -> L2c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2c
            r2.<init>()     // Catch: java.lang.Throwable -> L2c
            android.webkit.WebSettings r3 = r4.getSettings()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r3 = r3.getUserAgentString()     // Catch: java.lang.Throwable -> L2c
            r2.append(r3)     // Catch: java.lang.Throwable -> L2c
            r2.append(r0)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L2c
            r1.setUserAgentString(r2)     // Catch: java.lang.Throwable -> L2c
            goto L46
        L2c:
            android.webkit.WebSettings r1 = r4.getSettings()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = com.tkay.core.common.l.d.i()
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.setUserAgentString(r0)
        L46:
            com.tkay.expressad.atsignalcommon.windvane.o r0 = r4.f
            if (r0 != 0) goto L51
            com.tkay.expressad.atsignalcommon.windvane.o r0 = new com.tkay.expressad.atsignalcommon.windvane.o
            r0.<init>(r4)
            r4.f = r0
        L51:
            com.tkay.expressad.atsignalcommon.windvane.o r0 = r4.f
            r4.setWebViewChromeClient(r0)
            com.tkay.expressad.atsignalcommon.windvane.p r0 = new com.tkay.expressad.atsignalcommon.windvane.p
            r0.<init>()
            r4.mWebViewClient = r0
            com.tkay.expressad.atsignalcommon.base.b r0 = r4.mWebViewClient
            r4.setWebViewClient(r0)
            com.tkay.expressad.atsignalcommon.windvane.d r0 = r4.g
            if (r0 != 0) goto L72
            com.tkay.expressad.atsignalcommon.windvane.m r0 = new com.tkay.expressad.atsignalcommon.windvane.m
            android.content.Context r1 = r4.e
            r0.<init>(r1)
            r4.g = r0
            r4.setSignalCommunication(r0)
        L72:
            com.tkay.expressad.atsignalcommon.windvane.i r0 = new com.tkay.expressad.atsignalcommon.windvane.i
            android.content.Context r1 = r4.e
            r0.<init>(r1, r4)
            r4.h = r0
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
            java.lang.String r0 = r1.c
            return r0
    }

    public java.lang.Object getJsObject(java.lang.String r2) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.windvane.i r0 = r1.h
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            java.lang.Object r2 = r0.a(r2)
            return r2
    }

    public java.lang.Object getMraidObject() {
            r1 = this;
            java.lang.Object r0 = r1.b
            return r0
    }

    public java.lang.Object getObject() {
            r1 = this;
            java.lang.Object r0 = r1.a
            return r0
    }

    public java.lang.String getRid() {
            r1 = this;
            java.lang.String r0 = r1.i
            return r0
    }

    public com.tkay.expressad.atsignalcommon.windvane.d getSignalCommunication() {
            r1 = this;
            com.tkay.expressad.atsignalcommon.windvane.d r0 = r1.g
            return r0
    }

    public com.tkay.expressad.atsignalcommon.windvane.e getWebViewListener() {
            r1 = this;
            com.tkay.expressad.atsignalcommon.windvane.e r0 = r1.d
            return r0
    }

    public boolean isDestroyed() {
            r1 = this;
            boolean r0 = r1.j
            return r0
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r7) {
            r6 = this;
            com.tkay.expressad.atsignalcommon.base.b r0 = r6.mWebViewClient
            if (r0 == 0) goto L6f
            com.tkay.expressad.atsignalcommon.base.b r0 = r6.mWebViewClient
            com.tkay.expressad.atsignalcommon.base.a r0 = r0.b()
            boolean r0 = r0 instanceof android.content.IntentFilter
            if (r0 == 0) goto L6f
            java.lang.String r0 = r6.getUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L6f
            java.lang.String r1 = "https://play.google.com"
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L6f
            int r0 = r7.getAction()
            if (r0 != 0) goto L33
            float r0 = r7.getRawX()
            r6.k = r0
            float r0 = r7.getRawY()
            r6.l = r0
            goto L6f
        L33:
            float r0 = r7.getRawX()
            float r1 = r6.k
            float r0 = r0 - r1
            float r1 = r7.getY()
            float r2 = r6.l
            float r1 = r1 - r2
            r2 = 0
            int r3 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r4 = -1082130432(0xffffffffbf800000, float:-1.0)
            r5 = 1111490560(0x42400000, float:48.0)
            if (r3 >= 0) goto L50
            float r3 = r0 * r4
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 > 0) goto L6f
        L50:
            int r3 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r3 <= 0) goto L58
            int r0 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r0 > 0) goto L6f
        L58:
            int r0 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r0 >= 0) goto L61
            float r4 = r4 * r1
            int r0 = (r4 > r5 ? 1 : (r4 == r5 ? 0 : -1))
            if (r0 > 0) goto L6f
        L61:
            int r0 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r0 <= 0) goto L69
            int r0 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r0 > 0) goto L6f
        L69:
            r7 = 0
            r6.setClickable(r7)
            r7 = 1
            return r7
        L6f:
            boolean r7 = super.onTouchEvent(r7)
            return r7
    }

    public void registerWindVanePlugin(java.lang.Class r2) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.windvane.i r0 = r1.h
            if (r0 != 0) goto L5
            return
        L5:
            com.tkay.expressad.atsignalcommon.windvane.i.a(r2)
            return
    }

    public void release() {
            r5 = this;
            r5.removeAllViews()     // Catch: java.lang.Throwable -> L2a
            r0 = 0
            r5.setDownloadListener(r0)     // Catch: java.lang.Throwable -> L2a
            r5.a = r0     // Catch: java.lang.Throwable -> L2a
            android.content.Context r0 = r5.getContext()     // Catch: java.lang.Throwable -> L2a
            int r0 = com.tkay.expressad.foundation.h.t.j(r0)     // Catch: java.lang.Throwable -> L2a
            if (r0 != 0) goto L1a
            r0 = 1
            r5.j = r0     // Catch: java.lang.Throwable -> L2a
            r5.destroy()     // Catch: java.lang.Throwable -> L2a
            return
        L1a:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L2a
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView$1 r2 = new com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView$1     // Catch: java.lang.Throwable -> L2a
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L2a
            int r0 = r0 * 1000
            long r3 = (long) r0     // Catch: java.lang.Throwable -> L2a
            r1.a(r2, r3)     // Catch: java.lang.Throwable -> L2a
            return
        L2a:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    public void setApiManagerContext(android.content.Context r2) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.windvane.i r0 = r1.h
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public void setApiManagerJSFactory(java.lang.Object r2) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.windvane.i r0 = r1.h
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public void setCampaignId(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setMraidObject(java.lang.Object r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void setObject(java.lang.Object r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void setRid(java.lang.String r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public void setSignalCommunication(com.tkay.expressad.atsignalcommon.windvane.d r1) {
            r0 = this;
            r0.g = r1
            r1.a(r0)
            return
    }

    public void setWebViewChromeClient(com.tkay.expressad.atsignalcommon.windvane.o r1) {
            r0 = this;
            r0.f = r1
            r0.setWebChromeClient(r1)
            return
    }

    public void setWebViewListener(com.tkay.expressad.atsignalcommon.windvane.e r2) {
            r1 = this;
            r1.d = r2
            com.tkay.expressad.atsignalcommon.windvane.o r0 = r1.f
            if (r0 == 0) goto L9
            r0.a(r2)
        L9:
            com.tkay.expressad.atsignalcommon.base.b r0 = r1.mWebViewClient
            if (r0 == 0) goto L12
            com.tkay.expressad.atsignalcommon.base.b r0 = r1.mWebViewClient
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

package com.tkay.expressad.splash.view;

public class TYSplashView extends android.widget.RelativeLayout {
    protected static final java.lang.String a = "webviewshow";
    protected static final java.lang.String b = "updateCountdown";
    private static java.lang.String c = "TYSplashView";
    private int d;
    private com.tkay.expressad.splash.view.TYSplashWebview e;
    private android.view.ViewGroup f;
    private android.view.View g;
    private android.view.View h;
    private int i;
    private boolean j;
    private boolean k;
    private android.view.ViewGroup l;
    private boolean m;
    private android.view.View n;
    private boolean o;
    private boolean p;
    private android.widget.RelativeLayout.LayoutParams q;
    private com.tkay.expressad.splash.js.SplashJSBridgeImpl r;
    private boolean s;


    static {
            return
    }

    public TYSplashView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public TYSplashView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public TYSplashView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 0
            r0.s = r1
            r0.b()
            return
    }

    static com.tkay.expressad.splash.view.TYSplashWebview a(com.tkay.expressad.splash.view.TYSplashView r0) {
            com.tkay.expressad.splash.view.TYSplashWebview r0 = r0.e
            return r0
    }

    static java.lang.String a() {
            java.lang.String r0 = com.tkay.expressad.splash.view.TYSplashView.c
            return r0
    }

    private void b() {
            r2 = this;
            r0 = 0
            r2.setBackgroundColor(r0)
            android.content.res.Resources r1 = r2.getResources()
            android.content.res.Configuration r1 = r1.getConfiguration()
            int r1 = r1.orientation
            r2.d = r1
            r2.s = r0
            return
    }

    private void c() {
            r5 = this;
            android.view.View r0 = r5.h
            r1 = 11
            r2 = -1
            if (r0 != 0) goto L3f
            boolean r0 = r5.o
            if (r0 == 0) goto L26
            android.view.View r0 = r5.n
            if (r0 == 0) goto L26
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L1a
            android.view.View r0 = r5.n
            com.tkay.core.common.l.u.a(r0)
        L1a:
            android.view.View r0 = r5.n
            android.view.ViewGroup$LayoutParams r3 = new android.view.ViewGroup$LayoutParams
            r3.<init>(r2, r2)
            r5.addView(r0, r3)
            goto L13c
        L26:
            com.tkay.expressad.splash.view.TYSplashWebview r0 = r5.e
            if (r0 == 0) goto L3a
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L3a
            com.tkay.expressad.splash.view.TYSplashWebview r0 = r5.e
            android.view.ViewGroup$LayoutParams r3 = new android.view.ViewGroup$LayoutParams
            r3.<init>(r2, r2)
            r5.addView(r0, r3)
        L3a:
            r5.d()
            goto L13c
        L3f:
            android.view.ViewGroup r0 = r5.f
            if (r0 != 0) goto L54
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            android.content.Context r3 = r5.getContext()
            r0.<init>(r3)
            r5.f = r0
            r3 = 2147482647(0x7ffffc17, float:NaN)
            r0.setId(r3)
        L54:
            int r0 = r5.d
            r3 = 2
            if (r0 != r3) goto Lcd
            android.content.Context r0 = r5.getContext()
            int r0 = com.tkay.expressad.foundation.h.t.f(r0)
            r5.i = r0
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r0.<init>(r2, r2)
            r3 = 0
            android.view.ViewGroup r4 = r5.f
            int r4 = r4.getId()
            r0.addRule(r3, r4)
            boolean r3 = r5.o
            if (r3 == 0) goto L8b
            android.view.View r3 = r5.n
            if (r3 == 0) goto L8b
            android.view.ViewParent r3 = r3.getParent()
            if (r3 == 0) goto L85
            android.view.View r3 = r5.n
            com.tkay.core.common.l.u.a(r3)
        L85:
            android.view.View r3 = r5.n
            r5.addView(r3, r0)
            goto L9d
        L8b:
            com.tkay.expressad.splash.view.TYSplashWebview r3 = r5.e
            if (r3 == 0) goto L9a
            android.view.ViewParent r3 = r3.getParent()
            if (r3 != 0) goto L9a
            com.tkay.expressad.splash.view.TYSplashWebview r3 = r5.e
            r5.addView(r3, r0)
        L9a:
            r5.d()
        L9d:
            android.view.ViewGroup r0 = r5.f
            if (r0 == 0) goto L13c
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L13c
            android.widget.RelativeLayout$LayoutParams r0 = r5.q
            int r0 = r0.width
            int r3 = r5.i
            int r4 = r3 / 4
            if (r0 <= r4) goto Lb3
            int r0 = r3 / 4
        Lb3:
            android.view.ViewGroup r3 = r5.f
            android.view.View r4 = r5.h
            r3.addView(r4, r0, r2)
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r3.<init>(r0, r2)
            r3.addRule(r1)
            r0 = 13
            r3.addRule(r0)
            android.view.ViewGroup r0 = r5.f
            r5.addView(r0, r3)
            goto L13c
        Lcd:
            android.content.Context r0 = r5.getContext()
            int r0 = com.tkay.expressad.foundation.h.t.e(r0)
            r5.i = r0
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r0.<init>(r2, r2)
            android.view.ViewGroup r4 = r5.f
            int r4 = r4.getId()
            r0.addRule(r3, r4)
            boolean r3 = r5.o
            if (r3 == 0) goto Lfe
            android.view.View r3 = r5.n
            if (r3 == 0) goto Lfe
            android.view.ViewParent r3 = r3.getParent()
            if (r3 == 0) goto Lf8
            android.view.View r3 = r5.n
            com.tkay.core.common.l.u.a(r3)
        Lf8:
            android.view.View r3 = r5.n
            r5.addView(r3, r0)
            goto L110
        Lfe:
            com.tkay.expressad.splash.view.TYSplashWebview r3 = r5.e
            if (r3 == 0) goto L10d
            android.view.ViewParent r3 = r3.getParent()
            if (r3 != 0) goto L10d
            com.tkay.expressad.splash.view.TYSplashWebview r3 = r5.e
            r5.addView(r3, r0)
        L10d:
            r5.d()
        L110:
            android.view.ViewGroup r0 = r5.f
            if (r0 == 0) goto L13c
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L13c
            android.widget.RelativeLayout$LayoutParams r0 = r5.q
            int r0 = r0.height
            int r3 = r5.i
            int r4 = r3 / 4
            if (r0 <= r4) goto L126
            int r0 = r3 / 4
        L126:
            android.view.ViewGroup r3 = r5.f
            android.view.View r4 = r5.h
            r3.addView(r4, r2, r0)
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r3.<init>(r2, r0)
            r0 = 12
            r3.addRule(r0)
            android.view.ViewGroup r0 = r5.f
            r5.addView(r0, r3)
        L13c:
            android.view.View r0 = r5.g
            if (r0 == 0) goto L188
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L183
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r2 = r5.getContext()
            r3 = 1120403456(0x42c80000, float:100.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r3)
            android.content.Context r3 = r5.getContext()
            r4 = 1106247680(0x41f00000, float:30.0)
            int r3 = com.tkay.expressad.foundation.h.t.b(r3, r4)
            r0.<init>(r2, r3)
            r2 = 10
            r0.addRule(r2)
            r0.addRule(r1)
            android.content.Context r1 = r5.getContext()
            r2 = 1092616192(0x41200000, float:10.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r0.rightMargin = r1
            android.content.Context r1 = r5.getContext()
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r0.topMargin = r1
            android.view.View r1 = r5.g
            r5.addView(r1, r0)
            return
        L183:
            android.view.View r0 = r5.g
            r5.bringChildToFront(r0)
        L188:
            return
    }

    private void d() {
            r2 = this;
            com.tkay.expressad.splash.view.TYSplashWebview r0 = r2.e
            if (r0 == 0) goto L13
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r1 = r2.r
            r0.setObject(r1)
            com.tkay.expressad.splash.view.TYSplashWebview r0 = r2.e
            com.tkay.expressad.splash.view.TYSplashView$1 r1 = new com.tkay.expressad.splash.view.TYSplashView$1
            r1.<init>(r2)
            r0.post(r1)
        L13:
            return
    }

    public static void transInfoForMraid(android.webkit.WebView r16, int r17, int r18, int r19, int r20) {
            r6 = r16
            java.lang.String r0 = "true"
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Ld2
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> Ld2
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Throwable -> Ld2
            android.content.res.Configuration r1 = r1.getConfiguration()     // Catch: java.lang.Throwable -> Ld2
            int r1 = r1.orientation     // Catch: java.lang.Throwable -> Ld2
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Ld2
            r2.<init>()     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r3 = "orientation"
            r4 = 2
            if (r1 != r4) goto L23
            java.lang.String r1 = "landscape"
            goto L2b
        L23:
            r4 = 1
            if (r1 != r4) goto L29
            java.lang.String r1 = "portrait"
            goto L2b
        L29:
            java.lang.String r1 = "undefined"
        L2b:
            r2.put(r3, r1)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r1 = "locked"
            r2.put(r1, r0)     // Catch: java.lang.Throwable -> Ld2
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Ld2
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> Ld2
            int r1 = com.tkay.expressad.foundation.h.k.e(r1)     // Catch: java.lang.Throwable -> Ld2
            float r7 = (float) r1     // Catch: java.lang.Throwable -> Ld2
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Ld2
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> Ld2
            int r1 = com.tkay.expressad.foundation.h.k.f(r1)     // Catch: java.lang.Throwable -> Ld2
            float r8 = (float) r1     // Catch: java.lang.Throwable -> Ld2
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Ld2
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> Ld2
            java.util.HashMap r1 = com.tkay.expressad.foundation.h.k.g(r1)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r3 = "width"
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> Ld2
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Throwable -> Ld2
            int r9 = r3.intValue()     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r3 = "height"
            java.lang.Object r1 = r1.get(r3)     // Catch: java.lang.Throwable -> Ld2
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Throwable -> Ld2
            int r10 = r1.intValue()     // Catch: java.lang.Throwable -> Ld2
            java.util.HashMap r11 = new java.util.HashMap     // Catch: java.lang.Throwable -> Ld2
            r11.<init>()     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r1 = "placementType"
            java.lang.String r3 = "Interstitial"
            r11.put(r1, r3)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r1 = "state"
            java.lang.String r3 = "default"
            r11.put(r1, r3)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r1 = "viewable"
            r11.put(r1, r0)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r0 = "currentAppOrientation"
            r11.put(r0, r2)     // Catch: java.lang.Throwable -> Ld2
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> Ld2
            r1 = r17
            float r12 = (float) r1     // Catch: java.lang.Throwable -> Ld2
            r1 = r18
            float r13 = (float) r1     // Catch: java.lang.Throwable -> Ld2
            r1 = r19
            float r14 = (float) r1     // Catch: java.lang.Throwable -> Ld2
            r1 = r20
            float r15 = (float) r1     // Catch: java.lang.Throwable -> Ld2
            r1 = r16
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r0.fireSetDefaultPosition(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> Ld2
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> Ld2
            r1 = r16
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r0.fireSetCurrentPosition(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> Ld2
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> Ld2
            r0.fireSetScreenSize(r6, r7, r8)     // Catch: java.lang.Throwable -> Ld2
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> Ld2
            float r1 = (float) r9     // Catch: java.lang.Throwable -> Ld2
            float r2 = (float) r10     // Catch: java.lang.Throwable -> Ld2
            r0.fireSetMaxSize(r6, r1, r2)     // Catch: java.lang.Throwable -> Ld2
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> Ld2
            r0.fireChangeEventForPropertys(r6, r11)     // Catch: java.lang.Throwable -> Ld2
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> Ld2
            r0.fireReadyEvent(r6)     // Catch: java.lang.Throwable -> Ld2
        Ld2:
            return
    }

    public void changeCloseBtnState(int r3) {
            r2 = this;
            android.view.View r0 = r2.g
            if (r0 == 0) goto L11
            r1 = 2
            if (r3 != r1) goto Ld
            r3 = 8
            r0.setVisibility(r3)
            return
        Ld:
            r3 = 0
            r0.setVisibility(r3)
        L11:
            return
    }

    public void checkSkipViewLocation() {
            r6 = this;
            boolean r0 = r6.s
            if (r0 == 0) goto L5
            return
        L5:
            android.view.View r0 = r6.g     // Catch: java.lang.Throwable -> L41
            if (r0 == 0) goto L40
            android.view.View r0 = r6.g     // Catch: java.lang.Throwable -> L41
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()     // Catch: java.lang.Throwable -> L41
            boolean r1 = r0 instanceof android.widget.RelativeLayout.LayoutParams     // Catch: java.lang.Throwable -> L41
            if (r1 == 0) goto L40
            r1 = r0
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1     // Catch: java.lang.Throwable -> L41
            int r1 = r1.topMargin     // Catch: java.lang.Throwable -> L41
            android.content.Context r2 = r6.getContext()     // Catch: java.lang.Throwable -> L41
            int r2 = com.tkay.core.common.l.h.b(r2)     // Catch: java.lang.Throwable -> L41
            int r2 = r2 + r1
            r3 = 1
            if (r1 <= 0) goto L26
            r6.s = r3     // Catch: java.lang.Throwable -> L41
        L26:
            r4 = 2
            int[] r4 = new int[r4]     // Catch: java.lang.Throwable -> L41
            android.view.View r5 = r6.g     // Catch: java.lang.Throwable -> L41
            r5.getLocationOnScreen(r4)     // Catch: java.lang.Throwable -> L41
            r5 = r4[r3]     // Catch: java.lang.Throwable -> L41
            if (r5 >= r2) goto L40
            r3 = r4[r3]     // Catch: java.lang.Throwable -> L41
            int r2 = r2 - r3
            r3 = r0
            android.widget.RelativeLayout$LayoutParams r3 = (android.widget.RelativeLayout.LayoutParams) r3     // Catch: java.lang.Throwable -> L41
            int r1 = r1 + r2
            r3.topMargin = r1     // Catch: java.lang.Throwable -> L41
            android.view.View r1 = r6.g     // Catch: java.lang.Throwable -> L41
            r1.setLayoutParams(r0)     // Catch: java.lang.Throwable -> L41
        L40:
            return
        L41:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    public void clearResState() {
            r1 = this;
            r0 = 0
            r1.m = r0
            r1.k = r0
            r1.j = r0
            return
    }

    public void destroy() {
            r3 = this;
            com.tkay.expressad.splash.view.TYSplashWebview r0 = r3.e
            if (r0 == 0) goto L18
            boolean r0 = r0.isDestroyed()
            if (r0 != 0) goto L18
            com.tkay.expressad.splash.view.TYSplashWebview r0 = r3.e
            r0.release()
            com.tkay.expressad.splash.view.TYSplashWebview r0 = r3.e
            java.lang.String r1 = "onSystemDestory"
            java.lang.String r2 = ""
            com.tkay.expressad.splash.js.SplashJsUtils.sendEventToH5(r0, r1, r2)
        L18:
            return
    }

    public android.view.View getCloseView() {
            r1 = this;
            android.view.View r0 = r1.g
            return r0
    }

    public android.view.ViewGroup getDevContainer() {
            r1 = this;
            android.view.ViewGroup r0 = r1.l
            return r0
    }

    public android.view.View getIconVg() {
            r1 = this;
            android.view.View r0 = r1.h
            return r0
    }

    public com.tkay.expressad.splash.js.SplashJSBridgeImpl getSplashJSBridgeImpl() {
            r1 = this;
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r1.r
            return r0
    }

    public com.tkay.expressad.splash.view.TYSplashWebview getSplashWebview() {
            r1 = this;
            com.tkay.expressad.splash.view.TYSplashWebview r0 = r1.e
            return r0
    }

    public boolean isAttach() {
            r1 = this;
            boolean r0 = r1.p
            return r0
    }

    public boolean isDynamicView() {
            r1 = this;
            boolean r0 = r1.o
            return r0
    }

    public boolean isH5Ready() {
            r1 = this;
            boolean r0 = r1.j
            return r0
    }

    public boolean isImageReady() {
            r1 = this;
            boolean r0 = r1.m
            return r0
    }

    public boolean isVideoReady() {
            r1 = this;
            boolean r0 = r1.k
            return r0
    }

    @Override
    protected void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            r0 = 1
            r1.p = r0
            return
    }

    @Override
    protected void onConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onConfigurationChanged(r1)
            r0.b()
            return
    }

    @Override
    protected void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
            r0 = this;
            super.onLayout(r1, r2, r3, r4, r5)
            r0.checkSkipViewLocation()
            return
    }

    public void onPause() {
            r2 = this;
            android.view.View r0 = r2.n
            if (r0 == 0) goto Le
            boolean r1 = r0 instanceof com.tkay.expressad.splash.view.TYSplashNativeView
            if (r1 == 0) goto Le
            com.tkay.expressad.splash.view.TYSplashNativeView r0 = (com.tkay.expressad.splash.view.TYSplashNativeView) r0
            r1 = 1
            r0.setIsPause(r1)
        Le:
            return
    }

    public void onResume() {
            r2 = this;
            android.view.View r0 = r2.n
            if (r0 == 0) goto Le
            boolean r1 = r0 instanceof com.tkay.expressad.splash.view.TYSplashNativeView
            if (r1 == 0) goto Le
            com.tkay.expressad.splash.view.TYSplashNativeView r0 = (com.tkay.expressad.splash.view.TYSplashNativeView) r0
            r1 = 0
            r0.setIsPause(r1)
        Le:
            return
    }

    public void resetLoadState() {
            r1 = this;
            r0 = 0
            r1.k = r0
            r1.j = r0
            return
    }

    public void setCloseView(android.view.View r2) {
            r1 = this;
            r1.g = r2
            if (r2 == 0) goto L9
            java.lang.String r0 = "closeButton"
            r2.setContentDescription(r0)
        L9:
            return
    }

    public void setDevContainer(android.view.ViewGroup r1) {
            r0 = this;
            r0.l = r1
            return
    }

    public void setDynamicView(boolean r1) {
            r0 = this;
            r0.o = r1
            return
    }

    public void setH5Ready(boolean r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public void setIconVg(android.view.View r1, android.widget.RelativeLayout.LayoutParams r2) {
            r0 = this;
            r0.h = r1
            r0.q = r2
            return
    }

    public void setImageReady(boolean r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public void setNotchPadding(int r3, int r4, int r5, int r6) {
            r2 = this;
            android.view.View r0 = r2.n
            if (r0 == 0) goto Ld
            boolean r1 = r0 instanceof com.tkay.expressad.splash.view.TYSplashNativeView
            if (r1 == 0) goto Ld
            com.tkay.expressad.splash.view.TYSplashNativeView r0 = (com.tkay.expressad.splash.view.TYSplashNativeView) r0
            r0.setNotchPadding(r3, r4, r5, r6)
        Ld:
            return
    }

    public void setSplashJSBridgeImpl(com.tkay.expressad.splash.js.SplashJSBridgeImpl r2) {
            r1 = this;
            r1.r = r2
            com.tkay.expressad.splash.view.TYSplashWebview r0 = r1.e
            if (r0 == 0) goto L9
            r0.setObject(r2)
        L9:
            return
    }

    public void setSplashNativeView(android.view.View r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.n = r1
        L4:
            return
    }

    public void setSplashWebview(com.tkay.expressad.splash.view.TYSplashWebview r2) {
            r1 = this;
            r1.e = r2
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r1.r
            if (r0 == 0) goto L9
            r2.setObject(r0)
        L9:
            return
    }

    public void setVideoReady(boolean r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public void show() {
            r5 = this;
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r5.r
            if (r0 == 0) goto L1b
            android.view.ViewGroup r0 = r5.l
            if (r0 == 0) goto L1b
            android.content.Context r0 = r0.getContext()
            boolean r0 = r0 instanceof android.app.Activity
            if (r0 == 0) goto L1b
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r5.r
            android.view.ViewGroup r1 = r5.l
            android.content.Context r1 = r1.getContext()
            r0.updateContext(r1)
        L1b:
            android.view.View r0 = r5.h
            r1 = 11
            r2 = -1
            if (r0 != 0) goto L5a
            boolean r0 = r5.o
            if (r0 == 0) goto L41
            android.view.View r0 = r5.n
            if (r0 == 0) goto L41
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L35
            android.view.View r0 = r5.n
            com.tkay.core.common.l.u.a(r0)
        L35:
            android.view.View r0 = r5.n
            android.view.ViewGroup$LayoutParams r3 = new android.view.ViewGroup$LayoutParams
            r3.<init>(r2, r2)
            r5.addView(r0, r3)
            goto L157
        L41:
            com.tkay.expressad.splash.view.TYSplashWebview r0 = r5.e
            if (r0 == 0) goto L55
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L55
            com.tkay.expressad.splash.view.TYSplashWebview r0 = r5.e
            android.view.ViewGroup$LayoutParams r3 = new android.view.ViewGroup$LayoutParams
            r3.<init>(r2, r2)
            r5.addView(r0, r3)
        L55:
            r5.d()
            goto L157
        L5a:
            android.view.ViewGroup r0 = r5.f
            if (r0 != 0) goto L6f
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            android.content.Context r3 = r5.getContext()
            r0.<init>(r3)
            r5.f = r0
            r3 = 2147482647(0x7ffffc17, float:NaN)
            r0.setId(r3)
        L6f:
            int r0 = r5.d
            r3 = 2
            if (r0 != r3) goto Le8
            android.content.Context r0 = r5.getContext()
            int r0 = com.tkay.expressad.foundation.h.t.f(r0)
            r5.i = r0
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r0.<init>(r2, r2)
            r3 = 0
            android.view.ViewGroup r4 = r5.f
            int r4 = r4.getId()
            r0.addRule(r3, r4)
            boolean r3 = r5.o
            if (r3 == 0) goto La6
            android.view.View r3 = r5.n
            if (r3 == 0) goto La6
            android.view.ViewParent r3 = r3.getParent()
            if (r3 == 0) goto La0
            android.view.View r3 = r5.n
            com.tkay.core.common.l.u.a(r3)
        La0:
            android.view.View r3 = r5.n
            r5.addView(r3, r0)
            goto Lb8
        La6:
            com.tkay.expressad.splash.view.TYSplashWebview r3 = r5.e
            if (r3 == 0) goto Lb5
            android.view.ViewParent r3 = r3.getParent()
            if (r3 != 0) goto Lb5
            com.tkay.expressad.splash.view.TYSplashWebview r3 = r5.e
            r5.addView(r3, r0)
        Lb5:
            r5.d()
        Lb8:
            android.view.ViewGroup r0 = r5.f
            if (r0 == 0) goto L157
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L157
            android.widget.RelativeLayout$LayoutParams r0 = r5.q
            int r0 = r0.width
            int r3 = r5.i
            int r4 = r3 / 4
            if (r0 <= r4) goto Lce
            int r0 = r3 / 4
        Lce:
            android.view.ViewGroup r3 = r5.f
            android.view.View r4 = r5.h
            r3.addView(r4, r0, r2)
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r3.<init>(r0, r2)
            r3.addRule(r1)
            r0 = 13
            r3.addRule(r0)
            android.view.ViewGroup r0 = r5.f
            r5.addView(r0, r3)
            goto L157
        Le8:
            android.content.Context r0 = r5.getContext()
            int r0 = com.tkay.expressad.foundation.h.t.e(r0)
            r5.i = r0
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r0.<init>(r2, r2)
            android.view.ViewGroup r4 = r5.f
            int r4 = r4.getId()
            r0.addRule(r3, r4)
            boolean r3 = r5.o
            if (r3 == 0) goto L119
            android.view.View r3 = r5.n
            if (r3 == 0) goto L119
            android.view.ViewParent r3 = r3.getParent()
            if (r3 == 0) goto L113
            android.view.View r3 = r5.n
            com.tkay.core.common.l.u.a(r3)
        L113:
            android.view.View r3 = r5.n
            r5.addView(r3, r0)
            goto L12b
        L119:
            com.tkay.expressad.splash.view.TYSplashWebview r3 = r5.e
            if (r3 == 0) goto L128
            android.view.ViewParent r3 = r3.getParent()
            if (r3 != 0) goto L128
            com.tkay.expressad.splash.view.TYSplashWebview r3 = r5.e
            r5.addView(r3, r0)
        L128:
            r5.d()
        L12b:
            android.view.ViewGroup r0 = r5.f
            if (r0 == 0) goto L157
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L157
            android.widget.RelativeLayout$LayoutParams r0 = r5.q
            int r0 = r0.height
            int r3 = r5.i
            int r4 = r3 / 4
            if (r0 <= r4) goto L141
            int r0 = r3 / 4
        L141:
            android.view.ViewGroup r3 = r5.f
            android.view.View r4 = r5.h
            r3.addView(r4, r2, r0)
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r3.<init>(r2, r0)
            r0 = 12
            r3.addRule(r0)
            android.view.ViewGroup r0 = r5.f
            r5.addView(r0, r3)
        L157:
            android.view.View r0 = r5.g
            if (r0 == 0) goto L1a3
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L19e
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r2 = r5.getContext()
            r3 = 1120403456(0x42c80000, float:100.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r3)
            android.content.Context r3 = r5.getContext()
            r4 = 1106247680(0x41f00000, float:30.0)
            int r3 = com.tkay.expressad.foundation.h.t.b(r3, r4)
            r0.<init>(r2, r3)
            r2 = 10
            r0.addRule(r2)
            r0.addRule(r1)
            android.content.Context r1 = r5.getContext()
            r2 = 1092616192(0x41200000, float:10.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r0.rightMargin = r1
            android.content.Context r1 = r5.getContext()
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r0.topMargin = r1
            android.view.View r1 = r5.g
            r5.addView(r1, r0)
            goto L1a3
        L19e:
            android.view.View r0 = r5.g
            r5.bringChildToFront(r0)
        L1a3:
            r5.clearResState()
            return
    }

    public void updateCountdown(int r4) {
            r3 = this;
            com.tkay.expressad.splash.view.TYSplashWebview r0 = r3.e
            if (r0 == 0) goto L3b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L26
            r0.<init>()     // Catch: org.json.JSONException -> L26
            java.lang.String r1 = "countdown"
            r0.put(r1, r4)     // Catch: org.json.JSONException -> L26
            java.lang.String r0 = r0.toString()     // Catch: org.json.JSONException -> L26
            byte[] r0 = r0.getBytes()     // Catch: org.json.JSONException -> L26
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: org.json.JSONException -> L26
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: org.json.JSONException -> L26
            com.tkay.expressad.splash.view.TYSplashWebview r1 = r3.e     // Catch: org.json.JSONException -> L26
            java.lang.String r2 = "updateCountdown"
            com.tkay.expressad.atsignalcommon.windvane.j.a(r1, r2, r0)     // Catch: org.json.JSONException -> L26
            goto L2a
        L26:
            r0 = move-exception
            r0.printStackTrace()
        L2a:
            boolean r0 = r3.o
            if (r0 == 0) goto L3b
            android.view.View r0 = r3.n
            if (r0 == 0) goto L3b
            boolean r1 = r0 instanceof com.tkay.expressad.splash.view.TYSplashNativeView
            if (r1 == 0) goto L3b
            com.tkay.expressad.splash.view.TYSplashNativeView r0 = (com.tkay.expressad.splash.view.TYSplashNativeView) r0
            r0.updateCountDown(r4)
        L3b:
            return
    }
}

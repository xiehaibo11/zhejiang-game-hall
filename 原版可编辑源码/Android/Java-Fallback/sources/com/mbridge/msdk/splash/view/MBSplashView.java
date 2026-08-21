package com.mbridge.msdk.splash.view;

public class MBSplashView extends android.widget.RelativeLayout {
    private static java.lang.String a = "MBSplashView";
    private int b;
    private com.mbridge.msdk.splash.view.MBSplashWebview c;
    private android.view.ViewGroup d;
    private android.view.View e;
    private android.view.View f;
    private int g;
    private boolean h;
    private boolean i;
    private android.view.ViewGroup j;
    private boolean k;
    private android.view.View l;
    private boolean m;
    private boolean n;
    private android.widget.RelativeLayout.LayoutParams o;
    private com.mbridge.msdk.splash.js.b p;
    private com.mbridge.msdk.dycreator.listener.DyCountDownListener q;


    static {
            return
    }

    public MBSplashView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public MBSplashView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public MBSplashView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.b()
            return
    }

    static com.mbridge.msdk.splash.view.MBSplashWebview a(com.mbridge.msdk.splash.view.MBSplashView r0) {
            com.mbridge.msdk.splash.view.MBSplashWebview r0 = r0.c
            return r0
    }

    static java.lang.String a() {
            java.lang.String r0 = com.mbridge.msdk.splash.view.MBSplashView.a
            return r0
    }

    private void b() {
            r1 = this;
            r0 = 0
            r1.setBackgroundColor(r0)
            android.content.res.Resources r0 = r1.getResources()
            android.content.res.Configuration r0 = r0.getConfiguration()
            int r0 = r0.orientation
            r1.b = r0
            return
    }

    private void c() {
            r2 = this;
            com.mbridge.msdk.splash.view.MBSplashWebview r0 = r2.c
            if (r0 == 0) goto L13
            com.mbridge.msdk.splash.js.b r1 = r2.p
            r0.setObject(r1)
            com.mbridge.msdk.splash.view.MBSplashWebview r0 = r2.c
            com.mbridge.msdk.splash.view.MBSplashView$1 r1 = new com.mbridge.msdk.splash.view.MBSplashView$1
            r1.<init>(r2)
            r0.post(r1)
        L13:
            return
    }

    public static void transInfoForMraid(android.webkit.WebView r17, int r18, int r19, int r20, int r21) {
            r0 = r17
            java.lang.String r1 = "true"
            java.lang.String r2 = com.mbridge.msdk.splash.view.MBSplashView.a
            java.lang.String r7 = "transInfoForMraid"
            com.mbridge.msdk.foundation.tools.z.d(r2, r7)
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Ldc
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> Ldc
            android.content.res.Resources r2 = r2.getResources()     // Catch: java.lang.Throwable -> Ldc
            android.content.res.Configuration r2 = r2.getConfiguration()     // Catch: java.lang.Throwable -> Ldc
            int r2 = r2.orientation     // Catch: java.lang.Throwable -> Ldc
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Ldc
            r3.<init>()     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r4 = "orientation"
            r5 = 2
            if (r2 != r5) goto L2a
            java.lang.String r2 = "landscape"
            goto L32
        L2a:
            r5 = 1
            if (r2 != r5) goto L30
            java.lang.String r2 = "portrait"
            goto L32
        L30:
            java.lang.String r2 = "undefined"
        L32:
            r3.put(r4, r2)     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r2 = "locked"
            r3.put(r2, r1)     // Catch: java.lang.Throwable -> Ldc
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Ldc
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> Ldc
            int r2 = com.mbridge.msdk.foundation.tools.v.x(r2)     // Catch: java.lang.Throwable -> Ldc
            float r8 = (float) r2     // Catch: java.lang.Throwable -> Ldc
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Ldc
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> Ldc
            int r2 = com.mbridge.msdk.foundation.tools.v.y(r2)     // Catch: java.lang.Throwable -> Ldc
            float r9 = (float) r2     // Catch: java.lang.Throwable -> Ldc
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Ldc
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> Ldc
            java.util.HashMap r2 = com.mbridge.msdk.foundation.tools.v.z(r2)     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r4 = "width"
            java.lang.Object r4 = r2.get(r4)     // Catch: java.lang.Throwable -> Ldc
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.Throwable -> Ldc
            int r10 = r4.intValue()     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r4 = "height"
            java.lang.Object r2 = r2.get(r4)     // Catch: java.lang.Throwable -> Ldc
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Throwable -> Ldc
            int r11 = r2.intValue()     // Catch: java.lang.Throwable -> Ldc
            java.util.HashMap r12 = new java.util.HashMap     // Catch: java.lang.Throwable -> Ldc
            r12.<init>()     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r2 = "placementType"
            java.lang.String r4 = "Interstitial"
            r12.put(r2, r4)     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r2 = "state"
            java.lang.String r4 = "default"
            r12.put(r2, r4)     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r2 = "viewable"
            r12.put(r2, r1)     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r1 = "currentAppOrientation"
            r12.put(r1, r3)     // Catch: java.lang.Throwable -> Ldc
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> Ldc
            r2 = r18
            float r13 = (float) r2     // Catch: java.lang.Throwable -> Ldc
            r2 = r19
            float r14 = (float) r2     // Catch: java.lang.Throwable -> Ldc
            r2 = r20
            float r15 = (float) r2     // Catch: java.lang.Throwable -> Ldc
            r2 = r21
            float r6 = (float) r2     // Catch: java.lang.Throwable -> Ldc
            r2 = r17
            r3 = r13
            r4 = r14
            r5 = r15
            r16 = r6
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> Ldc
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> Ldc
            r2 = r17
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            r1.b(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> Ldc
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> Ldc
            r1.b(r0, r8, r9)     // Catch: java.lang.Throwable -> Ldc
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> Ldc
            float r2 = (float) r10     // Catch: java.lang.Throwable -> Ldc
            float r3 = (float) r11     // Catch: java.lang.Throwable -> Ldc
            r1.c(r0, r2, r3)     // Catch: java.lang.Throwable -> Ldc
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> Ldc
            r1.a(r0, r12)     // Catch: java.lang.Throwable -> Ldc
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> Ldc
            r1.a(r0)     // Catch: java.lang.Throwable -> Ldc
            goto Le2
        Ldc:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.splash.view.MBSplashView.a
            com.mbridge.msdk.foundation.tools.z.c(r1, r7, r0)
        Le2:
            return
    }

    public void changeCloseBtnState(int r3) {
            r2 = this;
            android.view.View r0 = r2.e
            if (r0 == 0) goto L11
            r1 = 2
            if (r3 != r1) goto Ld
            r3 = 8
            r0.setVisibility(r3)
            goto L11
        Ld:
            r3 = 0
            r0.setVisibility(r3)
        L11:
            return
    }

    public void clearResState() {
            r1 = this;
            r0 = 0
            r1.k = r0
            r1.i = r0
            r1.h = r0
            return
    }

    public void destroy() {
            r3 = this;
            r3.removeAllViews()
            android.view.ViewGroup r0 = r3.j
            if (r0 == 0) goto La
            r0.removeAllViews()
        La:
            com.mbridge.msdk.splash.view.MBSplashWebview r0 = r3.c
            if (r0 == 0) goto L22
            boolean r0 = r0.isDestoryed()
            if (r0 != 0) goto L22
            com.mbridge.msdk.splash.view.MBSplashWebview r0 = r3.c
            r0.release()
            com.mbridge.msdk.splash.view.MBSplashWebview r0 = r3.c
            java.lang.String r1 = "onSystemDestory"
            java.lang.String r2 = ""
            com.mbridge.msdk.splash.js.c.a(r0, r1, r2)
        L22:
            return
    }

    public android.view.View getCloseView() {
            r1 = this;
            android.view.View r0 = r1.e
            return r0
    }

    public android.view.ViewGroup getDevContainer() {
            r1 = this;
            android.view.ViewGroup r0 = r1.j
            return r0
    }

    public android.view.View getIconVg() {
            r1 = this;
            android.view.View r0 = r1.f
            return r0
    }

    public com.mbridge.msdk.splash.js.b getSplashJSBridgeImpl() {
            r1 = this;
            com.mbridge.msdk.splash.js.b r0 = r1.p
            return r0
    }

    public com.mbridge.msdk.splash.view.MBSplashWebview getSplashWebview() {
            r1 = this;
            com.mbridge.msdk.splash.view.MBSplashWebview r0 = r1.c
            return r0
    }

    public boolean isAttach() {
            r1 = this;
            boolean r0 = r1.n
            return r0
    }

    public boolean isDynamicView() {
            r1 = this;
            boolean r0 = r1.m
            return r0
    }

    public boolean isH5Ready() {
            r1 = this;
            boolean r0 = r1.h
            return r0
    }

    public boolean isImageReady() {
            r1 = this;
            boolean r0 = r1.k
            return r0
    }

    public boolean isVideoReady() {
            r1 = this;
            boolean r0 = r1.i
            return r0
    }

    @Override
    protected void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            r0 = 1
            r1.n = r0
            return
    }

    @Override
    protected void onConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onConfigurationChanged(r1)
            r0.b()
            return
    }

    public void onPause() {
            r2 = this;
            android.view.View r0 = r2.l
            if (r0 == 0) goto Le
            boolean r1 = r0 instanceof com.mbridge.msdk.splash.view.MBSplashNativeView
            if (r1 == 0) goto Le
            com.mbridge.msdk.splash.view.MBSplashNativeView r0 = (com.mbridge.msdk.splash.view.MBSplashNativeView) r0
            r1 = 1
            r0.setIsPause(r1)
        Le:
            return
    }

    public void onResume() {
            r2 = this;
            android.view.View r0 = r2.l
            if (r0 == 0) goto Le
            boolean r1 = r0 instanceof com.mbridge.msdk.splash.view.MBSplashNativeView
            if (r1 == 0) goto Le
            com.mbridge.msdk.splash.view.MBSplashNativeView r0 = (com.mbridge.msdk.splash.view.MBSplashNativeView) r0
            r1 = 0
            r0.setIsPause(r1)
        Le:
            return
    }

    public void resetLoadState() {
            r1 = this;
            r0 = 0
            r1.i = r0
            r1.h = r0
            return
    }

    public void setCloseView(android.view.View r2) {
            r1 = this;
            r1.e = r2
            if (r2 == 0) goto L9
            java.lang.String r0 = "closeButton"
            r2.setContentDescription(r0)
        L9:
            return
    }

    public void setDevContainer(android.view.ViewGroup r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public void setDyCountDownListener(com.mbridge.msdk.dycreator.listener.DyCountDownListener r1) {
            r0 = this;
            r0.q = r1
            return
    }

    public void setDynamicView(boolean r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public void setH5Ready(boolean r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void setIconVg(android.view.View r1, android.widget.RelativeLayout.LayoutParams r2) {
            r0 = this;
            r0.f = r1
            r0.o = r2
            return
    }

    public void setImageReady(boolean r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public void setNotchPadding(int r3, int r4, int r5, int r6) {
            r2 = this;
            android.view.View r0 = r2.l
            if (r0 == 0) goto Ld
            boolean r1 = r0 instanceof com.mbridge.msdk.splash.view.MBSplashNativeView
            if (r1 == 0) goto Ld
            com.mbridge.msdk.splash.view.MBSplashNativeView r0 = (com.mbridge.msdk.splash.view.MBSplashNativeView) r0
            r0.setNotchPadding(r3, r4, r5, r6)
        Ld:
            return
    }

    public void setSplashJSBridgeImpl(com.mbridge.msdk.splash.js.b r2) {
            r1 = this;
            r1.p = r2
            com.mbridge.msdk.splash.view.MBSplashWebview r0 = r1.c
            if (r0 == 0) goto L9
            r0.setObject(r2)
        L9:
            return
    }

    public void setSplashNativeView(android.view.View r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.l = r1
        L4:
            return
    }

    public void setSplashWebview(com.mbridge.msdk.splash.view.MBSplashWebview r2) {
            r1 = this;
            r1.c = r2
            com.mbridge.msdk.splash.js.b r0 = r1.p
            if (r0 == 0) goto L9
            r2.setObject(r0)
        L9:
            return
    }

    public void setVideoReady(boolean r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public void show() {
            r5 = this;
            com.mbridge.msdk.splash.js.b r0 = r5.p
            if (r0 == 0) goto L1b
            android.view.ViewGroup r0 = r5.j
            if (r0 == 0) goto L1b
            android.content.Context r0 = r0.getContext()
            boolean r0 = r0 instanceof android.app.Activity
            if (r0 == 0) goto L1b
            com.mbridge.msdk.splash.js.b r0 = r5.p
            android.view.ViewGroup r1 = r5.j
            android.content.Context r1 = r1.getContext()
            r0.a(r1)
        L1b:
            android.view.View r0 = r5.f
            r1 = 11
            r2 = -1
            if (r0 != 0) goto L5a
            boolean r0 = r5.m
            if (r0 == 0) goto L41
            android.view.View r0 = r5.l
            if (r0 == 0) goto L41
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L35
            android.view.View r0 = r5.l
            com.mbridge.msdk.foundation.tools.an.a(r0)
        L35:
            android.view.View r0 = r5.l
            android.view.ViewGroup$LayoutParams r3 = new android.view.ViewGroup$LayoutParams
            r3.<init>(r2, r2)
            r5.addView(r0, r3)
            goto L162
        L41:
            com.mbridge.msdk.splash.view.MBSplashWebview r0 = r5.c
            if (r0 == 0) goto L55
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L55
            com.mbridge.msdk.splash.view.MBSplashWebview r0 = r5.c
            android.view.ViewGroup$LayoutParams r3 = new android.view.ViewGroup$LayoutParams
            r3.<init>(r2, r2)
            r5.addView(r0, r3)
        L55:
            r5.c()
            goto L162
        L5a:
            android.view.ViewGroup r0 = r5.d
            if (r0 != 0) goto L6f
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            android.content.Context r3 = r5.getContext()
            r0.<init>(r3)
            r5.d = r0
            r3 = 2147482647(0x7ffffc17, float:NaN)
            r0.setId(r3)
        L6f:
            int r0 = r5.b
            r3 = 2
            if (r0 != r3) goto Lee
            android.content.Context r0 = r5.getContext()
            int r0 = com.mbridge.msdk.foundation.tools.ae.h(r0)
            r5.g = r0
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r0.<init>(r2, r2)
            r3 = 0
            android.view.ViewGroup r4 = r5.d
            int r4 = r4.getId()
            r0.addRule(r3, r4)
            boolean r3 = r5.m
            if (r3 == 0) goto La6
            android.view.View r3 = r5.l
            if (r3 == 0) goto La6
            android.view.ViewParent r3 = r3.getParent()
            if (r3 == 0) goto La0
            android.view.View r3 = r5.l
            com.mbridge.msdk.foundation.tools.an.a(r3)
        La0:
            android.view.View r3 = r5.l
            r5.addView(r3, r0)
            goto Lb8
        La6:
            com.mbridge.msdk.splash.view.MBSplashWebview r3 = r5.c
            if (r3 == 0) goto Lb5
            android.view.ViewParent r3 = r3.getParent()
            if (r3 != 0) goto Lb5
            com.mbridge.msdk.splash.view.MBSplashWebview r3 = r5.c
            r5.addView(r3, r0)
        Lb5:
            r5.c()
        Lb8:
            android.view.ViewGroup r0 = r5.d
            if (r0 == 0) goto L162
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L162
            android.widget.RelativeLayout$LayoutParams r0 = r5.o
            int r0 = r0.width
            android.view.View r3 = r5.f
            com.mbridge.msdk.foundation.tools.an.a(r3)
            int r3 = r5.g
            int r4 = r3 / 4
            if (r0 <= r4) goto Ld3
            int r0 = r3 / 4
        Ld3:
            android.view.ViewGroup r3 = r5.d
            android.view.View r4 = r5.f
            r3.addView(r4, r0, r2)
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r3.<init>(r0, r2)
            r3.addRule(r1)
            r0 = 13
            r3.addRule(r0)
            android.view.ViewGroup r0 = r5.d
            r5.addView(r0, r3)
            goto L162
        Lee:
            android.content.Context r0 = r5.getContext()
            int r0 = com.mbridge.msdk.foundation.tools.ae.g(r0)
            r5.g = r0
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r0.<init>(r2, r2)
            android.view.ViewGroup r4 = r5.d
            int r4 = r4.getId()
            r0.addRule(r3, r4)
            boolean r3 = r5.m
            if (r3 == 0) goto L11f
            android.view.View r3 = r5.l
            if (r3 == 0) goto L11f
            android.view.ViewParent r3 = r3.getParent()
            if (r3 == 0) goto L119
            android.view.View r3 = r5.l
            com.mbridge.msdk.foundation.tools.an.a(r3)
        L119:
            android.view.View r3 = r5.l
            r5.addView(r3, r0)
            goto L131
        L11f:
            com.mbridge.msdk.splash.view.MBSplashWebview r3 = r5.c
            if (r3 == 0) goto L12e
            android.view.ViewParent r3 = r3.getParent()
            if (r3 != 0) goto L12e
            com.mbridge.msdk.splash.view.MBSplashWebview r3 = r5.c
            r5.addView(r3, r0)
        L12e:
            r5.c()
        L131:
            android.view.ViewGroup r0 = r5.d
            if (r0 == 0) goto L162
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L162
            android.widget.RelativeLayout$LayoutParams r0 = r5.o
            int r0 = r0.height
            int r3 = r5.g
            int r4 = r3 / 4
            if (r0 <= r4) goto L147
            int r0 = r3 / 4
        L147:
            android.view.View r3 = r5.f
            com.mbridge.msdk.foundation.tools.an.a(r3)
            android.view.ViewGroup r3 = r5.d
            android.view.View r4 = r5.f
            r3.addView(r4, r2, r0)
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r3.<init>(r2, r0)
            r0 = 12
            r3.addRule(r0)
            android.view.ViewGroup r0 = r5.d
            r5.addView(r0, r3)
        L162:
            android.view.View r0 = r5.e
            if (r0 == 0) goto L1ae
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L1a9
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r2 = r5.getContext()
            r3 = 1120403456(0x42c80000, float:100.0)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r2, r3)
            android.content.Context r3 = r5.getContext()
            r4 = 1106247680(0x41f00000, float:30.0)
            int r3 = com.mbridge.msdk.foundation.tools.ae.b(r3, r4)
            r0.<init>(r2, r3)
            r2 = 10
            r0.addRule(r2)
            r0.addRule(r1)
            android.content.Context r1 = r5.getContext()
            r2 = 1092616192(0x41200000, float:10.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r0.rightMargin = r1
            android.content.Context r1 = r5.getContext()
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r0.topMargin = r1
            android.view.View r1 = r5.e
            r5.addView(r1, r0)
            goto L1ae
        L1a9:
            android.view.View r0 = r5.e
            r5.bringChildToFront(r0)
        L1ae:
            r5.clearResState()
            return
    }

    public void updateCountdown(int r5) {
            r4 = this;
            com.mbridge.msdk.splash.view.MBSplashWebview r0 = r4.c
            if (r0 == 0) goto L47
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L27
            r0.<init>()     // Catch: org.json.JSONException -> L27
            java.lang.String r1 = "countdown"
            r0.put(r1, r5)     // Catch: org.json.JSONException -> L27
            java.lang.String r0 = r0.toString()     // Catch: org.json.JSONException -> L27
            byte[] r0 = r0.getBytes()     // Catch: org.json.JSONException -> L27
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: org.json.JSONException -> L27
            com.mbridge.msdk.mbjscommon.windvane.h r1 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: org.json.JSONException -> L27
            com.mbridge.msdk.splash.view.MBSplashWebview r2 = r4.c     // Catch: org.json.JSONException -> L27
            java.lang.String r3 = "updateCountdown"
            r1.a(r2, r3, r0)     // Catch: org.json.JSONException -> L27
            goto L2b
        L27:
            r0 = move-exception
            r0.printStackTrace()
        L2b:
            boolean r0 = r4.m
            if (r0 == 0) goto L3c
            android.view.View r0 = r4.l
            if (r0 == 0) goto L3c
            boolean r1 = r0 instanceof com.mbridge.msdk.splash.view.MBSplashNativeView
            if (r1 == 0) goto L3c
            com.mbridge.msdk.splash.view.MBSplashNativeView r0 = (com.mbridge.msdk.splash.view.MBSplashNativeView) r0
            r0.updateCountDown(r5)
        L3c:
            boolean r0 = r4.m
            if (r0 == 0) goto L47
            com.mbridge.msdk.dycreator.listener.DyCountDownListener r0 = r4.q
            if (r0 == 0) goto L47
            r0.getCountDownValue(r5)
        L47:
            return
    }
}

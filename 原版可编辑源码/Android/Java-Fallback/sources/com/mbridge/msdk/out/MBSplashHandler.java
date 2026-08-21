package com.mbridge.msdk.out;

public class MBSplashHandler {
    private static final java.lang.String TAG = "MBSplashHandler";
    private static boolean canSkip = true;
    private static int defCountDownS = 5;
    private static int logoSizeH = 0;
    private static int logoSizeW = 0;
    private static int orientation = 1;
    private com.mbridge.msdk.splash.d.c splashProvider;

    static {
            return
    }

    public MBSplashHandler(android.app.Activity r7, java.lang.String r8, java.lang.String r9) {
            r6 = this;
            boolean r4 = com.mbridge.msdk.out.MBSplashHandler.canSkip
            int r5 = com.mbridge.msdk.out.MBSplashHandler.defCountDownS
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public MBSplashHandler(android.app.Activity r10, java.lang.String r11, java.lang.String r12, boolean r13, int r14) {
            r9 = this;
            int r6 = com.mbridge.msdk.out.MBSplashHandler.orientation
            int r7 = com.mbridge.msdk.out.MBSplashHandler.logoSizeH
            int r8 = com.mbridge.msdk.out.MBSplashHandler.logoSizeW
            r0 = r9
            r1 = r10
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public MBSplashHandler(android.app.Activity r3, java.lang.String r4, java.lang.String r5, boolean r6, int r7, int r8, int r9, int r10) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ae.f(r5)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L10
            com.mbridge.msdk.foundation.tools.ae.a(r5, r0)
        L10:
            com.mbridge.msdk.splash.d.c r0 = new com.mbridge.msdk.splash.d.c
            r0.<init>(r3, r4, r5)
            r2.splashProvider = r0
            r0.b(r6)
            com.mbridge.msdk.splash.d.c r3 = r2.splashProvider
            r3.b(r7)
            com.mbridge.msdk.splash.d.c r3 = r2.splashProvider
            r3.a(r8)
            com.mbridge.msdk.splash.d.c r3 = r2.splashProvider
            r3.a(r9, r10)
            return
    }

    public MBSplashHandler(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = com.mbridge.msdk.out.MBSplashHandler.canSkip
            int r1 = com.mbridge.msdk.out.MBSplashHandler.defCountDownS
            r2.<init>(r3, r4, r0, r1)
            return
    }

    public MBSplashHandler(java.lang.String r9, java.lang.String r10, boolean r11, int r12) {
            r8 = this;
            int r5 = com.mbridge.msdk.out.MBSplashHandler.orientation
            int r6 = com.mbridge.msdk.out.MBSplashHandler.logoSizeH
            int r7 = com.mbridge.msdk.out.MBSplashHandler.logoSizeW
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public MBSplashHandler(java.lang.String r3, java.lang.String r4, boolean r5, int r6, int r7, int r8, int r9) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ae.f(r4)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L10
            com.mbridge.msdk.foundation.tools.ae.a(r4, r0)
        L10:
            com.mbridge.msdk.splash.d.c r0 = new com.mbridge.msdk.splash.d.c
            r1 = 0
            r0.<init>(r1, r3, r4)
            r2.splashProvider = r0
            r0.b(r5)
            com.mbridge.msdk.splash.d.c r3 = r2.splashProvider
            r3.b(r6)
            com.mbridge.msdk.splash.d.c r3 = r2.splashProvider
            r3.a(r7)
            com.mbridge.msdk.splash.d.c r3 = r2.splashProvider
            r3.a(r8, r9)
            return
    }

    public void allowClickSplash(boolean r2) {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto L7
            r0.d(r2)
        L7:
            return
    }

    public android.view.ViewGroup createZoomOutByType(com.mbridge.msdk.out.ZoomOutTypeEnum r2) {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto L9
            android.view.ViewGroup r2 = r0.a(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    public java.lang.String getRequestId() {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.e()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    public boolean isReady() {
            r1 = this;
            java.lang.String r0 = ""
            boolean r0 = r1.isReady(r0)
            return r0
    }

    public boolean isReady(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto L9
            boolean r2 = r0.c(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    public void loadAndShow(android.app.Activity r3) {
            r2 = this;
            com.mbridge.msdk.splash.d.c r0 = r2.splashProvider
            if (r0 == 0) goto L9
            java.lang.String r1 = ""
            r0.b(r1, r3)
        L9:
            return
    }

    public void loadAndShow(android.view.ViewGroup r3) {
            r2 = this;
            com.mbridge.msdk.splash.d.c r0 = r2.splashProvider
            if (r0 == 0) goto L9
            java.lang.String r1 = ""
            r0.b(r1, r3)
        L9:
            return
    }

    public void loadAndShowByToken(java.lang.String r2, android.app.Activity r3) {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto L7
            r0.a(r2, r3)
        L7:
            return
    }

    public void loadAndShowByToken(java.lang.String r2, android.view.ViewGroup r3) {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto L7
            r0.a(r2, r3)
        L7:
            return
    }

    public void onDestroy() {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto L7
            r0.j()
        L7:
            return
    }

    public void onPause() {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto L7
            r0.i()
        L7:
            return
    }

    public void onResume() {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto L7
            r0.h()
        L7:
            return
    }

    public void preLoad() {
            r2 = this;
            com.mbridge.msdk.splash.d.c r0 = r2.splashProvider
            if (r0 == 0) goto L9
            java.lang.String r1 = ""
            r0.b(r1)
        L9:
            return
    }

    public void preLoadByToken(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public void setDevCloseView(android.view.ViewGroup r2) {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public void setLoadTimeOut(long r2) {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public void setLogoView(android.view.View r2, int r3, int r4) {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto Le
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r0.<init>(r3, r4)
            com.mbridge.msdk.splash.d.c r3 = r1.splashProvider
            r3.a(r2, r0)
        Le:
            return
    }

    public void setNotchScreenParameter(int r2, int r3, int r4, int r5) {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto L7
            r0.a(r2, r4, r3, r5)
        L7:
            return
    }

    public void setOrientation(int r2) {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public void setSplashLoadListener(com.mbridge.msdk.out.MBSplashLoadListener r2) {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public void setSplashShowListener(com.mbridge.msdk.out.MBSplashShowListener r2) {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public void setSupportZoomOut(boolean r2) {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto L7
            r0.c(r2)
        L7:
            return
    }

    public void show(android.app.Activity r3) {
            r2 = this;
            com.mbridge.msdk.splash.d.c r0 = r2.splashProvider
            if (r0 == 0) goto L9
            java.lang.String r1 = ""
            r0.d(r1, r3)
        L9:
            return
    }

    public void show(android.app.Activity r2, java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto L7
            r0.c(r3, r2)
        L7:
            return
    }

    public void show(android.view.ViewGroup r3) {
            r2 = this;
            com.mbridge.msdk.splash.d.c r0 = r2.splashProvider
            if (r0 == 0) goto L9
            java.lang.String r1 = ""
            r0.d(r1, r3)
        L9:
            return
    }

    public void show(android.view.ViewGroup r2, java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto L7
            r0.c(r3, r2)
        L7:
            return
    }

    public void zoomOutAttacked() {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto L7
            r0.f()
        L7:
            return
    }

    public void zoomOutPlayFinish() {
            r1 = this;
            com.mbridge.msdk.splash.d.c r0 = r1.splashProvider
            if (r0 == 0) goto L7
            r0.g()
        L7:
            return
    }
}

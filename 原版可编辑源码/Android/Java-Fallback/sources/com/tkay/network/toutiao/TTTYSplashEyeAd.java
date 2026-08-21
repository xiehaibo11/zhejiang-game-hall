package com.tkay.network.toutiao;

public class TTTYSplashEyeAd extends com.tkay.splashad.unitgroup.api.CustomSplashEyeAd {
    com.bykv.vk.openvk.CSJSplashAd a;

    public TTTYSplashEyeAd(com.tkay.core.api.TYBaseAdAdapter r1, com.bykv.vk.openvk.CSJSplashAd r2) {
            r0 = this;
            r0.<init>(r1)
            r0.a = r2
            return
    }

    private static int a(android.content.Context r0, float r1) {
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r0 = r0.density
            float r1 = r1 * r0
            r0 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r0
            int r0 = (int) r1
            return r0
    }

    @Override
    public void customResourceDestory() {
            r1 = this;
            r0 = 0
            r1.a = r0
            return
    }

    @Override
    public int[] getSuggestedSize(android.content.Context r5) {
            r4 = this;
            com.bykv.vk.openvk.CSJSplashAd r0 = r4.a
            if (r0 == 0) goto L27
            if (r5 == 0) goto L27
            int[] r0 = r0.getSplashClickEyeSizeToDp()
            if (r0 == 0) goto L27
            int r1 = r0.length
            r2 = 2
            if (r1 < r2) goto L27
            int[] r1 = new int[r2]
            r2 = 0
            r3 = r0[r2]
            float r3 = (float) r3
            int r3 = a(r5, r3)
            r1[r2] = r3
            r2 = 1
            r0 = r0[r2]
            float r0 = (float) r0
            int r5 = a(r5, r0)
            r1[r2] = r5
            return r1
        L27:
            r5 = 0
            return r5
    }

    @Override
    public void onFinished() {
            r2 = this;
            com.bykv.vk.openvk.CSJSplashAd r0 = r2.a
            if (r0 == 0) goto Lf
            android.view.ViewGroup r0 = r2.mEyeAdContainer
            if (r0 == 0) goto Lf
            com.bykv.vk.openvk.CSJSplashAd r0 = r2.a
            android.view.ViewGroup r1 = r2.mEyeAdContainer
            r0.showSplashClickEyeView(r1)
        Lf:
            return
    }

    @Override
    public void show(android.content.Context r2, android.graphics.Rect r3) {
            r1 = this;
            android.view.ViewGroup r2 = r1.mEyeAdContainer     // Catch: java.lang.Throwable -> L1d
            if (r2 != 0) goto L11
            com.tkay.splashad.api.TYSplashEyeAdListener r2 = r1.mTYSplashEyeAdListener     // Catch: java.lang.Throwable -> L1d
            if (r2 == 0) goto L10
            com.tkay.splashad.api.TYSplashEyeAdListener r2 = r1.mTYSplashEyeAdListener     // Catch: java.lang.Throwable -> L1d
            r3 = 0
            java.lang.String r0 = "mEyeAdContainer = null"
            r2.onAdDismiss(r3, r0)     // Catch: java.lang.Throwable -> L1d
        L10:
            return
        L11:
            com.tkay.splashad.api.TYSplashEyeAdListener r2 = r1.mTYSplashEyeAdListener     // Catch: java.lang.Throwable -> L1d
            if (r2 == 0) goto L1c
            com.tkay.splashad.api.TYSplashEyeAdListener r2 = r1.mTYSplashEyeAdListener     // Catch: java.lang.Throwable -> L1d
            android.view.View r3 = r1.mSplashView     // Catch: java.lang.Throwable -> L1d
            r2.onAnimationStart(r3)     // Catch: java.lang.Throwable -> L1d
        L1c:
            return
        L1d:
            r2 = move-exception
            r2.printStackTrace()
            return
    }
}

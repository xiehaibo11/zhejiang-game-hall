package com.tkay.network.gdt;

public class GDTTYSplashEyeAd extends com.tkay.splashad.unitgroup.api.CustomSplashEyeAd {
    com.qq.e.ads.splash.SplashAD a;

    public GDTTYSplashEyeAd(com.tkay.core.api.TYBaseAdAdapter r1, com.qq.e.ads.splash.SplashAD r2) {
            r0 = this;
            r0.<init>(r1)
            r0.mAtBaseAdAdapter = r1
            r0.a = r2
            return
    }

    @Override
    public void customResourceDestory() {
            r1 = this;
            r0 = 0
            r1.a = r0
            return
    }

    @Override
    public int[] getSuggestedSize(android.content.Context r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void onFinished() {
            r1 = this;
            com.qq.e.ads.splash.SplashAD r0 = r1.a
            if (r0 == 0) goto L7
            r0.zoomOutAnimationFinish()
        L7:
            return
    }

    @Override
    public void show(android.content.Context r1, android.graphics.Rect r2) {
            r0 = this;
            com.tkay.splashad.api.TYSplashEyeAdListener r1 = r0.mTYSplashEyeAdListener     // Catch: java.lang.Throwable -> Lc
            if (r1 == 0) goto Lb
            com.tkay.splashad.api.TYSplashEyeAdListener r1 = r0.mTYSplashEyeAdListener     // Catch: java.lang.Throwable -> Lc
            android.view.View r2 = r0.mSplashView     // Catch: java.lang.Throwable -> Lc
            r1.onAnimationStart(r2)     // Catch: java.lang.Throwable -> Lc
        Lb:
            return
        Lc:
            r1 = move-exception
            r1.printStackTrace()
            return
    }
}

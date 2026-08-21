package com.tkay.splashad.unitgroup.api;

public abstract class CustomSplashEyeAd implements com.tkay.splashad.api.ITYSplashEyeAd {
    protected com.tkay.core.api.TYBaseAdAdapter mAtBaseAdAdapter;
    protected android.view.ViewGroup mEyeAdContainer;
    protected android.view.View mSplashView;
    protected com.tkay.splashad.api.TYSplashEyeAdListener mTYSplashEyeAdListener;

    public CustomSplashEyeAd(com.tkay.core.api.TYBaseAdAdapter r1) {
            r0 = this;
            r0.<init>()
            r0.mAtBaseAdAdapter = r1
            return
    }

    public abstract void customResourceDestory();

    @Override
    public final void destroy() {
            r3 = this;
            com.tkay.core.api.TYBaseAdAdapter r0 = r3.mAtBaseAdAdapter     // Catch: java.lang.Throwable -> L52
            r1 = 0
            if (r0 == 0) goto L19
            com.tkay.core.api.TYBaseAdAdapter r0 = r3.mAtBaseAdAdapter     // Catch: java.lang.Throwable -> L52
            boolean r0 = r0 instanceof com.tkay.splashad.unitgroup.api.CustomSplashAdapter     // Catch: java.lang.Throwable -> L52
            if (r0 == 0) goto L12
            com.tkay.core.api.TYBaseAdAdapter r0 = r3.mAtBaseAdAdapter     // Catch: java.lang.Throwable -> L52
            com.tkay.splashad.unitgroup.api.CustomSplashAdapter r0 = (com.tkay.splashad.unitgroup.api.CustomSplashAdapter) r0     // Catch: java.lang.Throwable -> L52
            r0.cleanImpressionListener()     // Catch: java.lang.Throwable -> L52
        L12:
            com.tkay.core.api.TYBaseAdAdapter r0 = r3.mAtBaseAdAdapter     // Catch: java.lang.Throwable -> L52
            r0.destory()     // Catch: java.lang.Throwable -> L52
            r3.mAtBaseAdAdapter = r1     // Catch: java.lang.Throwable -> L52
        L19:
            r3.mTYSplashEyeAdListener = r1     // Catch: java.lang.Throwable -> L52
            android.view.View r0 = r3.mSplashView     // Catch: java.lang.Throwable -> L52
            if (r0 == 0) goto L36
            android.view.View r0 = r3.mSplashView     // Catch: java.lang.Throwable -> L52
            android.view.ViewParent r0 = r0.getParent()     // Catch: java.lang.Throwable -> L52
            if (r0 == 0) goto L34
            android.view.View r0 = r3.mSplashView     // Catch: java.lang.Throwable -> L52
            android.view.ViewParent r0 = r0.getParent()     // Catch: java.lang.Throwable -> L52
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Throwable -> L52
            android.view.View r2 = r3.mSplashView     // Catch: java.lang.Throwable -> L52
            r0.removeView(r2)     // Catch: java.lang.Throwable -> L52
        L34:
            r3.mSplashView = r1     // Catch: java.lang.Throwable -> L52
        L36:
            android.view.ViewGroup r0 = r3.mEyeAdContainer     // Catch: java.lang.Throwable -> L52
            if (r0 == 0) goto L56
            android.view.ViewGroup r0 = r3.mEyeAdContainer     // Catch: java.lang.Throwable -> L52
            android.view.ViewParent r0 = r0.getParent()     // Catch: java.lang.Throwable -> L52
            if (r0 == 0) goto L4f
            android.view.ViewGroup r0 = r3.mEyeAdContainer     // Catch: java.lang.Throwable -> L52
            android.view.ViewParent r0 = r0.getParent()     // Catch: java.lang.Throwable -> L52
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Throwable -> L52
            android.view.ViewGroup r2 = r3.mEyeAdContainer     // Catch: java.lang.Throwable -> L52
            r0.removeView(r2)     // Catch: java.lang.Throwable -> L52
        L4f:
            r3.mEyeAdContainer = r1     // Catch: java.lang.Throwable -> L52
            goto L56
        L52:
            r0 = move-exception
            r0.printStackTrace()
        L56:
            r3.customResourceDestory()     // Catch: java.lang.Throwable -> L5a
            return
        L5a:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    public com.tkay.splashad.api.TYSplashEyeAdListener getSplashEyeAdListener() {
            r1 = this;
            com.tkay.splashad.api.TYSplashEyeAdListener r0 = r1.mTYSplashEyeAdListener
            return r0
    }

    @Override
    public void setEyeAdContainer(android.view.ViewGroup r1) {
            r0 = this;
            r0.mEyeAdContainer = r1
            return
    }

    public void setSplashView(android.view.View r1) {
            r0 = this;
            r0.mSplashView = r1
            return
    }

    protected abstract void show(android.content.Context r1, android.graphics.Rect r2);

    @Override
    public final void show(android.content.Context r1, android.graphics.Rect r2, com.tkay.splashad.api.TYSplashEyeAdListener r3) {
            r0 = this;
            r0.mTYSplashEyeAdListener = r3
            r0.show(r1, r2)
            return
    }
}

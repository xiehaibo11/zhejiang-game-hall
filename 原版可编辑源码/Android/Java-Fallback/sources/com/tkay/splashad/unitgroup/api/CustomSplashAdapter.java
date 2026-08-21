package com.tkay.splashad.unitgroup.api;

public abstract class CustomSplashAdapter extends com.tkay.core.api.TYBaseAdAdapter {
    protected int mFetchAdTimeout;
    protected com.tkay.splashad.unitgroup.api.CustomSplashEventListener mImpressionListener;
    com.tkay.splashad.api.TYSplashSkipInfo mTYSplashSkipInfo;

    public CustomSplashAdapter() {
            r1 = this;
            r1.<init>()
            r0 = 10000(0x2710, float:1.4013E-41)
            r1.mFetchAdTimeout = r0
            return
    }

    public final void cleanImpressionListener() {
            r0 = this;
            return
    }

    public com.tkay.splashad.api.ITYSplashEyeAd getSplashEyeAd() {
            r1 = this;
            r0 = 0
            return r0
    }

    public final com.tkay.splashad.api.TYSplashSkipInfo getSplashSkipInfo() {
            r1 = this;
            com.tkay.splashad.api.TYSplashSkipInfo r0 = r1.mTYSplashSkipInfo
            return r0
    }

    public final void internalShow(android.app.Activity r1, android.view.ViewGroup r2, com.tkay.splashad.unitgroup.api.CustomSplashEventListener r3) {
            r0 = this;
            r0.mImpressionListener = r3
            r0.show(r1, r2)
            return
    }

    public final boolean isCustomSkipView() {
            r1 = this;
            com.tkay.splashad.api.TYSplashSkipInfo r0 = r1.mTYSplashSkipInfo
            if (r0 == 0) goto L9
            boolean r0 = r0.canUseCustomSkipView()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public boolean isSupportCustomSkipView() {
            r1 = this;
            int r0 = r1.getMixedFormatAdType()
            if (r0 != 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public final void setFetchAdTimeout(int r1) {
            r0 = this;
            r0.mFetchAdTimeout = r1
            return
    }

    public final void setSplashSkipInfo(com.tkay.splashad.api.TYSplashSkipInfo r1) {
            r0 = this;
            r0.mTYSplashSkipInfo = r1
            return
    }

    public abstract void show(android.app.Activity r1, android.view.ViewGroup r2);

    public void startSplashCustomSkipViewClickEye() {
            r0 = this;
            return
    }
}

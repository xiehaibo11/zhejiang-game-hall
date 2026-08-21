package com.tkay.splashad.unitgroup.api;

import android.app.Activity;
import android.view.ViewGroup;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.splashad.api.ITYSplashEyeAd;
import com.tkay.splashad.api.TYSplashSkipInfo;

public abstract class CustomSplashAdapter extends TYBaseAdAdapter {
    protected int mFetchAdTimeout = 10000;
    protected CustomSplashEventListener mImpressionListener;
    TYSplashSkipInfo mTYSplashSkipInfo;

    public final void cleanImpressionListener() {
    }

    public ITYSplashEyeAd getSplashEyeAd() {
        return null;
    }

    public abstract void show(Activity activity, ViewGroup viewGroup);

    public void startSplashCustomSkipViewClickEye() {
    }

    public final void internalShow(Activity activity, ViewGroup viewGroup, CustomSplashEventListener customSplashEventListener) {
        this.mImpressionListener = customSplashEventListener;
        show(activity, viewGroup);
    }

    public final void setFetchAdTimeout(int i) {
        this.mFetchAdTimeout = i;
    }

    public final void setSplashSkipInfo(TYSplashSkipInfo tYSplashSkipInfo) {
        this.mTYSplashSkipInfo = tYSplashSkipInfo;
    }

    public final TYSplashSkipInfo getSplashSkipInfo() {
        return this.mTYSplashSkipInfo;
    }

    public boolean isSupportCustomSkipView() {
        return getMixedFormatAdType() == 0;
    }

    public final boolean isCustomSkipView() {
        TYSplashSkipInfo tYSplashSkipInfo = this.mTYSplashSkipInfo;
        if (tYSplashSkipInfo != null) {
            return tYSplashSkipInfo.canUseCustomSkipView();
        }
        return false;
    }
}

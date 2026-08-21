package com.tkay.network.gdt;

import android.content.Context;
import android.graphics.Rect;
import com.qq.e.ads.splash.SplashAD;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.splashad.unitgroup.api.CustomSplashEyeAd;

public class GDTTYSplashEyeAd extends CustomSplashEyeAd {
    SplashAD a;

    @Override
    public int[] getSuggestedSize(Context context) {
        return null;
    }

    public GDTTYSplashEyeAd(TYBaseAdAdapter tYBaseAdAdapter, SplashAD splashAD) {
        super(tYBaseAdAdapter);
        this.mAtBaseAdAdapter = tYBaseAdAdapter;
        this.a = splashAD;
    }

    @Override
    public void show(Context context, Rect rect) {
        try {
            if (this.mTYSplashEyeAdListener != null) {
                this.mTYSplashEyeAdListener.onAnimationStart(this.mSplashView);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public void onFinished() {
        SplashAD splashAD = this.a;
        if (splashAD != null) {
            splashAD.zoomOutAnimationFinish();
        }
    }

    @Override
    public void customResourceDestory() {
        this.a = null;
    }
}

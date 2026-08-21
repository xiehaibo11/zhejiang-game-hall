package com.tkay.network.toutiao;

import android.content.Context;
import android.graphics.Rect;
import com.bykv.vk.openvk.CSJSplashAd;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.splashad.unitgroup.api.CustomSplashEyeAd;

public class TTTYSplashEyeAd extends CustomSplashEyeAd {
    CSJSplashAd a;

    public TTTYSplashEyeAd(TYBaseAdAdapter tYBaseAdAdapter, CSJSplashAd cSJSplashAd) {
        super(tYBaseAdAdapter);
        this.a = cSJSplashAd;
    }

    @Override
    public void show(Context context, Rect rect) {
        try {
            if (this.mEyeAdContainer == null) {
                if (this.mTYSplashEyeAdListener != null) {
                    this.mTYSplashEyeAdListener.onAdDismiss(false, "mEyeAdContainer = null");
                }
            } else if (this.mTYSplashEyeAdListener != null) {
                this.mTYSplashEyeAdListener.onAnimationStart(this.mSplashView);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public int[] getSuggestedSize(Context context) {
        int[] splashClickEyeSizeToDp;
        CSJSplashAd cSJSplashAd = this.a;
        if (cSJSplashAd == null || context == null || (splashClickEyeSizeToDp = cSJSplashAd.getSplashClickEyeSizeToDp()) == null || splashClickEyeSizeToDp.length < 2) {
            return null;
        }
        return new int[]{a(context, splashClickEyeSizeToDp[0]), a(context, splashClickEyeSizeToDp[1])};
    }

    private static int a(Context context, float f) {
        return (int) ((f * context.getResources().getDisplayMetrics().density) + 0.5f);
    }

    @Override
    public void onFinished() {
        if (this.a == null || this.mEyeAdContainer == null) {
            return;
        }
        this.a.showSplashClickEyeView(this.mEyeAdContainer);
    }

    @Override
    public void customResourceDestory() {
        this.a = null;
    }
}

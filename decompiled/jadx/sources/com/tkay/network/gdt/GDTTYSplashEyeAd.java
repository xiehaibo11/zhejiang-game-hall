package com.tkay.network.gdt;

import android.content.Context;
import android.graphics.Rect;
import com.qq.e.ads.splash.SplashAD;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.splashad.unitgroup.api.CustomSplashEyeAd;

/* JADX INFO: loaded from: classes3.dex */
public class GDTTYSplashEyeAd extends CustomSplashEyeAd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    SplashAD f7578a;

    @Override // com.tkay.splashad.api.ITYSplashEyeAd
    public int[] getSuggestedSize(Context context) {
        return null;
    }

    public GDTTYSplashEyeAd(TYBaseAdAdapter tYBaseAdAdapter, SplashAD splashAD) {
        super(tYBaseAdAdapter);
        this.mAtBaseAdAdapter = tYBaseAdAdapter;
        this.f7578a = splashAD;
    }

    @Override // com.tkay.splashad.unitgroup.api.CustomSplashEyeAd
    public void show(Context context, Rect rect) {
        try {
            if (this.mTYSplashEyeAdListener != null) {
                this.mTYSplashEyeAdListener.onAnimationStart(this.mSplashView);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override // com.tkay.splashad.api.ITYSplashEyeAd
    public void onFinished() {
        SplashAD splashAD = this.f7578a;
        if (splashAD != null) {
            splashAD.zoomOutAnimationFinish();
        }
    }

    @Override // com.tkay.splashad.unitgroup.api.CustomSplashEyeAd
    public void customResourceDestory() {
        this.f7578a = null;
    }
}

package com.tkay.interstitial.unitgroup.api;

import android.app.Activity;
import com.tkay.core.api.TYBaseAdAdapter;

/* JADX INFO: loaded from: classes3.dex */
public abstract class CustomInterstitialAdapter extends TYBaseAdAdapter {
    protected CustomInterstitialEventListener mImpressListener;

    public abstract void show(Activity activity);

    public final void internalShow(Activity activity, CustomInterstitialEventListener customInterstitialEventListener) {
        this.mImpressListener = customInterstitialEventListener;
        try {
            show(activity);
        } catch (Throwable th) {
            th.printStackTrace();
            CustomInterstitialEventListener customInterstitialEventListener2 = this.mImpressListener;
            if (customInterstitialEventListener2 != null) {
                customInterstitialEventListener2.onInterstitialAdVideoError("", "exception, show failed: " + th.getMessage());
            }
        }
    }

    public void clearImpressionListener() {
        this.mImpressListener = null;
    }
}

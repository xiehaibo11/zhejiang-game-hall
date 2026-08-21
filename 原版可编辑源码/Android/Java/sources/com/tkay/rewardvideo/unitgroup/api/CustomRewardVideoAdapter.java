package com.tkay.rewardvideo.unitgroup.api;

import android.app.Activity;
import com.tkay.core.api.TYBaseAdAdapter;

public abstract class CustomRewardVideoAdapter extends TYBaseAdAdapter {
    protected CustomRewardedVideoEventListener mImpressionListener;

    public abstract void show(Activity activity);

    public final void internalShow(Activity activity, CustomRewardedVideoEventListener customRewardedVideoEventListener) {
        this.mImpressionListener = customRewardedVideoEventListener;
        try {
            show(activity);
        } catch (Throwable th) {
            th.printStackTrace();
            CustomRewardedVideoEventListener customRewardedVideoEventListener2 = this.mImpressionListener;
            if (customRewardedVideoEventListener2 != null) {
                customRewardedVideoEventListener2.onRewardedVideoAdPlayFailed("", "exception, show failed: " + th.getMessage());
            }
        }
    }

    public void clearImpressionListener() {
        this.mImpressionListener = null;
    }
}

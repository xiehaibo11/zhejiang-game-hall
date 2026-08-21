package com.tkay.rewardvideo.unitgroup.api;

public abstract class CustomRewardVideoAdapter extends com.tkay.core.api.TYBaseAdAdapter {
    protected com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener mImpressionListener;

    public CustomRewardVideoAdapter() {
            r0 = this;
            r0.<init>()
            return
    }

    public void clearImpressionListener() {
            r1 = this;
            r0 = 0
            r1.mImpressionListener = r0
            return
    }

    public final void internalShow(android.app.Activity r3, com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r4) {
            r2 = this;
            r2.mImpressionListener = r4
            r2.show(r3)     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r3 = move-exception
            r3.printStackTrace()
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r4 = r2.mImpressionListener
            if (r4 == 0) goto L25
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "exception, show failed: "
            r0.<init>(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = ""
            r4.onRewardedVideoAdPlayFailed(r0, r3)
        L25:
            return
    }

    public abstract void show(android.app.Activity r1);
}

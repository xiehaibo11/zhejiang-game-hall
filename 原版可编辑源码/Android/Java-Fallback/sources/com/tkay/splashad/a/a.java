package com.tkay.splashad.a;

public abstract class a {
    boolean mHasDismiss;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void onAdClick(com.tkay.core.api.TYAdInfo r1);

    public abstract void onAdDismiss(com.tkay.core.api.TYAdInfo r1, com.tkay.splashad.api.TYSplashAdExtraInfo r2);

    public abstract void onAdShow(com.tkay.core.api.TYAdInfo r1);

    public void onCallbackAdDismiss(com.tkay.core.api.TYAdInfo r2, com.tkay.splashad.api.TYSplashAdExtraInfo r3) {
            r1 = this;
            boolean r0 = r1.mHasDismiss
            if (r0 != 0) goto La
            r0 = 1
            r1.mHasDismiss = r0
            r1.onAdDismiss(r2, r3)
        La:
            return
    }

    public abstract void onDeeplinkCallback(com.tkay.core.api.TYAdInfo r1, boolean r2);

    public abstract void onDownloadConfirm(android.content.Context r1, com.tkay.core.api.TYAdInfo r2, com.tkay.core.api.TYNetworkConfirmInfo r3);
}

package com.tkay.interstitial.unitgroup.api;

public abstract class CustomInterstitialAdapter extends com.tkay.core.api.TYBaseAdAdapter {
    protected com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener mImpressListener;

    public CustomInterstitialAdapter() {
            r0 = this;
            r0.<init>()
            return
    }

    public void clearImpressionListener() {
            r1 = this;
            r0 = 0
            r1.mImpressListener = r0
            return
    }

    public final void internalShow(android.app.Activity r3, com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r4) {
            r2 = this;
            r2.mImpressListener = r4
            r2.show(r3)     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r3 = move-exception
            r3.printStackTrace()
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r4 = r2.mImpressListener
            if (r4 == 0) goto L25
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "exception, show failed: "
            r0.<init>(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = ""
            r4.onInterstitialAdVideoError(r0, r3)
        L25:
            return
    }

    public abstract void show(android.app.Activity r1);
}

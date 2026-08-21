package com.bianfeng.toponad.ui;

public class TopOnAdInterstialnd implements com.tkay.interstitial.api.TYInterstitialListener {
    private static com.bianfeng.toponad.ui.TopOnAdInterstialnd adView;
    private static boolean toponadInterstialnd_loadFlag;
    private android.app.Activity activity;
    private com.tkay.interstitial.api.TYInterstitial interstitial;
    private java.lang.String positionid;

    static {
            return
    }

    private TopOnAdInterstialnd(android.app.Activity r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.activity = r1
            r0.positionid = r2
            r0.loadAd()
            return
    }

    public static com.bianfeng.toponad.ui.TopOnAdInterstialnd getInstance(android.app.Activity r1, java.lang.String r2) {
            com.bianfeng.toponad.ui.TopOnAdInterstialnd r0 = com.bianfeng.toponad.ui.TopOnAdInterstialnd.adView
            if (r0 != 0) goto Lc
            com.bianfeng.toponad.ui.TopOnAdInterstialnd r0 = new com.bianfeng.toponad.ui.TopOnAdInterstialnd
            r0.<init>(r1, r2)
            com.bianfeng.toponad.ui.TopOnAdInterstialnd.adView = r0
            goto L21
        Lc:
            boolean r1 = com.bianfeng.toponad.ui.TopOnAdInterstialnd.toponadInterstialnd_loadFlag
            java.lang.String r2 = "INTERSTIALAD"
            if (r1 == 0) goto L1a
            com.bianfeng.toponad.ui.TopOnAdCallBack r1 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            r1.onAdLoaded(r2)
            goto L21
        L1a:
            com.bianfeng.toponad.ui.TopOnAdCallBack r1 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            r1.onAdLoading(r2)
        L21:
            com.bianfeng.toponad.ui.TopOnAdInterstialnd r1 = com.bianfeng.toponad.ui.TopOnAdInterstialnd.adView
            return r1
    }

    private void loadAd() {
            r3 = this;
            com.tkay.interstitial.api.TYInterstitial r0 = new com.tkay.interstitial.api.TYInterstitial
            android.app.Activity r1 = r3.activity
            java.lang.String r2 = r3.positionid
            r0.<init>(r1, r2)
            r3.interstitial = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1 = 1
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            java.lang.String r2 = "is_use_rewarded_video_as_interstitial"
            r0.put(r2, r1)
            com.tkay.interstitial.api.TYInterstitial r1 = r3.interstitial
            r1.setLocalExtra(r0)
            com.tkay.interstitial.api.TYInterstitial r0 = r3.interstitial
            r0.setAdListener(r3)
            com.tkay.interstitial.api.TYInterstitial r0 = r3.interstitial
            r0.load()
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r1 = "INTERSTIALAD"
            r0.onAdLoadApi(r1)
            return
    }

    public void closeAd() {
            r2 = this;
            r0 = 0
            r2.interstitial = r0
            r1 = 0
            com.bianfeng.toponad.ui.TopOnAdInterstialnd.toponadInterstialnd_loadFlag = r1
            com.bianfeng.toponad.ui.TopOnAdInterstialnd.adView = r0
            return
    }

    @Override
    public void onInterstitialAdClicked(com.tkay.core.api.TYAdInfo r2) {
            r1 = this;
            java.lang.String r2 = "onInterstitialAdClicked"
            com.bianfeng.ymnsdk.util.Logger.e(r2)
            com.bianfeng.toponad.ui.TopOnAdCallBack r2 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r0 = "INTERSTIALAD"
            r2.onADClicked(r0)
            return
    }

    @Override
    public void onInterstitialAdClose(com.tkay.core.api.TYAdInfo r4) {
            r3 = this;
            java.lang.String r0 = "onInterstitialAdClose"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r1 = "INTERSTIALAD"
            r0.onADDismissed(r1)
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "INTERSTIALAD|"
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.onRewardVerifyAd(r4)
            r3.closeAd()
            return
    }

    @Override
    public void onInterstitialAdLoadFail(com.tkay.core.api.AdError r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onInterstitialAdLoadFail"
            r0.append(r1)
            java.lang.String r1 = r4.getFullErrorInfo()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r4.getCode()
            r1.append(r2)
            java.lang.String r2 = "|"
            r1.append(r2)
            java.lang.String r4 = r4.getFullErrorInfo()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.String r1 = "INTERSTIALAD"
            r0.onNoAD(r1, r4)
            r3.closeAd()
            return
    }

    @Override
    public void onInterstitialAdLoaded() {
            r2 = this;
            java.lang.String r0 = "onInterstitialAdLoaded"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r1 = "INTERSTIALAD"
            r0.onAdReady(r1)
            return
    }

    @Override
    public void onInterstitialAdShow(com.tkay.core.api.TYAdInfo r2) {
            r1 = this;
            java.lang.String r2 = "onInterstitialAdShow"
            com.bianfeng.ymnsdk.util.Logger.e(r2)
            com.bianfeng.toponad.ui.TopOnAdCallBack r2 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r0 = "INTERSTIALAD"
            r2.onADPresent(r0)
            return
    }

    @Override
    public void onInterstitialAdVideoEnd(com.tkay.core.api.TYAdInfo r4) {
            r3 = this;
            java.lang.String r0 = "onInterstitialAdVideoEnd--->"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r1 = "INTERSTIALAD"
            r0.onADDismissed(r1)
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "INTERSTIALAD|"
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.onRewardVerifyAd(r4)
            r3.closeAd()
            return
    }

    @Override
    public void onInterstitialAdVideoError(com.tkay.core.api.AdError r1) {
            r0 = this;
            java.lang.String r1 = "onInterstitialAdVideoError"
            com.bianfeng.ymnsdk.util.Logger.e(r1)
            return
    }

    @Override
    public void onInterstitialAdVideoStart(com.tkay.core.api.TYAdInfo r1) {
            r0 = this;
            java.lang.String r1 = "onInterstitialAdVideoStart"
            com.bianfeng.ymnsdk.util.Logger.e(r1)
            return
    }

    public void showAd() {
            r3 = this;
            com.tkay.interstitial.api.TYInterstitial r0 = r3.interstitial
            java.lang.String r1 = "INTERSTIALAD"
            if (r0 == 0) goto L1b
            boolean r0 = r0.isAdReady()
            if (r0 == 0) goto L1b
            com.tkay.interstitial.api.TYInterstitial r0 = r3.interstitial
            android.app.Activity r2 = r3.activity
            r0.show(r2)
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            r0.onAdShowApi(r1)
            goto L25
        L1b:
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            r0.onAdShowCheckFail(r1)
            r3.closeAd()
        L25:
            return
    }
}

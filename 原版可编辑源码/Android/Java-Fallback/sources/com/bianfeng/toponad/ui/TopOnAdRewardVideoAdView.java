package com.bianfeng.toponad.ui;

public class TopOnAdRewardVideoAdView implements com.tkay.rewardvideo.api.TYRewardVideoListener, com.tkay.rewardvideo.api.TYRewardVideoExListener {
    private static com.bianfeng.toponad.ui.TopOnAdRewardVideoAdView adView;
    private static boolean toponadVideo_loadFlag;
    private android.app.Activity activity;
    private java.lang.String positionid;
    private com.tkay.rewardvideo.api.TYRewardVideoAd rewardVideoAd;

    static {
            return
    }

    private TopOnAdRewardVideoAdView(android.app.Activity r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.activity = r1
            r0.positionid = r2
            r0.loadAd()
            return
    }

    public static com.bianfeng.toponad.ui.TopOnAdRewardVideoAdView getInstance(android.app.Activity r1, java.lang.String r2) {
            com.bianfeng.toponad.ui.TopOnAdRewardVideoAdView r0 = com.bianfeng.toponad.ui.TopOnAdRewardVideoAdView.adView
            if (r0 != 0) goto Lc
            com.bianfeng.toponad.ui.TopOnAdRewardVideoAdView r0 = new com.bianfeng.toponad.ui.TopOnAdRewardVideoAdView
            r0.<init>(r1, r2)
            com.bianfeng.toponad.ui.TopOnAdRewardVideoAdView.adView = r0
            goto L21
        Lc:
            boolean r1 = com.bianfeng.toponad.ui.TopOnAdRewardVideoAdView.toponadVideo_loadFlag
            java.lang.String r2 = "VIDEO"
            if (r1 == 0) goto L1a
            com.bianfeng.toponad.ui.TopOnAdCallBack r1 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            r1.onAdLoaded(r2)
            goto L21
        L1a:
            com.bianfeng.toponad.ui.TopOnAdCallBack r1 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            r1.onAdLoading(r2)
        L21:
            com.bianfeng.toponad.ui.TopOnAdRewardVideoAdView r1 = com.bianfeng.toponad.ui.TopOnAdRewardVideoAdView.adView
            return r1
    }

    private void loadAd() {
            r3 = this;
            com.tkay.rewardvideo.api.TYRewardVideoAd r0 = new com.tkay.rewardvideo.api.TYRewardVideoAd
            android.app.Activity r1 = r3.activity
            java.lang.String r2 = r3.positionid
            r0.<init>(r1, r2)
            r3.rewardVideoAd = r0
            r0.setAdListener(r3)
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r1 = "VIDEO"
            r0.onAdLoadApi(r1)
            com.tkay.rewardvideo.api.TYRewardVideoAd r0 = r3.rewardVideoAd
            r0.load()
            return
    }

    public void closeAd() {
            r1 = this;
            r0 = 0
            com.bianfeng.toponad.ui.TopOnAdRewardVideoAdView.toponadVideo_loadFlag = r0
            r0 = 0
            com.bianfeng.toponad.ui.TopOnAdRewardVideoAdView.adView = r0
            return
    }

    @Override
    public void onAgainReward(com.tkay.core.api.TYAdInfo r4) {
            r3 = this;
            java.lang.String r0 = "onReward"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r1 = "VIDEO"
            r0.onRewardVerifyAd(r1)
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "VIDEO|"
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.onRewardVerifyAd(r4)
            return
    }

    @Override
    public void onDeeplinkCallback(com.tkay.core.api.TYAdInfo r1, boolean r2) {
            r0 = this;
            return
    }

    @Override
    public void onDownloadConfirm(android.content.Context r1, com.tkay.core.api.TYAdInfo r2, com.tkay.core.api.TYNetworkConfirmInfo r3) {
            r0 = this;
            return
    }

    @Override
    public void onReward(com.tkay.core.api.TYAdInfo r4) {
            r3 = this;
            java.lang.String r0 = "onReward"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r1 = "VIDEO"
            r0.onRewardVerifyAd(r1)
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "VIDEO|"
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.onRewardVerifyAd(r4)
            return
    }

    @Override
    public void onRewardedVideoAdAgainPlayClicked(com.tkay.core.api.TYAdInfo r2) {
            r1 = this;
            java.lang.String r2 = "onRewardedVideoAdPlayClicked"
            com.bianfeng.ymnsdk.util.Logger.e(r2)
            com.bianfeng.toponad.ui.TopOnAdCallBack r2 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r0 = "VIDEO"
            r2.onADClicked(r0)
            return
    }

    @Override
    public void onRewardedVideoAdAgainPlayEnd(com.tkay.core.api.TYAdInfo r2) {
            r1 = this;
            java.lang.String r2 = "onRewardedVideoAdPlayEnd"
            com.bianfeng.ymnsdk.util.Logger.e(r2)
            com.bianfeng.toponad.ui.TopOnAdCallBack r2 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r0 = "VIDEO"
            r2.onCompletedAd(r0)
            return
    }

    @Override
    public void onRewardedVideoAdAgainPlayFailed(com.tkay.core.api.AdError r3, com.tkay.core.api.TYAdInfo r4) {
            r2 = this;
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "onRewardedVideoAdPlayFailed-->"
            r4.append(r0)
            java.lang.String r0 = r3.getFullErrorInfo()
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r4)
            com.bianfeng.toponad.ui.TopOnAdCallBack r4 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "VIDEO|"
            r0.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.onAdShowFail(r3)
            r2.closeAd()
            return
    }

    @Override
    public void onRewardedVideoAdAgainPlayStart(com.tkay.core.api.TYAdInfo r2) {
            r1 = this;
            java.lang.String r2 = "onRewardedVideoAdPlayStart"
            com.bianfeng.ymnsdk.util.Logger.e(r2)
            com.bianfeng.toponad.ui.TopOnAdCallBack r2 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r0 = "VIDEO"
            r2.onADPresent(r0)
            return
    }

    @Override
    public void onRewardedVideoAdClosed(com.tkay.core.api.TYAdInfo r2) {
            r1 = this;
            java.lang.String r2 = "onRewardedVideoAdClosed"
            com.bianfeng.ymnsdk.util.Logger.e(r2)
            com.bianfeng.toponad.ui.TopOnAdCallBack r2 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r0 = "VIDEO"
            r2.onADDismissed(r0)
            r1.closeAd()
            return
    }

    @Override
    public void onRewardedVideoAdFailed(com.tkay.core.api.AdError r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onRewardedVideoAdFailed-->"
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
            java.lang.String r1 = "VIDEO"
            r0.onNoAD(r1, r4)
            r3.closeAd()
            return
    }

    @Override
    public void onRewardedVideoAdLoaded() {
            r2 = this;
            java.lang.String r0 = "onRewardedVideoAdLoaded"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r1 = "VIDEO"
            r0.onAdReady(r1)
            r0 = 1
            com.bianfeng.toponad.ui.TopOnAdRewardVideoAdView.toponadVideo_loadFlag = r0
            return
    }

    @Override
    public void onRewardedVideoAdPlayClicked(com.tkay.core.api.TYAdInfo r2) {
            r1 = this;
            java.lang.String r2 = "onRewardedVideoAdPlayClicked"
            com.bianfeng.ymnsdk.util.Logger.e(r2)
            com.bianfeng.toponad.ui.TopOnAdCallBack r2 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r0 = "VIDEO"
            r2.onADClicked(r0)
            return
    }

    @Override
    public void onRewardedVideoAdPlayEnd(com.tkay.core.api.TYAdInfo r2) {
            r1 = this;
            java.lang.String r2 = "onRewardedVideoAdPlayEnd"
            com.bianfeng.ymnsdk.util.Logger.e(r2)
            com.bianfeng.toponad.ui.TopOnAdCallBack r2 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r0 = "VIDEO"
            r2.onCompletedAd(r0)
            return
    }

    @Override
    public void onRewardedVideoAdPlayFailed(com.tkay.core.api.AdError r2, com.tkay.core.api.TYAdInfo r3) {
            r1 = this;
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "onRewardedVideoAdPlayFailed-->"
            r3.append(r0)
            java.lang.String r2 = r2.getFullErrorInfo()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r2)
            com.bianfeng.toponad.ui.TopOnAdCallBack r2 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r3 = "VIDEO"
            r2.onAdShowFail(r3)
            r1.closeAd()
            return
    }

    @Override
    public void onRewardedVideoAdPlayStart(com.tkay.core.api.TYAdInfo r2) {
            r1 = this;
            java.lang.String r2 = "onRewardedVideoAdPlayStart"
            com.bianfeng.ymnsdk.util.Logger.e(r2)
            com.bianfeng.toponad.ui.TopOnAdCallBack r2 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r0 = "VIDEO"
            r2.onADPresent(r0)
            return
    }

    public void showAd() {
            r3 = this;
            com.tkay.rewardvideo.api.TYRewardVideoAd r0 = r3.rewardVideoAd
            java.lang.String r1 = "VIDEO"
            if (r0 == 0) goto L1b
            boolean r0 = r0.isAdReady()
            if (r0 == 0) goto L1b
            com.tkay.rewardvideo.api.TYRewardVideoAd r0 = r3.rewardVideoAd
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

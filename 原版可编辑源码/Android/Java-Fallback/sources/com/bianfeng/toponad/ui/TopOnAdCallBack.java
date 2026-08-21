package com.bianfeng.toponad.ui;

public interface TopOnAdCallBack {
    public static final java.lang.String BANNERAD = "BANNERAD";
    public static final java.lang.String INTERSTIALAD = "INTERSTIALAD";
    public static final java.lang.String NATIVAD = "NATIVAD";
    public static final java.lang.String REWARDVIDEO = "REWARDVIDEO";
    public static final java.lang.String SPLASHAD = "SPLASHAD";
    public static final java.lang.String VIDEO = "VIDEO";

    void onADClicked(java.lang.String r1);

    void onADDismissed(java.lang.String r1);

    void onADPresent(java.lang.String r1);

    void onAdLoadApi(java.lang.String r1);

    void onAdLoaded(java.lang.String r1);

    void onAdLoading(java.lang.String r1);

    void onAdReady(java.lang.String r1);

    void onAdShowApi(java.lang.String r1);

    void onAdShowCheckFail(java.lang.String r1);

    void onAdShowFail(java.lang.String r1);

    void onCompletedAd(java.lang.String r1);

    void onNoAD(java.lang.String r1, java.lang.String r2);

    void onRewardVerifyAd(java.lang.String r1);
}

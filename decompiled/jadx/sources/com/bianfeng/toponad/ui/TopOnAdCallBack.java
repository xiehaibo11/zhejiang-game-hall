package com.bianfeng.toponad.ui;

/* JADX INFO: loaded from: classes.dex */
public interface TopOnAdCallBack {
    public static final String BANNERAD = "BANNERAD";
    public static final String INTERSTIALAD = "INTERSTIALAD";
    public static final String NATIVAD = "NATIVAD";
    public static final String REWARDVIDEO = "REWARDVIDEO";
    public static final String SPLASHAD = "SPLASHAD";
    public static final String VIDEO = "VIDEO";

    void onADClicked(String str);

    void onADDismissed(String str);

    void onADPresent(String str);

    void onAdLoadApi(String str);

    void onAdLoaded(String str);

    void onAdLoading(String str);

    void onAdReady(String str);

    void onAdShowApi(String str);

    void onAdShowCheckFail(String str);

    void onAdShowFail(String str);

    void onCompletedAd(String str);

    void onNoAD(String str, String str2);

    void onRewardVerifyAd(String str);
}

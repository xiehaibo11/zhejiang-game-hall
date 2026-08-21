package com.bianfeng.toponad.ui;

import android.app.Activity;
import android.content.Context;
import com.bianfeng.ymnsdk.util.Logger;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYNetworkConfirmInfo;
import com.tkay.rewardvideo.api.TYRewardVideoAd;
import com.tkay.rewardvideo.api.TYRewardVideoExListener;
import com.tkay.rewardvideo.api.TYRewardVideoListener;

public class TopOnAdRewardVideoAdView implements TYRewardVideoListener, TYRewardVideoExListener {
    private static TopOnAdRewardVideoAdView adView;
    private static boolean toponadVideo_loadFlag;
    private Activity activity;
    private String positionid;
    private TYRewardVideoAd rewardVideoAd;

    @Override
    public void onDeeplinkCallback(TYAdInfo tYAdInfo, boolean z) {
    }

    @Override
    public void onDownloadConfirm(Context context, TYAdInfo tYAdInfo, TYNetworkConfirmInfo tYNetworkConfirmInfo) {
    }

    public static TopOnAdRewardVideoAdView getInstance(Activity activity, String str) {
        if (adView == null) {
            adView = new TopOnAdRewardVideoAdView(activity, str);
        } else if (toponadVideo_loadFlag) {
            TopOnAdApi.getYSDKAdCallBack().onAdLoaded(TopOnAdCallBack.VIDEO);
        } else {
            TopOnAdApi.getYSDKAdCallBack().onAdLoading(TopOnAdCallBack.VIDEO);
        }
        return adView;
    }

    private TopOnAdRewardVideoAdView(Activity activity, String str) {
        this.activity = activity;
        this.positionid = str;
        loadAd();
    }

    private void loadAd() {
        TYRewardVideoAd tYRewardVideoAd = new TYRewardVideoAd(this.activity, this.positionid);
        this.rewardVideoAd = tYRewardVideoAd;
        tYRewardVideoAd.setAdListener(this);
        TopOnAdApi.getYSDKAdCallBack().onAdLoadApi(TopOnAdCallBack.VIDEO);
        this.rewardVideoAd.load();
    }

    public void showAd() {
        TYRewardVideoAd tYRewardVideoAd = this.rewardVideoAd;
        if (tYRewardVideoAd != null && tYRewardVideoAd.isAdReady()) {
            this.rewardVideoAd.show(this.activity);
            TopOnAdApi.getYSDKAdCallBack().onAdShowApi(TopOnAdCallBack.VIDEO);
        } else {
            TopOnAdApi.getYSDKAdCallBack().onAdShowCheckFail(TopOnAdCallBack.VIDEO);
            closeAd();
        }
    }

    public void closeAd() {
        toponadVideo_loadFlag = false;
        adView = null;
    }

    @Override
    public void onRewardedVideoAdLoaded() {
        Logger.e("onRewardedVideoAdLoaded");
        TopOnAdApi.getYSDKAdCallBack().onAdReady(TopOnAdCallBack.VIDEO);
        toponadVideo_loadFlag = true;
    }

    @Override
    public void onRewardedVideoAdFailed(AdError adError) {
        Logger.e("onRewardedVideoAdFailed-->" + adError.getFullErrorInfo());
        TopOnAdApi.getYSDKAdCallBack().onNoAD(TopOnAdCallBack.VIDEO, adError.getCode() + "|" + adError.getFullErrorInfo());
        closeAd();
    }

    @Override
    public void onRewardedVideoAdPlayStart(TYAdInfo tYAdInfo) {
        Logger.e("onRewardedVideoAdPlayStart");
        TopOnAdApi.getYSDKAdCallBack().onADPresent(TopOnAdCallBack.VIDEO);
    }

    @Override
    public void onRewardedVideoAdPlayEnd(TYAdInfo tYAdInfo) {
        Logger.e("onRewardedVideoAdPlayEnd");
        TopOnAdApi.getYSDKAdCallBack().onCompletedAd(TopOnAdCallBack.VIDEO);
    }

    @Override
    public void onRewardedVideoAdPlayFailed(AdError adError, TYAdInfo tYAdInfo) {
        Logger.e("onRewardedVideoAdPlayFailed-->" + adError.getFullErrorInfo());
        TopOnAdApi.getYSDKAdCallBack().onAdShowFail(TopOnAdCallBack.VIDEO);
        closeAd();
    }

    @Override
    public void onRewardedVideoAdClosed(TYAdInfo tYAdInfo) {
        Logger.e("onRewardedVideoAdClosed");
        TopOnAdApi.getYSDKAdCallBack().onADDismissed(TopOnAdCallBack.VIDEO);
        closeAd();
    }

    @Override
    public void onRewardedVideoAdPlayClicked(TYAdInfo tYAdInfo) {
        Logger.e("onRewardedVideoAdPlayClicked");
        TopOnAdApi.getYSDKAdCallBack().onADClicked(TopOnAdCallBack.VIDEO);
    }

    @Override
    public void onReward(TYAdInfo tYAdInfo) {
        Logger.e("onReward");
        TopOnAdApi.getYSDKAdCallBack().onRewardVerifyAd(TopOnAdCallBack.VIDEO);
        TopOnAdApi.getYSDKAdCallBack().onRewardVerifyAd("VIDEO|" + tYAdInfo.toString());
    }

    @Override
    public void onRewardedVideoAdAgainPlayStart(TYAdInfo tYAdInfo) {
        Logger.e("onRewardedVideoAdPlayStart");
        TopOnAdApi.getYSDKAdCallBack().onADPresent(TopOnAdCallBack.VIDEO);
    }

    @Override
    public void onRewardedVideoAdAgainPlayEnd(TYAdInfo tYAdInfo) {
        Logger.e("onRewardedVideoAdPlayEnd");
        TopOnAdApi.getYSDKAdCallBack().onCompletedAd(TopOnAdCallBack.VIDEO);
    }

    @Override
    public void onRewardedVideoAdAgainPlayFailed(AdError adError, TYAdInfo tYAdInfo) {
        Logger.e("onRewardedVideoAdPlayFailed-->" + adError.getFullErrorInfo());
        TopOnAdApi.getYSDKAdCallBack().onAdShowFail("VIDEO|" + adError.toString());
        closeAd();
    }

    @Override
    public void onRewardedVideoAdAgainPlayClicked(TYAdInfo tYAdInfo) {
        Logger.e("onRewardedVideoAdPlayClicked");
        TopOnAdApi.getYSDKAdCallBack().onADClicked(TopOnAdCallBack.VIDEO);
    }

    @Override
    public void onAgainReward(TYAdInfo tYAdInfo) {
        Logger.e("onReward");
        TopOnAdApi.getYSDKAdCallBack().onRewardVerifyAd(TopOnAdCallBack.VIDEO);
        TopOnAdApi.getYSDKAdCallBack().onRewardVerifyAd("VIDEO|" + tYAdInfo.toString());
    }
}

package com.bianfeng.toponad.ui;

import android.app.Activity;
import com.bianfeng.ymnsdk.util.Logger;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdInfo;
import com.tkay.interstitial.api.TYInterstitial;
import com.tkay.interstitial.api.TYInterstitialListener;
import com.tkay.network.sigmob.SigmobTYConst;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public class TopOnAdInterstialnd implements TYInterstitialListener {
    private static TopOnAdInterstialnd adView;
    private static boolean toponadInterstialnd_loadFlag;
    private Activity activity;
    private TYInterstitial interstitial;
    private String positionid;

    public static TopOnAdInterstialnd getInstance(Activity activity, String str) {
        if (adView == null) {
            adView = new TopOnAdInterstialnd(activity, str);
        } else if (toponadInterstialnd_loadFlag) {
            TopOnAdApi.getYSDKAdCallBack().onAdLoaded(TopOnAdCallBack.INTERSTIALAD);
        } else {
            TopOnAdApi.getYSDKAdCallBack().onAdLoading(TopOnAdCallBack.INTERSTIALAD);
        }
        return adView;
    }

    private TopOnAdInterstialnd(Activity activity, String str) {
        this.activity = activity;
        this.positionid = str;
        loadAd();
    }

    private void loadAd() {
        this.interstitial = new TYInterstitial(this.activity, this.positionid);
        HashMap map = new HashMap();
        map.put(SigmobTYConst.IS_USE_REWARDED_VIDEO_AS_INTERSTITIAL, true);
        this.interstitial.setLocalExtra(map);
        this.interstitial.setAdListener(this);
        this.interstitial.load();
        TopOnAdApi.getYSDKAdCallBack().onAdLoadApi(TopOnAdCallBack.INTERSTIALAD);
    }

    public void showAd() {
        TYInterstitial tYInterstitial = this.interstitial;
        if (tYInterstitial != null && tYInterstitial.isAdReady()) {
            this.interstitial.show(this.activity);
            TopOnAdApi.getYSDKAdCallBack().onAdShowApi(TopOnAdCallBack.INTERSTIALAD);
        } else {
            TopOnAdApi.getYSDKAdCallBack().onAdShowCheckFail(TopOnAdCallBack.INTERSTIALAD);
            closeAd();
        }
    }

    public void closeAd() {
        this.interstitial = null;
        toponadInterstialnd_loadFlag = false;
        adView = null;
    }

    @Override // com.tkay.interstitial.api.TYInterstitialListener
    public void onInterstitialAdLoaded() {
        Logger.e("onInterstitialAdLoaded");
        TopOnAdApi.getYSDKAdCallBack().onAdReady(TopOnAdCallBack.INTERSTIALAD);
    }

    @Override // com.tkay.interstitial.api.TYInterstitialListener
    public void onInterstitialAdLoadFail(AdError adError) {
        Logger.e("onInterstitialAdLoadFail" + adError.getFullErrorInfo());
        TopOnAdApi.getYSDKAdCallBack().onNoAD(TopOnAdCallBack.INTERSTIALAD, adError.getCode() + "|" + adError.getFullErrorInfo());
        closeAd();
    }

    @Override // com.tkay.interstitial.api.TYInterstitialListener
    public void onInterstitialAdClicked(TYAdInfo tYAdInfo) {
        Logger.e("onInterstitialAdClicked");
        TopOnAdApi.getYSDKAdCallBack().onADClicked(TopOnAdCallBack.INTERSTIALAD);
    }

    @Override // com.tkay.interstitial.api.TYInterstitialListener
    public void onInterstitialAdShow(TYAdInfo tYAdInfo) {
        Logger.e("onInterstitialAdShow");
        TopOnAdApi.getYSDKAdCallBack().onADPresent(TopOnAdCallBack.INTERSTIALAD);
    }

    @Override // com.tkay.interstitial.api.TYInterstitialListener
    public void onInterstitialAdClose(TYAdInfo tYAdInfo) {
        Logger.e("onInterstitialAdClose");
        TopOnAdApi.getYSDKAdCallBack().onADDismissed(TopOnAdCallBack.INTERSTIALAD);
        TopOnAdApi.getYSDKAdCallBack().onRewardVerifyAd("INTERSTIALAD|" + tYAdInfo.toString());
        closeAd();
    }

    @Override // com.tkay.interstitial.api.TYInterstitialListener
    public void onInterstitialAdVideoStart(TYAdInfo tYAdInfo) {
        Logger.e("onInterstitialAdVideoStart");
    }

    @Override // com.tkay.interstitial.api.TYInterstitialListener
    public void onInterstitialAdVideoEnd(TYAdInfo tYAdInfo) {
        Logger.e("onInterstitialAdVideoEnd--->");
        TopOnAdApi.getYSDKAdCallBack().onADDismissed(TopOnAdCallBack.INTERSTIALAD);
        TopOnAdApi.getYSDKAdCallBack().onRewardVerifyAd("INTERSTIALAD|" + tYAdInfo.toString());
        closeAd();
    }

    @Override // com.tkay.interstitial.api.TYInterstitialListener
    public void onInterstitialAdVideoError(AdError adError) {
        Logger.e("onInterstitialAdVideoError");
    }
}

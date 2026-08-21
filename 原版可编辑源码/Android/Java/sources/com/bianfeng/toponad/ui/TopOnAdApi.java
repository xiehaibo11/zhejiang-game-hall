package com.bianfeng.toponad.ui;

import android.app.Activity;

public class TopOnAdApi {
    private static TopOnBannerView bannerView;
    private static TopOnAdInterstialnd interstialnd;
    private static TopOnNativeAdView nativeAdView;
    private static TopOnAdRewardVideoAdView rewardVideoAdView;
    private static TopOnAdCallBack topOnAdCallBack;

    public static void setYSDKAdCallBack(TopOnAdCallBack topOnAdCallBack2) {
        topOnAdCallBack = topOnAdCallBack2;
    }

    public static TopOnAdCallBack getYSDKAdCallBack() {
        return topOnAdCallBack;
    }

    public static void loadRewardVideoAd(Activity activity, String str) {
        rewardVideoAdView = TopOnAdRewardVideoAdView.getInstance(activity, str);
    }

    public static void showRewardVideoAd() {
        TopOnAdRewardVideoAdView topOnAdRewardVideoAdView = rewardVideoAdView;
        if (topOnAdRewardVideoAdView != null) {
            topOnAdRewardVideoAdView.showAd();
        }
    }

    public static void closeRewardVideoAd() {
        TopOnAdRewardVideoAdView topOnAdRewardVideoAdView = rewardVideoAdView;
        if (topOnAdRewardVideoAdView != null) {
            topOnAdRewardVideoAdView.closeAd();
            rewardVideoAdView = null;
        }
    }

    public static void loadInterstial(Activity activity, String str) {
        interstialnd = TopOnAdInterstialnd.getInstance(activity, str);
    }

    public static void showInterstial() {
        TopOnAdInterstialnd topOnAdInterstialnd = interstialnd;
        if (topOnAdInterstialnd != null) {
            topOnAdInterstialnd.showAd();
        }
    }

    public static void closeInterstial() {
        TopOnAdInterstialnd topOnAdInterstialnd = interstialnd;
        if (topOnAdInterstialnd != null) {
            topOnAdInterstialnd.closeAd();
            interstialnd = null;
        }
    }

    public static void loadBanner(Activity activity, String str, String str2, String str3, String str4, String str5, String str6) {
        bannerView = TopOnBannerView.getInstance(activity, str, str2, str3, str4, str5, str6);
    }

    public static void showBanner() {
        TopOnBannerView topOnBannerView = bannerView;
        if (topOnBannerView != null) {
            topOnBannerView.showAd();
        }
    }

    public static void closeBanner() {
        TopOnBannerView topOnBannerView = bannerView;
        if (topOnBannerView != null) {
            topOnBannerView.closeAd();
            bannerView = null;
        }
    }

    public static void loadNative(Activity activity, String str, String str2, String str3, String str4, String str5, String str6) {
        nativeAdView = TopOnNativeAdView.getInstance(activity, str, str2, str3, str4, str5, str6);
    }

    public static void showNative() {
        TopOnNativeAdView topOnNativeAdView = nativeAdView;
        if (topOnNativeAdView != null) {
            topOnNativeAdView.showAd();
        }
    }

    public static void closeNative() {
        TopOnNativeAdView topOnNativeAdView = nativeAdView;
        if (topOnNativeAdView != null) {
            topOnNativeAdView.closeAd();
            nativeAdView = null;
        }
    }
}

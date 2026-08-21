package com.kwad.sdk.api;

import android.app.Activity;
import com.kwad.sdk.api.KsLoadManager;

public final class b implements KsLoadManager {
    @Override
    public final String getBidRequestToken(KsScene ksScene) {
        return "";
    }

    @Override
    public final String getBidRequestTokenV2(KsScene ksScene) {
        return "";
    }

    @Override
    public final void loadConfigFeedAd(KsScene ksScene, KsLoadManager.FeedAdListener feedAdListener) {
        feedAdListener.onError(0, "SDK not init success");
    }

    @Override
    public final void loadDrawAd(KsScene ksScene, KsLoadManager.DrawAdListener drawAdListener) {
        drawAdListener.onError(0, "SDK not init success");
    }

    @Override
    public final void loadFeedAd(KsScene ksScene, KsLoadManager.FeedAdListener feedAdListener) {
        feedAdListener.onError(0, "SDK not init success");
    }

    @Override
    public final void loadFullScreenVideoAd(KsScene ksScene, KsLoadManager.FullScreenVideoAdListener fullScreenVideoAdListener) {
        fullScreenVideoAdListener.onError(0, "SDK not init success");
    }

    @Override
    public final void loadInterstitialAd(KsScene ksScene, KsLoadManager.InterstitialAdListener interstitialAdListener) {
        interstitialAdListener.onError(0, "SDK not init success");
    }

    @Override
    public final void loadNativeAd(KsScene ksScene, KsLoadManager.NativeAdListener nativeAdListener) {
        nativeAdListener.onError(0, "SDK not init success");
    }

    @Override
    public final void loadNativeAd(String str, KsLoadManager.NativeAdListener nativeAdListener) {
        nativeAdListener.onError(0, "SDK not init success");
    }

    @Override
    public final void loadRewardVideoAd(KsScene ksScene, KsLoadManager.RewardVideoAdListener rewardVideoAdListener) {
        rewardVideoAdListener.onError(0, "SDK not init success");
    }

    @Override
    public final void loadSplashScreenAd(KsScene ksScene, KsLoadManager.SplashScreenAdListener splashScreenAdListener) {
        splashScreenAdListener.onError(0, "SDK not init success");
    }

    @Override
    public final boolean showInstallDialog(Activity activity, KsExitInstallListener ksExitInstallListener) {
        return false;
    }
}

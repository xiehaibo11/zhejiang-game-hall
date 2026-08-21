package com.kwad.components.ad.interstitial;

import com.kwad.sdk.api.KsInterstitialAd;

public class c implements KsInterstitialAd.AdInteractionListener {
    private KsInterstitialAd.AdInteractionListener hu;

    public final void a(KsInterstitialAd.AdInteractionListener adInteractionListener) {
        this.hu = adInteractionListener;
    }

    @Override
    public void onAdClicked() {
        KsInterstitialAd.AdInteractionListener adInteractionListener = this.hu;
        if (adInteractionListener != null) {
            adInteractionListener.onAdClicked();
        }
    }

    @Override
    public void onAdClosed() {
        KsInterstitialAd.AdInteractionListener adInteractionListener = this.hu;
        if (adInteractionListener != null) {
            adInteractionListener.onAdClosed();
        }
    }

    @Override
    public void onAdShow() {
        KsInterstitialAd.AdInteractionListener adInteractionListener = this.hu;
        if (adInteractionListener != null) {
            adInteractionListener.onAdShow();
        }
    }

    @Override
    public void onPageDismiss() {
        KsInterstitialAd.AdInteractionListener adInteractionListener = this.hu;
        if (adInteractionListener != null) {
            adInteractionListener.onPageDismiss();
        }
    }

    @Override
    public void onSkippedAd() {
        KsInterstitialAd.AdInteractionListener adInteractionListener = this.hu;
        if (adInteractionListener != null) {
            adInteractionListener.onSkippedAd();
        }
    }

    @Override
    public void onVideoPlayEnd() {
        KsInterstitialAd.AdInteractionListener adInteractionListener = this.hu;
        if (adInteractionListener != null) {
            adInteractionListener.onVideoPlayEnd();
        }
    }

    @Override
    public void onVideoPlayError(int i, int i2) {
        KsInterstitialAd.AdInteractionListener adInteractionListener = this.hu;
        if (adInteractionListener != null) {
            adInteractionListener.onVideoPlayError(i, i2);
        }
    }

    @Override
    public void onVideoPlayStart() {
        KsInterstitialAd.AdInteractionListener adInteractionListener = this.hu;
        if (adInteractionListener != null) {
            adInteractionListener.onVideoPlayStart();
        }
    }
}

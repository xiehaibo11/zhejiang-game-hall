package com.kwad.components.ad.fullscreen;

import com.kwad.sdk.api.KsFullScreenVideoAd;

public class c implements KsFullScreenVideoAd.FullScreenVideoAdInteractionListener {
    private KsFullScreenVideoAd.FullScreenVideoAdInteractionListener fQ;

    public final void a(KsFullScreenVideoAd.FullScreenVideoAdInteractionListener fullScreenVideoAdInteractionListener) {
        this.fQ = fullScreenVideoAdInteractionListener;
    }

    @Override
    public void onAdClicked() {
        KsFullScreenVideoAd.FullScreenVideoAdInteractionListener fullScreenVideoAdInteractionListener = this.fQ;
        if (fullScreenVideoAdInteractionListener != null) {
            fullScreenVideoAdInteractionListener.onAdClicked();
        }
    }

    @Override
    public void onPageDismiss() {
        KsFullScreenVideoAd.FullScreenVideoAdInteractionListener fullScreenVideoAdInteractionListener = this.fQ;
        if (fullScreenVideoAdInteractionListener != null) {
            fullScreenVideoAdInteractionListener.onPageDismiss();
        }
    }

    @Override
    public void onSkippedVideo() {
        KsFullScreenVideoAd.FullScreenVideoAdInteractionListener fullScreenVideoAdInteractionListener = this.fQ;
        if (fullScreenVideoAdInteractionListener != null) {
            fullScreenVideoAdInteractionListener.onSkippedVideo();
        }
    }

    @Override
    public void onVideoPlayEnd() {
        KsFullScreenVideoAd.FullScreenVideoAdInteractionListener fullScreenVideoAdInteractionListener = this.fQ;
        if (fullScreenVideoAdInteractionListener != null) {
            fullScreenVideoAdInteractionListener.onVideoPlayEnd();
        }
    }

    @Override
    public void onVideoPlayError(int i, int i2) {
        KsFullScreenVideoAd.FullScreenVideoAdInteractionListener fullScreenVideoAdInteractionListener = this.fQ;
        if (fullScreenVideoAdInteractionListener != null) {
            fullScreenVideoAdInteractionListener.onVideoPlayError(i, i2);
        }
    }

    @Override
    public void onVideoPlayStart() {
        KsFullScreenVideoAd.FullScreenVideoAdInteractionListener fullScreenVideoAdInteractionListener = this.fQ;
        if (fullScreenVideoAdInteractionListener != null) {
            fullScreenVideoAdInteractionListener.onVideoPlayStart();
        }
    }
}

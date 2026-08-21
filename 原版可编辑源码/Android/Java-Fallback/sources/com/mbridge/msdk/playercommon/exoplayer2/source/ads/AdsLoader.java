package com.mbridge.msdk.playercommon.exoplayer2.source.ads;

public interface AdsLoader {

    public interface EventListener {
        void onAdClicked();

        void onAdLoadError(com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.AdLoadException r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r2);

        void onAdPlaybackState(com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r1);

        void onAdTapped();
    }

    void attachPlayer(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r1, com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsLoader.EventListener r2, android.view.ViewGroup r3);

    void detachPlayer();

    void handlePrepareError(int r1, int r2, java.io.IOException r3);

    void release();

    void setSupportedContentTypes(int... r1);
}

package com.kwad.components.ad.fullscreen;

public class c implements com.kwad.sdk.api.KsFullScreenVideoAd.FullScreenVideoAdInteractionListener {
    private com.kwad.sdk.api.KsFullScreenVideoAd.FullScreenVideoAdInteractionListener fQ;

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void a(com.kwad.sdk.api.KsFullScreenVideoAd.FullScreenVideoAdInteractionListener r1) {
            r0 = this;
            r0.fQ = r1
            return
    }

    @Override
    public void onAdClicked() {
            r1 = this;
            com.kwad.sdk.api.KsFullScreenVideoAd$FullScreenVideoAdInteractionListener r0 = r1.fQ
            if (r0 == 0) goto L7
            r0.onAdClicked()
        L7:
            return
    }

    @Override
    public void onPageDismiss() {
            r1 = this;
            com.kwad.sdk.api.KsFullScreenVideoAd$FullScreenVideoAdInteractionListener r0 = r1.fQ
            if (r0 == 0) goto L7
            r0.onPageDismiss()
        L7:
            return
    }

    @Override
    public void onSkippedVideo() {
            r1 = this;
            com.kwad.sdk.api.KsFullScreenVideoAd$FullScreenVideoAdInteractionListener r0 = r1.fQ
            if (r0 == 0) goto L7
            r0.onSkippedVideo()
        L7:
            return
    }

    @Override
    public void onVideoPlayEnd() {
            r1 = this;
            com.kwad.sdk.api.KsFullScreenVideoAd$FullScreenVideoAdInteractionListener r0 = r1.fQ
            if (r0 == 0) goto L7
            r0.onVideoPlayEnd()
        L7:
            return
    }

    @Override
    public void onVideoPlayError(int r2, int r3) {
            r1 = this;
            com.kwad.sdk.api.KsFullScreenVideoAd$FullScreenVideoAdInteractionListener r0 = r1.fQ
            if (r0 == 0) goto L7
            r0.onVideoPlayError(r2, r3)
        L7:
            return
    }

    @Override
    public void onVideoPlayStart() {
            r1 = this;
            com.kwad.sdk.api.KsFullScreenVideoAd$FullScreenVideoAdInteractionListener r0 = r1.fQ
            if (r0 == 0) goto L7
            r0.onVideoPlayStart()
        L7:
            return
    }
}

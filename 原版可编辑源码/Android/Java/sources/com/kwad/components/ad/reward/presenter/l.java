package com.kwad.components.ad.reward.presenter;

import com.kwad.sdk.core.response.model.AdInfo;

public final class l extends a {
    private long gz;
    private com.kwad.components.ad.reward.e.b mAdOpenInteractionListener;
    private com.kwad.components.core.video.l sr;
    private com.kwad.components.core.video.l ss = new com.kwad.components.core.video.l() {
        @Override
        public final void onMediaPlayCompleted() {
            super.onMediaPlayCompleted();
            if (l.this.qx.pj && l.this.qx.po) {
                l.this.mAdOpenInteractionListener.onVideoSkipToEnd(l.this.gz);
            } else {
                l.this.qx.pG = true;
                l.this.mAdOpenInteractionListener.onVideoPlayEnd();
            }
            AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(l.this.qx.mAdTemplate);
            if (com.kwad.sdk.core.response.b.a.aG(adInfoCg) && com.kwad.sdk.core.response.b.a.aF(adInfoCg) == 1) {
                return;
            }
            e.v(l.this.qx);
            if (l.this.qx.pG) {
                com.kwad.components.ad.reward.m.m(l.this.qx);
            }
        }

        @Override
        public final void onMediaPlayProgress(long j, long j2) {
            super.onMediaPlayProgress(j, j2);
            l.this.qx.pF = j2;
            if (l.this.qx.po) {
                return;
            }
            l.this.gz = j2;
        }

        @Override
        public final void onMediaPlayStart() {
            super.onMediaPlayStart();
            l.this.mAdOpenInteractionListener.onVideoPlayStart();
            l.this.qx.pG = false;
        }
    };
    private final com.kwad.components.core.video.l mVideoPlayStateListener = new com.kwad.components.core.video.l() {
        @Override
        public final void onMediaPlayCompleted() {
            if (l.this.qx.po) {
                l.this.mAdOpenInteractionListener.onVideoSkipToEnd(l.this.gz);
            } else {
                l.this.mAdOpenInteractionListener.onVideoPlayEnd();
            }
            AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(l.this.qx.mAdTemplate);
            if (com.kwad.sdk.core.response.b.a.aG(adInfoCg) && com.kwad.sdk.core.response.b.a.aF(adInfoCg) == 1) {
                return;
            }
            e.v(l.this.qx);
            if (l.this.qx.pG) {
                com.kwad.components.ad.reward.m.m(l.this.qx);
            }
        }

        @Override
        public final void onMediaPlayError(int i, int i2) {
            l.this.mAdOpenInteractionListener.onVideoPlayError(i, i2);
            l.this.hw();
        }

        @Override
        public final void onMediaPlayProgress(long j, long j2) {
            l.this.qx.pF = j2;
            l.this.qx.pG = j - j2 < 800;
            if (l.this.qx.po) {
                return;
            }
            l.this.gz = j2;
        }

        @Override
        public final void onMediaPlayStart() {
            l.this.mAdOpenInteractionListener.onVideoPlayStart();
        }
    };

    @Override
    public final void ah() {
        super.ah();
        this.qx.pF = 0L;
        this.qx.pG = false;
        this.mAdOpenInteractionListener = this.qx.mAdOpenInteractionListener;
        this.sr = this.qx.oV.jR() ? this.ss : this.mVideoPlayStateListener;
        this.qx.oV.a(this.sr);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        this.qx.oV.b(this.sr);
    }
}

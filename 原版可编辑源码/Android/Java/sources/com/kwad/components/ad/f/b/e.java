package com.kwad.components.ad.f.b;

import com.kwad.components.core.video.l;
import com.kwad.sdk.api.KsNativeAd;

public final class e extends com.kwad.components.ad.f.a.a {
    private boolean bH = false;
    private KsNativeAd.VideoPlayListener mz;

    @Override
    public final void ah() {
        super.ah();
        this.mz = this.mV.mz;
        this.mVideoPlayStateListener = new l() {
            @Override
            public final void onMediaPlayCompleted() {
                if (e.this.mz != null) {
                    e.this.mz.onVideoPlayComplete();
                }
            }

            @Override
            public final void onMediaPlayError(int i, int i2) {
                if (e.this.mz != null) {
                    e.this.mz.onVideoPlayError(i, i2);
                }
            }

            @Override
            public final void onMediaPlayPaused() {
                super.onMediaPlayPaused();
                if (e.this.mz != null) {
                    try {
                        e.this.mz.onVideoPlayPause();
                    } catch (Throwable th) {
                        com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                    }
                }
                e.this.bH = true;
            }

            @Override
            public final void onMediaPlayStart() {
                if (e.this.mz != null) {
                    e.this.mz.onVideoPlayStart();
                }
            }

            @Override
            public final void onMediaPlaying() {
                super.onMediaPlaying();
                if (e.this.bH) {
                    e.this.bH = false;
                    if (e.this.mz != null) {
                        try {
                            e.this.mz.onVideoPlayResume();
                        } catch (Throwable th) {
                            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                        }
                    }
                }
            }

            @Override
            public final void onMediaPrepared() {
                super.onMediaPrepared();
                if (e.this.mz != null) {
                    try {
                        e.this.mz.onVideoPlayReady();
                    } catch (Throwable th) {
                        com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                    }
                }
            }
        };
        this.mV.mW.b(this.mVideoPlayStateListener);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
    }
}

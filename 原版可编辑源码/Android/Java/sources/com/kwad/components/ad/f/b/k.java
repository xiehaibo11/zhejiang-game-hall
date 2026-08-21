package com.kwad.components.ad.f.b;

import android.widget.ProgressBar;
import com.kwad.components.core.video.l;
import com.kwad.sdk.R;

public final class k extends com.kwad.components.ad.f.a.a {
    private ProgressBar nu;

    private void G(int i) {
        this.nu.setProgress(i);
        if (this.nu.getVisibility() == 0) {
            return;
        }
        this.nu.setVisibility(0);
    }

    private void eT() {
        if (this.nu.getVisibility() != 0) {
            return;
        }
        this.nu.setVisibility(8);
    }

    @Override
    public final void ah() {
        super.ah();
        this.nu.setProgress(0);
        this.nu.setVisibility(8);
        this.mVideoPlayStateListener = new l() {
            @Override
            public final void onMediaPlayCompleted() {
                k.this.eT();
            }

            @Override
            public final void onMediaPlayError(int i, int i2) {
                k.this.eT();
            }

            @Override
            public final void onMediaPlayProgress(long j, long j2) {
                k.this.G(j != 0 ? (int) ((j2 * 100.0f) / j) : 0);
            }
        };
        this.mV.mW.b(this.mVideoPlayStateListener);
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.nu = (ProgressBar) findViewById(R.id.ksad_video_progress);
    }
}

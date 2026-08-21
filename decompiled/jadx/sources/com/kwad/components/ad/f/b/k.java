package com.kwad.components.ad.f.b;

import android.widget.ProgressBar;
import com.kwad.components.core.video.l;
import com.kwad.sdk.R;

/* JADX INFO: loaded from: classes2.dex */
public final class k extends com.kwad.components.ad.f.a.a {
    private ProgressBar nu;

    /* JADX INFO: Access modifiers changed from: private */
    public void G(int i) {
        this.nu.setProgress(i);
        if (this.nu.getVisibility() == 0) {
            return;
        }
        this.nu.setVisibility(0);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void eT() {
        if (this.nu.getVisibility() != 0) {
            return;
        }
        this.nu.setVisibility(8);
    }

    @Override // com.kwad.components.ad.f.a.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.nu.setProgress(0);
        this.nu.setVisibility(8);
        this.mVideoPlayStateListener = new l() { // from class: com.kwad.components.ad.f.b.k.1
            @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
            public final void onMediaPlayCompleted() {
                k.this.eT();
            }

            @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
            public final void onMediaPlayError(int i, int i2) {
                k.this.eT();
            }

            @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
            public final void onMediaPlayProgress(long j, long j2) {
                k.this.G(j != 0 ? (int) ((j2 * 100.0f) / j) : 0);
            }
        };
        this.mV.mW.b(this.mVideoPlayStateListener);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.nu = (ProgressBar) findViewById(R.id.ksad_video_progress);
    }
}

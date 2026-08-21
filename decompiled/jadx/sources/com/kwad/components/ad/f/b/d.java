package com.kwad.components.ad.f.b;

import android.view.View;
import com.kwad.components.core.video.l;
import com.kwad.sdk.R;
import com.kwad.sdk.utils.ag;

/* JADX INFO: loaded from: classes2.dex */
public final class d extends com.kwad.components.ad.f.a.a {
    private View nf;

    /* JADX INFO: Access modifiers changed from: private */
    public void eO() {
        if (this.nf.getVisibility() != 0) {
            return;
        }
        this.nf.setVisibility(8);
    }

    @Override // com.kwad.components.ad.f.a.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        if (ag.isNetworkConnected(this.nf.getContext())) {
            this.nf.setVisibility(8);
            return;
        }
        this.nf.setVisibility(0);
        this.mVideoPlayStateListener = new l() { // from class: com.kwad.components.ad.f.b.d.1
            @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
            public final void onMediaPlayStart() {
                super.onMediaPlayStart();
                d.this.eO();
            }

            @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
            public final void onMediaPlaying() {
                super.onMediaPlaying();
                d.this.eO();
            }
        };
        this.mV.mW.b(this.mVideoPlayStateListener);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.nf = findViewById(R.id.ksad_video_network_unavailable);
    }
}

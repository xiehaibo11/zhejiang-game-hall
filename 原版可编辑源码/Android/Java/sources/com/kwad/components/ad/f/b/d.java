package com.kwad.components.ad.f.b;

import android.view.View;
import com.kwad.components.core.video.l;
import com.kwad.sdk.R;
import com.kwad.sdk.utils.ag;

public final class d extends com.kwad.components.ad.f.a.a {
    private View nf;

    private void eO() {
        if (this.nf.getVisibility() != 0) {
            return;
        }
        this.nf.setVisibility(8);
    }

    @Override
    public final void ah() {
        super.ah();
        if (ag.isNetworkConnected(this.nf.getContext())) {
            this.nf.setVisibility(8);
            return;
        }
        this.nf.setVisibility(0);
        this.mVideoPlayStateListener = new l() {
            @Override
            public final void onMediaPlayStart() {
                super.onMediaPlayStart();
                d.this.eO();
            }

            @Override
            public final void onMediaPlaying() {
                super.onMediaPlaying();
                d.this.eO();
            }
        };
        this.mV.mW.b(this.mVideoPlayStateListener);
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.nf = findViewById(R.id.ksad_video_network_unavailable);
    }
}

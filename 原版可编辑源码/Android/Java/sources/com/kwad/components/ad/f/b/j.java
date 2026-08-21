package com.kwad.components.ad.f.b;

import android.view.View;
import com.kwad.components.core.video.l;
import com.kwad.sdk.R;

public final class j extends com.kwad.components.ad.f.a.a {
    private View ns;

    private void eS() {
        if (this.ns.getVisibility() == 0) {
            return;
        }
        this.ns.setVisibility(0);
    }

    @Override
    public final void ah() {
        super.ah();
        this.ns.setVisibility(8);
        this.mVideoPlayStateListener = new l() {
            @Override
            public final void onMediaPlayError(int i, int i2) {
                j.this.eS();
            }
        };
        this.mV.mW.b(this.mVideoPlayStateListener);
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.ns = findViewById(R.id.ksad_video_error_container);
    }
}

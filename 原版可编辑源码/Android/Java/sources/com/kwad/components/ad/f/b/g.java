package com.kwad.components.ad.f.b;

import android.widget.ImageView;
import com.kwad.components.core.video.l;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;

public final class g extends com.kwad.components.ad.f.a.a {
    private ImageView nm;

    private void eQ() {
        KSImageLoader.loadImage(this.nm, com.kwad.sdk.core.response.b.a.P(com.kwad.sdk.core.response.b.d.cg(this.mV.mAdTemplate)), this.mV.mAdTemplate);
        this.nm.setVisibility(0);
    }

    @Override
    public final void ah() {
        super.ah();
        this.mVideoPlayStateListener = new l() {
            @Override
            public final void onMediaPlayCompleted() {
                g.this.eQ();
            }
        };
        this.mV.mW.b(this.mVideoPlayStateListener);
        this.nm.setVisibility(8);
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.nm = (ImageView) findViewById(R.id.ksad_video_cover_image);
    }
}

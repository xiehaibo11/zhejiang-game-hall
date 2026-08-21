package com.kwad.components.ad.f.b;

import android.widget.ImageView;
import com.kwad.components.core.video.l;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;

/* JADX INFO: loaded from: classes2.dex */
public final class g extends com.kwad.components.ad.f.a.a {
    private ImageView nm;

    /* JADX INFO: Access modifiers changed from: private */
    public void eQ() {
        KSImageLoader.loadImage(this.nm, com.kwad.sdk.core.response.b.a.P(com.kwad.sdk.core.response.b.d.cg(this.mV.mAdTemplate)), this.mV.mAdTemplate);
        this.nm.setVisibility(0);
    }

    @Override // com.kwad.components.ad.f.a.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.mVideoPlayStateListener = new l() { // from class: com.kwad.components.ad.f.b.g.1
            @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
            public final void onMediaPlayCompleted() {
                g.this.eQ();
            }
        };
        this.mV.mW.b(this.mVideoPlayStateListener);
        this.nm.setVisibility(8);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.nm = (ImageView) findViewById(R.id.ksad_video_cover_image);
    }
}

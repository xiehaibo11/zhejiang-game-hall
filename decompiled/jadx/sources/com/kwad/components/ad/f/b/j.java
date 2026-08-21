package com.kwad.components.ad.f.b;

import android.view.View;
import com.kwad.components.core.video.l;
import com.kwad.sdk.R;

/* JADX INFO: loaded from: classes2.dex */
public final class j extends com.kwad.components.ad.f.a.a {
    private View ns;

    /* JADX INFO: Access modifiers changed from: private */
    public void eS() {
        if (this.ns.getVisibility() == 0) {
            return;
        }
        this.ns.setVisibility(0);
    }

    @Override // com.kwad.components.ad.f.a.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.ns.setVisibility(8);
        this.mVideoPlayStateListener = new l() { // from class: com.kwad.components.ad.f.b.j.1
            @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
            public final void onMediaPlayError(int i, int i2) {
                j.this.eS();
            }
        };
        this.mV.mW.b(this.mVideoPlayStateListener);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.ns = findViewById(R.id.ksad_video_error_container);
    }
}

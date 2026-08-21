package com.kwad.components.ad.f.a;

import com.kwad.components.core.video.k;
import com.kwad.sdk.mvp.Presenter;

public class a extends Presenter {
    public b mV;
    public k mVideoPlayStateListener;

    @Override
    public void ah() {
        super.ah();
        this.mV = (b) Gk();
    }

    @Override
    public void onUnbind() {
        super.onUnbind();
        this.mV.mW.a(this.mVideoPlayStateListener);
    }
}

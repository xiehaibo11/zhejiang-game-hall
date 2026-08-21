package com.kwad.components.ad.f.a;

import com.kwad.components.core.video.k;
import com.kwad.sdk.mvp.Presenter;

/* JADX INFO: loaded from: classes2.dex */
public class a extends Presenter {
    public b mV;
    public k mVideoPlayStateListener;

    @Override // com.kwad.sdk.mvp.Presenter
    public void ah() {
        super.ah();
        this.mV = (b) Gk();
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public void onUnbind() {
        super.onUnbind();
        this.mV.mW.a(this.mVideoPlayStateListener);
    }
}

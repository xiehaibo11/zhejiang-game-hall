package com.kwad.components.ad.f.b;

import android.view.View;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.video.DetailVideoView;
import com.kwad.components.core.video.l;
import com.kwad.sdk.R;

/* JADX INFO: loaded from: classes2.dex */
public final class i extends com.kwad.components.ad.f.a.a implements View.OnClickListener {
    private DetailVideoView mDetailVideoView;

    private void eR() {
        com.kwad.components.core.e.d.a.a(new a.C0150a(this.mDetailVideoView.getContext()).P(this.mV.mAdTemplate).b(this.mV.mApkDownloadHelper).a(new a.b() { // from class: com.kwad.components.ad.f.b.i.2
            @Override // com.kwad.components.core.e.d.a.b
            public final void onAdClicked() {
                com.kwad.sdk.core.report.a.a(i.this.mV.mAdTemplate, 2, i.this.mV.mQ.getTouchCoords());
            }
        }));
    }

    private void notifyAdClick() {
        this.mV.mE.l(this.mDetailVideoView);
    }

    @Override // com.kwad.components.ad.f.a.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.mVideoPlayStateListener = new l() { // from class: com.kwad.components.ad.f.b.i.1
            @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
            public final void onMediaPlayStart() {
                super.onMediaPlayStart();
                i.this.mDetailVideoView.setOnClickListener(i.this);
            }
        };
        this.mV.mW.b(this.mVideoPlayStateListener);
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        if (view == this.mDetailVideoView) {
            eR();
            notifyAdClick();
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.mDetailVideoView = (DetailVideoView) findViewById(R.id.ksad_video_player);
    }

    @Override // com.kwad.components.ad.f.a.a, com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.mDetailVideoView.setOnClickListener(null);
    }
}

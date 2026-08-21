package com.kwad.components.ad.reward.presenter.d.a;

import android.widget.FrameLayout;
import com.kwad.components.ad.k.a;
import com.kwad.components.ad.reward.e.f;
import com.kwad.components.ad.reward.presenter.e;
import com.kwad.components.core.video.l;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdTemplate;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends com.kwad.components.ad.reward.presenter.a implements a.b {
    private FrameLayout cQ;
    private l sr;
    private volatile long vy = 0;
    private volatile boolean vz = false;
    private l ss = new l() { // from class: com.kwad.components.ad.reward.presenter.d.a.a.1
        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.g
        public final void onLivePlayResume() {
            super.onLivePlayResume();
            a.this.vz = false;
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayCompleted() {
            super.onMediaPlayCompleted();
            a.this.vz = true;
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayProgress(long j, long j2) {
            super.onMediaPlayProgress(j, j2);
            a.this.vy = j2;
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayStart() {
            super.onMediaPlayStart();
            a.this.vz = false;
        }
    };
    private l mVideoPlayStateListener = new l() { // from class: com.kwad.components.ad.reward.presenter.d.a.a.2
        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayProgress(long j, long j2) {
            super.onMediaPlayProgress(j, j2);
            a.this.vy = j2;
            a.this.vz = j - j2 < 800;
        }
    };
    private f mPlayEndPageListener = new com.kwad.components.ad.reward.e.a() { // from class: com.kwad.components.ad.reward.presenter.d.a.a.4
        @Override // com.kwad.components.ad.reward.e.f
        public final void bD() {
            if (a.this.qx.pz || a.this.qx.pa == null) {
                return;
            }
            a.this.qx.pa.ap();
        }
    };
    private com.kwad.sdk.core.webview.d.a.a cH = new com.kwad.sdk.core.webview.d.a.a() { // from class: com.kwad.components.ad.reward.presenter.d.a.a.5
        @Override // com.kwad.sdk.core.webview.d.a.a
        public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
            a.this.qx.mAdOpenInteractionListener.bE();
        }
    };

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.vy = 0L;
        this.vz = false;
        AdTemplate adTemplate = this.qx.mAdTemplate;
        com.kwad.components.ad.k.a aVar = this.qx.pa;
        this.sr = this.qx.oV.jR() ? this.ss : this.mVideoPlayStateListener;
        if (aVar != null) {
            this.qx.pu = true;
            aVar.a(this);
            aVar.a(this.cH);
            aVar.a(this.cQ, this.qx.mRootContainer, adTemplate);
            aVar.a(new a.InterfaceC0114a() { // from class: com.kwad.components.ad.reward.presenter.d.a.a.3
                @Override // com.kwad.components.ad.k.a.InterfaceC0114a
                public final void T(boolean z) {
                    a.this.qx.pu = z;
                }
            });
            aVar.setActivity(this.qx.getActivity());
            aVar.aw();
            this.qx.b(this.mPlayEndPageListener);
            this.qx.oV.a(this.sr);
        }
    }

    @Override // com.kwad.components.ad.k.a.b
    public final void iA() {
        e.u(this.qx);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.cQ = (FrameLayout) findViewById(R.id.ksad_landing_page_container);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.qx.c(this.mPlayEndPageListener);
        this.qx.oV.b(this.sr);
    }
}

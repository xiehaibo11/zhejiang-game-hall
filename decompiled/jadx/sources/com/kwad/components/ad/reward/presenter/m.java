package com.kwad.components.ad.reward.presenter;

import com.kwad.sdk.utils.bj;

/* JADX INFO: loaded from: classes2.dex */
public final class m extends a {
    private com.kwad.components.core.video.l mVideoPlayStateListener = new com.kwad.components.core.video.l() { // from class: com.kwad.components.ad.reward.presenter.m.2
        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayCompleted() {
            super.onMediaPlayCompleted();
            m.this.hE();
        }
    };
    private final com.kwad.components.ad.reward.e.k gd = new com.kwad.components.ad.reward.e.k() { // from class: com.kwad.components.ad.reward.presenter.m.3
        @Override // com.kwad.components.ad.reward.e.k
        public final void a(com.kwad.components.core.webview.b.b.q qVar) {
            if (qVar == null || qVar.type != 1) {
                return;
            }
            m.this.qx.oV.release();
            m.this.qx.fR();
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void hE() {
        if (com.kwad.components.core.t.h.d(this.qx.mAdTemplate, this.qx.po)) {
            com.kwad.components.core.t.h.f(this.qx.mContext, this.qx.mAdTemplate);
        }
        if (h.A(this.qx) || com.kwad.components.core.t.h.d(this.qx.mAdTemplate, this.qx.po)) {
            bj.runOnUiThreadDelay(new Runnable() { // from class: com.kwad.components.ad.reward.presenter.m.1
                @Override // java.lang.Runnable
                public final void run() {
                    m.this.qx.fR();
                }
            }, 200L);
        } else {
            this.qx.fR();
        }
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.qx.oV.a(this.mVideoPlayStateListener);
        com.kwad.components.ad.reward.d.fw().a(this.gd);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.qx.oV.b(this.mVideoPlayStateListener);
        com.kwad.components.ad.reward.d.fw().b(this.gd);
    }
}

package com.kwad.components.ad.reward.presenter;

import com.kwad.sdk.utils.bj;

public final class m extends a {
    private com.kwad.components.core.video.l mVideoPlayStateListener = new com.kwad.components.core.video.l() {
        @Override
        public final void onMediaPlayCompleted() {
            super.onMediaPlayCompleted();
            m.this.hE();
        }
    };
    private final com.kwad.components.ad.reward.e.k gd = new com.kwad.components.ad.reward.e.k() {
        @Override
        public final void a(com.kwad.components.core.webview.b.b.q qVar) {
            if (qVar == null || qVar.type != 1) {
                return;
            }
            m.this.qx.oV.release();
            m.this.qx.fR();
        }
    };

    private void hE() {
        if (com.kwad.components.core.t.h.d(this.qx.mAdTemplate, this.qx.po)) {
            com.kwad.components.core.t.h.f(this.qx.mContext, this.qx.mAdTemplate);
        }
        if (h.A(this.qx) || com.kwad.components.core.t.h.d(this.qx.mAdTemplate, this.qx.po)) {
            bj.runOnUiThreadDelay(new Runnable() {
                @Override
                public final void run() {
                    m.this.qx.fR();
                }
            }, 200L);
        } else {
            this.qx.fR();
        }
    }

    @Override
    public final void ah() {
        super.ah();
        this.qx.oV.a(this.mVideoPlayStateListener);
        com.kwad.components.ad.reward.d.fw().a(this.gd);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        this.qx.oV.b(this.mVideoPlayStateListener);
        com.kwad.components.ad.reward.d.fw().b(this.gd);
    }
}

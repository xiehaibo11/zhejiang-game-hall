package com.kwad.components.ad.fullscreen.c;

import com.kwad.components.ad.reward.d;
import com.kwad.components.ad.reward.e.k;
import com.kwad.components.core.video.l;
import com.kwad.components.core.webview.b.b.q;

public final class a extends com.kwad.components.ad.reward.presenter.a {
    private l mVideoPlayStateListener = new l() {
        @Override
        public final void onMediaPlayCompleted() {
            super.onMediaPlayCompleted();
            a.this.qx.fR();
        }
    };
    private final k gd = new k() {
        @Override
        public final void a(q qVar) {
            if (qVar == null || qVar.type != 1) {
                return;
            }
            a.this.qx.oV.release();
            a.this.qx.fR();
        }
    };

    @Override
    public final void ah() {
        super.ah();
        this.qx.oV.a(this.mVideoPlayStateListener);
        d.fw().a(this.gd);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        this.qx.oV.b(this.mVideoPlayStateListener);
        d.fw().b(this.gd);
    }
}

package com.kwad.components.ad.fullscreen.c;

import com.kwad.components.ad.reward.d;
import com.kwad.components.ad.reward.e.k;
import com.kwad.components.core.video.l;
import com.kwad.components.core.webview.b.b.q;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends com.kwad.components.ad.reward.presenter.a {
    private l mVideoPlayStateListener = new l() { // from class: com.kwad.components.ad.fullscreen.c.a.1
        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayCompleted() {
            super.onMediaPlayCompleted();
            a.this.qx.fR();
        }
    };
    private final k gd = new k() { // from class: com.kwad.components.ad.fullscreen.c.a.2
        @Override // com.kwad.components.ad.reward.e.k
        public final void a(q qVar) {
            if (qVar == null || qVar.type != 1) {
                return;
            }
            a.this.qx.oV.release();
            a.this.qx.fR();
        }
    };

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.qx.oV.a(this.mVideoPlayStateListener);
        d.fw().a(this.gd);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.qx.oV.b(this.mVideoPlayStateListener);
        d.fw().b(this.gd);
    }
}

package com.kwad.components.ad.fullscreen.c;

import android.view.View;
import com.kwad.components.ad.reward.e.f;
import com.kwad.components.ad.reward.e.h;
import com.kwad.components.ad.reward.e.l;
import com.kwad.components.core.playable.PlayableSource;
import com.kwad.components.core.webview.b.e.e;
import com.kwad.components.core.webview.b.j;
import com.kwad.sdk.R;

/* JADX INFO: loaded from: classes2.dex */
public final class c extends com.kwad.components.ad.reward.presenter.a implements h {
    private View gr;
    private View gs;
    private e gt = new e() { // from class: com.kwad.components.ad.fullscreen.c.c.1
        @Override // com.kwad.components.core.webview.b.e.b
        public final void q(String str) {
            if (j.b("ksad-video-top-bar", c.this.qx.mAdTemplate).equals(str) || j.b("ksad-fullscreen-video-card", c.this.qx.mAdTemplate).equals(str)) {
                c.this.bQ();
            }
        }
    };
    private f mPlayEndPageListener = new com.kwad.components.ad.reward.e.a() { // from class: com.kwad.components.ad.fullscreen.c.c.2
        @Override // com.kwad.components.ad.reward.e.f
        public final void bD() {
            c.this.i(false);
        }
    };

    public c() {
        a(new com.kwad.components.ad.fullscreen.c.a.e());
        a(new com.kwad.components.ad.fullscreen.c.b.a());
        a(new com.kwad.components.ad.fullscreen.c.c.a());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void bQ() {
        this.gr.setVisibility(0);
        this.gs.setVisibility(8);
    }

    private void bR() {
        if (this.qx.pl || this.qx.pk) {
            return;
        }
        this.gr.setVisibility(0);
        this.gs.setVisibility(8);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void i(boolean z) {
        if ((this.qx.pl || this.qx.pk) && !z) {
            this.gr.setVisibility(8);
            this.gs.setVisibility(8);
        } else {
            this.gr.setVisibility(8);
            this.gs.setVisibility(0);
        }
    }

    @Override // com.kwad.components.ad.reward.e.h
    public final void a(PlayableSource playableSource, l lVar) {
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        int i;
        View view;
        super.ah();
        this.qx.b(this.mPlayEndPageListener);
        com.kwad.components.ad.reward.b.fp().a(this);
        if (com.kwad.components.ad.reward.j.c(this.qx) || com.kwad.components.ad.reward.j.a(this.qx)) {
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
            i = 8;
            this.gr.setVisibility(8);
            view = this.gs;
        } else {
            view = this.gr;
            i = 0;
        }
        view.setVisibility(i);
    }

    @Override // com.kwad.components.ad.reward.e.h
    public final void bS() {
        bR();
        if (this.qx.pk && this.gs.getVisibility() == 0) {
            this.gs.setVisibility(8);
        }
    }

    @Override // com.kwad.components.ad.reward.e.h
    public final void bT() {
        i(true);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.gr = findViewById(R.id.ksad_play_detail_top_toolbar);
        this.gs = findViewById(R.id.ksad_play_end_top_toolbar);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
        this.qx.c(this.mPlayEndPageListener);
        com.kwad.components.ad.reward.b.fp().b(this);
    }
}

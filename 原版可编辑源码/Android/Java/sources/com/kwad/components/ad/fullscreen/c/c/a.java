package com.kwad.components.ad.fullscreen.c.c;

import android.widget.FrameLayout;
import com.kwad.components.ad.reward.e.f;
import com.kwad.components.ad.reward.e.h;
import com.kwad.components.ad.reward.e.l;
import com.kwad.components.ad.reward.j;
import com.kwad.components.ad.reward.presenter.f.d;
import com.kwad.components.core.playable.PlayableSource;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;

public final class a extends d implements h {
    private FrameLayout hi;
    private final f mPlayEndPageListener = new com.kwad.components.ad.reward.e.a() {
        @Override
        public final void bD() {
            if (com.kwad.sdk.core.response.b.a.am(com.kwad.sdk.core.response.b.d.cg(a.this.qx.mAdTemplate))) {
                a.this.hi.setVisibility(8);
            }
        }
    };

    @Override
    public final void a(PlayableSource playableSource, l lVar) {
    }

    @Override
    public final void ah() {
        super.ah();
        if (cd()) {
            this.hi.setVisibility(0);
            this.qx.b(this.mPlayEndPageListener);
            com.kwad.components.ad.reward.b.fp().a(this);
        }
    }

    @Override
    public final void b(t.a aVar) {
        aVar.width = (int) ((com.kwad.sdk.d.a.a.getScreenWidth(getContext()) / com.kwad.sdk.d.a.a.aH(getContext())) + 0.5f);
        aVar.height = 44;
    }

    @Override
    public final void bS() {
        if (this.qx.pl) {
            this.hi.setVisibility(8);
        }
    }

    @Override
    public final void bT() {
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.qx.mAdTemplate);
        if (!this.qx.pl || com.kwad.sdk.core.response.b.a.am(adInfoCg)) {
            return;
        }
        this.hi.setVisibility(0);
    }

    @Override
    public final void cc() {
        super.cc();
        this.qx.pl = false;
        this.hi.setVisibility(8);
    }

    @Override
    public final boolean cd() {
        return j.c(this.qx) && !this.qx.oV.jR();
    }

    @Override
    public final FrameLayout getTKContainer() {
        return this.hi;
    }

    @Override
    public final String getTkTemplateId() {
        return com.kwad.components.core.webview.b.j.b("ksad-video-top-bar", this.qx.mAdTemplate);
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.hi = (FrameLayout) findViewById(R.id.ksad_js_top);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        if (cd()) {
            this.qx.c(this.mPlayEndPageListener);
            com.kwad.components.ad.reward.b.fp().b(this);
        }
    }
}

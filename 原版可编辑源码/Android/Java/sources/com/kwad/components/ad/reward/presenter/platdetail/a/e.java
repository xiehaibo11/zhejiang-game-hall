package com.kwad.components.ad.reward.presenter.platdetail.a;

import android.view.View;
import android.widget.ImageView;
import com.kwad.components.ad.reward.e.f;
import com.kwad.components.ad.reward.e.h;
import com.kwad.components.ad.reward.e.l;
import com.kwad.components.ad.reward.presenter.f.i;
import com.kwad.components.core.playable.PlayableSource;
import com.kwad.components.core.webview.b.j;
import com.kwad.sdk.R;
import com.kwad.sdk.utils.ai;

public final class e extends com.kwad.components.ad.reward.presenter.a implements h {
    private com.kwad.components.core.webview.b.e.e gt = new com.kwad.components.core.webview.b.e.e() {
        @Override
        public final void q(String str) {
            if (j.b("ksad-video-top-bar", e.this.qx.mAdTemplate).equals(str)) {
                e.this.qx.pK = true;
                e.this.bQ();
            }
        }
    };
    private f mPlayEndPageListener = new com.kwad.components.ad.reward.e.a() {
        @Override
        public final void bD() {
            e.this.ix();
        }
    };
    private View vt;
    private View vu;
    private ImageView vv;

    public e() {
        a(new com.kwad.components.ad.reward.presenter.platdetail.a());
        a(new com.kwad.components.ad.reward.presenter.d.a());
        a(new i());
    }

    private void bQ() {
        this.vt.setVisibility(0);
        this.vu.setVisibility(8);
    }

    private void iw() {
        if (!this.qx.pl) {
            this.vu.setVisibility(8);
        }
        this.vt.setVisibility(0);
        getContext();
        if (com.kwad.components.ad.reward.j.s(this.qx.mAdTemplate) && ai.IN()) {
            this.vv.setVisibility(8);
        }
    }

    @Override
    public final void a(PlayableSource playableSource, l lVar) {
    }

    @Override
    public final void ah() {
        View view;
        int i;
        super.ah();
        if (com.kwad.components.ad.reward.j.b(this.qx)) {
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
            i = 8;
            this.vt.setVisibility(8);
            view = this.vu;
        } else {
            view = this.vt;
            i = 0;
        }
        view.setVisibility(i);
        this.qx.b(this.mPlayEndPageListener);
        com.kwad.components.ad.reward.b.fp().a(this);
    }

    @Override
    public final void bS() {
        iw();
    }

    @Override
    public final void bT() {
        ix();
    }

    public final void ix() {
        if (this.qx.pl) {
            this.vt.setVisibility(8);
        } else {
            this.vt.setVisibility(8);
            this.vu.setVisibility(0);
        }
        getContext();
        if (com.kwad.components.ad.reward.j.s(this.qx.mAdTemplate) && ai.IN()) {
            this.vv.setVisibility(0);
        }
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.vt = findViewById(R.id.ksad_play_detail_top_toolbar);
        this.vu = findViewById(R.id.ksad_play_end_top_toolbar);
        this.vv = (ImageView) findViewById(R.id.ksad_blur_end_cover);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
        iw();
        this.qx.c(this.mPlayEndPageListener);
        com.kwad.components.ad.reward.b.fp().b(this);
        this.vu.setVisibility(8);
    }
}

package com.kwad.components.ad.reward.presenter.f;

import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.kwad.components.ad.reward.e.l;
import com.kwad.components.ad.reward.j;
import com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl;
import com.kwad.components.core.playable.PlayableSource;
import com.kwad.components.core.webview.b.a.e;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.sdk.R;

public final class j extends d implements com.kwad.components.ad.reward.e.h, com.kwad.components.ad.reward.presenter.platdetail.actionbar.a {
    private am wH;
    private boolean wI;
    private boolean wJ;
    private FrameLayout wT;
    private View wU;
    private boolean wV = false;
    private com.kwad.components.ad.reward.e.f mPlayEndPageListener = new com.kwad.components.ad.reward.e.a() {
        @Override
        public final void bD() {
            j.this.wT.setVisibility(8);
        }
    };
    private j.a wW = new j.a() {
        @Override
        public final void gj() {
            j.this.wJ = true;
        }

        @Override
        public final void gk() {
            j.this.wJ = true;
            j.this.jg();
        }

        @Override
        public final void gl() {
            j.this.wJ = false;
            if (j.this.wH != null) {
                j.this.wH.rE();
            }
        }

        @Override
        public final void gm() {
            j.this.wJ = false;
        }
    };

    private void jg() {
        am amVar = this.wH;
        if (amVar == null || !this.wJ) {
            return;
        }
        if (this.wI) {
            amVar.rD();
            return;
        }
        amVar.rz();
        this.wH.rA();
        this.wI = true;
    }

    private e.b ji() {
        return new e.b() {
            @Override
            public final int jj() {
                if (j.this.qx.py != null) {
                    return com.kwad.sdk.d.a.a.b(j.this.getContext(), r0.bZ());
                }
                if (j.this.wU == null) {
                    return 0;
                }
                return j.this.wU.getLayoutParams() instanceof ViewGroup.MarginLayoutParams ? com.kwad.sdk.d.a.a.b(j.this.getContext(), j.this.wU.getHeight() + ((ViewGroup.MarginLayoutParams) r0).bottomMargin) : com.kwad.sdk.d.a.a.b(j.this.getContext(), j.this.wU.getHeight());
            }
        };
    }

    @Override
    public final void a(RewardActionBarControl.ShowActionBarResult showActionBarResult, View view) {
        this.wU = view;
    }

    @Override
    public final void a(PlayableSource playableSource, l lVar) {
    }

    @Override
    public final void a(am amVar) {
        super.a(amVar);
        this.wH = amVar;
    }

    @Override
    public final void a(com.kwad.sdk.components.l lVar, com.kwad.sdk.core.webview.b bVar) {
        super.a(lVar, bVar);
        lVar.c(new com.kwad.components.core.webview.b.a.e(ji()));
    }

    @Override
    public final void ah() {
        super.ah();
        this.qx.a(this.wW);
        this.qx.oY.a(this);
        this.qx.b(this.mPlayEndPageListener);
        com.kwad.components.ad.reward.b.fp().a(this);
    }

    @Override
    public final void b(t.a aVar) {
        float fAH = com.kwad.sdk.d.a.a.aH(getContext());
        float screenHeight = com.kwad.sdk.d.a.a.getScreenHeight(getContext());
        aVar.width = (int) ((com.kwad.sdk.d.a.a.getScreenWidth(getContext()) / fAH) + 0.5f);
        aVar.height = (int) ((screenHeight / fAH) + 0.5f);
    }

    @Override
    public final void bS() {
        if (this.wV) {
            this.wT.setVisibility(0);
        }
    }

    @Override
    public final void bT() {
        if (this.wV) {
            this.wT.setVisibility(8);
        }
    }

    @Override
    public final void cc() {
        am amVar = this.wH;
        if (amVar != null) {
            amVar.rB();
            this.wH.rC();
        }
        this.wV = false;
        this.wT.setVisibility(8);
    }

    @Override
    protected final boolean cd() {
        return true;
    }

    @Override
    public final void eh() {
        super.eh();
        jg();
        this.wV = true;
        this.wT.setVisibility(0);
    }

    @Override
    public final FrameLayout getTKContainer() {
        return this.wT;
    }

    @Override
    public final String getTkTemplateId() {
        return com.kwad.components.core.webview.b.j.b("ksad-video-topfloor", this.qx.mAdTemplate);
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.wT = (FrameLayout) findViewById(R.id.ksad_js_topfloor);
    }

    @Override
    public final void onUnbind() {
        am amVar = this.wH;
        if (amVar != null) {
            amVar.rB();
            this.wH.rC();
        }
        super.onUnbind();
        this.qx.b(this.wW);
        this.qx.oY.b(this);
        this.qx.c(this.mPlayEndPageListener);
        com.kwad.components.ad.reward.b.fp().b(this);
        this.qx.a((com.kwad.components.core.webview.b.e.a) null);
    }
}

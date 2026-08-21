package com.kwad.components.ad.reward.presenter.a;

import android.widget.FrameLayout;
import com.kwad.components.ad.reward.j;
import com.kwad.components.ad.reward.j.q;
import com.kwad.components.core.video.l;
import com.kwad.components.core.webview.b.a.o;
import com.kwad.components.core.webview.b.a.p;
import com.kwad.components.core.webview.b.b.m;
import com.kwad.components.core.webview.b.b.t;
import com.kwad.components.core.webview.b.h;
import com.kwad.components.core.webview.b.i;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.sdk.R;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.webview.b;
import com.kwad.sdk.utils.ai;
import com.kwad.sdk.utils.be;
import com.kwad.sdk.utils.bm;
import com.kwad.sdk.widget.e;

public final class a extends com.kwad.components.ad.reward.presenter.a implements i {
    private h lp;
    private FrameLayout lr;
    private AdInfo mAdInfo;
    private long tE;
    private long tF;
    private boolean tG;
    private boolean tH;
    private j.b tI = new j.b() {
        @Override
        public final boolean interceptPlayCardResume() {
            return a.this.lr != null && a.this.lr.getVisibility() == 0;
        }
    };
    private final l mVideoPlayStateListener = new l() {
        @Override
        public final void onMediaPlayProgress(long j, long j2) {
            super.onMediaPlayProgress(j, j2);
            long jA = j.a(j, a.this.mAdInfo);
            if (j2 <= a.this.tE || jA - j2 <= a.this.tF || a.this.tG) {
                return;
            }
            a.a(a.this, true);
            a.this.lp.a(a.this.qx.getActivity(), a.this.qx.mAdTemplate, a.this);
        }
    };

    static boolean a(a aVar, boolean z) {
        aVar.tG = true;
        return true;
    }

    private h hU() {
        return new h(-1L, getContext());
    }

    @Override
    public final void a(o oVar) {
    }

    @Override
    public final void a(p pVar) {
    }

    @Override
    public final void a(t tVar) {
    }

    @Override
    public final void a(am amVar) {
    }

    @Override
    public final void a(com.kwad.sdk.components.l lVar, b bVar) {
        lVar.c(new q(bVar, this.qx.mApkDownloadHelper, this.qx, -1L, new com.kwad.sdk.core.webview.d.a.a() {
            @Override
            public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
                if (a.this.qx.mAdOpenInteractionListener != null) {
                    a.this.qx.mAdOpenInteractionListener.bE();
                }
            }
        }, null));
    }

    @Override
    public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
    }

    @Override
    public final void ah() {
        super.ah();
        if (this.lp == null) {
            this.lp = hU();
        }
        AdInfo adInfoCg = d.cg(this.qx.mAdTemplate);
        this.mAdInfo = adInfoCg;
        this.tE = ((long) com.kwad.sdk.core.response.b.a.aB(adInfoCg)) * 1000;
        this.tF = ((long) com.kwad.sdk.core.response.b.a.aC(this.mAdInfo)) * 1000;
        this.qx.oV.a(this.mVideoPlayStateListener);
        this.qx.a(this.tI);
    }

    @Override
    public final void b(m mVar) {
    }

    @Override
    public final void b(t.a aVar) {
        float fAH = com.kwad.sdk.d.a.a.aH(getContext());
        aVar.width = (int) ((be.getScreenWidth(getContext()) / fAH) + 0.5f);
        aVar.height = (int) ((be.getScreenHeight(getContext()) / fAH) + 0.5f);
    }

    @Override
    public final void b(WebCloseStatus webCloseStatus) {
        this.qx.pm = webCloseStatus != null && webCloseStatus.interactSuccess;
        if (this.qx.pm) {
            this.qx.oV.jO();
        }
        if (this.tH && bm.o(this.lr, 30)) {
            this.qx.oV.resume();
        }
        this.lr.setVisibility(8);
    }

    @Override
    public final void cc() {
        c.d("TkRewardInteractPresenter", "onTkLoadFailed: ");
        this.lr.setVisibility(8);
    }

    @Override
    public final void eh() {
        c.d("TkRewardInteractPresenter", "onTkLoadSuccess: ");
        getContext();
        if (ai.IN()) {
            this.lr.setVisibility(0);
            com.kwad.components.ad.reward.d.a.P(this.qx.mContext);
            this.qx.oV.pause();
            this.tH = true;
        }
    }

    @Override
    public final void em() {
    }

    @Override
    public final FrameLayout getTKContainer() {
        return this.lr;
    }

    @Override
    public final String getTkTemplateId() {
        c.d("TkRewardInteractPresenter", "getTkTemplateId: ");
        return com.kwad.components.core.webview.b.j.b("ksad-video-interact-card", this.qx.mAdTemplate);
    }

    @Override
    public final e getTouchCoordsView() {
        return this.qx.mRootContainer;
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.lr = (FrameLayout) findViewById(R.id.ksad_js_interact);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        this.qx.oV.b(this.mVideoPlayStateListener);
        this.qx.b(this.tI);
        this.lp.jv();
        this.lp = null;
        this.lr.setVisibility(8);
        this.tG = false;
        this.tH = false;
    }
}

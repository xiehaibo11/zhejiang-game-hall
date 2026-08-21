package com.kwad.components.ad.reward.presenter.f;

import android.widget.FrameLayout;
import com.kwad.components.ad.reward.page.BackPressHandleResult;
import com.kwad.components.core.webview.b.b;
import com.kwad.components.core.webview.b.b.t;
import com.kwad.components.core.webview.b.b.x;
import com.kwad.components.core.webview.jshandler.m;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.sdk.R;
import com.kwad.sdk.components.l;
import com.kwad.sdk.utils.bj;

public final class b extends d {
    private FrameLayout wg;
    private boolean wh = false;

    private void V(boolean z) {
        this.wg.setVisibility(z ? 0 : 8);
    }

    private com.kwad.components.core.webview.b.c ei() {
        return new com.kwad.components.core.webview.b.c() {
            @Override
            public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
                super.a(str, cVar);
                com.kwad.components.core.webview.b.b.c cVar2 = new com.kwad.components.core.webview.b.b.c();
                cVar2.WS = com.kwad.components.ad.reward.model.b.cK();
                cVar.a(cVar2);
            }
        };
    }

    @Override
    public final void a(final t tVar) {
        com.kwad.sdk.core.e.c.d("TKLivePresenter", "onSkipClick: " + tVar.Xf);
        bj.postOnUiThread(new Runnable() {
            @Override
            public final void run() {
                if (b.this.qx != null && b.this.qx.mAdOpenInteractionListener != null) {
                    b.this.qx.mAdOpenInteractionListener.onVideoSkipToEnd(tVar.Xf * 1000);
                }
                com.kwad.components.ad.reward.presenter.e.v(b.this.qx);
            }
        });
    }

    @Override
    public final void a(l lVar, com.kwad.sdk.core.webview.b bVar) {
        super.a(lVar, bVar);
        lVar.c(ei());
        lVar.c(new com.kwad.components.core.webview.b.b(new b.a() {
            @Override
            public final void eo() {
                com.kwad.components.ad.reward.model.b.L(b.this.qx.mContext);
            }
        }));
        lVar.c(new m() {
            @Override
            public final void a(x xVar) {
                super.a(xVar);
                b.this.qx.mAdOpenInteractionListener.onVideoPlayStart();
                com.kwad.components.ad.reward.monitor.a.b(b.this.qx.pj, b.this.qx.mAdTemplate, b.this.qx.mPageEnterTime);
            }

            @Override
            public final void b(x xVar) {
                super.b(xVar);
                b.this.qx.mAdTemplate.setmCurPlayTime(xVar.nM);
            }

            @Override
            public final void c(x xVar) {
                super.c(xVar);
                b.this.qx.mAdOpenInteractionListener.onVideoPlayEnd();
                b.this.qx.mAdTemplate.setmCurPlayTime(-1L);
                com.kwad.components.ad.reward.presenter.e.v(b.this.qx);
            }

            @Override
            public final void d(x xVar) {
                super.d(xVar);
                long jRX = xVar.rX();
                b.this.qx.mAdOpenInteractionListener.onVideoPlayError(xVar.errorCode, (int) jRX);
                com.kwad.components.ad.reward.monitor.a.a(b.this.qx.pj, b.this.qx.mAdTemplate, b.this.qx.pF, xVar.errorCode, jRX);
            }
        });
    }

    @Override
    public final void ah() {
        super.ah();
        if (this.wh) {
            return;
        }
        V(true);
    }

    @Override
    public final void b(t.a aVar) {
        float fAH = com.kwad.sdk.d.a.a.aH(getContext());
        float screenHeight = com.kwad.sdk.d.a.a.getScreenHeight(getContext());
        aVar.width = (int) ((com.kwad.sdk.d.a.a.getScreenWidth(getContext()) / fAH) + 0.5f);
        aVar.height = (int) ((screenHeight / fAH) + 0.5f);
    }

    @Override
    public final void cc() {
        super.cc();
        this.wh = true;
        V(false);
    }

    @Override
    protected final boolean cd() {
        return true;
    }

    public final BackPressHandleResult gA() {
        return this.wk == null ? BackPressHandleResult.NOT_HANDLED : this.wk.gA();
    }

    @Override
    public final FrameLayout getTKContainer() {
        return this.wg;
    }

    @Override
    public final String getTkTemplateId() {
        return com.kwad.components.core.webview.b.j.b("ksad-live-video-card", this.qx.mAdTemplate);
    }

    @Override
    protected final boolean iR() {
        return true;
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.wg = (FrameLayout) findViewById(R.id.ksad_js_live_card);
    }
}

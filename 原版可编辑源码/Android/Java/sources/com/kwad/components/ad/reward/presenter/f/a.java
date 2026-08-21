package com.kwad.components.ad.reward.presenter.f;

import com.kwad.components.core.webview.b.a.o;
import com.kwad.components.core.webview.b.b.x;
import com.kwad.components.core.webview.jshandler.m;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.sdk.components.l;

public abstract class a extends d {
    private o wd;

    @Override
    public final void a(o oVar) {
        this.wd = oVar;
        oVar.a(new o.a() {
            @Override
            public final boolean isMuted() {
                return !a.this.qx.mVideoPlayConfig.isVideoSoundEnable() || com.kwad.components.core.t.a.al(a.this.getContext()).qh();
            }
        });
    }

    @Override
    public void a(l lVar, com.kwad.sdk.core.webview.b bVar) {
        super.a(lVar, bVar);
        lVar.c(new m() {
            @Override
            public final void a(x xVar) {
                super.a(xVar);
                a.this.qx.mAdOpenInteractionListener.onVideoPlayStart();
                com.kwad.components.ad.reward.monitor.a.b(a.this.qx.pj, a.this.qx.mAdTemplate, a.this.qx.mPageEnterTime);
            }

            @Override
            public final void b(x xVar) {
                super.b(xVar);
                a.this.qx.mAdTemplate.setmCurPlayTime(xVar.nM);
            }

            @Override
            public final void c(x xVar) {
                super.c(xVar);
                a.this.qx.mAdOpenInteractionListener.onVideoPlayEnd();
                a.this.qx.mAdTemplate.setmCurPlayTime(-1L);
                com.kwad.components.ad.reward.presenter.e.v(a.this.qx);
                com.kwad.components.ad.reward.j unused = a.this.qx;
                com.kwad.components.ad.reward.j.a(a.this.qx.pd, new com.kwad.sdk.g.a<com.kwad.components.ad.reward.j.a>() {
                    @Override
                    private void accept(com.kwad.components.ad.reward.j.a aVar) {
                        com.kwad.components.ad.reward.j unused2 = a.this.qx;
                        aVar.iP();
                    }
                });
            }

            @Override
            public final void d(x xVar) {
                super.d(xVar);
                long jRX = xVar.rX();
                a.this.qx.mAdOpenInteractionListener.onVideoPlayError(xVar.errorCode, (int) jRX);
                com.kwad.components.ad.reward.monitor.a.a(a.this.qx.pj, a.this.qx.mAdTemplate, a.this.qx.pF, xVar.errorCode, jRX);
            }
        });
    }

    @Override
    public final void b(t.a aVar) {
        float fAH = com.kwad.sdk.d.a.a.aH(getContext());
        float screenHeight = com.kwad.sdk.d.a.a.getScreenHeight(getContext());
        aVar.width = (int) ((com.kwad.sdk.d.a.a.getScreenWidth(getContext()) / fAH) + 0.5f);
        aVar.height = (int) ((screenHeight / fAH) + 0.5f);
    }

    @Override
    protected final boolean cd() {
        return true;
    }

    @Override
    protected final boolean iR() {
        return true;
    }

    public final boolean iS() {
        if (this.ws != null) {
            return this.ws.iS();
        }
        return false;
    }
}

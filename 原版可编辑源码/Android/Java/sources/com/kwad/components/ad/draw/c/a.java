package com.kwad.components.ad.draw.c;

import android.content.Context;
import com.kwad.components.ad.j.b;
import com.kwad.components.core.video.DetailVideoView;
import com.kwad.sdk.contentalliance.a.a.b;
import com.kwad.sdk.core.h.c;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.b.f;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.video.a.c;
import com.kwad.sdk.utils.l;

public final class a extends b {
    private com.kwad.components.core.widget.a.b bG;
    private long cS;
    private com.kwad.sdk.contentalliance.a.a.a cT;
    private boolean cU;
    private final c cV;
    private Context mContext;

    public a(AdTemplate adTemplate, com.kwad.components.core.widget.a.b bVar, DetailVideoView detailVideoView) {
        super(adTemplate, detailVideoView);
        this.cV = new c() {
            @Override
            public final void aK() {
                if (a.this.cT == null) {
                    a aVar = a.this;
                    aVar.cT = com.kwad.sdk.contentalliance.a.a.a.ap(aVar.mAdTemplate);
                    a.this.GL.a(a.this.cT);
                }
                if (a.this.cU) {
                    return;
                }
                a.this.resume();
            }

            @Override
            public final void aL() {
                a.this.pause();
            }
        };
        this.cS = com.kwad.sdk.core.response.b.a.T(d.cg(this.mAdTemplate));
        this.bG = bVar;
        this.mContext = detailVideoView.getContext();
        aJ();
        this.GL.a(new c.e() {
            @Override
            public final void a(com.kwad.sdk.core.video.a.c cVar) {
                a.this.start(l.cC(a.this.mAdTemplate));
            }
        });
    }

    private void aJ() {
        this.GL.a(new b.a(this.mAdTemplate).cn(d.ci(this.mAdTemplate)).co(f.b(d.ch(this.mAdTemplate))).a(this.mAdTemplate.mVideoPlayerStatus).b(new com.kwad.sdk.contentalliance.a.a.a(this.mAdTemplate, System.currentTimeMillis())).yS(), this.mDetailVideoView);
        this.GL.prepareAsync();
    }

    private void start(long j) {
        if (this.bG.ep()) {
            this.GL.a(new com.kwad.sdk.contentalliance.a.a.a(this.mAdTemplate, j));
            this.GL.start();
        }
    }

    public final void aH() {
        long jCC = l.cC(this.mAdTemplate);
        if (this.GL.qD() == null) {
            aJ();
        }
        start(jCC);
        this.bG.a(this.cV);
    }

    public final void aI() {
        this.cT = null;
        this.bG.b(this.cV);
        this.GL.release();
    }

    public final void f(boolean z) {
        this.cU = z;
    }

    @Override
    public final void resume() {
        super.resume();
        com.kwad.components.core.t.a.al(this.mContext).aJ(false);
    }
}

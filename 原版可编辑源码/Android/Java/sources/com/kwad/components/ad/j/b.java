package com.kwad.components.ad.j;

import com.kwad.components.core.video.DetailVideoView;
import com.kwad.components.core.video.k;
import com.kwad.components.core.video.l;
import com.kwad.sdk.core.config.d;
import com.kwad.sdk.core.response.model.AdTemplate;

public class b extends a<k> {
    public com.kwad.components.core.video.b GL;
    private boolean GM;
    private k GN;
    protected DetailVideoView mDetailVideoView;

    public b(AdTemplate adTemplate, DetailVideoView detailVideoView) {
        super(adTemplate);
        this.GM = false;
        this.GN = new l() {
            @Override
            public final void onMediaPlayCompleted() {
                b.this.mAdTemplate.setmCurPlayTime(-1L);
            }

            @Override
            public final void onMediaPlayError(int i, int i2) {
                super.onMediaPlayError(i, i2);
                if (!b.this.GM) {
                    b.this.lS();
                } else if (d.zS()) {
                    b.this.lS();
                }
            }

            @Override
            public final void onMediaPlayProgress(long j, long j2) {
                b.this.mAdTemplate.setmCurPlayTime(j2);
            }
        };
        this.mDetailVideoView = detailVideoView;
        this.GL = new com.kwad.components.core.video.b(this.mDetailVideoView);
        lQ();
    }

    private void lQ() {
        this.GL.c(this.GN);
    }

    private void lR() {
        k kVar;
        com.kwad.components.core.video.b bVar = this.GL;
        if (bVar == null || (kVar = this.GN) == null) {
            return;
        }
        bVar.d(kVar);
        this.GN = null;
    }

    private void lS() {
        com.kwad.components.core.o.a.pA().g(this.mAdTemplate, 21008);
        this.GM = true;
    }

    @Override
    public final void b(k kVar) {
        com.kwad.components.core.video.b bVar;
        if (kVar == null || (bVar = this.GL) == null) {
            return;
        }
        bVar.c(kVar);
    }

    @Override
    public final void a(k kVar) {
        if (kVar == null) {
            return;
        }
        this.GL.d(kVar);
    }

    @Override
    public long getPlayDuration() {
        com.kwad.components.core.video.b bVar = this.GL;
        if (bVar != null) {
            return bVar.getPlayDuration();
        }
        return 0L;
    }

    @Override
    public void pause() {
        this.GL.pause();
    }

    @Override
    public void release() {
        super.release();
        this.GM = false;
        lR();
        com.kwad.components.core.video.b bVar = this.GL;
        if (bVar != null) {
            bVar.clear();
            this.GL.release();
        }
    }

    @Override
    public void resume() {
        this.GL.resume();
    }
}

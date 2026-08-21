package com.kwad.components.ad.j;

import com.kwad.components.core.video.DetailVideoView;
import com.kwad.components.core.video.k;
import com.kwad.components.core.video.l;
import com.kwad.sdk.core.config.d;
import com.kwad.sdk.core.response.model.AdTemplate;

/* JADX INFO: loaded from: classes2.dex */
public class b extends a<k> {
    public com.kwad.components.core.video.b GL;
    private boolean GM;
    private k GN;
    protected DetailVideoView mDetailVideoView;

    public b(AdTemplate adTemplate, DetailVideoView detailVideoView) {
        super(adTemplate);
        this.GM = false;
        this.GN = new l() { // from class: com.kwad.components.ad.j.b.1
            @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
            public final void onMediaPlayCompleted() {
                b.this.mAdTemplate.setmCurPlayTime(-1L);
            }

            @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
            public final void onMediaPlayError(int i, int i2) {
                super.onMediaPlayError(i, i2);
                if (!b.this.GM) {
                    b.this.lS();
                } else if (d.zS()) {
                    b.this.lS();
                }
            }

            @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
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

    /* JADX INFO: Access modifiers changed from: private */
    public void lS() {
        com.kwad.components.core.o.a.pA().g(this.mAdTemplate, 21008);
        this.GM = true;
    }

    @Override // com.kwad.components.ad.j.a
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final void b(k kVar) {
        com.kwad.components.core.video.b bVar;
        if (kVar == null || (bVar = this.GL) == null) {
            return;
        }
        bVar.c(kVar);
    }

    @Override // com.kwad.components.ad.j.a
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public final void a(k kVar) {
        if (kVar == null) {
            return;
        }
        this.GL.d(kVar);
    }

    @Override // com.kwad.components.ad.j.a
    public long getPlayDuration() {
        com.kwad.components.core.video.b bVar = this.GL;
        if (bVar != null) {
            return bVar.getPlayDuration();
        }
        return 0L;
    }

    @Override // com.kwad.components.ad.j.a
    public void pause() {
        this.GL.pause();
    }

    @Override // com.kwad.components.ad.j.a
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

    @Override // com.kwad.components.ad.j.a
    public void resume() {
        this.GL.resume();
    }
}

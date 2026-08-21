package com.kwad.components.ad.reward.l;

import com.kwad.components.core.video.l;
import com.kwad.components.offline.api.core.adlive.IAdLivePlayModule;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.h;

/* JADX INFO: loaded from: classes2.dex */
public final class d {
    private int yi;
    private com.kwad.components.ad.reward.f.a yj;
    private c yk;
    private a yl;
    private com.kwad.components.ad.j.a ym;
    private int yn = 0;

    public d(int i, com.kwad.components.ad.j.a aVar) {
        this.yi = i;
        if (i == 1) {
            this.yk = (c) aVar;
        } else if (i == 2) {
            this.yj = (com.kwad.components.ad.reward.f.a) aVar;
        } else if (i == 3) {
            this.yl = (a) aVar;
        }
        this.ym = aVar;
    }

    private com.kwad.components.ad.j.a jQ() {
        return this.ym;
    }

    public final void a(b bVar) {
        c cVar = this.yk;
        if (cVar != null) {
            cVar.a(bVar);
        }
    }

    public final void a(l lVar) {
        jQ().b(lVar);
    }

    public final void a(AdTemplate adTemplate, IAdLivePlayModule iAdLivePlayModule) {
        this.yi = 2;
        com.kwad.components.ad.reward.f.a aVar = new com.kwad.components.ad.reward.f.a(adTemplate, iAdLivePlayModule);
        this.yj = aVar;
        this.ym = aVar;
    }

    public final void a(h.a aVar) {
        c cVar = this.yk;
        if (cVar != null) {
            cVar.a(aVar);
        }
    }

    public final void b(b bVar) {
        c cVar = this.yk;
        if (cVar != null) {
            cVar.b(bVar);
        }
    }

    public final void b(l lVar) {
        jQ().a(lVar);
    }

    public final void b(h.a aVar) {
        c cVar = this.yk;
        if (cVar != null) {
            cVar.b(aVar);
        }
    }

    public final long getPlayDuration() {
        return jQ().getPlayDuration();
    }

    public final void jN() {
        c cVar = this.yk;
        if (cVar != null) {
            cVar.jN();
            return;
        }
        a aVar = this.yl;
        if (aVar != null) {
            aVar.jN();
        }
    }

    public final void jO() {
        c cVar = this.yk;
        if (cVar != null) {
            cVar.jO();
        }
    }

    public final boolean jR() {
        return this.yj != null;
    }

    public final com.kwad.components.ad.reward.f.a jS() {
        return this.yj;
    }

    public final a jT() {
        return this.yl;
    }

    public final void pause() {
        jQ().pause();
    }

    public final void release() {
        jQ().release();
    }

    public final void resume() {
        int i;
        jQ().resume();
        com.kwad.components.ad.reward.f.a aVar = this.yj;
        if (aVar == null || (i = this.yn) <= 0) {
            return;
        }
        aVar.setAudioEnabled(i == 2, false);
    }

    public final void setAudioEnabled(boolean z, boolean z2) {
        this.yn = z ? 2 : 1;
        jQ().setAudioEnabled(z, z2);
    }

    public final void skipToEnd() {
        jQ().skipToEnd();
    }
}

package com.kwad.components.ad.reward.j.a;

import com.kwad.components.ad.reward.j;

public final class a extends com.kwad.components.core.webview.b.c.b {
    private j xG;

    public a(j jVar) {
        this.xG = jVar;
    }

    public final void b(com.kwad.components.ad.reward.c.b bVar) {
        com.kwad.components.ad.reward.c.a.gW().a(this.mAdTemplate, bVar);
    }

    public final j jo() {
        return this.xG;
    }

    @Override
    public final void release() {
        super.release();
        this.xG = null;
    }
}

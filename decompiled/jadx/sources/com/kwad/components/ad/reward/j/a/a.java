package com.kwad.components.ad.reward.j.a;

import com.kwad.components.ad.reward.j;

/* JADX INFO: loaded from: classes2.dex */
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

    @Override // com.kwad.components.core.webview.b.c.b, com.kwad.sdk.mvp.a
    public final void release() {
        super.release();
        this.xG = null;
    }
}

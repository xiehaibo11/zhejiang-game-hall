package com.kwad.components.ad.a;

import com.kwad.sdk.h;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends com.kwad.components.core.p.a {
    public a(com.kwad.components.core.p.a.a aVar) {
        super(aVar);
        putBody("requestTime", System.currentTimeMillis());
    }

    @Override // com.kwad.components.core.p.a, com.kwad.sdk.core.network.b, com.kwad.sdk.core.network.g
    public final String getUrl() {
        return h.xc();
    }
}

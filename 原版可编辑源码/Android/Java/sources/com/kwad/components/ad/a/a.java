package com.kwad.components.ad.a;

import com.kwad.sdk.h;

public final class a extends com.kwad.components.core.p.a {
    public a(com.kwad.components.core.p.a.a aVar) {
        super(aVar);
        putBody("requestTime", System.currentTimeMillis());
    }

    @Override
    public final String getUrl() {
        return h.xc();
    }
}

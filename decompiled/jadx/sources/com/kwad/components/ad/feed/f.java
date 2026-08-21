package com.kwad.components.ad.feed;

import com.kwad.sdk.core.response.model.AdTemplate;

/* JADX INFO: loaded from: classes2.dex */
public final class f {
    public static String c(AdTemplate adTemplate) {
        String strAn = com.kwad.sdk.core.response.b.a.an(com.kwad.sdk.core.response.b.d.cg(adTemplate));
        if (!com.kwad.components.core.c.b.mi()) {
            return strAn;
        }
        return (adTemplate.fromCache ? "【cache】" : "") + strAn;
    }
}

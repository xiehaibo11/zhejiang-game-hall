package com.kwad.components.core.offline.init.a;

public final class j implements com.kwad.components.offline.api.core.network.IIdc {
    public j() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final java.lang.String hostForAPI(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "api"
            boolean r0 = r4.equals(r0)
            if (r0 == 0) goto Ld
            java.lang.String r4 = com.kwad.sdk.h.wZ()
            return r4
        Ld:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "https://"
            r0.<init>(r1)
            com.kwad.sdk.core.network.idc.a r1 = com.kwad.sdk.core.network.idc.a.Bo()
            r2 = 0
            java.lang.String r4 = r1.P(r4, r2)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            return r4
    }
}

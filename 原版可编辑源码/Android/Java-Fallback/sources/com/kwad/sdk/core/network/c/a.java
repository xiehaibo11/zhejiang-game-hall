package com.kwad.sdk.core.network.c;

public final class a implements com.kwad.sdk.export.proxy.AdHttpProxy {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final com.kwad.sdk.core.network.c doGet(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2) {
            r0 = this;
            com.kwad.sdk.core.network.c r1 = com.kwad.sdk.core.network.a.b.doGet(r1, r2)
            return r1
    }

    @Override
    public final com.kwad.sdk.core.network.c doGetWithoutResponse(java.lang.String r2, java.util.Map<java.lang.String, java.lang.String> r3) {
            r1 = this;
            r0 = 0
            com.kwad.sdk.core.network.c r2 = com.kwad.sdk.core.network.a.b.a(r2, r3, r0)
            return r2
    }

    @Override
    public final com.kwad.sdk.core.network.c doPost(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2, com.kwad.sdk.export.proxy.AdHttpBodyBuilder r3) {
            r0 = this;
            com.kwad.sdk.core.network.c r1 = new com.kwad.sdk.core.network.c
            r1.<init>()
            return r1
    }

    @Override
    public final com.kwad.sdk.core.network.c doPost(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2, java.util.Map<java.lang.String, java.lang.String> r3) {
            r0 = this;
            com.kwad.sdk.core.network.c r1 = com.kwad.sdk.core.network.a.b.doPost(r1, r2, r3)
            return r1
    }

    @Override
    public final com.kwad.sdk.core.network.c doPost(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2, org.json.JSONObject r3) {
            r0 = this;
            com.kwad.sdk.core.network.c r1 = com.kwad.sdk.core.network.a.b.doPost(r1, r2, r3)
            return r1
    }

    @Override
    public final boolean downloadUrlToStream(java.lang.String r1, java.io.OutputStream r2, int r3) {
            r0 = this;
            boolean r1 = com.kwad.sdk.core.network.a.b.downloadUrlToStream(r1, r2, r3)
            return r1
    }
}

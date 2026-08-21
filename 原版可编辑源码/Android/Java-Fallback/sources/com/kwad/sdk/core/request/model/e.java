package com.kwad.sdk.core.request.model;

public final class e implements com.kwad.sdk.core.b {
    private com.kwad.sdk.core.b auq;

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.sdk.core.request.model.e Cx() {
            com.kwad.sdk.core.request.model.e r0 = new com.kwad.sdk.core.request.model.e
            r0.<init>()
            java.lang.Class<com.kwad.sdk.core.network.l> r1 = com.kwad.sdk.core.network.l.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.core.network.l r1 = (com.kwad.sdk.core.network.l) r1
            if (r1 == 0) goto L15
            com.kwad.sdk.core.b r1 = r1.xp()
            r0.auq = r1
        L15:
            return r0
    }

    @Override
    public final void parseJson(org.json.JSONObject r1) {
            r0 = this;
            return
    }

    @Override
    public final org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.kwad.sdk.core.b r1 = r3.auq
            java.lang.String r2 = "modeInfo"
            com.kwad.sdk.utils.t.a(r0, r2, r1)
            return r0
    }
}

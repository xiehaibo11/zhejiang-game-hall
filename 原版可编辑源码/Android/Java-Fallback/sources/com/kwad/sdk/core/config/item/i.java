package com.kwad.sdk.core.config.item;

public final class i extends com.kwad.sdk.core.config.item.b<com.kwad.sdk.core.network.idc.a.a> {
    public i() {
            r2 = this;
            com.kwad.sdk.core.network.idc.a.a r0 = new com.kwad.sdk.core.network.idc.a.a
            r0.<init>()
            java.lang.String r1 = "idc"
            r2.<init>(r1, r0)
            return
    }

    @Override
    public final void a(android.content.SharedPreferences r1) {
            r0 = this;
            return
    }

    @Override
    public final void b(android.content.SharedPreferences.Editor r1) {
            r0 = this;
            return
    }

    @Override
    public final void g(org.json.JSONObject r2) {
            r1 = this;
            if (r2 == 0) goto L18
            java.lang.String r0 = r1.getKey()
            org.json.JSONObject r2 = r2.optJSONObject(r0)
            if (r2 == 0) goto L18
            com.kwad.sdk.core.network.idc.a.a r0 = new com.kwad.sdk.core.network.idc.a.a
            r0.<init>()
            r0.parseJson(r2)
            r1.setValue(r0)
            return
        L18:
            java.lang.Object r2 = r1.zZ()
            r1.setValue(r2)
            return
    }
}

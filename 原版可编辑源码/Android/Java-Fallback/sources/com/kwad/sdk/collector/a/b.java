package com.kwad.sdk.collector.a;

public final class b extends com.kwad.sdk.core.network.d {
    public b(java.util.Collection<com.kwad.sdk.collector.model.e> r2) {
            r1 = this;
            r1.<init>()
            org.json.JSONArray r2 = a(r2)
            java.lang.String r0 = "collectData"
            r1.putBody(r0, r2)
            java.lang.String r2 = "collectType"
            r0 = 1
            r1.putBody(r2, r0)
            java.lang.String r2 = "sdkVersion"
            java.lang.String r0 = "3.3.42"
            r1.putBody(r2, r0)
            java.lang.String r2 = "sdkVersionCode"
            r0 = 3034200(0x2e4c58, float:4.25182E-39)
            r1.putBody(r2, r0)
            return
    }

    private static org.json.JSONArray a(java.util.Collection<com.kwad.sdk.collector.model.e> r2) {
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            java.util.Iterator r2 = r2.iterator()
        L9:
            boolean r1 = r2.hasNext()
            if (r1 == 0) goto L1f
            java.lang.Object r1 = r2.next()
            com.kwad.sdk.collector.model.e r1 = (com.kwad.sdk.collector.model.e) r1
            org.json.JSONObject r1 = r1.yL()
            if (r1 == 0) goto L9
            r0.put(r1)
            goto L9
        L1f:
            return r0
    }

    @Override
    public final java.lang.String getUrl() {
            r1 = this;
            java.lang.String r0 = com.kwad.sdk.h.xj()
            return r0
    }
}

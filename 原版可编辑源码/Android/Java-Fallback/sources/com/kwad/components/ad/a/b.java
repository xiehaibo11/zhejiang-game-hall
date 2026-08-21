package com.kwad.components.ad.a;

public final class b extends com.kwad.sdk.core.network.b {
    public b(java.lang.String r2, java.util.List<java.lang.String> r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "adxId"
            r1.putBody(r0, r2)
            org.json.JSONArray r2 = new org.json.JSONArray
            r2.<init>(r3)
            java.lang.String r3 = "materialIds"
            r1.putBody(r3, r2)
            return
    }

    @Override
    public final void buildBaseBody() {
            r2 = this;
            java.lang.String r0 = "protocolVersion"
            java.lang.String r1 = "2.0"
            r2.putBody(r0, r1)
            java.lang.String r0 = "SDKVersion"
            java.lang.String r1 = "3.3.42"
            r2.putBody(r0, r1)
            java.lang.String r0 = "SDKVersionCode"
            r1 = 3034200(0x2e4c58, float:4.25182E-39)
            r2.putBody(r0, r1)
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            java.lang.String r0 = r0.getApiVersion()
            java.lang.String r1 = "sdkApiVersion"
            r2.putBody(r1, r0)
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            int r0 = r0.getApiVersionCode()
            java.lang.String r1 = "sdkApiVersionCode"
            r2.putBody(r1, r0)
            java.lang.String r0 = "sdkType"
            r1 = 1
            r2.putBody(r0, r1)
            return
    }

    @Override
    public final void buildBaseHeader() {
            r0 = this;
            return
    }

    @Override
    public final java.lang.String getUrl() {
            r1 = this;
            java.lang.String r0 = com.kwad.sdk.h.xd()
            return r0
    }
}

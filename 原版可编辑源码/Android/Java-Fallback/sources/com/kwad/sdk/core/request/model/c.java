package com.kwad.sdk.core.request.model;

public final class c implements com.kwad.sdk.core.b {
    private static com.kwad.sdk.core.request.model.c auk;
    private double aul;
    private double aum;

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.sdk.core.request.model.c Cu() {
            com.kwad.sdk.core.request.model.c r0 = com.kwad.sdk.core.request.model.c.auk
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            android.location.Location r0 = com.kwad.sdk.utils.au.bU(r0)
            if (r0 == 0) goto L2c
            com.kwad.sdk.core.request.model.c r1 = new com.kwad.sdk.core.request.model.c
            r1.<init>()
            com.kwad.sdk.core.request.model.c.auk = r1
            double r2 = r0.getLatitude()
            r1.aul = r2
            com.kwad.sdk.core.request.model.c r1 = com.kwad.sdk.core.request.model.c.auk
            double r2 = r0.getLongitude()
            r1.aum = r2
        L2c:
            com.kwad.sdk.core.request.model.c r0 = com.kwad.sdk.core.request.model.c.auk
            return r0
    }

    @Override
    public final void parseJson(org.json.JSONObject r1) {
            r0 = this;
            return
    }

    @Override
    public final org.json.JSONObject toJson() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            double r1 = r4.aul
            java.lang.String r3 = "latitude"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            double r1 = r4.aum
            java.lang.String r3 = "longitude"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            return r0
    }
}

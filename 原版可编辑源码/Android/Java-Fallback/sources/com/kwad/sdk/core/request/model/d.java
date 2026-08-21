package com.kwad.sdk.core.request.model;

public final class d implements com.kwad.sdk.core.b {
    private java.lang.String aun;
    private int auo;
    private int aup;

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.sdk.core.request.model.d Cv() {
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            com.kwad.sdk.core.request.model.d r1 = new com.kwad.sdk.core.request.model.d
            r1.<init>()
            java.lang.String r2 = com.kwad.sdk.utils.au.cw(r0)
            r1.aun = r2
            int r2 = com.kwad.sdk.utils.ag.cj(r0)
            r1.auo = r2
            java.lang.String r2 = com.kwad.sdk.utils.au.cz(r0)
            boolean r3 = com.kwad.sdk.utils.at.Jg()
            int r0 = com.kwad.sdk.utils.ag.d(r0, r2, r3)
            r1.aup = r0
            return r1
    }

    public static com.kwad.sdk.core.request.model.d Cw() {
            com.kwad.sdk.core.request.model.d r0 = new com.kwad.sdk.core.request.model.d
            r0.<init>()
            java.lang.Class<com.kwad.sdk.service.a.e> r1 = com.kwad.sdk.service.a.e.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.service.a.e r1 = (com.kwad.sdk.service.a.e) r1
            android.content.Context r1 = r1.getContext()
            int r1 = com.kwad.sdk.utils.ag.cj(r1)
            r0.auo = r1
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
            java.lang.String r1 = r3.aun
            java.lang.String r2 = "mac"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            int r1 = r3.auo
            java.lang.String r2 = "connectionType"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            int r1 = r3.aup
            java.lang.String r2 = "operatorType"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            return r0
    }
}

package com.kwad.sdk.core.network;

public abstract class d extends com.kwad.sdk.core.network.b {
    public static final java.lang.String TRACK_ID_KEY = "kuaishou-tracing-token";
    private static int sLiveSupportMode;

    static {
            return
    }

    public d() {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r0, r1)
            return
    }

    public d(int r2, com.kwad.sdk.internal.api.SceneImpl r3) {
            r1 = this;
            r1.<init>()
            boolean r0 = r1.needAppList()
            com.kwad.sdk.core.request.model.b r2 = com.kwad.sdk.core.request.model.b.g(r0, r2)
            java.lang.String r0 = "deviceInfo"
            r1.putBody(r0, r2)
            com.kwad.sdk.core.request.model.StatusInfo r2 = com.kwad.sdk.core.request.model.StatusInfo.b(r3)
            java.lang.String r3 = "statusInfo"
            r1.putBody(r3, r2)
            return
    }

    @Override
    protected void buildBaseBody() {
            r3 = this;
            java.lang.String r0 = "protocolVersion"
            java.lang.String r1 = "2.0"
            r3.putBody(r0, r1)
            java.lang.String r0 = "SDKVersion"
            java.lang.String r1 = "3.3.42"
            r3.putBody(r0, r1)
            java.lang.String r0 = "SDKVersionCode"
            r1 = 3034200(0x2e4c58, float:4.25182E-39)
            r3.putBody(r0, r1)
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            java.lang.String r0 = r0.getApiVersion()
            java.lang.String r1 = "sdkApiVersion"
            r3.putBody(r1, r0)
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            int r0 = r0.getApiVersionCode()
            java.lang.String r1 = "sdkApiVersionCode"
            r3.putBody(r1, r0)
            r0 = 1
            java.lang.String r1 = "sdkType"
            r3.putBody(r1, r0)
            org.json.JSONObject r1 = com.kwad.sdk.core.request.model.a.Cr()
            java.lang.String r2 = "appInfo"
            r3.putBody(r2, r1)
            java.lang.String r1 = "tkVersion"
            java.lang.String r2 = "5.0.3"
            r3.putBody(r1, r2)
            com.kwad.sdk.core.request.model.d r1 = com.kwad.sdk.core.request.model.d.Cv()
            java.lang.String r2 = "networkInfo"
            r3.putBody(r2, r1)
            int r1 = com.kwad.sdk.core.network.d.sLiveSupportMode
            if (r1 != 0) goto L6b
            java.lang.Class<com.kwad.sdk.service.a.e> r1 = com.kwad.sdk.service.a.e.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.service.a.e r1 = (com.kwad.sdk.service.a.e) r1
            boolean r1 = r1.hasLiveCompoReady()
            if (r1 == 0) goto L6b
            com.kwad.sdk.core.network.d.sLiveSupportMode = r0
        L6b:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "sLiveSupportMode :"
            r0.<init>(r1)
            int r1 = com.kwad.sdk.core.network.d.sLiveSupportMode
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "CommonBaseRequest"
            android.util.Log.d(r1, r0)
            int r0 = com.kwad.sdk.core.network.d.sLiveSupportMode
            java.lang.String r1 = "liveSupportMode"
            r3.putBody(r1, r0)
            com.kwad.sdk.core.request.model.c r0 = com.kwad.sdk.core.request.model.c.Cu()
            java.lang.String r1 = "geoInfo"
            r3.putBody(r1, r0)
            com.kwad.sdk.core.request.model.e r0 = com.kwad.sdk.core.request.model.e.Cx()
            java.lang.String r1 = "ext"
            r3.putBody(r1, r0)
            com.kwad.sdk.core.request.model.g r0 = com.kwad.sdk.core.request.model.g.Cy()
            java.lang.String r1 = "userInfo"
            r3.putBody(r1, r0)
            com.kwad.sdk.core.network.r r0 = com.kwad.sdk.core.network.r.Bk()
            java.lang.String r1 = r3.getUrl()
            java.lang.String r0 = r0.cZ(r1)
            java.lang.String r1 = "requestSessionData"
            r3.putBody(r1, r0)
            return
    }

    @Override
    protected void buildBaseHeader() {
            r2 = this;
            java.lang.String r0 = r2.getUrl()
            java.lang.Boolean r1 = com.kwad.framework.a.a.ml
            boolean r1 = r1.booleanValue()
            if (r1 == 0) goto L29
            if (r0 == 0) goto L29
            java.lang.String r1 = com.kwad.sdk.h.xe()
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto L29
            java.lang.Class<com.kwad.sdk.components.DevelopMangerComponents> r0 = com.kwad.sdk.components.DevelopMangerComponents.class
            com.kwad.sdk.components.c.f(r0)
            java.lang.String r0 = "trace-context"
            java.lang.String r1 = "{\"laneId\":\"STAGING.online.u\"}"
            r2.addHeader(r0, r1)
            java.lang.Class<com.kwad.sdk.components.DevelopMangerComponents> r0 = com.kwad.sdk.components.DevelopMangerComponents.class
            com.kwad.sdk.components.c.f(r0)
        L29:
            return
    }

    protected boolean needAppList() {
            r1 = this;
            r0 = 0
            return r0
    }
}

package com.kwad.sdk.core.network;

public abstract class b implements com.kwad.sdk.core.network.g {
    public final org.json.JSONObject mBodyParams;
    private final java.util.Map<java.lang.String, java.lang.String> mHeader;

    protected b() {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.mHeader = r0
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r2.mBodyParams = r0
            r2.onCreate()
            r2.buildBaseHeader()
            r2.buildBaseBody()
            boolean r0 = r2.encryptDisable()
            if (r0 == 0) goto L27
            java.lang.String r0 = "x-ksad-ignore-decrypt"
            java.lang.String r1 = "true"
            r2.addHeader(r0, r1)
        L27:
            com.kwad.sdk.core.network.e r0 = com.kwad.sdk.core.network.e.Be()
            java.lang.String r0 = r0.Bf()
            java.lang.String r1 = "cookie"
            r2.addHeader(r1, r0)
            java.util.Map r0 = r2.getHeader()
            com.kwad.sdk.core.a.d.e(r0)
            java.lang.String r0 = com.kwad.sdk.core.network.q.getUserAgent()
            java.lang.String r1 = "User-Agent"
            r2.addHeader(r1, r0)
            java.lang.String r0 = com.kwad.sdk.core.network.q.Bj()
            java.lang.String r1 = "BrowserUa"
            r2.addHeader(r1, r0)
            java.lang.String r0 = com.kwad.sdk.core.network.q.Bi()
            java.lang.String r1 = "SystemUa"
            r2.addHeader(r1, r0)
            return
    }

    public void addHeader(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L12
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Ld
            goto L12
        Ld:
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.mHeader
            r0.put(r2, r3)
        L12:
            return
    }

    protected abstract void buildBaseBody();

    protected abstract void buildBaseHeader();

    public boolean encryptDisable() {
            r1 = this;
            java.lang.Class<com.kwad.sdk.components.DevelopMangerComponents> r0 = com.kwad.sdk.components.DevelopMangerComponents.class
            com.kwad.sdk.components.c.f(r0)
            r0 = 0
            return r0
    }

    @Override
    public org.json.JSONObject getBody() {
            r4 = this;
            boolean r0 = r4.encryptDisable()
            if (r0 == 0) goto L9
            org.json.JSONObject r0 = r4.mBodyParams
            return r0
        L9:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.Class<com.kwad.sdk.service.a.e> r1 = com.kwad.sdk.service.a.e.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.service.a.e r1 = (com.kwad.sdk.service.a.e) r1
            java.lang.String r2 = r1.getSDKVersion()
            java.lang.String r3 = "version"
            com.kwad.sdk.utils.t.putValue(r0, r3, r2)
            java.lang.String r2 = com.kwad.sdk.utils.bf.getAppId()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            java.lang.String r3 = "appId"
            if (r2 != 0) goto L30
            java.lang.String r1 = com.kwad.sdk.utils.bf.getAppId()
            goto L34
        L30:
            java.lang.String r1 = r1.getAppId()
        L34:
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            java.lang.String r1 = r4.getBodyParamsString()
            java.lang.String r1 = com.kwad.sdk.core.a.d.cQ(r1)
            java.lang.String r2 = "message"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.getUrl()
            java.util.Map r2 = r4.getHeader()
            java.lang.String r3 = r0.toString()
            com.kwad.sdk.core.a.d.a(r1, r2, r3)
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> getBodyMap() {
            r1 = this;
            r0 = 0
            return r0
    }

    protected java.lang.String getBodyParamsString() {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> getHeader() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.mHeader
            return r0
    }

    protected java.lang.String getRequestHost() {
            r1 = this;
            java.lang.String r0 = com.kwad.sdk.h.wZ()
            return r0
    }

    @Override
    public com.kwad.sdk.internal.api.SceneImpl getScene() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public abstract java.lang.String getUrl();

    protected void onCreate() {
            r0 = this;
            return
    }

    public void putBody(java.lang.String r2, byte r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.sdk.utils.t.putValue(r0, r2, r3)
            return
    }

    public void putBody(java.lang.String r2, double r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.sdk.utils.t.putValue(r0, r2, r3)
            return
    }

    public void putBody(java.lang.String r2, float r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.sdk.utils.t.putValue(r0, r2, r3)
            return
    }

    public void putBody(java.lang.String r2, int r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.sdk.utils.t.putValue(r0, r2, r3)
            return
    }

    public void putBody(java.lang.String r2, long r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.sdk.utils.t.putValue(r0, r2, r3)
            return
    }

    public void putBody(java.lang.String r2, com.kwad.sdk.core.b r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.sdk.utils.t.a(r0, r2, r3)
            return
    }

    public void putBody(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.sdk.utils.t.putValue(r0, r2, r3)
            return
    }

    public void putBody(java.lang.String r2, java.util.List<? extends com.kwad.sdk.core.b> r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.sdk.utils.t.putValue(r0, r2, r3)
            return
    }

    public void putBody(java.lang.String r2, org.json.JSONArray r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.sdk.utils.t.putValue(r0, r2, r3)
            return
    }

    public void putBody(java.lang.String r2, org.json.JSONObject r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.sdk.utils.t.putValue(r0, r2, r3)
            return
    }

    public void putBody(java.lang.String r2, boolean r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.sdk.utils.t.putValue(r0, r2, r3)
            return
    }
}

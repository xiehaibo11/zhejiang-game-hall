package com.kwad.components.offline.api.core.network;

public abstract class OfflineCompoRequest implements com.kwad.components.offline.api.core.network.IOfflineCompoRequest {
    protected final org.json.JSONObject mBodyParams;
    private final java.util.Map<java.lang.String, java.lang.String> mHeader;
    private com.kwad.sdk.core.network.d mHostRequest;


    public OfflineCompoRequest() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mHeader = r0
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r1.mBodyParams = r0
            com.kwad.components.offline.api.core.network.OfflineCompoRequest$1 r0 = new com.kwad.components.offline.api.core.network.OfflineCompoRequest$1
            r0.<init>(r1)
            r1.mHostRequest = r0
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

    @Override
    public boolean encryptDisable() {
            r1 = this;
            com.kwad.sdk.core.network.d r0 = r1.mHostRequest
            boolean r0 = r0.encryptDisable()
            return r0
    }

    @Override
    public org.json.JSONObject getBody() {
            r2 = this;
            com.kwad.sdk.core.network.d r0 = r2.mHostRequest
            org.json.JSONObject r0 = r0.mBodyParams
            org.json.JSONObject r1 = r2.mBodyParams
            com.kwad.components.offline.api.core.utils.JsonHelper.merge(r0, r1)
            com.kwad.sdk.core.network.d r0 = r2.mHostRequest
            org.json.JSONObject r0 = r0.getBody()
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> getBodyMap() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> getHeader() {
            r2 = this;
            com.kwad.sdk.core.network.d r0 = r2.mHostRequest
            java.util.Map r0 = r0.getHeader()
            java.util.Map<java.lang.String, java.lang.String> r1 = r2.mHeader
            r0.putAll(r1)
            com.kwad.sdk.core.network.d r0 = r2.mHostRequest
            java.util.Map r0 = r0.getHeader()
            return r0
    }

    @Override
    public java.lang.String getMethod() {
            r1 = this;
            java.lang.String r0 = "POST"
            return r0
    }

    @Override
    public java.lang.String getRequestHost() {
            r1 = this;
            java.lang.String r0 = com.kwad.sdk.h.wZ()
            return r0
    }

    @Override
    public final com.kwad.sdk.api.KsScene getScene() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void putBody(java.lang.String r2, byte r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r0, r2, r3)
            return
    }

    public void putBody(java.lang.String r2, double r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r0, r2, r3)
            return
    }

    public void putBody(java.lang.String r2, float r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r0, r2, r3)
            return
    }

    public void putBody(java.lang.String r2, int r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r0, r2, r3)
            return
    }

    public void putBody(java.lang.String r2, long r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r0, r2, r3)
            return
    }

    public void putBody(java.lang.String r2, com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r0, r2, r3)
            return
    }

    public void putBody(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r0, r2, r3)
            return
    }

    public void putBody(java.lang.String r2, java.util.List<? extends com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse> r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r0, r2, r3)
            return
    }

    public void putBody(java.lang.String r2, org.json.JSONArray r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r0, r2, r3)
            return
    }

    public void putBody(java.lang.String r2, org.json.JSONObject r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r0, r2, r3)
            return
    }

    public void putBody(java.lang.String r2, boolean r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r0, r2, r3)
            return
    }

    public void putBody(org.json.JSONObject r2) {
            r1 = this;
            org.json.JSONObject r0 = r1.mBodyParams
            com.kwad.components.offline.api.core.utils.JsonHelper.merge(r0, r2)
            return
    }
}

package com.kwad.components.offline.api.core.adlive.request;

public class KSAdLiveEndRequest implements com.kwad.components.offline.api.core.network.IOfflineCompoRequest {
    private final com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest mAdLiveEndRequest;
    private final java.util.Map<java.lang.String, java.lang.String> mHeader;

    public KSAdLiveEndRequest(com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r2) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mHeader = r0
            r1.mAdLiveEndRequest = r2
            return
    }

    @Override
    public boolean encryptDisable() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public org.json.JSONObject getBody() {
            r1 = this;
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r0 = r1.mAdLiveEndRequest
            java.util.Map r0 = r0.getBodyMap()
            org.json.JSONObject r0 = com.kwad.components.offline.api.core.utils.JsonHelper.parseMap2JSON(r0)
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> getBodyMap() {
            r1 = this;
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r0 = r1.mAdLiveEndRequest
            java.util.Map r0 = r0.getBodyMap()
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> getHeader() {
            r4 = this;
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r0 = r4.mAdLiveEndRequest
            if (r0 == 0) goto L56
            java.util.Map r0 = r0.getHeader()
            if (r0 == 0) goto L56
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r0 = r4.mAdLiveEndRequest
            java.util.Map r0 = r0.getHeader()
            int r0 = r0.size()
            if (r0 > 0) goto L17
            goto L56
        L17:
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r0 = r4.mAdLiveEndRequest
            java.util.Map r0 = r0.getHeader()
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        L25:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L53
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r2 = r4.mAdLiveEndRequest
            java.util.Map r2 = r2.getHeader()
            java.lang.Object r2 = r2.get(r1)
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L25
            java.util.Map<java.lang.String, java.lang.String> r2 = r4.mHeader
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r3 = r4.mAdLiveEndRequest
            java.util.Map r3 = r3.getHeader()
            java.lang.Object r3 = r3.get(r1)
            r2.put(r1, r3)
            goto L25
        L53:
            java.util.Map<java.lang.String, java.lang.String> r0 = r4.mHeader
            return r0
        L56:
            java.util.Map<java.lang.String, java.lang.String> r0 = r4.mHeader
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
            r0 = 0
            return r0
    }

    @Override
    public com.kwad.sdk.api.KsScene getScene() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getUrl() {
            r2 = this;
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r0 = r2.mAdLiveEndRequest
            java.lang.String r0 = r0.getUrl()
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r1 = r2.mAdLiveEndRequest
            java.util.Map r1 = r1.getUrlParam()
            java.lang.String r0 = com.kwad.components.offline.api.core.utils.LiveRequestDataUtils.appendUrl(r0, r1)
            return r0
    }
}

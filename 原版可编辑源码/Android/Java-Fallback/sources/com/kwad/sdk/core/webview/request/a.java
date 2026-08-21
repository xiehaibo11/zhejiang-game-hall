package com.kwad.sdk.core.webview.request;

public class a extends com.kwad.sdk.core.network.d {
    private java.lang.String azg;
    private java.lang.String mUrl;

    public a(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            r1.mUrl = r2
            r1.azg = r3
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> Ld
            r2.<init>(r4)     // Catch: org.json.JSONException -> Ld
            goto L12
        Ld:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r2)
            r2 = 0
        L12:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "mBodyParams1 size="
            r3.<init>(r4)
            org.json.JSONObject r4 = r1.mBodyParams
            int r4 = r4.length()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "WebCardGetDataRequest"
            com.kwad.sdk.core.e.c.d(r4, r3)
            if (r2 == 0) goto L42
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r0 = "paramsJsonObj="
            r3.<init>(r0)
            java.lang.String r0 = r2.toString()
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            com.kwad.sdk.core.e.c.d(r4, r3)
        L42:
            org.json.JSONObject r3 = r1.mBodyParams
            com.kwad.sdk.utils.t.merge(r3, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "mBodyParams2 size="
            r2.<init>(r3)
            org.json.JSONObject r3 = r1.mBodyParams
            int r3 = r3.length()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.kwad.sdk.core.e.c.d(r4, r2)
            java.lang.String r2 = com.kwad.sdk.core.network.q.getUserAgent()
            java.lang.String r3 = "user-agent"
            r1.addHeader(r3, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r3)
            java.lang.String r3 = com.kwad.sdk.core.network.q.getUserAgent()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.kwad.sdk.core.e.c.d(r4, r2)
            return
    }

    @Override
    public java.lang.String getUrl() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.kwad.sdk.h.wZ()
            r0.append(r1)
            java.lang.String r1 = r2.mUrl
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}

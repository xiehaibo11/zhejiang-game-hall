package com.kwad.sdk.contentalliance.a.a;

public final class a {
    public long adStyle;
    public long clickTime;
    public int contentType;
    public long photoId;

    public a() {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.clickTime = r0
            return
    }

    public a(com.kwad.sdk.core.response.model.AdTemplate r3, long r4) {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.clickTime = r0
            long r0 = com.kwad.sdk.core.response.b.d.cm(r3)
            r2.photoId = r0
            r2.clickTime = r4
            int r4 = com.kwad.sdk.core.response.b.d.cb(r3)
            long r4 = (long) r4
            r2.adStyle = r4
            int r3 = com.kwad.sdk.core.response.b.d.cc(r3)
            r2.contentType = r3
            return
    }

    public static com.kwad.sdk.contentalliance.a.a.a ap(com.kwad.sdk.core.response.model.AdTemplate r3) {
            com.kwad.sdk.contentalliance.a.a.a r0 = new com.kwad.sdk.contentalliance.a.a.a
            long r1 = com.kwad.sdk.utils.l.cC(r3)
            r0.<init>(r3, r1)
            return r0
    }

    public final java.lang.String yR() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "contentType"
            int r2 = r4.contentType     // Catch: org.json.JSONException -> L14
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L14
            java.lang.String r1 = "adStyle"
            long r2 = r4.adStyle     // Catch: org.json.JSONException -> L14
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L14
            goto L18
        L14:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)
        L18:
            java.lang.String r0 = r0.toString()
            return r0
    }
}

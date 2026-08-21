package com.kwad.sdk.core.b.a;

public final class aj implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdInfo.AdTrackInfo> {
    public aj() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo.AdTrackInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "type"
            int r0 = r4.optInt(r0)
            r3.type = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.urls = r0
            java.lang.String r0 = "url"
            org.json.JSONArray r4 = r4.optJSONArray(r0)
            if (r4 == 0) goto L2f
            r0 = 0
        L1b:
            int r1 = r4.length()
            if (r0 >= r1) goto L2f
            java.util.List<java.lang.String> r1 = r3.urls
            java.lang.Object r2 = r4.opt(r0)
            java.lang.String r2 = (java.lang.String) r2
            r1.add(r2)
            int r0 = r0 + 1
            goto L1b
        L2f:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdInfo.AdTrackInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.type
            if (r0 == 0) goto L12
            int r0 = r2.type
            java.lang.String r1 = "type"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            java.util.List<java.lang.String> r2 = r2.urls
            java.lang.String r0 = "url"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdTrackInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdTrackInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdTrackInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdTrackInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}

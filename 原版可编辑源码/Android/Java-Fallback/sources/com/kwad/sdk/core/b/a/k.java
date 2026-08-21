package com.kwad.sdk.core.b.a;

public final class k implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdStyleInfo.AdBrowseInfo> {
    public k() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdStyleInfo.AdBrowseInfo r1, org.json.JSONObject r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "enableAdBrowse"
            int r0 = r2.optInt(r0)
            r1.enableAdBrowse = r0
            java.lang.String r0 = "adBrowseDuration"
            int r2 = r2.optInt(r0)
            r1.adBrowseDuration = r2
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdStyleInfo.AdBrowseInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.enableAdBrowse
            if (r0 == 0) goto L12
            int r0 = r2.enableAdBrowse
            java.lang.String r1 = "enableAdBrowse"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            int r0 = r2.adBrowseDuration
            if (r0 == 0) goto L1d
            int r2 = r2.adBrowseDuration
            java.lang.String r0 = "adBrowseDuration"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L1d:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$AdBrowseInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.AdBrowseInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$AdBrowseInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.AdBrowseInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}

package com.kwad.sdk.core.b.a;

public final class af implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdStatusInfo> {
    public af() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdStatusInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "loadFromCache"
            boolean r0 = r3.optBoolean(r0)
            r2.loadFromCache = r0
            java.lang.String r0 = "loadDataTime"
            long r0 = r3.optLong(r0)
            r2.loadDataTime = r0
            java.lang.String r0 = "downloadFinishTime"
            long r0 = r3.optLong(r0)
            r2.downloadFinishTime = r0
            java.lang.String r0 = "downloadType"
            int r0 = r3.optInt(r0)
            r2.downloadType = r0
            java.lang.String r0 = "downloadSize"
            long r0 = r3.optLong(r0)
            r2.downloadSize = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdStatusInfo r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            boolean r0 = r5.loadFromCache
            if (r0 == 0) goto L12
            boolean r0 = r5.loadFromCache
            java.lang.String r1 = "loadFromCache"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L12:
            long r0 = r5.loadDataTime
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L21
            long r0 = r5.loadDataTime
            java.lang.String r4 = "loadDataTime"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L21:
            long r0 = r5.downloadFinishTime
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L2e
            long r0 = r5.downloadFinishTime
            java.lang.String r4 = "downloadFinishTime"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L2e:
            int r0 = r5.downloadType
            if (r0 == 0) goto L39
            int r0 = r5.downloadType
            java.lang.String r1 = "downloadType"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L39:
            long r0 = r5.downloadSize
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L46
            long r0 = r5.downloadSize
            java.lang.String r5 = "downloadSize"
            com.kwad.sdk.utils.t.putValue(r6, r5, r0)
        L46:
            return r6
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStatusInfo r1 = (com.kwad.sdk.core.response.model.AdStatusInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStatusInfo r1 = (com.kwad.sdk.core.response.model.AdStatusInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}

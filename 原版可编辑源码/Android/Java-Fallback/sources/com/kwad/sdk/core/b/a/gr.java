package com.kwad.sdk.core.b.a;

public final class gr implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.a> {
    public gr() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.a r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "posId"
            long r0 = r4.optLong(r0)
            r3.posId = r0
            java.lang.String r0 = "adPhotoCountForMedia"
            int r0 = r4.optInt(r0)
            r3.auA = r0
            java.lang.String r0 = "enablePreload"
            boolean r0 = r4.optBoolean(r0)
            r3.auB = r0
            java.lang.Long r0 = new java.lang.Long
            java.lang.String r1 = "10000"
            r0.<init>(r1)
            long r0 = r0.longValue()
            java.lang.String r2 = "increaseAdLoadTime"
            long r0 = r4.optLong(r2, r0)
            r3.auC = r0
            java.lang.String r0 = "adLoadStrategy"
            int r0 = r4.optInt(r0)
            r3.auD = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "3"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "drawAdForcedWatchTimes"
            int r4 = r4.optInt(r1, r0)
            r3.auE = r4
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.a r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L7
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
        L7:
            long r0 = r4.posId
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            long r0 = r4.posId
            java.lang.String r2 = "posId"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L16:
            int r0 = r4.auA
            if (r0 == 0) goto L21
            int r0 = r4.auA
            java.lang.String r1 = "adPhotoCountForMedia"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L21:
            boolean r0 = r4.auB
            if (r0 == 0) goto L2c
            boolean r0 = r4.auB
            java.lang.String r1 = "enablePreload"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L2c:
            long r0 = r4.auC
            java.lang.String r2 = "increaseAdLoadTime"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
            int r0 = r4.auD
            if (r0 == 0) goto L3e
            int r0 = r4.auD
            java.lang.String r1 = "adLoadStrategy"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L3e:
            int r4 = r4.auE
            java.lang.String r0 = "drawAdForcedWatchTimes"
            com.kwad.sdk.utils.t.putValue(r5, r0, r4)
            return r5
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.a r1 = (com.kwad.sdk.core.response.model.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.a r1 = (com.kwad.sdk.core.response.model.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}

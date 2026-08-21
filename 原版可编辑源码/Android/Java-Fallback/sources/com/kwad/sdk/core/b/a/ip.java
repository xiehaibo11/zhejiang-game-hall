package com.kwad.sdk.core.b.a;

public final class ip implements com.kwad.sdk.core.d<com.kwad.sdk.core.request.model.f> {
    public ip() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.request.model.f r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "adStyle"
            int r0 = r3.optInt(r0)
            r2.adStyle = r0
            java.lang.String r0 = "taskType"
            int r0 = r3.optInt(r0)
            r2.taskType = r0
            java.lang.String r0 = "count"
            int r0 = r3.optInt(r0)
            r2.count = r0
            java.lang.String r0 = "lastModifiedTime"
            long r0 = r3.optLong(r0)
            r2.auw = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.request.model.f r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L7
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
        L7:
            int r0 = r4.adStyle
            if (r0 == 0) goto L12
            int r0 = r4.adStyle
            java.lang.String r1 = "adStyle"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L12:
            int r0 = r4.taskType
            if (r0 == 0) goto L1d
            int r0 = r4.taskType
            java.lang.String r1 = "taskType"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L1d:
            int r0 = r4.count
            if (r0 == 0) goto L28
            int r0 = r4.count
            java.lang.String r1 = "count"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L28:
            long r0 = r4.auw
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L37
            long r0 = r4.auw
            java.lang.String r4 = "lastModifiedTime"
            com.kwad.sdk.utils.t.putValue(r5, r4, r0)
        L37:
            return r5
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.request.model.f r1 = (com.kwad.sdk.core.request.model.f) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.request.model.f r1 = (com.kwad.sdk.core.request.model.f) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}

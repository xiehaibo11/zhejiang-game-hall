package com.reyun.tracking.utils;

class u implements com.reyun.tracking.utils.n {
    final com.reyun.tracking.utils.s a;

    u(com.reyun.tracking.utils.s r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void a(int r3, java.lang.Object r4) {
            r2 = this;
            r3 = r4
            org.json.JSONObject r3 = (org.json.JSONObject) r3     // Catch: org.json.JSONException -> L1c
            java.lang.String r0 = "info"
            org.json.JSONObject r3 = r3.getJSONObject(r0)     // Catch: org.json.JSONException -> L1c
            com.reyun.tracking.utils.IDeepLinkListener r0 = com.reyun.tracking.sdk.Tracking.getDeepLinkListener()     // Catch: org.json.JSONException -> L1c
            if (r0 == 0) goto L30
            com.reyun.tracking.utils.IDeepLinkListener r0 = com.reyun.tracking.sdk.Tracking.getDeepLinkListener()     // Catch: org.json.JSONException -> L1c
            r1 = 1
            java.lang.String r3 = r3.toString()     // Catch: org.json.JSONException -> L1c
            r0.onComplete(r1, r3)     // Catch: org.json.JSONException -> L1c
            goto L30
        L1c:
            r3 = move-exception
            r3.printStackTrace()
            com.reyun.tracking.utils.IDeepLinkListener r3 = com.reyun.tracking.sdk.Tracking.getDeepLinkListener()
            if (r3 == 0) goto L30
            com.reyun.tracking.utils.IDeepLinkListener r3 = com.reyun.tracking.sdk.Tracking.getDeepLinkListener()
            r0 = 0
            java.lang.String r1 = ""
            r3.onComplete(r0, r1)
        L30:
            com.reyun.tracking.sdk.p r3 = com.reyun.tracking.sdk.Tracking.getOnDataUploadListener()
            if (r3 == 0) goto L45
            com.reyun.tracking.sdk.p r3 = com.reyun.tracking.sdk.Tracking.getOnDataUploadListener()
            org.json.JSONObject r4 = (org.json.JSONObject) r4
            java.lang.String r4 = r4.toString()
            java.lang.String r0 = "dpquery"
            r3.b(r0, r4)
        L45:
            return
    }

    @Override
    public void a(java.lang.Throwable r2, java.lang.String r3) {
            r1 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "Upload dp query failed!:"
            r2.append(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "Tracking"
            com.reyun.tracking.a.a.a(r3, r2)
            com.reyun.tracking.utils.IDeepLinkListener r2 = com.reyun.tracking.sdk.Tracking.getDeepLinkListener()
            if (r2 == 0) goto L26
            com.reyun.tracking.utils.IDeepLinkListener r2 = com.reyun.tracking.sdk.Tracking.getDeepLinkListener()
            r3 = 0
            java.lang.String r0 = ""
            r2.onComplete(r3, r0)
        L26:
            com.reyun.tracking.sdk.p r2 = com.reyun.tracking.sdk.Tracking.getOnDataUploadListener()
            if (r2 == 0) goto L37
            com.reyun.tracking.sdk.p r2 = com.reyun.tracking.sdk.Tracking.getOnDataUploadListener()
            java.lang.String r3 = "dpquery"
            java.lang.String r0 = "{}"
            r2.b(r3, r0)
        L37:
            return
    }
}

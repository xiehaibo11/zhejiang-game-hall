package com.reyun.tracking.sdk;

final class i extends android.os.Handler {
    i(android.os.Looper r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public void handleMessage(android.os.Message r5) {
            r4 = this;
            java.lang.Object r5 = r5.obj
            com.reyun.tracking.utils.k r5 = (com.reyun.tracking.utils.k) r5
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "from"
            java.lang.String r2 = "tkio"
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L1d
            java.lang.String r1 = "data"
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: org.json.JSONException -> L1d
            java.lang.String r3 = r5.b     // Catch: org.json.JSONException -> L1d
            r2.<init>(r3)     // Catch: org.json.JSONException -> L1d
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L1d
            goto L21
        L1d:
            r1 = move-exception
            r1.printStackTrace()
        L21:
            com.reyun.tracking.sdk.j r1 = new com.reyun.tracking.sdk.j
            r1.<init>(r4, r5)
            android.content.Context r5 = com.reyun.tracking.sdk.Tracking.access$000()
            java.lang.String r2 = "batch"
            java.lang.String r3 = "receive/batch"
            com.reyun.tracking.utils.d.a(r5, r2, r3, r0, r1)
            return
    }
}

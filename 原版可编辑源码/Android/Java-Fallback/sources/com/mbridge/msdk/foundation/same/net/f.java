package com.mbridge.msdk.foundation.same.net;

public class f<T> implements com.mbridge.msdk.foundation.same.net.e<T> {
    public int adType;
    private com.mbridge.msdk.foundation.same.report.a.a mRequestTime;
    public java.lang.String placementId;
    private long startTime;
    public java.lang.String unitId;

    public f() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.unitId = r0
            r1.placementId = r0
            r0 = 0
            r1.adType = r0
            r0 = 0
            r1.mRequestTime = r0
            return
    }

    public void calcRequestTime(long r5) {
            r4 = this;
            com.mbridge.msdk.foundation.entity.j r0 = new com.mbridge.msdk.foundation.entity.j
            r0.<init>()
            com.mbridge.msdk.foundation.same.report.a.a r1 = new com.mbridge.msdk.foundation.same.report.a.a
            r1.<init>(r0)
            r4.mRequestTime = r1
            java.lang.String r0 = r4.unitId
            r1.b(r0)
            com.mbridge.msdk.foundation.same.report.a.a r0 = r4.mRequestTime
            r1 = 1
            r0.a(r1)
            com.mbridge.msdk.foundation.same.report.a.a r0 = r4.mRequestTime
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            long r2 = r4.startTime
            long r5 = r5 - r2
            r1.append(r5)
            java.lang.String r5 = ""
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.a(r5)
            return
    }

    @Override
    public void onCancel() {
            r0 = this;
            return
    }

    @Override
    public void onError(com.mbridge.msdk.foundation.same.net.a.a r1) {
            r0 = this;
            return
    }

    @Override
    public void onFinish() {
            r0 = this;
            return
    }

    @Override
    public void onNetworking() {
            r0 = this;
            return
    }

    @Override
    public void onPreExecute() {
            r2 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r2.startTime = r0
            return
    }

    @Override
    public void onProgressChange(long r1, long r3) {
            r0 = this;
            return
    }

    @Override
    public void onRetry() {
            r0 = this;
            return
    }

    @Override
    public void onSuccess(com.mbridge.msdk.foundation.same.net.k<T> r11) {
            r10 = this;
            java.lang.String r0 = "Listener"
            java.lang.String r1 = "_"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L9b
            r2.<init>()     // Catch: java.lang.Exception -> L9b
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L9b
            java.lang.String r3 = r3.k()     // Catch: java.lang.Exception -> L9b
            r2.append(r3)     // Catch: java.lang.Exception -> L9b
            r2.append(r1)     // Catch: java.lang.Exception -> L9b
            java.lang.String r3 = r10.placementId     // Catch: java.lang.Exception -> L9b
            r2.append(r3)     // Catch: java.lang.Exception -> L9b
            r2.append(r1)     // Catch: java.lang.Exception -> L9b
            java.lang.String r3 = r10.unitId     // Catch: java.lang.Exception -> L9b
            r2.append(r3)     // Catch: java.lang.Exception -> L9b
            r2.append(r1)     // Catch: java.lang.Exception -> L9b
            int r1 = r10.adType     // Catch: java.lang.Exception -> L9b
            r2.append(r1)     // Catch: java.lang.Exception -> L9b
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Exception -> L9b
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L9b
            java.lang.String r3 = r10.unitId     // Catch: java.lang.Exception -> L9b
            r2.d(r3)     // Catch: java.lang.Exception -> L9b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L9b
            r2.<init>()     // Catch: java.lang.Exception -> L9b
            T r3 = r11.a     // Catch: java.lang.Exception -> L9b
            r2.append(r3)     // Catch: java.lang.Exception -> L9b
            java.lang.String r3 = " "
            r2.append(r3)     // Catch: java.lang.Exception -> L9b
            r2.append(r1)     // Catch: java.lang.Exception -> L9b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L9b
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)     // Catch: java.lang.Exception -> L9b
            T r2 = r11.a     // Catch: java.lang.Exception -> L9b
            boolean r2 = r2 instanceof org.json.JSONObject     // Catch: java.lang.Exception -> L9b
            java.lang.String r9 = "status"
            if (r2 == 0) goto L76
            T r2 = r11.a     // Catch: java.lang.Exception -> L9b
            org.json.JSONObject r2 = (org.json.JSONObject) r2     // Catch: java.lang.Exception -> L9b
            int r5 = r2.optInt(r9)     // Catch: java.lang.Exception -> L9b
            T r2 = r11.a     // Catch: java.lang.Exception -> L9b
            org.json.JSONObject r2 = (org.json.JSONObject) r2     // Catch: java.lang.Exception -> L9b
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Exception -> L9b
            com.mbridge.msdk.foundation.same.net.f.c r3 = com.mbridge.msdk.foundation.same.net.f.c.a()     // Catch: java.lang.Exception -> L9b
            long r7 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L9b
            r4 = r1
            r3.a(r4, r5, r6, r7)     // Catch: java.lang.Exception -> L9b
        L76:
            T r2 = r11.a     // Catch: java.lang.Exception -> L9b
            boolean r2 = r2 instanceof java.lang.String     // Catch: java.lang.Exception -> L9b
            if (r2 == 0) goto La3
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L9b
            T r3 = r11.a     // Catch: java.lang.Exception -> L9b
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L9b
            r2.<init>(r3)     // Catch: java.lang.Exception -> L9b
            int r5 = r2.optInt(r9)     // Catch: java.lang.Exception -> L9b
            T r11 = r11.a     // Catch: java.lang.Exception -> L9b
            r6 = r11
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Exception -> L9b
            com.mbridge.msdk.foundation.same.net.f.c r3 = com.mbridge.msdk.foundation.same.net.f.c.a()     // Catch: java.lang.Exception -> L9b
            long r7 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L9b
            r4 = r1
            r3.a(r4, r5, r6, r7)     // Catch: java.lang.Exception -> L9b
            goto La3
        L9b:
            r11 = move-exception
            java.lang.String r11 = r11.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r11)
        La3:
            return
    }

    public void saveHbState(int r2) {
            r1 = this;
            com.mbridge.msdk.foundation.same.report.a.a r0 = r1.mRequestTime
            if (r0 == 0) goto L7
            r0.c(r2)
        L7:
            return
    }

    public void saveRequestTime(int r2) {
            r1 = this;
            com.mbridge.msdk.foundation.same.report.a.a r0 = r1.mRequestTime
            if (r0 == 0) goto Lc
            r0.b(r2)
            com.mbridge.msdk.foundation.same.report.a.a r2 = r1.mRequestTime
            r2.a()
        Lc:
            return
    }

    public void setAdType(int r1) {
            r0 = this;
            r0.adType = r1
            return
    }

    public void setPlacementId(java.lang.String r1) {
            r0 = this;
            r0.placementId = r1
            return
    }

    public void setUnitId(java.lang.String r1) {
            r0 = this;
            r0.unitId = r1
            return
    }
}

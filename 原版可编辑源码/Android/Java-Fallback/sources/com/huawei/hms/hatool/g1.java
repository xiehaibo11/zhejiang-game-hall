package com.huawei.hms.hatool;

public final class g1 {
    public static com.huawei.hms.hatool.g1 c;
    public android.content.Context a;
    public final java.lang.Object b;

    public g1() {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.b = r0
            return
    }

    public static com.huawei.hms.hatool.g1 a() {
            com.huawei.hms.hatool.g1 r0 = com.huawei.hms.hatool.g1.c
            if (r0 != 0) goto L7
            b()
        L7:
            com.huawei.hms.hatool.g1 r0 = com.huawei.hms.hatool.g1.c
            return r0
    }

    public static synchronized void b() {
            java.lang.Class<com.huawei.hms.hatool.g1> r0 = com.huawei.hms.hatool.g1.class
            monitor-enter(r0)
            com.huawei.hms.hatool.g1 r1 = com.huawei.hms.hatool.g1.c     // Catch: java.lang.Throwable -> L10
            if (r1 != 0) goto Le
            com.huawei.hms.hatool.g1 r1 = new com.huawei.hms.hatool.g1     // Catch: java.lang.Throwable -> L10
            r1.<init>()     // Catch: java.lang.Throwable -> L10
            com.huawei.hms.hatool.g1.c = r1     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r0)
            return
        L10:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final org.json.JSONObject a(java.util.Map<java.lang.String, java.lang.String> r4) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            if (r4 == 0) goto L30
            java.util.Set r4 = r4.entrySet()     // Catch: org.json.JSONException -> L29
            java.util.Iterator r4 = r4.iterator()     // Catch: org.json.JSONException -> L29
        Lf:
            boolean r1 = r4.hasNext()     // Catch: org.json.JSONException -> L29
            if (r1 == 0) goto L30
            java.lang.Object r1 = r4.next()     // Catch: org.json.JSONException -> L29
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: org.json.JSONException -> L29
            java.lang.Object r2 = r1.getKey()     // Catch: org.json.JSONException -> L29
            java.lang.String r2 = (java.lang.String) r2     // Catch: org.json.JSONException -> L29
            java.lang.Object r1 = r1.getValue()     // Catch: org.json.JSONException -> L29
            r0.put(r2, r1)     // Catch: org.json.JSONException -> L29
            goto Lf
        L29:
            java.lang.String r4 = "hmsSdk"
            java.lang.String r1 = "Exception occured when transferring bundle to json"
            com.huawei.hms.hatool.y.b(r4, r1)
        L30:
            return r0
    }

    public void a(android.content.Context r3) {
            r2 = this;
            java.lang.Object r0 = r2.b
            monitor-enter(r0)
            android.content.Context r1 = r2.a     // Catch: java.lang.Throwable -> L14
            if (r1 == 0) goto L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            return
        L9:
            r2.a = r3     // Catch: java.lang.Throwable -> L14
            com.huawei.hms.hatool.h0 r1 = com.huawei.hms.hatool.h0.a()     // Catch: java.lang.Throwable -> L14
            r1.a(r3)     // Catch: java.lang.Throwable -> L14
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            return
        L14:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r3
    }

    public void a(java.lang.String r2, int r3) {
            r1 = this;
            com.huawei.hms.hatool.h0 r0 = com.huawei.hms.hatool.h0.a()
            r0.a(r2, r3)
            return
    }

    public void a(java.lang.String r2, int r3, java.lang.String r4, java.util.LinkedHashMap<java.lang.String, java.lang.String> r5) {
            r1 = this;
            org.json.JSONObject r5 = r1.a(r5)
            com.huawei.hms.hatool.h0 r0 = com.huawei.hms.hatool.h0.a()
            r0.a(r2, r3, r4, r5)
            return
    }

    public void a(java.lang.String r2, android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            java.lang.String r0 = "_constants"
            r3.put(r0, r5)     // Catch: org.json.JSONException -> L13
            com.huawei.hms.hatool.h0 r5 = com.huawei.hms.hatool.h0.a()
            r0 = 0
            r5.a(r2, r0, r4, r3)
            return
        L13:
            java.lang.String r2 = "hmsSdk"
            java.lang.String r3 = "onEvent():JSON structure Exception!"
            com.huawei.hms.hatool.y.f(r2, r3)
            return
    }
}

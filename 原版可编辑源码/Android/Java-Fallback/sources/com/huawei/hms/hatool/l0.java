package com.huawei.hms.hatool;

public class l0 implements com.huawei.hms.hatool.m0 {
    public java.lang.String a;
    public java.lang.String b;
    public java.lang.String c;
    public java.util.List<com.huawei.hms.hatool.q> d;

    public l0(java.util.List<com.huawei.hms.hatool.q> r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            r0.a = r2
            r0.b = r3
            r0.c = r4
            r0.d = r1
            return
    }

    public final void a() {
            r4 = this;
            java.lang.String r0 = r4.a
            java.lang.String r1 = r4.c
            java.lang.String r2 = r4.b
            java.lang.String r0 = com.huawei.hms.hatool.s0.a(r0, r1, r2)
            android.content.Context r1 = com.huawei.hms.hatool.b.f()
            r2 = 1
            java.lang.String[] r2 = new java.lang.String[r2]
            r3 = 0
            r2[r3] = r0
            java.lang.String r0 = "backup_event"
            com.huawei.hms.hatool.g0.a(r1, r0, r2)
            return
    }

    @Override
    public void run() {
            r7 = this;
            java.util.List<com.huawei.hms.hatool.q> r0 = r7.d
            java.lang.String r1 = "hmsSdk"
            if (r0 == 0) goto Lb9
            int r0 = r0.size()
            if (r0 != 0) goto Le
            goto Lb9
        Le:
            int r0 = com.huawei.hms.hatool.b.h()
            android.content.Context r2 = com.huawei.hms.hatool.b.f()
            r3 = 1048576(0x100000, float:1.469368E-39)
            int r0 = r0 * r3
            java.lang.String r4 = "cached_v2_1"
            boolean r0 = com.huawei.hms.hatool.p0.a(r2, r4, r0)
            if (r0 == 0) goto L38
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "The cacheFile is full,Can not writing data! reqID:"
            r0.append(r2)
            java.lang.String r2 = r7.b
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.huawei.hms.hatool.y.e(r1, r0)
            return
        L38:
            java.lang.String r0 = r7.a
            java.lang.String r2 = r7.c
            java.lang.String r0 = com.huawei.hms.hatool.s0.a(r0, r2)
            android.content.Context r2 = com.huawei.hms.hatool.b.f()
            java.util.Map r2 = com.huawei.hms.hatool.w.b(r2, r4, r0)
            java.lang.Object r2 = r2.get(r0)
            java.util.List r2 = (java.util.List) r2
            if (r2 == 0) goto L5b
            int r5 = r2.size()
            if (r5 == 0) goto L5b
            java.util.List<com.huawei.hms.hatool.q> r5 = r7.d
            r5.addAll(r2)
        L5b:
            org.json.JSONArray r2 = new org.json.JSONArray
            r2.<init>()
            java.util.List<com.huawei.hms.hatool.q> r5 = r7.d
            java.util.Iterator r5 = r5.iterator()
        L66:
            boolean r6 = r5.hasNext()
            if (r6 == 0) goto L80
            java.lang.Object r6 = r5.next()
            com.huawei.hms.hatool.q r6 = (com.huawei.hms.hatool.q) r6
            org.json.JSONObject r6 = r6.d()     // Catch: org.json.JSONException -> L7a
            r2.put(r6)     // Catch: org.json.JSONException -> L7a
            goto L66
        L7a:
            java.lang.String r6 = "event to json error"
            com.huawei.hms.hatool.y.e(r1, r6)
            goto L66
        L80:
            java.lang.String r2 = r2.toString()
            int r5 = com.huawei.hms.hatool.b.e()
            int r6 = r2.length()
            int r5 = r5 * r3
            if (r6 <= r5) goto L98
            java.lang.String r0 = "this failed data is too long,can not writing it"
            com.huawei.hms.hatool.y.e(r1, r0)
            r0 = 0
            r7.d = r0
            return
        L98:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "data send failed, write to cache file...reqID:"
            r3.append(r5)
            java.lang.String r5 = r7.b
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            com.huawei.hms.hatool.y.d(r1, r3)
            android.content.Context r1 = com.huawei.hms.hatool.b.f()
            com.huawei.hms.hatool.g0.b(r1, r4, r0, r2)
            r7.a()
            return
        Lb9:
            java.lang.String r0 = "failed events is empty"
            com.huawei.hms.hatool.y.d(r1, r0)
            return
    }
}

package com.huawei.hms.hatool;

public class j0 implements com.huawei.hms.hatool.m0 {
    public android.content.Context a;
    public java.lang.String b;
    public org.json.JSONObject c;
    public java.lang.String d;
    public java.lang.String e;
    public java.lang.String f;
    public java.lang.String g;
    public java.lang.Boolean h;

    public j0(java.lang.String r2, org.json.JSONObject r3, java.lang.String r4, java.lang.String r5, long r6) {
            r1 = this;
            r1.<init>()
            android.content.Context r0 = com.huawei.hms.hatool.b.f()
            r1.a = r0
            r1.b = r2
            r1.c = r3
            r1.d = r4
            r1.e = r5
            java.lang.String r2 = java.lang.String.valueOf(r6)
            r1.f = r2
            java.lang.String r2 = "oper"
            boolean r2 = com.huawei.hms.hatool.a.i(r4, r2)
            if (r2 == 0) goto L37
            com.huawei.hms.hatool.e0 r2 = com.huawei.hms.hatool.e0.a()
            com.huawei.hms.hatool.f0 r2 = r2.a(r4, r6)
            java.lang.String r3 = r2.a()
            r1.g = r3
            boolean r2 = r2.b()
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            r1.h = r2
        L37:
            return
    }

    @Override
    public void run() {
            r7 = this;
            java.lang.String r0 = "hmsSdk"
            java.lang.String r1 = "Begin to run EventRecordTask..."
            com.huawei.hms.hatool.y.c(r0, r1)
            int r1 = com.huawei.hms.hatool.b.e()
            java.lang.String r2 = r7.d
            java.lang.String r3 = r7.e
            int r2 = com.huawei.hms.hatool.c.k(r2, r3)
            android.content.Context r3 = r7.a
            r4 = 1048576(0x100000, float:1.469368E-39)
            int r1 = r1 * r4
            java.lang.String r4 = "stat_v2_1"
            boolean r1 = com.huawei.hms.hatool.p0.a(r3, r4, r1)
            java.lang.String r3 = ""
            if (r1 == 0) goto L31
            java.lang.String r1 = "stat sp file reach max limited size, discard new event"
            com.huawei.hms.hatool.y.c(r0, r1)
            com.huawei.hms.hatool.h0 r0 = com.huawei.hms.hatool.h0.a()
            java.lang.String r1 = "alltype"
            r0.a(r3, r1)
            return
        L31:
            com.huawei.hms.hatool.q r1 = new com.huawei.hms.hatool.q
            r1.<init>()
            java.lang.String r5 = r7.b
            r1.b(r5)
            org.json.JSONObject r5 = r7.c
            java.lang.String r5 = r5.toString()
            r1.a(r5)
            java.lang.String r5 = r7.e
            r1.d(r5)
            java.lang.String r5 = r7.f
            r1.c(r5)
            java.lang.String r5 = r7.g
            r1.f(r5)
            java.lang.Boolean r5 = r7.h
            if (r5 != 0) goto L59
            r5 = 0
            goto L5d
        L59:
            java.lang.String r5 = java.lang.String.valueOf(r5)
        L5d:
            r1.e(r5)
            org.json.JSONObject r1 = r1.d()     // Catch: org.json.JSONException -> Lb2
            java.lang.String r5 = r7.d
            java.lang.String r6 = r7.e
            java.lang.String r5 = com.huawei.hms.hatool.s0.a(r5, r6)
            android.content.Context r6 = r7.a
            java.lang.String r3 = com.huawei.hms.hatool.g0.a(r6, r4, r5, r3)
            boolean r6 = android.text.TextUtils.isEmpty(r3)     // Catch: org.json.JSONException -> L84
            if (r6 != 0) goto L7e
            org.json.JSONArray r6 = new org.json.JSONArray     // Catch: org.json.JSONException -> L84
            r6.<init>(r3)     // Catch: org.json.JSONException -> L84
            goto L8e
        L7e:
            org.json.JSONArray r6 = new org.json.JSONArray     // Catch: org.json.JSONException -> L84
            r6.<init>()     // Catch: org.json.JSONException -> L84
            goto L8e
        L84:
            java.lang.String r3 = "Cached data corrupted: stat_v2_1"
            com.huawei.hms.hatool.y.d(r0, r3)
            org.json.JSONArray r6 = new org.json.JSONArray
            r6.<init>()
        L8e:
            r6.put(r1)
            android.content.Context r0 = r7.a
            java.lang.String r1 = r6.toString()
            com.huawei.hms.hatool.g0.b(r0, r4, r5, r1)
            java.lang.String r0 = r6.toString()
            int r0 = r0.length()
            int r2 = r2 * 1024
            if (r0 <= r2) goto Lb1
            com.huawei.hms.hatool.h0 r0 = com.huawei.hms.hatool.h0.a()
            java.lang.String r1 = r7.d
            java.lang.String r2 = r7.e
            r0.a(r1, r2)
        Lb1:
            return
        Lb2:
            java.lang.String r1 = "eventRecord toJson error! The record failed."
            com.huawei.hms.hatool.y.e(r0, r1)
            return
    }
}

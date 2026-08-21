package com.huawei.hms.hatool;

public class q implements com.huawei.hms.hatool.s {
    public java.lang.String a;
    public java.lang.String b;
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;
    public java.lang.String f;

    public q() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public org.json.JSONObject a() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = r3.a
            java.lang.String r2 = "type"
            r0.put(r2, r1)
            java.lang.String r1 = r3.d
            java.lang.String r2 = "eventtime"
            r0.put(r2, r1)
            java.lang.String r1 = r3.b
            java.lang.String r2 = "event"
            r0.put(r2, r1)
            java.lang.String r1 = r3.e
            java.lang.String r2 = "event_session_name"
            r0.put(r2, r1)
            java.lang.String r1 = r3.f
            java.lang.String r2 = "first_session_event"
            r0.put(r2, r1)
            java.lang.String r1 = r3.c
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L32
            r0 = 0
            return r0
        L32:
            org.json.JSONObject r1 = new org.json.JSONObject
            java.lang.String r2 = r3.c
            r1.<init>(r2)
            java.lang.String r2 = "properties"
            r0.put(r2, r1)
            return r0
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void a(org.json.JSONObject r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "event"
            java.lang.String r0 = r3.optString(r0)
            r2.b = r0
            java.lang.String r0 = "properties"
            java.lang.String r0 = r3.optString(r0)
            r2.c = r0
            com.huawei.hms.hatool.d0 r0 = com.huawei.hms.hatool.d0.f()
            java.lang.String r0 = r0.a()
            java.lang.String r1 = r2.c
            java.lang.String r0 = com.huawei.hms.hatool.d.a(r1, r0)
            r2.c = r0
            java.lang.String r0 = "type"
            java.lang.String r0 = r3.optString(r0)
            r2.a = r0
            java.lang.String r0 = "eventtime"
            java.lang.String r0 = r3.optString(r0)
            r2.d = r0
            java.lang.String r0 = "event_session_name"
            java.lang.String r0 = r3.optString(r0)
            r2.e = r0
            java.lang.String r0 = "first_session_event"
            java.lang.String r3 = r3.optString(r0)
            r2.f = r3
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public void c(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public org.json.JSONObject d() {
            r3 = this;
            org.json.JSONObject r0 = r3.a()
            com.huawei.hms.hatool.d0 r1 = com.huawei.hms.hatool.d0.f()
            java.lang.String r1 = r1.a()
            java.lang.String r2 = r3.c
            java.lang.String r1 = com.huawei.hms.hatool.d.b(r2, r1)
            java.lang.String r2 = "properties"
            r0.put(r2, r1)
            return r0
    }

    public void d(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void e(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void f(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }
}

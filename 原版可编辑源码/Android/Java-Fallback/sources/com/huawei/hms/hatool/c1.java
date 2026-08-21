package com.huawei.hms.hatool;

public class c1 extends com.huawei.hms.hatool.n {
    public java.lang.String b;
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;
    public java.lang.String f;
    public java.lang.String g;

    public c1() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.b = r0
            r1.c = r0
            r1.d = r0
            r1.e = r0
            r1.f = r0
            return
    }

    @Override
    public org.json.JSONObject a() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = r3.a
            java.lang.String r2 = "androidid"
            r0.put(r2, r1)
            java.lang.String r1 = r3.g
            java.lang.String r2 = "oaid"
            r0.put(r2, r1)
            java.lang.String r1 = r3.f
            java.lang.String r2 = "uuid"
            r0.put(r2, r1)
            java.lang.String r1 = r3.e
            java.lang.String r2 = "upid"
            r0.put(r2, r1)
            java.lang.String r1 = r3.b
            java.lang.String r2 = "imei"
            r0.put(r2, r1)
            java.lang.String r1 = r3.c
            java.lang.String r2 = "sn"
            r0.put(r2, r1)
            java.lang.String r1 = r3.d
            java.lang.String r2 = "udid"
            r0.put(r2, r1)
            return r0
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void c(java.lang.String r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void d(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void e(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void f(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void g(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }
}

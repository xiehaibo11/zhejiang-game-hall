package com.huawei.hms.hatool;

public class e1 extends com.huawei.hms.hatool.p {
    public java.lang.String f;
    public java.lang.String g;
    public java.lang.String h;

    public e1() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public org.json.JSONObject a() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = r3.h
            java.lang.String r2 = "_rom_ver"
            r0.put(r2, r1)
            java.lang.String r1 = r3.a
            java.lang.String r2 = "_emui_ver"
            r0.put(r2, r1)
            java.lang.String r1 = android.os.Build.MODEL
            java.lang.String r2 = "_model"
            r0.put(r2, r1)
            java.lang.String r1 = r3.f
            java.lang.String r2 = "_mcc"
            r0.put(r2, r1)
            java.lang.String r1 = r3.g
            java.lang.String r2 = "_mnc"
            r0.put(r2, r1)
            java.lang.String r1 = r3.b
            java.lang.String r2 = "_package_name"
            r0.put(r2, r1)
            java.lang.String r1 = r3.c
            java.lang.String r2 = "_app_ver"
            r0.put(r2, r1)
            java.lang.String r1 = "_lib_ver"
            java.lang.String r2 = "2.2.0.310"
            r0.put(r1, r2)
            java.lang.String r1 = r3.d
            java.lang.String r2 = "_channel"
            r0.put(r2, r1)
            java.lang.String r1 = "_lib_name"
            java.lang.String r2 = "hianalytics"
            r0.put(r1, r2)
            java.lang.String r1 = r3.e
            java.lang.String r2 = "_oaid_tracking_flag"
            r0.put(r2, r1)
            return r0
    }

    public void f(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void g(java.lang.String r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void h(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }
}

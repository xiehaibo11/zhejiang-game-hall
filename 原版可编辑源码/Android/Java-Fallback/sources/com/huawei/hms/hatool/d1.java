package com.huawei.hms.hatool;

public class d1 extends com.huawei.hms.hatool.o {
    public java.lang.String g;

    public d1() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.g = r0
            return
    }

    @Override
    public org.json.JSONObject a() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "1"
            java.lang.String r2 = "protocol_version"
            r0.put(r2, r1)
            java.lang.String r2 = "compress_mode"
            r0.put(r2, r1)
            java.lang.String r1 = r3.d
            java.lang.String r2 = "serviceid"
            r0.put(r2, r1)
            java.lang.String r1 = r3.a
            java.lang.String r2 = "appid"
            r0.put(r2, r1)
            java.lang.String r1 = r3.g
            java.lang.String r2 = "hmac"
            r0.put(r2, r1)
            java.lang.String r1 = r3.f
            java.lang.String r2 = "chifer"
            r0.put(r2, r1)
            java.lang.String r1 = r3.b
            java.lang.String r2 = "timestamp"
            r0.put(r2, r1)
            java.lang.String r1 = r3.c
            java.lang.String r2 = "servicetag"
            r0.put(r2, r1)
            java.lang.String r1 = r3.e
            java.lang.String r2 = "requestid"
            r0.put(r2, r1)
            return r0
    }

    public void g(java.lang.String r1) {
            r0 = this;
            r0.g = r1
            return
    }
}

package com.alipay.sdk.m.q;

public class d extends com.alipay.sdk.m.p.e {
    public static final java.lang.String t = "log_v";

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.alipay.sdk.m.p.b a(com.alipay.sdk.m.s.a r7, android.content.Context r8, java.lang.String r9) throws java.lang.Throwable {
            r6 = this;
            java.lang.String r4 = "https://mcgw.alipay.com/sdklog.do"
            r5 = 1
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            com.alipay.sdk.m.p.b r7 = r0.a(r1, r2, r3, r4, r5)
            return r7
    }

    @Override
    public java.lang.String a(com.alipay.sdk.m.s.a r5) throws org.json.JSONException {
            r4 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "api_name"
            java.lang.String r2 = "/sdk/log"
            r0.put(r1, r2)
            java.lang.String r1 = "api_version"
            java.lang.String r2 = "1.0.0"
            r0.put(r1, r2)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            java.lang.String r2 = "log_v"
            java.lang.String r3 = "1.0"
            r1.put(r2, r3)
            java.lang.String r5 = r4.a(r5, r0, r1)
            return r5
    }

    @Override
    public java.lang.String a(com.alipay.sdk.m.s.a r1, java.lang.String r2, org.json.JSONObject r3) {
            r0 = this;
            return r2
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> a(boolean r2, java.lang.String r3) {
            r1 = this;
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r0 = "msp-gzip"
            r3.put(r0, r2)
            java.lang.String r2 = "content-type"
            java.lang.String r0 = "application/octet-stream"
            r3.put(r2, r0)
            java.lang.String r2 = "des-mode"
            java.lang.String r0 = "CBC"
            r3.put(r2, r0)
            return r3
    }

    @Override
    public org.json.JSONObject a() throws org.json.JSONException {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public boolean c() {
            r1 = this;
            r0 = 0
            return r0
    }
}

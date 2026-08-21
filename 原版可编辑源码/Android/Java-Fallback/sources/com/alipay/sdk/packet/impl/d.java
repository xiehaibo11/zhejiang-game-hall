package com.alipay.sdk.packet.impl;

public class d extends com.alipay.sdk.packet.e {
    public static final java.lang.String t = "log_v";

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.alipay.sdk.packet.b a(android.content.Context r3, java.lang.String r4) throws java.lang.Throwable {
            r2 = this;
            java.lang.String r0 = "https://mcgw.alipay.com/sdklog.do"
            r1 = 1
            com.alipay.sdk.packet.b r3 = r2.a(r3, r4, r0, r1)
            return r3
    }

    @Override
    protected java.lang.String a(java.lang.String r1, org.json.JSONObject r2) {
            r0 = this;
            return r1
    }

    @Override
    protected java.util.Map<java.lang.String, java.lang.String> a(boolean r2, java.lang.String r3) {
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
    protected org.json.JSONObject a() throws org.json.JSONException {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected java.lang.String c() throws org.json.JSONException {
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
            java.lang.String r0 = r4.a(r0, r1)
            return r0
    }
}

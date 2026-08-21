package com.alipay.sdk.packet.impl;

public class c extends com.alipay.sdk.packet.e {
    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected org.json.JSONObject a() throws org.json.JSONException {
            r2 = this;
            java.lang.String r0 = "cashier"
            java.lang.String r1 = "gentid"
            org.json.JSONObject r0 = com.alipay.sdk.packet.e.a(r0, r1)
            return r0
    }

    @Override
    protected java.lang.String b() {
            r1 = this;
            java.lang.String r0 = "5.0.0"
            return r0
    }
}

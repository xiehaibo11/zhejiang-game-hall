package com.alipay.sdk.m.q;

public class b extends com.alipay.sdk.m.p.e {
    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String a(com.alipay.sdk.m.s.a r3, java.util.HashMap<java.lang.String, java.lang.String> r4, java.util.HashMap<java.lang.String, java.lang.String> r5) throws org.json.JSONException {
            r2 = this;
            if (r5 != 0) goto L7
            java.util.HashMap r5 = new java.util.HashMap
            r5.<init>()
        L7:
            java.util.HashMap r0 = com.alipay.sdk.m.u.a.a(r3)
            r5.putAll(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "cf "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "mspl"
            com.alipay.sdk.m.u.e.d(r1, r0)
            java.lang.String r3 = super.a(r3, r4, r5)
            return r3
    }

    @Override
    public org.json.JSONObject a() throws org.json.JSONException {
            r2 = this;
            java.lang.String r0 = "sdkConfig"
            java.lang.String r1 = "obtain"
            org.json.JSONObject r0 = com.alipay.sdk.m.p.e.a(r0, r1)
            return r0
    }

    @Override
    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = "5.0.0"
            return r0
    }

    @Override
    public boolean c() {
            r1 = this;
            r0 = 1
            return r0
    }
}

package com.alipay.sdk.authjs;

class f extends java.util.TimerTask {
    final com.alipay.sdk.authjs.a a;
    final com.alipay.sdk.authjs.d b;

    f(com.alipay.sdk.authjs.d r1, com.alipay.sdk.authjs.a r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "toastCallBack"
            java.lang.String r2 = "true"
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lc
        Lc:
            com.alipay.sdk.authjs.a r1 = new com.alipay.sdk.authjs.a
            java.lang.String r2 = "callback"
            r1.<init>(r2)
            com.alipay.sdk.authjs.a r2 = r3.a
            java.lang.String r2 = r2.b()
            r1.a(r2)
            r1.a(r0)
            com.alipay.sdk.authjs.d r0 = r3.b
            com.alipay.sdk.authjs.c r0 = com.alipay.sdk.authjs.d.a(r0)
            r0.a(r1)
            return
    }
}

package com.alipay.sdk.authjs;

class e implements java.lang.Runnable {
    final com.alipay.sdk.authjs.a a;
    final com.alipay.sdk.authjs.d b;

    e(com.alipay.sdk.authjs.d r1, com.alipay.sdk.authjs.a r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r4 = this;
            com.alipay.sdk.authjs.d r0 = r4.b
            com.alipay.sdk.authjs.a r1 = r4.a
            com.alipay.sdk.authjs.a$a r0 = com.alipay.sdk.authjs.d.a(r0, r1)
            com.alipay.sdk.authjs.a$a r1 = com.alipay.sdk.authjs.a.a.a
            if (r0 == r1) goto L18
            com.alipay.sdk.authjs.d r1 = r4.b     // Catch: org.json.JSONException -> L18
            com.alipay.sdk.authjs.a r2 = r4.a     // Catch: org.json.JSONException -> L18
            java.lang.String r2 = r2.b()     // Catch: org.json.JSONException -> L18
            r3 = 1
            com.alipay.sdk.authjs.d.a(r1, r2, r0, r3)     // Catch: org.json.JSONException -> L18
        L18:
            return
    }
}

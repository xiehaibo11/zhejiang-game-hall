package com.alipay.sdk.auth;

class c implements java.lang.Runnable {
    final java.lang.String a;
    final com.alipay.sdk.auth.AuthActivity b;

    c(com.alipay.sdk.auth.AuthActivity r1, java.lang.String r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r3 = this;
            com.alipay.sdk.auth.AuthActivity r0 = r3.b     // Catch: java.lang.Exception -> L1c
            android.webkit.WebView r0 = com.alipay.sdk.auth.AuthActivity.f(r0)     // Catch: java.lang.Exception -> L1c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1c
            r1.<init>()     // Catch: java.lang.Exception -> L1c
            java.lang.String r2 = "javascript:"
            r1.append(r2)     // Catch: java.lang.Exception -> L1c
            java.lang.String r2 = r3.a     // Catch: java.lang.Exception -> L1c
            r1.append(r2)     // Catch: java.lang.Exception -> L1c
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L1c
            r0.loadUrl(r1)     // Catch: java.lang.Exception -> L1c
        L1c:
            return
    }
}

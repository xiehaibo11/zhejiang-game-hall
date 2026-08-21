package com.alipay.sdk.auth;

class f implements android.content.DialogInterface.OnClickListener {
    final com.alipay.sdk.auth.d a;

    f(com.alipay.sdk.auth.d r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void onClick(android.content.DialogInterface r1, int r2) {
            r0 = this;
            com.alipay.sdk.auth.d r1 = r0.a
            android.webkit.SslErrorHandler r1 = r1.a
            r1.cancel()
            com.alipay.sdk.auth.d r1 = r0.a
            com.alipay.sdk.auth.AuthActivity$c r1 = r1.b
            com.alipay.sdk.auth.AuthActivity r1 = r1.a
            r2 = 0
            com.alipay.sdk.auth.AuthActivity.b(r1, r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            com.alipay.sdk.auth.d r2 = r0.a
            com.alipay.sdk.auth.AuthActivity$c r2 = r2.b
            com.alipay.sdk.auth.AuthActivity r2 = r2.a
            java.lang.String r2 = com.alipay.sdk.auth.AuthActivity.b(r2)
            r1.append(r2)
            java.lang.String r2 = "?resultCode=150"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.alipay.sdk.auth.d r2 = r0.a
            com.alipay.sdk.auth.AuthActivity$c r2 = r2.b
            com.alipay.sdk.auth.AuthActivity r2 = r2.a
            com.alipay.sdk.auth.g.a(r2, r1)
            com.alipay.sdk.auth.d r1 = r0.a
            com.alipay.sdk.auth.AuthActivity$c r1 = r1.b
            com.alipay.sdk.auth.AuthActivity r1 = r1.a
            r1.finish()
            return
    }
}

package com.alipay.sdk.app;

class e implements android.content.DialogInterface.OnClickListener {
    final com.alipay.sdk.app.c a;

    e(com.alipay.sdk.app.c r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void onClick(android.content.DialogInterface r1, int r2) {
            r0 = this;
            com.alipay.sdk.app.c r1 = r0.a
            android.webkit.SslErrorHandler r1 = r1.b
            r1.cancel()
            com.alipay.sdk.app.c r1 = r0.a
            com.alipay.sdk.app.b r1 = r1.c
            r2 = 0
            com.alipay.sdk.app.b.a(r1, r2)
            java.lang.String r1 = com.alipay.sdk.app.j.c()
            com.alipay.sdk.app.j.a(r1)
            com.alipay.sdk.app.c r1 = r0.a
            android.app.Activity r1 = r1.a
            r1.finish()
            return
    }
}

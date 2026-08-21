package com.alipay.sdk.app;

class d implements android.content.DialogInterface.OnClickListener {
    final com.alipay.sdk.app.c a;

    d(com.alipay.sdk.app.c r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void onClick(android.content.DialogInterface r2, int r3) {
            r1 = this;
            com.alipay.sdk.app.c r3 = r1.a
            com.alipay.sdk.app.b r3 = r3.c
            r0 = 1
            com.alipay.sdk.app.b.a(r3, r0)
            com.alipay.sdk.app.c r3 = r1.a
            android.webkit.SslErrorHandler r3 = r3.b
            r3.proceed()
            r2.dismiss()
            return
    }
}

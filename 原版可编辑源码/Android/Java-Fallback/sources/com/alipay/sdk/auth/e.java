package com.alipay.sdk.auth;

class e implements android.content.DialogInterface.OnClickListener {
    final com.alipay.sdk.auth.d a;

    e(com.alipay.sdk.auth.d r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void onClick(android.content.DialogInterface r2, int r3) {
            r1 = this;
            com.alipay.sdk.auth.d r3 = r1.a
            com.alipay.sdk.auth.AuthActivity$c r3 = r3.b
            com.alipay.sdk.auth.AuthActivity r3 = r3.a
            r0 = 1
            com.alipay.sdk.auth.AuthActivity.b(r3, r0)
            com.alipay.sdk.auth.d r3 = r1.a
            android.webkit.SslErrorHandler r3 = r3.a
            r3.proceed()
            r2.dismiss()
            return
    }
}

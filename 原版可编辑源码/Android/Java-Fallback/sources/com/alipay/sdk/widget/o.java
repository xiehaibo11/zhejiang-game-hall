package com.alipay.sdk.widget;

class o implements android.content.DialogInterface.OnClickListener {
    final com.alipay.sdk.widget.n a;

    o(com.alipay.sdk.widget.n r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void onClick(android.content.DialogInterface r2, int r3) {
            r1 = this;
            com.alipay.sdk.widget.n r3 = r1.a
            com.alipay.sdk.widget.j r3 = r3.b
            r0 = 1
            com.alipay.sdk.widget.j.b(r3, r0)
            com.alipay.sdk.widget.n r3 = r1.a
            android.webkit.SslErrorHandler r3 = r3.a
            r3.proceed()
            r2.dismiss()
            return
    }
}

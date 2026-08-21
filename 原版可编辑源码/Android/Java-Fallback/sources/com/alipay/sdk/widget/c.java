package com.alipay.sdk.widget;

class c implements java.lang.Runnable {
    final com.alipay.sdk.widget.a a;

    c(com.alipay.sdk.widget.a r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r2 = this;
            com.alipay.sdk.widget.a r0 = r2.a
            com.alipay.sdk.widget.a$a r0 = com.alipay.sdk.widget.a.c(r0)
            if (r0 == 0) goto L2c
            com.alipay.sdk.widget.a r0 = r2.a
            com.alipay.sdk.widget.a$a r0 = com.alipay.sdk.widget.a.c(r0)
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto L2c
            com.alipay.sdk.widget.a r0 = r2.a     // Catch: java.lang.Exception -> L28
            android.os.Handler r0 = com.alipay.sdk.widget.a.e(r0)     // Catch: java.lang.Exception -> L28
            r1 = 1
            r0.removeMessages(r1)     // Catch: java.lang.Exception -> L28
            com.alipay.sdk.widget.a r0 = r2.a     // Catch: java.lang.Exception -> L28
            com.alipay.sdk.widget.a$a r0 = com.alipay.sdk.widget.a.c(r0)     // Catch: java.lang.Exception -> L28
            r0.dismiss()     // Catch: java.lang.Exception -> L28
            goto L2c
        L28:
            r0 = move-exception
            com.alipay.sdk.util.c.a(r0)
        L2c:
            return
    }
}

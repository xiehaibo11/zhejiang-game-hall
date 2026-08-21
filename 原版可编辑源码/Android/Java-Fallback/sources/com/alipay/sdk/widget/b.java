package com.alipay.sdk.widget;

class b implements java.lang.Runnable {
    final com.alipay.sdk.widget.a a;

    b(com.alipay.sdk.widget.a r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r4 = this;
            com.alipay.sdk.widget.a r0 = r4.a
            com.alipay.sdk.widget.a$a r0 = com.alipay.sdk.widget.a.c(r0)
            if (r0 != 0) goto L25
            com.alipay.sdk.widget.a r0 = r4.a
            com.alipay.sdk.widget.a$a r1 = new com.alipay.sdk.widget.a$a
            android.app.Activity r2 = com.alipay.sdk.widget.a.a(r0)
            r1.<init>(r0, r2)
            com.alipay.sdk.widget.a.a(r0, r1)
            com.alipay.sdk.widget.a r0 = r4.a
            com.alipay.sdk.widget.a$a r0 = com.alipay.sdk.widget.a.c(r0)
            com.alipay.sdk.widget.a r1 = r4.a
            boolean r1 = com.alipay.sdk.widget.a.d(r1)
            r0.setCancelable(r1)
        L25:
            com.alipay.sdk.widget.a r0 = r4.a     // Catch: java.lang.Exception -> L47
            com.alipay.sdk.widget.a$a r0 = com.alipay.sdk.widget.a.c(r0)     // Catch: java.lang.Exception -> L47
            boolean r0 = r0.isShowing()     // Catch: java.lang.Exception -> L47
            if (r0 != 0) goto L4b
            com.alipay.sdk.widget.a r0 = r4.a     // Catch: java.lang.Exception -> L47
            com.alipay.sdk.widget.a$a r0 = com.alipay.sdk.widget.a.c(r0)     // Catch: java.lang.Exception -> L47
            r0.show()     // Catch: java.lang.Exception -> L47
            com.alipay.sdk.widget.a r0 = r4.a     // Catch: java.lang.Exception -> L47
            android.os.Handler r0 = com.alipay.sdk.widget.a.e(r0)     // Catch: java.lang.Exception -> L47
            r1 = 1
            r2 = 15000(0x3a98, double:7.411E-320)
            r0.sendEmptyMessageDelayed(r1, r2)     // Catch: java.lang.Exception -> L47
            goto L4b
        L47:
            r0 = move-exception
            com.alipay.sdk.util.c.a(r0)
        L4b:
            return
    }
}

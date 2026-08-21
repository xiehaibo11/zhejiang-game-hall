package com.alipay.sdk.app;

class g implements java.lang.Runnable {
    final java.lang.String a;
    final boolean b;
    final com.alipay.sdk.app.H5PayCallback c;
    final com.alipay.sdk.app.PayTask d;

    g(com.alipay.sdk.app.PayTask r1, java.lang.String r2, boolean r3, com.alipay.sdk.app.H5PayCallback r4) {
            r0 = this;
            r0.d = r1
            r0.a = r2
            r0.b = r3
            r0.c = r4
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r3 = this;
            com.alipay.sdk.app.PayTask r0 = r3.d
            java.lang.String r1 = r3.a
            boolean r2 = r3.b
            com.alipay.sdk.util.H5PayResultModel r0 = r0.h5Pay(r1, r2)
            com.alipay.sdk.app.H5PayCallback r1 = r3.c
            r1.onPayResult(r0)
            return
    }
}

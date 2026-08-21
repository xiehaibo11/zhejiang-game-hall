package com.alipay.sdk.util;

class g implements com.alipay.sdk.app.AlipayResultActivity.b {
    final java.util.concurrent.CountDownLatch a;
    final com.alipay.sdk.util.e b;

    g(com.alipay.sdk.util.e r1, java.util.concurrent.CountDownLatch r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void a(int r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            com.alipay.sdk.util.e r0 = r1.b
            java.lang.String r2 = com.alipay.sdk.app.j.a(r2, r3, r4)
            com.alipay.sdk.util.e.a(r0, r2)
            java.util.concurrent.CountDownLatch r2 = r1.a
            r2.countDown()
            return
    }
}

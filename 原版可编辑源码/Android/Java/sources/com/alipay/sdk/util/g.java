package com.alipay.sdk.util;

import com.alipay.sdk.app.AlipayResultActivity;
import java.util.concurrent.CountDownLatch;

class g implements AlipayResultActivity.b {
    final CountDownLatch a;
    final e b;

    g(e eVar, CountDownLatch countDownLatch) {
        this.b = eVar;
        this.a = countDownLatch;
    }

    @Override
    public void a(int i, String str, String str2) {
        this.b.i = com.alipay.sdk.app.j.a(i, str, str2);
        this.a.countDown();
    }
}

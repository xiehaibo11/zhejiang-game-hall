package com.alipay.sdk.util;

import com.alipay.sdk.app.AlipayResultActivity;
import java.util.concurrent.CountDownLatch;

/* JADX INFO: loaded from: classes.dex */
class g implements AlipayResultActivity.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ CountDownLatch f1318a;
    final /* synthetic */ e b;

    g(e eVar, CountDownLatch countDownLatch) {
        this.b = eVar;
        this.f1318a = countDownLatch;
    }

    @Override // com.alipay.sdk.app.AlipayResultActivity.b
    public void a(int i, String str, String str2) {
        this.b.i = com.alipay.sdk.app.j.a(i, str, str2);
        this.f1318a.countDown();
    }
}

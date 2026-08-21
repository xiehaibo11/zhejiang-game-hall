package com.alipay.android.phone.mrpc.core;

public final class n implements java.util.concurrent.ThreadFactory {
    public final java.util.concurrent.atomic.AtomicInteger a;

    public n() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 1
            r0.<init>(r1)
            r2.a = r0
            return
    }

    @Override
    public final java.lang.Thread newThread(java.lang.Runnable r4) {
            r3 = this;
            java.lang.Thread r0 = new java.lang.Thread
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "com.alipay.mobile.common.transport.http.HttpManager.HttpWorker #"
            r1.<init>(r2)
            java.util.concurrent.atomic.AtomicInteger r2 = r3.a
            int r2 = r2.getAndIncrement()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r4, r1)
            r4 = 4
            r0.setPriority(r4)
            return r0
    }
}

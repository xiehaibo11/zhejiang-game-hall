package com.huawei.hms.framework.network.grs.c;

class d implements java.util.concurrent.Callable<com.huawei.hms.framework.network.grs.c.f> {
    final java.util.concurrent.ExecutorService a;
    final java.lang.String b;
    final com.huawei.hms.framework.network.grs.a.c c;
    final com.huawei.hms.framework.network.grs.c.e d;

    d(com.huawei.hms.framework.network.grs.c.e r1, java.util.concurrent.ExecutorService r2, java.lang.String r3, com.huawei.hms.framework.network.grs.a.c r4) {
            r0 = this;
            r0.d = r1
            r0.a = r2
            r0.b = r3
            r0.c = r4
            r0.<init>()
            return
    }

    @Override
    public com.huawei.hms.framework.network.grs.c.f call() {
            r4 = this;
            com.huawei.hms.framework.network.grs.c.e r0 = r4.d
            java.util.concurrent.ExecutorService r1 = r4.a
            java.lang.String r2 = r4.b
            com.huawei.hms.framework.network.grs.a.c r3 = r4.c
            com.huawei.hms.framework.network.grs.c.f r0 = com.huawei.hms.framework.network.grs.c.e.a(r0, r1, r2, r3)
            return r0
    }

    @Override
    public com.huawei.hms.framework.network.grs.c.f call() {
            r1 = this;
            com.huawei.hms.framework.network.grs.c.f r0 = r1.call()
            return r0
    }
}

package com.huawei.hms.framework.network.grs.c;

class k implements java.util.concurrent.Callable<com.huawei.hms.framework.network.grs.c.f> {
    final com.huawei.hms.framework.network.grs.c.b.c a;
    final java.lang.String b;
    final com.huawei.hms.framework.network.grs.a.c c;
    final com.huawei.hms.framework.network.grs.c.m d;

    k(com.huawei.hms.framework.network.grs.c.m r1, com.huawei.hms.framework.network.grs.c.b.c r2, java.lang.String r3, com.huawei.hms.framework.network.grs.a.c r4) {
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
            com.huawei.hms.framework.network.grs.c.e r0 = new com.huawei.hms.framework.network.grs.c.e
            com.huawei.hms.framework.network.grs.c.b.c r1 = r4.a
            com.huawei.hms.framework.network.grs.c.m r2 = r4.d
            com.huawei.hms.framework.network.grs.a.a r2 = com.huawei.hms.framework.network.grs.c.m.b(r2)
            r0.<init>(r1, r2)
            com.huawei.hms.framework.network.grs.c.m r1 = r4.d
            java.util.concurrent.ExecutorService r1 = com.huawei.hms.framework.network.grs.c.m.a(r1)
            java.lang.String r2 = r4.b
            com.huawei.hms.framework.network.grs.a.c r3 = r4.c
            com.huawei.hms.framework.network.grs.c.f r0 = r0.a(r1, r2, r3)
            return r0
    }

    @Override
    public com.huawei.hms.framework.network.grs.c.f call() {
            r1 = this;
            com.huawei.hms.framework.network.grs.c.f r0 = r1.call()
            return r0
    }
}

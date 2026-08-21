package com.huawei.hms.framework.network.grs.c.b;

public class b {
    private java.util.concurrent.Future<com.huawei.hms.framework.network.grs.c.f> a;
    private long b;

    public b(java.util.concurrent.Future<com.huawei.hms.framework.network.grs.c.f> r3) {
            r2 = this;
            r2.<init>()
            r2.a = r3
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2.b = r0
            return
    }

    public java.util.concurrent.Future<com.huawei.hms.framework.network.grs.c.f> a() {
            r1 = this;
            java.util.concurrent.Future<com.huawei.hms.framework.network.grs.c.f> r0 = r1.a
            return r0
    }

    public boolean b() {
            r4 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r4.b
            long r0 = r0 - r2
            r2 = 300000(0x493e0, double:1.482197E-318)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }
}

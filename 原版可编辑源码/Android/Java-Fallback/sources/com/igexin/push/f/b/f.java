package com.igexin.push.f.b;

public class f extends com.igexin.push.f.b.g {
    private static com.igexin.push.f.b.f a;
    private long b;
    private long c;

    private f() {
            r2 = this;
            r0 = 1200000(0x124f80, double:5.92879E-318)
            r2.<init>(r0)
            r0 = 1
            r2.o = r0
            long r0 = java.lang.System.currentTimeMillis()
            r2.b = r0
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2.c = r0
            return
    }

    public static synchronized com.igexin.push.f.b.f i() {
            java.lang.Class<com.igexin.push.f.b.f> r0 = com.igexin.push.f.b.f.class
            monitor-enter(r0)
            com.igexin.push.f.b.f r1 = com.igexin.push.f.b.f.a     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.igexin.push.f.b.f r1 = new com.igexin.push.f.b.f     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.igexin.push.f.b.f.a = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.igexin.push.f.b.f r1 = com.igexin.push.f.b.f.a     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public void a(long r1) {
            r0 = this;
            r0.c = r1
            return
    }

    @Override
    public final int b_() {
            r1 = this;
            r0 = -2147483641(0xffffffff80000007, float:-9.8E-45)
            return r0
    }

    @Override
    public void c() {
            r0 = this;
            super.c()
            return
    }

    @Override
    public void d() {
            r0 = this;
            return
    }

    @Override
    protected void d_() {
            r5 = this;
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            r0.l()
            long r0 = java.lang.System.currentTimeMillis()
            boolean r0 = com.igexin.push.util.a.a(r0)
            boolean r1 = com.igexin.push.util.a.a()
            boolean r2 = com.igexin.push.util.a.f()
            com.igexin.push.core.d.i = r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "RTTask|networkAvailable = "
            r2.append(r3)
            boolean r3 = com.igexin.push.core.d.i
            r2.append(r3)
            java.lang.String r3 = ",sdkOnline = "
            r2.append(r3)
            boolean r3 = com.igexin.push.core.d.n
            r2.append(r3)
            java.lang.String r3 = ", "
            r2.append(r3)
            java.lang.String r3 = "pushOn ="
            r2.append(r3)
            boolean r3 = com.igexin.push.core.d.k
            r2.append(r3)
            java.lang.String r3 = ", isSilentTime= "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r3 = ", blockEndTime= "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            r3 = 0
            java.lang.Object[] r4 = new java.lang.Object[r3]
            com.igexin.b.a.c.b.a(r2, r4)
            boolean r2 = com.igexin.push.core.d.i
            if (r2 == 0) goto Ld7
            boolean r2 = com.igexin.push.core.d.k
            if (r2 == 0) goto Ld7
            boolean r2 = com.igexin.push.core.d.n
            if (r2 != 0) goto Ld7
            if (r0 != 0) goto Ld7
            if (r1 != 0) goto L6c
            goto Ld7
        L6c:
            boolean r0 = com.igexin.push.util.a.g()
            if (r0 != 0) goto L8a
            java.lang.String r0 = com.igexin.push.core.d.u
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L8a
            r0 = 900000(0xdbba0, double:4.44659E-318)
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            r5.a(r0, r2)
            java.lang.Object[] r0 = new java.lang.Object[r3]
            java.lang.String r1 = "RTTask|date is error, set connect interval = 15min"
            com.igexin.b.a.c.b.a(r1, r0)
            return
        L8a:
            java.lang.Object[] r0 = new java.lang.Object[r3]
            java.lang.String r1 = "RTTask reconnect timer task isOnline = false, try login..."
            com.igexin.b.a.c.b.a(r1, r0)
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r5.b
            long r0 = r0 - r2
            r2 = 2500(0x9c4, double:1.235E-320)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto La4
            int r0 = com.igexin.push.core.d.q
            int r0 = r0 + 1
            com.igexin.push.core.d.q = r0
        La4:
            int r0 = com.igexin.push.core.d.q
            r1 = 30
            if (r0 <= r1) goto Lc6
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r5.c
            long r0 = r0 - r2
            long r0 = java.lang.Math.abs(r0)
            double r0 = (double) r0
            r2 = 4679684215535566848(0x40f1940000000000, double:72000.0)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto Lc6
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()
            r0.d()
        Lc6:
            long r0 = java.lang.System.currentTimeMillis()
            r5.b = r0
            com.igexin.push.core.m r0 = com.igexin.push.core.m.a()
            r0.b()
            r0 = 1800000(0x1b7740, double:8.89318E-318)
            goto Le1
        Ld7:
            java.lang.Object[] r0 = new java.lang.Object[r3]
            java.lang.String r1 = "RTTask reconnect timer task stop, connect interval= 20min #######"
            com.igexin.b.a.c.b.a(r1, r0)
            r0 = 1200000(0x124f80, double:5.92879E-318)
        Le1:
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            r5.a(r0, r2)
            return
    }

    public void j() {
            r4 = this;
            long r0 = com.igexin.push.core.d.F
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "RTTask|refreshDelayTime, delay = "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            r3 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]
            com.igexin.b.a.c.b.a(r2, r3)
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            r4.a(r0, r2)
            return
    }
}

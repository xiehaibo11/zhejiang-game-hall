package com.mbridge.msdk.foundation.same.net;

public final class a {
    private static long a;
    private static long b;
    private static long c;

    static class 1 {
    }

    private static class a {
        private static com.mbridge.msdk.foundation.same.net.a a;

        static {
                com.mbridge.msdk.foundation.same.net.a r0 = new com.mbridge.msdk.foundation.same.net.a
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.foundation.same.net.a.a.a = r0
                return
        }

        static com.mbridge.msdk.foundation.same.net.a a() {
                com.mbridge.msdk.foundation.same.net.a r0 = com.mbridge.msdk.foundation.same.net.a.a.a
                return r0
        }
    }

    static {
            return
    }

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    a(com.mbridge.msdk.foundation.same.net.a.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.foundation.same.net.a a() {
            com.mbridge.msdk.foundation.same.net.a r0 = com.mbridge.msdk.foundation.same.net.a.a.a()
            return r0
    }

    public final synchronized void b() {
            r4 = this;
            monitor-enter(r4)
            long r0 = com.mbridge.msdk.foundation.same.net.a.a     // Catch: java.lang.Throwable -> L17
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L15
            long r0 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L17
            com.mbridge.msdk.foundation.same.net.a.a = r0     // Catch: java.lang.Throwable -> L17
            long r0 = android.net.TrafficStats.getTotalRxBytes()     // Catch: java.lang.Throwable -> L17
            com.mbridge.msdk.foundation.same.net.a.c = r0     // Catch: java.lang.Throwable -> L17
        L15:
            monitor-exit(r4)
            return
        L17:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public final synchronized void c() {
            r8 = this;
            monitor-enter(r8)
            long r0 = com.mbridge.msdk.foundation.same.net.a.a     // Catch: java.lang.Throwable -> L47
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L45
            long r0 = com.mbridge.msdk.foundation.same.net.a.c     // Catch: java.lang.Throwable -> L47
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L45
            long r0 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L47
            long r4 = com.mbridge.msdk.foundation.same.net.a.a     // Catch: java.lang.Throwable -> L47
            long r0 = r0 - r4
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L42
            long r4 = android.net.TrafficStats.getTotalRxBytes()     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L47
            r6 = -1
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 == 0) goto L3b
            long r4 = android.net.TrafficStats.getTotalRxBytes()     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L47
            long r6 = com.mbridge.msdk.foundation.same.net.a.c     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L47
            long r4 = r4 - r6
            r6 = 1000(0x3e8, double:4.94E-321)
            long r4 = r4 * r6
            long r4 = r4 / r0
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 != 0) goto L38
            r0 = 1
            com.mbridge.msdk.foundation.same.net.a.b = r0     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L47
            goto L42
        L38:
            com.mbridge.msdk.foundation.same.net.a.b = r4     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L47
            goto L42
        L3b:
            com.mbridge.msdk.foundation.same.net.a.b = r2     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L47
            goto L42
        L3e:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L47
        L42:
            r8.d()     // Catch: java.lang.Throwable -> L47
        L45:
            monitor-exit(r8)
            return
        L47:
            r0 = move-exception
            monitor-exit(r8)
            throw r0
    }

    public final synchronized void d() {
            r2 = this;
            monitor-enter(r2)
            r0 = 0
            com.mbridge.msdk.foundation.same.net.a.c = r0     // Catch: java.lang.Throwable -> L9
            com.mbridge.msdk.foundation.same.net.a.a = r0     // Catch: java.lang.Throwable -> L9
            monitor-exit(r2)
            return
        L9:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final long e() {
            r2 = this;
            long r0 = com.mbridge.msdk.foundation.same.net.a.b
            return r0
    }
}

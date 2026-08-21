package com.mbridge.msdk.rover;

public class b {
    private static com.mbridge.msdk.rover.b d;
    android.content.Context a;
    long b;
    private android.os.Handler c;



    private b() {
            r2 = this;
            r2.<init>()
            r0 = 259200000(0xf731400, double:1.280618154E-315)
            r2.b = r0
            com.mbridge.msdk.rover.b$1 r0 = new com.mbridge.msdk.rover.b$1
            r0.<init>(r2)
            r2.c = r0
            return
    }

    public static com.mbridge.msdk.rover.b a() {
            com.mbridge.msdk.rover.b r0 = com.mbridge.msdk.rover.b.d
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.rover.b> r0 = com.mbridge.msdk.rover.b.class
            monitor-enter(r0)
            com.mbridge.msdk.rover.b r1 = com.mbridge.msdk.rover.b.d     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.rover.b r1 = new com.mbridge.msdk.rover.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.rover.b.d = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.mbridge.msdk.rover.b r0 = com.mbridge.msdk.rover.b.d
            return r0
    }

    static void a(com.mbridge.msdk.rover.b r4) {
            long r0 = java.lang.System.currentTimeMillis()
            android.content.Context r2 = r4.a
            java.lang.String r3 = com.mbridge.msdk.rover.a.d
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            com.mbridge.msdk.foundation.tools.ag.a(r2, r3, r0)
            com.mbridge.msdk.rover.g r0 = new com.mbridge.msdk.rover.g
            android.content.Context r1 = r4.a
            r0.<init>(r1)
            com.mbridge.msdk.foundation.same.net.g.d r1 = new com.mbridge.msdk.foundation.same.net.g.d
            r1.<init>()
            com.mbridge.msdk.rover.b$2 r2 = new com.mbridge.msdk.rover.b$2
            r2.<init>(r4)
            com.mbridge.msdk.foundation.same.net.f.d r4 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r4 = r4.A
            r3 = 1
            r0.get(r3, r4, r1, r2)
            return
    }

    private boolean c() {
            r10 = this;
            android.content.Context r0 = r10.a
            r1 = 0
            if (r0 == 0) goto L45
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Exception -> L41
            android.content.Context r2 = r10.a     // Catch: java.lang.Exception -> L41
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L41
            android.content.pm.PackageInfo r0 = r0.getPackageInfo(r2, r1)     // Catch: java.lang.Exception -> L41
            long r2 = r0.lastUpdateTime     // Catch: java.lang.Exception -> L41
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L41
            long r6 = r4 - r2
            long r8 = r10.b     // Catch: java.lang.Exception -> L41
            int r0 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r0 <= 0) goto L22
            r1 = 1
        L22:
            java.lang.String r0 = ""
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L41
            r6.<init>()     // Catch: java.lang.Exception -> L41
            java.lang.String r7 = "currentTime="
            r6.append(r7)     // Catch: java.lang.Exception -> L41
            r6.append(r4)     // Catch: java.lang.Exception -> L41
            java.lang.String r4 = ",lastUpdateTime:"
            r6.append(r4)     // Catch: java.lang.Exception -> L41
            r6.append(r2)     // Catch: java.lang.Exception -> L41
            java.lang.String r2 = r6.toString()     // Catch: java.lang.Exception -> L41
            com.mbridge.msdk.foundation.tools.z.a(r0, r2)     // Catch: java.lang.Exception -> L41
            goto L45
        L41:
            r0 = move-exception
            r0.printStackTrace()
        L45:
            return r1
    }

    public final void a(android.content.Context r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final void b() {
            r12 = this;
            android.content.Context r0 = r12.a
            if (r0 != 0) goto Lc
            java.lang.String r0 = "RoverController"
            java.lang.String r1 = "Context is null"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            return
        Lc:
            boolean r0 = r12.c()
            if (r0 == 0) goto L6a
            android.content.Context r0 = r12.a
            java.lang.String r1 = com.mbridge.msdk.rover.a.d
            r2 = 0
            java.lang.Long r4 = java.lang.Long.valueOf(r2)
            java.lang.Object r0 = com.mbridge.msdk.foundation.tools.ag.b(r0, r1, r4)
            boolean r1 = r0 instanceof java.lang.Long
            r4 = 1
            if (r1 == 0) goto L2d
            java.lang.Long r0 = (java.lang.Long) r0
            long r0 = r0.longValue()
            goto L2e
        L2d:
            r0 = r4
        L2e:
            long r6 = java.lang.System.currentTimeMillis()
            int r8 = com.mbridge.msdk.rover.a.c
            com.mbridge.msdk.c.b r9 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r10 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r10 = r10.k()
            com.mbridge.msdk.c.a r9 = r9.b(r10)
            if (r9 == 0) goto L53
            long r10 = r9.S()
            int r2 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r2 <= 0) goto L53
            long r2 = r9.S()
            int r8 = (int) r2
        L53:
            long r6 = r6 - r0
            long r2 = (long) r8
            int r2 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            r3 = 0
            if (r2 <= 0) goto L60
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto L60
            r0 = 1
            goto L61
        L60:
            r0 = r3
        L61:
            if (r0 == 0) goto L6a
            android.os.Handler r0 = r12.c
            r1 = 30000(0x7530, double:1.4822E-319)
            r0.sendEmptyMessageDelayed(r3, r1)
        L6a:
            return
    }
}

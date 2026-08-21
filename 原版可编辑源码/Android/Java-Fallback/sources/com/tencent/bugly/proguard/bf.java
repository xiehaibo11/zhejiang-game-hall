package com.tencent.bugly.proguard;

public final class bf implements java.lang.Runnable {
    final android.os.Handler a;
    long b;
    boolean c;
    long d;
    private final java.lang.String e;
    private final java.util.List<com.tencent.bugly.proguard.ba> f;
    private final long g;

    bf(android.os.Handler r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1.f = r0
            r1.a = r2
            r1.e = r3
            r2 = 5000(0x1388, double:2.4703E-320)
            r1.b = r2
            r1.g = r2
            r2 = 1
            r1.c = r2
            return
    }

    private java.lang.Thread e() {
            r1 = this;
            android.os.Handler r0 = r1.a
            android.os.Looper r0 = r0.getLooper()
            java.lang.Thread r0 = r0.getThread()
            return r0
    }

    public final boolean a() {
            r6 = this;
            boolean r0 = r6.c
            if (r0 != 0) goto L13
            long r0 = android.os.SystemClock.uptimeMillis()
            long r2 = r6.d
            long r4 = r6.b
            long r2 = r2 + r4
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L13
            r0 = 1
            return r0
        L13:
            r0 = 0
            return r0
    }

    public final long b() {
            r4 = this;
            long r0 = android.os.SystemClock.uptimeMillis()
            long r2 = r4.d
            long r0 = r0 - r2
            return r0
    }

    public final java.util.List<com.tencent.bugly.proguard.ba> c() {
            r11 = this;
            long r0 = java.lang.System.currentTimeMillis()
            java.util.List<com.tencent.bugly.proguard.ba> r2 = r11.f
            monitor-enter(r2)
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L3d
            java.util.List<com.tencent.bugly.proguard.ba> r4 = r11.f     // Catch: java.lang.Throwable -> L3d
            int r4 = r4.size()     // Catch: java.lang.Throwable -> L3d
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L3d
            r4 = 0
        L13:
            java.util.List<com.tencent.bugly.proguard.ba> r5 = r11.f     // Catch: java.lang.Throwable -> L3d
            int r5 = r5.size()     // Catch: java.lang.Throwable -> L3d
            if (r4 >= r5) goto L3b
            java.util.List<com.tencent.bugly.proguard.ba> r5 = r11.f     // Catch: java.lang.Throwable -> L3d
            java.lang.Object r5 = r5.get(r4)     // Catch: java.lang.Throwable -> L3d
            com.tencent.bugly.proguard.ba r5 = (com.tencent.bugly.proguard.ba) r5     // Catch: java.lang.Throwable -> L3d
            boolean r6 = r5.e     // Catch: java.lang.Throwable -> L3d
            if (r6 != 0) goto L38
            long r6 = r5.b     // Catch: java.lang.Throwable -> L3d
            long r6 = r0 - r6
            r8 = 200000(0x30d40, double:9.8813E-319)
            int r10 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r10 >= 0) goto L38
            r3.add(r5)     // Catch: java.lang.Throwable -> L3d
            r6 = 1
            r5.e = r6     // Catch: java.lang.Throwable -> L3d
        L38:
            int r4 = r4 + 1
            goto L13
        L3b:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L3d
            return r3
        L3d:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L3d
            throw r0
    }

    public final void d() {
            r9 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r1 = 1024(0x400, float:1.435E-42)
            r0.<init>(r1)
            long r1 = java.lang.System.nanoTime()
            r3 = 0
            java.lang.Thread r4 = r9.e()     // Catch: java.lang.SecurityException -> L2e
            java.lang.StackTraceElement[] r4 = r4.getStackTrace()     // Catch: java.lang.SecurityException -> L2e
            int r5 = r4.length     // Catch: java.lang.SecurityException -> L2e
            if (r5 != 0) goto L1d
            java.lang.String r4 = "Thread does not have stack trace.\n"
            r0.append(r4)     // Catch: java.lang.SecurityException -> L2e
            goto L43
        L1d:
            int r5 = r4.length     // Catch: java.lang.SecurityException -> L2e
            r6 = 0
        L1f:
            if (r6 >= r5) goto L43
            r7 = r4[r6]     // Catch: java.lang.SecurityException -> L2e
            r0.append(r7)     // Catch: java.lang.SecurityException -> L2e
            java.lang.String r7 = "\n"
            r0.append(r7)     // Catch: java.lang.SecurityException -> L2e
            int r6 = r6 + 1
            goto L1f
        L2e:
            r4 = move-exception
            java.lang.String r5 = "getStackTrace() encountered:\n"
            r0.append(r5)
            java.lang.String r5 = r4.getMessage()
            r0.append(r5)
            java.lang.String r5 = "\n"
            r0.append(r5)
            com.tencent.bugly.proguard.al.a(r4)
        L43:
            long r4 = java.lang.System.nanoTime()
            com.tencent.bugly.proguard.ba r6 = new com.tencent.bugly.proguard.ba
            java.lang.String r0 = r0.toString()
            long r7 = java.lang.System.currentTimeMillis()
            r6.<init>(r0, r7)
            long r4 = r4 - r1
            r6.d = r4
            java.lang.Thread r0 = r9.e()
            java.lang.String r0 = r0.getName()
            if (r0 == 0) goto L62
            goto L64
        L62:
            java.lang.String r0 = ""
        L64:
            r6.a = r0
            java.util.List<com.tencent.bugly.proguard.ba> r0 = r9.f
            monitor-enter(r0)
        L69:
            java.util.List<com.tencent.bugly.proguard.ba> r1 = r9.f     // Catch: java.lang.Throwable -> L80
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L80
            r2 = 32
            if (r1 < r2) goto L79
            java.util.List<com.tencent.bugly.proguard.ba> r1 = r9.f     // Catch: java.lang.Throwable -> L80
            r1.remove(r3)     // Catch: java.lang.Throwable -> L80
            goto L69
        L79:
            java.util.List<com.tencent.bugly.proguard.ba> r1 = r9.f     // Catch: java.lang.Throwable -> L80
            r1.add(r6)     // Catch: java.lang.Throwable -> L80
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L80
            return
        L80:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L80
            throw r1
    }

    @Override
    public final void run() {
            r2 = this;
            r0 = 1
            r2.c = r0
            long r0 = r2.g
            r2.b = r0
            return
    }
}

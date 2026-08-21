package com.tencent.bugly.proguard;

public final class bg extends java.lang.Thread {
    public com.tencent.bugly.proguard.bf a;
    public boolean b;
    private boolean c;
    private boolean d;
    private boolean e;
    private int f;
    private com.tencent.bugly.proguard.bg.a g;

    public interface a {
    }

    public bg() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.c = r0
            r1 = 1
            r2.d = r1
            r2.e = r0
            r2.f = r1
            r2.b = r1
            return
    }

    private synchronized void a(com.tencent.bugly.proguard.bf r3) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.d     // Catch: java.lang.Throwable -> L20
            if (r0 == 0) goto L7
            monitor-exit(r2)
            return
        L7:
            boolean r0 = r2.e     // Catch: java.lang.Throwable -> L20
            if (r0 == 0) goto L1e
            boolean r3 = r3.a()     // Catch: java.lang.Throwable -> L20
            if (r3 != 0) goto L1e
            java.lang.String r3 = "Restart getting main stack trace."
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L20
            com.tencent.bugly.proguard.al.c(r3, r1)     // Catch: java.lang.Throwable -> L20
            r3 = 1
            r2.d = r3     // Catch: java.lang.Throwable -> L20
            r2.e = r0     // Catch: java.lang.Throwable -> L20
        L1e:
            monitor-exit(r2)
            return
        L20:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final boolean a() {
            r3 = this;
            r0 = 1
            r3.c = r0
            boolean r1 = r3.isAlive()
            r2 = 0
            if (r1 != 0) goto Lb
            return r2
        Lb:
            r3.interrupt()     // Catch: java.lang.Exception -> Lf
            goto L13
        Lf:
            r1 = move-exception
            com.tencent.bugly.proguard.al.b(r1)
        L13:
            java.lang.Object[] r1 = new java.lang.Object[r2]
            java.lang.String r2 = "MainHandlerChecker is reset to null."
            com.tencent.bugly.proguard.al.d(r2, r1)
            r1 = 0
            r3.a = r1
            return r0
    }

    public final boolean b() {
            r4 = this;
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.tencent.bugly.proguard.bf r1 = r4.a
            if (r1 == 0) goto L12
            r2 = 5000(0x1388, double:2.4703E-320)
            r1.b = r2
            goto L25
        L12:
            android.os.Looper r1 = r0.getLooper()
            java.lang.Thread r1 = r1.getThread()
            java.lang.String r1 = r1.getName()
            com.tencent.bugly.proguard.bf r2 = new com.tencent.bugly.proguard.bf
            r2.<init>(r0, r1)
            r4.a = r2
        L25:
            boolean r0 = r4.isAlive()
            r1 = 0
            if (r0 == 0) goto L2d
            return r1
        L2d:
            r4.start()     // Catch: java.lang.Exception -> L32
            r1 = 1
            goto L36
        L32:
            r0 = move-exception
            com.tencent.bugly.proguard.al.b(r0)
        L36:
            return r1
    }

    public final synchronized void c() {
            r2 = this;
            monitor-enter(r2)
            r0 = 0
            r2.d = r0     // Catch: java.lang.Throwable -> Ld
            java.lang.String r1 = "Record stack trace is disabled."
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> Ld
            com.tencent.bugly.proguard.al.c(r1, r0)     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r2)
            return
        Ld:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final synchronized void d() {
            r1 = this;
            monitor-enter(r1)
            r0 = 1
            r1.e = r0     // Catch: java.lang.Throwable -> L6
            monitor-exit(r1)
            return
        L6:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public final void run() {
            r10 = this;
            long r0 = java.lang.System.currentTimeMillis()
        L4:
            boolean r2 = r10.c
            if (r2 != 0) goto L9e
            com.tencent.bugly.proguard.bf r2 = r10.a     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            r3 = 0
            if (r2 != 0) goto L15
            java.lang.String r2 = "Main handler checker is null. Stop thread monitor."
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            com.tencent.bugly.proguard.al.c(r2, r3)     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            return
        L15:
            com.tencent.bugly.proguard.bf r2 = r10.a     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            boolean r4 = r2.c     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            if (r4 == 0) goto L28
            r2.c = r3     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            long r4 = android.os.SystemClock.uptimeMillis()     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            r2.d = r4     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            android.os.Handler r4 = r2.a     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            r4.post(r2)     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
        L28:
            r10.a(r2)     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            boolean r4 = r10.b     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            r5 = 1
            if (r4 == 0) goto L71
            boolean r4 = r10.d     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            if (r4 != 0) goto L35
            goto L71
        L35:
            long r6 = r2.b()     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            r8 = 1510(0x5e6, double:7.46E-321)
            int r4 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r4 <= 0) goto L71
            r8 = 199990(0x30d36, double:9.8808E-319)
            int r4 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r4 < 0) goto L47
            goto L71
        L47:
            r8 = 5010(0x1392, double:2.4753E-320)
            int r4 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r4 > 0) goto L58
            r10.f = r5     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            java.lang.String r4 = "timeSinceMsgSent in [2s, 5s], record stack"
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            com.tencent.bugly.proguard.al.c(r4, r3)     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            r3 = 1
            goto L71
        L58:
            int r4 = r10.f     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            int r4 = r4 + r5
            r10.f = r4     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            int r4 = r10.f     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            int r6 = r10.f     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            int r6 = r6 - r5
            r4 = r4 & r6
            if (r4 != 0) goto L66
            goto L67
        L66:
            r5 = 0
        L67:
            if (r5 == 0) goto L70
            java.lang.String r4 = "timeSinceMsgSent in (5s, 200s), should record stack:true"
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            com.tencent.bugly.proguard.al.c(r4, r3)     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
        L70:
            r3 = r5
        L71:
            if (r3 == 0) goto L76
            r2.d()     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
        L76:
            com.tencent.bugly.proguard.bg$a r3 = r10.g     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            if (r3 == 0) goto L84
            boolean r3 = r10.d     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            if (r3 == 0) goto L84
            r2.a()     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            r2.b()     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
        L84:
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            long r2 = r2 - r0
            r4 = 500(0x1f4, double:2.47E-321)
            long r2 = r2 % r4
            long r4 = r4 - r2
            com.tencent.bugly.proguard.ap.b(r4)     // Catch: java.lang.OutOfMemoryError -> L92 java.lang.Exception -> L98
            goto L4
        L92:
            r2 = move-exception
            com.tencent.bugly.proguard.al.b(r2)
            goto L4
        L98:
            r2 = move-exception
            com.tencent.bugly.proguard.al.b(r2)
            goto L4
        L9e:
            return
    }
}

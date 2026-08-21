package com.igexin.b.a.d;

final class j extends java.lang.Thread {
    volatile boolean a;
    com.igexin.b.a.d.g b;
    final com.igexin.b.a.d.f c;

    public j(com.igexin.b.a.d.f r1) {
            r0 = this;
            r0.c = r1
            r0.<init>()
            r1 = 1
            r0.a = r1
            java.lang.String r1 = "TS-processor"
            r0.setName(r1)
            return
    }

    @Override
    public final void run() {
            r11 = this;
            r0 = -2
            android.os.Process.setThreadPriority(r0)
            com.igexin.b.a.d.f r0 = r11.c
            com.igexin.b.a.d.d<com.igexin.b.a.d.e> r0 = r0.k
            r1 = -1
            r2 = 0
            r3 = 1
        Lb:
            r5 = r2
        Lc:
            r4 = r3
        Ld:
            boolean r6 = r11.a
            if (r6 == 0) goto L120
            r6 = 0
            if (r4 == r1) goto L1c
            if (r4 == 0) goto L65
            if (r4 == r3) goto Lcd
            r6 = 2
            if (r4 == r6) goto Le2
            goto Ld
        L1c:
            r5.d()     // Catch: java.lang.Exception -> L103
            boolean r4 = r5.q()     // Catch: java.lang.Exception -> L103
            if (r4 == 0) goto L38
            com.igexin.b.a.d.g r4 = r11.b     // Catch: java.lang.Exception -> L103
            if (r4 != 0) goto L32
            com.igexin.b.a.d.g r4 = new com.igexin.b.a.d.g     // Catch: java.lang.Exception -> L103
            com.igexin.b.a.d.f r7 = r11.c     // Catch: java.lang.Exception -> L103
            r4.<init>(r7)     // Catch: java.lang.Exception -> L103
            r11.b = r4     // Catch: java.lang.Exception -> L103
        L32:
            com.igexin.b.a.d.g r4 = r11.b     // Catch: java.lang.Exception -> L103
            r4.a(r5)     // Catch: java.lang.Exception -> L103
            goto Lb
        L38:
            boolean r4 = r5.o     // Catch: java.lang.Exception -> L103
            if (r4 == 0) goto L65
            long r7 = r5.u     // Catch: java.lang.Exception -> L103
            r9 = 0
            int r4 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r4 != 0) goto L65
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L103
            r4.<init>()     // Catch: java.lang.Exception -> L103
            java.lang.String r7 = "TaskService|"
            r4.append(r7)     // Catch: java.lang.Exception -> L103
            r4.append(r5)     // Catch: java.lang.Exception -> L103
            java.lang.String r7 = "|isBlock = false|cycyle = true|doTime = 0, "
            r4.append(r7)     // Catch: java.lang.Exception -> L103
            java.lang.String r7 = "invalid ###########"
            r4.append(r7)     // Catch: java.lang.Exception -> L103
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L103
            java.lang.Object[] r7 = new java.lang.Object[r6]     // Catch: java.lang.Exception -> L103
            com.igexin.b.a.c.b.a(r4, r7)     // Catch: java.lang.Exception -> L103
            goto Lc
        L65:
            r5.b()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r5.g()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r5.e_()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            com.igexin.b.a.d.f r4 = r11.c
            r4.g()
            boolean r4 = r5.t
            if (r4 != 0) goto L7a
            r5.c()
        L7a:
            boolean r4 = r5.k
            if (r4 != 0) goto L87
            boolean r4 = r5.p
            if (r4 != 0) goto L87
        L82:
            r5.A = r6
            r0.a(r5)
        L87:
            r5 = r2
            r4 = r3
            goto Lcd
        L8a:
            r1 = move-exception
            goto Le9
        L8c:
            r4 = move-exception
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8a
            r7.<init>()     // Catch: java.lang.Throwable -> L8a
            java.lang.String r8 = "TaskService|SERVICE_PROCESSING|error|"
            r7.append(r8)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r8 = r4.toString()     // Catch: java.lang.Throwable -> L8a
            r7.append(r8)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L8a
            java.lang.Object[] r8 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L8a
            com.igexin.b.a.c.b.a(r7, r8)     // Catch: java.lang.Throwable -> L8a
            r5.t = r3     // Catch: java.lang.Throwable -> L8a
            r5.B = r4     // Catch: java.lang.Throwable -> L8a
            r5.t()     // Catch: java.lang.Throwable -> L8a
            r5.p()     // Catch: java.lang.Throwable -> L8a
            com.igexin.b.a.d.f r4 = r11.c     // Catch: java.lang.Throwable -> L8a
            com.igexin.b.a.d.c r4 = r4.j     // Catch: java.lang.Throwable -> L8a
            r4.a(r5)     // Catch: java.lang.Throwable -> L8a
            com.igexin.b.a.d.f r4 = r11.c
            r4.g()
            boolean r4 = r5.t
            if (r4 != 0) goto Lc4
            r5.c()
        Lc4:
            boolean r4 = r5.k
            if (r4 != 0) goto L87
            boolean r4 = r5.p
            if (r4 != 0) goto L87
            goto L82
        Lcd:
            com.igexin.b.a.d.e r5 = r0.c()     // Catch: java.lang.InterruptedException -> Ld1
        Ld1:
            if (r5 == 0) goto Le2
            boolean r6 = r5.k
            if (r6 != 0) goto Ldf
            boolean r6 = r5.m
            if (r6 == 0) goto Ldc
            goto Ldf
        Ldc:
            r4 = r1
            goto Ld
        Ldf:
            r5 = r2
            goto Ld
        Le2:
            com.igexin.b.a.d.f r4 = r11.c
            r4.g()
            goto Lc
        Le9:
            com.igexin.b.a.d.f r2 = r11.c
            r2.g()
            boolean r2 = r5.t
            if (r2 != 0) goto Lf5
            r5.c()
        Lf5:
            boolean r2 = r5.k
            if (r2 != 0) goto L102
            boolean r2 = r5.p
            if (r2 != 0) goto L102
            r5.A = r6
            r0.a(r5)
        L102:
            throw r1
        L103:
            r4 = move-exception
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "TaskService|TASK_INIT|error|"
            r7.append(r8)
            java.lang.String r4 = r4.toString()
            r7.append(r4)
            java.lang.String r4 = r7.toString()
            java.lang.Object[] r6 = new java.lang.Object[r6]
            com.igexin.b.a.c.b.a(r4, r6)
            goto Lc
        L120:
            r0.d()
            return
    }
}

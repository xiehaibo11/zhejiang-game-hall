package com.igexin.push.c;

class r implements java.util.concurrent.Callable<com.igexin.push.c.j> {
    final com.igexin.push.c.q a;

    r(com.igexin.push.c.q r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    public com.igexin.push.c.j a() {
            r12 = this;
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            boolean r0 = r0.isInterrupted()
            if (r0 != 0) goto L17d
            r0 = 0
            r1 = 0
            java.lang.Thread r2 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L109 java.lang.Exception -> L10b
            boolean r2 = r2.isInterrupted()     // Catch: java.lang.Throwable -> L109 java.lang.Exception -> L10b
            if (r2 == 0) goto L17
            return r1
        L17:
            java.lang.Class<com.igexin.push.c.p> r2 = com.igexin.push.c.p.class
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L109 java.lang.Exception -> L10b
            com.igexin.push.c.q r3 = r12.a     // Catch: java.lang.Throwable -> L106
            com.igexin.push.c.p r3 = com.igexin.push.c.q.a(r3)     // Catch: java.lang.Throwable -> L106
            if (r3 == 0) goto L31
            com.igexin.push.c.q r3 = r12.a     // Catch: java.lang.Throwable -> L106
            com.igexin.push.c.p r3 = com.igexin.push.c.q.a(r3)     // Catch: java.lang.Throwable -> L106
            com.igexin.push.c.q r4 = r12.a     // Catch: java.lang.Throwable -> L106
            com.igexin.push.c.j r4 = com.igexin.push.c.q.b(r4)     // Catch: java.lang.Throwable -> L106
            r3.a(r4)     // Catch: java.lang.Throwable -> L106
        L31:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L106
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L109 java.lang.Exception -> L10b
            com.igexin.push.c.q r4 = r12.a     // Catch: java.lang.Throwable -> L109 java.lang.Exception -> L10b
            com.igexin.push.c.j r4 = com.igexin.push.c.q.b(r4)     // Catch: java.lang.Throwable -> L109 java.lang.Exception -> L10b
            java.lang.String r4 = r4.a()     // Catch: java.lang.Throwable -> L109 java.lang.Exception -> L10b
            java.lang.String[] r4 = com.igexin.b.a.b.f.a(r4)     // Catch: java.lang.Throwable -> L109 java.lang.Exception -> L10b
            java.net.Socket r5 = new java.net.Socket     // Catch: java.lang.Throwable -> L109 java.lang.Exception -> L10b
            r5.<init>()     // Catch: java.lang.Throwable -> L109 java.lang.Exception -> L10b
            java.net.InetSocketAddress r1 = new java.net.InetSocketAddress     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            r6 = 1
            r4 = r4[r6]     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            com.igexin.push.c.q r6 = r12.a     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            com.igexin.push.c.j r6 = com.igexin.push.c.q.b(r6)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            int r6 = r6.d()     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            r1.<init>(r4, r6)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            r4 = 2500(0x9c4, float:3.503E-42)
            r5.connect(r1, r4)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            long r10 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            com.igexin.push.c.q r1 = r12.a     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            com.igexin.push.c.j r6 = com.igexin.push.c.q.b(r1)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            r1.<init>()     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            java.lang.String r4 = "socket://"
            r1.append(r4)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            java.net.InetAddress r4 = r5.getInetAddress()     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            java.lang.String r4 = r4.getHostAddress()     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            r1.append(r4)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            java.lang.String r4 = ":"
            r1.append(r4)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            com.igexin.push.c.q r4 = r12.a     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            com.igexin.push.c.j r4 = com.igexin.push.c.q.b(r4)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            int r4 = r4.d()     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            r1.append(r4)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            long r8 = r10 - r2
            r6.a(r7, r8, r10)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            r1.<init>()     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            java.lang.String r2 = com.igexin.push.c.q.f()     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            r1.append(r2)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            java.lang.String r2 = "|detect "
            r1.append(r2)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            com.igexin.push.c.q r2 = r12.a     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            java.lang.String r2 = com.igexin.push.c.q.c(r2)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            r1.append(r2)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            java.lang.String r2 = "|time = "
            r1.append(r2)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            com.igexin.push.c.q r2 = r12.a     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            com.igexin.push.c.j r2 = com.igexin.push.c.q.b(r2)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            long r2 = r2.e()     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            r1.append(r2)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            java.lang.Class<com.igexin.push.c.p> r1 = com.igexin.push.c.p.class
            monitor-enter(r1)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
            com.igexin.push.c.q r2 = r12.a     // Catch: java.lang.Throwable -> L101
            com.igexin.push.c.p r2 = com.igexin.push.c.q.a(r2)     // Catch: java.lang.Throwable -> L101
            if (r2 == 0) goto Lf5
            java.lang.Thread r2 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L101
            boolean r2 = r2.isInterrupted()     // Catch: java.lang.Throwable -> L101
            if (r2 != 0) goto Lf5
            com.igexin.push.c.q r2 = r12.a     // Catch: java.lang.Throwable -> L101
            com.igexin.push.c.p r2 = com.igexin.push.c.q.a(r2)     // Catch: java.lang.Throwable -> L101
            com.igexin.push.c.g r3 = com.igexin.push.c.g.a     // Catch: java.lang.Throwable -> L101
            com.igexin.push.c.q r4 = r12.a     // Catch: java.lang.Throwable -> L101
            com.igexin.push.c.j r4 = com.igexin.push.c.q.b(r4)     // Catch: java.lang.Throwable -> L101
            r2.a(r3, r4)     // Catch: java.lang.Throwable -> L101
        Lf5:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L101
            boolean r0 = r5.isClosed()
            if (r0 != 0) goto L17d
        Lfc:
            r5.close()     // Catch: java.lang.Exception -> L17d
            goto L17d
        L101:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L101
            throw r2     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L16f
        L104:
            r1 = move-exception
            goto L10e
        L106:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L106
            throw r3     // Catch: java.lang.Throwable -> L109 java.lang.Exception -> L10b
        L109:
            r0 = move-exception
            goto L171
        L10b:
            r2 = move-exception
            r5 = r1
            r1 = r2
        L10e:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L16f
            r2.<init>()     // Catch: java.lang.Throwable -> L16f
            java.lang.String r3 = com.igexin.push.c.q.f()     // Catch: java.lang.Throwable -> L16f
            r2.append(r3)     // Catch: java.lang.Throwable -> L16f
            java.lang.String r3 = "|detect "
            r2.append(r3)     // Catch: java.lang.Throwable -> L16f
            com.igexin.push.c.q r3 = r12.a     // Catch: java.lang.Throwable -> L16f
            java.lang.String r3 = com.igexin.push.c.q.c(r3)     // Catch: java.lang.Throwable -> L16f
            r2.append(r3)     // Catch: java.lang.Throwable -> L16f
            java.lang.String r3 = "thread -->"
            r2.append(r3)     // Catch: java.lang.Throwable -> L16f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L16f
            r2.append(r1)     // Catch: java.lang.Throwable -> L16f
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L16f
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L16f
            com.igexin.b.a.c.b.a(r1, r0)     // Catch: java.lang.Throwable -> L16f
            java.lang.Class<com.igexin.push.c.p> r0 = com.igexin.push.c.p.class
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L16f
            com.igexin.push.c.q r1 = r12.a     // Catch: java.lang.Throwable -> L16c
            com.igexin.push.c.p r1 = com.igexin.push.c.q.a(r1)     // Catch: java.lang.Throwable -> L16c
            if (r1 == 0) goto L162
            com.igexin.push.c.q r1 = r12.a     // Catch: java.lang.Throwable -> L16c
            com.igexin.push.c.j r1 = com.igexin.push.c.q.b(r1)     // Catch: java.lang.Throwable -> L16c
            r1.b()     // Catch: java.lang.Throwable -> L16c
            com.igexin.push.c.q r1 = r12.a     // Catch: java.lang.Throwable -> L16c
            com.igexin.push.c.p r1 = com.igexin.push.c.q.a(r1)     // Catch: java.lang.Throwable -> L16c
            com.igexin.push.c.g r2 = com.igexin.push.c.g.c     // Catch: java.lang.Throwable -> L16c
            com.igexin.push.c.q r3 = r12.a     // Catch: java.lang.Throwable -> L16c
            com.igexin.push.c.j r3 = com.igexin.push.c.q.b(r3)     // Catch: java.lang.Throwable -> L16c
            r1.a(r2, r3)     // Catch: java.lang.Throwable -> L16c
        L162:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16c
            if (r5 == 0) goto L17d
            boolean r0 = r5.isClosed()
            if (r0 != 0) goto L17d
            goto Lfc
        L16c:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16c
            throw r1     // Catch: java.lang.Throwable -> L16f
        L16f:
            r0 = move-exception
            r1 = r5
        L171:
            if (r1 == 0) goto L17c
            boolean r2 = r1.isClosed()
            if (r2 != 0) goto L17c
            r1.close()     // Catch: java.lang.Exception -> L17c
        L17c:
            throw r0
        L17d:
            com.igexin.push.c.q r0 = r12.a
            com.igexin.push.c.j r0 = com.igexin.push.c.q.b(r0)
            return r0
    }

    @Override
    public com.igexin.push.c.j call() {
            r1 = this;
            com.igexin.push.c.j r0 = r1.a()
            return r0
    }
}

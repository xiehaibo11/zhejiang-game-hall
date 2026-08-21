package com.tkay.core.common.h.a;

public final class d {
    private static com.tkay.core.common.h.a.d g;
    byte[] a;
    byte[] b;
    private final int c;
    private final int d;
    private final int e;
    private final java.lang.String f;
    private java.lang.String h;
    private int i;
    private java.net.Socket j;

    final class 1 extends com.tkay.core.common.l.b.b {
        final com.tkay.core.common.h.a.c a;
        final com.tkay.core.common.h.a.c.a b;
        final com.tkay.core.common.h.a.d c;

        1(com.tkay.core.common.h.a.d r1, com.tkay.core.common.h.a.c r2, com.tkay.core.common.h.a.c.a r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void a() {
                r6 = this;
                java.lang.String r0 = "Response Error Code:"
                r1 = 1
                com.tkay.core.common.h.a.d r2 = r6.c     // Catch: java.lang.Throwable -> L2c java.net.SocketException -> L2e
                com.tkay.core.common.h.a.c r3 = r6.a     // Catch: java.lang.Throwable -> L2c java.net.SocketException -> L2e
                com.tkay.core.common.h.a.d.a(r2, r3)     // Catch: java.lang.Throwable -> L2c java.net.SocketException -> L2e
                com.tkay.core.common.h.a.d r2 = r6.c     // Catch: java.lang.Throwable -> L2c java.net.SocketException -> L2e
                int r2 = com.tkay.core.common.h.a.d.a(r2)     // Catch: java.lang.Throwable -> L2c java.net.SocketException -> L2e
                if (r2 != r1) goto L1e
                com.tkay.core.common.h.a.c$a r2 = r6.b     // Catch: java.lang.Throwable -> L2c java.net.SocketException -> L2e
                if (r2 == 0) goto L1d
                com.tkay.core.common.h.a.c$a r2 = r6.b     // Catch: java.lang.Throwable -> L2c java.net.SocketException -> L2e
                com.tkay.core.common.h.a.c r3 = r6.a     // Catch: java.lang.Throwable -> L2c java.net.SocketException -> L2e
                r2.a(r3)     // Catch: java.lang.Throwable -> L2c java.net.SocketException -> L2e
            L1d:
                return
            L1e:
                java.lang.Exception r3 = new java.lang.Exception     // Catch: java.lang.Throwable -> L2c java.net.SocketException -> L2e
                java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L2c java.net.SocketException -> L2e
                java.lang.String r2 = r0.concat(r2)     // Catch: java.lang.Throwable -> L2c java.net.SocketException -> L2e
                r3.<init>(r2)     // Catch: java.lang.Throwable -> L2c java.net.SocketException -> L2e
                throw r3     // Catch: java.lang.Throwable -> L2c java.net.SocketException -> L2e
            L2c:
                r0 = move-exception
                goto L5c
            L2e:
                com.tkay.core.common.h.a.d r2 = r6.c
                com.tkay.core.common.h.a.d.b(r2)
                com.tkay.core.common.h.a.d r2 = r6.c     // Catch: java.lang.Throwable -> L2c
                com.tkay.core.common.h.a.c r3 = r6.a     // Catch: java.lang.Throwable -> L2c
                com.tkay.core.common.h.a.d.a(r2, r3)     // Catch: java.lang.Throwable -> L2c
                com.tkay.core.common.h.a.d r2 = r6.c     // Catch: java.lang.Throwable -> L2c
                int r2 = com.tkay.core.common.h.a.d.a(r2)     // Catch: java.lang.Throwable -> L2c
                if (r2 != r1) goto L4e
                com.tkay.core.common.h.a.c$a r0 = r6.b     // Catch: java.lang.Throwable -> L2c
                if (r0 == 0) goto L4d
                com.tkay.core.common.h.a.c$a r0 = r6.b     // Catch: java.lang.Throwable -> L2c
                com.tkay.core.common.h.a.c r1 = r6.a     // Catch: java.lang.Throwable -> L2c
                r0.a(r1)     // Catch: java.lang.Throwable -> L2c
            L4d:
                return
            L4e:
                java.lang.Exception r1 = new java.lang.Exception     // Catch: java.lang.Throwable -> L2c
                java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L2c
                java.lang.String r0 = r0.concat(r2)     // Catch: java.lang.Throwable -> L2c
                r1.<init>(r0)     // Catch: java.lang.Throwable -> L2c
                throw r1     // Catch: java.lang.Throwable -> L2c
            L5c:
                com.tkay.core.common.h.a.c r1 = r6.a
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = r0.getMessage()
                r2.append(r3)
                java.lang.String r3 = ","
                r2.append(r3)
                java.lang.StackTraceElement[] r3 = r0.getStackTrace()
                java.lang.String r3 = com.tkay.core.common.l.h.a(r3)
                r2.append(r3)
                java.lang.String r2 = r2.toString()
                com.tkay.core.common.h.a.d r3 = r6.c
                java.lang.String r3 = com.tkay.core.common.h.a.d.c(r3)
                com.tkay.core.common.h.a.d r4 = r6.c
                int r4 = com.tkay.core.common.h.a.d.d(r4)
                java.lang.String r5 = ""
                r1.a(r5, r2, r3, r4)
                com.tkay.core.common.h.a.c$a r1 = r6.b
                if (r1 == 0) goto L96
                r1.a(r0)
            L96:
                return
        }
    }

    private d() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.c = r0
            r0 = 7
            r2.d = r0
            r0 = 1
            r2.e = r0
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r2.f = r1
            r1 = 0
            r2.a = r1
            byte[] r0 = new byte[r0]
            r2.b = r0
            return
    }

    static int a(com.tkay.core.common.h.a.d r0) {
            int r0 = r0.e()
            return r0
    }

    protected static synchronized com.tkay.core.common.h.a.d a() {
            java.lang.Class<com.tkay.core.common.h.a.d> r0 = com.tkay.core.common.h.a.d.class
            monitor-enter(r0)
            com.tkay.core.common.h.a.d r1 = com.tkay.core.common.h.a.d.g     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.tkay.core.common.h.a.d r1 = new com.tkay.core.common.h.a.d     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.tkay.core.common.h.a.d.g = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.tkay.core.common.h.a.d r1 = com.tkay.core.common.h.a.d.g     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private synchronized void a(com.tkay.core.common.h.a.c r8) {
            r7 = this;
            monitor-enter(r7)
            java.net.Socket r0 = r7.j     // Catch: java.lang.Throwable -> Ld6
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L19
            java.net.Socket r0 = r7.j     // Catch: java.lang.Throwable -> Ld6
            boolean r0 = r0.isConnected()     // Catch: java.lang.Throwable -> Ld6
            if (r0 == 0) goto L19
            java.net.Socket r0 = r7.j     // Catch: java.lang.Throwable -> Ld6
            boolean r0 = r0.isClosed()     // Catch: java.lang.Throwable -> Ld6
            if (r0 != 0) goto L19
            r0 = r1
            goto L1a
        L19:
            r0 = r2
        L1a:
            if (r0 != 0) goto L69
            monitor-enter(r7)     // Catch: java.lang.Throwable -> Ld6
            java.net.Socket r0 = r7.j     // Catch: java.lang.Throwable -> L66
            if (r0 != 0) goto L2e
            java.net.Socket r0 = new java.net.Socket     // Catch: java.lang.Throwable -> L66
            r0.<init>()     // Catch: java.lang.Throwable -> L66
            r7.j = r0     // Catch: java.lang.Throwable -> L66
            r3 = 60000(0xea60, float:8.4078E-41)
            r0.setSoTimeout(r3)     // Catch: java.lang.Throwable -> L66
        L2e:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L66
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> L66
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)     // Catch: java.lang.Throwable -> L66
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L66
            java.lang.String r3 = r3.o()     // Catch: java.lang.Throwable -> L66
            com.tkay.core.c.a r0 = r0.b(r3)     // Catch: java.lang.Throwable -> L66
            if (r0 == 0) goto L64
            java.lang.String r3 = r0.v()     // Catch: java.lang.Throwable -> L66
            r7.h = r3     // Catch: java.lang.Throwable -> L66
            int r0 = r0.w()     // Catch: java.lang.Throwable -> L66
            r7.i = r0     // Catch: java.lang.Throwable -> L66
            java.net.Socket r0 = r7.j     // Catch: java.lang.Throwable -> L66
            java.net.InetSocketAddress r3 = new java.net.InetSocketAddress     // Catch: java.lang.Throwable -> L66
            java.lang.String r4 = r7.h     // Catch: java.lang.Throwable -> L66
            int r5 = r7.i     // Catch: java.lang.Throwable -> L66
            r3.<init>(r4, r5)     // Catch: java.lang.Throwable -> L66
            r4 = 30000(0x7530, float:4.2039E-41)
            r0.connect(r3, r4)     // Catch: java.lang.Throwable -> L66
        L64:
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L66
            goto L69
        L66:
            r8 = move-exception
            monitor-exit(r7)     // Catch: java.lang.Throwable -> Ld6
            throw r8     // Catch: java.lang.Throwable -> Ld6
        L69:
            byte[] r0 = r8.e()     // Catch: java.lang.Throwable -> Ld6
            if (r0 == 0) goto Ld4
            int r3 = r0.length     // Catch: java.lang.Throwable -> Ld6
            int r4 = r0.length     // Catch: java.lang.Throwable -> Ld6
            if (r4 != 0) goto L75
            monitor-exit(r7)
            return
        L75:
            int r4 = r3 + 7
            byte[] r5 = r7.a     // Catch: java.lang.Throwable -> Ld6
            if (r5 == 0) goto L80
            byte[] r5 = r7.a     // Catch: java.lang.Throwable -> Ld6
            int r5 = r5.length     // Catch: java.lang.Throwable -> Ld6
            if (r5 >= r4) goto L84
        L80:
            byte[] r5 = new byte[r4]     // Catch: java.lang.Throwable -> Ld6
            r7.a = r5     // Catch: java.lang.Throwable -> Ld6
        L84:
            byte[] r5 = r7.a     // Catch: java.lang.Throwable -> Ld6
            r5[r2] = r2     // Catch: java.lang.Throwable -> Ld6
            byte[] r5 = r7.a     // Catch: java.lang.Throwable -> Ld6
            r6 = 3
            r5[r1] = r6     // Catch: java.lang.Throwable -> Ld6
            byte[] r1 = r7.a     // Catch: java.lang.Throwable -> Ld6
            r5 = 2
            int r8 = r8.c()     // Catch: java.lang.Throwable -> Ld6
            byte r8 = (byte) r8     // Catch: java.lang.Throwable -> Ld6
            r1[r5] = r8     // Catch: java.lang.Throwable -> Ld6
            byte[] r8 = r7.a     // Catch: java.lang.Throwable -> Ld6
            int r1 = r3 >>> 24
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1     // Catch: java.lang.Throwable -> Ld6
            r8[r6] = r1     // Catch: java.lang.Throwable -> Ld6
            byte[] r8 = r7.a     // Catch: java.lang.Throwable -> Ld6
            r1 = 4
            int r5 = r3 >>> 16
            r5 = r5 & 255(0xff, float:3.57E-43)
            byte r5 = (byte) r5     // Catch: java.lang.Throwable -> Ld6
            r8[r1] = r5     // Catch: java.lang.Throwable -> Ld6
            byte[] r8 = r7.a     // Catch: java.lang.Throwable -> Ld6
            r1 = 5
            int r5 = r3 >>> 8
            r5 = r5 & 255(0xff, float:3.57E-43)
            byte r5 = (byte) r5     // Catch: java.lang.Throwable -> Ld6
            r8[r1] = r5     // Catch: java.lang.Throwable -> Ld6
            byte[] r8 = r7.a     // Catch: java.lang.Throwable -> Ld6
            r1 = 6
            int r3 = r3 >>> r2
            r3 = r3 & 255(0xff, float:3.57E-43)
            byte r3 = (byte) r3     // Catch: java.lang.Throwable -> Ld6
            r8[r1] = r3     // Catch: java.lang.Throwable -> Ld6
            byte[] r8 = r7.a     // Catch: java.lang.Throwable -> Ld6
            int r1 = r0.length     // Catch: java.lang.Throwable -> Ld6
            r3 = 7
            java.lang.System.arraycopy(r0, r2, r8, r3, r1)     // Catch: java.lang.Throwable -> Ld6
            java.net.Socket r8 = r7.j     // Catch: java.lang.Throwable -> Ld6
            java.io.OutputStream r8 = r8.getOutputStream()     // Catch: java.lang.Throwable -> Ld6
            byte[] r0 = r7.a     // Catch: java.lang.Throwable -> Ld6
            r8.write(r0, r2, r4)     // Catch: java.lang.Throwable -> Ld6
            r8.flush()     // Catch: java.lang.Throwable -> Ld6
            monitor-exit(r7)
            return
        Ld4:
            monitor-exit(r7)
            return
        Ld6:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    private void a(com.tkay.core.common.h.a.c r2, com.tkay.core.common.h.a.c.a r3) {
            r1 = this;
            com.tkay.core.common.h.a.d$1 r0 = new com.tkay.core.common.h.a.d$1
            r0.<init>(r1, r2, r3)
            com.tkay.core.common.l.b.a r2 = com.tkay.core.common.l.b.a.a()
            r3 = 4
            r2.a(r0, r3)
            return
    }

    static void a(com.tkay.core.common.h.a.d r0, com.tkay.core.common.h.a.c r1) {
            r0.a(r1)
            return
    }

    private void b() {
            r4 = this;
            monitor-enter(r4)
            java.net.Socket r0 = r4.j     // Catch: java.lang.Throwable -> L4a
            if (r0 != 0) goto L12
            java.net.Socket r0 = new java.net.Socket     // Catch: java.lang.Throwable -> L4a
            r0.<init>()     // Catch: java.lang.Throwable -> L4a
            r4.j = r0     // Catch: java.lang.Throwable -> L4a
            r1 = 60000(0xea60, float:8.4078E-41)
            r0.setSoTimeout(r1)     // Catch: java.lang.Throwable -> L4a
        L12:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L4a
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> L4a
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)     // Catch: java.lang.Throwable -> L4a
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L4a
            java.lang.String r1 = r1.o()     // Catch: java.lang.Throwable -> L4a
            com.tkay.core.c.a r0 = r0.b(r1)     // Catch: java.lang.Throwable -> L4a
            if (r0 == 0) goto L48
            java.lang.String r1 = r0.v()     // Catch: java.lang.Throwable -> L4a
            r4.h = r1     // Catch: java.lang.Throwable -> L4a
            int r0 = r0.w()     // Catch: java.lang.Throwable -> L4a
            r4.i = r0     // Catch: java.lang.Throwable -> L4a
            java.net.Socket r0 = r4.j     // Catch: java.lang.Throwable -> L4a
            java.net.InetSocketAddress r1 = new java.net.InetSocketAddress     // Catch: java.lang.Throwable -> L4a
            java.lang.String r2 = r4.h     // Catch: java.lang.Throwable -> L4a
            int r3 = r4.i     // Catch: java.lang.Throwable -> L4a
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L4a
            r2 = 30000(0x7530, float:4.2039E-41)
            r0.connect(r1, r2)     // Catch: java.lang.Throwable -> L4a
        L48:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L4a
            return
        L4a:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    static void b(com.tkay.core.common.h.a.d r1) {
            monitor-enter(r1)
            java.net.Socket r0 = r1.j     // Catch: java.lang.Throwable -> Le java.lang.Exception -> L10
            if (r0 == 0) goto L10
            java.net.Socket r0 = r1.j     // Catch: java.lang.Throwable -> Le java.lang.Exception -> L10
            r0.close()     // Catch: java.lang.Throwable -> Le java.lang.Exception -> L10
            r0 = 0
            r1.j = r0     // Catch: java.lang.Throwable -> Le java.lang.Exception -> L10
            goto L10
        Le:
            r0 = move-exception
            goto L12
        L10:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Le
            return
        L12:
            monitor-exit(r1)
            throw r0
    }

    static java.lang.String c(com.tkay.core.common.h.a.d r0) {
            java.lang.String r0 = r0.h
            return r0
    }

    private void c() {
            r1 = this;
            monitor-enter(r1)
            java.net.Socket r0 = r1.j     // Catch: java.lang.Throwable -> Le java.lang.Exception -> L10
            if (r0 == 0) goto L10
            java.net.Socket r0 = r1.j     // Catch: java.lang.Throwable -> Le java.lang.Exception -> L10
            r0.close()     // Catch: java.lang.Throwable -> Le java.lang.Exception -> L10
            r0 = 0
            r1.j = r0     // Catch: java.lang.Throwable -> Le java.lang.Exception -> L10
            goto L10
        Le:
            r0 = move-exception
            goto L12
        L10:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Le
            return
        L12:
            monitor-exit(r1)
            throw r0
    }

    static int d(com.tkay.core.common.h.a.d r0) {
            int r0 = r0.i
            return r0
    }

    private boolean d() {
            r1 = this;
            java.net.Socket r0 = r1.j
            if (r0 == 0) goto L14
            boolean r0 = r0.isConnected()
            if (r0 == 0) goto L14
            java.net.Socket r0 = r1.j
            boolean r0 = r0.isClosed()
            if (r0 != 0) goto L14
            r0 = 1
            return r0
        L14:
            r0 = 0
            return r0
    }

    private synchronized int e() {
            r4 = this;
            monitor-enter(r4)
            java.net.Socket r0 = r4.j     // Catch: java.lang.Throwable -> L24
            java.io.InputStream r0 = r0.getInputStream()     // Catch: java.lang.Throwable -> L24
            byte[] r1 = r4.b     // Catch: java.lang.Throwable -> L24
            r2 = 1
            r3 = 0
            int r0 = r0.read(r1, r3, r2)     // Catch: java.lang.Throwable -> L24
            r1 = -1
            if (r0 == r1) goto L1c
            byte[] r0 = r4.b     // Catch: java.lang.Throwable -> L24
            r0 = r0[r3]     // Catch: java.lang.Throwable -> L24
            byte[] r1 = r4.b     // Catch: java.lang.Throwable -> L24
            r1[r3] = r3     // Catch: java.lang.Throwable -> L24
            monitor-exit(r4)
            return r0
        L1c:
            java.net.SocketException r0 = new java.net.SocketException     // Catch: java.lang.Throwable -> L24
            java.lang.String r1 = "Socket.InputStream read length = -1!"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L24
            throw r0     // Catch: java.lang.Throwable -> L24
        L24:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }
}

package com.tkay.expressad.exoplayer.j;

public final class l implements com.tkay.expressad.exoplayer.j.b {
    private static final int a = 100;
    private final boolean b;
    private final int c;
    private final byte[] d;
    private final com.tkay.expressad.exoplayer.j.a[] e;
    private int f;
    private int g;
    private int h;
    private com.tkay.expressad.exoplayer.j.a[] i;

    private l() {
            r2 = this;
            r2.<init>()
            r0 = 1
            com.tkay.expressad.exoplayer.k.a.a(r0)
            com.tkay.expressad.exoplayer.k.a.a(r0)
            r2.b = r0
            r1 = 65536(0x10000, float:9.1835E-41)
            r2.c = r1
            r1 = 0
            r2.h = r1
            r1 = 100
            com.tkay.expressad.exoplayer.j.a[] r1 = new com.tkay.expressad.exoplayer.j.a[r1]
            r2.i = r1
            r1 = 0
            r2.d = r1
            com.tkay.expressad.exoplayer.j.a[] r0 = new com.tkay.expressad.exoplayer.j.a[r0]
            r2.e = r0
            return
    }

    public l(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final synchronized com.tkay.expressad.exoplayer.j.a a() {
            r4 = this;
            monitor-enter(r4)
            int r0 = r4.g     // Catch: java.lang.Throwable -> L26
            int r0 = r0 + 1
            r4.g = r0     // Catch: java.lang.Throwable -> L26
            int r0 = r4.h     // Catch: java.lang.Throwable -> L26
            if (r0 <= 0) goto L1b
            com.tkay.expressad.exoplayer.j.a[] r0 = r4.i     // Catch: java.lang.Throwable -> L26
            int r1 = r4.h     // Catch: java.lang.Throwable -> L26
            int r1 = r1 + (-1)
            r4.h = r1     // Catch: java.lang.Throwable -> L26
            r0 = r0[r1]     // Catch: java.lang.Throwable -> L26
            com.tkay.expressad.exoplayer.j.a[] r2 = r4.i     // Catch: java.lang.Throwable -> L26
            r3 = 0
            r2[r1] = r3     // Catch: java.lang.Throwable -> L26
            goto L24
        L1b:
            com.tkay.expressad.exoplayer.j.a r0 = new com.tkay.expressad.exoplayer.j.a     // Catch: java.lang.Throwable -> L26
            int r1 = r4.c     // Catch: java.lang.Throwable -> L26
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L26
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L26
        L24:
            monitor-exit(r4)
            return r0
        L26:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public final synchronized void a(int r2) {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.f     // Catch: java.lang.Throwable -> L11
            if (r2 >= r0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            r1.f = r2     // Catch: java.lang.Throwable -> L11
            if (r0 == 0) goto Lf
            r1.b()     // Catch: java.lang.Throwable -> L11
        Lf:
            monitor-exit(r1)
            return
        L11:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public final synchronized void a(com.tkay.expressad.exoplayer.j.a r3) {
            r2 = this;
            monitor-enter(r2)
            com.tkay.expressad.exoplayer.j.a[] r0 = r2.e     // Catch: java.lang.Throwable -> Ld
            r1 = 0
            r0[r1] = r3     // Catch: java.lang.Throwable -> Ld
            com.tkay.expressad.exoplayer.j.a[] r3 = r2.e     // Catch: java.lang.Throwable -> Ld
            r2.a(r3)     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r2)
            return
        Ld:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    @Override
    public final synchronized void a(com.tkay.expressad.exoplayer.j.a[] r7) {
            r6 = this;
            monitor-enter(r6)
            int r0 = r6.h     // Catch: java.lang.Throwable -> L8a
            int r1 = r7.length     // Catch: java.lang.Throwable -> L8a
            int r0 = r0 + r1
            com.tkay.expressad.exoplayer.j.a[] r1 = r6.i     // Catch: java.lang.Throwable -> L8a
            int r1 = r1.length     // Catch: java.lang.Throwable -> L8a
            if (r0 < r1) goto L21
            com.tkay.expressad.exoplayer.j.a[] r0 = r6.i     // Catch: java.lang.Throwable -> L8a
            com.tkay.expressad.exoplayer.j.a[] r1 = r6.i     // Catch: java.lang.Throwable -> L8a
            int r1 = r1.length     // Catch: java.lang.Throwable -> L8a
            int r1 = r1 * 2
            int r2 = r6.h     // Catch: java.lang.Throwable -> L8a
            int r3 = r7.length     // Catch: java.lang.Throwable -> L8a
            int r2 = r2 + r3
            int r1 = java.lang.Math.max(r1, r2)     // Catch: java.lang.Throwable -> L8a
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1)     // Catch: java.lang.Throwable -> L8a
            com.tkay.expressad.exoplayer.j.a[] r0 = (com.tkay.expressad.exoplayer.j.a[]) r0     // Catch: java.lang.Throwable -> L8a
            r6.i = r0     // Catch: java.lang.Throwable -> L8a
        L21:
            int r0 = r7.length     // Catch: java.lang.Throwable -> L8a
            r1 = 0
        L23:
            if (r1 >= r0) goto L7f
            r2 = r7[r1]     // Catch: java.lang.Throwable -> L8a
            byte[] r3 = r2.a     // Catch: java.lang.Throwable -> L8a
            byte[] r4 = r6.d     // Catch: java.lang.Throwable -> L8a
            if (r3 == r4) goto L72
            byte[] r3 = r2.a     // Catch: java.lang.Throwable -> L8a
            int r3 = r3.length     // Catch: java.lang.Throwable -> L8a
            int r4 = r6.c     // Catch: java.lang.Throwable -> L8a
            if (r3 != r4) goto L35
            goto L72
        L35:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L8a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8a
            java.lang.String r1 = "Unexpected allocation: "
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L8a
            byte[] r1 = r2.a     // Catch: java.lang.Throwable -> L8a
            int r1 = java.lang.System.identityHashCode(r1)     // Catch: java.lang.Throwable -> L8a
            r0.append(r1)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r1 = ", "
            r0.append(r1)     // Catch: java.lang.Throwable -> L8a
            byte[] r1 = r6.d     // Catch: java.lang.Throwable -> L8a
            int r1 = java.lang.System.identityHashCode(r1)     // Catch: java.lang.Throwable -> L8a
            r0.append(r1)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r1 = ", "
            r0.append(r1)     // Catch: java.lang.Throwable -> L8a
            byte[] r1 = r2.a     // Catch: java.lang.Throwable -> L8a
            int r1 = r1.length     // Catch: java.lang.Throwable -> L8a
            r0.append(r1)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r1 = ", "
            r0.append(r1)     // Catch: java.lang.Throwable -> L8a
            int r1 = r6.c     // Catch: java.lang.Throwable -> L8a
            r0.append(r1)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L8a
            r7.<init>(r0)     // Catch: java.lang.Throwable -> L8a
            throw r7     // Catch: java.lang.Throwable -> L8a
        L72:
            com.tkay.expressad.exoplayer.j.a[] r3 = r6.i     // Catch: java.lang.Throwable -> L8a
            int r4 = r6.h     // Catch: java.lang.Throwable -> L8a
            int r5 = r4 + 1
            r6.h = r5     // Catch: java.lang.Throwable -> L8a
            r3[r4] = r2     // Catch: java.lang.Throwable -> L8a
            int r1 = r1 + 1
            goto L23
        L7f:
            int r0 = r6.g     // Catch: java.lang.Throwable -> L8a
            int r7 = r7.length     // Catch: java.lang.Throwable -> L8a
            int r0 = r0 - r7
            r6.g = r0     // Catch: java.lang.Throwable -> L8a
            r6.notifyAll()     // Catch: java.lang.Throwable -> L8a
            monitor-exit(r6)
            return
        L8a:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    @Override
    public final synchronized void b() {
            r7 = this;
            monitor-enter(r7)
            int r0 = r7.f     // Catch: java.lang.Throwable -> L60
            int r1 = r7.c     // Catch: java.lang.Throwable -> L60
            int r0 = com.tkay.expressad.exoplayer.k.af.a(r0, r1)     // Catch: java.lang.Throwable -> L60
            int r1 = r7.g     // Catch: java.lang.Throwable -> L60
            int r0 = r0 - r1
            r1 = 0
            int r0 = java.lang.Math.max(r1, r0)     // Catch: java.lang.Throwable -> L60
            int r2 = r7.h     // Catch: java.lang.Throwable -> L60
            if (r0 < r2) goto L17
            monitor-exit(r7)
            return
        L17:
            byte[] r2 = r7.d     // Catch: java.lang.Throwable -> L60
            if (r2 == 0) goto L54
            int r2 = r7.h     // Catch: java.lang.Throwable -> L60
            int r2 = r2 + (-1)
        L1f:
            if (r1 > r2) goto L4a
            com.tkay.expressad.exoplayer.j.a[] r3 = r7.i     // Catch: java.lang.Throwable -> L60
            r3 = r3[r1]     // Catch: java.lang.Throwable -> L60
            byte[] r4 = r3.a     // Catch: java.lang.Throwable -> L60
            byte[] r5 = r7.d     // Catch: java.lang.Throwable -> L60
            if (r4 != r5) goto L2e
            int r1 = r1 + 1
            goto L1f
        L2e:
            com.tkay.expressad.exoplayer.j.a[] r4 = r7.i     // Catch: java.lang.Throwable -> L60
            r4 = r4[r2]     // Catch: java.lang.Throwable -> L60
            byte[] r5 = r4.a     // Catch: java.lang.Throwable -> L60
            byte[] r6 = r7.d     // Catch: java.lang.Throwable -> L60
            if (r5 == r6) goto L3b
            int r2 = r2 + (-1)
            goto L1f
        L3b:
            com.tkay.expressad.exoplayer.j.a[] r5 = r7.i     // Catch: java.lang.Throwable -> L60
            int r6 = r1 + 1
            r5[r1] = r4     // Catch: java.lang.Throwable -> L60
            com.tkay.expressad.exoplayer.j.a[] r1 = r7.i     // Catch: java.lang.Throwable -> L60
            int r4 = r2 + (-1)
            r1[r2] = r3     // Catch: java.lang.Throwable -> L60
            r2 = r4
            r1 = r6
            goto L1f
        L4a:
            int r0 = java.lang.Math.max(r0, r1)     // Catch: java.lang.Throwable -> L60
            int r1 = r7.h     // Catch: java.lang.Throwable -> L60
            if (r0 < r1) goto L54
            monitor-exit(r7)
            return
        L54:
            com.tkay.expressad.exoplayer.j.a[] r1 = r7.i     // Catch: java.lang.Throwable -> L60
            int r2 = r7.h     // Catch: java.lang.Throwable -> L60
            r3 = 0
            java.util.Arrays.fill(r1, r0, r2, r3)     // Catch: java.lang.Throwable -> L60
            r7.h = r0     // Catch: java.lang.Throwable -> L60
            monitor-exit(r7)
            return
        L60:
            r0 = move-exception
            monitor-exit(r7)
            throw r0
    }

    @Override
    public final synchronized int c() {
            r2 = this;
            monitor-enter(r2)
            int r0 = r2.g     // Catch: java.lang.Throwable -> L8
            int r1 = r2.c     // Catch: java.lang.Throwable -> L8
            int r0 = r0 * r1
            monitor-exit(r2)
            return r0
        L8:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    @Override
    public final int d() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    public final synchronized void e() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.b     // Catch: java.lang.Throwable -> Lb
            if (r0 == 0) goto L9
            r0 = 0
            r1.a(r0)     // Catch: java.lang.Throwable -> Lb
        L9:
            monitor-exit(r1)
            return
        Lb:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }
}

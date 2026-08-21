package com.igexin.push.core;

public class h {
    private static com.igexin.push.core.h d;
    public long a;
    private com.igexin.push.core.k b;
    private long c;

    private h() {
            r2 = this;
            r2.<init>()
            r0 = 240000(0x3a980, double:1.18576E-318)
            r2.a = r0
            com.igexin.push.core.k r0 = com.igexin.push.core.k.a
            r2.b = r0
            r0 = 0
            r2.c = r0
            return
    }

    public static com.igexin.push.core.h a() {
            com.igexin.push.core.h r0 = com.igexin.push.core.h.d
            if (r0 != 0) goto Lb
            com.igexin.push.core.h r0 = new com.igexin.push.core.h
            r0.<init>()
            com.igexin.push.core.h.d = r0
        Lb:
            com.igexin.push.core.h r0 = com.igexin.push.core.h.d
            return r0
    }

    private void b(com.igexin.push.core.j r10) {
            r9 = this;
            int[] r0 = com.igexin.push.core.i.b
            int r10 = r10.ordinal()
            r10 = r0[r10]
            r0 = 1
            r1 = 60000(0xea60, double:2.9644E-319)
            if (r10 == r0) goto L39
            r0 = 2
            r3 = 240000(0x3a980, double:1.18576E-318)
            if (r10 == r0) goto L1f
            r0 = 3
            if (r10 == r0) goto L1f
            r0 = 4
            if (r10 == r0) goto L1b
            goto L4b
        L1b:
            r9.a(r3)
            goto L46
        L1f:
            long r5 = r9.c
            r7 = 1
            long r5 = r5 + r7
            r9.c = r5
            r7 = 2
            int r10 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r10 < 0) goto L4b
            long r5 = r9.a
            long r5 = r5 - r1
            long r0 = java.lang.Math.max(r5, r3)
            r9.a(r0)
            com.igexin.push.core.k r10 = com.igexin.push.core.k.b
            goto L48
        L39:
            long r3 = r9.a
            long r3 = r3 + r1
            r0 = 420000(0x668a0, double:2.075076E-318)
            long r0 = java.lang.Math.min(r3, r0)
            r9.a(r0)
        L46:
            com.igexin.push.core.k r10 = com.igexin.push.core.k.a
        L48:
            r9.a(r10)
        L4b:
            return
    }

    private void c(com.igexin.push.core.j r8) {
            r7 = this;
            int[] r0 = com.igexin.push.core.i.b
            int r8 = r8.ordinal()
            r8 = r0[r8]
            r0 = 1
            if (r8 == r0) goto L3e
            r0 = 2
            r1 = 240000(0x3a980, double:1.18576E-318)
            if (r8 == r0) goto L1e
            r0 = 3
            if (r8 == r0) goto L1e
            r0 = 4
            if (r8 == r0) goto L18
            goto L43
        L18:
            r7.a(r1)
            com.igexin.push.core.k r8 = com.igexin.push.core.k.a
            goto L40
        L1e:
            long r3 = r7.a
            r5 = 60000(0xea60, double:2.9644E-319)
            long r3 = r3 - r5
            long r3 = java.lang.Math.max(r3, r1)
            r7.a(r3)
            long r3 = r7.c
            r5 = 1
            long r3 = r3 + r5
            r7.c = r3
            r5 = 2
            int r8 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r8 < 0) goto L43
            r7.a(r1)
            com.igexin.push.core.k r8 = com.igexin.push.core.k.c
            goto L40
        L3e:
            com.igexin.push.core.k r8 = com.igexin.push.core.k.b
        L40:
            r7.a(r8)
        L43:
            return
    }

    private void d(com.igexin.push.core.j r4) {
            r3 = this;
            int[] r0 = com.igexin.push.core.i.b
            int r4 = r4.ordinal()
            r4 = r0[r4]
            r0 = 1
            r1 = 240000(0x3a980, double:1.18576E-318)
            if (r4 == r0) goto L1b
            r0 = 2
            if (r4 == r0) goto L18
            r0 = 3
            if (r4 == r0) goto L18
            r0 = 4
            if (r4 == r0) goto L1b
            goto L23
        L18:
            com.igexin.push.core.k r4 = com.igexin.push.core.k.c
            goto L20
        L1b:
            r3.a(r1)
            com.igexin.push.core.k r4 = com.igexin.push.core.k.a
        L20:
            r3.a(r4)
        L23:
            return
    }

    public void a(long r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void a(com.igexin.push.core.j r3) {
            r2 = this;
            int[] r0 = com.igexin.push.core.i.a
            com.igexin.push.core.k r1 = r2.b
            int r1 = r1.ordinal()
            r0 = r0[r1]
            r1 = 1
            if (r0 == r1) goto L1c
            r1 = 2
            if (r0 == r1) goto L18
            r1 = 3
            if (r0 == r1) goto L14
            goto L1f
        L14:
            r2.d(r3)
            goto L1f
        L18:
            r2.c(r3)
            goto L1f
        L1c:
            r2.b(r3)
        L1f:
            return
    }

    public void a(com.igexin.push.core.k r3) {
            r2 = this;
            r2.b = r3
            r0 = 0
            r2.c = r0
            return
    }

    public long b() {
            r5 = this;
            long r0 = r5.a
            int r2 = com.igexin.push.config.j.d
            if (r2 <= 0) goto Lb
            int r0 = com.igexin.push.config.j.d
            int r0 = r0 * 1000
            long r0 = (long) r0
        Lb:
            boolean r2 = com.igexin.push.core.d.i
            r3 = 3600000(0x36ee80, double:1.7786363E-317)
            if (r2 != 0) goto L14
        L12:
            r0 = r3
            goto L28
        L14:
            boolean r2 = com.igexin.push.core.d.n
            if (r2 != 0) goto L19
            goto L12
        L19:
            com.igexin.push.core.c r2 = com.igexin.push.core.c.a()
            com.igexin.push.e.a r2 = r2.i()
            boolean r2 = r2.a()
            if (r2 != 0) goto L28
            goto L12
        L28:
            return r0
    }
}

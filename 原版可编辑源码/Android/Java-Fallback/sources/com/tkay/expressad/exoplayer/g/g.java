package com.tkay.expressad.exoplayer.g;

public final class g extends com.tkay.expressad.exoplayer.a implements android.os.Handler.Callback {
    private static final int n = 0;
    private static final int o = 5;
    private final com.tkay.expressad.exoplayer.g.d p;
    private final com.tkay.expressad.exoplayer.g.f q;
    private final android.os.Handler r;
    private final com.tkay.expressad.exoplayer.n s;
    private final com.tkay.expressad.exoplayer.g.e t;
    private final com.tkay.expressad.exoplayer.g.a[] u;
    private final long[] v;
    private int w;
    private int x;
    private com.tkay.expressad.exoplayer.g.b y;
    private boolean z;

    @java.lang.Deprecated
    public interface a extends com.tkay.expressad.exoplayer.g.f {
    }

    public g(com.tkay.expressad.exoplayer.g.f r2, android.os.Looper r3) {
            r1 = this;
            com.tkay.expressad.exoplayer.g.d r0 = com.tkay.expressad.exoplayer.g.d.a
            r1.<init>(r2, r3, r0)
            return
    }

    private g(com.tkay.expressad.exoplayer.g.f r2, android.os.Looper r3, com.tkay.expressad.exoplayer.g.d r4) {
            r1 = this;
            r0 = 4
            r1.<init>(r0)
            java.lang.Object r2 = com.tkay.expressad.exoplayer.k.a.a(r2)
            com.tkay.expressad.exoplayer.g.f r2 = (com.tkay.expressad.exoplayer.g.f) r2
            r1.q = r2
            if (r3 != 0) goto L10
            r2 = 0
            goto L15
        L10:
            android.os.Handler r2 = new android.os.Handler
            r2.<init>(r3, r1)
        L15:
            r1.r = r2
            java.lang.Object r2 = com.tkay.expressad.exoplayer.k.a.a(r4)
            com.tkay.expressad.exoplayer.g.d r2 = (com.tkay.expressad.exoplayer.g.d) r2
            r1.p = r2
            com.tkay.expressad.exoplayer.n r2 = new com.tkay.expressad.exoplayer.n
            r2.<init>()
            r1.s = r2
            com.tkay.expressad.exoplayer.g.e r2 = new com.tkay.expressad.exoplayer.g.e
            r2.<init>()
            r1.t = r2
            r2 = 5
            com.tkay.expressad.exoplayer.g.a[] r3 = new com.tkay.expressad.exoplayer.g.a[r2]
            r1.u = r3
            long[] r2 = new long[r2]
            r1.v = r2
            return
    }

    private void a(com.tkay.expressad.exoplayer.g.a r3) {
            r2 = this;
            android.os.Handler r0 = r2.r
            if (r0 == 0) goto Ld
            r1 = 0
            android.os.Message r3 = r0.obtainMessage(r1, r3)
            r3.sendToTarget()
            return
        Ld:
            r2.b(r3)
            return
    }

    private void b(com.tkay.expressad.exoplayer.g.a r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.g.f r0 = r1.q
            r0.a(r2)
            return
    }

    private void w() {
            r2 = this;
            com.tkay.expressad.exoplayer.g.a[] r0 = r2.u
            r1 = 0
            java.util.Arrays.fill(r0, r1)
            r0 = 0
            r2.w = r0
            r2.x = r0
            return
    }

    @Override
    public final int a(com.tkay.expressad.exoplayer.m r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.g.d r0 = r1.p
            boolean r0 = r0.a(r2)
            if (r0 == 0) goto L15
            r0 = 0
            com.tkay.expressad.exoplayer.d.e r2 = r2.k
            boolean r2 = a(r0, r2)
            if (r2 == 0) goto L13
            r2 = 4
            return r2
        L13:
            r2 = 2
            return r2
        L15:
            r2 = 0
            return r2
    }

    @Override
    public final void a(long r6, long r8) {
            r5 = this;
            boolean r8 = r5.z
            r9 = 0
            r0 = 5
            r1 = 1
            if (r8 != 0) goto L67
            int r8 = r5.x
            if (r8 >= r0) goto L67
            com.tkay.expressad.exoplayer.g.e r8 = r5.t
            r8.a()
            com.tkay.expressad.exoplayer.n r8 = r5.s
            com.tkay.expressad.exoplayer.g.e r2 = r5.t
            int r8 = r5.a(r8, r2, r9)
            r2 = -4
            if (r8 != r2) goto L67
            com.tkay.expressad.exoplayer.g.e r8 = r5.t
            boolean r8 = r8.c()
            if (r8 == 0) goto L26
            r5.z = r1
            goto L67
        L26:
            com.tkay.expressad.exoplayer.g.e r8 = r5.t
            boolean r8 = r8.b()
            if (r8 != 0) goto L67
            com.tkay.expressad.exoplayer.g.e r8 = r5.t
            com.tkay.expressad.exoplayer.n r2 = r5.s
            com.tkay.expressad.exoplayer.m r2 = r2.a
            long r2 = r2.l
            r8.g = r2
            com.tkay.expressad.exoplayer.g.e r8 = r5.t
            r8.h()
            int r8 = r5.w     // Catch: com.tkay.expressad.exoplayer.g.c -> L5d
            int r2 = r5.x     // Catch: com.tkay.expressad.exoplayer.g.c -> L5d
            int r8 = r8 + r2
            int r8 = r8 % r0
            com.tkay.expressad.exoplayer.g.a[] r2 = r5.u     // Catch: com.tkay.expressad.exoplayer.g.c -> L5d
            com.tkay.expressad.exoplayer.g.b r3 = r5.y     // Catch: com.tkay.expressad.exoplayer.g.c -> L5d
            com.tkay.expressad.exoplayer.g.e r4 = r5.t     // Catch: com.tkay.expressad.exoplayer.g.c -> L5d
            com.tkay.expressad.exoplayer.g.a r3 = r3.a(r4)     // Catch: com.tkay.expressad.exoplayer.g.c -> L5d
            r2[r8] = r3     // Catch: com.tkay.expressad.exoplayer.g.c -> L5d
            long[] r2 = r5.v     // Catch: com.tkay.expressad.exoplayer.g.c -> L5d
            com.tkay.expressad.exoplayer.g.e r3 = r5.t     // Catch: com.tkay.expressad.exoplayer.g.c -> L5d
            long r3 = r3.f     // Catch: com.tkay.expressad.exoplayer.g.c -> L5d
            r2[r8] = r3     // Catch: com.tkay.expressad.exoplayer.g.c -> L5d
            int r8 = r5.x     // Catch: com.tkay.expressad.exoplayer.g.c -> L5d
            int r8 = r8 + r1
            r5.x = r8     // Catch: com.tkay.expressad.exoplayer.g.c -> L5d
            goto L67
        L5d:
            r6 = move-exception
            int r7 = r5.s()
            com.tkay.expressad.exoplayer.g r6 = com.tkay.expressad.exoplayer.g.a(r6, r7)
            throw r6
        L67:
            int r8 = r5.x
            if (r8 <= 0) goto L98
            long[] r8 = r5.v
            int r2 = r5.w
            r3 = r8[r2]
            int r6 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r6 > 0) goto L98
            com.tkay.expressad.exoplayer.g.a[] r6 = r5.u
            r6 = r6[r2]
            android.os.Handler r7 = r5.r
            if (r7 == 0) goto L85
            android.os.Message r6 = r7.obtainMessage(r9, r6)
            r6.sendToTarget()
            goto L88
        L85:
            r5.b(r6)
        L88:
            com.tkay.expressad.exoplayer.g.a[] r6 = r5.u
            int r7 = r5.w
            r8 = 0
            r6[r7] = r8
            int r7 = r7 + r1
            int r7 = r7 % r0
            r5.w = r7
            int r6 = r5.x
            int r6 = r6 - r1
            r5.x = r6
        L98:
            return
    }

    @Override
    protected final void a(long r1, boolean r3) {
            r0 = this;
            r0.w()
            r1 = 0
            r0.z = r1
            return
    }

    @Override
    protected final void a(com.tkay.expressad.exoplayer.m[] r1, long r2) {
            r0 = this;
            com.tkay.expressad.exoplayer.g.d r2 = r0.p
            r3 = 0
            r1 = r1[r3]
            com.tkay.expressad.exoplayer.g.b r1 = r2.b(r1)
            r0.y = r1
            return
    }

    @Override
    public final boolean handleMessage(android.os.Message r2) {
            r1 = this;
            int r0 = r2.what
            if (r0 != 0) goto Ld
            java.lang.Object r2 = r2.obj
            com.tkay.expressad.exoplayer.g.a r2 = (com.tkay.expressad.exoplayer.g.a) r2
            r1.b(r2)
            r2 = 1
            return r2
        Ld:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            r2.<init>()
            throw r2
    }

    @Override
    protected final void p() {
            r1 = this;
            r1.w()
            r0 = 0
            r1.y = r0
            return
    }

    @Override
    public final boolean u() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final boolean v() {
            r1 = this;
            boolean r0 = r1.z
            return r0
    }
}

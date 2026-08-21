package com.tkay.expressad.exoplayer.j;

public final class z implements com.tkay.expressad.exoplayer.j.h {
    private final com.tkay.expressad.exoplayer.j.h a;
    private final com.tkay.expressad.exoplayer.j.g b;
    private boolean c;
    private long d;

    public z(com.tkay.expressad.exoplayer.j.h r1, com.tkay.expressad.exoplayer.j.g r2) {
            r0 = this;
            r0.<init>()
            java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r1)
            com.tkay.expressad.exoplayer.j.h r1 = (com.tkay.expressad.exoplayer.j.h) r1
            r0.a = r1
            java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r2)
            com.tkay.expressad.exoplayer.j.g r1 = (com.tkay.expressad.exoplayer.j.g) r1
            r0.b = r1
            return
    }

    @Override
    public final int a(byte[] r5, int r6, int r7) {
            r4 = this;
            long r0 = r4.d
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto La
            r5 = -1
            return r5
        La:
            com.tkay.expressad.exoplayer.j.h r0 = r4.a
            int r7 = r0.a(r5, r6, r7)
            if (r7 <= 0) goto L23
            com.tkay.expressad.exoplayer.j.g r0 = r4.b
            r0.a(r5, r6, r7)
            long r5 = r4.d
            r0 = -1
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 == 0) goto L23
            long r0 = (long) r7
            long r5 = r5 - r0
            r4.d = r5
        L23:
            return r7
    }

    @Override
    public final long a(com.tkay.expressad.exoplayer.j.k r12) {
            r11 = this;
            com.tkay.expressad.exoplayer.j.h r0 = r11.a
            long r0 = r0.a(r12)
            r11.d = r0
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto Lf
            return r2
        Lf:
            long r0 = r12.g
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L30
            long r0 = r11.d
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L30
            com.tkay.expressad.exoplayer.j.k r0 = new com.tkay.expressad.exoplayer.j.k
            android.net.Uri r2 = r12.c
            long r3 = r12.e
            long r5 = r12.f
            long r7 = r11.d
            java.lang.String r9 = r12.h
            int r10 = r12.i
            r1 = r0
            r1.<init>(r2, r3, r5, r7, r9, r10)
            r12 = r0
        L30:
            r0 = 1
            r11.c = r0
            com.tkay.expressad.exoplayer.j.g r0 = r11.b
            r0.a(r12)
            long r0 = r11.d
            return r0
    }

    @Override
    public final android.net.Uri a() {
            r1 = this;
            com.tkay.expressad.exoplayer.j.h r0 = r1.a
            android.net.Uri r0 = r0.a()
            return r0
    }

    @Override
    public final void b() {
            r3 = this;
            r0 = 0
            com.tkay.expressad.exoplayer.j.h r1 = r3.a     // Catch: java.lang.Throwable -> L12
            r1.b()     // Catch: java.lang.Throwable -> L12
            boolean r1 = r3.c
            if (r1 == 0) goto L11
            r3.c = r0
            com.tkay.expressad.exoplayer.j.g r0 = r3.b
            r0.a()
        L11:
            return
        L12:
            r1 = move-exception
            boolean r2 = r3.c
            if (r2 == 0) goto L1e
            r3.c = r0
            com.tkay.expressad.exoplayer.j.g r0 = r3.b
            r0.a()
        L1e:
            throw r1
    }
}

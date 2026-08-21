package com.tkay.expressad.exoplayer.g.c;

public final class c implements com.tkay.expressad.exoplayer.g.b {
    private static final int a = 0;
    private static final int b = 4;
    private static final int c = 5;
    private static final int d = 6;
    private static final int e = 255;
    private final com.tkay.expressad.exoplayer.k.s f;
    private final com.tkay.expressad.exoplayer.k.r g;
    private com.tkay.expressad.exoplayer.k.ac h;

    public c() {
            r1 = this;
            r1.<init>()
            com.tkay.expressad.exoplayer.k.s r0 = new com.tkay.expressad.exoplayer.k.s
            r0.<init>()
            r1.f = r0
            com.tkay.expressad.exoplayer.k.r r0 = new com.tkay.expressad.exoplayer.k.r
            r0.<init>()
            r1.g = r0
            return
    }

    @Override
    public final com.tkay.expressad.exoplayer.g.a a(com.tkay.expressad.exoplayer.g.e r8) {
            r7 = this;
            com.tkay.expressad.exoplayer.k.ac r0 = r7.h
            if (r0 == 0) goto L10
            long r0 = r8.g
            com.tkay.expressad.exoplayer.k.ac r2 = r7.h
            long r2 = r2.a()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L21
        L10:
            com.tkay.expressad.exoplayer.k.ac r0 = new com.tkay.expressad.exoplayer.k.ac
            long r1 = r8.f
            r0.<init>(r1)
            r7.h = r0
            long r1 = r8.f
            long r3 = r8.g
            long r1 = r1 - r3
            r0.b(r1)
        L21:
            java.nio.ByteBuffer r8 = r8.e
            byte[] r0 = r8.array()
            int r8 = r8.limit()
            com.tkay.expressad.exoplayer.k.s r1 = r7.f
            r1.a(r0, r8)
            com.tkay.expressad.exoplayer.k.r r1 = r7.g
            r1.a(r0, r8)
            com.tkay.expressad.exoplayer.k.r r8 = r7.g
            r0 = 39
            r8.b(r0)
            com.tkay.expressad.exoplayer.k.r r8 = r7.g
            r0 = 1
            int r8 = r8.c(r0)
            long r1 = (long) r8
            r8 = 32
            long r1 = r1 << r8
            com.tkay.expressad.exoplayer.k.r r3 = r7.g
            int r8 = r3.c(r8)
            long r3 = (long) r8
            long r1 = r1 | r3
            com.tkay.expressad.exoplayer.k.r r8 = r7.g
            r3 = 20
            r8.b(r3)
            com.tkay.expressad.exoplayer.k.r r8 = r7.g
            r3 = 12
            int r8 = r8.c(r3)
            com.tkay.expressad.exoplayer.k.r r3 = r7.g
            r4 = 8
            int r3 = r3.c(r4)
            r4 = 0
            com.tkay.expressad.exoplayer.k.s r5 = r7.f
            r6 = 14
            r5.d(r6)
            if (r3 == 0) goto L9e
            r5 = 255(0xff, float:3.57E-43)
            if (r3 == r5) goto L97
            r8 = 4
            if (r3 == r8) goto L90
            r8 = 5
            if (r3 == r8) goto L87
            r8 = 6
            if (r3 == r8) goto L7e
            goto La3
        L7e:
            com.tkay.expressad.exoplayer.k.s r8 = r7.f
            com.tkay.expressad.exoplayer.k.ac r3 = r7.h
            com.tkay.expressad.exoplayer.g.c.g r4 = com.tkay.expressad.exoplayer.g.c.g.a(r8, r1, r3)
            goto La3
        L87:
            com.tkay.expressad.exoplayer.k.s r8 = r7.f
            com.tkay.expressad.exoplayer.k.ac r3 = r7.h
            com.tkay.expressad.exoplayer.g.c.d r4 = com.tkay.expressad.exoplayer.g.c.d.a(r8, r1, r3)
            goto La3
        L90:
            com.tkay.expressad.exoplayer.k.s r8 = r7.f
            com.tkay.expressad.exoplayer.g.c.f r4 = com.tkay.expressad.exoplayer.g.c.f.a(r8)
            goto La3
        L97:
            com.tkay.expressad.exoplayer.k.s r3 = r7.f
            com.tkay.expressad.exoplayer.g.c.a r4 = com.tkay.expressad.exoplayer.g.c.a.a(r3, r8, r1)
            goto La3
        L9e:
            com.tkay.expressad.exoplayer.g.c.e r4 = new com.tkay.expressad.exoplayer.g.c.e
            r4.<init>()
        La3:
            r8 = 0
            if (r4 != 0) goto Lae
            com.tkay.expressad.exoplayer.g.a r0 = new com.tkay.expressad.exoplayer.g.a
            com.tkay.expressad.exoplayer.g.a$a[] r8 = new com.tkay.expressad.exoplayer.g.a.a[r8]
            r0.<init>(r8)
            return r0
        Lae:
            com.tkay.expressad.exoplayer.g.a r1 = new com.tkay.expressad.exoplayer.g.a
            com.tkay.expressad.exoplayer.g.a$a[] r0 = new com.tkay.expressad.exoplayer.g.a.a[r0]
            r0[r8] = r4
            r1.<init>(r0)
            return r1
    }
}

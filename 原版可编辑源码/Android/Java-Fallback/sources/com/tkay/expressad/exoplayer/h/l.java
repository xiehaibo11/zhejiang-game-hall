package com.tkay.expressad.exoplayer.h;

public final class l implements com.tkay.expressad.exoplayer.h.r, com.tkay.expressad.exoplayer.h.r.a {
    public final com.tkay.expressad.exoplayer.h.s a;
    public final com.tkay.expressad.exoplayer.h.s.a b;
    private final com.tkay.expressad.exoplayer.j.b c;
    private com.tkay.expressad.exoplayer.h.r d;
    private com.tkay.expressad.exoplayer.h.r.a e;
    private long f;
    private com.tkay.expressad.exoplayer.h.l.a g;
    private boolean h;
    private long i;

    public interface a {
        void a(com.tkay.expressad.exoplayer.h.s.a r1, java.io.IOException r2);
    }

    public l(com.tkay.expressad.exoplayer.h.s r1, com.tkay.expressad.exoplayer.h.s.a r2, com.tkay.expressad.exoplayer.j.b r3) {
            r0 = this;
            r0.<init>()
            r0.b = r2
            r0.c = r3
            r0.a = r1
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0.i = r1
            return
    }

    private void h() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.r$a r0 = r1.e
            r0.a(r1)
            return
    }

    @Override
    public final long a(long r2, com.tkay.expressad.exoplayer.ac r4) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.r r0 = r1.d
            long r2 = r0.a(r2, r4)
            return r2
    }

    @Override
    public final long a(com.tkay.expressad.exoplayer.i.f[] r14, boolean[] r15, com.tkay.expressad.exoplayer.h.y[] r16, boolean[] r17, long r18) {
            r13 = this;
            r0 = r13
            long r1 = r0.i
            r3 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 == 0) goto L16
            r5 = 0
            int r5 = (r18 > r5 ? 1 : (r18 == r5 ? 0 : -1))
            if (r5 != 0) goto L16
            r0.i = r3
            r11 = r1
            goto L18
        L16:
            r11 = r18
        L18:
            com.tkay.expressad.exoplayer.h.r r6 = r0.d
            r7 = r14
            r8 = r15
            r9 = r16
            r10 = r17
            long r1 = r6.a(r7, r8, r9, r10, r11)
            return r1
    }

    @Override
    public final void a() {
            r3 = this;
            com.tkay.expressad.exoplayer.h.r r0 = r3.d     // Catch: java.io.IOException -> L10
            if (r0 == 0) goto La
            com.tkay.expressad.exoplayer.h.r r0 = r3.d     // Catch: java.io.IOException -> L10
            r0.a()     // Catch: java.io.IOException -> L10
            return
        La:
            com.tkay.expressad.exoplayer.h.s r0 = r3.a     // Catch: java.io.IOException -> L10
            r0.b()     // Catch: java.io.IOException -> L10
            return
        L10:
            r0 = move-exception
            com.tkay.expressad.exoplayer.h.l$a r1 = r3.g
            if (r1 == 0) goto L22
            boolean r2 = r3.h
            if (r2 != 0) goto L21
            r2 = 1
            r3.h = r2
            com.tkay.expressad.exoplayer.h.s$a r2 = r3.b
            r1.a(r2, r0)
        L21:
            return
        L22:
            throw r0
    }

    @Override
    public final void a(long r2, boolean r4) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.r r0 = r1.d
            r0.a(r2, r4)
            return
    }

    public final void a(com.tkay.expressad.exoplayer.h.l.a r1) {
            r0 = this;
            r0.g = r1
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.r.a r1, long r2) {
            r0 = this;
            r0.e = r1
            r0.f = r2
            com.tkay.expressad.exoplayer.h.r r1 = r0.d
            if (r1 == 0) goto Lb
            r1.a(r0, r2)
        Lb:
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.r r1) {
            r0 = this;
            com.tkay.expressad.exoplayer.h.r$a r1 = r0.e
            r1.a(r0)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.z r1) {
            r0 = this;
            com.tkay.expressad.exoplayer.h.r$a r1 = r0.e
            r1.a(r0)
            return
    }

    @Override
    public final void a_(long r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.r r0 = r1.d
            r0.a_(r2)
            return
    }

    @Override
    public final long b(long r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.r r0 = r1.d
            long r2 = r0.b(r2)
            return r2
    }

    @Override
    public final com.tkay.expressad.exoplayer.h.af b() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.r r0 = r1.d
            com.tkay.expressad.exoplayer.h.af r0 = r0.b()
            return r0
    }

    @Override
    public final long c() {
            r2 = this;
            com.tkay.expressad.exoplayer.h.r r0 = r2.d
            long r0 = r0.c()
            return r0
    }

    @Override
    public final boolean c(long r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.r r0 = r1.d
            if (r0 == 0) goto Lc
            boolean r2 = r0.c(r2)
            if (r2 == 0) goto Lc
            r2 = 1
            return r2
        Lc:
            r2 = 0
            return r2
    }

    @Override
    public final long d() {
            r2 = this;
            com.tkay.expressad.exoplayer.h.r r0 = r2.d
            long r0 = r0.d()
            return r0
    }

    public final void d(long r5) {
            r4 = this;
            long r0 = r4.f
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L10
            int r0 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r0 == 0) goto L10
            r4.i = r5
            r4.f = r5
        L10:
            return
    }

    @Override
    public final long e() {
            r2 = this;
            com.tkay.expressad.exoplayer.h.r r0 = r2.d
            long r0 = r0.e()
            return r0
    }

    public final void f() {
            r3 = this;
            com.tkay.expressad.exoplayer.h.s r0 = r3.a
            com.tkay.expressad.exoplayer.h.s$a r1 = r3.b
            com.tkay.expressad.exoplayer.j.b r2 = r3.c
            com.tkay.expressad.exoplayer.h.r r0 = r0.a(r1, r2)
            r3.d = r0
            com.tkay.expressad.exoplayer.h.r$a r1 = r3.e
            if (r1 == 0) goto L15
            long r1 = r3.f
            r0.a(r3, r1)
        L15:
            return
    }

    public final void g() {
            r2 = this;
            com.tkay.expressad.exoplayer.h.r r0 = r2.d
            if (r0 == 0) goto L9
            com.tkay.expressad.exoplayer.h.s r1 = r2.a
            r1.a(r0)
        L9:
            return
    }
}

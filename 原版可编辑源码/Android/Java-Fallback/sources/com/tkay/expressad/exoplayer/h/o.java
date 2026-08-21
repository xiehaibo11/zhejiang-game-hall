package com.tkay.expressad.exoplayer.h;

public final class o extends com.tkay.expressad.exoplayer.h.c implements com.tkay.expressad.exoplayer.h.n.c {
    public static final int a = 3;
    public static final int b = 6;
    public static final int c = -1;
    public static final int d = 1048576;
    private final android.net.Uri e;
    private final com.tkay.expressad.exoplayer.j.h.a f;
    private final com.tkay.expressad.exoplayer.e.h g;
    private final int h;
    private final java.lang.String i;
    private final int j;
    private final java.lang.Object k;
    private long l;
    private boolean m;

    static class 1 {
    }

    @java.lang.Deprecated
    public interface a {
        void a();
    }

    private static final class b extends com.tkay.expressad.exoplayer.h.k {
        private final com.tkay.expressad.exoplayer.h.o.a a;

        public b(com.tkay.expressad.exoplayer.h.o.a r1) {
                r0 = this;
                r0.<init>()
                java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r1)
                com.tkay.expressad.exoplayer.h.o$a r1 = (com.tkay.expressad.exoplayer.h.o.a) r1
                r0.a = r1
                return
        }

        @Override
        public final void a(int r1, com.tkay.expressad.exoplayer.h.s.a r2, com.tkay.expressad.exoplayer.h.t.b r3, com.tkay.expressad.exoplayer.h.t.c r4, java.io.IOException r5, boolean r6) {
                r0 = this;
                return
        }
    }

    public static final class c implements com.tkay.expressad.exoplayer.h.a.c.e {
        private final com.tkay.expressad.exoplayer.j.h.a a;
        private com.tkay.expressad.exoplayer.e.h b;
        private java.lang.String c;
        private java.lang.Object d;
        private int e;
        private int f;
        private boolean g;

        public c(com.tkay.expressad.exoplayer.j.h.a r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r1 = -1
                r0.e = r1
                r1 = 1048576(0x100000, float:1.469368E-39)
                r0.f = r1
                return
        }

        private com.tkay.expressad.exoplayer.h.o.c a(int r2) {
                r1 = this;
                boolean r0 = r1.g
                r0 = r0 ^ 1
                com.tkay.expressad.exoplayer.k.a.b(r0)
                r1.e = r2
                return r1
        }

        private com.tkay.expressad.exoplayer.h.o.c a(com.tkay.expressad.exoplayer.e.h r2) {
                r1 = this;
                boolean r0 = r1.g
                r0 = r0 ^ 1
                com.tkay.expressad.exoplayer.k.a.b(r0)
                r1.b = r2
                return r1
        }

        private com.tkay.expressad.exoplayer.h.o.c a(java.lang.Object r2) {
                r1 = this;
                boolean r0 = r1.g
                r0 = r0 ^ 1
                com.tkay.expressad.exoplayer.k.a.b(r0)
                r1.d = r2
                return r1
        }

        private com.tkay.expressad.exoplayer.h.o.c a(java.lang.String r2) {
                r1 = this;
                boolean r0 = r1.g
                r0 = r0 ^ 1
                com.tkay.expressad.exoplayer.k.a.b(r0)
                r1.c = r2
                return r1
        }

        @java.lang.Deprecated
        private com.tkay.expressad.exoplayer.h.o a(android.net.Uri r1, android.os.Handler r2, com.tkay.expressad.exoplayer.h.t r3) {
                r0 = this;
                com.tkay.expressad.exoplayer.h.o r1 = r0.a(r1)
                if (r2 == 0) goto Lb
                if (r3 == 0) goto Lb
                r1.a(r2, r3)
            Lb:
                return r1
        }

        private com.tkay.expressad.exoplayer.h.o.c b(int r2) {
                r1 = this;
                boolean r0 = r1.g
                r0 = r0 ^ 1
                com.tkay.expressad.exoplayer.k.a.b(r0)
                r1.f = r2
                return r1
        }

        public final com.tkay.expressad.exoplayer.h.o a(android.net.Uri r11) {
                r10 = this;
                r0 = 1
                r10.g = r0
                com.tkay.expressad.exoplayer.e.h r0 = r10.b
                if (r0 != 0) goto Le
                com.tkay.expressad.exoplayer.e.c r0 = new com.tkay.expressad.exoplayer.e.c
                r0.<init>()
                r10.b = r0
            Le:
                com.tkay.expressad.exoplayer.h.o r0 = new com.tkay.expressad.exoplayer.h.o
                com.tkay.expressad.exoplayer.j.h$a r3 = r10.a
                com.tkay.expressad.exoplayer.e.h r4 = r10.b
                int r5 = r10.e
                java.lang.String r6 = r10.c
                int r7 = r10.f
                java.lang.Object r8 = r10.d
                r9 = 0
                r1 = r0
                r2 = r11
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
                return r0
        }

        @Override
        public final int[] a() {
                r3 = this;
                r0 = 1
                int[] r0 = new int[r0]
                r1 = 0
                r2 = 3
                r0[r1] = r2
                return r0
        }

        @Override
        public final com.tkay.expressad.exoplayer.h.s b(android.net.Uri r1) {
                r0 = this;
                com.tkay.expressad.exoplayer.h.o r1 = r0.a(r1)
                return r1
        }
    }

    private o(android.net.Uri r1, com.tkay.expressad.exoplayer.j.h.a r2, com.tkay.expressad.exoplayer.e.h r3, int r4, java.lang.String r5, int r6, java.lang.Object r7) {
            r0 = this;
            r0.<init>()
            r0.e = r1
            r0.f = r2
            r0.g = r3
            r0.h = r4
            r0.i = r5
            r0.j = r6
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0.l = r1
            r0.k = r7
            return
    }

    o(android.net.Uri r1, com.tkay.expressad.exoplayer.j.h.a r2, com.tkay.expressad.exoplayer.e.h r3, int r4, java.lang.String r5, int r6, java.lang.Object r7, byte r8) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    @java.lang.Deprecated
    private o(android.net.Uri r8, com.tkay.expressad.exoplayer.j.h.a r9, com.tkay.expressad.exoplayer.e.h r10, android.os.Handler r11, com.tkay.expressad.exoplayer.h.o.a r12) {
            r7 = this;
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    @java.lang.Deprecated
    private o(android.net.Uri r9, com.tkay.expressad.exoplayer.j.h.a r10, com.tkay.expressad.exoplayer.e.h r11, android.os.Handler r12, com.tkay.expressad.exoplayer.h.o.a r13, java.lang.String r14) {
            r8 = this;
            r7 = 0
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    @java.lang.Deprecated
    private o(android.net.Uri r9, com.tkay.expressad.exoplayer.j.h.a r10, com.tkay.expressad.exoplayer.e.h r11, android.os.Handler r12, com.tkay.expressad.exoplayer.h.o.a r13, java.lang.String r14, byte r15) {
            r8 = this;
            r4 = -1
            r6 = 1048576(0x100000, float:1.469368E-39)
            r7 = 0
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r5 = r14
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            if (r13 == 0) goto L18
            if (r12 == 0) goto L18
            com.tkay.expressad.exoplayer.h.o$b r9 = new com.tkay.expressad.exoplayer.h.o$b
            r9.<init>(r13)
            r8.a(r12, r9)
        L18:
            return
    }

    private void b(long r7, boolean r9) {
            r6 = this;
            r6.l = r7
            r6.m = r9
            com.tkay.expressad.exoplayer.h.ab r7 = new com.tkay.expressad.exoplayer.h.ab
            long r1 = r6.l
            boolean r3 = r6.m
            java.lang.Object r5 = r6.k
            r4 = 0
            r0 = r7
            r0.<init>(r1, r3, r4, r5)
            r8 = 0
            r6.a(r7, r8)
            return
    }

    @Override
    public final com.tkay.expressad.exoplayer.h.r a(com.tkay.expressad.exoplayer.h.s.a r12, com.tkay.expressad.exoplayer.j.b r13) {
            r11 = this;
            int r0 = r12.a
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            com.tkay.expressad.exoplayer.k.a.a(r0)
            com.tkay.expressad.exoplayer.h.n r0 = new com.tkay.expressad.exoplayer.h.n
            android.net.Uri r2 = r11.e
            com.tkay.expressad.exoplayer.j.h$a r1 = r11.f
            com.tkay.expressad.exoplayer.j.h r3 = r1.a()
            com.tkay.expressad.exoplayer.e.h r1 = r11.g
            com.tkay.expressad.exoplayer.e.e[] r4 = r1.a()
            int r5 = r11.h
            com.tkay.expressad.exoplayer.h.t$a r6 = r11.a(r12)
            java.lang.String r9 = r11.i
            int r10 = r11.j
            r1 = r0
            r7 = r11
            r8 = r13
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return r0
    }

    @Override
    public final void a() {
            r0 = this;
            return
    }

    @Override
    public final void a(long r3, boolean r5) {
            r2 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 != 0) goto Lb
            long r3 = r2.l
        Lb:
            long r0 = r2.l
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 != 0) goto L16
            boolean r0 = r2.m
            if (r0 != r5) goto L16
            return
        L16:
            r2.b(r3, r5)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.r r1) {
            r0 = this;
            com.tkay.expressad.exoplayer.h.n r1 = (com.tkay.expressad.exoplayer.h.n) r1
            r1.f()
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h r2, boolean r3) {
            r1 = this;
            long r2 = r1.l
            r0 = 0
            r1.b(r2, r0)
            return
    }

    @Override
    public final void b() {
            r0 = this;
            return
    }
}

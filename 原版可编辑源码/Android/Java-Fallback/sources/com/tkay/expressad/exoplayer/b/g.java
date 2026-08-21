package com.tkay.expressad.exoplayer.b;

public interface g {

    public static final class a {
        private final android.os.Handler a;
        private final com.tkay.expressad.exoplayer.b.g b;







        public a(android.os.Handler r1, com.tkay.expressad.exoplayer.b.g r2) {
                r0 = this;
                r0.<init>()
                if (r2 == 0) goto Lc
                java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r1)
                android.os.Handler r1 = (android.os.Handler) r1
                goto Ld
            Lc:
                r1 = 0
            Ld:
                r0.a = r1
                r0.b = r2
                return
        }

        static com.tkay.expressad.exoplayer.b.g a(com.tkay.expressad.exoplayer.b.g.a r0) {
                com.tkay.expressad.exoplayer.b.g r0 = r0.b
                return r0
        }

        public final void a(int r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.b.g r0 = r2.b
                if (r0 == 0) goto Le
                android.os.Handler r0 = r2.a
                com.tkay.expressad.exoplayer.b.g$a$6 r1 = new com.tkay.expressad.exoplayer.b.g$a$6
                r1.<init>(r2, r3)
                r0.post(r1)
            Le:
                return
        }

        public final void a(int r10, long r11, long r13) {
                r9 = this;
                com.tkay.expressad.exoplayer.b.g r0 = r9.b
                if (r0 == 0) goto L13
                android.os.Handler r0 = r9.a
                com.tkay.expressad.exoplayer.b.g$a$4 r8 = new com.tkay.expressad.exoplayer.b.g$a$4
                r1 = r8
                r2 = r9
                r3 = r10
                r4 = r11
                r6 = r13
                r1.<init>(r2, r3, r4, r6)
                r0.post(r8)
            L13:
                return
        }

        public final void a(com.tkay.expressad.exoplayer.c.d r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.b.g r0 = r2.b
                if (r0 == 0) goto Le
                android.os.Handler r0 = r2.a
                com.tkay.expressad.exoplayer.b.g$a$1 r1 = new com.tkay.expressad.exoplayer.b.g$a$1
                r1.<init>(r2, r3)
                r0.post(r1)
            Le:
                return
        }

        public final void a(com.tkay.expressad.exoplayer.m r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.b.g r0 = r2.b
                if (r0 == 0) goto Le
                android.os.Handler r0 = r2.a
                com.tkay.expressad.exoplayer.b.g$a$3 r1 = new com.tkay.expressad.exoplayer.b.g$a$3
                r1.<init>(r2, r3)
                r0.post(r1)
            Le:
                return
        }

        public final void a(java.lang.String r10, long r11, long r13) {
                r9 = this;
                com.tkay.expressad.exoplayer.b.g r0 = r9.b
                if (r0 == 0) goto L13
                android.os.Handler r0 = r9.a
                com.tkay.expressad.exoplayer.b.g$a$2 r8 = new com.tkay.expressad.exoplayer.b.g$a$2
                r1 = r8
                r2 = r9
                r3 = r10
                r4 = r11
                r6 = r13
                r1.<init>(r2, r3, r4, r6)
                r0.post(r8)
            L13:
                return
        }

        public final void b(com.tkay.expressad.exoplayer.c.d r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.b.g r0 = r2.b
                if (r0 == 0) goto Le
                android.os.Handler r0 = r2.a
                com.tkay.expressad.exoplayer.b.g$a$5 r1 = new com.tkay.expressad.exoplayer.b.g$a$5
                r1.<init>(r2, r3)
                r0.post(r1)
            Le:
                return
        }
    }

    void a(int r1);

    void a(int r1, long r2, long r4);

    void b(com.tkay.expressad.exoplayer.m r1);

    void b(java.lang.String r1, long r2, long r4);

    void c(com.tkay.expressad.exoplayer.c.d r1);

    void d(com.tkay.expressad.exoplayer.c.d r1);
}

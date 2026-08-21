package com.tkay.expressad.exoplayer.l;

public interface h {

    public static final class a {
        private final android.os.Handler a;
        private final com.tkay.expressad.exoplayer.l.h b;








        public a(android.os.Handler r1, com.tkay.expressad.exoplayer.l.h r2) {
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

        static com.tkay.expressad.exoplayer.l.h a(com.tkay.expressad.exoplayer.l.h.a r0) {
                com.tkay.expressad.exoplayer.l.h r0 = r0.b
                return r0
        }

        public final void a(int r9, int r10, int r11, float r12) {
                r8 = this;
                com.tkay.expressad.exoplayer.l.h r0 = r8.b
                if (r0 == 0) goto L14
                android.os.Handler r0 = r8.a
                com.tkay.expressad.exoplayer.l.h$a$5 r7 = new com.tkay.expressad.exoplayer.l.h$a$5
                r1 = r7
                r2 = r8
                r3 = r9
                r4 = r10
                r5 = r11
                r6 = r12
                r1.<init>(r2, r3, r4, r5, r6)
                r0.post(r7)
            L14:
                return
        }

        public final void a(int r3, long r4) {
                r2 = this;
                com.tkay.expressad.exoplayer.l.h r0 = r2.b
                if (r0 == 0) goto Le
                android.os.Handler r0 = r2.a
                com.tkay.expressad.exoplayer.l.h$a$4 r1 = new com.tkay.expressad.exoplayer.l.h$a$4
                r1.<init>(r2, r3, r4)
                r0.post(r1)
            Le:
                return
        }

        public final void a(android.view.Surface r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.l.h r0 = r2.b
                if (r0 == 0) goto Le
                android.os.Handler r0 = r2.a
                com.tkay.expressad.exoplayer.l.h$a$6 r1 = new com.tkay.expressad.exoplayer.l.h$a$6
                r1.<init>(r2, r3)
                r0.post(r1)
            Le:
                return
        }

        public final void a(com.tkay.expressad.exoplayer.c.d r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.l.h r0 = r2.b
                if (r0 == 0) goto Le
                android.os.Handler r0 = r2.a
                com.tkay.expressad.exoplayer.l.h$a$1 r1 = new com.tkay.expressad.exoplayer.l.h$a$1
                r1.<init>(r2, r3)
                r0.post(r1)
            Le:
                return
        }

        public final void a(com.tkay.expressad.exoplayer.m r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.l.h r0 = r2.b
                if (r0 == 0) goto Le
                android.os.Handler r0 = r2.a
                com.tkay.expressad.exoplayer.l.h$a$3 r1 = new com.tkay.expressad.exoplayer.l.h$a$3
                r1.<init>(r2, r3)
                r0.post(r1)
            Le:
                return
        }

        public final void a(java.lang.String r10, long r11, long r13) {
                r9 = this;
                com.tkay.expressad.exoplayer.l.h r0 = r9.b
                if (r0 == 0) goto L13
                android.os.Handler r0 = r9.a
                com.tkay.expressad.exoplayer.l.h$a$2 r8 = new com.tkay.expressad.exoplayer.l.h$a$2
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
                com.tkay.expressad.exoplayer.l.h r0 = r2.b
                if (r0 == 0) goto Le
                android.os.Handler r0 = r2.a
                com.tkay.expressad.exoplayer.l.h$a$7 r1 = new com.tkay.expressad.exoplayer.l.h$a$7
                r1.<init>(r2, r3)
                r0.post(r1)
            Le:
                return
        }
    }

    void a(int r1, int r2, int r3, float r4);

    void a(int r1, long r2);

    void a(android.view.Surface r1);

    void a(com.tkay.expressad.exoplayer.c.d r1);

    void a(com.tkay.expressad.exoplayer.m r1);

    void a(java.lang.String r1, long r2, long r4);

    void b(com.tkay.expressad.exoplayer.c.d r1);
}

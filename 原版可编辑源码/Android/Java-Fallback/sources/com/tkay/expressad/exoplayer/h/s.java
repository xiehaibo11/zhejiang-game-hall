package com.tkay.expressad.exoplayer.h;

public interface s {

    public static final class a {
        public final int a;
        public final int b;
        public final int c;
        public final long d;

        public a(int r3) {
                r2 = this;
                r0 = -1
                r2.<init>(r3, r0)
                return
        }

        public a(int r1, int r2, int r3, long r4) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                return
        }

        public a(int r7, long r8) {
                r6 = this;
                r2 = -1
                r3 = -1
                r0 = r6
                r1 = r7
                r4 = r8
                r0.<init>(r1, r2, r3, r4)
                return
        }

        public final com.tkay.expressad.exoplayer.h.s.a a(int r8) {
                r7 = this;
                int r0 = r7.a
                if (r0 != r8) goto L5
                return r7
            L5:
                com.tkay.expressad.exoplayer.h.s$a r0 = new com.tkay.expressad.exoplayer.h.s$a
                int r3 = r7.b
                int r4 = r7.c
                long r5 = r7.d
                r1 = r0
                r2 = r8
                r1.<init>(r2, r3, r4, r5)
                return r0
        }

        public final boolean a() {
                r2 = this;
                int r0 = r2.b
                r1 = -1
                if (r0 == r1) goto L7
                r0 = 1
                return r0
            L7:
                r0 = 0
                return r0
        }

        public final boolean equals(java.lang.Object r7) {
                r6 = this;
                r0 = 1
                if (r6 != r7) goto L4
                return r0
            L4:
                r1 = 0
                if (r7 == 0) goto L2f
                java.lang.Class r2 = r6.getClass()
                java.lang.Class r3 = r7.getClass()
                if (r2 == r3) goto L12
                goto L2f
            L12:
                com.tkay.expressad.exoplayer.h.s$a r7 = (com.tkay.expressad.exoplayer.h.s.a) r7
                int r2 = r6.a
                int r3 = r7.a
                if (r2 != r3) goto L2f
                int r2 = r6.b
                int r3 = r7.b
                if (r2 != r3) goto L2f
                int r2 = r6.c
                int r3 = r7.c
                if (r2 != r3) goto L2f
                long r2 = r6.d
                long r4 = r7.d
                int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r7 != 0) goto L2f
                return r0
            L2f:
                return r1
        }

        public final int hashCode() {
                r3 = this;
                int r0 = r3.a
                int r0 = r0 + 527
                int r0 = r0 * 31
                int r1 = r3.b
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r3.c
                int r0 = r0 + r1
                int r0 = r0 * 31
                long r1 = r3.d
                int r1 = (int) r1
                int r0 = r0 + r1
                return r0
        }
    }

    public interface b {
        void a(com.tkay.expressad.exoplayer.h.s r1, com.tkay.expressad.exoplayer.ae r2, java.lang.Object r3);
    }

    com.tkay.expressad.exoplayer.h.r a(com.tkay.expressad.exoplayer.h.s.a r1, com.tkay.expressad.exoplayer.j.b r2);

    void a(android.os.Handler r1, com.tkay.expressad.exoplayer.h.t r2);

    void a(com.tkay.expressad.exoplayer.h.r r1);

    void a(com.tkay.expressad.exoplayer.h.s.b r1);

    void a(com.tkay.expressad.exoplayer.h.t r1);

    void a(com.tkay.expressad.exoplayer.h r1, boolean r2, com.tkay.expressad.exoplayer.h.s.b r3);

    void b();
}

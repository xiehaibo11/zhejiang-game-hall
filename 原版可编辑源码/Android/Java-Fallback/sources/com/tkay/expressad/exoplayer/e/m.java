package com.tkay.expressad.exoplayer.e;

public interface m {

    public static final class a {
        public final int a;
        public final byte[] b;
        public final int c;
        public final int d;

        public a(int r1, byte[] r2, int r3, int r4) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                return
        }

        public final boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r4 != r5) goto L4
                return r0
            L4:
                r1 = 0
                if (r5 == 0) goto L31
                java.lang.Class r2 = r4.getClass()
                java.lang.Class r3 = r5.getClass()
                if (r2 == r3) goto L12
                goto L31
            L12:
                com.tkay.expressad.exoplayer.e.m$a r5 = (com.tkay.expressad.exoplayer.e.m.a) r5
                int r2 = r4.a
                int r3 = r5.a
                if (r2 != r3) goto L31
                int r2 = r4.c
                int r3 = r5.c
                if (r2 != r3) goto L31
                int r2 = r4.d
                int r3 = r5.d
                if (r2 != r3) goto L31
                byte[] r2 = r4.b
                byte[] r5 = r5.b
                boolean r5 = java.util.Arrays.equals(r2, r5)
                if (r5 == 0) goto L31
                return r0
            L31:
                return r1
        }

        public final int hashCode() {
                r2 = this;
                int r0 = r2.a
                int r0 = r0 * 31
                byte[] r1 = r2.b
                int r1 = java.util.Arrays.hashCode(r1)
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r2.c
                int r0 = r0 + r1
                int r0 = r0 * 31
                int r1 = r2.d
                int r0 = r0 + r1
                return r0
        }
    }

    int a(com.tkay.expressad.exoplayer.e.f r1, int r2, boolean r3);

    void a(long r1, int r3, int r4, int r5, com.tkay.expressad.exoplayer.e.m.a r6);

    void a(com.tkay.expressad.exoplayer.k.s r1, int r2);

    void a(com.tkay.expressad.exoplayer.m r1);
}

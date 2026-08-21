package com.tkay.expressad.exoplayer.b;

public final class b {
    public static final com.tkay.expressad.exoplayer.b.b a = null;
    public final int b;
    public final int c;
    public final int d;
    private android.media.AudioAttributes e;

    static class 1 {
    }

    public static final class a {
        private int a;
        private int b;
        private int c;

        public a() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.a = r0
                r1.b = r0
                r0 = 1
                r1.c = r0
                return
        }

        private com.tkay.expressad.exoplayer.b.b.a c(int r1) {
                r0 = this;
                r0.b = r1
                return r0
        }

        public final com.tkay.expressad.exoplayer.b.b.a a(int r1) {
                r0 = this;
                r0.a = r1
                return r0
        }

        public final com.tkay.expressad.exoplayer.b.b a() {
                r5 = this;
                com.tkay.expressad.exoplayer.b.b r0 = new com.tkay.expressad.exoplayer.b.b
                int r1 = r5.a
                int r2 = r5.b
                int r3 = r5.c
                r4 = 0
                r0.<init>(r1, r2, r3, r4)
                return r0
        }

        public final com.tkay.expressad.exoplayer.b.b.a b(int r1) {
                r0 = this;
                r0.c = r1
                return r0
        }
    }

    static {
            com.tkay.expressad.exoplayer.b.b$a r0 = new com.tkay.expressad.exoplayer.b.b$a
            r0.<init>()
            com.tkay.expressad.exoplayer.b.b r0 = r0.a()
            com.tkay.expressad.exoplayer.b.b.a = r0
            return
    }

    private b(int r1, int r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.c = r2
            r0.d = r3
            return
    }

    b(int r1, int r2, int r3, byte r4) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    final android.media.AudioAttributes a() {
            r2 = this;
            android.media.AudioAttributes r0 = r2.e
            if (r0 != 0) goto L21
            android.media.AudioAttributes$Builder r0 = new android.media.AudioAttributes$Builder
            r0.<init>()
            int r1 = r2.b
            android.media.AudioAttributes$Builder r0 = r0.setContentType(r1)
            int r1 = r2.c
            android.media.AudioAttributes$Builder r0 = r0.setFlags(r1)
            int r1 = r2.d
            android.media.AudioAttributes$Builder r0 = r0.setUsage(r1)
            android.media.AudioAttributes r0 = r0.build()
            r2.e = r0
        L21:
            android.media.AudioAttributes r0 = r2.e
            return r0
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L27
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L27
        L12:
            com.tkay.expressad.exoplayer.b.b r5 = (com.tkay.expressad.exoplayer.b.b) r5
            int r2 = r4.b
            int r3 = r5.b
            if (r2 != r3) goto L27
            int r2 = r4.c
            int r3 = r5.c
            if (r2 != r3) goto L27
            int r2 = r4.d
            int r5 = r5.d
            if (r2 != r5) goto L27
            return r0
        L27:
            return r1
    }

    public final int hashCode() {
            r2 = this;
            int r0 = r2.b
            int r0 = r0 + 527
            int r0 = r0 * 31
            int r1 = r2.c
            int r0 = r0 + r1
            int r0 = r0 * 31
            int r1 = r2.d
            int r0 = r0 + r1
            return r0
    }
}

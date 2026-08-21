package com.sigmob.sdk.base.common;

public class b extends android.view.GestureDetector.SimpleOnGestureListener {
    private static final int b = 4;
    private static final float c = 100.0f;
    private static final float d = 100.0f;
    boolean a;
    private final com.sigmob.sdk.base.models.BaseAdUnit e;
    private float f;
    private float g;
    private boolean h;
    private boolean i;
    private int j;
    private float k;
    private com.sigmob.sdk.base.common.b.a l;
    private android.view.View m;

    static class 1 {
        static final int[] a = null;

        static {
                com.sigmob.sdk.base.common.b$a[] r0 = com.sigmob.sdk.base.common.b.a.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.sigmob.sdk.base.common.b.1.a = r0
                com.sigmob.sdk.base.common.b$a r1 = com.sigmob.sdk.base.common.b.a.a     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.sigmob.sdk.base.common.b.1.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.sigmob.sdk.base.common.b$a r1 = com.sigmob.sdk.base.common.b.a.b     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.sigmob.sdk.base.common.b.1.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.sigmob.sdk.base.common.b$a r1 = com.sigmob.sdk.base.common.b.a.c     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.sigmob.sdk.base.common.b.1.a     // Catch: java.lang.NoSuchFieldError -> L33
                com.sigmob.sdk.base.common.b$a r1 = com.sigmob.sdk.base.common.b.a.e     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                return
        }
    }

    enum a extends java.lang.Enum<com.sigmob.sdk.base.common.b.a> {
        public static final com.sigmob.sdk.base.common.b.a a = null;
        public static final com.sigmob.sdk.base.common.b.a b = null;
        public static final com.sigmob.sdk.base.common.b.a c = null;
        public static final com.sigmob.sdk.base.common.b.a d = null;
        public static final com.sigmob.sdk.base.common.b.a e = null;
        private static final com.sigmob.sdk.base.common.b.a[] f = null;

        static {
                com.sigmob.sdk.base.common.b$a r0 = new com.sigmob.sdk.base.common.b$a
                r1 = 0
                java.lang.String r2 = "UNSET"
                r0.<init>(r2, r1)
                com.sigmob.sdk.base.common.b.a.a = r0
                com.sigmob.sdk.base.common.b$a r0 = new com.sigmob.sdk.base.common.b$a
                r2 = 1
                java.lang.String r3 = "GOING_RIGHT"
                r0.<init>(r3, r2)
                com.sigmob.sdk.base.common.b.a.b = r0
                com.sigmob.sdk.base.common.b$a r0 = new com.sigmob.sdk.base.common.b$a
                r3 = 2
                java.lang.String r4 = "GOING_LEFT"
                r0.<init>(r4, r3)
                com.sigmob.sdk.base.common.b.a.c = r0
                com.sigmob.sdk.base.common.b$a r0 = new com.sigmob.sdk.base.common.b$a
                r4 = 3
                java.lang.String r5 = "FINISHED"
                r0.<init>(r5, r4)
                com.sigmob.sdk.base.common.b.a.d = r0
                com.sigmob.sdk.base.common.b$a r0 = new com.sigmob.sdk.base.common.b$a
                r5 = 4
                java.lang.String r6 = "FAILED"
                r0.<init>(r6, r5)
                com.sigmob.sdk.base.common.b.a.e = r0
                r6 = 5
                com.sigmob.sdk.base.common.b$a[] r6 = new com.sigmob.sdk.base.common.b.a[r6]
                com.sigmob.sdk.base.common.b$a r7 = com.sigmob.sdk.base.common.b.a.a
                r6[r1] = r7
                com.sigmob.sdk.base.common.b$a r1 = com.sigmob.sdk.base.common.b.a.b
                r6[r2] = r1
                com.sigmob.sdk.base.common.b$a r1 = com.sigmob.sdk.base.common.b.a.c
                r6[r3] = r1
                com.sigmob.sdk.base.common.b$a r1 = com.sigmob.sdk.base.common.b.a.d
                r6[r4] = r1
                r6[r5] = r0
                com.sigmob.sdk.base.common.b.a.f = r6
                return
        }

        a(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.sigmob.sdk.base.common.b.a valueOf(java.lang.String r1) {
                java.lang.Class<com.sigmob.sdk.base.common.b$a> r0 = com.sigmob.sdk.base.common.b.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.sigmob.sdk.base.common.b$a r1 = (com.sigmob.sdk.base.common.b.a) r1
                return r1
        }

        public static com.sigmob.sdk.base.common.b.a[] values() {
                com.sigmob.sdk.base.common.b$a[] r0 = com.sigmob.sdk.base.common.b.a.f
                java.lang.Object r0 = r0.clone()
                com.sigmob.sdk.base.common.b$a[] r0 = (com.sigmob.sdk.base.common.b.a[]) r0
                return r0
        }
    }

    b(android.view.View r4, com.sigmob.sdk.base.models.BaseAdUnit r5) {
            r3 = this;
            r3.<init>()
            r0 = 1120403456(0x42c80000, float:100.0)
            r3.f = r0
            com.sigmob.sdk.base.common.b$a r1 = com.sigmob.sdk.base.common.b.a.a
            r3.l = r1
            if (r4 == 0) goto L21
            int r1 = r4.getWidth()
            if (r1 <= 0) goto L21
            int r1 = r4.getWidth()
            float r1 = (float) r1
            r2 = 1077936128(0x40400000, float:3.0)
            float r1 = r1 / r2
            float r0 = java.lang.Math.min(r0, r1)
            r3.f = r0
        L21:
            r0 = 0
            r3.a = r0
            r3.m = r4
            r3.e = r5
            return
    }

    private void a(float r2) {
            r1 = this;
            float r0 = r1.k
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 <= 0) goto La
            com.sigmob.sdk.base.common.b$a r2 = com.sigmob.sdk.base.common.b.a.b
            r1.l = r2
        La:
            return
    }

    private boolean a(android.view.MotionEvent r2, android.view.MotionEvent r3) {
            r1 = this;
            r0 = 0
            if (r2 == 0) goto L1a
            if (r3 != 0) goto L6
            goto L1a
        L6:
            float r2 = r2.getY()
            float r3 = r3.getY()
            float r3 = r3 - r2
            float r2 = java.lang.Math.abs(r3)
            r3 = 1120403456(0x42c80000, float:100.0)
            int r2 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r2 <= 0) goto L1a
            r0 = 1
        L1a:
            return r0
    }

    private void b(float r2) {
            r1 = this;
            boolean r0 = r1.d(r2)
            if (r0 == 0) goto L12
            boolean r0 = r1.g(r2)
            if (r0 == 0) goto L12
            com.sigmob.sdk.base.common.b$a r0 = com.sigmob.sdk.base.common.b.a.c
            r1.l = r0
            r1.k = r2
        L12:
            return
    }

    private void c(float r2) {
            r1 = this;
            boolean r0 = r1.e(r2)
            if (r0 == 0) goto L12
            boolean r0 = r1.f(r2)
            if (r0 == 0) goto L12
            com.sigmob.sdk.base.common.b$a r0 = com.sigmob.sdk.base.common.b.a.b
            r1.l = r0
            r1.k = r2
        L12:
            return
    }

    private boolean d(float r4) {
            r3 = this;
            boolean r0 = r3.i
            r1 = 1
            if (r0 == 0) goto L6
            return r1
        L6:
            float r0 = r3.k
            float r2 = r3.f
            float r0 = r0 + r2
            int r4 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            r0 = 0
            if (r4 < 0) goto L15
            r3.h = r0
            r3.i = r1
            return r1
        L15:
            return r0
    }

    private void e() {
            r2 = this;
            int r0 = r2.j
            int r0 = r0 + 1
            r2.j = r0
            r1 = 4
            if (r0 < r1) goto Ld
            com.sigmob.sdk.base.common.b$a r0 = com.sigmob.sdk.base.common.b.a.d
            r2.l = r0
        Ld:
            return
    }

    private boolean e(float r4) {
            r3 = this;
            boolean r0 = r3.h
            r1 = 1
            if (r0 == 0) goto L6
            return r1
        L6:
            float r0 = r3.k
            float r2 = r3.f
            float r0 = r0 - r2
            int r4 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            r0 = 0
            if (r4 > 0) goto L18
            r3.i = r0
            r3.h = r1
            r3.e()
            return r1
        L18:
            return r0
    }

    private boolean f(float r2) {
            r1 = this;
            float r0 = r1.g
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 <= 0) goto L8
            r2 = 1
            goto L9
        L8:
            r2 = 0
        L9:
            return r2
    }

    private boolean g(float r2) {
            r1 = this;
            float r0 = r1.g
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 >= 0) goto L8
            r2 = 1
            goto L9
        L8:
            r2 = 0
        L9:
            return r2
    }

    void a() {
            r1 = this;
            com.sigmob.sdk.base.common.b$a r0 = com.sigmob.sdk.base.common.b.a.d
            r1.b()
            return
    }

    void b() {
            r1 = this;
            r0 = 0
            r1.j = r0
            com.sigmob.sdk.base.common.b$a r0 = com.sigmob.sdk.base.common.b.a.a
            r1.l = r0
            return
    }

    void c() {
            r1 = this;
            r0 = 0
            r1.a = r0
            return
    }

    boolean d() {
            r1 = this;
            boolean r0 = r1.a
            return r0
    }

    @Override
    public boolean onScroll(android.view.MotionEvent r3, android.view.MotionEvent r4, float r5, float r6) {
            r2 = this;
            com.sigmob.sdk.base.common.b$a r0 = r2.l
            com.sigmob.sdk.base.common.b$a r1 = com.sigmob.sdk.base.common.b.a.d
            if (r0 != r1) goto Lb
            boolean r3 = super.onScroll(r3, r4, r5, r6)
            return r3
        Lb:
            boolean r0 = r2.a(r3, r4)
            if (r0 == 0) goto L1a
            com.sigmob.sdk.base.common.b$a r0 = com.sigmob.sdk.base.common.b.a.e
            r2.l = r0
        L15:
            boolean r3 = super.onScroll(r3, r4, r5, r6)
            return r3
        L1a:
            int[] r0 = com.sigmob.sdk.base.common.b.1.a
            com.sigmob.sdk.base.common.b$a r1 = r2.l
            int r1 = r1.ordinal()
            r0 = r0[r1]
            r1 = 1
            if (r0 == r1) goto L3e
            r1 = 2
            if (r0 == r1) goto L36
            r1 = 3
            if (r0 == r1) goto L2e
            goto L4b
        L2e:
            float r0 = r4.getX()
            r2.c(r0)
            goto L4b
        L36:
            float r0 = r4.getX()
            r2.b(r0)
            goto L4b
        L3e:
            float r0 = r3.getX()
            r2.k = r0
            float r0 = r4.getX()
            r2.a(r0)
        L4b:
            float r0 = r4.getX()
            r2.g = r0
            goto L15
    }

    @Override
    public boolean onSingleTapUp(android.view.MotionEvent r2) {
            r1 = this;
            r0 = 1
            r1.a = r0
            boolean r2 = super.onSingleTapUp(r2)
            return r2
    }
}

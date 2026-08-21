package com.tkay.expressad.out;

public enum t extends java.lang.Enum<com.tkay.expressad.out.t> {
    public static final com.tkay.expressad.out.t a = null;
    public static final com.tkay.expressad.out.t b = null;
    public static final com.tkay.expressad.out.t c = null;
    public static final com.tkay.expressad.out.t d = null;
    private static final com.tkay.expressad.out.t[] f = null;
    private int e;

    static {
            com.tkay.expressad.out.t r0 = new com.tkay.expressad.out.t
            r1 = 0
            r2 = 1
            java.lang.String r3 = "FloatBall"
            r0.<init>(r3, r1, r2)
            com.tkay.expressad.out.t.a = r0
            com.tkay.expressad.out.t r0 = new com.tkay.expressad.out.t
            r3 = 4
            java.lang.String r4 = "BigView"
            r0.<init>(r4, r2, r3)
            com.tkay.expressad.out.t.b = r0
            com.tkay.expressad.out.t r0 = new com.tkay.expressad.out.t
            r4 = 3
            r5 = 2
            java.lang.String r6 = "MediumView"
            r0.<init>(r6, r5, r4)
            com.tkay.expressad.out.t.c = r0
            com.tkay.expressad.out.t r0 = new com.tkay.expressad.out.t
            java.lang.String r6 = "SmallView"
            r0.<init>(r6, r4, r5)
            com.tkay.expressad.out.t.d = r0
            com.tkay.expressad.out.t[] r3 = new com.tkay.expressad.out.t[r3]
            com.tkay.expressad.out.t r6 = com.tkay.expressad.out.t.a
            r3[r1] = r6
            com.tkay.expressad.out.t r1 = com.tkay.expressad.out.t.b
            r3[r2] = r1
            com.tkay.expressad.out.t r1 = com.tkay.expressad.out.t.c
            r3[r5] = r1
            r3[r4] = r0
            com.tkay.expressad.out.t.f = r3
            return
    }

    t(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.e = r3
            return
    }

    public static com.tkay.expressad.out.t valueOf(java.lang.String r1) {
            java.lang.Class<com.tkay.expressad.out.t> r0 = com.tkay.expressad.out.t.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.tkay.expressad.out.t r1 = (com.tkay.expressad.out.t) r1
            return r1
    }

    public static com.tkay.expressad.out.t[] values() {
            com.tkay.expressad.out.t[] r0 = com.tkay.expressad.out.t.f
            java.lang.Object r0 = r0.clone()
            com.tkay.expressad.out.t[] r0 = (com.tkay.expressad.out.t[]) r0
            return r0
    }

    public final int a() {
            r1 = this;
            int r0 = r1.e
            return r0
    }
}

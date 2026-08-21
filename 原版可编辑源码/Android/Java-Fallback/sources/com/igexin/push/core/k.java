package com.igexin.push.core;

enum k extends java.lang.Enum<com.igexin.push.core.k> {
    public static final com.igexin.push.core.k a = null;
    public static final com.igexin.push.core.k b = null;
    public static final com.igexin.push.core.k c = null;
    private static final com.igexin.push.core.k[] d = null;

    static {
            com.igexin.push.core.k r0 = new com.igexin.push.core.k
            r1 = 0
            java.lang.String r2 = "DETECT"
            r0.<init>(r2, r1)
            com.igexin.push.core.k.a = r0
            com.igexin.push.core.k r0 = new com.igexin.push.core.k
            r2 = 1
            java.lang.String r3 = "STABLE"
            r0.<init>(r3, r2)
            com.igexin.push.core.k.b = r0
            com.igexin.push.core.k r0 = new com.igexin.push.core.k
            r3 = 2
            java.lang.String r4 = "PENDING"
            r0.<init>(r4, r3)
            com.igexin.push.core.k.c = r0
            r4 = 3
            com.igexin.push.core.k[] r4 = new com.igexin.push.core.k[r4]
            com.igexin.push.core.k r5 = com.igexin.push.core.k.a
            r4[r1] = r5
            com.igexin.push.core.k r1 = com.igexin.push.core.k.b
            r4[r2] = r1
            r4[r3] = r0
            com.igexin.push.core.k.d = r4
            return
    }

    k(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.igexin.push.core.k[] a() {
            com.igexin.push.core.k[] r0 = com.igexin.push.core.k.d
            java.lang.Object r0 = r0.clone()
            com.igexin.push.core.k[] r0 = (com.igexin.push.core.k[]) r0
            return r0
    }
}

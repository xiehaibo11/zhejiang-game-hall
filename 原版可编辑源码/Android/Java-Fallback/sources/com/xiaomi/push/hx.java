package com.xiaomi.push;

public enum hx extends java.lang.Enum<com.xiaomi.push.hx> {
    public static final com.xiaomi.push.hx a = null;
    private static final com.xiaomi.push.hx[] a = null;
    public static final com.xiaomi.push.hx b = null;
    public static final com.xiaomi.push.hx c = null;
    private final int a;

    static {
            com.xiaomi.push.hx r0 = new com.xiaomi.push.hx
            r1 = 0
            java.lang.String r2 = "RegIdExpired"
            r0.<init>(r2, r1, r1)
            com.xiaomi.push.hx.a = r0
            com.xiaomi.push.hx r0 = new com.xiaomi.push.hx
            r2 = 1
            java.lang.String r3 = "PackageUnregistered"
            r0.<init>(r3, r2, r2)
            com.xiaomi.push.hx.b = r0
            com.xiaomi.push.hx r0 = new com.xiaomi.push.hx
            r3 = 2
            java.lang.String r4 = "Init"
            r0.<init>(r4, r3, r3)
            com.xiaomi.push.hx.c = r0
            r4 = 3
            com.xiaomi.push.hx[] r4 = new com.xiaomi.push.hx[r4]
            com.xiaomi.push.hx r5 = com.xiaomi.push.hx.a
            r4[r1] = r5
            com.xiaomi.push.hx r1 = com.xiaomi.push.hx.b
            r4[r2] = r1
            r4[r3] = r0
            com.xiaomi.push.hx.a = r4
            return
    }

    hx(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a = r3
            return
    }

    public static com.xiaomi.push.hx a(int r1) {
            if (r1 == 0) goto L10
            r0 = 1
            if (r1 == r0) goto Ld
            r0 = 2
            if (r1 == r0) goto La
            r1 = 0
            return r1
        La:
            com.xiaomi.push.hx r1 = com.xiaomi.push.hx.c
            return r1
        Ld:
            com.xiaomi.push.hx r1 = com.xiaomi.push.hx.b
            return r1
        L10:
            com.xiaomi.push.hx r1 = com.xiaomi.push.hx.a
            return r1
    }

    public static com.xiaomi.push.hx valueOf(java.lang.String r1) {
            java.lang.Class<com.xiaomi.push.hx> r0 = com.xiaomi.push.hx.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.xiaomi.push.hx r1 = (com.xiaomi.push.hx) r1
            return r1
    }

    public static com.xiaomi.push.hx[] values() {
            com.xiaomi.push.hx[] r0 = com.xiaomi.push.hx.a
            java.lang.Object r0 = r0.clone()
            com.xiaomi.push.hx[] r0 = (com.xiaomi.push.hx[]) r0
            return r0
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }
}

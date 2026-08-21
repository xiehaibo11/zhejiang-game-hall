package com.tencent.mm.opensdk.diffdev.a;

public enum d extends java.lang.Enum<com.tencent.mm.opensdk.diffdev.a.d> {
    public static final com.tencent.mm.opensdk.diffdev.a.d b = null;
    public static final com.tencent.mm.opensdk.diffdev.a.d c = null;
    public static final com.tencent.mm.opensdk.diffdev.a.d d = null;
    public static final com.tencent.mm.opensdk.diffdev.a.d e = null;
    public static final com.tencent.mm.opensdk.diffdev.a.d f = null;
    public static final com.tencent.mm.opensdk.diffdev.a.d g = null;
    private static final com.tencent.mm.opensdk.diffdev.a.d[] h = null;
    private int a;

    static {
            com.tencent.mm.opensdk.diffdev.a.d r0 = new com.tencent.mm.opensdk.diffdev.a.d
            r1 = 0
            java.lang.String r2 = "UUID_EXPIRED"
            r3 = 402(0x192, float:5.63E-43)
            r0.<init>(r2, r1, r3)
            com.tencent.mm.opensdk.diffdev.a.d.b = r0
            com.tencent.mm.opensdk.diffdev.a.d r0 = new com.tencent.mm.opensdk.diffdev.a.d
            r2 = 1
            java.lang.String r3 = "UUID_CANCELED"
            r4 = 403(0x193, float:5.65E-43)
            r0.<init>(r3, r2, r4)
            com.tencent.mm.opensdk.diffdev.a.d.c = r0
            com.tencent.mm.opensdk.diffdev.a.d r0 = new com.tencent.mm.opensdk.diffdev.a.d
            r3 = 2
            java.lang.String r4 = "UUID_SCANED"
            r5 = 404(0x194, float:5.66E-43)
            r0.<init>(r4, r3, r5)
            com.tencent.mm.opensdk.diffdev.a.d.d = r0
            com.tencent.mm.opensdk.diffdev.a.d r0 = new com.tencent.mm.opensdk.diffdev.a.d
            r4 = 3
            java.lang.String r5 = "UUID_CONFIRM"
            r6 = 405(0x195, float:5.68E-43)
            r0.<init>(r5, r4, r6)
            com.tencent.mm.opensdk.diffdev.a.d.e = r0
            com.tencent.mm.opensdk.diffdev.a.d r0 = new com.tencent.mm.opensdk.diffdev.a.d
            r5 = 4
            java.lang.String r6 = "UUID_KEEP_CONNECT"
            r7 = 408(0x198, float:5.72E-43)
            r0.<init>(r6, r5, r7)
            com.tencent.mm.opensdk.diffdev.a.d.f = r0
            com.tencent.mm.opensdk.diffdev.a.d r0 = new com.tencent.mm.opensdk.diffdev.a.d
            r6 = 5
            java.lang.String r7 = "UUID_ERROR"
            r8 = 500(0x1f4, float:7.0E-43)
            r0.<init>(r7, r6, r8)
            com.tencent.mm.opensdk.diffdev.a.d.g = r0
            r7 = 6
            com.tencent.mm.opensdk.diffdev.a.d[] r7 = new com.tencent.mm.opensdk.diffdev.a.d[r7]
            com.tencent.mm.opensdk.diffdev.a.d r8 = com.tencent.mm.opensdk.diffdev.a.d.b
            r7[r1] = r8
            com.tencent.mm.opensdk.diffdev.a.d r1 = com.tencent.mm.opensdk.diffdev.a.d.c
            r7[r2] = r1
            com.tencent.mm.opensdk.diffdev.a.d r1 = com.tencent.mm.opensdk.diffdev.a.d.d
            r7[r3] = r1
            com.tencent.mm.opensdk.diffdev.a.d r1 = com.tencent.mm.opensdk.diffdev.a.d.e
            r7[r4] = r1
            com.tencent.mm.opensdk.diffdev.a.d r1 = com.tencent.mm.opensdk.diffdev.a.d.f
            r7[r5] = r1
            r7[r6] = r0
            com.tencent.mm.opensdk.diffdev.a.d.h = r7
            return
    }

    d(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a = r3
            return
    }

    public static com.tencent.mm.opensdk.diffdev.a.d valueOf(java.lang.String r1) {
            java.lang.Class<com.tencent.mm.opensdk.diffdev.a.d> r0 = com.tencent.mm.opensdk.diffdev.a.d.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.tencent.mm.opensdk.diffdev.a.d r1 = (com.tencent.mm.opensdk.diffdev.a.d) r1
            return r1
    }

    public static com.tencent.mm.opensdk.diffdev.a.d[] values() {
            com.tencent.mm.opensdk.diffdev.a.d[] r0 = com.tencent.mm.opensdk.diffdev.a.d.h
            java.lang.Object r0 = r0.clone()
            com.tencent.mm.opensdk.diffdev.a.d[] r0 = (com.tencent.mm.opensdk.diffdev.a.d[]) r0
            return r0
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    @Override
    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "UUIDStatusCode:"
            r0.append(r1)
            int r1 = r2.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}

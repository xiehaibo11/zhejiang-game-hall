package com.meizu.cloud.pushsdk.c.a;

public enum d extends java.lang.Enum<com.meizu.cloud.pushsdk.c.a.d> {
    public static final com.meizu.cloud.pushsdk.c.a.d a = null;
    public static final com.meizu.cloud.pushsdk.c.a.d b = null;
    public static final com.meizu.cloud.pushsdk.c.a.d c = null;
    public static final com.meizu.cloud.pushsdk.c.a.d d = null;
    private static final com.meizu.cloud.pushsdk.c.a.d[] e = null;

    static {
            com.meizu.cloud.pushsdk.c.a.d r0 = new com.meizu.cloud.pushsdk.c.a.d
            r1 = 0
            java.lang.String r2 = "LOW"
            r0.<init>(r2, r1)
            com.meizu.cloud.pushsdk.c.a.d.a = r0
            com.meizu.cloud.pushsdk.c.a.d r0 = new com.meizu.cloud.pushsdk.c.a.d
            r2 = 1
            java.lang.String r3 = "MEDIUM"
            r0.<init>(r3, r2)
            com.meizu.cloud.pushsdk.c.a.d.b = r0
            com.meizu.cloud.pushsdk.c.a.d r0 = new com.meizu.cloud.pushsdk.c.a.d
            r3 = 2
            java.lang.String r4 = "HIGH"
            r0.<init>(r4, r3)
            com.meizu.cloud.pushsdk.c.a.d.c = r0
            com.meizu.cloud.pushsdk.c.a.d r0 = new com.meizu.cloud.pushsdk.c.a.d
            r4 = 3
            java.lang.String r5 = "IMMEDIATE"
            r0.<init>(r5, r4)
            com.meizu.cloud.pushsdk.c.a.d.d = r0
            r5 = 4
            com.meizu.cloud.pushsdk.c.a.d[] r5 = new com.meizu.cloud.pushsdk.c.a.d[r5]
            com.meizu.cloud.pushsdk.c.a.d r6 = com.meizu.cloud.pushsdk.c.a.d.a
            r5[r1] = r6
            com.meizu.cloud.pushsdk.c.a.d r1 = com.meizu.cloud.pushsdk.c.a.d.b
            r5[r2] = r1
            com.meizu.cloud.pushsdk.c.a.d r1 = com.meizu.cloud.pushsdk.c.a.d.c
            r5[r3] = r1
            r5[r4] = r0
            com.meizu.cloud.pushsdk.c.a.d.e = r5
            return
    }

    d(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.meizu.cloud.pushsdk.c.a.d valueOf(java.lang.String r1) {
            java.lang.Class<com.meizu.cloud.pushsdk.c.a.d> r0 = com.meizu.cloud.pushsdk.c.a.d.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.meizu.cloud.pushsdk.c.a.d r1 = (com.meizu.cloud.pushsdk.c.a.d) r1
            return r1
    }

    public static com.meizu.cloud.pushsdk.c.a.d[] values() {
            com.meizu.cloud.pushsdk.c.a.d[] r0 = com.meizu.cloud.pushsdk.c.a.d.e
            java.lang.Object r0 = r0.clone()
            com.meizu.cloud.pushsdk.c.a.d[] r0 = (com.meizu.cloud.pushsdk.c.a.d[]) r0
            return r0
    }
}

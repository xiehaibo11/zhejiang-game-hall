package com.meizu.cloud.pushsdk.d.b;

public enum d extends java.lang.Enum<com.meizu.cloud.pushsdk.d.b.d> {
    public static final com.meizu.cloud.pushsdk.d.b.d a = null;
    public static final com.meizu.cloud.pushsdk.d.b.d b = null;
    private static final com.meizu.cloud.pushsdk.d.b.d[] c = null;

    static {
            com.meizu.cloud.pushsdk.d.b.d r0 = new com.meizu.cloud.pushsdk.d.b.d
            r1 = 0
            java.lang.String r2 = "GET"
            r0.<init>(r2, r1)
            com.meizu.cloud.pushsdk.d.b.d.a = r0
            com.meizu.cloud.pushsdk.d.b.d r0 = new com.meizu.cloud.pushsdk.d.b.d
            r2 = 1
            java.lang.String r3 = "POST"
            r0.<init>(r3, r2)
            com.meizu.cloud.pushsdk.d.b.d.b = r0
            r3 = 2
            com.meizu.cloud.pushsdk.d.b.d[] r3 = new com.meizu.cloud.pushsdk.d.b.d[r3]
            com.meizu.cloud.pushsdk.d.b.d r4 = com.meizu.cloud.pushsdk.d.b.d.a
            r3[r1] = r4
            r3[r2] = r0
            com.meizu.cloud.pushsdk.d.b.d.c = r3
            return
    }

    d(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.meizu.cloud.pushsdk.d.b.d valueOf(java.lang.String r1) {
            java.lang.Class<com.meizu.cloud.pushsdk.d.b.d> r0 = com.meizu.cloud.pushsdk.d.b.d.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.meizu.cloud.pushsdk.d.b.d r1 = (com.meizu.cloud.pushsdk.d.b.d) r1
            return r1
    }

    public static com.meizu.cloud.pushsdk.d.b.d[] values() {
            com.meizu.cloud.pushsdk.d.b.d[] r0 = com.meizu.cloud.pushsdk.d.b.d.c
            java.lang.Object r0 = r0.clone()
            com.meizu.cloud.pushsdk.d.b.d[] r0 = (com.meizu.cloud.pushsdk.d.b.d[]) r0
            return r0
    }
}

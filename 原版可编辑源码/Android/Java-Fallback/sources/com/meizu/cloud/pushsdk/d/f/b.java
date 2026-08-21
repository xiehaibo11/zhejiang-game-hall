package com.meizu.cloud.pushsdk.d.f;

public enum b extends java.lang.Enum<com.meizu.cloud.pushsdk.d.f.b> {
    public static final com.meizu.cloud.pushsdk.d.f.b a = null;
    public static final com.meizu.cloud.pushsdk.d.f.b b = null;
    public static final com.meizu.cloud.pushsdk.d.f.b c = null;
    public static final com.meizu.cloud.pushsdk.d.f.b d = null;
    private static final com.meizu.cloud.pushsdk.d.f.b[] f = null;
    private final int e;

    static {
            com.meizu.cloud.pushsdk.d.f.b r0 = new com.meizu.cloud.pushsdk.d.f.b
            r1 = 0
            java.lang.String r2 = "OFF"
            r0.<init>(r2, r1, r1)
            com.meizu.cloud.pushsdk.d.f.b.a = r0
            com.meizu.cloud.pushsdk.d.f.b r0 = new com.meizu.cloud.pushsdk.d.f.b
            r2 = 1
            java.lang.String r3 = "ERROR"
            r0.<init>(r3, r2, r2)
            com.meizu.cloud.pushsdk.d.f.b.b = r0
            com.meizu.cloud.pushsdk.d.f.b r0 = new com.meizu.cloud.pushsdk.d.f.b
            r3 = 2
            java.lang.String r4 = "DEBUG"
            r0.<init>(r4, r3, r3)
            com.meizu.cloud.pushsdk.d.f.b.c = r0
            com.meizu.cloud.pushsdk.d.f.b r0 = new com.meizu.cloud.pushsdk.d.f.b
            r4 = 3
            java.lang.String r5 = "VERBOSE"
            r0.<init>(r5, r4, r4)
            com.meizu.cloud.pushsdk.d.f.b.d = r0
            r5 = 4
            com.meizu.cloud.pushsdk.d.f.b[] r5 = new com.meizu.cloud.pushsdk.d.f.b[r5]
            com.meizu.cloud.pushsdk.d.f.b r6 = com.meizu.cloud.pushsdk.d.f.b.a
            r5[r1] = r6
            com.meizu.cloud.pushsdk.d.f.b r1 = com.meizu.cloud.pushsdk.d.f.b.b
            r5[r2] = r1
            com.meizu.cloud.pushsdk.d.f.b r1 = com.meizu.cloud.pushsdk.d.f.b.c
            r5[r3] = r1
            r5[r4] = r0
            com.meizu.cloud.pushsdk.d.f.b.f = r5
            return
    }

    b(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.e = r3
            return
    }

    public static com.meizu.cloud.pushsdk.d.f.b valueOf(java.lang.String r1) {
            java.lang.Class<com.meizu.cloud.pushsdk.d.f.b> r0 = com.meizu.cloud.pushsdk.d.f.b.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.meizu.cloud.pushsdk.d.f.b r1 = (com.meizu.cloud.pushsdk.d.f.b) r1
            return r1
    }

    public static com.meizu.cloud.pushsdk.d.f.b[] values() {
            com.meizu.cloud.pushsdk.d.f.b[] r0 = com.meizu.cloud.pushsdk.d.f.b.f
            java.lang.Object r0 = r0.clone()
            com.meizu.cloud.pushsdk.d.f.b[] r0 = (com.meizu.cloud.pushsdk.d.f.b[]) r0
            return r0
    }

    public int a() {
            r1 = this;
            int r0 = r1.e
            return r0
    }
}

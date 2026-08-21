package com.meizu.cloud.pushsdk.d.b;

public enum b extends java.lang.Enum<com.meizu.cloud.pushsdk.d.b.b> {
    public static final com.meizu.cloud.pushsdk.d.b.b a = null;
    public static final com.meizu.cloud.pushsdk.d.b.b b = null;
    public static final com.meizu.cloud.pushsdk.d.b.b c = null;
    private static final com.meizu.cloud.pushsdk.d.b.b[] e = null;
    private final int d;

    static {
            com.meizu.cloud.pushsdk.d.b.b r0 = new com.meizu.cloud.pushsdk.d.b.b
            r1 = 0
            r2 = 1
            java.lang.String r3 = "Single"
            r0.<init>(r3, r1, r2)
            com.meizu.cloud.pushsdk.d.b.b.a = r0
            com.meizu.cloud.pushsdk.d.b.b r0 = new com.meizu.cloud.pushsdk.d.b.b
            r3 = 3
            java.lang.String r4 = "DefaultGroup"
            r0.<init>(r4, r2, r3)
            com.meizu.cloud.pushsdk.d.b.b.b = r0
            com.meizu.cloud.pushsdk.d.b.b r0 = new com.meizu.cloud.pushsdk.d.b.b
            r4 = 2
            java.lang.String r5 = "HeavyGroup"
            r6 = 25
            r0.<init>(r5, r4, r6)
            com.meizu.cloud.pushsdk.d.b.b.c = r0
            com.meizu.cloud.pushsdk.d.b.b[] r3 = new com.meizu.cloud.pushsdk.d.b.b[r3]
            com.meizu.cloud.pushsdk.d.b.b r5 = com.meizu.cloud.pushsdk.d.b.b.a
            r3[r1] = r5
            com.meizu.cloud.pushsdk.d.b.b r1 = com.meizu.cloud.pushsdk.d.b.b.b
            r3[r2] = r1
            r3[r4] = r0
            com.meizu.cloud.pushsdk.d.b.b.e = r3
            return
    }

    b(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.d = r3
            return
    }

    public static com.meizu.cloud.pushsdk.d.b.b valueOf(java.lang.String r1) {
            java.lang.Class<com.meizu.cloud.pushsdk.d.b.b> r0 = com.meizu.cloud.pushsdk.d.b.b.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.meizu.cloud.pushsdk.d.b.b r1 = (com.meizu.cloud.pushsdk.d.b.b) r1
            return r1
    }

    public static com.meizu.cloud.pushsdk.d.b.b[] values() {
            com.meizu.cloud.pushsdk.d.b.b[] r0 = com.meizu.cloud.pushsdk.d.b.b.e
            java.lang.Object r0 = r0.clone()
            com.meizu.cloud.pushsdk.d.b.b[] r0 = (com.meizu.cloud.pushsdk.d.b.b[]) r0
            return r0
    }

    public int a() {
            r1 = this;
            int r0 = r1.d
            return r0
    }
}

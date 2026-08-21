package com.meizu.cloud.pushsdk.d.b;

public enum h extends java.lang.Enum<com.meizu.cloud.pushsdk.d.b.h> {
    public static final com.meizu.cloud.pushsdk.d.b.h a = null;
    public static final com.meizu.cloud.pushsdk.d.b.h b = null;
    private static final com.meizu.cloud.pushsdk.d.b.h[] c = null;

    static {
            com.meizu.cloud.pushsdk.d.b.h r0 = new com.meizu.cloud.pushsdk.d.b.h
            r1 = 0
            java.lang.String r2 = "HTTP"
            r0.<init>(r2, r1)
            com.meizu.cloud.pushsdk.d.b.h.a = r0
            com.meizu.cloud.pushsdk.d.b.h r0 = new com.meizu.cloud.pushsdk.d.b.h
            r2 = 1
            java.lang.String r3 = "HTTPS"
            r0.<init>(r3, r2)
            com.meizu.cloud.pushsdk.d.b.h.b = r0
            r3 = 2
            com.meizu.cloud.pushsdk.d.b.h[] r3 = new com.meizu.cloud.pushsdk.d.b.h[r3]
            com.meizu.cloud.pushsdk.d.b.h r4 = com.meizu.cloud.pushsdk.d.b.h.a
            r3[r1] = r4
            r3[r2] = r0
            com.meizu.cloud.pushsdk.d.b.h.c = r3
            return
    }

    h(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.meizu.cloud.pushsdk.d.b.h valueOf(java.lang.String r1) {
            java.lang.Class<com.meizu.cloud.pushsdk.d.b.h> r0 = com.meizu.cloud.pushsdk.d.b.h.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.meizu.cloud.pushsdk.d.b.h r1 = (com.meizu.cloud.pushsdk.d.b.h) r1
            return r1
    }

    public static com.meizu.cloud.pushsdk.d.b.h[] values() {
            com.meizu.cloud.pushsdk.d.b.h[] r0 = com.meizu.cloud.pushsdk.d.b.h.c
            java.lang.Object r0 = r0.clone()
            com.meizu.cloud.pushsdk.d.b.h[] r0 = (com.meizu.cloud.pushsdk.d.b.h[]) r0
            return r0
    }
}

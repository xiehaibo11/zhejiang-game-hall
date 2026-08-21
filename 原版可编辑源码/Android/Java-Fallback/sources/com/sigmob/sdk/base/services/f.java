package com.sigmob.sdk.base.services;

public enum f extends java.lang.Enum<com.sigmob.sdk.base.services.f> {
    public static final com.sigmob.sdk.base.services.f a = null;
    public static final com.sigmob.sdk.base.services.f b = null;
    public static final com.sigmob.sdk.base.services.f c = null;
    private static final com.sigmob.sdk.base.services.f[] e = null;
    private final int d;

    static {
            com.sigmob.sdk.base.services.f r0 = new com.sigmob.sdk.base.services.f
            r1 = 0
            r2 = 1
            java.lang.String r3 = "SENSOR_EVENT_BEGIN"
            r0.<init>(r3, r1, r2)
            com.sigmob.sdk.base.services.f.a = r0
            com.sigmob.sdk.base.services.f r0 = new com.sigmob.sdk.base.services.f
            r3 = 2
            java.lang.String r4 = "SENSOR_EVENT_END"
            r0.<init>(r4, r2, r3)
            com.sigmob.sdk.base.services.f.b = r0
            com.sigmob.sdk.base.services.f r0 = new com.sigmob.sdk.base.services.f
            r4 = 3
            java.lang.String r5 = "SENSOR_EVENT_PUSH"
            r0.<init>(r5, r3, r4)
            com.sigmob.sdk.base.services.f.c = r0
            com.sigmob.sdk.base.services.f[] r4 = new com.sigmob.sdk.base.services.f[r4]
            com.sigmob.sdk.base.services.f r5 = com.sigmob.sdk.base.services.f.a
            r4[r1] = r5
            com.sigmob.sdk.base.services.f r1 = com.sigmob.sdk.base.services.f.b
            r4[r2] = r1
            r4[r3] = r0
            com.sigmob.sdk.base.services.f.e = r4
            return
    }

    f(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.d = r3
            return
    }

    public static com.sigmob.sdk.base.services.f valueOf(java.lang.String r1) {
            java.lang.Class<com.sigmob.sdk.base.services.f> r0 = com.sigmob.sdk.base.services.f.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.sigmob.sdk.base.services.f r1 = (com.sigmob.sdk.base.services.f) r1
            return r1
    }

    public static com.sigmob.sdk.base.services.f[] values() {
            com.sigmob.sdk.base.services.f[] r0 = com.sigmob.sdk.base.services.f.e
            java.lang.Object r0 = r0.clone()
            com.sigmob.sdk.base.services.f[] r0 = (com.sigmob.sdk.base.services.f[]) r0
            return r0
    }

    public int a() {
            r1 = this;
            int r0 = r1.d
            return r0
    }
}

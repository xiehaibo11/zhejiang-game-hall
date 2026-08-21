package com.sigmob.sdk.base.services;

enum k extends java.lang.Enum<com.sigmob.sdk.base.services.k> {
    public static final com.sigmob.sdk.base.services.k a = null;
    public static final com.sigmob.sdk.base.services.k b = null;
    public static final com.sigmob.sdk.base.services.k c = null;
    private static final com.sigmob.sdk.base.services.k[] d = null;

    static {
            com.sigmob.sdk.base.services.k r0 = new com.sigmob.sdk.base.services.k
            r1 = 0
            java.lang.String r2 = "RUNNING"
            r0.<init>(r2, r1)
            com.sigmob.sdk.base.services.k.a = r0
            com.sigmob.sdk.base.services.k r0 = new com.sigmob.sdk.base.services.k
            r2 = 1
            java.lang.String r3 = "STOP"
            r0.<init>(r3, r2)
            com.sigmob.sdk.base.services.k.b = r0
            com.sigmob.sdk.base.services.k r0 = new com.sigmob.sdk.base.services.k
            r3 = 2
            java.lang.String r4 = "FAILED"
            r0.<init>(r4, r3)
            com.sigmob.sdk.base.services.k.c = r0
            r4 = 3
            com.sigmob.sdk.base.services.k[] r4 = new com.sigmob.sdk.base.services.k[r4]
            com.sigmob.sdk.base.services.k r5 = com.sigmob.sdk.base.services.k.a
            r4[r1] = r5
            com.sigmob.sdk.base.services.k r1 = com.sigmob.sdk.base.services.k.b
            r4[r2] = r1
            r4[r3] = r0
            com.sigmob.sdk.base.services.k.d = r4
            return
    }

    k(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.sigmob.sdk.base.services.k valueOf(java.lang.String r1) {
            java.lang.Class<com.sigmob.sdk.base.services.k> r0 = com.sigmob.sdk.base.services.k.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.sigmob.sdk.base.services.k r1 = (com.sigmob.sdk.base.services.k) r1
            return r1
    }

    public static com.sigmob.sdk.base.services.k[] values() {
            com.sigmob.sdk.base.services.k[] r0 = com.sigmob.sdk.base.services.k.d
            java.lang.Object r0 = r0.clone()
            com.sigmob.sdk.base.services.k[] r0 = (com.sigmob.sdk.base.services.k[]) r0
            return r0
    }
}

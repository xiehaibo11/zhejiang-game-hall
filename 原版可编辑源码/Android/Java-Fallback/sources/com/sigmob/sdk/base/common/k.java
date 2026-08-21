package com.sigmob.sdk.base.common;

public enum k extends java.lang.Enum<com.sigmob.sdk.base.common.k> {
    public static final com.sigmob.sdk.base.common.k a = null;
    public static final com.sigmob.sdk.base.common.k b = null;
    private static final com.sigmob.sdk.base.common.k[] d = null;
    private final int c;

    static {
            com.sigmob.sdk.base.common.k r0 = new com.sigmob.sdk.base.common.k
            r1 = 0
            r2 = 1
            java.lang.String r3 = "Button"
            r0.<init>(r3, r1, r2)
            com.sigmob.sdk.base.common.k.a = r0
            com.sigmob.sdk.base.common.k r0 = new com.sigmob.sdk.base.common.k
            r3 = 2
            java.lang.String r4 = "FullScreen"
            r0.<init>(r4, r2, r3)
            com.sigmob.sdk.base.common.k.b = r0
            com.sigmob.sdk.base.common.k[] r3 = new com.sigmob.sdk.base.common.k[r3]
            com.sigmob.sdk.base.common.k r4 = com.sigmob.sdk.base.common.k.a
            r3[r1] = r4
            r3[r2] = r0
            com.sigmob.sdk.base.common.k.d = r3
            return
    }

    k(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.c = r3
            return
    }

    public static com.sigmob.sdk.base.common.k valueOf(java.lang.String r1) {
            java.lang.Class<com.sigmob.sdk.base.common.k> r0 = com.sigmob.sdk.base.common.k.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.sigmob.sdk.base.common.k r1 = (com.sigmob.sdk.base.common.k) r1
            return r1
    }

    public static com.sigmob.sdk.base.common.k[] values() {
            com.sigmob.sdk.base.common.k[] r0 = com.sigmob.sdk.base.common.k.d
            java.lang.Object r0 = r0.clone()
            com.sigmob.sdk.base.common.k[] r0 = (com.sigmob.sdk.base.common.k[]) r0
            return r0
    }

    public int a() {
            r1 = this;
            int r0 = r1.c
            return r0
    }
}

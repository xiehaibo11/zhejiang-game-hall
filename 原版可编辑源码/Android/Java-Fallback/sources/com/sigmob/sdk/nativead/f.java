package com.sigmob.sdk.nativead;

public enum f extends java.lang.Enum<com.sigmob.sdk.nativead.f> {
    public static final com.sigmob.sdk.nativead.f a = null;
    public static final com.sigmob.sdk.nativead.f b = null;
    public static final com.sigmob.sdk.nativead.f c = null;
    private static final com.sigmob.sdk.nativead.f[] d = null;

    static {
            com.sigmob.sdk.nativead.f r0 = new com.sigmob.sdk.nativead.f
            r1 = 0
            java.lang.String r2 = "PREVIEW"
            r0.<init>(r2, r1)
            com.sigmob.sdk.nativead.f.a = r0
            com.sigmob.sdk.nativead.f r0 = new com.sigmob.sdk.nativead.f
            r2 = 1
            java.lang.String r3 = "DETAIL_PAGE"
            r0.<init>(r3, r2)
            com.sigmob.sdk.nativead.f.b = r0
            com.sigmob.sdk.nativead.f r0 = new com.sigmob.sdk.nativead.f
            r3 = 2
            java.lang.String r4 = "DETAIL_PAGE_END"
            r0.<init>(r4, r3)
            com.sigmob.sdk.nativead.f.c = r0
            r4 = 3
            com.sigmob.sdk.nativead.f[] r4 = new com.sigmob.sdk.nativead.f[r4]
            com.sigmob.sdk.nativead.f r5 = com.sigmob.sdk.nativead.f.a
            r4[r1] = r5
            com.sigmob.sdk.nativead.f r1 = com.sigmob.sdk.nativead.f.b
            r4[r2] = r1
            r4[r3] = r0
            com.sigmob.sdk.nativead.f.d = r4
            return
    }

    f(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.sigmob.sdk.nativead.f valueOf(java.lang.String r1) {
            java.lang.Class<com.sigmob.sdk.nativead.f> r0 = com.sigmob.sdk.nativead.f.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.sigmob.sdk.nativead.f r1 = (com.sigmob.sdk.nativead.f) r1
            return r1
    }

    public static com.sigmob.sdk.nativead.f[] values() {
            com.sigmob.sdk.nativead.f[] r0 = com.sigmob.sdk.nativead.f.d
            java.lang.Object r0 = r0.clone()
            com.sigmob.sdk.nativead.f[] r0 = (com.sigmob.sdk.nativead.f[]) r0
            return r0
    }
}

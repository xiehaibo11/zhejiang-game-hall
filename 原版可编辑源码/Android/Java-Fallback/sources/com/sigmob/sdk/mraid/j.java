package com.sigmob.sdk.mraid;

public enum j extends java.lang.Enum<com.sigmob.sdk.mraid.j> {
    public static final com.sigmob.sdk.mraid.j a = null;
    public static final com.sigmob.sdk.mraid.j b = null;
    public static final com.sigmob.sdk.mraid.j c = null;
    private static final com.sigmob.sdk.mraid.j[] e = null;
    private final int d;

    static {
            com.sigmob.sdk.mraid.j r0 = new com.sigmob.sdk.mraid.j
            r1 = 1
            r2 = 0
            java.lang.String r3 = "PORTRAIT"
            r0.<init>(r3, r2, r1)
            com.sigmob.sdk.mraid.j.a = r0
            com.sigmob.sdk.mraid.j r0 = new com.sigmob.sdk.mraid.j
            java.lang.String r3 = "LANDSCAPE"
            r0.<init>(r3, r1, r2)
            com.sigmob.sdk.mraid.j.b = r0
            com.sigmob.sdk.mraid.j r0 = new com.sigmob.sdk.mraid.j
            r3 = 2
            java.lang.String r4 = "NONE"
            r5 = -1
            r0.<init>(r4, r3, r5)
            com.sigmob.sdk.mraid.j.c = r0
            r4 = 3
            com.sigmob.sdk.mraid.j[] r4 = new com.sigmob.sdk.mraid.j[r4]
            com.sigmob.sdk.mraid.j r5 = com.sigmob.sdk.mraid.j.a
            r4[r2] = r5
            com.sigmob.sdk.mraid.j r2 = com.sigmob.sdk.mraid.j.b
            r4[r1] = r2
            r4[r3] = r0
            com.sigmob.sdk.mraid.j.e = r4
            return
    }

    j(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.d = r3
            return
    }

    public static com.sigmob.sdk.mraid.j valueOf(java.lang.String r1) {
            java.lang.Class<com.sigmob.sdk.mraid.j> r0 = com.sigmob.sdk.mraid.j.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.sigmob.sdk.mraid.j r1 = (com.sigmob.sdk.mraid.j) r1
            return r1
    }

    public static com.sigmob.sdk.mraid.j[] values() {
            com.sigmob.sdk.mraid.j[] r0 = com.sigmob.sdk.mraid.j.e
            java.lang.Object r0 = r0.clone()
            com.sigmob.sdk.mraid.j[] r0 = (com.sigmob.sdk.mraid.j[]) r0
            return r0
    }

    public int a() {
            r1 = this;
            int r0 = r1.d
            return r0
    }
}

package com.sigmob.sdk.splash;

public enum a extends java.lang.Enum<com.sigmob.sdk.splash.a> {
    public static final com.sigmob.sdk.splash.a a = null;
    public static final com.sigmob.sdk.splash.a b = null;
    public static final com.sigmob.sdk.splash.a c = null;
    public static final com.sigmob.sdk.splash.a d = null;
    public static final com.sigmob.sdk.splash.a e = null;
    public static final com.sigmob.sdk.splash.a f = null;
    private static final com.sigmob.sdk.splash.a[] h = null;
    private int g;

    static {
            com.sigmob.sdk.splash.a r0 = new com.sigmob.sdk.splash.a
            r1 = 0
            java.lang.String r2 = "ImageTypeUnknow"
            r0.<init>(r2, r1, r1)
            com.sigmob.sdk.splash.a.a = r0
            com.sigmob.sdk.splash.a r0 = new com.sigmob.sdk.splash.a
            r2 = 1
            java.lang.String r3 = "ImageTypeJPEG"
            r0.<init>(r3, r2, r2)
            com.sigmob.sdk.splash.a.b = r0
            com.sigmob.sdk.splash.a r0 = new com.sigmob.sdk.splash.a
            r3 = 2
            java.lang.String r4 = "ImageTypePNG"
            r0.<init>(r4, r3, r3)
            com.sigmob.sdk.splash.a.c = r0
            com.sigmob.sdk.splash.a r0 = new com.sigmob.sdk.splash.a
            r4 = 3
            java.lang.String r5 = "ImageTypeGIF"
            r0.<init>(r5, r4, r4)
            com.sigmob.sdk.splash.a.d = r0
            com.sigmob.sdk.splash.a r0 = new com.sigmob.sdk.splash.a
            r5 = 4
            java.lang.String r6 = "SMImageTypeWEBP"
            r0.<init>(r6, r5, r5)
            com.sigmob.sdk.splash.a.e = r0
            com.sigmob.sdk.splash.a r0 = new com.sigmob.sdk.splash.a
            r6 = 5
            java.lang.String r7 = "ImageTypeMP4"
            r0.<init>(r7, r6, r6)
            com.sigmob.sdk.splash.a.f = r0
            r7 = 6
            com.sigmob.sdk.splash.a[] r7 = new com.sigmob.sdk.splash.a[r7]
            com.sigmob.sdk.splash.a r8 = com.sigmob.sdk.splash.a.a
            r7[r1] = r8
            com.sigmob.sdk.splash.a r1 = com.sigmob.sdk.splash.a.b
            r7[r2] = r1
            com.sigmob.sdk.splash.a r1 = com.sigmob.sdk.splash.a.c
            r7[r3] = r1
            com.sigmob.sdk.splash.a r1 = com.sigmob.sdk.splash.a.d
            r7[r4] = r1
            com.sigmob.sdk.splash.a r1 = com.sigmob.sdk.splash.a.e
            r7[r5] = r1
            r7[r6] = r0
            com.sigmob.sdk.splash.a.h = r7
            return
    }

    a(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.g = r3
            return
    }

    public static com.sigmob.sdk.splash.a valueOf(java.lang.String r1) {
            java.lang.Class<com.sigmob.sdk.splash.a> r0 = com.sigmob.sdk.splash.a.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.sigmob.sdk.splash.a r1 = (com.sigmob.sdk.splash.a) r1
            return r1
    }

    public static com.sigmob.sdk.splash.a[] values() {
            com.sigmob.sdk.splash.a[] r0 = com.sigmob.sdk.splash.a.h
            java.lang.Object r0 = r0.clone()
            com.sigmob.sdk.splash.a[] r0 = (com.sigmob.sdk.splash.a[]) r0
            return r0
    }

    public int a() {
            r1 = this;
            int r0 = r1.g
            return r0
    }
}

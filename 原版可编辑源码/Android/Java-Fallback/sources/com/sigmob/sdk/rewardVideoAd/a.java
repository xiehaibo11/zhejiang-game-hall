package com.sigmob.sdk.rewardVideoAd;

public enum a extends java.lang.Enum<com.sigmob.sdk.rewardVideoAd.a> {
    public static final com.sigmob.sdk.rewardVideoAd.a a = null;
    public static final com.sigmob.sdk.rewardVideoAd.a b = null;
    public static final com.sigmob.sdk.rewardVideoAd.a c = null;
    public static final com.sigmob.sdk.rewardVideoAd.a d = null;
    public static final com.sigmob.sdk.rewardVideoAd.a e = null;
    private static final com.sigmob.sdk.rewardVideoAd.a[] g = null;
    private java.lang.Integer f;

    static {
            com.sigmob.sdk.rewardVideoAd.a r0 = new com.sigmob.sdk.rewardVideoAd.a
            r1 = 1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            r3 = 0
            java.lang.String r4 = "AppSWith"
            r0.<init>(r4, r3, r2)
            com.sigmob.sdk.rewardVideoAd.a.a = r0
            com.sigmob.sdk.rewardVideoAd.a r0 = new com.sigmob.sdk.rewardVideoAd.a
            r2 = 2
            java.lang.Integer r4 = java.lang.Integer.valueOf(r2)
            java.lang.String r5 = "AutoNextPreload"
            r0.<init>(r5, r1, r4)
            com.sigmob.sdk.rewardVideoAd.a.b = r0
            com.sigmob.sdk.rewardVideoAd.a r0 = new com.sigmob.sdk.rewardVideoAd.a
            r4 = 3
            java.lang.Integer r5 = java.lang.Integer.valueOf(r4)
            java.lang.String r6 = "NormalRequest"
            r0.<init>(r6, r2, r5)
            com.sigmob.sdk.rewardVideoAd.a.c = r0
            com.sigmob.sdk.rewardVideoAd.a r0 = new com.sigmob.sdk.rewardVideoAd.a
            r5 = 4
            java.lang.Integer r6 = java.lang.Integer.valueOf(r5)
            java.lang.String r7 = "OtherRequest"
            r0.<init>(r7, r4, r6)
            com.sigmob.sdk.rewardVideoAd.a.d = r0
            com.sigmob.sdk.rewardVideoAd.a r0 = new com.sigmob.sdk.rewardVideoAd.a
            r6 = 5
            java.lang.Integer r7 = java.lang.Integer.valueOf(r6)
            java.lang.String r8 = "SplashCloseRequest"
            r0.<init>(r8, r5, r7)
            com.sigmob.sdk.rewardVideoAd.a.e = r0
            com.sigmob.sdk.rewardVideoAd.a[] r6 = new com.sigmob.sdk.rewardVideoAd.a[r6]
            com.sigmob.sdk.rewardVideoAd.a r7 = com.sigmob.sdk.rewardVideoAd.a.a
            r6[r3] = r7
            com.sigmob.sdk.rewardVideoAd.a r3 = com.sigmob.sdk.rewardVideoAd.a.b
            r6[r1] = r3
            com.sigmob.sdk.rewardVideoAd.a r1 = com.sigmob.sdk.rewardVideoAd.a.c
            r6[r2] = r1
            com.sigmob.sdk.rewardVideoAd.a r1 = com.sigmob.sdk.rewardVideoAd.a.d
            r6[r4] = r1
            r6[r5] = r0
            com.sigmob.sdk.rewardVideoAd.a.g = r6
            return
    }

    a(java.lang.String r1, int r2, java.lang.Integer r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.f = r3
            return
    }

    public static com.sigmob.sdk.rewardVideoAd.a valueOf(java.lang.String r1) {
            java.lang.Class<com.sigmob.sdk.rewardVideoAd.a> r0 = com.sigmob.sdk.rewardVideoAd.a.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.sigmob.sdk.rewardVideoAd.a r1 = (com.sigmob.sdk.rewardVideoAd.a) r1
            return r1
    }

    public static com.sigmob.sdk.rewardVideoAd.a[] values() {
            com.sigmob.sdk.rewardVideoAd.a[] r0 = com.sigmob.sdk.rewardVideoAd.a.g
            java.lang.Object r0 = r0.clone()
            com.sigmob.sdk.rewardVideoAd.a[] r0 = (com.sigmob.sdk.rewardVideoAd.a[]) r0
            return r0
    }

    public java.lang.Integer a() {
            r1 = this;
            java.lang.Integer r0 = r1.f
            return r0
    }
}

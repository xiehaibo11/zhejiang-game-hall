package com.mbridge.msdk.dycreator.wrapper;

public enum DyAdType extends java.lang.Enum<com.mbridge.msdk.dycreator.wrapper.DyAdType> {
    public static final com.mbridge.msdk.dycreator.wrapper.DyAdType BANNER = null;
    public static final com.mbridge.msdk.dycreator.wrapper.DyAdType INTERSTITIAL = null;
    public static final com.mbridge.msdk.dycreator.wrapper.DyAdType NATIVE = null;
    public static final com.mbridge.msdk.dycreator.wrapper.DyAdType REWARD = null;
    public static final com.mbridge.msdk.dycreator.wrapper.DyAdType SPLASH = null;
    private static final com.mbridge.msdk.dycreator.wrapper.DyAdType[] a = null;

    static {
            com.mbridge.msdk.dycreator.wrapper.DyAdType r0 = new com.mbridge.msdk.dycreator.wrapper.DyAdType
            r1 = 0
            java.lang.String r2 = "SPLASH"
            r0.<init>(r2, r1)
            com.mbridge.msdk.dycreator.wrapper.DyAdType.SPLASH = r0
            com.mbridge.msdk.dycreator.wrapper.DyAdType r0 = new com.mbridge.msdk.dycreator.wrapper.DyAdType
            r2 = 1
            java.lang.String r3 = "BANNER"
            r0.<init>(r3, r2)
            com.mbridge.msdk.dycreator.wrapper.DyAdType.BANNER = r0
            com.mbridge.msdk.dycreator.wrapper.DyAdType r0 = new com.mbridge.msdk.dycreator.wrapper.DyAdType
            r3 = 2
            java.lang.String r4 = "INTERSTITIAL"
            r0.<init>(r4, r3)
            com.mbridge.msdk.dycreator.wrapper.DyAdType.INTERSTITIAL = r0
            com.mbridge.msdk.dycreator.wrapper.DyAdType r0 = new com.mbridge.msdk.dycreator.wrapper.DyAdType
            r4 = 3
            java.lang.String r5 = "REWARD"
            r0.<init>(r5, r4)
            com.mbridge.msdk.dycreator.wrapper.DyAdType.REWARD = r0
            com.mbridge.msdk.dycreator.wrapper.DyAdType r0 = new com.mbridge.msdk.dycreator.wrapper.DyAdType
            r5 = 4
            java.lang.String r6 = "NATIVE"
            r0.<init>(r6, r5)
            com.mbridge.msdk.dycreator.wrapper.DyAdType.NATIVE = r0
            r6 = 5
            com.mbridge.msdk.dycreator.wrapper.DyAdType[] r6 = new com.mbridge.msdk.dycreator.wrapper.DyAdType[r6]
            com.mbridge.msdk.dycreator.wrapper.DyAdType r7 = com.mbridge.msdk.dycreator.wrapper.DyAdType.SPLASH
            r6[r1] = r7
            com.mbridge.msdk.dycreator.wrapper.DyAdType r1 = com.mbridge.msdk.dycreator.wrapper.DyAdType.BANNER
            r6[r2] = r1
            com.mbridge.msdk.dycreator.wrapper.DyAdType r1 = com.mbridge.msdk.dycreator.wrapper.DyAdType.INTERSTITIAL
            r6[r3] = r1
            com.mbridge.msdk.dycreator.wrapper.DyAdType r1 = com.mbridge.msdk.dycreator.wrapper.DyAdType.REWARD
            r6[r4] = r1
            r6[r5] = r0
            com.mbridge.msdk.dycreator.wrapper.DyAdType.a = r6
            return
    }

    DyAdType(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.mbridge.msdk.dycreator.wrapper.DyAdType valueOf(java.lang.String r1) {
            java.lang.Class<com.mbridge.msdk.dycreator.wrapper.DyAdType> r0 = com.mbridge.msdk.dycreator.wrapper.DyAdType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.mbridge.msdk.dycreator.wrapper.DyAdType r1 = (com.mbridge.msdk.dycreator.wrapper.DyAdType) r1
            return r1
    }

    public static com.mbridge.msdk.dycreator.wrapper.DyAdType[] values() {
            com.mbridge.msdk.dycreator.wrapper.DyAdType[] r0 = com.mbridge.msdk.dycreator.wrapper.DyAdType.a
            java.lang.Object r0 = r0.clone()
            com.mbridge.msdk.dycreator.wrapper.DyAdType[] r0 = (com.mbridge.msdk.dycreator.wrapper.DyAdType[]) r0
            return r0
    }
}

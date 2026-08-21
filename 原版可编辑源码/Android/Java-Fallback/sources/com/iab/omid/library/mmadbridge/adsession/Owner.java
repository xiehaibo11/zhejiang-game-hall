package com.iab.omid.library.mmadbridge.adsession;

public enum Owner extends java.lang.Enum<com.iab.omid.library.mmadbridge.adsession.Owner> {
    private static final com.iab.omid.library.mmadbridge.adsession.Owner[] $VALUES = null;
    public static final com.iab.omid.library.mmadbridge.adsession.Owner JAVASCRIPT = null;
    public static final com.iab.omid.library.mmadbridge.adsession.Owner NATIVE = null;
    public static final com.iab.omid.library.mmadbridge.adsession.Owner NONE = null;
    private final java.lang.String owner;

    static {
            com.iab.omid.library.mmadbridge.adsession.Owner r0 = new com.iab.omid.library.mmadbridge.adsession.Owner
            r1 = 0
            java.lang.String r2 = "NATIVE"
            java.lang.String r3 = "native"
            r0.<init>(r2, r1, r3)
            com.iab.omid.library.mmadbridge.adsession.Owner.NATIVE = r0
            com.iab.omid.library.mmadbridge.adsession.Owner r2 = new com.iab.omid.library.mmadbridge.adsession.Owner
            r3 = 1
            java.lang.String r4 = "JAVASCRIPT"
            java.lang.String r5 = "javascript"
            r2.<init>(r4, r3, r5)
            com.iab.omid.library.mmadbridge.adsession.Owner.JAVASCRIPT = r2
            com.iab.omid.library.mmadbridge.adsession.Owner r4 = new com.iab.omid.library.mmadbridge.adsession.Owner
            r5 = 2
            java.lang.String r6 = "NONE"
            java.lang.String r7 = "none"
            r4.<init>(r6, r5, r7)
            com.iab.omid.library.mmadbridge.adsession.Owner.NONE = r4
            r6 = 3
            com.iab.omid.library.mmadbridge.adsession.Owner[] r6 = new com.iab.omid.library.mmadbridge.adsession.Owner[r6]
            r6[r1] = r0
            r6[r3] = r2
            r6[r5] = r4
            com.iab.omid.library.mmadbridge.adsession.Owner.$VALUES = r6
            return
    }

    Owner(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.owner = r3
            return
    }

    public static com.iab.omid.library.mmadbridge.adsession.Owner valueOf(java.lang.String r1) {
            java.lang.Class<com.iab.omid.library.mmadbridge.adsession.Owner> r0 = com.iab.omid.library.mmadbridge.adsession.Owner.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.iab.omid.library.mmadbridge.adsession.Owner r1 = (com.iab.omid.library.mmadbridge.adsession.Owner) r1
            return r1
    }

    public static com.iab.omid.library.mmadbridge.adsession.Owner[] values() {
            com.iab.omid.library.mmadbridge.adsession.Owner[] r0 = com.iab.omid.library.mmadbridge.adsession.Owner.$VALUES
            java.lang.Object r0 = r0.clone()
            com.iab.omid.library.mmadbridge.adsession.Owner[] r0 = (com.iab.omid.library.mmadbridge.adsession.Owner[]) r0
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.owner
            return r0
    }
}

package com.iab.omid.library.mmadbridge.adsession;

public enum AdSessionContextType extends java.lang.Enum<com.iab.omid.library.mmadbridge.adsession.AdSessionContextType> {
    private static final com.iab.omid.library.mmadbridge.adsession.AdSessionContextType[] $VALUES = null;
    public static final com.iab.omid.library.mmadbridge.adsession.AdSessionContextType HTML = null;
    public static final com.iab.omid.library.mmadbridge.adsession.AdSessionContextType JAVASCRIPT = null;
    public static final com.iab.omid.library.mmadbridge.adsession.AdSessionContextType NATIVE = null;
    private final java.lang.String typeString;

    static {
            com.iab.omid.library.mmadbridge.adsession.AdSessionContextType r0 = new com.iab.omid.library.mmadbridge.adsession.AdSessionContextType
            r1 = 0
            java.lang.String r2 = "HTML"
            java.lang.String r3 = "html"
            r0.<init>(r2, r1, r3)
            com.iab.omid.library.mmadbridge.adsession.AdSessionContextType.HTML = r0
            com.iab.omid.library.mmadbridge.adsession.AdSessionContextType r2 = new com.iab.omid.library.mmadbridge.adsession.AdSessionContextType
            r3 = 1
            java.lang.String r4 = "NATIVE"
            java.lang.String r5 = "native"
            r2.<init>(r4, r3, r5)
            com.iab.omid.library.mmadbridge.adsession.AdSessionContextType.NATIVE = r2
            com.iab.omid.library.mmadbridge.adsession.AdSessionContextType r4 = new com.iab.omid.library.mmadbridge.adsession.AdSessionContextType
            r5 = 2
            java.lang.String r6 = "JAVASCRIPT"
            java.lang.String r7 = "javascript"
            r4.<init>(r6, r5, r7)
            com.iab.omid.library.mmadbridge.adsession.AdSessionContextType.JAVASCRIPT = r4
            r6 = 3
            com.iab.omid.library.mmadbridge.adsession.AdSessionContextType[] r6 = new com.iab.omid.library.mmadbridge.adsession.AdSessionContextType[r6]
            r6[r1] = r0
            r6[r3] = r2
            r6[r5] = r4
            com.iab.omid.library.mmadbridge.adsession.AdSessionContextType.$VALUES = r6
            return
    }

    AdSessionContextType(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.typeString = r3
            return
    }

    public static com.iab.omid.library.mmadbridge.adsession.AdSessionContextType valueOf(java.lang.String r1) {
            java.lang.Class<com.iab.omid.library.mmadbridge.adsession.AdSessionContextType> r0 = com.iab.omid.library.mmadbridge.adsession.AdSessionContextType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.iab.omid.library.mmadbridge.adsession.AdSessionContextType r1 = (com.iab.omid.library.mmadbridge.adsession.AdSessionContextType) r1
            return r1
    }

    public static com.iab.omid.library.mmadbridge.adsession.AdSessionContextType[] values() {
            com.iab.omid.library.mmadbridge.adsession.AdSessionContextType[] r0 = com.iab.omid.library.mmadbridge.adsession.AdSessionContextType.$VALUES
            java.lang.Object r0 = r0.clone()
            com.iab.omid.library.mmadbridge.adsession.AdSessionContextType[] r0 = (com.iab.omid.library.mmadbridge.adsession.AdSessionContextType[]) r0
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.typeString
            return r0
    }
}

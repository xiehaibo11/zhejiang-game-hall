package com.iab.omid.library.mmadbridge.adsession;

public enum CreativeType extends java.lang.Enum<com.iab.omid.library.mmadbridge.adsession.CreativeType> {
    private static final com.iab.omid.library.mmadbridge.adsession.CreativeType[] $VALUES = null;
    public static final com.iab.omid.library.mmadbridge.adsession.CreativeType AUDIO = null;
    public static final com.iab.omid.library.mmadbridge.adsession.CreativeType DEFINED_BY_JAVASCRIPT = null;
    public static final com.iab.omid.library.mmadbridge.adsession.CreativeType HTML_DISPLAY = null;
    public static final com.iab.omid.library.mmadbridge.adsession.CreativeType NATIVE_DISPLAY = null;
    public static final com.iab.omid.library.mmadbridge.adsession.CreativeType VIDEO = null;
    private final java.lang.String creativeType;

    static {
            com.iab.omid.library.mmadbridge.adsession.CreativeType r0 = new com.iab.omid.library.mmadbridge.adsession.CreativeType
            r1 = 0
            java.lang.String r2 = "DEFINED_BY_JAVASCRIPT"
            java.lang.String r3 = "definedByJavaScript"
            r0.<init>(r2, r1, r3)
            com.iab.omid.library.mmadbridge.adsession.CreativeType.DEFINED_BY_JAVASCRIPT = r0
            com.iab.omid.library.mmadbridge.adsession.CreativeType r2 = new com.iab.omid.library.mmadbridge.adsession.CreativeType
            r3 = 1
            java.lang.String r4 = "HTML_DISPLAY"
            java.lang.String r5 = "htmlDisplay"
            r2.<init>(r4, r3, r5)
            com.iab.omid.library.mmadbridge.adsession.CreativeType.HTML_DISPLAY = r2
            com.iab.omid.library.mmadbridge.adsession.CreativeType r4 = new com.iab.omid.library.mmadbridge.adsession.CreativeType
            r5 = 2
            java.lang.String r6 = "NATIVE_DISPLAY"
            java.lang.String r7 = "nativeDisplay"
            r4.<init>(r6, r5, r7)
            com.iab.omid.library.mmadbridge.adsession.CreativeType.NATIVE_DISPLAY = r4
            com.iab.omid.library.mmadbridge.adsession.CreativeType r6 = new com.iab.omid.library.mmadbridge.adsession.CreativeType
            r7 = 3
            java.lang.String r8 = "VIDEO"
            java.lang.String r9 = "video"
            r6.<init>(r8, r7, r9)
            com.iab.omid.library.mmadbridge.adsession.CreativeType.VIDEO = r6
            com.iab.omid.library.mmadbridge.adsession.CreativeType r8 = new com.iab.omid.library.mmadbridge.adsession.CreativeType
            r9 = 4
            java.lang.String r10 = "AUDIO"
            java.lang.String r11 = "audio"
            r8.<init>(r10, r9, r11)
            com.iab.omid.library.mmadbridge.adsession.CreativeType.AUDIO = r8
            r10 = 5
            com.iab.omid.library.mmadbridge.adsession.CreativeType[] r10 = new com.iab.omid.library.mmadbridge.adsession.CreativeType[r10]
            r10[r1] = r0
            r10[r3] = r2
            r10[r5] = r4
            r10[r7] = r6
            r10[r9] = r8
            com.iab.omid.library.mmadbridge.adsession.CreativeType.$VALUES = r10
            return
    }

    CreativeType(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.creativeType = r3
            return
    }

    public static com.iab.omid.library.mmadbridge.adsession.CreativeType valueOf(java.lang.String r1) {
            java.lang.Class<com.iab.omid.library.mmadbridge.adsession.CreativeType> r0 = com.iab.omid.library.mmadbridge.adsession.CreativeType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.iab.omid.library.mmadbridge.adsession.CreativeType r1 = (com.iab.omid.library.mmadbridge.adsession.CreativeType) r1
            return r1
    }

    public static com.iab.omid.library.mmadbridge.adsession.CreativeType[] values() {
            com.iab.omid.library.mmadbridge.adsession.CreativeType[] r0 = com.iab.omid.library.mmadbridge.adsession.CreativeType.$VALUES
            java.lang.Object r0 = r0.clone()
            com.iab.omid.library.mmadbridge.adsession.CreativeType[] r0 = (com.iab.omid.library.mmadbridge.adsession.CreativeType[]) r0
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.creativeType
            return r0
    }
}

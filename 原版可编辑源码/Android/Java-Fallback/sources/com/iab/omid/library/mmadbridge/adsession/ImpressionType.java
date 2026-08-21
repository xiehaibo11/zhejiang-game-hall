package com.iab.omid.library.mmadbridge.adsession;

public enum ImpressionType extends java.lang.Enum<com.iab.omid.library.mmadbridge.adsession.ImpressionType> {
    private static final com.iab.omid.library.mmadbridge.adsession.ImpressionType[] $VALUES = null;
    public static final com.iab.omid.library.mmadbridge.adsession.ImpressionType AUDIBLE = null;
    public static final com.iab.omid.library.mmadbridge.adsession.ImpressionType BEGIN_TO_RENDER = null;
    public static final com.iab.omid.library.mmadbridge.adsession.ImpressionType DEFINED_BY_JAVASCRIPT = null;
    public static final com.iab.omid.library.mmadbridge.adsession.ImpressionType LOADED = null;
    public static final com.iab.omid.library.mmadbridge.adsession.ImpressionType ONE_PIXEL = null;
    public static final com.iab.omid.library.mmadbridge.adsession.ImpressionType OTHER = null;
    public static final com.iab.omid.library.mmadbridge.adsession.ImpressionType UNSPECIFIED = null;
    public static final com.iab.omid.library.mmadbridge.adsession.ImpressionType VIEWABLE = null;
    private final java.lang.String impressionType;

    static {
            com.iab.omid.library.mmadbridge.adsession.ImpressionType r0 = new com.iab.omid.library.mmadbridge.adsession.ImpressionType
            r1 = 0
            java.lang.String r2 = "DEFINED_BY_JAVASCRIPT"
            java.lang.String r3 = "definedByJavaScript"
            r0.<init>(r2, r1, r3)
            com.iab.omid.library.mmadbridge.adsession.ImpressionType.DEFINED_BY_JAVASCRIPT = r0
            com.iab.omid.library.mmadbridge.adsession.ImpressionType r2 = new com.iab.omid.library.mmadbridge.adsession.ImpressionType
            r3 = 1
            java.lang.String r4 = "UNSPECIFIED"
            java.lang.String r5 = "unspecified"
            r2.<init>(r4, r3, r5)
            com.iab.omid.library.mmadbridge.adsession.ImpressionType.UNSPECIFIED = r2
            com.iab.omid.library.mmadbridge.adsession.ImpressionType r4 = new com.iab.omid.library.mmadbridge.adsession.ImpressionType
            r5 = 2
            java.lang.String r6 = "LOADED"
            java.lang.String r7 = "loaded"
            r4.<init>(r6, r5, r7)
            com.iab.omid.library.mmadbridge.adsession.ImpressionType.LOADED = r4
            com.iab.omid.library.mmadbridge.adsession.ImpressionType r6 = new com.iab.omid.library.mmadbridge.adsession.ImpressionType
            r7 = 3
            java.lang.String r8 = "BEGIN_TO_RENDER"
            java.lang.String r9 = "beginToRender"
            r6.<init>(r8, r7, r9)
            com.iab.omid.library.mmadbridge.adsession.ImpressionType.BEGIN_TO_RENDER = r6
            com.iab.omid.library.mmadbridge.adsession.ImpressionType r8 = new com.iab.omid.library.mmadbridge.adsession.ImpressionType
            r9 = 4
            java.lang.String r10 = "ONE_PIXEL"
            java.lang.String r11 = "onePixel"
            r8.<init>(r10, r9, r11)
            com.iab.omid.library.mmadbridge.adsession.ImpressionType.ONE_PIXEL = r8
            com.iab.omid.library.mmadbridge.adsession.ImpressionType r10 = new com.iab.omid.library.mmadbridge.adsession.ImpressionType
            r11 = 5
            java.lang.String r12 = "VIEWABLE"
            java.lang.String r13 = "viewable"
            r10.<init>(r12, r11, r13)
            com.iab.omid.library.mmadbridge.adsession.ImpressionType.VIEWABLE = r10
            com.iab.omid.library.mmadbridge.adsession.ImpressionType r12 = new com.iab.omid.library.mmadbridge.adsession.ImpressionType
            r13 = 6
            java.lang.String r14 = "AUDIBLE"
            java.lang.String r15 = "audible"
            r12.<init>(r14, r13, r15)
            com.iab.omid.library.mmadbridge.adsession.ImpressionType.AUDIBLE = r12
            com.iab.omid.library.mmadbridge.adsession.ImpressionType r14 = new com.iab.omid.library.mmadbridge.adsession.ImpressionType
            r15 = 7
            java.lang.String r13 = "OTHER"
            java.lang.String r11 = "other"
            r14.<init>(r13, r15, r11)
            com.iab.omid.library.mmadbridge.adsession.ImpressionType.OTHER = r14
            r11 = 8
            com.iab.omid.library.mmadbridge.adsession.ImpressionType[] r11 = new com.iab.omid.library.mmadbridge.adsession.ImpressionType[r11]
            r11[r1] = r0
            r11[r3] = r2
            r11[r5] = r4
            r11[r7] = r6
            r11[r9] = r8
            r0 = 5
            r11[r0] = r10
            r0 = 6
            r11[r0] = r12
            r11[r15] = r14
            com.iab.omid.library.mmadbridge.adsession.ImpressionType.$VALUES = r11
            return
    }

    ImpressionType(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.impressionType = r3
            return
    }

    public static com.iab.omid.library.mmadbridge.adsession.ImpressionType valueOf(java.lang.String r1) {
            java.lang.Class<com.iab.omid.library.mmadbridge.adsession.ImpressionType> r0 = com.iab.omid.library.mmadbridge.adsession.ImpressionType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.iab.omid.library.mmadbridge.adsession.ImpressionType r1 = (com.iab.omid.library.mmadbridge.adsession.ImpressionType) r1
            return r1
    }

    public static com.iab.omid.library.mmadbridge.adsession.ImpressionType[] values() {
            com.iab.omid.library.mmadbridge.adsession.ImpressionType[] r0 = com.iab.omid.library.mmadbridge.adsession.ImpressionType.$VALUES
            java.lang.Object r0 = r0.clone()
            com.iab.omid.library.mmadbridge.adsession.ImpressionType[] r0 = (com.iab.omid.library.mmadbridge.adsession.ImpressionType[]) r0
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.impressionType
            return r0
    }
}

package com.iab.omid.library.mmadbridge.adsession;

public enum ErrorType extends java.lang.Enum<com.iab.omid.library.mmadbridge.adsession.ErrorType> {
    private static final com.iab.omid.library.mmadbridge.adsession.ErrorType[] $VALUES = null;
    public static final com.iab.omid.library.mmadbridge.adsession.ErrorType GENERIC = null;
    public static final com.iab.omid.library.mmadbridge.adsession.ErrorType VIDEO = null;
    private final java.lang.String errorType;

    static {
            com.iab.omid.library.mmadbridge.adsession.ErrorType r0 = new com.iab.omid.library.mmadbridge.adsession.ErrorType
            r1 = 0
            java.lang.String r2 = "GENERIC"
            java.lang.String r3 = "generic"
            r0.<init>(r2, r1, r3)
            com.iab.omid.library.mmadbridge.adsession.ErrorType.GENERIC = r0
            com.iab.omid.library.mmadbridge.adsession.ErrorType r2 = new com.iab.omid.library.mmadbridge.adsession.ErrorType
            r3 = 1
            java.lang.String r4 = "VIDEO"
            java.lang.String r5 = "video"
            r2.<init>(r4, r3, r5)
            com.iab.omid.library.mmadbridge.adsession.ErrorType.VIDEO = r2
            r4 = 2
            com.iab.omid.library.mmadbridge.adsession.ErrorType[] r4 = new com.iab.omid.library.mmadbridge.adsession.ErrorType[r4]
            r4[r1] = r0
            r4[r3] = r2
            com.iab.omid.library.mmadbridge.adsession.ErrorType.$VALUES = r4
            return
    }

    ErrorType(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.errorType = r3
            return
    }

    public static com.iab.omid.library.mmadbridge.adsession.ErrorType valueOf(java.lang.String r1) {
            java.lang.Class<com.iab.omid.library.mmadbridge.adsession.ErrorType> r0 = com.iab.omid.library.mmadbridge.adsession.ErrorType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.iab.omid.library.mmadbridge.adsession.ErrorType r1 = (com.iab.omid.library.mmadbridge.adsession.ErrorType) r1
            return r1
    }

    public static com.iab.omid.library.mmadbridge.adsession.ErrorType[] values() {
            com.iab.omid.library.mmadbridge.adsession.ErrorType[] r0 = com.iab.omid.library.mmadbridge.adsession.ErrorType.$VALUES
            java.lang.Object r0 = r0.clone()
            com.iab.omid.library.mmadbridge.adsession.ErrorType[] r0 = (com.iab.omid.library.mmadbridge.adsession.ErrorType[]) r0
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.errorType
            return r0
    }
}

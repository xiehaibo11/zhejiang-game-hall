package com.iab.omid.library.mmadbridge.adsession;

public enum FriendlyObstructionPurpose extends java.lang.Enum<com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose> {
    private static final com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose[] $VALUES = null;
    public static final com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose CLOSE_AD = null;
    public static final com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose NOT_VISIBLE = null;
    public static final com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose OTHER = null;
    public static final com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose VIDEO_CONTROLS = null;

    static {
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r0 = new com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose
            r1 = 0
            java.lang.String r2 = "VIDEO_CONTROLS"
            r0.<init>(r2, r1)
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.VIDEO_CONTROLS = r0
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r2 = new com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose
            r3 = 1
            java.lang.String r4 = "CLOSE_AD"
            r2.<init>(r4, r3)
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.CLOSE_AD = r2
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r4 = new com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose
            r5 = 2
            java.lang.String r6 = "NOT_VISIBLE"
            r4.<init>(r6, r5)
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.NOT_VISIBLE = r4
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r6 = new com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose
            r7 = 3
            java.lang.String r8 = "OTHER"
            r6.<init>(r8, r7)
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.OTHER = r6
            r8 = 4
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose[] r8 = new com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose[r8]
            r8[r1] = r0
            r8[r3] = r2
            r8[r5] = r4
            r8[r7] = r6
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.$VALUES = r8
            return
    }

    FriendlyObstructionPurpose(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose valueOf(java.lang.String r1) {
            java.lang.Class<com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose> r0 = com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r1 = (com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose) r1
            return r1
    }

    public static com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose[] values() {
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose[] r0 = com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.$VALUES
            java.lang.Object r0 = r0.clone()
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose[] r0 = (com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose[]) r0
            return r0
    }
}

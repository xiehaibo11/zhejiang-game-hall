package com.iab.omid.library.mmadbridge.adsession.media;

public enum Position extends java.lang.Enum<com.iab.omid.library.mmadbridge.adsession.media.Position> {
    private static final com.iab.omid.library.mmadbridge.adsession.media.Position[] $VALUES = null;
    public static final com.iab.omid.library.mmadbridge.adsession.media.Position MIDROLL = null;
    public static final com.iab.omid.library.mmadbridge.adsession.media.Position POSTROLL = null;
    public static final com.iab.omid.library.mmadbridge.adsession.media.Position PREROLL = null;
    public static final com.iab.omid.library.mmadbridge.adsession.media.Position STANDALONE = null;
    private final java.lang.String position;

    static {
            com.iab.omid.library.mmadbridge.adsession.media.Position r0 = new com.iab.omid.library.mmadbridge.adsession.media.Position
            r1 = 0
            java.lang.String r2 = "PREROLL"
            java.lang.String r3 = "preroll"
            r0.<init>(r2, r1, r3)
            com.iab.omid.library.mmadbridge.adsession.media.Position.PREROLL = r0
            com.iab.omid.library.mmadbridge.adsession.media.Position r2 = new com.iab.omid.library.mmadbridge.adsession.media.Position
            r3 = 1
            java.lang.String r4 = "MIDROLL"
            java.lang.String r5 = "midroll"
            r2.<init>(r4, r3, r5)
            com.iab.omid.library.mmadbridge.adsession.media.Position.MIDROLL = r2
            com.iab.omid.library.mmadbridge.adsession.media.Position r4 = new com.iab.omid.library.mmadbridge.adsession.media.Position
            r5 = 2
            java.lang.String r6 = "POSTROLL"
            java.lang.String r7 = "postroll"
            r4.<init>(r6, r5, r7)
            com.iab.omid.library.mmadbridge.adsession.media.Position.POSTROLL = r4
            com.iab.omid.library.mmadbridge.adsession.media.Position r6 = new com.iab.omid.library.mmadbridge.adsession.media.Position
            r7 = 3
            java.lang.String r8 = "STANDALONE"
            java.lang.String r9 = "standalone"
            r6.<init>(r8, r7, r9)
            com.iab.omid.library.mmadbridge.adsession.media.Position.STANDALONE = r6
            r8 = 4
            com.iab.omid.library.mmadbridge.adsession.media.Position[] r8 = new com.iab.omid.library.mmadbridge.adsession.media.Position[r8]
            r8[r1] = r0
            r8[r3] = r2
            r8[r5] = r4
            r8[r7] = r6
            com.iab.omid.library.mmadbridge.adsession.media.Position.$VALUES = r8
            return
    }

    Position(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.position = r3
            return
    }

    public static com.iab.omid.library.mmadbridge.adsession.media.Position valueOf(java.lang.String r1) {
            java.lang.Class<com.iab.omid.library.mmadbridge.adsession.media.Position> r0 = com.iab.omid.library.mmadbridge.adsession.media.Position.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.iab.omid.library.mmadbridge.adsession.media.Position r1 = (com.iab.omid.library.mmadbridge.adsession.media.Position) r1
            return r1
    }

    public static com.iab.omid.library.mmadbridge.adsession.media.Position[] values() {
            com.iab.omid.library.mmadbridge.adsession.media.Position[] r0 = com.iab.omid.library.mmadbridge.adsession.media.Position.$VALUES
            java.lang.Object r0 = r0.clone()
            com.iab.omid.library.mmadbridge.adsession.media.Position[] r0 = (com.iab.omid.library.mmadbridge.adsession.media.Position[]) r0
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.position
            return r0
    }
}

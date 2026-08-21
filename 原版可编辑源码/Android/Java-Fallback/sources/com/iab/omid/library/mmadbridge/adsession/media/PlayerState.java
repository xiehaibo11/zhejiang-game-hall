package com.iab.omid.library.mmadbridge.adsession.media;

public enum PlayerState extends java.lang.Enum<com.iab.omid.library.mmadbridge.adsession.media.PlayerState> {
    private static final com.iab.omid.library.mmadbridge.adsession.media.PlayerState[] $VALUES = null;
    public static final com.iab.omid.library.mmadbridge.adsession.media.PlayerState COLLAPSED = null;
    public static final com.iab.omid.library.mmadbridge.adsession.media.PlayerState EXPANDED = null;
    public static final com.iab.omid.library.mmadbridge.adsession.media.PlayerState FULLSCREEN = null;
    public static final com.iab.omid.library.mmadbridge.adsession.media.PlayerState MINIMIZED = null;
    public static final com.iab.omid.library.mmadbridge.adsession.media.PlayerState NORMAL = null;
    private final java.lang.String playerState;

    static {
            com.iab.omid.library.mmadbridge.adsession.media.PlayerState r0 = new com.iab.omid.library.mmadbridge.adsession.media.PlayerState
            r1 = 0
            java.lang.String r2 = "MINIMIZED"
            java.lang.String r3 = "minimized"
            r0.<init>(r2, r1, r3)
            com.iab.omid.library.mmadbridge.adsession.media.PlayerState.MINIMIZED = r0
            com.iab.omid.library.mmadbridge.adsession.media.PlayerState r2 = new com.iab.omid.library.mmadbridge.adsession.media.PlayerState
            r3 = 1
            java.lang.String r4 = "COLLAPSED"
            java.lang.String r5 = "collapsed"
            r2.<init>(r4, r3, r5)
            com.iab.omid.library.mmadbridge.adsession.media.PlayerState.COLLAPSED = r2
            com.iab.omid.library.mmadbridge.adsession.media.PlayerState r4 = new com.iab.omid.library.mmadbridge.adsession.media.PlayerState
            r5 = 2
            java.lang.String r6 = "NORMAL"
            java.lang.String r7 = "normal"
            r4.<init>(r6, r5, r7)
            com.iab.omid.library.mmadbridge.adsession.media.PlayerState.NORMAL = r4
            com.iab.omid.library.mmadbridge.adsession.media.PlayerState r6 = new com.iab.omid.library.mmadbridge.adsession.media.PlayerState
            r7 = 3
            java.lang.String r8 = "EXPANDED"
            java.lang.String r9 = "expanded"
            r6.<init>(r8, r7, r9)
            com.iab.omid.library.mmadbridge.adsession.media.PlayerState.EXPANDED = r6
            com.iab.omid.library.mmadbridge.adsession.media.PlayerState r8 = new com.iab.omid.library.mmadbridge.adsession.media.PlayerState
            r9 = 4
            java.lang.String r10 = "FULLSCREEN"
            java.lang.String r11 = "fullscreen"
            r8.<init>(r10, r9, r11)
            com.iab.omid.library.mmadbridge.adsession.media.PlayerState.FULLSCREEN = r8
            r10 = 5
            com.iab.omid.library.mmadbridge.adsession.media.PlayerState[] r10 = new com.iab.omid.library.mmadbridge.adsession.media.PlayerState[r10]
            r10[r1] = r0
            r10[r3] = r2
            r10[r5] = r4
            r10[r7] = r6
            r10[r9] = r8
            com.iab.omid.library.mmadbridge.adsession.media.PlayerState.$VALUES = r10
            return
    }

    PlayerState(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.playerState = r3
            return
    }

    public static com.iab.omid.library.mmadbridge.adsession.media.PlayerState valueOf(java.lang.String r1) {
            java.lang.Class<com.iab.omid.library.mmadbridge.adsession.media.PlayerState> r0 = com.iab.omid.library.mmadbridge.adsession.media.PlayerState.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.iab.omid.library.mmadbridge.adsession.media.PlayerState r1 = (com.iab.omid.library.mmadbridge.adsession.media.PlayerState) r1
            return r1
    }

    public static com.iab.omid.library.mmadbridge.adsession.media.PlayerState[] values() {
            com.iab.omid.library.mmadbridge.adsession.media.PlayerState[] r0 = com.iab.omid.library.mmadbridge.adsession.media.PlayerState.$VALUES
            java.lang.Object r0 = r0.clone()
            com.iab.omid.library.mmadbridge.adsession.media.PlayerState[] r0 = (com.iab.omid.library.mmadbridge.adsession.media.PlayerState[]) r0
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.playerState
            return r0
    }
}

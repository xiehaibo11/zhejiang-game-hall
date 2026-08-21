package com.iab.omid.library.mmadbridge.adsession.media;

public enum InteractionType extends java.lang.Enum<com.iab.omid.library.mmadbridge.adsession.media.InteractionType> {
    private static final com.iab.omid.library.mmadbridge.adsession.media.InteractionType[] $VALUES = null;
    public static final com.iab.omid.library.mmadbridge.adsession.media.InteractionType CLICK = null;
    public static final com.iab.omid.library.mmadbridge.adsession.media.InteractionType INVITATION_ACCEPTED = null;
    java.lang.String interactionType;

    static {
            com.iab.omid.library.mmadbridge.adsession.media.InteractionType r0 = new com.iab.omid.library.mmadbridge.adsession.media.InteractionType
            r1 = 0
            java.lang.String r2 = "CLICK"
            java.lang.String r3 = "click"
            r0.<init>(r2, r1, r3)
            com.iab.omid.library.mmadbridge.adsession.media.InteractionType.CLICK = r0
            com.iab.omid.library.mmadbridge.adsession.media.InteractionType r2 = new com.iab.omid.library.mmadbridge.adsession.media.InteractionType
            r3 = 1
            java.lang.String r4 = "INVITATION_ACCEPTED"
            java.lang.String r5 = "invitationAccept"
            r2.<init>(r4, r3, r5)
            com.iab.omid.library.mmadbridge.adsession.media.InteractionType.INVITATION_ACCEPTED = r2
            r4 = 2
            com.iab.omid.library.mmadbridge.adsession.media.InteractionType[] r4 = new com.iab.omid.library.mmadbridge.adsession.media.InteractionType[r4]
            r4[r1] = r0
            r4[r3] = r2
            com.iab.omid.library.mmadbridge.adsession.media.InteractionType.$VALUES = r4
            return
    }

    InteractionType(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.interactionType = r3
            return
    }

    public static com.iab.omid.library.mmadbridge.adsession.media.InteractionType valueOf(java.lang.String r1) {
            java.lang.Class<com.iab.omid.library.mmadbridge.adsession.media.InteractionType> r0 = com.iab.omid.library.mmadbridge.adsession.media.InteractionType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.iab.omid.library.mmadbridge.adsession.media.InteractionType r1 = (com.iab.omid.library.mmadbridge.adsession.media.InteractionType) r1
            return r1
    }

    public static com.iab.omid.library.mmadbridge.adsession.media.InteractionType[] values() {
            com.iab.omid.library.mmadbridge.adsession.media.InteractionType[] r0 = com.iab.omid.library.mmadbridge.adsession.media.InteractionType.$VALUES
            java.lang.Object r0 = r0.clone()
            com.iab.omid.library.mmadbridge.adsession.media.InteractionType[] r0 = (com.iab.omid.library.mmadbridge.adsession.media.InteractionType[]) r0
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.interactionType
            return r0
    }
}

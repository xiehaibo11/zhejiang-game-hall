package com.iab.omid.library.mmadbridge.walking;

public enum c extends java.lang.Enum<com.iab.omid.library.mmadbridge.walking.c> {
    public static final com.iab.omid.library.mmadbridge.walking.c a = null;
    public static final com.iab.omid.library.mmadbridge.walking.c b = null;
    public static final com.iab.omid.library.mmadbridge.walking.c c = null;
    private static final com.iab.omid.library.mmadbridge.walking.c[] d = null;

    static {
            com.iab.omid.library.mmadbridge.walking.c r0 = new com.iab.omid.library.mmadbridge.walking.c
            r1 = 0
            java.lang.String r2 = "PARENT_VIEW"
            r0.<init>(r2, r1)
            com.iab.omid.library.mmadbridge.walking.c.a = r0
            com.iab.omid.library.mmadbridge.walking.c r2 = new com.iab.omid.library.mmadbridge.walking.c
            r3 = 1
            java.lang.String r4 = "OBSTRUCTION_VIEW"
            r2.<init>(r4, r3)
            com.iab.omid.library.mmadbridge.walking.c.b = r2
            com.iab.omid.library.mmadbridge.walking.c r4 = new com.iab.omid.library.mmadbridge.walking.c
            r5 = 2
            java.lang.String r6 = "UNDERLYING_VIEW"
            r4.<init>(r6, r5)
            com.iab.omid.library.mmadbridge.walking.c.c = r4
            r6 = 3
            com.iab.omid.library.mmadbridge.walking.c[] r6 = new com.iab.omid.library.mmadbridge.walking.c[r6]
            r6[r1] = r0
            r6[r3] = r2
            r6[r5] = r4
            com.iab.omid.library.mmadbridge.walking.c.d = r6
            return
    }

    c(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.iab.omid.library.mmadbridge.walking.c valueOf(java.lang.String r1) {
            java.lang.Class<com.iab.omid.library.mmadbridge.walking.c> r0 = com.iab.omid.library.mmadbridge.walking.c.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.iab.omid.library.mmadbridge.walking.c r1 = (com.iab.omid.library.mmadbridge.walking.c) r1
            return r1
    }

    public static com.iab.omid.library.mmadbridge.walking.c[] values() {
            com.iab.omid.library.mmadbridge.walking.c[] r0 = com.iab.omid.library.mmadbridge.walking.c.d
            java.lang.Object r0 = r0.clone()
            com.iab.omid.library.mmadbridge.walking.c[] r0 = (com.iab.omid.library.mmadbridge.walking.c[]) r0
            return r0
    }
}

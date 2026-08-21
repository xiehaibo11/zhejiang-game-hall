package com.iab.omid.library.mmadbridge;

public final class Omid {
    private static com.iab.omid.library.mmadbridge.b INSTANCE;

    static {
            com.iab.omid.library.mmadbridge.b r0 = new com.iab.omid.library.mmadbridge.b
            r0.<init>()
            com.iab.omid.library.mmadbridge.Omid.INSTANCE = r0
            return
    }

    private Omid() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void activate(android.content.Context r1) {
            com.iab.omid.library.mmadbridge.b r0 = com.iab.omid.library.mmadbridge.Omid.INSTANCE
            android.content.Context r1 = r1.getApplicationContext()
            r0.a(r1)
            return
    }

    public static java.lang.String getVersion() {
            com.iab.omid.library.mmadbridge.b r0 = com.iab.omid.library.mmadbridge.Omid.INSTANCE
            java.lang.String r0 = r0.a()
            return r0
    }

    public static boolean isActive() {
            com.iab.omid.library.mmadbridge.b r0 = com.iab.omid.library.mmadbridge.Omid.INSTANCE
            boolean r0 = r0.b()
            return r0
    }

    public static void updateLastActivity() {
            com.iab.omid.library.mmadbridge.b r0 = com.iab.omid.library.mmadbridge.Omid.INSTANCE
            r0.c()
            return
    }
}

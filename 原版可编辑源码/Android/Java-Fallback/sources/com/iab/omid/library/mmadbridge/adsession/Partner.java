package com.iab.omid.library.mmadbridge.adsession;

public class Partner {
    private final java.lang.String name;
    private final java.lang.String version;

    private Partner(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.name = r1
            r0.version = r2
            return
    }

    public static com.iab.omid.library.mmadbridge.adsession.Partner createPartner(java.lang.String r1, java.lang.String r2) {
            java.lang.String r0 = "Name is null or empty"
            com.iab.omid.library.mmadbridge.utils.g.a(r1, r0)
            java.lang.String r0 = "Version is null or empty"
            com.iab.omid.library.mmadbridge.utils.g.a(r2, r0)
            com.iab.omid.library.mmadbridge.adsession.Partner r0 = new com.iab.omid.library.mmadbridge.adsession.Partner
            r0.<init>(r1, r2)
            return r0
    }

    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }

    public java.lang.String getVersion() {
            r1 = this;
            java.lang.String r0 = r1.version
            return r0
    }
}

package com.iab.omid.library.mmadbridge.adsession;

public class AdSessionConfiguration {
    private final com.iab.omid.library.mmadbridge.adsession.CreativeType creativeType;
    private final com.iab.omid.library.mmadbridge.adsession.Owner impressionOwner;
    private final com.iab.omid.library.mmadbridge.adsession.ImpressionType impressionType;
    private final boolean isolateVerificationScripts;
    private final com.iab.omid.library.mmadbridge.adsession.Owner mediaEventsOwner;

    private AdSessionConfiguration(com.iab.omid.library.mmadbridge.adsession.CreativeType r1, com.iab.omid.library.mmadbridge.adsession.ImpressionType r2, com.iab.omid.library.mmadbridge.adsession.Owner r3, com.iab.omid.library.mmadbridge.adsession.Owner r4, boolean r5) {
            r0 = this;
            r0.<init>()
            r0.creativeType = r1
            r0.impressionType = r2
            r0.impressionOwner = r3
            if (r4 != 0) goto L10
            com.iab.omid.library.mmadbridge.adsession.Owner r1 = com.iab.omid.library.mmadbridge.adsession.Owner.NONE
            r0.mediaEventsOwner = r1
            goto L12
        L10:
            r0.mediaEventsOwner = r4
        L12:
            r0.isolateVerificationScripts = r5
            return
    }

    public static com.iab.omid.library.mmadbridge.adsession.AdSessionConfiguration createAdSessionConfiguration(com.iab.omid.library.mmadbridge.adsession.CreativeType r7, com.iab.omid.library.mmadbridge.adsession.ImpressionType r8, com.iab.omid.library.mmadbridge.adsession.Owner r9, com.iab.omid.library.mmadbridge.adsession.Owner r10, boolean r11) {
            java.lang.String r0 = "CreativeType is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r7, r0)
            java.lang.String r0 = "ImpressionType is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r8, r0)
            java.lang.String r0 = "Impression owner is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r9, r0)
            com.iab.omid.library.mmadbridge.utils.g.a(r9, r7, r8)
            com.iab.omid.library.mmadbridge.adsession.AdSessionConfiguration r0 = new com.iab.omid.library.mmadbridge.adsession.AdSessionConfiguration
            r1 = r0
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r6 = r11
            r1.<init>(r2, r3, r4, r5, r6)
            return r0
    }

    public boolean isNativeImpressionOwner() {
            r2 = this;
            com.iab.omid.library.mmadbridge.adsession.Owner r0 = com.iab.omid.library.mmadbridge.adsession.Owner.NATIVE
            com.iab.omid.library.mmadbridge.adsession.Owner r1 = r2.impressionOwner
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public boolean isNativeMediaEventsOwner() {
            r2 = this;
            com.iab.omid.library.mmadbridge.adsession.Owner r0 = com.iab.omid.library.mmadbridge.adsession.Owner.NATIVE
            com.iab.omid.library.mmadbridge.adsession.Owner r1 = r2.mediaEventsOwner
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public org.json.JSONObject toJsonObject() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.iab.omid.library.mmadbridge.adsession.Owner r1 = r3.impressionOwner
            java.lang.String r2 = "impressionOwner"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r2, r1)
            com.iab.omid.library.mmadbridge.adsession.Owner r1 = r3.mediaEventsOwner
            java.lang.String r2 = "mediaEventsOwner"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r2, r1)
            com.iab.omid.library.mmadbridge.adsession.CreativeType r1 = r3.creativeType
            java.lang.String r2 = "creativeType"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r2, r1)
            com.iab.omid.library.mmadbridge.adsession.ImpressionType r1 = r3.impressionType
            java.lang.String r2 = "impressionType"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r2, r1)
            boolean r1 = r3.isolateVerificationScripts
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            java.lang.String r2 = "isolateVerificationScripts"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r2, r1)
            return r0
    }
}

package com.iab.omid.library.mmadbridge.adsession.media;

public final class VastProperties {
    private final boolean a;
    private final java.lang.Float b;
    private final boolean c;
    private final com.iab.omid.library.mmadbridge.adsession.media.Position d;

    private VastProperties(boolean r1, java.lang.Float r2, boolean r3, com.iab.omid.library.mmadbridge.adsession.media.Position r4) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.d = r4
            return
    }

    public static com.iab.omid.library.mmadbridge.adsession.media.VastProperties createVastPropertiesForNonSkippableMedia(boolean r3, com.iab.omid.library.mmadbridge.adsession.media.Position r4) {
            java.lang.String r0 = "Position is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r4, r0)
            com.iab.omid.library.mmadbridge.adsession.media.VastProperties r0 = new com.iab.omid.library.mmadbridge.adsession.media.VastProperties
            r1 = 0
            r2 = 0
            r0.<init>(r1, r2, r3, r4)
            return r0
    }

    public static com.iab.omid.library.mmadbridge.adsession.media.VastProperties createVastPropertiesForSkippableMedia(float r2, boolean r3, com.iab.omid.library.mmadbridge.adsession.media.Position r4) {
            java.lang.String r0 = "Position is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r4, r0)
            com.iab.omid.library.mmadbridge.adsession.media.VastProperties r0 = new com.iab.omid.library.mmadbridge.adsession.media.VastProperties
            java.lang.Float r2 = java.lang.Float.valueOf(r2)
            r1 = 1
            r0.<init>(r1, r2, r3, r4)
            return r0
    }

    public org.json.JSONObject a() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "skippable"
            boolean r2 = r3.a     // Catch: org.json.JSONException -> L26
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L26
            boolean r1 = r3.a     // Catch: org.json.JSONException -> L26
            if (r1 == 0) goto L17
            java.lang.String r1 = "skipOffset"
            java.lang.Float r2 = r3.b     // Catch: org.json.JSONException -> L26
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L26
        L17:
            java.lang.String r1 = "autoPlay"
            boolean r2 = r3.c     // Catch: org.json.JSONException -> L26
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L26
            java.lang.String r1 = "position"
            com.iab.omid.library.mmadbridge.adsession.media.Position r2 = r3.d     // Catch: org.json.JSONException -> L26
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L26
            goto L2c
        L26:
            r1 = move-exception
            java.lang.String r2 = "VastProperties: JSON error"
            com.iab.omid.library.mmadbridge.utils.d.a(r2, r1)
        L2c:
            return r0
    }

    public com.iab.omid.library.mmadbridge.adsession.media.Position getPosition() {
            r1 = this;
            com.iab.omid.library.mmadbridge.adsession.media.Position r0 = r1.d
            return r0
    }

    public java.lang.Float getSkipOffset() {
            r1 = this;
            java.lang.Float r0 = r1.b
            return r0
    }

    public boolean isAutoPlay() {
            r1 = this;
            boolean r0 = r1.c
            return r0
    }

    public boolean isSkippable() {
            r1 = this;
            boolean r0 = r1.a
            return r0
    }
}

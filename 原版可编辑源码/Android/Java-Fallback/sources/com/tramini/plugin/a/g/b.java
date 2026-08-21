package com.tramini.plugin.a.g;

public final class b {
    private static com.tramini.plugin.a.g.b a;


    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tramini.plugin.a.g.b a() {
            com.tramini.plugin.a.g.b r0 = com.tramini.plugin.a.g.b.a
            if (r0 != 0) goto Lb
            com.tramini.plugin.a.g.b r0 = new com.tramini.plugin.a.g.b
            r0.<init>()
            com.tramini.plugin.a.g.b.a = r0
        Lb:
            com.tramini.plugin.a.g.b r0 = com.tramini.plugin.a.g.b.a
            return r0
    }

    private static void a(java.lang.String r7, com.tramini.plugin.b.a r8) {
            java.lang.String r0 = "S_AJS_ATT"
            java.lang.String r1 = "tramini"
            com.tramini.plugin.a.c.b r2 = new com.tramini.plugin.a.c.b     // Catch: java.lang.Throwable -> L9c
            r2.<init>()     // Catch: java.lang.Throwable -> L9c
            java.lang.String r3 = com.adjust.sdk.Adjust.getSdkVersion()     // Catch: java.lang.Throwable -> L9c
            r2.c = r3     // Catch: java.lang.Throwable -> L9c
            r3 = 2
            r2.d = r3     // Catch: java.lang.Throwable -> L9c
            com.adjust.sdk.AdjustAttribution r3 = com.adjust.sdk.Adjust.getAttribution()     // Catch: java.lang.Throwable -> L9c
            if (r3 == 0) goto L9c
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L9c
            r4.<init>()     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = "adgroup"
            java.lang.String r6 = r3.adgroup     // Catch: java.lang.Throwable -> L9c
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = "adid"
            java.lang.String r6 = r3.adid     // Catch: java.lang.Throwable -> L9c
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = "campaign"
            java.lang.String r6 = r3.campaign     // Catch: java.lang.Throwable -> L9c
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = "clickLabel"
            java.lang.String r6 = r3.clickLabel     // Catch: java.lang.Throwable -> L9c
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = "creative"
            java.lang.String r6 = r3.creative     // Catch: java.lang.Throwable -> L9c
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = "network"
            java.lang.String r6 = r3.network     // Catch: java.lang.Throwable -> L9c
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = "trackerName"
            java.lang.String r6 = r3.trackerName     // Catch: java.lang.Throwable -> L9c
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = "trackerToken"
            java.lang.String r6 = r3.trackerToken     // Catch: java.lang.Throwable -> L9c
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = "attr"
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L9c
            r4.put(r5, r3)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L9c
            r2.e = r3     // Catch: java.lang.Throwable -> L9c
            org.json.JSONObject r2 = r2.a()     // Catch: java.lang.Throwable -> L9c
            com.tramini.plugin.a.a.c r3 = com.tramini.plugin.a.a.c.a()     // Catch: java.lang.Throwable -> L9c
            android.content.Context r3 = r3.b()     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = ""
            java.lang.String r3 = com.tramini.plugin.a.g.i.b(r3, r1, r0, r5)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = r4.toString()     // Catch: java.lang.Throwable -> L9c
            boolean r3 = android.text.TextUtils.equals(r3, r5)     // Catch: java.lang.Throwable -> L9c
            if (r3 != 0) goto L9c
            com.tramini.plugin.a.a.c r3 = com.tramini.plugin.a.a.c.a()     // Catch: java.lang.Throwable -> L9c
            android.content.Context r3 = r3.b()     // Catch: java.lang.Throwable -> L9c
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L9c
            com.tramini.plugin.a.g.i.a(r3, r1, r0, r4)     // Catch: java.lang.Throwable -> L9c
            com.tramini.plugin.a.f.a r0 = com.tramini.plugin.a.f.a.a()     // Catch: java.lang.Throwable -> L9c
            java.lang.String r8 = r8.b()     // Catch: java.lang.Throwable -> L9c
            org.json.JSONObject r1 = com.tramini.plugin.a.g.d.a     // Catch: java.lang.Throwable -> L9c
            r0.a(r7, r8, r1, r2)     // Catch: java.lang.Throwable -> L9c
        L9c:
            return
    }

    private static void b(java.lang.String r7, com.tramini.plugin.b.a r8) {
            java.lang.String r0 = "S_ASF_ATT"
            java.lang.String r1 = "tramini"
            java.lang.String r2 = ""
            com.tramini.plugin.a.c.b r3 = new com.tramini.plugin.a.c.b     // Catch: java.lang.Throwable -> L60
            r3.<init>()     // Catch: java.lang.Throwable -> L60
            com.appsflyer.AppsFlyerLib r4 = com.appsflyer.AppsFlyerLib.getInstance()     // Catch: java.lang.Throwable -> L60
            java.lang.String r4 = r4.getSdkVersion()     // Catch: java.lang.Throwable -> L60
            r3.c = r4     // Catch: java.lang.Throwable -> L60
            r4 = 1
            r3.d = r4     // Catch: java.lang.Throwable -> L60
            com.tramini.plugin.a.a.c r4 = com.tramini.plugin.a.a.c.a()     // Catch: java.lang.Throwable -> L60
            android.content.Context r4 = r4.b()     // Catch: java.lang.Throwable -> L60
            java.lang.String r5 = "appsflyer-data"
            java.lang.String r6 = "attributionId"
            java.lang.String r4 = com.tramini.plugin.a.g.i.b(r4, r5, r6, r2)     // Catch: java.lang.Throwable -> L60
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L60
            if (r5 != 0) goto L60
            r3.e = r4     // Catch: java.lang.Throwable -> L60
            org.json.JSONObject r3 = r3.a()     // Catch: java.lang.Throwable -> L60
            com.tramini.plugin.a.a.c r5 = com.tramini.plugin.a.a.c.a()     // Catch: java.lang.Throwable -> L60
            android.content.Context r5 = r5.b()     // Catch: java.lang.Throwable -> L60
            java.lang.String r2 = com.tramini.plugin.a.g.i.b(r5, r1, r0, r2)     // Catch: java.lang.Throwable -> L60
            if (r3 == 0) goto L60
            boolean r2 = android.text.TextUtils.equals(r2, r4)     // Catch: java.lang.Throwable -> L60
            if (r2 != 0) goto L60
            com.tramini.plugin.a.a.c r2 = com.tramini.plugin.a.a.c.a()     // Catch: java.lang.Throwable -> L60
            android.content.Context r2 = r2.b()     // Catch: java.lang.Throwable -> L60
            com.tramini.plugin.a.g.i.a(r2, r1, r0, r4)     // Catch: java.lang.Throwable -> L60
            com.tramini.plugin.a.f.a r0 = com.tramini.plugin.a.f.a.a()     // Catch: java.lang.Throwable -> L60
            java.lang.String r8 = r8.b()     // Catch: java.lang.Throwable -> L60
            org.json.JSONObject r1 = com.tramini.plugin.a.g.d.a     // Catch: java.lang.Throwable -> L60
            r0.a(r7, r8, r1, r3)     // Catch: java.lang.Throwable -> L60
        L60:
            return
    }

    private static void c(java.lang.String r7, com.tramini.plugin.b.a r8) {
            java.lang.String r0 = "S_ASF_ATT"
            java.lang.String r1 = "tramini"
            java.lang.String r2 = ""
            com.tramini.plugin.a.c.b r3 = new com.tramini.plugin.a.c.b     // Catch: java.lang.Throwable -> L60
            r3.<init>()     // Catch: java.lang.Throwable -> L60
            com.appsflyer.AppsFlyerLib r4 = com.appsflyer.AppsFlyerLib.getInstance()     // Catch: java.lang.Throwable -> L60
            java.lang.String r4 = r4.getSdkVersion()     // Catch: java.lang.Throwable -> L60
            r3.c = r4     // Catch: java.lang.Throwable -> L60
            r4 = 1
            r3.d = r4     // Catch: java.lang.Throwable -> L60
            com.tramini.plugin.a.a.c r4 = com.tramini.plugin.a.a.c.a()     // Catch: java.lang.Throwable -> L60
            android.content.Context r4 = r4.b()     // Catch: java.lang.Throwable -> L60
            java.lang.String r5 = "appsflyer-data"
            java.lang.String r6 = "attributionId"
            java.lang.String r4 = com.tramini.plugin.a.g.i.b(r4, r5, r6, r2)     // Catch: java.lang.Throwable -> L60
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L60
            if (r5 != 0) goto L60
            r3.e = r4     // Catch: java.lang.Throwable -> L60
            org.json.JSONObject r3 = r3.a()     // Catch: java.lang.Throwable -> L60
            com.tramini.plugin.a.a.c r5 = com.tramini.plugin.a.a.c.a()     // Catch: java.lang.Throwable -> L60
            android.content.Context r5 = r5.b()     // Catch: java.lang.Throwable -> L60
            java.lang.String r2 = com.tramini.plugin.a.g.i.b(r5, r1, r0, r2)     // Catch: java.lang.Throwable -> L60
            if (r3 == 0) goto L60
            boolean r2 = android.text.TextUtils.equals(r2, r4)     // Catch: java.lang.Throwable -> L60
            if (r2 != 0) goto L60
            com.tramini.plugin.a.a.c r2 = com.tramini.plugin.a.a.c.a()     // Catch: java.lang.Throwable -> L60
            android.content.Context r2 = r2.b()     // Catch: java.lang.Throwable -> L60
            com.tramini.plugin.a.g.i.a(r2, r1, r0, r4)     // Catch: java.lang.Throwable -> L60
            com.tramini.plugin.a.f.a r0 = com.tramini.plugin.a.f.a.a()     // Catch: java.lang.Throwable -> L60
            java.lang.String r8 = r8.b()     // Catch: java.lang.Throwable -> L60
            org.json.JSONObject r1 = com.tramini.plugin.a.g.d.a     // Catch: java.lang.Throwable -> L60
            r0.a(r7, r8, r1, r3)     // Catch: java.lang.Throwable -> L60
        L60:
            return
    }

    private static void d(java.lang.String r7, com.tramini.plugin.b.a r8) {
            java.lang.String r0 = "S_AJS_ATT"
            java.lang.String r1 = "tramini"
            com.tramini.plugin.a.c.b r2 = new com.tramini.plugin.a.c.b     // Catch: java.lang.Throwable -> L9c
            r2.<init>()     // Catch: java.lang.Throwable -> L9c
            java.lang.String r3 = com.adjust.sdk.Adjust.getSdkVersion()     // Catch: java.lang.Throwable -> L9c
            r2.c = r3     // Catch: java.lang.Throwable -> L9c
            r3 = 2
            r2.d = r3     // Catch: java.lang.Throwable -> L9c
            com.adjust.sdk.AdjustAttribution r3 = com.adjust.sdk.Adjust.getAttribution()     // Catch: java.lang.Throwable -> L9c
            if (r3 == 0) goto L9c
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L9c
            r4.<init>()     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = "adgroup"
            java.lang.String r6 = r3.adgroup     // Catch: java.lang.Throwable -> L9c
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = "adid"
            java.lang.String r6 = r3.adid     // Catch: java.lang.Throwable -> L9c
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = "campaign"
            java.lang.String r6 = r3.campaign     // Catch: java.lang.Throwable -> L9c
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = "clickLabel"
            java.lang.String r6 = r3.clickLabel     // Catch: java.lang.Throwable -> L9c
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = "creative"
            java.lang.String r6 = r3.creative     // Catch: java.lang.Throwable -> L9c
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = "network"
            java.lang.String r6 = r3.network     // Catch: java.lang.Throwable -> L9c
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = "trackerName"
            java.lang.String r6 = r3.trackerName     // Catch: java.lang.Throwable -> L9c
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = "trackerToken"
            java.lang.String r6 = r3.trackerToken     // Catch: java.lang.Throwable -> L9c
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = "attr"
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L9c
            r4.put(r5, r3)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L9c
            r2.e = r3     // Catch: java.lang.Throwable -> L9c
            org.json.JSONObject r2 = r2.a()     // Catch: java.lang.Throwable -> L9c
            com.tramini.plugin.a.a.c r3 = com.tramini.plugin.a.a.c.a()     // Catch: java.lang.Throwable -> L9c
            android.content.Context r3 = r3.b()     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = ""
            java.lang.String r3 = com.tramini.plugin.a.g.i.b(r3, r1, r0, r5)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = r4.toString()     // Catch: java.lang.Throwable -> L9c
            boolean r3 = android.text.TextUtils.equals(r3, r5)     // Catch: java.lang.Throwable -> L9c
            if (r3 != 0) goto L9c
            com.tramini.plugin.a.a.c r3 = com.tramini.plugin.a.a.c.a()     // Catch: java.lang.Throwable -> L9c
            android.content.Context r3 = r3.b()     // Catch: java.lang.Throwable -> L9c
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L9c
            com.tramini.plugin.a.g.i.a(r3, r1, r0, r4)     // Catch: java.lang.Throwable -> L9c
            com.tramini.plugin.a.f.a r0 = com.tramini.plugin.a.f.a.a()     // Catch: java.lang.Throwable -> L9c
            java.lang.String r8 = r8.b()     // Catch: java.lang.Throwable -> L9c
            org.json.JSONObject r1 = com.tramini.plugin.a.g.d.a     // Catch: java.lang.Throwable -> L9c
            r0.a(r7, r8, r1, r2)     // Catch: java.lang.Throwable -> L9c
        L9c:
            return
    }

    public final void a(com.tramini.plugin.b.a r3) {
            r2 = this;
            com.tramini.plugin.a.g.b.a r0 = com.tramini.plugin.a.g.b.a.a()
            com.tramini.plugin.a.g.b$1 r1 = new com.tramini.plugin.a.g.b$1
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }
}

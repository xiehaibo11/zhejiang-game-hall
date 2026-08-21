package com.mbridge.msdk.rover;

public final class c {
    private static java.lang.String b = "0";
    com.mbridge.msdk.rover.d a;
    private java.util.List<com.mbridge.msdk.rover.e> c;
    private com.mbridge.msdk.foundation.entity.CampaignEx d;
    private android.content.Context e;
    private java.util.Map<java.lang.String, java.lang.String> f;




    static {
            return
    }

    public c(com.mbridge.msdk.rover.RoverCampaignUnit r7, com.mbridge.msdk.foundation.entity.CampaignEx r8, android.content.Context r9) {
            r6 = this;
            r6.<init>()
            java.util.ArrayList r7 = new java.util.ArrayList
            r7.<init>()
            r6.c = r7
            com.mbridge.msdk.rover.c$1 r7 = new com.mbridge.msdk.rover.c$1
            r7.<init>(r6)
            r6.a = r7
            java.util.HashMap r7 = new java.util.HashMap
            r7.<init>()
            r6.f = r7
            com.mbridge.msdk.click.CommonJumpLoader r0 = new com.mbridge.msdk.click.CommonJumpLoader
            r7 = 1
            r0.<init>(r9, r7)
            r6.d = r8
            r6.e = r9
            java.lang.String r2 = com.mbridge.msdk.rover.c.b
            com.mbridge.msdk.rover.c$3 r4 = new com.mbridge.msdk.rover.c$3
            r4.<init>(r6)
            com.mbridge.msdk.rover.d r5 = r6.a
            java.lang.String r1 = "2"
            r3 = r8
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    static com.mbridge.msdk.foundation.entity.CampaignEx a(com.mbridge.msdk.rover.c r0) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.d
            return r0
    }

    static void a(com.mbridge.msdk.rover.c r2, java.lang.String r3, int r4, int r5, int r6, java.lang.String r7, java.lang.String r8) {
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.f     // Catch: java.lang.Exception -> L62
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Exception -> L62
            r0.<init>()     // Catch: java.lang.Exception -> L62
            r2.f = r0     // Catch: java.lang.Exception -> L62
        Lb:
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.f     // Catch: java.lang.Exception -> L62
            boolean r0 = r0.containsKey(r3)     // Catch: java.lang.Exception -> L62
            if (r0 == 0) goto L14
            goto L6a
        L14:
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.f     // Catch: java.lang.Exception -> L62
            r1 = 0
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L62
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L62
            if (r0 != 0) goto L29
            java.lang.String r0 = "data:*/*;charset=utf-8;base64"
            boolean r0 = r3.contains(r0)     // Catch: java.lang.Exception -> L62
            if (r0 == 0) goto L29
            goto L6a
        L29:
            com.mbridge.msdk.rover.e r0 = new com.mbridge.msdk.rover.e     // Catch: java.lang.Exception -> L62
            r0.<init>()     // Catch: java.lang.Exception -> L62
            r0.a(r3)     // Catch: java.lang.Exception -> L62
            r0.a(r4)     // Catch: java.lang.Exception -> L62
            r0.b(r5)     // Catch: java.lang.Exception -> L62
            r0.c(r6)     // Catch: java.lang.Exception -> L62
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.t.a(r7)     // Catch: java.lang.Exception -> L62
            r0.b(r3)     // Catch: java.lang.Exception -> L62
            if (r8 != 0) goto L46
            java.lang.String r3 = ""
            goto L4a
        L46:
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.t.a(r8)     // Catch: java.lang.Exception -> L62
        L4a:
            r0.c(r3)     // Catch: java.lang.Exception -> L62
            java.util.List<com.mbridge.msdk.rover.e> r3 = r2.c     // Catch: java.lang.Exception -> L62
            if (r3 == 0) goto L57
            java.util.List<com.mbridge.msdk.rover.e> r2 = r2.c     // Catch: java.lang.Exception -> L62
            r2.add(r0)     // Catch: java.lang.Exception -> L62
            goto L6a
        L57:
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Exception -> L62
            r3.<init>()     // Catch: java.lang.Exception -> L62
            r2.c = r3     // Catch: java.lang.Exception -> L62
            r3.add(r0)     // Catch: java.lang.Exception -> L62
            goto L6a
        L62:
            r2 = move-exception
            boolean r3 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r3 == 0) goto L6a
            r2.printStackTrace()
        L6a:
            return
    }

    static void b(com.mbridge.msdk.rover.c r4) {
            android.content.Context r0 = r4.e
            if (r0 == 0) goto L31
            com.mbridge.msdk.foundation.same.report.d r0 = new com.mbridge.msdk.foundation.same.report.d
            android.content.Context r1 = r4.e
            r0.<init>(r1)
            com.mbridge.msdk.rover.c$2 r1 = new com.mbridge.msdk.rover.c$2
            r1.<init>(r4)
            android.os.Looper r2 = android.os.Looper.myLooper()
            android.os.Looper r3 = android.os.Looper.getMainLooper()
            if (r2 == r3) goto L1d
            android.os.Looper.prepare()
        L1d:
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.d
            java.util.List<com.mbridge.msdk.rover.e> r4 = r4.c
            r0.a(r2, r4, r1)
            android.os.Looper r4 = android.os.Looper.myLooper()
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            if (r4 == r0) goto L31
            android.os.Looper.loop()
        L31:
            return
    }
}

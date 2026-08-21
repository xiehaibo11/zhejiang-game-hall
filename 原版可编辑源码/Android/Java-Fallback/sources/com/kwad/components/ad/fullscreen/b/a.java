package com.kwad.components.ad.fullscreen.b;

public final class a {
    public static void H(android.content.Context r5) {
            com.kwad.components.ad.fullscreen.b.b r0 = I(r5)
            long r1 = java.lang.System.currentTimeMillis()
            r3 = 1
            if (r0 != 0) goto L11
            com.kwad.components.ad.fullscreen.b.b r0 = new com.kwad.components.ad.fullscreen.b.b
            r0.<init>(r1, r3)
            goto L21
        L11:
            boolean r4 = r0.e(r1)
            if (r4 != 0) goto L1c
            r0.gb = r1
            r0.gc = r3
            goto L21
        L1c:
            int r1 = r0.gc
            int r1 = r1 + r3
            r0.gc = r1
        L21:
            a(r5, r0)
            return
    }

    private static com.kwad.components.ad.fullscreen.b.b I(android.content.Context r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            r1 = 0
            java.lang.String r2 = "ksadsdk_fullscreen_local_ad_count"
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r2, r1)
            java.lang.String r1 = "key_local_info"
            java.lang.String r3 = r3.getString(r1, r0)     // Catch: java.lang.Exception -> L1f
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1f
            r1.<init>(r3)     // Catch: java.lang.Exception -> L1f
            com.kwad.components.ad.fullscreen.b.b r3 = new com.kwad.components.ad.fullscreen.b.b     // Catch: java.lang.Exception -> L1f
            r3.<init>()     // Catch: java.lang.Exception -> L1f
            r3.parseJson(r1)     // Catch: java.lang.Exception -> L1f
            return r3
        L1f:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
            return r0
    }

    private static void a(android.content.Context r2, com.kwad.components.ad.fullscreen.b.b r3) {
            if (r2 == 0) goto L22
            if (r3 != 0) goto L5
            goto L22
        L5:
            org.json.JSONObject r3 = r3.toJson()
            java.lang.String r3 = r3.toString()
            r0 = 0
            java.lang.String r1 = "ksadsdk_fullscreen_local_ad_count"
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r1, r0)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            java.lang.String r0 = "key_local_info"
            android.content.SharedPreferences$Editor r2 = r2.putString(r0, r3)
            r2.apply()
            return
        L22:
            java.lang.String r2 = "FullScreenLocalHelper"
            java.lang.String r3 = "saveFullScreenLocalInfo illegal arguments."
            com.kwad.sdk.core.e.c.d(r2, r3)
            return
    }

    public static boolean a(android.content.Context r3, com.kwad.sdk.core.response.model.AdTemplate r4) {
            com.kwad.components.ad.fullscreen.b.b r3 = I(r3)
            r0 = 0
            r1 = 1
            if (r3 == 0) goto L15
            int r2 = com.kwad.components.ad.fullscreen.a.b.bH()
            boolean r3 = r3.v(r2)
            if (r3 != 0) goto L13
            goto L15
        L13:
            r3 = r0
            goto L16
        L15:
            r3 = r1
        L16:
            boolean r4 = com.kwad.sdk.core.response.b.b.bN(r4)
            if (r3 == 0) goto L1f
            if (r4 == 0) goto L1f
            return r1
        L1f:
            return r0
    }
}

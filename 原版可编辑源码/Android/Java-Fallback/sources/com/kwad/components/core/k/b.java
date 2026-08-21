package com.kwad.components.core.k;

public final class b {
    public static boolean ae(android.content.Context r6) {
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "ksadsdk_local_ad_force_active"
            android.content.SharedPreferences r6 = r6.getSharedPreferences(r1, r0)
            com.kwad.components.core.k.a r0 = new com.kwad.components.core.k.a
            r0.<init>()
            java.lang.String r1 = "ksadsdk_local_ad_force_active_data"
            boolean r2 = r6.contains(r1)
            java.lang.String r3 = "LocalAdForceActiveHelper"
            if (r2 == 0) goto L4f
            r2 = 0
            java.lang.String r2 = r6.getString(r1, r2)
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 != 0) goto L31
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2d
            r4.<init>(r2)     // Catch: java.lang.Exception -> L2d
            r0.parseJson(r4)     // Catch: java.lang.Exception -> L2d
            goto L31
        L2d:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
        L31:
            int r2 = com.kwad.sdk.core.config.d.zD()
            int r4 = com.kwad.sdk.core.config.d.zE()
            boolean r2 = r0.h(r2, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "addCount contains success: "
            r4.<init>(r5)
            r4.append(r2)
            java.lang.String r4 = r4.toString()
            com.kwad.sdk.core.e.c.d(r3, r4)
            goto L58
        L4f:
            java.lang.String r2 = "addCount not contains"
            com.kwad.sdk.core.e.c.d(r3, r2)
            r0.oc()
            r2 = 1
        L58:
            if (r2 == 0) goto L6d
            android.content.SharedPreferences$Editor r6 = r6.edit()
            org.json.JSONObject r0 = r0.toJson()
            java.lang.String r0 = r0.toString()
            android.content.SharedPreferences$Editor r6 = r6.putString(r1, r0)
            r6.apply()
        L6d:
            return r2
    }
}

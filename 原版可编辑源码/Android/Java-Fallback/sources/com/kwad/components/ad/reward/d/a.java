package com.kwad.components.ad.reward.d;

public final class a {
    public static void P(android.content.Context r6) {
            long r0 = java.lang.System.currentTimeMillis()
            com.kwad.components.ad.reward.d.b r2 = new com.kwad.components.ad.reward.d.b
            r2.<init>()
            java.lang.String r3 = com.kwad.sdk.utils.y.cd(r6)
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            r5 = 0
            if (r4 != 0) goto L2b
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L27
            r4.<init>(r3)     // Catch: java.lang.Exception -> L27
            r2.parseJson(r4)     // Catch: java.lang.Exception -> L27
            long r3 = r2.gb     // Catch: java.lang.Exception -> L27
            boolean r3 = b(r3, r0)     // Catch: java.lang.Exception -> L27
            if (r3 == 0) goto L2b
            int r5 = r2.rA     // Catch: java.lang.Exception -> L27
            goto L2b
        L27:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
        L2b:
            r2.gb = r0
            int r5 = r5 + 1
            r2.rA = r5
            org.json.JSONObject r0 = r2.toJson()
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.utils.y.X(r6, r0)
            return
    }

    private static boolean b(long r4, long r6) {
            r0 = 0
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            r3 = 0
            if (r2 <= 0) goto L19
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 > 0) goto Lc
            goto L19
        Lc:
            r0 = 2460601000(0x92a9caa8, double:1.215698422E-314)
            long r4 = r4 / r0
            long r6 = r6 / r0
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 != 0) goto L19
            r4 = 1
            return r4
        L19:
            return r3
    }

    public static boolean b(android.content.Context r4, com.kwad.sdk.core.response.model.AdInfo r5) {
            boolean r0 = com.kwad.sdk.core.response.b.a.ay(r5)
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            int r0 = com.kwad.sdk.core.response.b.a.az(r5)
            r2 = 1
            int r0 = r0 + r2
            int r0 = java.lang.Math.max(r0, r2)
            boolean r3 = d(r4, r0)
            c(r4, r0)
            int r5 = com.kwad.sdk.core.response.b.a.aA(r5)
            boolean r4 = e(r4, r5)
            if (r3 == 0) goto L26
            if (r4 == 0) goto L26
            return r2
        L26:
            return r1
    }

    private static void c(android.content.Context r2, int r3) {
            int r0 = com.kwad.sdk.utils.y.cc(r2)
            int r3 = r0 % r3
            r1 = 1
            if (r3 != 0) goto Ld
            com.kwad.sdk.utils.y.k(r2, r1)
            return
        Ld:
            int r0 = r0 + r1
            com.kwad.sdk.utils.y.k(r2, r0)
            return
    }

    private static boolean d(android.content.Context r0, int r1) {
            int r0 = com.kwad.sdk.utils.y.cc(r0)
            if (r1 == 0) goto Lb
            int r0 = r0 % r1
            if (r0 != 0) goto Lb
            r0 = 1
            return r0
        Lb:
            r0 = 0
            return r0
    }

    private static boolean e(android.content.Context r7, int r8) {
            long r0 = java.lang.System.currentTimeMillis()
            com.kwad.components.ad.reward.d.b r2 = new com.kwad.components.ad.reward.d.b
            r2.<init>()
            java.lang.String r7 = com.kwad.sdk.utils.y.cd(r7)
            boolean r3 = android.text.TextUtils.isEmpty(r7)
            r4 = 0
            if (r3 != 0) goto L2b
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L27
            r3.<init>(r7)     // Catch: java.lang.Exception -> L27
            r2.parseJson(r3)     // Catch: java.lang.Exception -> L27
            long r5 = r2.gb     // Catch: java.lang.Exception -> L27
            boolean r7 = b(r5, r0)     // Catch: java.lang.Exception -> L27
            if (r7 == 0) goto L2b
            int r7 = r2.rA     // Catch: java.lang.Exception -> L27
            goto L2c
        L27:
            r7 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r7)
        L2b:
            r7 = r4
        L2c:
            if (r7 >= r8) goto L30
            r7 = 1
            return r7
        L30:
            return r4
    }
}

package com.kwad.components.ad.reward.g;

public final class a {
    public static long rJ = -1;
    public static int rK;

    static {
            return
    }

    public static void J(android.content.Context r3) {
            com.kwad.components.ad.reward.g.b r0 = new com.kwad.components.ad.reward.g.b
            r0.<init>()
            long r1 = java.lang.System.currentTimeMillis()
            boolean r1 = e(r1)
            r2 = 1
            if (r1 == 0) goto L16
            int r1 = com.kwad.components.ad.reward.g.a.rK
            int r1 = r1 + r2
            com.kwad.components.ad.reward.g.a.rK = r1
            goto L18
        L16:
            com.kwad.components.ad.reward.g.a.rK = r2
        L18:
            long r1 = java.lang.System.currentTimeMillis()
            com.kwad.components.ad.reward.g.a.rJ = r1
            int r1 = com.kwad.components.ad.reward.g.a.rK
            r0.rL = r1
            long r1 = com.kwad.components.ad.reward.g.a.rJ
            r0.gb = r1
            org.json.JSONObject r0 = r0.toJson()
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.utils.y.Y(r3, r0)
            return
    }

    public static int cI() {
            long r0 = java.lang.System.currentTimeMillis()
            boolean r0 = e(r0)
            if (r0 != 0) goto Ld
            r0 = 0
            com.kwad.components.ad.reward.g.a.rK = r0
        Ld:
            int r0 = com.kwad.components.ad.reward.g.a.rK
            return r0
    }

    private static boolean e(long r6) {
            long r0 = he()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 0
            if (r0 <= 0) goto L21
            int r0 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r0 > 0) goto L10
            goto L21
        L10:
            long r2 = he()
            r4 = 2460601000(0x92a9caa8, double:1.215698422E-314)
            long r2 = r2 / r4
            long r6 = r6 / r4
            int r6 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r6 != 0) goto L21
            r6 = 1
            return r6
        L21:
            return r1
    }

    private static long he() {
            long r0 = com.kwad.components.ad.reward.g.a.rJ
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L31
            java.lang.String r0 = com.kwad.sdk.utils.y.Iu()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L15
            r0 = 0
            return r0
        L15:
            com.kwad.components.ad.reward.g.b r1 = new com.kwad.components.ad.reward.g.b
            r1.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2b
            r2.<init>(r0)     // Catch: java.lang.Exception -> L2b
            r1.parseJson(r2)     // Catch: java.lang.Exception -> L2b
            long r2 = r1.gb     // Catch: java.lang.Exception -> L2b
            com.kwad.components.ad.reward.g.a.rJ = r2     // Catch: java.lang.Exception -> L2b
            int r0 = r1.rL     // Catch: java.lang.Exception -> L2b
            com.kwad.components.ad.reward.g.a.rK = r0     // Catch: java.lang.Exception -> L2b
            goto L2f
        L2b:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        L2f:
            long r0 = com.kwad.components.ad.reward.g.a.rJ
        L31:
            return r0
    }
}

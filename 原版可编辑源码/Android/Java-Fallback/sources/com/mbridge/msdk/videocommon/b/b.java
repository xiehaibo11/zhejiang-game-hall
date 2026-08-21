package com.mbridge.msdk.videocommon.b;

public final class b {
    private int a;
    private int b;
    private com.mbridge.msdk.videocommon.b.a c;

    public b(int r1, int r2, com.mbridge.msdk.videocommon.b.a r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            return
    }

    public static java.util.List<com.mbridge.msdk.videocommon.b.b> a(org.json.JSONArray r7) {
            r0 = 0
            if (r7 == 0) goto L43
            int r1 = r7.length()
            if (r1 <= 0) goto L43
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = 0
        Lf:
            int r3 = r7.length()     // Catch: java.lang.Exception -> L3f
            if (r2 >= r3) goto L3e
            org.json.JSONObject r3 = r7.optJSONObject(r2)     // Catch: java.lang.Exception -> L3f
            java.lang.String r4 = "id"
            int r4 = r3.optInt(r4)     // Catch: java.lang.Exception -> L3f
            java.lang.String r5 = "timeout"
            int r5 = r3.optInt(r5)     // Catch: java.lang.Exception -> L3f
            java.lang.String r6 = "params"
            org.json.JSONObject r3 = r3.optJSONObject(r6)     // Catch: java.lang.Exception -> L3f
            if (r3 == 0) goto L32
            com.mbridge.msdk.videocommon.b.a r3 = com.mbridge.msdk.videocommon.b.a.a(r3)     // Catch: java.lang.Exception -> L3f
            goto L33
        L32:
            r3 = r0
        L33:
            com.mbridge.msdk.videocommon.b.b r6 = new com.mbridge.msdk.videocommon.b.b     // Catch: java.lang.Exception -> L3f
            r6.<init>(r4, r5, r3)     // Catch: java.lang.Exception -> L3f
            r1.add(r6)     // Catch: java.lang.Exception -> L3f
            int r2 = r2 + 1
            goto Lf
        L3e:
            return r1
        L3f:
            r7 = move-exception
            r7.printStackTrace()
        L43:
            return r0
    }

    public final int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public final int b() {
            r1 = this;
            int r0 = r1.b
            return r0
    }
}

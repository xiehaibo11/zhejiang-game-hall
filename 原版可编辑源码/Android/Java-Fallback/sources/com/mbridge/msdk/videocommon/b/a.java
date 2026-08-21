package com.mbridge.msdk.videocommon.b;

public final class a {
    private java.lang.String a;
    private java.lang.String b;

    private a(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public static com.mbridge.msdk.videocommon.b.a a(org.json.JSONObject r2) {
            if (r2 == 0) goto L18
            java.lang.String r0 = "appId"
            java.lang.String r0 = r2.optString(r0)     // Catch: java.lang.Exception -> L14
            java.lang.String r1 = "placementId"
            java.lang.String r2 = r2.optString(r1)     // Catch: java.lang.Exception -> L14
            com.mbridge.msdk.videocommon.b.a r1 = new com.mbridge.msdk.videocommon.b.a     // Catch: java.lang.Exception -> L14
            r1.<init>(r0, r2)     // Catch: java.lang.Exception -> L14
            return r1
        L14:
            r2 = move-exception
            r2.printStackTrace()
        L18:
            r2 = 0
            return r2
    }
}

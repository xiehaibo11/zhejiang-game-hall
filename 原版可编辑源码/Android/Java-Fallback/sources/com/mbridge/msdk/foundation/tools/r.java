package com.mbridge.msdk.foundation.tools;

public final class r {
    public static org.json.JSONArray a(org.json.JSONArray r3) {
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            r1 = 0
        L6:
            int r2 = r3.length()     // Catch: org.json.JSONException -> L1a
            if (r1 >= r2) goto L1e
            java.lang.String r2 = r3.getString(r1)     // Catch: org.json.JSONException -> L1a
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.p.a(r2)     // Catch: org.json.JSONException -> L1a
            r0.put(r2)     // Catch: org.json.JSONException -> L1a
            int r1 = r1 + 1
            goto L6
        L1a:
            r3 = move-exception
            r3.printStackTrace()
        L1e:
            return r0
    }
}

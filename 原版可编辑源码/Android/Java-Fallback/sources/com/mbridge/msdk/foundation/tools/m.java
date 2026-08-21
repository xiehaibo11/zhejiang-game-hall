package com.mbridge.msdk.foundation.tools;

public final class m {
    public static java.lang.String a(int r6, int r7, int r8, int r9, int r10) {
            java.lang.String r0 = "message"
            java.lang.String r1 = "code"
            java.lang.String r2 = "JSONUtils"
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            r4 = 0
            r3.put(r1, r4)     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L44
            java.lang.String r4 = "Sucess"
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L44
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L44
            r4.<init>()     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L44
            java.lang.String r5 = "rotateAngle"
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L44
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L44
            r6.<init>()     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L44
            java.lang.String r5 = "left"
            r6.put(r5, r7)     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L44
            java.lang.String r7 = "right"
            r6.put(r7, r8)     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L44
            java.lang.String r7 = "top"
            r6.put(r7, r9)     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L44
            java.lang.String r7 = "bottom"
            r6.put(r7, r10)     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L44
            java.lang.String r7 = "cutoutInfo"
            r4.put(r7, r6)     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L44
            java.lang.String r6 = "data"
            r3.put(r6, r4)     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L44
            goto L66
        L42:
            r6 = move-exception
            goto L4d
        L44:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()     // Catch: java.lang.Throwable -> L42
            com.mbridge.msdk.foundation.tools.z.d(r2, r6)     // Catch: java.lang.Throwable -> L42
            goto L66
        L4d:
            java.lang.String r6 = r6.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r6)
            r6 = 1
            r3.put(r1, r6)     // Catch: org.json.JSONException -> L5e
            java.lang.String r6 = "Fail"
            r3.put(r0, r6)     // Catch: org.json.JSONException -> L5e
            goto L66
        L5e:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r6)
        L66:
            java.lang.String r6 = r3.toString()
            return r6
    }

    public static java.util.ArrayList<java.lang.String> a(org.json.JSONArray r4) {
            if (r4 == 0) goto L19
            int r0 = r4.length()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>(r0)
            r2 = 0
        Lc:
            if (r2 >= r0) goto L18
            java.lang.String r3 = r4.optString(r2)
            r1.add(r3)
            int r2 = r2 + 1
            goto Lc
        L18:
            return r1
        L19:
            r4 = 0
            return r4
    }
}

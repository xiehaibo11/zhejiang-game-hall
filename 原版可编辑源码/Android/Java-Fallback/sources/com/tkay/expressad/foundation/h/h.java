package com.tkay.expressad.foundation.h;

public final class h {
    private static final java.lang.String a = "JSONUtils";

    public h() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(int r5, int r6, int r7, int r8, int r9) {
            java.lang.String r0 = "message"
            java.lang.String r1 = "code"
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            r3 = 0
            r2.put(r1, r3)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.lang.String r3 = "Sucess"
            r2.put(r0, r3)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            r3.<init>()     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.lang.String r4 = "rotateAngle"
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            r5.<init>()     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.lang.String r4 = "left"
            r5.put(r4, r6)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.lang.String r6 = "right"
            r5.put(r6, r7)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.lang.String r6 = "top"
            r5.put(r6, r8)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.lang.String r6 = "bottom"
            r5.put(r6, r9)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.lang.String r6 = "cutoutInfo"
            r3.put(r6, r5)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.lang.String r5 = "data"
            r2.put(r5, r3)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            goto L58
        L40:
            r5 = move-exception
            goto L47
        L42:
            r5 = move-exception
            r5.getMessage()     // Catch: java.lang.Throwable -> L40
            goto L58
        L47:
            r5.getMessage()
            r5 = 1
            r2.put(r1, r5)     // Catch: org.json.JSONException -> L54
            java.lang.String r5 = "Fail"
            r2.put(r0, r5)     // Catch: org.json.JSONException -> L54
            goto L58
        L54:
            r5 = move-exception
            r5.getMessage()
        L58:
            java.lang.String r5 = r2.toString()
            return r5
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

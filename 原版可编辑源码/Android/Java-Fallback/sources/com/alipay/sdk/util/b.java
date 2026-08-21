package com.alipay.sdk.util;

public class b {
    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.json.JSONObject a(org.json.JSONObject r6, org.json.JSONObject r7) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r1 = 2
            org.json.JSONObject[] r1 = new org.json.JSONObject[r1]     // Catch: org.json.JSONException -> L31
            r2 = 0
            r1[r2] = r6     // Catch: org.json.JSONException -> L31
            r6 = 1
            r1[r6] = r7     // Catch: org.json.JSONException -> L31
            int r6 = r1.length     // Catch: org.json.JSONException -> L31
        Lf:
            if (r2 >= r6) goto L35
            r7 = r1[r2]     // Catch: org.json.JSONException -> L31
            if (r7 != 0) goto L16
            goto L2e
        L16:
            java.util.Iterator r3 = r7.keys()     // Catch: org.json.JSONException -> L31
        L1a:
            boolean r4 = r3.hasNext()     // Catch: org.json.JSONException -> L31
            if (r4 == 0) goto L2e
            java.lang.Object r4 = r3.next()     // Catch: org.json.JSONException -> L31
            java.lang.String r4 = (java.lang.String) r4     // Catch: org.json.JSONException -> L31
            java.lang.Object r5 = r7.get(r4)     // Catch: org.json.JSONException -> L31
            r0.put(r4, r5)     // Catch: org.json.JSONException -> L31
            goto L1a
        L2e:
            int r2 = r2 + 1
            goto Lf
        L31:
            r6 = move-exception
            com.alipay.sdk.util.c.a(r6)
        L35:
            return r0
    }
}

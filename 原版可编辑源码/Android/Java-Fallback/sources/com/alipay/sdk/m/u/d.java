package com.alipay.sdk.m.u;

public class d {
    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.json.JSONObject a(org.json.JSONObject r6, org.json.JSONObject r7) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r1 = 2
            org.json.JSONObject[] r2 = new org.json.JSONObject[r1]     // Catch: org.json.JSONException -> L30
            r3 = 0
            r2[r3] = r6     // Catch: org.json.JSONException -> L30
            r6 = 1
            r2[r6] = r7     // Catch: org.json.JSONException -> L30
        Le:
            if (r3 >= r1) goto L34
            r6 = r2[r3]     // Catch: org.json.JSONException -> L30
            if (r6 != 0) goto L15
            goto L2d
        L15:
            java.util.Iterator r7 = r6.keys()     // Catch: org.json.JSONException -> L30
        L19:
            boolean r4 = r7.hasNext()     // Catch: org.json.JSONException -> L30
            if (r4 == 0) goto L2d
            java.lang.Object r4 = r7.next()     // Catch: org.json.JSONException -> L30
            java.lang.String r4 = (java.lang.String) r4     // Catch: org.json.JSONException -> L30
            java.lang.Object r5 = r6.get(r4)     // Catch: org.json.JSONException -> L30
            r0.put(r4, r5)     // Catch: org.json.JSONException -> L30
            goto L19
        L2d:
            int r3 = r3 + 1
            goto Le
        L30:
            r6 = move-exception
            com.alipay.sdk.m.u.e.a(r6)
        L34:
            return r0
    }
}

package com.bianfeng.ymnsdk.gongxiang;

public final class c {
    public static com.bianfeng.ymnsdk.gongxiang.b a(java.io.File r3) {
            java.util.Map r0 = b(r3)
            if (r0 != 0) goto L8
            r1 = 0
            return r1
        L8:
            java.lang.String r1 = "ymn_channel"
            java.lang.Object r2 = r0.get(r1)
            java.lang.String r2 = (java.lang.String) r2
            r0.remove(r1)
            com.bianfeng.ymnsdk.gongxiang.b r1 = new com.bianfeng.ymnsdk.gongxiang.b
            r1.<init>(r2, r0)
            return r1
    }

    public static java.util.Map<java.lang.String, java.lang.String> b(java.io.File r7) {
            r0 = 0
            java.lang.String r1 = c(r7)     // Catch: org.json.JSONException -> L2e
            if (r1 != 0) goto L8
            return r0
        L8:
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L2e
            r2.<init>(r1)     // Catch: org.json.JSONException -> L2e
            java.util.Iterator r3 = r2.keys()     // Catch: org.json.JSONException -> L2e
            java.util.HashMap r4 = new java.util.HashMap     // Catch: org.json.JSONException -> L2e
            r4.<init>()     // Catch: org.json.JSONException -> L2e
        L16:
            boolean r5 = r3.hasNext()     // Catch: org.json.JSONException -> L2e
            if (r5 == 0) goto L2d
            java.lang.Object r5 = r3.next()     // Catch: org.json.JSONException -> L2e
            java.lang.String r5 = r5.toString()     // Catch: org.json.JSONException -> L2e
            java.lang.String r6 = r2.getString(r5)     // Catch: org.json.JSONException -> L2e
            r4.put(r5, r6)     // Catch: org.json.JSONException -> L2e
            goto L16
        L2d:
            return r4
        L2e:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public static java.lang.String c(java.io.File r1) {
            r0 = 1903654775(0x71777777, float:1.22539554E30)
            java.lang.String r0 = com.bianfeng.ymnsdk.gongxiang.e.b(r1, r0)
            return r0
    }
}

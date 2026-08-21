package com.bianfeng.ymnsdk.gongxiang;

public final class c {
    public static com.bianfeng.ymnsdk.gongxiang.b a(java.io.File r2) {
            java.util.Map r2 = b(r2)
            if (r2 != 0) goto L8
            r2 = 0
            return r2
        L8:
            java.lang.String r0 = "ymn_channel"
            java.lang.Object r1 = r2.get(r0)
            java.lang.String r1 = (java.lang.String) r1
            r2.remove(r0)
            com.bianfeng.ymnsdk.gongxiang.b r0 = new com.bianfeng.ymnsdk.gongxiang.b
            r0.<init>(r1, r2)
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.String> b(java.io.File r5) {
            r0 = 0
            java.lang.String r5 = c(r5)     // Catch: org.json.JSONException -> L2d
            if (r5 != 0) goto L8
            return r0
        L8:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L2d
            r1.<init>(r5)     // Catch: org.json.JSONException -> L2d
            java.util.Iterator r5 = r1.keys()     // Catch: org.json.JSONException -> L2d
            java.util.HashMap r2 = new java.util.HashMap     // Catch: org.json.JSONException -> L2d
            r2.<init>()     // Catch: org.json.JSONException -> L2d
        L16:
            boolean r3 = r5.hasNext()     // Catch: org.json.JSONException -> L2d
            if (r3 == 0) goto L2c
            java.lang.Object r3 = r5.next()     // Catch: org.json.JSONException -> L2d
            java.lang.String r3 = r3.toString()     // Catch: org.json.JSONException -> L2d
            java.lang.String r4 = r1.getString(r3)     // Catch: org.json.JSONException -> L2d
            r2.put(r3, r4)     // Catch: org.json.JSONException -> L2d
            goto L16
        L2c:
            return r2
        L2d:
            r5 = move-exception
            r5.printStackTrace()
            return r0
    }

    public static java.lang.String c(java.io.File r1) {
            r0 = 1903654775(0x71777777, float:1.22539554E30)
            java.lang.String r1 = com.bianfeng.ymnsdk.gongxiang.e.b(r1, r0)
            return r1
    }
}

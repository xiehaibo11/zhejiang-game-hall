package com.huawei.hms.framework.network.grs.c.a;

public class a {
    private static final java.lang.String a = "a";
    private static com.huawei.hms.framework.network.grs.c.b.d b;

    public static synchronized com.huawei.hms.framework.network.grs.c.b.d a(android.content.Context r5) {
            java.lang.Class<com.huawei.hms.framework.network.grs.c.a.a> r0 = com.huawei.hms.framework.network.grs.c.a.a.class
            monitor-enter(r0)
            com.huawei.hms.framework.network.grs.c.b.d r1 = com.huawei.hms.framework.network.grs.c.a.a.b     // Catch: java.lang.Throwable -> L83
            if (r1 == 0) goto L9
            monitor-exit(r0)
            return r1
        L9:
            java.lang.String r1 = "grs_sdk_server_config.json"
            java.lang.String r5 = com.huawei.hms.framework.network.grs.d.c.a(r1, r5)     // Catch: java.lang.Throwable -> L83
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L83
            r2 = 0
            if (r1 == 0) goto L18
            monitor-exit(r0)
            return r2
        L18:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            r1.<init>(r5)     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            java.lang.String r5 = "grs_server"
            org.json.JSONObject r5 = r1.getJSONObject(r5)     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            java.lang.String r1 = "grs_base_url"
            org.json.JSONArray r1 = r5.getJSONArray(r1)     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            if (r1 == 0) goto L4b
            int r3 = r1.length()     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            if (r3 <= 0) goto L4b
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            r2.<init>()     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            r3 = 0
        L37:
            int r4 = r1.length()     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            if (r3 >= r4) goto L4b
            java.lang.Object r4 = r1.get(r3)     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            java.lang.String r4 = r4.toString()     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            r2.add(r4)     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            int r3 = r3 + 1
            goto L37
        L4b:
            com.huawei.hms.framework.network.grs.c.b.d r1 = new com.huawei.hms.framework.network.grs.c.b.d     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            r1.<init>()     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            com.huawei.hms.framework.network.grs.c.a.a.b = r1     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            r1.a(r2)     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            java.lang.String r1 = "grs_query_endpoint_1.0"
            java.lang.String r1 = r5.getString(r1)     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            com.huawei.hms.framework.network.grs.c.b.d r2 = com.huawei.hms.framework.network.grs.c.a.a.b     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            r2.b(r1)     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            java.lang.String r1 = "grs_query_endpoint_2.0"
            java.lang.String r1 = r5.getString(r1)     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            com.huawei.hms.framework.network.grs.c.b.d r2 = com.huawei.hms.framework.network.grs.c.a.a.b     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            r2.a(r1)     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            java.lang.String r1 = "grs_query_timeout"
            int r5 = r5.getInt(r1)     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            com.huawei.hms.framework.network.grs.c.b.d r1 = com.huawei.hms.framework.network.grs.c.a.a.b     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            r1.a(r5)     // Catch: org.json.JSONException -> L77 java.lang.Throwable -> L83
            goto L7f
        L77:
            r5 = move-exception
            java.lang.String r1 = com.huawei.hms.framework.network.grs.c.a.a.a     // Catch: java.lang.Throwable -> L83
            java.lang.String r2 = "getGrsServerBean catch JSONException"
            com.huawei.hms.framework.common.Logger.w(r1, r2, r5)     // Catch: java.lang.Throwable -> L83
        L7f:
            com.huawei.hms.framework.network.grs.c.b.d r5 = com.huawei.hms.framework.network.grs.c.a.a.b     // Catch: java.lang.Throwable -> L83
            monitor-exit(r0)
            return r5
        L83:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
    }
}

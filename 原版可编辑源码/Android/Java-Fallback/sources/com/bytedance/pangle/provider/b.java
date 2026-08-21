package com.bytedance.pangle.provider;

public final class b {
    public static java.lang.String a(java.lang.String r2, java.lang.String r3, android.net.Uri r4) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L2c
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "process_name"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L27
            java.lang.String r2 = "plugin_pkg_name"
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L27
            java.lang.String r2 = "uri"
            if (r4 == 0) goto L22
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L27
            goto L24
        L22:
            java.lang.String r3 = ""
        L24:
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L27
        L27:
            java.lang.String r2 = r0.toString()
            return r2
        L2c:
            return r0
    }
}

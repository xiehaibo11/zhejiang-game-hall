package com.kuaishou.weapon.p0;

public class ah {
    public ah() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.json.JSONObject a(android.content.Context r4) {
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L45
            r1 = 14
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            if (r0 == 0) goto L21
            java.lang.String r4 = "http.proxyHost"
            java.lang.String r4 = java.lang.System.getProperty(r4)     // Catch: java.lang.Throwable -> L45
            java.lang.String r0 = "http.proxyPort"
            java.lang.String r0 = java.lang.System.getProperty(r0)     // Catch: java.lang.Throwable -> L45
            if (r0 == 0) goto L1a
            goto L1c
        L1a:
            java.lang.String r0 = "-1"
        L1c:
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L45
            goto L2c
        L21:
            java.lang.String r0 = android.net.Proxy.getHost(r4)     // Catch: java.lang.Throwable -> L45
            int r4 = android.net.Proxy.getPort(r4)     // Catch: java.lang.Throwable -> L45
            r3 = r0
            r0 = r4
            r4 = r3
        L2c:
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L45
            if (r1 != 0) goto L45
            r1 = -1
            if (r0 == r1) goto L45
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L45
            r1.<init>()     // Catch: java.lang.Throwable -> L45
            java.lang.String r2 = "h"
            r1.put(r2, r4)     // Catch: java.lang.Throwable -> L45
            java.lang.String r4 = "p"
            r1.put(r4, r0)     // Catch: java.lang.Throwable -> L45
            return r1
        L45:
            r4 = 0
            return r4
    }
}

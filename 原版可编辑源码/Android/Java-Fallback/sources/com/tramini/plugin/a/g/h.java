package com.tramini.plugin.a.g;

public final class h {
    public h() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean a(android.content.Context r0) {
            boolean r0 = b(r0)     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 1
            return r0
    }

    private static boolean b(android.content.Context r5) {
            r0 = 0
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L38
            r2 = 14
            r3 = 1
            if (r1 < r2) goto La
            r1 = r3
            goto Lb
        La:
            r1 = r0
        Lb:
            if (r1 == 0) goto L23
            java.lang.String r5 = "http.proxyHost"
            java.lang.String r5 = java.lang.System.getProperty(r5)     // Catch: java.lang.Throwable -> L38
            java.lang.String r1 = "http.proxyPort"
            java.lang.String r1 = java.lang.System.getProperty(r1)     // Catch: java.lang.Throwable -> L38
            if (r1 == 0) goto L1c
            goto L1e
        L1c:
            java.lang.String r1 = "-1"
        L1e:
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Throwable -> L38
            goto L2e
        L23:
            java.lang.String r1 = android.net.Proxy.getHost(r5)     // Catch: java.lang.Throwable -> L38
            int r5 = android.net.Proxy.getPort(r5)     // Catch: java.lang.Throwable -> L38
            r4 = r1
            r1 = r5
            r5 = r4
        L2e:
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L38
            if (r5 != 0) goto L38
            r5 = -1
            if (r1 == r5) goto L38
            return r3
        L38:
            return r0
    }
}

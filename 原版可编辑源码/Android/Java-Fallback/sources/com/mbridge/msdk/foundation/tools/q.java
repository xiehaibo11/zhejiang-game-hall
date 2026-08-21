package com.mbridge.msdk.foundation.tools;

public final class q {
    private static android.net.ConnectivityManager a;

    public static synchronized android.net.ConnectivityManager a() {
            java.lang.Class<com.mbridge.msdk.foundation.tools.q> r0 = com.mbridge.msdk.foundation.tools.q.class
            monitor-enter(r0)
            android.net.ConnectivityManager r1 = com.mbridge.msdk.foundation.tools.q.a     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            if (r1 != 0) goto L30
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            if (r1 == 0) goto L30
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            java.lang.String r2 = "connectivity"
            java.lang.Object r1 = r1.getSystemService(r2)     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            com.mbridge.msdk.foundation.tools.q.a = r1     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            goto L30
        L24:
            r1 = move-exception
            goto L34
        L26:
            r1 = move-exception
            java.lang.String r2 = "NetManager"
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> L24
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)     // Catch: java.lang.Throwable -> L24
        L30:
            android.net.ConnectivityManager r1 = com.mbridge.msdk.foundation.tools.q.a     // Catch: java.lang.Throwable -> L24
            monitor-exit(r0)
            return r1
        L34:
            monitor-exit(r0)
            throw r1
    }
}

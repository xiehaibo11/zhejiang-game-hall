package com.tkay.expressad.videocommon.b;

public final class i extends android.content.BroadcastReceiver {
    public i() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void onReceive(android.content.Context r2, android.content.Intent r3) {
            r1 = this;
            java.lang.String r3 = r3.getAction()     // Catch: java.lang.Exception -> L45
            java.lang.String r0 = "android.net.conn.CONNECTIVITY_CHANGE"
            boolean r3 = r0.equals(r3)     // Catch: java.lang.Exception -> L45
            if (r3 == 0) goto L44
            java.lang.String r3 = "connectivity"
            java.lang.Object r2 = r2.getSystemService(r3)     // Catch: java.lang.Exception -> L45
            android.net.ConnectivityManager r2 = (android.net.ConnectivityManager) r2     // Catch: java.lang.Exception -> L45
            android.net.NetworkInfo r2 = r2.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L45
            if (r2 == 0) goto L3d
            boolean r3 = r2.isAvailable()     // Catch: java.lang.Exception -> L45
            if (r3 == 0) goto L3d
            int r3 = r2.getType()     // Catch: java.lang.Exception -> L45
            r0 = 1
            if (r3 != r0) goto L2f
            com.tkay.expressad.videocommon.b.c r2 = com.tkay.expressad.videocommon.b.c.a()     // Catch: java.lang.Exception -> L45
            r2.a(r0)     // Catch: java.lang.Exception -> L45
            return
        L2f:
            int r2 = r2.getType()     // Catch: java.lang.Exception -> L45
            if (r2 != 0) goto L44
            com.tkay.expressad.videocommon.b.c r2 = com.tkay.expressad.videocommon.b.c.a()     // Catch: java.lang.Exception -> L45
            r2.c()     // Catch: java.lang.Exception -> L45
            return
        L3d:
            com.tkay.expressad.videocommon.b.c r2 = com.tkay.expressad.videocommon.b.c.a()     // Catch: java.lang.Exception -> L45
            r2.b()     // Catch: java.lang.Exception -> L45
        L44:
            return
        L45:
            r2 = move-exception
            r2.printStackTrace()
            return
    }
}

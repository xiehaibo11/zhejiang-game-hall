package com.mbridge.msdk.videocommon.download;

public class NetStateOnReceive extends android.content.BroadcastReceiver {
    public NetStateOnReceive() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onReceive(android.content.Context r2, android.content.Intent r3) {
            r1 = this;
            java.lang.String r3 = r3.getAction()     // Catch: java.lang.Exception -> L46
            java.lang.String r0 = "android.net.conn.CONNECTIVITY_CHANGE"
            boolean r3 = r0.equals(r3)     // Catch: java.lang.Exception -> L46
            if (r3 == 0) goto L4a
            java.lang.String r3 = "connectivity"
            java.lang.Object r2 = r2.getSystemService(r3)     // Catch: java.lang.Exception -> L46
            android.net.ConnectivityManager r2 = (android.net.ConnectivityManager) r2     // Catch: java.lang.Exception -> L46
            android.net.NetworkInfo r2 = r2.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L46
            if (r2 == 0) goto L3d
            boolean r3 = r2.isAvailable()     // Catch: java.lang.Exception -> L46
            if (r3 == 0) goto L3d
            int r3 = r2.getType()     // Catch: java.lang.Exception -> L46
            r0 = 1
            if (r3 != r0) goto L2f
            com.mbridge.msdk.videocommon.download.b r2 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Exception -> L46
            r2.b(r0)     // Catch: java.lang.Exception -> L46
            goto L4a
        L2f:
            int r2 = r2.getType()     // Catch: java.lang.Exception -> L46
            if (r2 != 0) goto L4a
            com.mbridge.msdk.videocommon.download.b r2 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Exception -> L46
            r2.a()     // Catch: java.lang.Exception -> L46
            goto L4a
        L3d:
            com.mbridge.msdk.videocommon.download.b r2 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Exception -> L46
            r3 = 0
            r2.a(r3)     // Catch: java.lang.Exception -> L46
            goto L4a
        L46:
            r2 = move-exception
            r2.printStackTrace()
        L4a:
            return
    }
}

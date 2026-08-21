package com.mbridge.msdk.mbdownload;

public class DownloadNetWorkChangeReceiver extends android.content.BroadcastReceiver {
    boolean a;

    public DownloadNetWorkChangeReceiver() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.a = r0
            return
    }

    @Override
    public void onReceive(android.content.Context r4, android.content.Intent r5) {
            r3 = this;
            boolean r0 = r3.a
            r1 = 0
            if (r0 == 0) goto L8
            r3.a = r1
            return
        L8:
            java.lang.String r0 = r5.getAction()
            java.lang.String r2 = "android.net.conn.CONNECTIVITY_CHANGE"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L72
            java.lang.String r0 = "FAILOVER_CONNECTION"
            boolean r0 = r5.getBooleanExtra(r0, r1)
            java.lang.String r2 = "EXTRA_NO_CONNECTIVITY"
            boolean r5 = r5.getBooleanExtra(r2, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "=======reConn:"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = "--noConn:"
            r1.append(r0)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            java.lang.String r0 = "DownloadNetWorkChangeReceiver"
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)
            boolean r5 = com.mbridge.msdk.foundation.same.a.h
            if (r5 != 0) goto L43
            return
        L43:
            java.lang.String r5 = "connectivity"
            java.lang.Object r4 = r4.getSystemService(r5)
            android.net.ConnectivityManager r4 = (android.net.ConnectivityManager) r4
            com.mbridge.msdk.mbdownload.manager.ADownloadManager r5 = com.mbridge.msdk.mbdownload.manager.ADownloadManager.getInstance()
            if (r4 == 0) goto L6f
            android.net.NetworkInfo r4 = r4.getActiveNetworkInfo()
            if (r4 == 0) goto L66
            boolean r4 = r4.isConnected()
            if (r4 == 0) goto L66
            java.lang.String r4 = "=======networkInfo:Connected"
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
            r5.reStartAllTask()
            goto L72
        L66:
            java.lang.String r4 = "=======networkInfo:not Connected"
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
            r5.cancelAllTask()
            goto L72
        L6f:
            r5.cancelAllTask()
        L72:
            return
    }
}

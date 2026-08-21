package com.mbridge.msdk.foundation.download.download;

public class DownLoadUtils {
    private static final int DOWNLOAD_CONNECTION_TIME_OUT = 20000;
    private static final int DOWNLOAD_READ_TIME_OUT = 30000;
    public static final java.lang.String END_TAG = "<mbridgeloadend></mbridgeloadend>";
    private static final java.lang.String TAG = "DownLoadUtils";


    public DownLoadUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void getSourceCodeFromNetUrl(java.lang.String r2, com.mbridge.msdk.foundation.download.download.H5DownLoadManager.IOnDownLoadH5Source r3, boolean r4) {
            boolean r0 = com.mbridge.msdk.foundation.tools.ai.a(r2)     // Catch: java.lang.Throwable -> L22
            if (r0 != 0) goto L1a
            boolean r0 = android.webkit.URLUtil.isNetworkUrl(r2)     // Catch: java.lang.Throwable -> L22
            if (r0 != 0) goto Ld
            goto L1a
        Ld:
            com.mbridge.msdk.foundation.download.download.DownloadTask r0 = com.mbridge.msdk.foundation.download.download.DownloadTask.getInstance()     // Catch: java.lang.Throwable -> L22
            com.mbridge.msdk.foundation.download.download.DownLoadUtils$1 r1 = new com.mbridge.msdk.foundation.download.download.DownLoadUtils$1     // Catch: java.lang.Throwable -> L22
            r1.<init>(r3, r2, r4)     // Catch: java.lang.Throwable -> L22
            r0.runTask(r1)     // Catch: java.lang.Throwable -> L22
            goto L2a
        L1a:
            if (r3 == 0) goto L21
            java.lang.String r2 = "url is error"
            r3.onFailed(r2)     // Catch: java.lang.Throwable -> L22
        L21:
            return
        L22:
            r2 = move-exception
            boolean r3 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r3 == 0) goto L2a
            r2.printStackTrace()
        L2a:
            return
    }
}

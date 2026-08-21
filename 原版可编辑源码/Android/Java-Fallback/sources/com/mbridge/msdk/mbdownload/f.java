package com.mbridge.msdk.mbdownload;

public class f extends com.mbridge.msdk.mbdownload.b {
    public f(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = "mb"
            r1.<init>(r2, r0, r3)
            boolean r2 = com.mbridge.msdk.MBridgeConstans.RICH_NOTIFICATION
            r3 = 1
            r0 = 0
            if (r2 == 0) goto Lf
            r1.setRichNotification(r3)
            goto L12
        Lf:
            r1.setRichNotification(r0)
        L12:
            boolean r2 = com.mbridge.msdk.MBridgeConstans.SLIENT_DOWNLOAD
            if (r2 == 0) goto L1a
            r1.setSilentDownload(r3)
            goto L1d
        L1a:
            r1.setSilentDownload(r0)
        L1d:
            java.lang.String r2 = "com.mbridge.msdk.shell.MBService"
            r1.setDownloadClz(r2)
            return
    }

    public f(java.lang.String r1, java.lang.String r2, java.lang.String r3, boolean r4) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.setRichNotification(r4)
            java.lang.String r1 = "com.mbridge.msdk.shell.MBService"
            r0.setDownloadClz(r1)
            return
    }
}

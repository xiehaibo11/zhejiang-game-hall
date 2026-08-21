package com.mbridge.msdk.mbjscommon.confirmation;

public class CloseDialogBroadcastReceiver extends android.content.BroadcastReceiver {
    private com.mbridge.msdk.widget.custom.DownloadMessageDialog a;

    public CloseDialogBroadcastReceiver(com.mbridge.msdk.widget.custom.DownloadMessageDialog r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public void onReceive(android.content.Context r3, android.content.Intent r4) {
            r2 = this;
            java.lang.String r0 = "CloseDialogBroadcastReceiver"
            if (r4 == 0) goto L5b
            java.lang.String r4 = r4.getAction()
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 != 0) goto L5b
            java.lang.String r1 = "mb_dp_close_broadcast_receiver"
            boolean r4 = android.text.TextUtils.equals(r4, r1)
            if (r4 == 0) goto L5b
            com.mbridge.msdk.widget.custom.DownloadMessageDialog r4 = r2.a
            if (r4 == 0) goto L5b
            boolean r4 = r4.isShowing()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e
            if (r4 == 0) goto L2d
            com.mbridge.msdk.widget.custom.DownloadMessageDialog r4 = r2.a     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e
            r1 = 0
            r4.setRenderListener(r1)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e
            com.mbridge.msdk.widget.custom.DownloadMessageDialog r4 = r2.a     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e
            r4.cancel()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e
            r2.a = r1     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e
        L2d:
            if (r3 == 0) goto L5b
            r3.unregisterReceiver(r2)     // Catch: java.lang.Exception -> L33
            goto L5b
        L33:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            goto L5b
        L3c:
            r4 = move-exception
            goto L4c
        L3e:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L3c
            com.mbridge.msdk.foundation.tools.z.a(r0, r4)     // Catch: java.lang.Throwable -> L3c
            if (r3 == 0) goto L5b
            r3.unregisterReceiver(r2)     // Catch: java.lang.Exception -> L33
            goto L5b
        L4c:
            if (r3 == 0) goto L5a
            r3.unregisterReceiver(r2)     // Catch: java.lang.Exception -> L52
            goto L5a
        L52:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)
        L5a:
            throw r4
        L5b:
            return
    }
}

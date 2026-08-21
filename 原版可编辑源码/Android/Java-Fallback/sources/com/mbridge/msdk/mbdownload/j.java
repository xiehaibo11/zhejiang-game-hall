package com.mbridge.msdk.mbdownload;

public final class j {
    public static android.app.PendingIntent a(android.content.Context r2, java.lang.String r3) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.mbridge.msdk.shell.MBService> r1 = com.mbridge.msdk.shell.MBService.class
            r0.<init>(r2, r1)
            java.lang.String r1 = "com.mbridge.msdk.broadcast.download.msg"
            r0.putExtra(r1, r3)
            int r3 = r3.hashCode()
            r1 = 134217728(0x8000000, float:3.85186E-34)
            android.app.PendingIntent r2 = android.app.PendingIntent.getService(r2, r3, r0, r1)
            return r2
    }

    public static java.lang.String a(int r2, java.lang.String r3) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r2 = ""
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            r0.<init>(r2)
            java.lang.String r2 = ":"
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static void a() {
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            if (r0 == 0) goto L2b
            int r1 = com.mbridge.msdk.foundation.tools.v.w(r0)
            r2 = 26
            if (r1 < r2) goto L2b
            int r1 = android.os.Build.VERSION.SDK_INT
            if (r1 < r2) goto L2b
            r1 = 2
            java.lang.String r2 = "notification"
            java.lang.Object r0 = r0.getSystemService(r2)
            android.app.NotificationManager r0 = (android.app.NotificationManager) r0
            android.app.NotificationChannel r2 = new android.app.NotificationChannel
            java.lang.String r3 = "下载进度"
            java.lang.String r4 = "download"
            r2.<init>(r4, r3, r1)
            r0.createNotificationChannel(r2)
        L2b:
            return
    }
}

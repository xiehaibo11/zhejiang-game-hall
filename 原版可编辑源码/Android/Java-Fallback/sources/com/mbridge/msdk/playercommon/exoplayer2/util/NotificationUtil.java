package com.mbridge.msdk.playercommon.exoplayer2.util;

public final class NotificationUtil {
    public static final int IMPORTANCE_DEFAULT = 3;
    public static final int IMPORTANCE_HIGH = 4;
    public static final int IMPORTANCE_LOW = 2;
    public static final int IMPORTANCE_MIN = 1;
    public static final int IMPORTANCE_NONE = 0;
    public static final int IMPORTANCE_UNSPECIFIED = -1000;

    public @interface Importance {
    }

    private NotificationUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void createNotificationChannel(android.content.Context r2, java.lang.String r3, int r4, int r5) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 26
            if (r0 < r1) goto L1a
            java.lang.String r0 = "notification"
            java.lang.Object r0 = r2.getSystemService(r0)
            android.app.NotificationManager r0 = (android.app.NotificationManager) r0
            android.app.NotificationChannel r1 = new android.app.NotificationChannel
            java.lang.String r2 = r2.getString(r4)
            r1.<init>(r3, r2, r5)
            r0.createNotificationChannel(r1)
        L1a:
            return
    }

    public static void setNotification(android.content.Context r1, int r2, android.app.Notification r3) {
            java.lang.String r0 = "notification"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.app.NotificationManager r1 = (android.app.NotificationManager) r1
            if (r3 == 0) goto Le
            r1.notify(r2, r3)
            goto L11
        Le:
            r1.cancel(r2)
        L11:
            return
    }
}

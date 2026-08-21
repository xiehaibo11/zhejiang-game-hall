package com.bianfeng.ymnsdk.sysfunc;

public class LocalNotificationUtils {
    private static volatile com.bianfeng.ymnsdk.sysfunc.LocalNotificationUtils utils;
    private int index;

    private LocalNotificationUtils() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.index = r0
            return
    }

    public static com.bianfeng.ymnsdk.sysfunc.LocalNotificationUtils getInstance() {
            com.bianfeng.ymnsdk.sysfunc.LocalNotificationUtils r0 = com.bianfeng.ymnsdk.sysfunc.LocalNotificationUtils.utils
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.ymnsdk.sysfunc.LocalNotificationUtils> r0 = com.bianfeng.ymnsdk.sysfunc.LocalNotificationUtils.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.sysfunc.LocalNotificationUtils r1 = com.bianfeng.ymnsdk.sysfunc.LocalNotificationUtils.utils     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.ymnsdk.sysfunc.LocalNotificationUtils r1 = new com.bianfeng.ymnsdk.sysfunc.LocalNotificationUtils     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.ymnsdk.sysfunc.LocalNotificationUtils.utils = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.ymnsdk.sysfunc.LocalNotificationUtils r0 = com.bianfeng.ymnsdk.sysfunc.LocalNotificationUtils.utils
            return r0
    }

    public void sendNotification(android.app.Activity r8, java.lang.String r9, java.lang.String r10) {
            r7 = this;
            int r0 = r7.index
            r1 = 1
            int r0 = r0 + r1
            r7.index = r0
            java.lang.String r0 = "sendNotification----sendNotification"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            java.lang.String r0 = "notification"
            java.lang.Object r0 = r8.getSystemService(r0)
            android.app.NotificationManager r0 = (android.app.NotificationManager) r0
            android.content.Intent r2 = new android.content.Intent
            java.lang.Class<com.bianfeng.ymnsdk.sysfunc.SysfuncNotificationReceiver> r3 = com.bianfeng.ymnsdk.sysfunc.SysfuncNotificationReceiver.class
            r2.<init>(r8, r3)
            java.lang.String r3 = "com.bianfeng.ymnsdk.sysfunc.click"
            r2.setAction(r3)
            r3 = 268435456(0x10000000, float:2.524355E-29)
            android.app.PendingIntent r2 = android.app.PendingIntent.getBroadcast(r8, r1, r2, r3)
            android.support.v4.app.NotificationCompat$Builder r3 = new android.support.v4.app.NotificationCompat$Builder
            java.lang.String r4 = "1"
            r3.<init>(r8, r4)
            android.support.v4.app.NotificationCompat$Builder r5 = r3.setAutoCancel(r1)
            android.content.pm.ApplicationInfo r6 = r8.getApplicationInfo()
            int r6 = r6.icon
            android.support.v4.app.NotificationCompat$Builder r5 = r5.setSmallIcon(r6)
            android.support.v4.app.NotificationCompat$Builder r5 = r5.setContentTitle(r9)
            android.support.v4.app.NotificationCompat$Builder r10 = r5.setContentText(r10)
            android.support.v4.app.NotificationCompat$Builder r10 = r10.setContentIntent(r2)
            android.support.v4.app.NotificationCompat$Builder r10 = r10.setAutoCancel(r1)
            r2 = 0
            android.support.v4.app.NotificationCompat$Builder r10 = r10.setOnlyAlertOnce(r2)
            long r5 = java.lang.System.currentTimeMillis()
            android.support.v4.app.NotificationCompat$Builder r10 = r10.setWhen(r5)
            android.support.v4.app.NotificationCompat$Builder r9 = r10.setTicker(r9)
            r10 = 2
            android.support.v4.app.NotificationCompat$Builder r9 = r9.setDefaults(r10)
            android.support.v4.app.NotificationCompat$Builder r9 = r9.setPriority(r10)
            android.support.v4.app.NotificationCompat$Builder r9 = r9.setLocalOnly(r1)
            android.support.v4.app.NotificationCompat$Builder r9 = r9.setShowWhen(r1)
            r9.setVisibility(r1)
            int r9 = android.os.Build.VERSION.SDK_INT
            r10 = 26
            if (r9 < r10) goto L9e
            android.app.NotificationChannel r9 = new android.app.NotificationChannel
            r10 = 4
            java.lang.String r2 = "边锋游戏"
            r9.<init>(r4, r2, r10)
            r9.enableLights(r1)
            r9.enableVibration(r1)
            r9.setDescription(r2)
            android.content.pm.ApplicationInfo r8 = r8.getApplicationInfo()
            java.lang.String r8 = r8.name
            r9.setName(r8)
            r8 = 6
            long[] r8 = new long[r8]
            r8 = {x00ac: FILL_ARRAY_DATA , data: [200, 200, 1000, 200, 1000, 200} // fill-array
            r9.setVibrationPattern(r8)
            r0.createNotificationChannel(r9)
            r3.setChannelId(r4)
        L9e:
            android.app.Notification r8 = r3.build()
            r3.setPublicVersion(r8)
            int r9 = r7.index
            r0.notify(r9, r8)
            return
    }

    public void sysMessageBox(android.app.Activity r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, int r5) {
            r0 = this;
            return
    }
}

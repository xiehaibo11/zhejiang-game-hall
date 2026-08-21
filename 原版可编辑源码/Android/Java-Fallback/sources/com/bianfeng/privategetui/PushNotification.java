package com.bianfeng.privategetui;

public class PushNotification extends android.app.Notification {
    private static final long[] INTERVALS = null;
    private static final java.lang.String TAG = "PushNotification";

    public enum PeriodType extends java.lang.Enum<com.bianfeng.privategetui.PushNotification.PeriodType> {
        private static final com.bianfeng.privategetui.PushNotification.PeriodType[] $VALUES = null;
        public static final com.bianfeng.privategetui.PushNotification.PeriodType DAY = null;
        public static final com.bianfeng.privategetui.PushNotification.PeriodType HOUR = null;
        public static final com.bianfeng.privategetui.PushNotification.PeriodType WEEK = null;

        static {
                com.bianfeng.privategetui.PushNotification$PeriodType r0 = new com.bianfeng.privategetui.PushNotification$PeriodType
                r1 = 0
                java.lang.String r2 = "HOUR"
                r0.<init>(r2, r1)
                com.bianfeng.privategetui.PushNotification.PeriodType.HOUR = r0
                com.bianfeng.privategetui.PushNotification$PeriodType r0 = new com.bianfeng.privategetui.PushNotification$PeriodType
                r2 = 1
                java.lang.String r3 = "DAY"
                r0.<init>(r3, r2)
                com.bianfeng.privategetui.PushNotification.PeriodType.DAY = r0
                com.bianfeng.privategetui.PushNotification$PeriodType r0 = new com.bianfeng.privategetui.PushNotification$PeriodType
                r3 = 2
                java.lang.String r4 = "WEEK"
                r0.<init>(r4, r3)
                com.bianfeng.privategetui.PushNotification.PeriodType.WEEK = r0
                r4 = 3
                com.bianfeng.privategetui.PushNotification$PeriodType[] r4 = new com.bianfeng.privategetui.PushNotification.PeriodType[r4]
                com.bianfeng.privategetui.PushNotification$PeriodType r5 = com.bianfeng.privategetui.PushNotification.PeriodType.HOUR
                r4[r1] = r5
                com.bianfeng.privategetui.PushNotification$PeriodType r1 = com.bianfeng.privategetui.PushNotification.PeriodType.DAY
                r4[r2] = r1
                r4[r3] = r0
                com.bianfeng.privategetui.PushNotification.PeriodType.$VALUES = r4
                return
        }

        PeriodType(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.bianfeng.privategetui.PushNotification.PeriodType valueOf(java.lang.String r1) {
                java.lang.Class<com.bianfeng.privategetui.PushNotification$PeriodType> r0 = com.bianfeng.privategetui.PushNotification.PeriodType.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.bianfeng.privategetui.PushNotification$PeriodType r1 = (com.bianfeng.privategetui.PushNotification.PeriodType) r1
                return r1
        }

        public static com.bianfeng.privategetui.PushNotification.PeriodType[] values() {
                com.bianfeng.privategetui.PushNotification$PeriodType[] r0 = com.bianfeng.privategetui.PushNotification.PeriodType.$VALUES
                java.lang.Object r0 = r0.clone()
                com.bianfeng.privategetui.PushNotification$PeriodType[] r0 = (com.bianfeng.privategetui.PushNotification.PeriodType[]) r0
                return r0
        }
    }

    static {
            r0 = 3
            long[] r0 = new long[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [3600000, 86400000, -1702967296} // fill-array
            com.bianfeng.privategetui.PushNotification.INTERVALS = r0
            return
    }

    public PushNotification() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void cancelRepeating(android.content.Context r2, java.lang.String r3) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.bianfeng.privategetui.PushReceiver> r1 = com.bianfeng.privategetui.PushReceiver.class
            r0.<init>(r2, r1)
            java.lang.String r1 = "com.bianfeng.push.action.local"
            r0.setAction(r1)
            int r3 = generateNotifyId(r3)
            r1 = 134217728(0x8000000, float:3.85186E-34)
            android.app.PendingIntent r3 = android.app.PendingIntent.getBroadcast(r2, r3, r0, r1)
            java.lang.String r0 = "alarm"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.app.AlarmManager r2 = (android.app.AlarmManager) r2
            r2.cancel(r3)
            return
    }

    private static int generateNotifyId(java.lang.String r0) {
            int r0 = r0.hashCode()
            return r0
    }

    private static int getDefaultIcon(android.content.Context r2) {
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Exception -> L10
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L10
            r1 = 1
            android.content.pm.ApplicationInfo r2 = r0.getApplicationInfo(r2, r1)     // Catch: java.lang.Exception -> L10
            int r2 = r2.icon     // Catch: java.lang.Exception -> L10
            return r2
        L10:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 17301651(0x1080093, float:2.4979667E-38)
            return r2
    }

    private static android.content.Intent getTargetIntent(android.content.Context r1) {
            android.content.pm.PackageManager r0 = r1.getPackageManager()
            java.lang.String r1 = r1.getPackageName()
            android.content.Intent r1 = r0.getLaunchIntentForPackage(r1)
            r0 = 536870912(0x20000000, float:1.0842022E-19)
            r1.addFlags(r0)
            return r1
    }

    public static void repeating(android.content.Context r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, long r11, long r13) {
            android.content.Intent r8 = com.bianfeng.privategetui.PushReceiver.createLocalAction(r7, r8, r9, r10)
            int r9 = generateNotifyId(r9)
            r10 = 134217728(0x8000000, float:3.85186E-34)
            android.app.PendingIntent r6 = android.app.PendingIntent.getBroadcast(r7, r9, r8, r10)
            java.lang.String r8 = "alarm"
            java.lang.Object r7 = r7.getSystemService(r8)
            r0 = r7
            android.app.AlarmManager r0 = (android.app.AlarmManager) r0
            r7 = 500(0x1f4, double:2.47E-321)
            long r2 = r11 + r7
            r1 = 0
            r4 = r13
            r0.setRepeating(r1, r2, r4, r6)
            return
    }

    public static void repeating(android.content.Context r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, long r13, com.bianfeng.privategetui.PushNotification.PeriodType r15) {
            long[] r0 = com.bianfeng.privategetui.PushNotification.INTERVALS
            int r15 = r15.ordinal()
            r7 = r0[r15]
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            repeating(r1, r2, r3, r4, r5, r7)
            return
    }

    public static void show(android.content.Context r0, java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            showImmediately(r0, r1, r2, r3)
            return
    }

    public static void show(android.content.Context r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, long r8) {
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r6
            r2 = 1
            r0[r2] = r7
            java.lang.Long r2 = java.lang.Long.valueOf(r8)
            r3 = 2
            r0[r3] = r2
            java.lang.String r2 = "try show notification (%s, %s)->%d"
            java.lang.String r0 = java.lang.String.format(r2, r0)
            java.lang.String r2 = "PushNotification"
            android.util.Log.i(r2, r0)
            android.content.Intent r5 = com.bianfeng.privategetui.PushReceiver.createLocalAction(r4, r5, r6, r7)
            int r6 = generateNotifyId(r6)
            r7 = 134217728(0x8000000, float:3.85186E-34)
            android.app.PendingIntent r5 = android.app.PendingIntent.getBroadcast(r4, r6, r5, r7)
            java.lang.String r6 = "alarm"
            java.lang.Object r4 = r4.getSystemService(r6)
            android.app.AlarmManager r4 = (android.app.AlarmManager) r4
            r6 = 500(0x1f4, double:2.47E-321)
            long r8 = r8 + r6
            r4.set(r1, r8, r5)
            return
    }

    public static void showImmediately(android.content.Context r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r9
            r1 = 1
            r0[r1] = r10
            java.lang.String r2 = "try show notification (%s, %s)"
            java.lang.String r0 = java.lang.String.format(r2, r0)
            java.lang.String r2 = "PushNotification"
            android.util.Log.i(r2, r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            int r2 = generateNotifyId(r9)
            java.lang.String r3 = "notification"
            java.lang.Object r3 = r7.getSystemService(r3)
            android.app.NotificationManager r3 = (android.app.NotificationManager) r3
            android.content.Intent r4 = getTargetIntent(r7)
            r5 = 100010(0x186aa, float:1.40144E-40)
            r6 = 134217728(0x8000000, float:3.85186E-34)
            android.app.PendingIntent r4 = android.app.PendingIntent.getActivity(r7, r5, r4, r6)
            android.app.Notification$Builder r5 = new android.app.Notification$Builder
            r5.<init>(r7)
            int r7 = getDefaultIcon(r7)
            r5.setSmallIcon(r7)
            r5.setTicker(r8)
            r5.setContentTitle(r9)
            r5.setContentText(r10)
            r5.setContentIntent(r4)
            r5.setNumber(r1)
            r7 = 16
            if (r0 >= r7) goto L53
            android.app.Notification r8 = r5.getNotification()
            goto L57
        L53:
            android.app.Notification r8 = r5.build()
        L57:
            int r9 = r8.flags
            r7 = r7 | r9
            r8.flags = r7
            r3.notify(r2, r8)
            return
    }

    public static void showLoacl(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = ""
            showLoacl(r1, r2, r3, r4, r0)
            return
    }

    public static void showLoacl(android.content.Context r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14) {
            java.lang.String r0 = "notification"
            java.lang.Object r0 = r10.getSystemService(r0)
            android.app.NotificationManager r0 = (android.app.NotificationManager) r0
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 26
            if (r1 < r2) goto L19
            android.app.NotificationChannel r1 = new android.app.NotificationChannel
            r2 = 4
            r1.<init>(r11, r12, r2)
            if (r0 == 0) goto L19
            r0.createNotificationChannel(r1)
        L19:
            android.support.v4.app.NotificationCompat$Builder r1 = new android.support.v4.app.NotificationCompat$Builder
            r1.<init>(r10)
            java.lang.String r2 = "PUSH_APP_MAIN_ACTIVITY"
            java.lang.String r2 = com.bianfeng.ymnsdk.util.YmnAppContext.getMetaDataValueString(r2)
            boolean r2 = r2.isEmpty()
            r3 = -1
            java.lang.String r4 = "R.drawable.push_small"
            r5 = 603979776(0x24000000, float:2.7755576E-17)
            r6 = 1000(0x3e8, double:4.94E-321)
            if (r2 != 0) goto L93
            long r8 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L8e
            long r8 = r8 / r6
            int r2 = (int) r8     // Catch: java.lang.Exception -> L8e
            android.content.Intent r6 = new android.content.Intent     // Catch: java.lang.Exception -> L8e
            java.lang.Class<com.bianfeng.privategetui.ToMainActivityBroadcastReceiver> r7 = com.bianfeng.privategetui.ToMainActivityBroadcastReceiver.class
            r6.<init>(r10, r7)     // Catch: java.lang.Exception -> L8e
            java.lang.String r7 = "notificationId"
            r6.putExtra(r7, r2)     // Catch: java.lang.Exception -> L8e
            boolean r7 = r14.isEmpty()     // Catch: java.lang.Exception -> L8e
            if (r7 != 0) goto L4e
            java.lang.String r7 = "click"
            r6.putExtra(r7, r14)     // Catch: java.lang.Exception -> L8e
        L4e:
            r6.setFlags(r5)     // Catch: java.lang.Exception -> L8e
            r14 = 134217728(0x8000000, float:3.85186E-34)
            android.app.PendingIntent r14 = android.app.PendingIntent.getBroadcast(r10, r2, r6, r14)     // Catch: java.lang.Exception -> L8e
            android.support.v4.app.NotificationCompat$Builder r12 = r1.setContentTitle(r12)     // Catch: java.lang.Exception -> L8e
            android.support.v4.app.NotificationCompat$Builder r12 = r12.setContentIntent(r14)     // Catch: java.lang.Exception -> L8e
            android.support.v4.app.NotificationCompat$Builder r12 = r12.setContentText(r13)     // Catch: java.lang.Exception -> L8e
            android.support.v4.app.NotificationCompat$Builder r12 = r12.setTicker(r13)     // Catch: java.lang.Exception -> L8e
            long r13 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L8e
            android.support.v4.app.NotificationCompat$Builder r12 = r12.setWhen(r13)     // Catch: java.lang.Exception -> L8e
            int r10 = com.bianfeng.privategetui.ResourceManger.getId(r10, r4)     // Catch: java.lang.Exception -> L8e
            android.support.v4.app.NotificationCompat$Builder r10 = r12.setSmallIcon(r10)     // Catch: java.lang.Exception -> L8e
            android.support.v4.app.NotificationCompat$Builder r10 = r10.setChannelId(r11)     // Catch: java.lang.Exception -> L8e
            r10.setDefaults(r3)     // Catch: java.lang.Exception -> L8e
            android.app.Notification r10 = r1.build()     // Catch: java.lang.Exception -> L8e
            int r11 = r10.flags     // Catch: java.lang.Exception -> L8e
            r11 = r11 | 16
            r10.flags = r11     // Catch: java.lang.Exception -> L8e
            if (r0 == 0) goto Ldf
            r0.notify(r2, r10)     // Catch: java.lang.Exception -> L8e
            goto Ldf
        L8e:
            r10 = move-exception
            r10.printStackTrace()
            goto Ldf
        L93:
            long r8 = java.lang.System.currentTimeMillis()
            long r8 = r8 / r6
            int r14 = (int) r8
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
            r2.setClassName(r10, r11)
            r2.setFlags(r5)
            r5 = 0
            android.app.PendingIntent r2 = android.app.PendingIntent.getActivity(r10, r5, r2, r5)
            android.support.v4.app.NotificationCompat$Builder r12 = r1.setContentTitle(r12)
            android.support.v4.app.NotificationCompat$Builder r12 = r12.setContentIntent(r2)
            android.support.v4.app.NotificationCompat$Builder r12 = r12.setContentText(r13)
            android.support.v4.app.NotificationCompat$Builder r12 = r12.setTicker(r13)
            long r5 = java.lang.System.currentTimeMillis()
            android.support.v4.app.NotificationCompat$Builder r12 = r12.setWhen(r5)
            int r10 = com.bianfeng.privategetui.ResourceManger.getId(r10, r4)
            android.support.v4.app.NotificationCompat$Builder r10 = r12.setSmallIcon(r10)
            android.support.v4.app.NotificationCompat$Builder r10 = r10.setChannelId(r11)
            r10.setDefaults(r3)
            android.app.Notification r10 = r1.build()
            int r11 = r10.flags
            r11 = r11 | 16
            r10.flags = r11
            if (r0 == 0) goto Ldf
            r0.notify(r14, r10)
        Ldf:
            return
    }
}

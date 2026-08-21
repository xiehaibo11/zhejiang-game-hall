package com.huawei.hms.support.api.push.service;

public class HmsMsgService extends android.app.Service {

    private static class a extends android.os.Handler {
        public android.content.Context a;

        public a(android.content.Context r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        @Override
        public void handleMessage(android.os.Message r6) {
                r5 = this;
                android.os.Bundle r0 = r6.getData()
                int r1 = android.os.Build.VERSION.SDK_INT
                r2 = 21
                if (r1 < r2) goto L88
                android.content.Context r1 = r5.a
                android.content.Context r1 = r1.getApplicationContext()
                android.content.pm.PackageManager r1 = r1.getPackageManager()
                int r2 = r6.sendingUid
                java.lang.String r1 = r1.getNameForUid(r2)
                android.content.Context r2 = r5.a
                com.huawei.hms.utils.HMSPackageManager r2 = com.huawei.hms.utils.HMSPackageManager.getInstance(r2)
                java.lang.String r2 = r2.getHMSPackageName()
                boolean r1 = java.util.Objects.equals(r1, r2)
                if (r1 == 0) goto L85
                if (r0 == 0) goto L85
                android.content.Context r1 = r5.a
                com.huawei.hms.utils.HMSPackageManager r1 = com.huawei.hms.utils.HMSPackageManager.getInstance(r1)
                com.huawei.hms.utils.PackageManagerHelper$PackageStates r1 = r1.getHMSPackageStates()
                com.huawei.hms.utils.PackageManagerHelper$PackageStates r2 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.ENABLED
                java.lang.String r3 = "HmsMsgService"
                if (r1 == r2) goto L42
                java.lang.String r0 = "service not start by hms"
                com.huawei.hms.support.log.HMSLog.i(r3, r0)
                goto L85
            L42:
                java.lang.String r1 = "chose push type"
                com.huawei.hms.support.log.HMSLog.i(r3, r1)
                java.lang.String r1 = "push_action"
                java.lang.String r2 = com.huawei.hms.push.c.b(r0, r1)
                java.lang.String r4 = "com.huawei.push.msg.NOTIFY_MSG"
                boolean r2 = java.util.Objects.equals(r2, r4)
                if (r2 == 0) goto L6f
                android.content.Context r1 = com.huawei.hms.utils.ResourceLoaderUtil.getmContext()
                if (r1 != 0) goto L64
                android.content.Context r1 = r5.a
                android.content.Context r1 = r1.getApplicationContext()
                com.huawei.hms.utils.ResourceLoaderUtil.setmContext(r1)
            L64:
                java.lang.String r1 = "invokeSelfShow"
                com.huawei.hms.support.log.HMSLog.i(r3, r1)
                android.content.Context r1 = r5.a
                com.huawei.hms.support.api.push.service.HmsMsgService.a(r1, r0)
                goto L85
            L6f:
                java.lang.String r1 = com.huawei.hms.push.c.b(r0, r1)
                java.lang.String r2 = "com.huawei.push.msg.PASSBY_MSG"
                boolean r1 = java.util.Objects.equals(r1, r2)
                if (r1 == 0) goto L85
                java.lang.String r1 = "sendBroadcastToHms"
                com.huawei.hms.support.log.HMSLog.i(r3, r1)
                android.content.Context r1 = r5.a
                com.huawei.hms.support.api.push.service.HmsMsgService.b(r1, r0)
            L85:
                super.handleMessage(r6)
            L88:
                return
        }
    }

    public HmsMsgService() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(android.content.Context r0, android.os.Bundle r1) {
            c(r0, r1)
            return
    }

    public static void b(android.content.Context r0, android.os.Bundle r1) {
            d(r0, r1)
            return
    }

    public static void c(android.content.Context r4, android.os.Bundle r5) {
            boolean r0 = com.huawei.hms.push.t.a(r4)
            java.lang.String r1 = "HmsMsgService"
            if (r0 != 0) goto L20
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r4.getPackageName()
            r0.append(r2)
            java.lang.String r2 = " disable display notification."
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
        L20:
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r2 = "com.huawei.push.msg.NOTIFY_MSG"
            r0.setAction(r2)
            java.lang.String r2 = "selfshow_info"
            byte[] r3 = com.huawei.hms.push.c.a(r5, r2)
            r0.putExtra(r2, r3)
            java.lang.String r2 = "selfshow_token"
            byte[] r3 = com.huawei.hms.push.c.a(r5, r2)
            r0.putExtra(r2, r3)
            java.lang.String r2 = "push_package"
            java.lang.String r5 = com.huawei.hms.push.c.c(r5, r2)
            r0.setPackage(r5)
            com.huawei.hms.push.i.a(r4, r0)
            java.lang.String r4 = "invokeSelfShow done"
            com.huawei.hms.support.log.HMSLog.i(r1, r4)
            return
    }

    public static void d(android.content.Context r6, android.os.Bundle r7) {
            java.lang.String r0 = "msgIdStr"
            java.lang.String r1 = "device_token"
            java.lang.String r2 = "msg_data"
            java.lang.String r3 = "HmsMsgService"
            android.content.Intent r4 = new android.content.Intent     // Catch: java.lang.Exception -> L53 java.lang.SecurityException -> L59
            r4.<init>()     // Catch: java.lang.Exception -> L53 java.lang.SecurityException -> L59
            java.lang.String r5 = "com.huawei.android.push.intent.RECEIVE"
            r4.setAction(r5)     // Catch: java.lang.Exception -> L53 java.lang.SecurityException -> L59
            byte[] r5 = com.huawei.hms.push.c.a(r7, r2)     // Catch: java.lang.Exception -> L53 java.lang.SecurityException -> L59
            r4.putExtra(r2, r5)     // Catch: java.lang.Exception -> L53 java.lang.SecurityException -> L59
            byte[] r2 = com.huawei.hms.push.c.a(r7, r1)     // Catch: java.lang.Exception -> L53 java.lang.SecurityException -> L59
            r4.putExtra(r1, r2)     // Catch: java.lang.Exception -> L53 java.lang.SecurityException -> L59
            java.lang.String r1 = com.huawei.hms.push.c.c(r7, r0)     // Catch: java.lang.Exception -> L53 java.lang.SecurityException -> L59
            r4.putExtra(r0, r1)     // Catch: java.lang.Exception -> L53 java.lang.SecurityException -> L59
            r0 = 32
            r4.setFlags(r0)     // Catch: java.lang.Exception -> L53 java.lang.SecurityException -> L59
            java.lang.String r0 = "push_package"
            java.lang.String r7 = com.huawei.hms.push.c.c(r7, r0)     // Catch: java.lang.Exception -> L53 java.lang.SecurityException -> L59
            r4.setPackage(r7)     // Catch: java.lang.Exception -> L53 java.lang.SecurityException -> L59
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L53 java.lang.SecurityException -> L59
            r7.<init>()     // Catch: java.lang.Exception -> L53 java.lang.SecurityException -> L59
            java.lang.String r0 = r6.getPackageName()     // Catch: java.lang.Exception -> L53 java.lang.SecurityException -> L59
            r7.append(r0)     // Catch: java.lang.Exception -> L53 java.lang.SecurityException -> L59
            java.lang.String r0 = ".permission.PROCESS_PUSH_MSG"
            r7.append(r0)     // Catch: java.lang.Exception -> L53 java.lang.SecurityException -> L59
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> L53 java.lang.SecurityException -> L59
            r6.sendBroadcast(r4, r7)     // Catch: java.lang.Exception -> L53 java.lang.SecurityException -> L59
            java.lang.String r6 = "send broadcast passby done"
            com.huawei.hms.support.log.HMSLog.i(r3, r6)     // Catch: java.lang.Exception -> L53 java.lang.SecurityException -> L59
            goto L5e
        L53:
            java.lang.String r6 = "send broadcast Exception"
            com.huawei.hms.support.log.HMSLog.i(r3, r6)
            goto L5e
        L59:
            java.lang.String r6 = "send broadcast SecurityException"
            com.huawei.hms.support.log.HMSLog.i(r3, r6)
        L5e:
            return
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r3) {
            r2 = this;
            java.lang.String r0 = "HmsMsgService"
            java.lang.String r1 = "onBind"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            android.os.Messenger r0 = new android.os.Messenger
            com.huawei.hms.support.api.push.service.HmsMsgService$a r1 = new com.huawei.hms.support.api.push.service.HmsMsgService$a
            r1.<init>(r2)
            r0.<init>(r1)
            r2.stopService(r3)
            android.os.IBinder r3 = r0.getBinder()
            return r3
    }

    @Override
    public void onDestroy() {
            r2 = this;
            super.onDestroy()
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Ld
            r0 = 1
            r2.stopForeground(r0)
        Ld:
            return
    }

    @Override
    public int onStartCommand(android.content.Intent r2, int r3, int r4) {
            r1 = this;
            java.lang.String r2 = "HmsMsgService"
            java.lang.String r3 = "Enter onStartCommand."
            com.huawei.hms.support.log.HMSLog.i(r2, r3)
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 26
            if (r2 < r3) goto L38
            android.app.NotificationChannel r2 = new android.app.NotificationChannel
            r3 = 3
            java.lang.String r4 = "HwPushChannelID"
            java.lang.String r0 = "pushKit"
            r2.<init>(r4, r0, r3)
            r3 = 0
            r2.enableVibration(r3)
            java.lang.String r3 = "notification"
            java.lang.Object r3 = r1.getSystemService(r3)
            android.app.NotificationManager r3 = (android.app.NotificationManager) r3
            if (r3 == 0) goto L28
            r3.createNotificationChannel(r2)
        L28:
            android.app.Notification$Builder r2 = new android.app.Notification$Builder
            r2.<init>(r1, r4)
            r3 = 1
            r2.setAutoCancel(r3)
            android.app.Notification r2 = r2.build()
            r1.startForeground(r3, r2)
        L38:
            r2 = 2
            return r2
    }
}

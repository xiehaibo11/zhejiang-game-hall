package com.huawei.hms.push;

public class o {
    public static int a;

    public static android.app.Notification a(android.content.Context r3, com.huawei.hms.push.k r4, int[] r5) {
            android.app.Notification$Builder r0 = new android.app.Notification$Builder
            r0.<init>(r3)
            com.huawei.hms.push.n r1 = com.huawei.hms.push.m.a(r4)
            com.huawei.hms.push.n r2 = com.huawei.hms.push.n.b
            if (r1 != r2) goto L14
            java.lang.String r1 = r4.g()
            com.huawei.hms.push.m.a(r0, r1, r4)
        L14:
            com.huawei.hms.push.l.a(r3, r0, r4)
            b(r4, r0)
            b(r3, r4, r0)
            a(r3, r4, r0)
            a(r0)
            a(r4, r0)
            c(r4, r0)
            android.app.PendingIntent r1 = c(r3, r4, r5)
            r0.setContentIntent(r1)
            android.app.PendingIntent r5 = b(r3, r4, r5)
            r0.setDeleteIntent(r5)
            int r5 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r5 < r1) goto L42
            java.lang.String r5 = "HwPushChannelID"
            r0.setChannelId(r5)
        L42:
            b(r3, r0, r4)
            a(r3, r0, r4)
            android.app.Notification r3 = r0.build()
            return r3
    }

    public static android.content.Intent a(android.content.Context r3, com.huawei.hms.push.k r4, int[] r5, java.lang.String r6, int r7) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.huawei.intent.action.PUSH_DELAY_NOTIFY"
            r0.<init>(r1)
            byte[] r1 = r4.o()
            java.lang.String r2 = "selfshow_info"
            android.content.Intent r1 = r0.putExtra(r2, r1)
            byte[] r4 = r4.y()
            java.lang.String r2 = "selfshow_token"
            android.content.Intent r4 = r1.putExtra(r2, r4)
            java.lang.String r1 = "selfshow_event_id"
            android.content.Intent r4 = r4.putExtra(r1, r6)
            r6 = 0
            r6 = r5[r6]
            java.lang.String r1 = "selfshow_notify_id"
            android.content.Intent r4 = r4.putExtra(r1, r6)
            r6 = 3
            r5 = r5[r6]
            java.lang.String r6 = "selfshow_auto_clear_id"
            android.content.Intent r4 = r4.putExtra(r6, r5)
            java.lang.String r3 = r3.getPackageName()
            android.content.Intent r3 = r4.setPackage(r3)
            r3.setFlags(r7)
            return r0
    }

    public static void a(android.app.Notification.Builder r2) {
            r0 = 1
            r2.setShowWhen(r0)
            long r0 = java.lang.System.currentTimeMillis()
            r2.setWhen(r0)
            return
    }

    public static void a(android.content.Context r3, android.app.Notification.Builder r4, com.huawei.hms.push.k r5) {
            int r0 = com.huawei.hms.android.HwBuildEx.VERSION.EMUI_SDK_INT
            r1 = 11
            if (r0 < r1) goto L53
            boolean r0 = com.huawei.hms.push.q.a(r3)
            if (r0 == 0) goto L53
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r5 = r5.k()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "the package name of notification is:"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "PushSelfShowLog"
            com.huawei.hms.support.log.HMSLog.i(r2, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 != 0) goto L50
            java.lang.String r3 = com.huawei.hms.push.q.a(r3, r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "the app name is:"
            r5.append(r1)
            r5.append(r3)
            java.lang.String r5 = r5.toString()
            com.huawei.hms.support.log.HMSLog.i(r2, r5)
            if (r3 == 0) goto L50
            java.lang.String r5 = "android.extraAppName"
            r0.putCharSequence(r5, r3)
        L50:
            r4.setExtras(r0)
        L53:
            return
    }

    public static void a(android.content.Context r4, android.content.Intent r5, long r6, int r8) {
            java.lang.String r0 = "PushSelfShowLog"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L44
            r1.<init>()     // Catch: java.lang.Exception -> L44
            java.lang.String r2 = "enter setDelayAlarm(intent:"
            r1.append(r2)     // Catch: java.lang.Exception -> L44
            java.lang.String r2 = r5.toURI()     // Catch: java.lang.Exception -> L44
            r1.append(r2)     // Catch: java.lang.Exception -> L44
            java.lang.String r2 = " interval:"
            r1.append(r2)     // Catch: java.lang.Exception -> L44
            r1.append(r6)     // Catch: java.lang.Exception -> L44
            java.lang.String r2 = "ms, context:"
            r1.append(r2)     // Catch: java.lang.Exception -> L44
            r1.append(r4)     // Catch: java.lang.Exception -> L44
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L44
            com.huawei.hms.support.log.HMSLog.d(r0, r1)     // Catch: java.lang.Exception -> L44
            java.lang.String r1 = "alarm"
            java.lang.Object r1 = r4.getSystemService(r1)     // Catch: java.lang.Exception -> L44
            android.app.AlarmManager r1 = (android.app.AlarmManager) r1     // Catch: java.lang.Exception -> L44
            if (r1 == 0) goto L5d
            r2 = 134217728(0x8000000, float:3.85186E-34)
            android.app.PendingIntent r4 = android.app.PendingIntent.getBroadcast(r4, r8, r5, r2)     // Catch: java.lang.Exception -> L44
            r5 = 0
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L44
            long r2 = r2 + r6
            r1.set(r5, r2, r4)     // Catch: java.lang.Exception -> L44
            goto L5d
        L44:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "set DelayAlarm error."
            r5.append(r6)
            java.lang.String r4 = r4.toString()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.huawei.hms.support.log.HMSLog.w(r0, r4)
        L5d:
            return
    }

    public static synchronized void a(android.content.Context r9, com.huawei.hms.push.k r10) {
            java.lang.Class<com.huawei.hms.push.o> r0 = com.huawei.hms.push.o.class
            monitor-enter(r0)
            if (r9 == 0) goto L1a6
            if (r10 != 0) goto L9
            goto L1a6
        L9:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1a3
            r1.<init>()     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r2 = "showNotification, the msg id = "
            r1.append(r2)     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r2 = r10.p()     // Catch: java.lang.Throwable -> L1a3
            r1.append(r2)     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r2 = "PushSelfShowLog"
            com.huawei.hms.support.log.HMSLog.d(r2, r1)     // Catch: java.lang.Throwable -> L1a3
            int r1 = com.huawei.hms.push.o.a     // Catch: java.lang.Throwable -> L1a3
            if (r1 != 0) goto L44
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1a3
            r1.<init>()     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r2 = r9.getPackageName()     // Catch: java.lang.Throwable -> L1a3
            r1.append(r2)     // Catch: java.lang.Throwable -> L1a3
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1a3
            r1.append(r2)     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1a3
            int r1 = r1.hashCode()     // Catch: java.lang.Throwable -> L1a3
            com.huawei.hms.push.o.a = r1     // Catch: java.lang.Throwable -> L1a3
        L44:
            java.lang.String r1 = r10.l()     // Catch: java.lang.Throwable -> L1a3
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L1a3
            r2 = 1
            if (r1 == 0) goto Ld3
            java.lang.String r1 = r10.q()     // Catch: java.lang.Throwable -> L1a3
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L1a3
            if (r3 != 0) goto L76
            int r1 = r1.hashCode()     // Catch: java.lang.Throwable -> L1a3
            r10.a(r1)     // Catch: java.lang.Throwable -> L1a3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1a3
            r3.<init>()     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r4 = "notification msgTag = "
            r3.append(r4)     // Catch: java.lang.Throwable -> L1a3
            r3.append(r1)     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r3 = "PushSelfShowLog"
            com.huawei.hms.support.log.HMSLog.d(r3, r1)     // Catch: java.lang.Throwable -> L1a3
        L76:
            int r1 = r10.s()     // Catch: java.lang.Throwable -> L1a3
            r3 = -1
            if (r1 == r3) goto Lc1
            int r1 = r10.s()     // Catch: java.lang.Throwable -> L1a3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1a3
            r3.<init>()     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r4 = r10.k()     // Catch: java.lang.Throwable -> L1a3
            r3.append(r4)     // Catch: java.lang.Throwable -> L1a3
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1a3
            r3.append(r4)     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L1a3
            int r3 = r3.hashCode()     // Catch: java.lang.Throwable -> L1a3
            int r4 = r3 + 1
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1a3
            r5.<init>()     // Catch: java.lang.Throwable -> L1a3
            int r6 = r10.s()     // Catch: java.lang.Throwable -> L1a3
            r5.append(r6)     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r6 = r10.k()     // Catch: java.lang.Throwable -> L1a3
            r5.append(r6)     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r6 = r9.getPackageName()     // Catch: java.lang.Throwable -> L1a3
            r5.append(r6)     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L1a3
            int r5 = r5.hashCode()     // Catch: java.lang.Throwable -> L1a3
            goto L119
        Lc1:
            int r1 = com.huawei.hms.push.o.a     // Catch: java.lang.Throwable -> L1a3
            int r1 = r1 + r2
            com.huawei.hms.push.o.a = r1     // Catch: java.lang.Throwable -> L1a3
            int r3 = r1 + 1
            com.huawei.hms.push.o.a = r3     // Catch: java.lang.Throwable -> L1a3
            int r4 = r3 + 1
            com.huawei.hms.push.o.a = r4     // Catch: java.lang.Throwable -> L1a3
            int r5 = r4 + 1
            com.huawei.hms.push.o.a = r5     // Catch: java.lang.Throwable -> L1a3
            goto L119
        Ld3:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1a3
            r1.<init>()     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r3 = r10.l()     // Catch: java.lang.Throwable -> L1a3
            r1.append(r3)     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r3 = r10.k()     // Catch: java.lang.Throwable -> L1a3
            r1.append(r3)     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1a3
            int r1 = r1.hashCode()     // Catch: java.lang.Throwable -> L1a3
            int r3 = com.huawei.hms.push.o.a     // Catch: java.lang.Throwable -> L1a3
            int r3 = r3 + r2
            com.huawei.hms.push.o.a = r3     // Catch: java.lang.Throwable -> L1a3
            int r4 = r3 + 1
            com.huawei.hms.push.o.a = r4     // Catch: java.lang.Throwable -> L1a3
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1a3
            r5.<init>()     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r6 = r10.l()     // Catch: java.lang.Throwable -> L1a3
            r5.append(r6)     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r6 = r10.k()     // Catch: java.lang.Throwable -> L1a3
            r5.append(r6)     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r6 = r9.getPackageName()     // Catch: java.lang.Throwable -> L1a3
            r5.append(r6)     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L1a3
            int r5 = r5.hashCode()     // Catch: java.lang.Throwable -> L1a3
        L119:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1a3
            r6.<init>()     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r7 = "notifyId:"
            r6.append(r7)     // Catch: java.lang.Throwable -> L1a3
            r6.append(r1)     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r7 = ",openNotifyId:"
            r6.append(r7)     // Catch: java.lang.Throwable -> L1a3
            r6.append(r3)     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r7 = ",delNotifyId:"
            r6.append(r7)     // Catch: java.lang.Throwable -> L1a3
            r6.append(r4)     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r7 = ",alarmNotifyId:"
            r6.append(r7)     // Catch: java.lang.Throwable -> L1a3
            r6.append(r5)     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r7 = "PushSelfShowLog"
            com.huawei.hms.support.log.HMSLog.d(r7, r6)     // Catch: java.lang.Throwable -> L1a3
            r6 = 4
            int[] r6 = new int[r6]     // Catch: java.lang.Throwable -> L1a3
            r7 = 0
            r6[r7] = r1     // Catch: java.lang.Throwable -> L1a3
            r6[r2] = r3     // Catch: java.lang.Throwable -> L1a3
            r2 = 2
            r6[r2] = r4     // Catch: java.lang.Throwable -> L1a3
            int r2 = r10.f()     // Catch: java.lang.Throwable -> L1a3
            if (r2 <= 0) goto L159
            goto L15a
        L159:
            r5 = r7
        L15a:
            r2 = 3
            r6[r2] = r5     // Catch: java.lang.Throwable -> L1a3
            r3 = 0
            boolean r4 = com.huawei.hms.push.q.a()     // Catch: java.lang.Throwable -> L1a3
            if (r4 == 0) goto L168
            android.app.Notification r3 = a(r9, r10, r6)     // Catch: java.lang.Throwable -> L1a3
        L168:
            java.lang.String r4 = "notification"
            java.lang.Object r4 = r9.getSystemService(r4)     // Catch: java.lang.Throwable -> L1a3
            android.app.NotificationManager r4 = (android.app.NotificationManager) r4     // Catch: java.lang.Throwable -> L1a3
            if (r4 == 0) goto L1a1
            if (r3 == 0) goto L1a1
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L1a3
            r7 = 26
            if (r5 < r7) goto L18e
            java.lang.String r5 = "hms_push_channel"
            int r5 = com.huawei.hms.utils.ResourceLoaderUtil.getStringId(r5)     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r5 = r9.getString(r5)     // Catch: java.lang.Throwable -> L1a3
            android.app.NotificationChannel r7 = new android.app.NotificationChannel     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r8 = "HwPushChannelID"
            r7.<init>(r8, r5, r2)     // Catch: java.lang.Throwable -> L1a3
            r4.createNotificationChannel(r7)     // Catch: java.lang.Throwable -> L1a3
        L18e:
            r4.notify(r1, r3)     // Catch: java.lang.Throwable -> L1a3
            d(r9, r10, r6)     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r1 = r10.p()     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r10 = r10.b()     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r2 = "100"
            com.huawei.hms.push.e.a(r9, r1, r10, r2)     // Catch: java.lang.Throwable -> L1a3
        L1a1:
            monitor-exit(r0)
            return
        L1a3:
            r9 = move-exception
            monitor-exit(r0)
            throw r9
        L1a6:
            monitor-exit(r0)
            return
    }

    public static void a(android.content.Context r0, com.huawei.hms.push.k r1, android.app.Notification.Builder r2) {
            android.graphics.Bitmap r0 = com.huawei.hms.push.l.a(r0, r1)
            if (r0 == 0) goto L9
            r2.setLargeIcon(r0)
        L9:
            return
    }

    public static void a(com.huawei.hms.push.k r2, android.app.Notification.Builder r3) {
            int r2 = r2.e()
            r0 = 0
            r1 = 1
            if (r2 != r1) goto L9
            goto La
        L9:
            r1 = r0
        La:
            r3.setAutoCancel(r1)
            r3.setOngoing(r0)
            return
    }

    public static android.app.PendingIntent b(android.content.Context r2, com.huawei.hms.push.k r3, int[] r4) {
            java.lang.String r0 = "2"
            r1 = 268435456(0x10000000, float:2.524355E-29)
            android.content.Intent r3 = a(r2, r3, r4, r0, r1)
            r0 = 2
            r4 = r4[r0]
            r0 = 134217728(0x8000000, float:3.85186E-34)
            android.app.PendingIntent r2 = android.app.PendingIntent.getBroadcast(r2, r4, r3, r0)
            return r2
    }

    public static void b(android.content.Context r1, android.app.Notification.Builder r2, com.huawei.hms.push.k r3) {
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r0 = "com.huawei.android.pushagent"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L23
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            java.lang.String r3 = r3.k()
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L23
            java.lang.String r0 = "hw_origin_sender_package_name"
            r1.putString(r0, r3)
            r2.setExtras(r1)
        L23:
            return
    }

    public static void b(android.content.Context r1, com.huawei.hms.push.k r2, android.app.Notification.Builder r3) {
            java.lang.String r0 = r2.u()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L19
            android.content.pm.ApplicationInfo r0 = r1.getApplicationInfo()
            int r0 = r0.labelRes
            android.content.res.Resources r1 = r1.getResources()
            java.lang.String r1 = r1.getString(r0)
            goto L1d
        L19:
            java.lang.String r1 = r2.u()
        L1d:
            java.lang.String r2 = r2.j()
            r3.setContentTitle(r1)
            r3.setContentText(r2)
            return
    }

    public static void b(com.huawei.hms.push.k r1, android.app.Notification.Builder r2) {
            java.lang.String r1 = r1.t()
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto Ld
            r2.setSubText(r1)
        Ld:
            return
    }

    public static android.app.PendingIntent c(android.content.Context r2, com.huawei.hms.push.k r3, int[] r4) {
            java.lang.String r0 = "1"
            r1 = 268435456(0x10000000, float:2.524355E-29)
            android.content.Intent r3 = a(r2, r3, r4, r0, r1)
            r0 = 1
            r4 = r4[r0]
            r0 = 134217728(0x8000000, float:3.85186E-34)
            android.app.PendingIntent r2 = android.app.PendingIntent.getBroadcast(r2, r4, r3, r0)
            return r2
    }

    public static void c(com.huawei.hms.push.k r0, android.app.Notification.Builder r1) {
            java.lang.String r0 = r0.x()
            r1.setTicker(r0)
            return
    }

    public static void d(android.content.Context r3, com.huawei.hms.push.k r4, int[] r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setAutoClear time is: "
            r0.append(r1)
            int r1 = r4.f()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PushSelfShowLog"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            int r0 = r4.f()
            if (r0 > 0) goto L21
            return
        L21:
            r0 = 32
            java.lang.String r1 = "-1"
            android.content.Intent r0 = a(r3, r4, r5, r1, r0)
            int r4 = r4.f()
            long r1 = (long) r4
            r4 = 3
            r4 = r5[r4]
            a(r3, r0, r1, r4)
            return
    }
}

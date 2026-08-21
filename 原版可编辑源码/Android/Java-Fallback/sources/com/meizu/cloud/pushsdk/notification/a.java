package com.meizu.cloud.pushsdk.notification;

public abstract class a implements com.meizu.cloud.pushsdk.notification.c {
    protected final android.content.Context a;
    protected final com.meizu.cloud.pushsdk.notification.PushNotificationBuilder b;
    private final android.app.NotificationManager c;
    private final android.os.Handler d;

    protected a(android.content.Context r2, com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r3) {
            r1 = this;
            r1.<init>()
            r1.b = r3
            r1.a = r2
            android.os.Handler r3 = new android.os.Handler
            android.os.Looper r0 = r2.getMainLooper()
            r3.<init>(r0)
            r1.d = r3
            java.lang.String r3 = "notification"
            java.lang.Object r2 = r2.getSystemService(r3)
            android.app.NotificationManager r2 = (android.app.NotificationManager) r2
            r1.c = r2
            return
    }

    private android.app.Notification a(com.meizu.cloud.pushsdk.handler.MessageV3 r3, android.app.PendingIntent r4, android.app.PendingIntent r5, android.app.PendingIntent r6) {
            r2 = this;
            android.app.Notification$Builder r0 = new android.app.Notification$Builder
            android.content.Context r1 = r2.a
            r0.<init>(r1)
            r2.a(r0, r3, r4, r5)
            r2.c(r0, r3)
            r2.b(r0, r3)
            r2.a(r0, r3)
            r2.d(r0, r3)
            boolean r4 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportNotificationBuild()
            if (r4 == 0) goto L21
            android.app.Notification r4 = r0.build()
            goto L25
        L21:
            android.app.Notification r4 = r0.getNotification()
        L25:
            r2.b(r4, r3)
            r2.a(r4, r3)
            r2.a(r4, r3, r6)
            return r4
    }

    private android.app.PendingIntent a(com.meizu.cloud.pushsdk.handler.MessageV3 r5, java.lang.String r6, boolean r7) {
            r4 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "custom://"
            r1.append(r2)
            long r2 = java.lang.System.currentTimeMillis()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.net.Uri r1 = android.net.Uri.parse(r1)
            r0.setData(r1)
            if (r7 == 0) goto L35
            android.content.Context r7 = r4.a
            boolean r7 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportTransmitMessageValue(r7, r6)
            if (r7 == 0) goto L35
            java.lang.String r5 = com.meizu.cloud.pushsdk.handler.d.a(r5)
            java.lang.String r7 = "messageValue"
            r0.putExtra(r7, r5)
            goto L3a
        L35:
            java.lang.String r7 = "pushMessage"
            r0.putExtra(r7, r5)
        L3a:
            java.lang.String r5 = "method"
            java.lang.String r7 = "private"
            r0.putExtra(r5, r7)
            android.content.Context r5 = r4.a
            java.lang.String r7 = "com.meizu.flyme.push.intent.MESSAGE"
            java.lang.String r5 = com.meizu.cloud.pushsdk.util.MzSystemUtils.findReceiver(r5, r7, r6)
            r0.setClassName(r6, r5)
            r0.setAction(r7)
            r5 = 32
            r0.setFlags(r5)
            android.content.Context r5 = r4.a
            r6 = 0
            r7 = 1073741824(0x40000000, float:2.0)
            android.app.PendingIntent r5 = android.app.PendingIntent.getBroadcast(r5, r6, r0, r7)
            return r5
    }

    private void a(int r6, java.lang.String r7, com.meizu.cloud.pushsdk.handler.MessageV3 r8) {
            r5 = this;
            if (r8 == 0) goto L5a
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r0 = r8.getAdvertisementOption()
            if (r0 == 0) goto L5a
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r0 = r8.getAdvertisementOption()
            java.lang.String r0 = r0.getAdPackage()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L17
            goto L5a
        L17:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "save ad and recovery package, uploadDataPackageName:"
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AbstractPushNotification"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
            android.content.Context r0 = r5.a
            com.meizu.cloud.pushsdk.b r0 = com.meizu.cloud.pushsdk.b.a(r0)
            com.meizu.cloud.pushsdk.handler.a.a.a r0 = r0.b()
            if (r0 == 0) goto L57
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r1 = r8.getAdvertisementOption()
            int r1 = r1.getPriorityValidTime()
            r0.a(r8)
            android.app.PendingIntent r2 = r5.c(r8)
            android.app.PendingIntent r3 = r5.e(r8)
            android.app.PendingIntent r4 = r5.f(r8)
            android.app.Notification r2 = r5.a(r8, r2, r3, r4)
            r0.a(r6, r2, r1)
        L57:
            r8.setUploadDataPackageName(r7)
        L5a:
            return
    }

    private void a(android.app.Notification.Builder r3, com.meizu.cloud.pushsdk.handler.MessageV3 r4, android.app.PendingIntent r5, android.app.PendingIntent r6) {
            r2 = this;
            java.lang.String r0 = r4.getTitle()
            r3.setContentTitle(r0)
            java.lang.String r0 = r4.getContent()
            r3.setContentText(r0)
            java.lang.String r0 = r4.getTitle()
            r3.setTicker(r0)
            r0 = 1
            r3.setAutoCancel(r0)
            boolean r1 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportSendNotification()
            if (r1 == 0) goto L22
            r3.setVisibility(r0)
        L22:
            boolean r0 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportSetDrawableSmallIcon()
            if (r0 == 0) goto L5c
            java.lang.String r0 = r4.getUploadDataPackageName()
            android.graphics.drawable.Icon r0 = r2.b(r0)
            if (r0 == 0) goto L36
            r3.setSmallIcon(r0)
            goto L6f
        L36:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "cannot get "
            r0.append(r1)
            java.lang.String r4 = r4.getUploadDataPackageName()
            r0.append(r4)
            java.lang.String r4 = " smallIcon"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.String r0 = "AbstractPushNotification"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r4)
        L55:
            android.content.Context r4 = r2.a
            int r4 = com.meizu.cloud.pushsdk.notification.c.c.l(r4)
            goto L6c
        L5c:
            com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r4 = r2.b
            if (r4 == 0) goto L55
            int r4 = r4.getStatusBarIcon()
            if (r4 == 0) goto L55
            com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r4 = r2.b
            int r4 = r4.getStatusBarIcon()
        L6c:
            r3.setSmallIcon(r4)
        L6f:
            r3.setContentIntent(r5)
            r3.setDeleteIntent(r6)
            return
    }

    private android.graphics.drawable.Icon b(java.lang.String r6) {
            r5 = this;
            java.lang.String r0 = "AbstractPushNotification"
            r1 = 0
            android.content.Context r2 = r5.a     // Catch: java.lang.Exception -> L39
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> L39
            android.content.res.Resources r2 = r2.getResourcesForApplication(r6)     // Catch: java.lang.Exception -> L39
            java.lang.String r3 = "mz_push_notification_small_icon"
            java.lang.String r4 = "drawable"
            int r2 = r2.getIdentifier(r3, r4, r6)     // Catch: java.lang.Exception -> L39
            if (r2 == 0) goto L5a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L39
            r3.<init>()     // Catch: java.lang.Exception -> L39
            java.lang.String r4 = "get "
            r3.append(r4)     // Catch: java.lang.Exception -> L39
            r3.append(r6)     // Catch: java.lang.Exception -> L39
            java.lang.String r4 = " smallIcon success resId "
            r3.append(r4)     // Catch: java.lang.Exception -> L39
            r3.append(r2)     // Catch: java.lang.Exception -> L39
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L39
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r3)     // Catch: java.lang.Exception -> L39
            android.graphics.drawable.Icon r6 = android.graphics.drawable.Icon.createWithResource(r6, r2)     // Catch: java.lang.Exception -> L39
            r1 = r6
            goto L5a
        L39:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "cannot load smallIcon form package "
            r3.append(r4)
            r3.append(r6)
            java.lang.String r6 = " Error message "
            r3.append(r6)
            java.lang.String r6 = r2.getMessage()
            r3.append(r6)
            java.lang.String r6 = r3.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r6)
        L5a:
            return r1
    }

    private java.lang.String b(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            r0 = 0
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            r1 = 0
            android.content.pm.ApplicationInfo r1 = r3.getApplicationInfo(r4, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            if (r1 == 0) goto L31
            java.lang.CharSequence r3 = r3.getApplicationLabel(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            if (r3 == 0) goto L31
            java.lang.String r3 = (java.lang.String) r3     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            r0 = r3
            goto L31
        L16:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "can not find "
            r3.append(r1)
            r3.append(r4)
            java.lang.String r4 = " application info"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "AbstractPushNotification"
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r3)
        L31:
            return r0
    }

    private void b(android.app.Notification r6, com.meizu.cloud.pushsdk.handler.MessageV3 r7) {
            r5 = this;
            r0 = 1
            com.meizu.cloud.pushsdk.notification.c.b.a(r6, r0)
            android.app.PendingIntent r0 = r5.g(r7)
            com.meizu.cloud.pushsdk.notification.c.b.a(r6, r0)
            android.os.Bundle r0 = r6.extras
            java.lang.String r1 = r7.getUploadDataPackageName()
            java.lang.String r2 = "android.originalPackageName"
            r0.putString(r2, r1)
            android.os.Bundle r0 = r6.extras
            java.lang.String r1 = r5.a(r7)
            java.lang.String r2 = "android.flymeNotificationSetting"
            r0.putString(r2, r1)
            android.os.Bundle r0 = r6.extras
            java.lang.String r1 = r7.getTaskId()
            java.lang.String r2 = "notification_extra_task_id"
            r0.putString(r2, r1)
            android.os.Bundle r0 = r6.extras
            java.lang.String r1 = r7.getSeqId()
            java.lang.String r2 = "notification_extra_seq_id"
            r0.putString(r2, r1)
            android.os.Bundle r0 = r6.extras
            java.lang.String r1 = r7.getDeviceId()
            java.lang.String r2 = "notification_extra_device_id"
            r0.putString(r2, r1)
            android.os.Bundle r0 = r6.extras
            java.lang.String r1 = r7.getPushTimestamp()
            java.lang.String r2 = "notification_extra_push_timestamp"
            r0.putString(r2, r1)
            com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r0 = r5.b
            java.lang.String r0 = r0.getAppLabel()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r1 = "android.substName"
            java.lang.String r2 = "AbstractPushNotification"
            if (r0 != 0) goto L83
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "set app label "
            r7.append(r0)
            com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r0 = r5.b
            java.lang.String r0 = r0.getAppLabel()
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r7)
            android.os.Bundle r6 = r6.extras
            com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r7 = r5.b
            java.lang.String r7 = r7.getAppLabel()
            r6.putString(r1, r7)
            goto Lb8
        L83:
            android.content.Context r0 = r5.a
            java.lang.String r3 = r7.getUploadDataPackageName()
            java.lang.String r0 = r5.b(r0, r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "current package "
            r3.append(r4)
            java.lang.String r7 = r7.getUploadDataPackageName()
            r3.append(r7)
            java.lang.String r7 = " label is "
            r3.append(r7)
            r3.append(r0)
            java.lang.String r7 = r3.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r7)
            boolean r7 = android.text.TextUtils.isEmpty(r0)
            if (r7 != 0) goto Lb8
            android.os.Bundle r6 = r6.extras
            r6.putString(r1, r0)
        Lb8:
            return
    }

    private android.app.PendingIntent c(com.meizu.cloud.pushsdk.handler.MessageV3 r3) {
            r2 = this;
            boolean r0 = r2.d(r3)
            if (r0 == 0) goto L10
            java.lang.String r0 = r3.getPackageName()
            r1 = 0
        Lb:
            android.app.PendingIntent r3 = r2.a(r3, r0, r1)
            return r3
        L10:
            java.lang.String r0 = r3.getUploadDataPackageName()
            r1 = 1
            goto Lb
    }

    private void c(android.app.Notification.Builder r8, com.meizu.cloud.pushsdk.handler.MessageV3 r9) {
            r7 = this;
            com.meizu.cloud.pushsdk.notification.model.AdvanceSetting r0 = r9.getAdvanceSetting()
            com.meizu.cloud.pushsdk.notification.model.AdvanceSettingEx r9 = r9.getAdvanceSettingEx()
            if (r0 != 0) goto Lb
            return
        Lb:
            r1 = 0
            r2 = 1
            java.lang.String r3 = "AbstractPushNotification"
            if (r9 == 0) goto L42
            java.lang.String r4 = r9.getSoundTitle()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L42
            android.content.Context r4 = r7.a
            java.lang.String r5 = r9.getSoundTitle()
            android.net.Uri r4 = com.meizu.cloud.pushsdk.notification.c.b.b(r4, r5)
            if (r4 == 0) goto L40
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "advance setting builder, sound:"
            r5.append(r6)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r5)
            r8.setSound(r4)
            r4 = r1
            goto L4a
        L40:
            r4 = r2
            goto L4a
        L42:
            com.meizu.cloud.pushsdk.notification.model.NotifyType r4 = r0.getNotifyType()
            boolean r4 = r4.isSound()
        L4a:
            com.meizu.cloud.pushsdk.notification.model.NotifyType r5 = r0.getNotifyType()
            if (r5 == 0) goto L88
            com.meizu.cloud.pushsdk.notification.model.NotifyType r5 = r0.getNotifyType()
            boolean r5 = r5.isVibrate()
            com.meizu.cloud.pushsdk.notification.model.NotifyType r6 = r0.getNotifyType()
            boolean r6 = r6.isLights()
            if (r5 != 0) goto L66
            if (r6 != 0) goto L66
            if (r4 == 0) goto L88
        L66:
            if (r5 == 0) goto L69
            r1 = 2
        L69:
            if (r6 == 0) goto L6d
            r1 = r1 | 4
        L6d:
            if (r4 == 0) goto L71
            r1 = r1 | 1
        L71:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "advance setting builder, defaults:"
            r4.append(r5)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r4)
            r8.setDefaults(r1)
        L88:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r4 = "advance setting builder, ongoing:"
            r1.append(r4)
            boolean r4 = r0.isClearNotification()
            r4 = r4 ^ r2
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r1)
            boolean r0 = r0.isClearNotification()
            r0 = r0 ^ r2
            r8.setOngoing(r0)
            if (r9 == 0) goto Ld0
            boolean r0 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportNotificationBuild()
            if (r0 == 0) goto Ld0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "advance setting builder, priority:"
            r0.append(r1)
            int r1 = r9.getPriorityDisplay()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r0)
            int r9 = r9.getPriorityDisplay()
            r8.setPriority(r9)
        Ld0:
            return
    }

    private void d(android.app.Notification.Builder r10, com.meizu.cloud.pushsdk.handler.MessageV3 r11) {
            r9 = this;
            boolean r0 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportNotificationChannel()
            if (r0 != 0) goto L7
            return
        L7:
            com.meizu.cloud.pushsdk.notification.model.AdvanceSetting r0 = r11.getAdvanceSetting()
            com.meizu.cloud.pushsdk.notification.model.AdvanceSettingEx r11 = r11.getAdvanceSettingEx()
            if (r11 == 0) goto L16
            int r1 = r11.getPriorityDisplay()
            goto L17
        L16:
            r1 = 0
        L17:
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 29
            r4 = 1
            if (r2 < r3) goto L2b
            boolean r2 = r0.isHeadUpNotification()
            if (r2 == 0) goto L2b
            int r2 = r11.getPriorityDisplay()
            if (r2 >= r4) goto L2b
            r1 = r4
        L2b:
            r2 = -2
            r3 = 2
            if (r1 == r2) goto L4d
            r2 = -1
            if (r1 == r2) goto L48
            if (r1 == r4) goto L42
            if (r1 == r3) goto L3c
            r3 = 3
            java.lang.String r1 = "mz_push_notification_channel"
            java.lang.String r2 = "MEIZUPUSH"
            goto L52
        L3c:
            r3 = 5
            java.lang.String r1 = "mz_push_notification_channel_max"
            java.lang.String r2 = "MEIZUPUSHMAX"
            goto L52
        L42:
            r3 = 4
            java.lang.String r1 = "mz_push_notification_channel_high"
            java.lang.String r2 = "MEIZUPUSHHIGH"
            goto L52
        L48:
            java.lang.String r1 = "mz_push_notification_channel_low"
            java.lang.String r2 = "MEIZUPUSHLOW"
            goto L52
        L4d:
            java.lang.String r1 = "mz_push_notification_channel_min"
            java.lang.String r2 = "MEIZUPUSHMIN"
            r3 = r4
        L52:
            java.lang.String r5 = r11.getSoundTitle()
            r6 = 0
            if (r5 == 0) goto L64
            android.content.Context r5 = r9.a
            java.lang.String r7 = r11.getSoundTitle()
            android.net.Uri r5 = com.meizu.cloud.pushsdk.notification.c.b.b(r5, r7)
            goto L65
        L64:
            r5 = r6
        L65:
            com.meizu.cloud.pushsdk.notification.model.NotifyType r7 = r0.getNotifyType()
            boolean r7 = r7.isSound()
            if (r7 != 0) goto L98
            java.lang.String r7 = r11.getSoundTitle()
            if (r7 != 0) goto L98
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r1)
            java.lang.String r1 = "_mute"
            r7.append(r1)
            java.lang.String r1 = r7.toString()
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r2)
            java.lang.String r2 = "_MUTE"
            r7.append(r2)
            java.lang.String r2 = r7.toString()
            goto Ld1
        L98:
            if (r5 == 0) goto Ld1
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r1)
            java.lang.String r1 = "_"
            r7.append(r1)
            java.lang.String r8 = r11.getSoundTitle()
            java.lang.String r8 = r8.toLowerCase()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r8.append(r2)
            r8.append(r1)
            java.lang.String r1 = r11.getSoundTitle()
            java.lang.String r1 = r1.toUpperCase()
            r8.append(r1)
            java.lang.String r2 = r8.toString()
            r1 = r7
        Ld1:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "notification channel builder, channelId: "
            r7.append(r8)
            r7.append(r1)
            java.lang.String r8 = ", channelName: "
            r7.append(r8)
            r7.append(r2)
            java.lang.String r8 = ", importance:"
            r7.append(r8)
            r7.append(r3)
            java.lang.String r8 = ", sound: "
            r7.append(r8)
            r7.append(r5)
            java.lang.String r7 = r7.toString()
            java.lang.String r8 = "AbstractPushNotification"
            com.meizu.cloud.pushinternal.DebugLogger.e(r8, r7)
            android.app.NotificationChannel r7 = new android.app.NotificationChannel
            r7.<init>(r1, r2, r3)
            r7.enableLights(r4)
            r2 = -16711936(0xffffffffff00ff00, float:-1.7146522E38)
            r7.setLightColor(r2)
            r7.setShowBadge(r4)
            r7.enableVibration(r4)
            com.meizu.cloud.pushsdk.notification.model.NotifyType r0 = r0.getNotifyType()
            boolean r0 = r0.isSound()
            if (r0 != 0) goto L129
            java.lang.String r11 = r11.getSoundTitle()
            if (r11 != 0) goto L129
            android.media.AudioAttributes r11 = android.app.Notification.AUDIO_ATTRIBUTES_DEFAULT
            r7.setSound(r6, r11)
            goto L130
        L129:
            if (r5 == 0) goto L130
            android.media.AudioAttributes r11 = android.app.Notification.AUDIO_ATTRIBUTES_DEFAULT
            r7.setSound(r5, r11)
        L130:
            android.app.NotificationManager r11 = r9.c
            r11.createNotificationChannel(r7)
            r10.setChannelId(r1)
            return
    }

    private boolean d(com.meizu.cloud.pushsdk.handler.MessageV3 r4) {
            r3 = this;
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r0 = r4.getAdvertisementOption()
            r1 = 1
            if (r0 == 0) goto L16
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r0 = r4.getAdvertisementOption()
            java.lang.String r0 = r0.getAdPackage()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L16
            return r1
        L16:
            boolean r0 = r4.getWhiteList()
            if (r0 == 0) goto L2b
            android.content.Context r0 = r3.a
            java.lang.String r4 = r4.getUploadDataPackageName()
            java.lang.String r2 = "com.meizu.flyme.push.intent.MESSAGE"
            boolean r4 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isExistReceiver(r0, r4, r2)
            if (r4 != 0) goto L2b
            return r1
        L2b:
            r4 = 0
            return r4
    }

    private android.app.PendingIntent e(com.meizu.cloud.pushsdk.handler.MessageV3 r5) {
            r4 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "custom://"
            r1.append(r2)
            long r2 = java.lang.System.currentTimeMillis()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.net.Uri r1 = android.net.Uri.parse(r1)
            r0.setData(r1)
            java.lang.String r1 = "pushMessage"
            r0.putExtra(r1, r5)
            java.lang.String r1 = "method"
            java.lang.String r2 = "notification_delete"
            r0.putExtra(r1, r2)
            java.lang.String r1 = r5.getPackageName()
            android.content.Context r2 = r4.a
            java.lang.String r5 = r5.getPackageName()
            java.lang.String r3 = "com.meizu.flyme.push.intent.MESSAGE"
            java.lang.String r5 = com.meizu.cloud.pushsdk.util.MzSystemUtils.findReceiver(r2, r3, r5)
            r0.setClassName(r1, r5)
            r0.setAction(r3)
            android.content.Context r5 = r4.a
            r1 = 0
            r2 = 1073741824(0x40000000, float:2.0)
            android.app.PendingIntent r5 = android.app.PendingIntent.getBroadcast(r5, r1, r0, r2)
            return r5
    }

    private android.app.PendingIntent f(com.meizu.cloud.pushsdk.handler.MessageV3 r5) {
            r4 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "custom://"
            r1.append(r2)
            long r2 = java.lang.System.currentTimeMillis()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.net.Uri r1 = android.net.Uri.parse(r1)
            r0.setData(r1)
            java.lang.String r1 = "pushMessage"
            r0.putExtra(r1, r5)
            java.lang.String r1 = "method"
            java.lang.String r2 = "notification_close"
            r0.putExtra(r1, r2)
            java.lang.String r1 = r5.getPackageName()
            android.content.Context r2 = r4.a
            java.lang.String r5 = r5.getPackageName()
            java.lang.String r3 = "com.meizu.flyme.push.intent.MESSAGE"
            java.lang.String r5 = com.meizu.cloud.pushsdk.util.MzSystemUtils.findReceiver(r2, r3, r5)
            r0.setClassName(r1, r5)
            r0.setAction(r3)
            android.content.Context r5 = r4.a
            r1 = 0
            r2 = 1073741824(0x40000000, float:2.0)
            android.app.PendingIntent r5 = android.app.PendingIntent.getBroadcast(r5, r1, r0, r2)
            return r5
    }

    private android.app.PendingIntent g(com.meizu.cloud.pushsdk.handler.MessageV3 r5) {
            r4 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "custom://"
            r1.append(r2)
            long r2 = java.lang.System.currentTimeMillis()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.net.Uri r1 = android.net.Uri.parse(r1)
            r0.setData(r1)
            java.lang.String r1 = r5.getNotificationMessage()
            java.lang.String r2 = "notification_state_message"
            r0.putExtra(r2, r1)
            java.lang.String r1 = r5.getTaskId()
            java.lang.String r2 = "notification_extra_task_id"
            r0.putExtra(r2, r1)
            java.lang.String r1 = r5.getSeqId()
            java.lang.String r2 = "notification_extra_seq_id"
            r0.putExtra(r2, r1)
            java.lang.String r1 = r5.getDeviceId()
            java.lang.String r2 = "notification_extra_device_id"
            r0.putExtra(r2, r1)
            java.lang.String r1 = r5.getPushTimestamp()
            java.lang.String r2 = "notification_extra_push_timestamp"
            r0.putExtra(r2, r1)
            java.lang.String r1 = r5.getUploadDataPackageName()
            java.lang.String r2 = "notification_extra_show_package_name"
            r0.putExtra(r2, r1)
            boolean r1 = r5.getWhiteList()
            java.lang.String r2 = "mz_push_white_list"
            r0.putExtra(r2, r1)
            long r1 = r5.getDelayedReportMillis()
            java.lang.String r3 = "mz_push_delayed_report_millis"
            r0.putExtra(r3, r1)
            java.lang.String r1 = "method"
            java.lang.String r2 = "notification_state"
            r0.putExtra(r1, r2)
            android.content.Context r1 = r4.a
            java.lang.String r2 = r5.getPackageName()
            java.lang.String r3 = "com.meizu.flyme.push.intent.MESSAGE"
            java.lang.String r1 = com.meizu.cloud.pushsdk.util.MzSystemUtils.findReceiver(r1, r3, r2)
            java.lang.String r5 = r5.getPackageName()
            r0.setClassName(r5, r1)
            r0.setAction(r3)
            android.content.Context r5 = r4.a
            r1 = 0
            r2 = 1073741824(0x40000000, float:2.0)
            android.app.PendingIntent r5 = android.app.PendingIntent.getBroadcast(r5, r1, r0, r2)
            return r5
    }

    private java.lang.String h(com.meizu.cloud.pushsdk.handler.MessageV3 r5) {
            r4 = this;
            if (r5 == 0) goto L54
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r0 = r5.getAdvertisementOption()
            if (r0 == 0) goto L54
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r0 = r5.getAdvertisementOption()
            java.lang.String r0 = r0.getAdPackage()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L17
            goto L54
        L17:
            java.lang.String r0 = r5.getUploadDataPackageName()
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r1 = r5.getAdvertisementOption()
            java.lang.String r1 = r1.getAdPackage()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "again show old ad and replace package, uploadDataPackageName:"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r3 = ", adPackageName:"
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "AbstractPushNotification"
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r2)
            android.content.Context r2 = r4.a
            com.meizu.cloud.pushsdk.b r2 = com.meizu.cloud.pushsdk.b.a(r2)
            com.meizu.cloud.pushsdk.handler.a.a.a r2 = r2.b()
            if (r2 == 0) goto L50
            r2.a()
        L50:
            r5.setUploadDataPackageName(r1)
            return r0
        L54:
            r5 = 0
            return r5
    }

    protected android.graphics.Bitmap a(android.content.Context r7, java.lang.String r8) {
            r6 = this;
            android.content.pm.PackageManager r0 = r7.getPackageManager()     // Catch: java.lang.Exception -> L47
            android.graphics.drawable.Drawable r8 = r0.getApplicationIcon(r8)     // Catch: java.lang.Exception -> L47
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L47
            r1 = 26
            r2 = 0
            if (r0 < r1) goto L13
            boolean r0 = r8 instanceof android.graphics.drawable.BitmapDrawable     // Catch: java.lang.Exception -> L47
            if (r0 == 0) goto L16
        L13:
            android.graphics.drawable.BitmapDrawable r8 = (android.graphics.drawable.BitmapDrawable) r8     // Catch: java.lang.Exception -> L47
            goto L40
        L16:
            boolean r0 = r8 instanceof android.graphics.drawable.AdaptiveIconDrawable     // Catch: java.lang.Exception -> L47
            if (r0 == 0) goto L3f
            int r0 = r8.getIntrinsicWidth()     // Catch: java.lang.Exception -> L47
            int r1 = r8.getIntrinsicHeight()     // Catch: java.lang.Exception -> L47
            android.graphics.Bitmap$Config r3 = android.graphics.Bitmap.Config.ARGB_8888     // Catch: java.lang.Exception -> L47
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r0, r1, r3)     // Catch: java.lang.Exception -> L47
            android.graphics.Canvas r1 = new android.graphics.Canvas     // Catch: java.lang.Exception -> L47
            r1.<init>(r0)     // Catch: java.lang.Exception -> L47
            int r3 = r1.getWidth()     // Catch: java.lang.Exception -> L47
            int r4 = r1.getHeight()     // Catch: java.lang.Exception -> L47
            r5 = 0
            r8.setBounds(r5, r5, r3, r4)     // Catch: java.lang.Exception -> L47
            r8.draw(r1)     // Catch: java.lang.Exception -> L47
            r8 = r2
            r2 = r0
            goto L40
        L3f:
            r8 = r2
        L40:
            if (r2 != 0) goto L74
            android.graphics.Bitmap r2 = r8.getBitmap()     // Catch: java.lang.Exception -> L47
            goto L74
        L47:
            r8 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "get app icon error "
            r0.append(r1)
            java.lang.String r8 = r8.getMessage()
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            java.lang.String r0 = "AbstractPushNotification"
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r8)
            android.content.pm.ApplicationInfo r8 = r7.getApplicationInfo()
            android.content.pm.PackageManager r7 = r7.getPackageManager()
            android.graphics.drawable.Drawable r7 = r8.loadIcon(r7)
            android.graphics.drawable.BitmapDrawable r7 = (android.graphics.drawable.BitmapDrawable) r7
            android.graphics.Bitmap r2 = r7.getBitmap()
        L74:
            return r2
    }

    protected android.graphics.Bitmap a(java.lang.String r5) {
            r4 = this;
            com.meizu.cloud.pushsdk.c.a.b$b r0 = com.meizu.cloud.pushsdk.c.a.a(r5)
            com.meizu.cloud.pushsdk.c.a.b r0 = r0.a()
            com.meizu.cloud.pushsdk.c.a.c r0 = r0.b()
            boolean r1 = r0.b()
            java.lang.String r2 = "ANRequest On other Thread down load largeIcon "
            java.lang.String r3 = "AbstractPushNotification"
            if (r1 == 0) goto L48
            java.lang.Object r1 = r0.a()
            if (r1 == 0) goto L48
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = "image "
            r1.append(r5)
            java.lang.Object r5 = r0.a()
            if (r5 == 0) goto L35
            java.lang.String r5 = "success"
            goto L37
        L35:
            java.lang.String r5 = "fail"
        L37:
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r5)
            java.lang.Object r5 = r0.a()
            android.graphics.Bitmap r5 = (android.graphics.Bitmap) r5
            return r5
        L48:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            r0.append(r5)
            java.lang.String r5 = "image fail"
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r5)
            r5 = 0
            return r5
    }

    protected java.lang.String a(com.meizu.cloud.pushsdk.handler.MessageV3 r5) {
            r4 = this;
            java.lang.String r0 = "AbstractPushNotification"
            r1 = 0
            java.lang.String r2 = r5.getNotificationMessage()     // Catch: java.lang.Exception -> L2a
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L2a
            if (r2 != 0) goto L43
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2a
            java.lang.String r5 = r5.getNotificationMessage()     // Catch: java.lang.Exception -> L2a
            r2.<init>(r5)     // Catch: java.lang.Exception -> L2a
            java.lang.String r5 = "data"
            org.json.JSONObject r5 = r2.getJSONObject(r5)     // Catch: java.lang.Exception -> L2a
            java.lang.String r2 = "extra"
            org.json.JSONObject r5 = r5.getJSONObject(r2)     // Catch: java.lang.Exception -> L2a
            java.lang.String r2 = "fns"
            java.lang.String r5 = r5.getString(r2)     // Catch: java.lang.Exception -> L2a
            r1 = r5
            goto L43
        L2a:
            r5 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "parse flyme notification setting error "
            r2.append(r3)
            java.lang.String r5 = r5.getMessage()
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r5)
        L43:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r2 = "current FlymeGreen notification setting is "
            r5.append(r2)
            r5.append(r1)
            java.lang.String r5 = r5.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r5)
            return r1
    }

    protected void a(android.app.Notification.Builder r1, com.meizu.cloud.pushsdk.handler.MessageV3 r2) {
            r0 = this;
            return
    }

    protected void a(android.app.Notification r1, com.meizu.cloud.pushsdk.handler.MessageV3 r2) {
            r0 = this;
            return
    }

    protected void a(android.app.Notification r1, com.meizu.cloud.pushsdk.handler.MessageV3 r2, android.app.PendingIntent r3) {
            r0 = this;
            return
    }

    protected boolean a() {
            r2 = this;
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            android.content.Context r1 = r2.a
            android.os.Looper r1 = r1.getMainLooper()
            java.lang.Thread r1 = r1.getThread()
            if (r0 != r1) goto L12
            r0 = 1
            goto L13
        L12:
            r0 = 0
        L13:
            return r0
    }

    protected void b(android.app.Notification.Builder r1, com.meizu.cloud.pushsdk.handler.MessageV3 r2) {
            r0 = this;
            return
    }

    @Override
    public void b(com.meizu.cloud.pushsdk.handler.MessageV3 r9) {
            r8 = this;
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r0 = r9.getAdvertisementOption()
            if (r0 == 0) goto L19
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r0 = r9.getAdvertisementOption()
            java.lang.String r0 = r0.getAdPackage()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L19
            java.lang.String r0 = r8.h(r9)
            goto L1a
        L19:
            r0 = 0
        L1a:
            android.app.PendingIntent r1 = r8.c(r9)
            android.app.PendingIntent r2 = r8.e(r9)
            android.app.PendingIntent r3 = r8.f(r9)
            android.app.Notification r1 = r8.a(r9, r1, r2, r3)
            long r2 = java.lang.System.currentTimeMillis()
            int r2 = (int) r2
            int r2 = java.lang.Math.abs(r2)
            com.meizu.cloud.pushsdk.notification.model.a r3 = com.meizu.cloud.pushsdk.notification.model.a.a(r9)
            java.lang.String r4 = "AbstractPushNotification"
            if (r3 == 0) goto Lde
            int r5 = r3.a()
            if (r5 == 0) goto Lde
            int r2 = r3.a()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "server notify id "
            r5.append(r6)
            r5.append(r2)
            java.lang.String r5 = r5.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r5)
            java.lang.String r5 = r3.b()
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto Lde
            android.content.Context r5 = r8.a
            java.lang.String r6 = r9.getUploadDataPackageName()
            java.lang.String r7 = r3.b()
            int r5 = com.meizu.cloud.pushsdk.util.b.i(r5, r6, r7)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "notifyKey "
            r6.append(r7)
            java.lang.String r7 = r3.b()
            r6.append(r7)
            java.lang.String r7 = " preference notifyId is "
            r6.append(r7)
            r6.append(r5)
            java.lang.String r6 = r6.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r6)
            if (r5 == 0) goto Lb1
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "use preference notifyId "
            r6.append(r7)
            r6.append(r5)
            java.lang.String r7 = " and cancel it"
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r6)
            android.app.NotificationManager r6 = r8.c
            r6.cancel(r5)
        Lb1:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "store new notifyId "
            r5.append(r6)
            r5.append(r2)
            java.lang.String r6 = " by notifyKey "
            r5.append(r6)
            java.lang.String r6 = r3.b()
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r5)
            android.content.Context r5 = r8.a
            java.lang.String r6 = r9.getUploadDataPackageName()
            java.lang.String r3 = r3.b()
            com.meizu.cloud.pushsdk.util.b.b(r5, r6, r3, r2)
        Lde:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "current notify id "
            r3.append(r5)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r3)
            boolean r3 = r9.isDiscard()
            if (r3 == 0) goto L1d8
            android.content.Context r3 = r8.a
            java.lang.String r5 = r9.getPackageName()
            int r3 = com.meizu.cloud.pushsdk.util.b.c(r3, r5)
            if (r3 != 0) goto L121
            android.content.Context r3 = r8.a
            java.lang.String r5 = r9.getPackageName()
            com.meizu.cloud.pushsdk.util.b.a(r3, r5, r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "no notification show so put notification id "
            r3.append(r5)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r4, r3)
        L121:
            java.lang.String r3 = r9.getTaskId()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r5 = "current package "
            if (r3 != 0) goto L1ae
            android.content.Context r3 = r8.a
            java.lang.String r6 = r9.getPackageName()
            int r3 = com.meizu.cloud.pushsdk.util.b.d(r3, r6)
            if (r3 != 0) goto L14f
            android.content.Context r3 = r8.a
            java.lang.String r6 = r9.getPackageName()
            java.lang.String r7 = r9.getTaskId()
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)
            int r7 = r7.intValue()
            com.meizu.cloud.pushsdk.util.b.b(r3, r6, r7)
            goto L1ae
        L14f:
            java.lang.String r2 = r9.getTaskId()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            int r2 = r2.intValue()
            android.content.Context r3 = r8.a
            java.lang.String r6 = r9.getPackageName()
            int r3 = com.meizu.cloud.pushsdk.util.b.d(r3, r6)
            if (r2 >= r3) goto L18f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r1 = r9.getPackageName()
            r0.append(r1)
            java.lang.String r1 = " task id "
            r0.append(r1)
            java.lang.String r9 = r9.getTaskId()
            r0.append(r9)
            java.lang.String r9 = " don't show notification"
            r0.append(r9)
            java.lang.String r9 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r4, r9)
            return
        L18f:
            android.content.Context r2 = r8.a
            java.lang.String r3 = r9.getPackageName()
            java.lang.String r6 = r9.getTaskId()
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            int r6 = r6.intValue()
            com.meizu.cloud.pushsdk.util.b.b(r2, r3, r6)
            android.content.Context r2 = r8.a
            java.lang.String r3 = r9.getPackageName()
            int r2 = com.meizu.cloud.pushsdk.util.b.c(r2, r3)
        L1ae:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r5)
            java.lang.String r5 = r9.getPackageName()
            r3.append(r5)
            java.lang.String r5 = " notificationId="
            r3.append(r5)
            r3.append(r2)
            java.lang.String r5 = " taskId="
            r3.append(r5)
            java.lang.String r5 = r9.getTaskId()
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r4, r3)
        L1d8:
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r3 = r9.getAdvertisementOption()
            if (r3 == 0) goto L1ef
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r3 = r9.getAdvertisementOption()
            java.lang.String r3 = r3.getAdPackage()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L1ef
            r8.a(r2, r0, r9)
        L1ef:
            android.app.NotificationManager r9 = r8.c
            r9.notify(r2, r1)
            return
    }
}

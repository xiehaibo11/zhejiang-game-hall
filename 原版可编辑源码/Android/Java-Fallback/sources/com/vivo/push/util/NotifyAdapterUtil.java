package com.vivo.push.util;

public class NotifyAdapterUtil {
    private static final int HIDE_TITLE = 1;
    public static final int NOTIFY_MULTITERM_STYLE = 1;
    public static final int NOTIFY_SINGLE_STYLE = 0;
    public static final java.lang.String PRIMARY_CHANNEL = "vivo_push_channel";
    private static final java.lang.String PUSH_EN = "PUSH";
    private static final java.lang.String PUSH_ID = "pushId";
    private static final java.lang.String PUSH_ZH = "推送通知";
    private static final java.lang.String TAG = "NotifyManager";
    private static android.app.NotificationManager sNotificationManager = null;
    private static int sNotifyId = 20000000;

    static {
            return
    }

    public NotifyAdapterUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void cancelNotify(android.content.Context r1) {
            int r0 = com.vivo.push.util.NotifyAdapterUtil.sNotifyId
            cancelNotify(r1, r0)
            return
    }

    private static boolean cancelNotify(android.content.Context r0, int r1) {
            initAdapter(r0)
            android.app.NotificationManager r0 = com.vivo.push.util.NotifyAdapterUtil.sNotificationManager
            if (r0 == 0) goto Lc
            r0.cancel(r1)
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    private static synchronized void initAdapter(android.content.Context r4) {
            java.lang.Class<com.vivo.push.util.NotifyAdapterUtil> r0 = com.vivo.push.util.NotifyAdapterUtil.class
            monitor-enter(r0)
            android.app.NotificationManager r1 = com.vivo.push.util.NotifyAdapterUtil.sNotificationManager     // Catch: java.lang.Throwable -> L65
            if (r1 != 0) goto L11
            java.lang.String r1 = "notification"
            java.lang.Object r1 = r4.getSystemService(r1)     // Catch: java.lang.Throwable -> L65
            android.app.NotificationManager r1 = (android.app.NotificationManager) r1     // Catch: java.lang.Throwable -> L65
            com.vivo.push.util.NotifyAdapterUtil.sNotificationManager = r1     // Catch: java.lang.Throwable -> L65
        L11:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L65
            r2 = 26
            if (r1 < r2) goto L63
            android.app.NotificationManager r1 = com.vivo.push.util.NotifyAdapterUtil.sNotificationManager     // Catch: java.lang.Throwable -> L65
            if (r1 == 0) goto L63
            java.lang.String r1 = "default"
            android.app.NotificationManager r2 = com.vivo.push.util.NotifyAdapterUtil.sNotificationManager     // Catch: java.lang.Throwable -> L65
            android.app.NotificationChannel r2 = r2.getNotificationChannel(r1)     // Catch: java.lang.Throwable -> L65
            if (r2 == 0) goto L3e
            java.lang.CharSequence r2 = r2.getName()     // Catch: java.lang.Throwable -> L65
            java.lang.String r3 = "推送通知"
            boolean r3 = r3.equals(r2)     // Catch: java.lang.Throwable -> L65
            if (r3 != 0) goto L39
            java.lang.String r3 = "PUSH"
            boolean r2 = r3.equals(r2)     // Catch: java.lang.Throwable -> L65
            if (r2 == 0) goto L3e
        L39:
            android.app.NotificationManager r2 = com.vivo.push.util.NotifyAdapterUtil.sNotificationManager     // Catch: java.lang.Throwable -> L65
            r2.deleteNotificationChannel(r1)     // Catch: java.lang.Throwable -> L65
        L3e:
            boolean r4 = isZh(r4)     // Catch: java.lang.Throwable -> L65
            if (r4 == 0) goto L47
            java.lang.String r4 = "推送通知"
            goto L49
        L47:
            java.lang.String r4 = "PUSH"
        L49:
            android.app.NotificationChannel r1 = new android.app.NotificationChannel     // Catch: java.lang.Throwable -> L65
            java.lang.String r2 = "vivo_push_channel"
            r3 = 4
            r1.<init>(r2, r4, r3)     // Catch: java.lang.Throwable -> L65
            r4 = -16711936(0xffffffffff00ff00, float:-1.7146522E38)
            r1.setLightColor(r4)     // Catch: java.lang.Throwable -> L65
            r4 = 1
            r1.enableVibration(r4)     // Catch: java.lang.Throwable -> L65
            r1.setLockscreenVisibility(r4)     // Catch: java.lang.Throwable -> L65
            android.app.NotificationManager r4 = com.vivo.push.util.NotifyAdapterUtil.sNotificationManager     // Catch: java.lang.Throwable -> L65
            r4.createNotificationChannel(r1)     // Catch: java.lang.Throwable -> L65
        L63:
            monitor-exit(r0)
            return
        L65:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    private static boolean isZh(android.content.Context r1) {
            android.content.res.Resources r1 = r1.getResources()
            android.content.res.Configuration r1 = r1.getConfiguration()
            java.util.Locale r1 = r1.locale
            java.lang.String r1 = r1.getLanguage()
            java.lang.String r0 = "zh"
            boolean r1 = r1.endsWith(r0)
            return r1
    }

    public static void pushNotification(android.content.Context r6, java.util.List<android.graphics.Bitmap> r7, com.vivo.push.model.InsideNotificationItem r8, long r9, int r11, com.vivo.push.d.r.a r12) {
            java.lang.String r0 = "NotifyManager"
            java.lang.String r1 = "pushNotification"
            com.vivo.push.util.p.d(r0, r1)
            initAdapter(r6)
            com.vivo.push.util.BaseNotifyDataAdapter r0 = com.vivo.push.util.NotifyUtil.getNotifyDataAdapter(r6)
            int r0 = r0.getNotifyMode(r8)
            java.lang.String r1 = r8.getPurePicUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            r2 = 1
            if (r1 != 0) goto L2c
            if (r7 == 0) goto L2c
            int r1 = r7.size()
            if (r1 <= r2) goto L2c
            java.lang.Object r1 = r7.get(r2)
            if (r1 == 0) goto L2c
            r0 = r2
        L2c:
            r1 = 2
            if (r0 != r1) goto L33
            pushNotificationBySystem(r6, r7, r8, r9, r11, r12)
            return
        L33:
            if (r0 != r2) goto L3d
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r5 = r12
            pushNotificationByCustom(r0, r1, r2, r3, r5)
        L3d:
            return
    }

    private static void pushNotificationByCustom(android.content.Context r16, java.util.List<android.graphics.Bitmap> r17, com.vivo.push.model.InsideNotificationItem r18, long r19, com.vivo.push.d.r.a r21) {
            r1 = r16
            r0 = r17
            r2 = r19
            java.lang.String r4 = "com.vivo.pushservice"
            android.content.res.Resources r5 = r16.getResources()
            java.lang.String r6 = r16.getPackageName()
            java.lang.String r7 = r18.getTitle()
            com.vivo.push.util.BaseNotifyDataAdapter r8 = com.vivo.push.util.NotifyUtil.getNotifyDataAdapter(r16)
            int r8 = r8.getDefaultNotifyIcon()
            android.content.pm.ApplicationInfo r9 = r16.getApplicationInfo()
            int r9 = r9.icon
            android.os.Bundle r10 = new android.os.Bundle
            r10.<init>()
            java.lang.String r11 = "pushId"
            r10.putLong(r11, r2)
            int r11 = android.os.Build.VERSION.SDK_INT
            r12 = 26
            if (r11 < r12) goto L41
            android.app.Notification$Builder r11 = new android.app.Notification$Builder
            java.lang.String r12 = "vivo_push_channel"
            r11.<init>(r1, r12)
            if (r8 <= 0) goto L4c
            java.lang.String r12 = "vivo.summaryIconRes"
            r10.putInt(r12, r8)
            goto L4c
        L41:
            int r11 = android.os.Build.VERSION.SDK_INT
            r12 = 19
            if (r11 < r12) goto L54
            android.app.Notification$Builder r11 = new android.app.Notification$Builder
            r11.<init>(r1)
        L4c:
            r11.setExtras(r10)
            android.app.Notification r10 = r11.build()
            goto L59
        L54:
            android.app.Notification r10 = new android.app.Notification
            r10.<init>()
        L59:
            r11 = 2
            r10.priority = r11
            r12 = 16
            r10.flags = r12
            r10.tickerText = r7
            com.vivo.push.util.BaseNotifyDataAdapter r13 = com.vivo.push.util.NotifyUtil.getNotifyDataAdapter(r16)
            int r13 = r13.getDefaultSmallIconId()
            if (r13 > 0) goto L6d
            r13 = r9
        L6d:
            r10.icon = r13
            android.widget.RemoteViews r13 = new android.widget.RemoteViews
            com.vivo.push.util.BaseNotifyLayoutAdapter r14 = com.vivo.push.util.NotifyUtil.getNotifyLayoutAdapter(r16)
            int r14 = r14.getNotificationLayout()
            r13.<init>(r6, r14)
            java.lang.String r14 = "notify_title"
            java.lang.String r15 = "id"
            int r11 = r5.getIdentifier(r14, r15, r6)
            r13.setTextViewText(r11, r7)
            int r7 = r5.getIdentifier(r14, r15, r6)
            com.vivo.push.util.BaseNotifyLayoutAdapter r11 = com.vivo.push.util.NotifyUtil.getNotifyLayoutAdapter(r16)
            int r11 = r11.getTitleColor()
            r13.setTextColor(r7, r11)
            java.lang.String r7 = "notify_msg"
            int r7 = r5.getIdentifier(r7, r15, r6)
            java.lang.String r11 = r18.getContent()
            r13.setTextViewText(r7, r11)
            boolean r7 = r18.isShowTime()
            java.lang.String r11 = "notify_when"
            if (r7 == 0) goto Lcd
            java.text.SimpleDateFormat r7 = new java.text.SimpleDateFormat
            java.util.Locale r14 = java.util.Locale.CHINA
            java.lang.String r12 = "HH:mm"
            r7.<init>(r12, r14)
            java.util.Date r12 = new java.util.Date
            r12.<init>()
            java.lang.String r7 = r7.format(r12)
            int r12 = r5.getIdentifier(r11, r15, r6)
            r13.setTextViewText(r12, r7)
            int r7 = r5.getIdentifier(r11, r15, r6)
            r12 = 0
            r13.setViewVisibility(r7, r12)
            goto Ld7
        Lcd:
            r12 = 0
            int r7 = r5.getIdentifier(r11, r15, r6)
            r11 = 8
            r13.setViewVisibility(r7, r11)
        Ld7:
            com.vivo.push.util.BaseNotifyLayoutAdapter r7 = com.vivo.push.util.NotifyUtil.getNotifyLayoutAdapter(r16)
            int r7 = r7.getSuitIconId()
            r13.setViewVisibility(r7, r12)
            if (r0 == 0) goto Lf6
            boolean r11 = r17.isEmpty()
            if (r11 != 0) goto Lf6
            java.lang.Object r11 = r0.get(r12)
            android.graphics.Bitmap r11 = (android.graphics.Bitmap) r11
            if (r11 == 0) goto Lf6
            r13.setImageViewBitmap(r7, r11)
            goto Lfc
        Lf6:
            if (r8 > 0) goto Lf9
            r8 = r9
        Lf9:
            r13.setImageViewResource(r7, r8)
        Lfc:
            r7 = 0
            r8 = 1
            if (r0 == 0) goto L10d
            int r9 = r17.size()
            if (r9 <= r8) goto L10d
            java.lang.Object r0 = r0.get(r8)
            r7 = r0
            android.graphics.Bitmap r7 = (android.graphics.Bitmap) r7
        L10d:
            java.lang.String r0 = "notify_cover"
            if (r7 == 0) goto L145
            java.lang.String r9 = r18.getPurePicUrl()
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 != 0) goto L135
            java.lang.String r9 = "notify_content"
            int r9 = r5.getIdentifier(r9, r15, r6)
            r11 = 8
            r13.setViewVisibility(r9, r11)
            int r0 = r5.getIdentifier(r0, r15, r6)
            r13.setViewVisibility(r0, r11)
            java.lang.String r0 = "notify_pure_cover"
            int r9 = r5.getIdentifier(r0, r15, r6)
            r11 = 0
            goto L13a
        L135:
            r11 = 0
            int r9 = r5.getIdentifier(r0, r15, r6)
        L13a:
            r13.setViewVisibility(r9, r11)
            int r0 = r5.getIdentifier(r0, r15, r6)
            r13.setImageViewBitmap(r0, r7)
            goto L14e
        L145:
            int r0 = r5.getIdentifier(r0, r15, r6)
            r5 = 8
            r13.setViewVisibility(r0, r5)
        L14e:
            r10.contentView = r13
            int r0 = android.os.Build.VERSION.SDK_INT
            r5 = 16
            if (r0 < r5) goto L162
            java.lang.String r0 = r18.getPurePicUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L162
            r10.bigContentView = r13
        L162:
            java.lang.String r0 = "audio"
            java.lang.Object r0 = r1.getSystemService(r0)
            android.media.AudioManager r0 = (android.media.AudioManager) r0
            int r5 = r0.getRingerMode()
            r7 = 0
            int r0 = r0.getVibrateSetting(r7)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            java.lang.String r9 = "ringMode="
            r7.<init>(r9)
            r7.append(r5)
            java.lang.String r9 = " callVibrateSetting="
            r7.append(r9)
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            java.lang.String r9 = "NotifyManager"
            com.vivo.push.util.p.d(r9, r7)
            int r7 = r18.getNotifyType()
            r11 = 2
            if (r7 == r11) goto L1bb
            r12 = 3
            r13 = 4
            if (r7 == r12) goto L1af
            if (r7 == r13) goto L19c
            goto L1bf
        L19c:
            if (r5 != r11) goto L1a0
            r10.defaults = r8
        L1a0:
            if (r0 != r8) goto L1bf
            int r0 = r10.defaults
            r0 = r0 | r11
            r10.defaults = r0
            long[] r0 = new long[r13]
            r0 = {x0286: FILL_ARRAY_DATA , data: [0, 100, 200, 300} // fill-array
            r10.vibrate = r0
            goto L1bf
        L1af:
            if (r0 != r8) goto L1bf
            r10.defaults = r11
            long[] r0 = new long[r13]
            r0 = {x029a: FILL_ARRAY_DATA , data: [0, 100, 200, 300} // fill-array
            r10.vibrate = r0
            goto L1bf
        L1bb:
            if (r5 != r11) goto L1bf
            r10.defaults = r8
        L1bf:
            android.content.Intent r5 = new android.content.Intent
            java.lang.String r0 = "com.vivo.pushservice.action.RECEIVE"
            r5.<init>(r0)
            java.lang.String r0 = r16.getPackageName()
            r5.setPackage(r0)
            java.lang.String r0 = r16.getPackageName()
            java.lang.String r7 = "com.vivo.push.sdk.service.CommandService"
            r5.setClassName(r0, r7)
            java.lang.String r0 = "command_type"
            java.lang.String r7 = "reflect_receiver"
            r5.putExtra(r0, r7)
            java.lang.String r0 = "security_avoid_pull"
            com.vivo.push.util.a r7 = com.vivo.push.util.a.a(r16)     // Catch: java.lang.Exception -> L217
            java.lang.String r7 = r7.a(r4)     // Catch: java.lang.Exception -> L217
            r5.putExtra(r0, r7)     // Catch: java.lang.Exception -> L217
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L217
            r7 = 18
            if (r0 < r7) goto L22d
            java.lang.String r0 = "security_avoid_pull_rsa"
            com.vivo.push.c.d r7 = com.vivo.push.c.d.a(r16)     // Catch: java.lang.Exception -> L217
            com.vivo.push.c.b r7 = r7.a()     // Catch: java.lang.Exception -> L217
            java.lang.String r4 = r7.a(r4)     // Catch: java.lang.Exception -> L217
            r5.putExtra(r0, r4)     // Catch: java.lang.Exception -> L217
            java.lang.String r0 = "security_avoid_rsa_public_key"
            com.vivo.push.c.d r4 = com.vivo.push.c.d.a(r16)     // Catch: java.lang.Exception -> L217
            com.vivo.push.c.b r4 = r4.a()     // Catch: java.lang.Exception -> L217
            java.security.PublicKey r4 = r4.a()     // Catch: java.lang.Exception -> L217
            java.lang.String r4 = com.vivo.push.util.u.a(r4)     // Catch: java.lang.Exception -> L217
            r5.putExtra(r0, r4)     // Catch: java.lang.Exception -> L217
            goto L22d
        L217:
            r0 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r7 = "pushNotificationByCustom encrypt ："
            r4.<init>(r7)
            java.lang.String r0 = r0.getMessage()
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            com.vivo.push.util.p.a(r9, r0)
        L22d:
            com.vivo.push.b.p r0 = new com.vivo.push.b.p
            r4 = r18
            r0.<init>(r6, r2, r4)
            r0.b(r5)
            long r6 = android.os.SystemClock.uptimeMillis()
            int r0 = (int) r6
            r4 = 268435456(0x10000000, float:2.524355E-29)
            android.app.PendingIntent r0 = android.app.PendingIntent.getService(r1, r0, r5, r4)
            r10.contentIntent = r0
            android.app.NotificationManager r0 = com.vivo.push.util.NotifyAdapterUtil.sNotificationManager
            if (r0 == 0) goto L285
            com.vivo.push.e r0 = com.vivo.push.e.a()
            int r0 = r0.k()
            if (r0 != 0) goto L261
            android.app.NotificationManager r0 = com.vivo.push.util.NotifyAdapterUtil.sNotificationManager     // Catch: java.lang.Exception -> L25f
            int r1 = com.vivo.push.util.NotifyAdapterUtil.sNotifyId     // Catch: java.lang.Exception -> L25f
            r0.notify(r1, r10)     // Catch: java.lang.Exception -> L25f
            if (r21 == 0) goto L27c
            r21.a()     // Catch: java.lang.Exception -> L25f
            return
        L25f:
            r0 = move-exception
            goto L27d
        L261:
            if (r0 != r8) goto L26f
            android.app.NotificationManager r0 = com.vivo.push.util.NotifyAdapterUtil.sNotificationManager     // Catch: java.lang.Exception -> L25f
            int r1 = (int) r2     // Catch: java.lang.Exception -> L25f
            r0.notify(r1, r10)     // Catch: java.lang.Exception -> L25f
            if (r21 == 0) goto L27c
            r21.a()     // Catch: java.lang.Exception -> L25f
            return
        L26f:
            java.lang.String r1 = "unknow notify style "
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Exception -> L25f
            java.lang.String r0 = r1.concat(r0)     // Catch: java.lang.Exception -> L25f
            com.vivo.push.util.p.a(r9, r0)     // Catch: java.lang.Exception -> L25f
        L27c:
            return
        L27d:
            com.vivo.push.util.p.a(r9, r0)
            if (r21 == 0) goto L285
            r21.b()
        L285:
            return
    }

    private static void pushNotificationBySystem(android.content.Context r17, java.util.List<android.graphics.Bitmap> r18, com.vivo.push.model.InsideNotificationItem r19, long r20, int r22, com.vivo.push.d.r.a r23) {
            r1 = r17
            r0 = r18
            r2 = r20
            java.lang.String r4 = "com.vivo.pushservice"
            java.lang.String r5 = "NotifyManager"
            java.lang.String r6 = r17.getPackageName()
            java.lang.String r7 = r19.getTitle()
            java.lang.String r8 = r19.getContent()
            android.content.pm.ApplicationInfo r9 = r17.getApplicationInfo()
            int r9 = r9.icon
            boolean r10 = r19.isShowTime()
            java.lang.String r11 = "audio"
            java.lang.Object r11 = r1.getSystemService(r11)
            android.media.AudioManager r11 = (android.media.AudioManager) r11
            com.vivo.push.util.BaseNotifyDataAdapter r12 = com.vivo.push.util.NotifyUtil.getNotifyDataAdapter(r17)
            int r12 = r12.getDefaultNotifyIcon()
            if (r0 == 0) goto L62
            boolean r14 = r18.isEmpty()
            if (r14 != 0) goto L62
            r14 = 0
            java.lang.Object r14 = r0.get(r14)
            android.graphics.Bitmap r14 = (android.graphics.Bitmap) r14
            if (r14 == 0) goto L5f
            if (r12 <= 0) goto L5f
            android.content.res.Resources r15 = r17.getResources()
            android.graphics.Bitmap r15 = android.graphics.BitmapFactory.decodeResource(r15, r12)
            if (r15 == 0) goto L5f
            int r13 = r15.getWidth()
            r16 = r6
            int r6 = r15.getHeight()
            r15.recycle()
            android.graphics.Bitmap r14 = com.vivo.push.util.c.a(r14, r13, r6)
            goto L65
        L5f:
            r16 = r6
            goto L65
        L62:
            r16 = r6
            r14 = 0
        L65:
            android.os.Bundle r6 = new android.os.Bundle
            r6.<init>()
            int r13 = android.os.Build.VERSION.SDK_INT
            r15 = 26
            if (r13 < r15) goto L84
            android.app.Notification$Builder r13 = new android.app.Notification$Builder
            java.lang.String r15 = "vivo_push_channel"
            r13.<init>(r1, r15)
            if (r12 <= 0) goto L7e
            java.lang.String r15 = "vivo.summaryIconRes"
            r6.putInt(r15, r12)
        L7e:
            if (r14 == 0) goto L9d
        L80:
            r13.setLargeIcon(r14)
            goto L9d
        L84:
            android.app.Notification$Builder r13 = new android.app.Notification$Builder
            r13.<init>(r1)
            if (r14 == 0) goto L8c
            goto L80
        L8c:
            int r12 = android.os.Build.VERSION.SDK_INT
            r14 = 22
            if (r12 > r14) goto L9d
            android.content.res.Resources r12 = r17.getResources()
            android.graphics.Bitmap r12 = android.graphics.BitmapFactory.decodeResource(r12, r9)
            r13.setLargeIcon(r12)
        L9d:
            int r12 = android.os.Build.VERSION.SDK_INT
            r14 = 19
            if (r12 < r14) goto Lab
            java.lang.String r12 = "pushId"
            r6.putLong(r12, r2)
            r13.setExtras(r6)
        Lab:
            com.vivo.push.util.BaseNotifyDataAdapter r6 = com.vivo.push.util.NotifyUtil.getNotifyDataAdapter(r17)
            int r6 = r6.getDefaultSmallIconId()
            if (r6 > 0) goto Lb6
            goto Lb7
        Lb6:
            r9 = r6
        Lb7:
            r13.setSmallIcon(r9)
            int r6 = r19.getCompatibleType()
            r9 = 1
            if (r6 == r9) goto Lc4
            r13.setContentTitle(r7)
        Lc4:
            r6 = 2
            r13.setPriority(r6)
            r13.setContentText(r8)
            if (r10 == 0) goto Ld2
            long r14 = java.lang.System.currentTimeMillis()
            goto Ld4
        Ld2:
            r14 = 0
        Ld4:
            r13.setWhen(r14)
            r13.setShowWhen(r10)
            r13.setTicker(r7)
            int r10 = r11.getRingerMode()
            int r11 = r19.getNotifyType()
            if (r11 == r6) goto L118
            r12 = 3
            r14 = 4
            if (r11 == r12) goto L10a
            if (r11 == r14) goto Lee
            goto L11d
        Lee:
            if (r10 != r6) goto Lfc
            r13.setDefaults(r12)
            long[] r6 = new long[r14]
            r6 = {x0222: FILL_ARRAY_DATA , data: [0, 100, 200, 300} // fill-array
            r13.setVibrate(r6)
            goto L11d
        Lfc:
            if (r10 != r9) goto L11d
            r13.setDefaults(r6)
            long[] r6 = new long[r14]
            r6 = {x0236: FILL_ARRAY_DATA , data: [0, 100, 200, 300} // fill-array
            r13.setVibrate(r6)
            goto L11d
        L10a:
            if (r10 != r6) goto L11d
            r13.setDefaults(r6)
            long[] r6 = new long[r14]
            r6 = {x024a: FILL_ARRAY_DATA , data: [0, 100, 200, 300} // fill-array
            r13.setVibrate(r6)
            goto L11d
        L118:
            if (r10 != r6) goto L11d
            r13.setDefaults(r9)
        L11d:
            if (r0 == 0) goto L12e
            int r6 = r18.size()
            if (r6 <= r9) goto L12e
            java.lang.Object r0 = r0.get(r9)
            android.graphics.Bitmap r0 = (android.graphics.Bitmap) r0
            r6 = r22
            goto L131
        L12e:
            r6 = r22
            r0 = 0
        L131:
            if (r6 == r9) goto L141
            android.app.Notification$BigTextStyle r6 = new android.app.Notification$BigTextStyle
            r6.<init>()
            r6.setBigContentTitle(r7)
            r6.bigText(r8)
            r13.setStyle(r6)
        L141:
            if (r0 == 0) goto L154
            android.app.Notification$BigPictureStyle r6 = new android.app.Notification$BigPictureStyle
            r6.<init>()
            r6.setBigContentTitle(r7)
            r6.setSummaryText(r8)
            r6.bigPicture(r0)
            r13.setStyle(r6)
        L154:
            r13.setAutoCancel(r9)
            android.content.Intent r6 = new android.content.Intent
            java.lang.String r0 = "com.vivo.pushservice.action.RECEIVE"
            r6.<init>(r0)
            java.lang.String r0 = r17.getPackageName()
            r6.setPackage(r0)
            java.lang.String r0 = r17.getPackageName()
            java.lang.String r7 = "com.vivo.push.sdk.service.CommandService"
            r6.setClassName(r0, r7)
            java.lang.String r0 = "command_type"
            java.lang.String r7 = "reflect_receiver"
            r6.putExtra(r0, r7)
            java.lang.String r0 = "security_avoid_pull"
            com.vivo.push.util.a r7 = com.vivo.push.util.a.a(r17)     // Catch: java.lang.Exception -> L1af
            java.lang.String r7 = r7.a(r4)     // Catch: java.lang.Exception -> L1af
            r6.putExtra(r0, r7)     // Catch: java.lang.Exception -> L1af
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L1af
            r7 = 18
            if (r0 < r7) goto L1c5
            java.lang.String r0 = "security_avoid_pull_rsa"
            com.vivo.push.c.d r7 = com.vivo.push.c.d.a(r17)     // Catch: java.lang.Exception -> L1af
            com.vivo.push.c.b r7 = r7.a()     // Catch: java.lang.Exception -> L1af
            java.lang.String r4 = r7.a(r4)     // Catch: java.lang.Exception -> L1af
            r6.putExtra(r0, r4)     // Catch: java.lang.Exception -> L1af
            java.lang.String r0 = "security_avoid_rsa_public_key"
            com.vivo.push.c.d r4 = com.vivo.push.c.d.a(r17)     // Catch: java.lang.Exception -> L1af
            com.vivo.push.c.b r4 = r4.a()     // Catch: java.lang.Exception -> L1af
            java.security.PublicKey r4 = r4.a()     // Catch: java.lang.Exception -> L1af
            java.lang.String r4 = com.vivo.push.util.u.a(r4)     // Catch: java.lang.Exception -> L1af
            r6.putExtra(r0, r4)     // Catch: java.lang.Exception -> L1af
            goto L1c5
        L1af:
            r0 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r7 = "pushNotificationBySystem encrypt ："
            r4.<init>(r7)
            java.lang.String r0 = r0.getMessage()
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            com.vivo.push.util.p.a(r5, r0)
        L1c5:
            com.vivo.push.b.p r0 = new com.vivo.push.b.p
            r4 = r19
            r7 = r16
            r0.<init>(r7, r2, r4)
            r0.b(r6)
            long r7 = android.os.SystemClock.uptimeMillis()
            int r0 = (int) r7
            r4 = 268435456(0x10000000, float:2.524355E-29)
            android.app.PendingIntent r0 = android.app.PendingIntent.getService(r1, r0, r6, r4)
            r13.setContentIntent(r0)
            android.app.Notification r0 = r13.build()
            com.vivo.push.e r1 = com.vivo.push.e.a()
            int r1 = r1.k()
            android.app.NotificationManager r4 = com.vivo.push.util.NotifyAdapterUtil.sNotificationManager
            if (r4 == 0) goto L220
            if (r1 != 0) goto L1fe
            int r1 = com.vivo.push.util.NotifyAdapterUtil.sNotifyId     // Catch: java.lang.Exception -> L1fc
            r4.notify(r1, r0)     // Catch: java.lang.Exception -> L1fc
            if (r23 == 0) goto L217
            r23.a()     // Catch: java.lang.Exception -> L1fc
            return
        L1fc:
            r0 = move-exception
            goto L218
        L1fe:
            if (r1 != r9) goto L20a
            int r1 = (int) r2     // Catch: java.lang.Exception -> L1fc
            r4.notify(r1, r0)     // Catch: java.lang.Exception -> L1fc
            if (r23 == 0) goto L217
            r23.a()     // Catch: java.lang.Exception -> L1fc
            return
        L20a:
            java.lang.String r0 = "unknow notify style "
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Exception -> L1fc
            java.lang.String r0 = r0.concat(r1)     // Catch: java.lang.Exception -> L1fc
            com.vivo.push.util.p.a(r5, r0)     // Catch: java.lang.Exception -> L1fc
        L217:
            return
        L218:
            com.vivo.push.util.p.a(r5, r0)
            if (r23 == 0) goto L220
            r23.b()
        L220:
            return
    }

    public static boolean repealNotifyById(android.content.Context r6, long r7) {
            com.vivo.push.e r0 = com.vivo.push.e.a()
            int r0 = r0.k()
            r1 = 0
            java.lang.String r2 = "NotifyManager"
            if (r0 != 0) goto L76
            com.vivo.push.util.w r0 = com.vivo.push.util.w.b()
            r3 = -1
            java.lang.String r5 = "com.vivo.push.notify_key"
            long r3 = r0.b(r5, r3)
            int r0 = (r3 > r7 ? 1 : (r3 == r7 ? 0 : -1))
            if (r0 != 0) goto L3e
            java.lang.String r0 = java.lang.String.valueOf(r7)
            java.lang.String r1 = "undo showed message "
            java.lang.String r0 = r1.concat(r0)
            com.vivo.push.util.p.d(r2, r0)
            java.lang.String r7 = java.lang.String.valueOf(r7)
            java.lang.String r8 = "回收已展示的通知： "
            java.lang.String r7 = r8.concat(r7)
            com.vivo.push.util.p.a(r6, r7)
            int r7 = com.vivo.push.util.NotifyAdapterUtil.sNotifyId
        L39:
            boolean r6 = cancelNotify(r6, r7)
            return r6
        L3e:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r5 = "current showing message id "
            r0.<init>(r5)
            r0.append(r3)
            java.lang.String r5 = " not match "
            r0.append(r5)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            com.vivo.push.util.p.d(r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "与已展示的通知"
            r0.<init>(r2)
            r0.append(r3)
            java.lang.String r2 = "与待回收的通知"
            r0.append(r2)
            r0.append(r7)
            java.lang.String r7 = "不匹配"
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            com.vivo.push.util.p.a(r6, r7)
            return r1
        L76:
            r3 = 1
            if (r0 != r3) goto L7b
            int r7 = (int) r7
            goto L39
        L7b:
            java.lang.String r6 = java.lang.String.valueOf(r0)
            java.lang.String r7 = "unknow cancle notify style "
            java.lang.String r6 = r7.concat(r6)
            com.vivo.push.util.p.a(r2, r6)
            return r1
    }

    public static void setNotifyId(int r0) {
            com.vivo.push.util.NotifyAdapterUtil.sNotifyId = r0
            return
    }
}

package com.meizu.cloud.pushsdk.handler.a;

public class c extends com.meizu.cloud.pushsdk.handler.a.a<com.meizu.cloud.pushsdk.handler.MessageV3> {
    public c(android.content.Context r1, com.meizu.cloud.pushsdk.handler.a r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    private java.lang.String k(com.meizu.cloud.pushsdk.handler.MessageV3 r2) {
            r1 = this;
            com.meizu.cloud.pushsdk.handler.MzPushMessage r2 = com.meizu.cloud.pushsdk.handler.MzPushMessage.fromMessageV3(r2)
            java.lang.String r2 = r2.getSelfDefineContentString()
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L21
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1a
            r0.<init>(r2)     // Catch: org.json.JSONException -> L1a
            java.lang.String r2 = "package_name"
            java.lang.String r2 = r0.getString(r2)     // Catch: org.json.JSONException -> L1a
            goto L22
        L1a:
            java.lang.String r2 = "AbstractMessageHandler"
            java.lang.String r0 = "no quick json message"
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r0)
        L21:
            r2 = 0
        L22:
            return r2
    }

    @Override
    public int a() {
            r1 = this;
            r0 = 4
            return r0
    }

    @Override
    protected com.meizu.cloud.pushsdk.notification.c a(com.meizu.cloud.pushsdk.handler.MessageV3 r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = (com.meizu.cloud.pushsdk.handler.MessageV3) r1
            com.meizu.cloud.pushsdk.notification.c r1 = r0.f(r1)
            return r1
    }

    protected void a(com.meizu.cloud.pushsdk.handler.MessageV3 r1, com.meizu.cloud.pushsdk.notification.c r2) {
            r0 = this;
            if (r2 == 0) goto L8
            r2.b(r1)
            r0.a(r1)
        L8:
            return
    }

    @Override
    protected void a(com.meizu.cloud.pushsdk.handler.MessageV3 r1, com.meizu.cloud.pushsdk.notification.c r2) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = (com.meizu.cloud.pushsdk.handler.MessageV3) r1
            r0.a(r1, r2)
            return
    }

    @Override
    public boolean a(android.content.Intent r6) {
            r5 = this;
            java.lang.String r0 = "AbstractMessageHandler"
            java.lang.String r1 = "start MessageV3Handler match"
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r1)
            java.lang.String r1 = r5.g(r6)
            r2 = 0
            boolean r1 = r5.a(r2, r1)
            if (r1 != 0) goto L13
            return r2
        L13:
            java.lang.String r1 = r6.getAction()
            java.lang.String r3 = "com.meizu.flyme.push.intent.MESSAGE"
            boolean r1 = r3.equals(r1)
            r3 = 1
            if (r1 == 0) goto L2d
            java.lang.String r1 = r5.k(r6)
            java.lang.String r4 = "notification_show_v3"
            boolean r1 = r4.equals(r1)
            if (r1 == 0) goto L2d
            return r3
        L2d:
            java.lang.String r1 = r5.k(r6)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L4f
            java.lang.String r1 = "message"
            java.lang.String r6 = r6.getStringExtra(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 != 0) goto L4f
            boolean r6 = r5.a(r6)
            if (r6 == 0) goto L4f
            java.lang.String r6 = "old cloud notification message"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r6)
            return r3
        L4f:
            return r2
    }

    @Override
    protected boolean a(com.meizu.cloud.pushsdk.handler.MessageV3 r1, java.lang.String r2) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = (com.meizu.cloud.pushsdk.handler.MessageV3) r1
            boolean r1 = r0.b(r1, r2)
            return r1
    }

    @Override
    protected void b(com.meizu.cloud.pushsdk.handler.MessageV3 r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = (com.meizu.cloud.pushsdk.handler.MessageV3) r1
            r0.d(r1)
            return
    }

    protected boolean b(com.meizu.cloud.pushsdk.handler.MessageV3 r1, java.lang.String r2) {
            r0 = this;
            boolean r1 = r0.a(r1, r2)
            return r1
    }

    @Override
    protected com.meizu.cloud.pushsdk.handler.MessageV3 c(android.content.Intent r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = r0.l(r1)
            return r1
    }

    @Override
    protected void c(com.meizu.cloud.pushsdk.handler.MessageV3 r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = (com.meizu.cloud.pushsdk.handler.MessageV3) r1
            r0.e(r1)
            return
    }

    @Override
    protected int d(com.meizu.cloud.pushsdk.handler.MessageV3 r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = (com.meizu.cloud.pushsdk.handler.MessageV3) r1
            int r1 = r0.h(r1)
            return r1
    }

    protected void d(com.meizu.cloud.pushsdk.handler.MessageV3 r9) {
            r8 = this;
            android.content.Context r0 = r8.d()
            java.lang.String r1 = r9.getUploadDataPackageName()
            java.lang.String r2 = r9.getDeviceId()
            java.lang.String r3 = r9.getTaskId()
            java.lang.String r4 = r9.getSeqId()
            java.lang.String r5 = r9.getPushTimestamp()
            long r6 = r9.getDelayedReportMillis()
            com.meizu.cloud.pushsdk.util.d.b(r0, r1, r2, r3, r4, r5, r6)
            return
    }

    protected void e(com.meizu.cloud.pushsdk.handler.MessageV3 r9) {
            r8 = this;
            android.content.Context r0 = r8.d()
            java.lang.String r1 = r9.getUploadDataPackageName()
            java.lang.String r2 = r9.getDeviceId()
            java.lang.String r3 = r9.getTaskId()
            java.lang.String r4 = r9.getSeqId()
            java.lang.String r5 = r9.getPushTimestamp()
            long r6 = r9.getDelayedReportMillis()
            com.meizu.cloud.pushsdk.util.d.a(r0, r1, r2, r3, r4, r5, r6)
            return
    }

    @Override
    protected void e(com.meizu.cloud.pushsdk.handler.MessageV3 r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = (com.meizu.cloud.pushsdk.handler.MessageV3) r1
            r0.i(r1)
            return
    }

    protected com.meizu.cloud.pushsdk.notification.c f(com.meizu.cloud.pushsdk.handler.MessageV3 r7) {
            r6 = this;
            com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r0 = new com.meizu.cloud.pushsdk.notification.PushNotificationBuilder
            android.content.Context r1 = r6.d()
            r0.<init>(r1)
            java.lang.String r1 = r6.k(r7)
            r0.setClickPackageName(r1)
            com.meizu.cloud.pushsdk.handler.a r1 = r6.c()
            r1.a(r0)
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r1 = r7.getNotificationStyle()
            java.lang.String r2 = "AbstractMessageHandler"
            r3 = 0
            if (r1 == 0) goto L118
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r1 = r7.getNotificationStyle()
            int r1 = r1.getBaseStyle()
            com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel r4 = com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel.FLYME
            int r4 = r4.getCode()
            java.lang.String r5 = "show Flyme Video notification"
            if (r4 != r1) goto L98
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r7 = r7.getNotificationStyle()
            int r7 = r7.getInnerStyle()
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout r1 = com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout.EXPANDABLE_STANDARD
            int r1 = r1.getCode()
            if (r1 != r7) goto L52
            java.lang.String r7 = "show Standard Notification with Expandable disable"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r7)
            com.meizu.cloud.pushsdk.notification.b.c r3 = new com.meizu.cloud.pushsdk.notification.b.c
            android.content.Context r7 = r6.d()
            r3.<init>(r7, r0)
            goto L118
        L52:
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout r1 = com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout.EXPANDABLE_TEXT
            int r1 = r1.getCode()
            if (r1 != r7) goto L6a
            java.lang.String r7 = "show Standard Notification with Expandable Text"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r7)
            com.meizu.cloud.pushsdk.notification.b.b r3 = new com.meizu.cloud.pushsdk.notification.b.b
            android.content.Context r7 = r6.d()
            r3.<init>(r7, r0)
            goto L118
        L6a:
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout r1 = com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout.EXPANDABLE_PIC
            int r1 = r1.getCode()
            if (r1 != r7) goto L82
            java.lang.String r7 = "show Standard Notification with Expandable Picture"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r7)
            com.meizu.cloud.pushsdk.notification.b.a r3 = new com.meizu.cloud.pushsdk.notification.b.a
            android.content.Context r7 = r6.d()
            r3.<init>(r7, r0)
            goto L118
        L82:
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout r1 = com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout.EXPANDABLE_VIDEO
            int r1 = r1.getCode()
            if (r1 != r7) goto L118
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r5)
            com.meizu.cloud.pushsdk.notification.a.d r3 = new com.meizu.cloud.pushsdk.notification.a.d
            android.content.Context r7 = r6.d()
            r3.<init>(r7, r0)
            goto L118
        L98:
            com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel r4 = com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel.PURE_PICTURE
            int r4 = r4.getCode()
            if (r4 != r1) goto Laf
            com.meizu.cloud.pushsdk.notification.b r3 = new com.meizu.cloud.pushsdk.notification.b
            android.content.Context r7 = r6.d()
            r3.<init>(r7, r0)
            java.lang.String r7 = "show Pure Picture Notification"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r7)
            goto L118
        Laf:
            com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel r4 = com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel.ANDROID
            int r4 = r4.getCode()
            if (r4 != r1) goto L118
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r7 = r7.getNotificationStyle()
            int r7 = r7.getInnerStyle()
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout r1 = com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout.EXPANDABLE_STANDARD
            int r1 = r1.getCode()
            if (r1 != r7) goto Ld6
            java.lang.String r7 = "show Android  Notification with Expandable disable"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r7)
            com.meizu.cloud.pushsdk.notification.a.c r3 = new com.meizu.cloud.pushsdk.notification.a.c
            android.content.Context r7 = r6.d()
            r3.<init>(r7, r0)
            goto L118
        Ld6:
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout r1 = com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout.EXPANDABLE_TEXT
            int r1 = r1.getCode()
            if (r1 != r7) goto Led
            java.lang.String r7 = "show Android  Notification with Expandable Text"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r7)
            com.meizu.cloud.pushsdk.notification.a.b r3 = new com.meizu.cloud.pushsdk.notification.a.b
            android.content.Context r7 = r6.d()
            r3.<init>(r7, r0)
            goto L118
        Led:
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout r1 = com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout.EXPANDABLE_PIC
            int r1 = r1.getCode()
            if (r1 != r7) goto L104
            java.lang.String r7 = "show Android  Notification with Expandable Picture"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r7)
            com.meizu.cloud.pushsdk.notification.a.a r3 = new com.meizu.cloud.pushsdk.notification.a.a
            android.content.Context r7 = r6.d()
            r3.<init>(r7, r0)
            goto L118
        L104:
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout r1 = com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout.EXPANDABLE_VIDEO
            int r1 = r1.getCode()
            if (r1 != r7) goto L118
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r5)
            com.meizu.cloud.pushsdk.notification.a.d r3 = new com.meizu.cloud.pushsdk.notification.a.d
            android.content.Context r7 = r6.d()
            r3.<init>(r7, r0)
        L118:
            if (r3 != 0) goto L128
            java.lang.String r7 = "use standard v2 notification"
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r7)
            com.meizu.cloud.pushsdk.notification.d r3 = new com.meizu.cloud.pushsdk.notification.d
            android.content.Context r7 = r6.d()
            r3.<init>(r7, r0)
        L128:
            return r3
    }

    @Override
    protected void f(com.meizu.cloud.pushsdk.handler.MessageV3 r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = (com.meizu.cloud.pushsdk.handler.MessageV3) r1
            r0.j(r1)
            return
    }

    protected boolean g(com.meizu.cloud.pushsdk.handler.MessageV3 r2) {
            r1 = this;
            java.lang.String r2 = r2.getUriPackageName()
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L13
            android.content.Context r0 = r1.d()
            boolean r2 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isPackageInstalled(r0, r2)
            goto L14
        L13:
            r2 = 1
        L14:
            return r2
    }

    @Override
    protected boolean g(com.meizu.cloud.pushsdk.handler.MessageV3 r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = (com.meizu.cloud.pushsdk.handler.MessageV3) r1
            boolean r1 = r0.g(r1)
            return r1
    }

    protected int h(com.meizu.cloud.pushsdk.handler.MessageV3 r9) {
            r8 = this;
            com.meizu.cloud.pushsdk.notification.model.BrightRemindSetting r0 = r9.getBrightRemindSetting()
            r1 = 0
            if (r0 == 0) goto L1e
            com.meizu.cloud.pushsdk.notification.model.BrightRemindSetting r0 = r9.getBrightRemindSetting()
            boolean r0 = r0.getIsBrightRemind()
            if (r0 == 0) goto L1e
            android.content.Context r0 = r8.d()
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isInteractive(r0)
            if (r0 != 0) goto L1e
            r1 = 4
            goto L106
        L1e:
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r0 = r9.getAdvertisementOption()
            if (r0 == 0) goto L8c
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r0 = r9.getAdvertisementOption()
            java.lang.String r0 = r0.getAdInstallPackage()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L8c
            android.content.Context r0 = r8.d()
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r2 = r9.getAdvertisementOption()
            java.lang.String r2 = r2.getAdPackage()
            long r2 = com.meizu.cloud.pushsdk.util.b.m(r0, r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = "ad message last click time is: "
            r0.append(r4)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r4 = "AbstractMessageHandler"
            com.meizu.cloud.pushinternal.DebugLogger.i(r4, r0)
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L106
            r4 = 1209600000(0x48190800, double:5.97621805E-315)
            long r2 = r2 + r4
            long r4 = java.lang.System.currentTimeMillis()
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 <= 0) goto L106
            r1 = 5
            android.content.Context r2 = r8.d()
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r0 = r9.getAdvertisementOption()
            java.lang.String r3 = r0.getAdInstallPackage()
            java.lang.String r4 = r9.getDeviceId()
            java.lang.String r5 = r9.getTaskId()
            java.lang.String r6 = r9.getSeqId()
            java.lang.String r7 = r9.getPushTimestamp()
            com.meizu.cloud.pushsdk.util.d.f(r2, r3, r4, r5, r6, r7)
            goto L106
        L8c:
            com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting r0 = r9.getTimeDisplaySetting()
            if (r0 == 0) goto L106
            com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting r0 = r9.getTimeDisplaySetting()
            boolean r0 = r0.isTimeDisplay()
            if (r0 != 0) goto L9d
            goto L106
        L9d:
            long r0 = java.lang.System.currentTimeMillis()
            com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting r2 = r9.getTimeDisplaySetting()
            java.lang.String r2 = r2.getEndShowTime()
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            long r2 = r2.longValue()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto Lca
            r1 = 1
            android.content.Context r0 = r8.d()
            r2 = 2200(0x898, float:3.083E-42)
            java.lang.String r3 = r9.getTaskId()
            java.lang.String r9 = r9.getDeviceId()
            java.lang.String r4 = "schedule notification expire"
        Lc6:
            com.meizu.cloud.pushsdk.util.d.a(r0, r4, r2, r3, r9)
            goto L106
        Lca:
            long r0 = java.lang.System.currentTimeMillis()
            com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting r2 = r9.getTimeDisplaySetting()
            java.lang.String r2 = r2.getStartShowTime()
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            long r2 = r2.longValue()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto Lf4
            r1 = 2
            android.content.Context r0 = r8.d()
            r2 = 2201(0x899, float:3.084E-42)
            java.lang.String r3 = r9.getTaskId()
            java.lang.String r9 = r9.getDeviceId()
            java.lang.String r4 = "schedule notification on time"
            goto Lc6
        Lf4:
            r1 = 3
            android.content.Context r0 = r8.d()
            r2 = 2202(0x89a, float:3.086E-42)
            java.lang.String r3 = r9.getTaskId()
            java.lang.String r9 = r9.getDeviceId()
            java.lang.String r4 = "schedule notification delay"
            goto Lc6
        L106:
            return r1
    }

    protected void i(com.meizu.cloud.pushsdk.handler.MessageV3 r9) {
            r8 = this;
            android.content.Context r0 = r8.d()
            java.lang.String r1 = "alarm"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.app.AlarmManager r0 = (android.app.AlarmManager) r0
            android.content.Intent r1 = new android.content.Intent
            android.content.Context r2 = r8.d()
            java.lang.Class<com.meizu.cloud.pushsdk.NotificationService> r3 = com.meizu.cloud.pushsdk.NotificationService.class
            r1.<init>(r2, r3)
            java.lang.String r2 = r9.getPackageName()
            r1.setPackage(r2)
            java.lang.String r2 = r9.getPackageName()
            r1.addCategory(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "custom://"
            r2.append(r3)
            long r3 = java.lang.System.currentTimeMillis()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            android.net.Uri r2 = android.net.Uri.parse(r2)
            r1.setData(r2)
            java.lang.String r2 = "command_type"
            java.lang.String r3 = "reflect_receiver"
            r1.putExtra(r2, r3)
            java.lang.String r2 = "com.meizu.flyme.push.intent.MESSAGE"
            r1.setAction(r2)
            java.lang.String r2 = "extra_app_push_schedule_notification_message"
            r1.putExtra(r2, r9)
            java.lang.String r2 = "method"
            java.lang.String r3 = "schedule_notification"
            r1.putExtra(r2, r3)
            boolean r2 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportSetDrawableSmallIcon()
            if (r2 == 0) goto L62
            r2 = 67108864(0x4000000, float:1.5046328E-36)
            goto L64
        L62:
            r2 = 1073741824(0x40000000, float:2.0)
        L64:
            android.content.Context r3 = r8.d()
            r4 = 0
            android.app.PendingIntent r1 = android.app.PendingIntent.getService(r3, r4, r1, r2)
            com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting r9 = r9.getTimeDisplaySetting()
            java.lang.String r9 = r9.getStartShowTime()
            java.text.SimpleDateFormat r2 = new java.text.SimpleDateFormat
            java.lang.String r3 = "yyyy-MM-dd HH:mm:ss"
            r2.<init>(r3)
            r3 = 0
            boolean r4 = android.text.TextUtils.isEmpty(r9)
            if (r4 != 0) goto L94
            java.util.Date r3 = new java.util.Date
            java.lang.Long r4 = java.lang.Long.valueOf(r9)
            long r4 = r4.longValue()
            r3.<init>(r4)
            java.lang.String r3 = r2.format(r3)
        L94:
            java.lang.Long r9 = java.lang.Long.valueOf(r9)
            long r4 = r9.longValue()
            long r6 = java.lang.System.currentTimeMillis()
            long r4 = r4 - r6
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r2 = "after "
            r9.append(r2)
            r6 = 1000(0x3e8, double:4.94E-321)
            long r6 = r4 / r6
            r9.append(r6)
            java.lang.String r2 = " seconds Notification AlarmManager execute At "
            r9.append(r2)
            r9.append(r3)
            java.lang.String r9 = r9.toString()
            java.lang.String r2 = "AbstractMessageHandler"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r9)
            r9 = 2
            if (r0 == 0) goto Lda
            int r3 = android.os.Build.VERSION.SDK_INT
            r6 = 19
            if (r3 < r6) goto Lda
            java.lang.String r3 = "setAlarmManager setExact ELAPSED_REALTIME_WAKEUP"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r3)
            long r2 = android.os.SystemClock.elapsedRealtime()
            long r2 = r2 + r4
            r0.setExact(r9, r2, r1)
            goto Le9
        Lda:
            if (r0 == 0) goto Le9
            java.lang.String r3 = "setAlarmManager set ELAPSED_REALTIME_WAKEUP"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r3)
            long r2 = android.os.SystemClock.elapsedRealtime()
            long r2 = r2 + r4
            r0.set(r9, r2, r1)
        Le9:
            return
    }

    protected void j(com.meizu.cloud.pushsdk.handler.MessageV3 r5) {
            r4 = this;
            android.content.Intent r0 = new android.content.Intent
            android.content.Context r1 = r4.d()
            java.lang.Class<com.meizu.cloud.pushsdk.NotificationService> r2 = com.meizu.cloud.pushsdk.NotificationService.class
            r0.<init>(r1, r2)
            java.lang.String r1 = r5.getPackageName()
            r0.setPackage(r1)
            java.lang.String r1 = r5.getPackageName()
            r0.addCategory(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "custom://"
            r1.append(r2)
            long r2 = java.lang.System.currentTimeMillis()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.net.Uri r1 = android.net.Uri.parse(r1)
            r0.setData(r1)
            java.lang.String r1 = "command_type"
            java.lang.String r2 = "reflect_receiver"
            r0.putExtra(r1, r2)
            java.lang.String r1 = "com.meizu.flyme.push.intent.MESSAGE"
            r0.setAction(r1)
            java.lang.String r1 = "extra_app_push_bright_notification_message"
            r0.putExtra(r1, r5)
            java.lang.String r1 = "method"
            java.lang.String r2 = "bright_notification_message"
            r0.putExtra(r1, r2)
            android.content.Context r1 = r4.d()
            com.meizu.cloud.pushsdk.b r1 = com.meizu.cloud.pushsdk.b.a(r1)
            com.meizu.cloud.pushsdk.handler.a.f.a r1 = r1.a()
            if (r1 == 0) goto L62
            java.lang.String r5 = r5.getUploadDataPackageName()
            r1.a(r0, r5)
        L62:
            return
    }

    protected com.meizu.cloud.pushsdk.handler.MessageV3 l(android.content.Intent r12) {
            r11 = this;
            java.lang.String r0 = r11.k(r12)
            java.lang.String r1 = "notification_show_v3"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Lf
            java.lang.String r0 = "pushMessage"
            goto L11
        Lf:
            java.lang.String r0 = "message"
        L11:
            java.lang.String r0 = r12.getStringExtra(r0)
            r7 = r0
            android.content.Context r0 = r11.d()
            java.lang.String r1 = r0.getPackageName()
            java.lang.String r2 = r11.g(r12)
            java.lang.String r3 = r11.h(r12)
            java.lang.String r4 = r11.d(r12)
            java.lang.String r5 = r11.e(r12)
            java.lang.String r6 = r11.f(r12)
            boolean r8 = r11.i(r12)
            long r9 = r11.j(r12)
            com.meizu.cloud.pushsdk.handler.MessageV3 r12 = com.meizu.cloud.pushsdk.handler.MessageV3.parse(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            return r12
    }
}

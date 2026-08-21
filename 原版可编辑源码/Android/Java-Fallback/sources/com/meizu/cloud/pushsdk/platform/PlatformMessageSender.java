package com.meizu.cloud.pushsdk.platform;

public class PlatformMessageSender {






    interface a {
        java.lang.String a();

        com.meizu.cloud.pushsdk.platform.message.BasicPushStatus b();

        java.lang.String c();

        java.lang.String d();
    }

    public PlatformMessageSender() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(android.content.Context r5, int r6, boolean r7, java.lang.String r8) {
            java.lang.String r0 = "com.meizu.cloud"
            java.lang.String r1 = com.meizu.cloud.pushsdk.util.MzSystemUtils.getAppVersionName(r5, r0)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r5.getPackageName()
            r2.append(r3)
            java.lang.String r3 = " switchPushMessageSetting cloudVersion_name "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "PlatformMessageSender"
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r2)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L6e
            r2 = 0
            r4 = 1
            java.lang.String r1 = r1.substring(r2, r4)
            int r1 = java.lang.Integer.parseInt(r1)
            r2 = 6
            if (r1 < r2) goto L6e
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r2 = "com.meizu.flyme.push.intent.MESSAGE_SWITCH"
            r1.<init>(r2)
            java.lang.String r2 = "extra_app_push_switch_setting_type"
            r1.putExtra(r2, r6)
            java.lang.String r6 = "extra_app_push_switch_setting_status"
            r1.putExtra(r6, r7)
            java.lang.String r6 = "extra_app_push_switch_package_name"
            r1.putExtra(r6, r8)
            java.lang.String r6 = "com.meizu.cloud.pushsdk.pushservice.MzPushService"
            r1.setClassName(r0, r6)
            r5.startService(r1)     // Catch: java.lang.Exception -> L55
            goto L6e
        L55:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "start switch push message setting service error "
            r6.append(r7)
            java.lang.String r5 = r5.getMessage()
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r5)
        L6e:
            return
    }

    private static void a(android.content.Context r3, java.lang.String r4, com.meizu.cloud.pushsdk.platform.PlatformMessageSender.a r5) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            r0.addCategory(r4)
            r0.setPackage(r4)
            java.lang.String r1 = r5.a()
            java.lang.String r2 = "method"
            r0.putExtra(r2, r1)
            boolean r1 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportTransmitMessageValue(r3, r4)
            if (r1 == 0) goto L24
            java.lang.String r5 = r5.d()
            java.lang.String r1 = "messageValue"
            r0.putExtra(r1, r5)
            goto L2f
        L24:
            java.lang.String r1 = r5.c()
            com.meizu.cloud.pushsdk.platform.message.BasicPushStatus r5 = r5.b()
            r0.putExtra(r1, r5)
        L2f:
            java.lang.String r5 = "com.meizu.flyme.push.intent.MESSAGE"
            com.meizu.cloud.pushsdk.util.MzSystemUtils.sendMessageFromBroadcast(r3, r0, r5, r4)
            com.meizu.cloud.pushsdk.a.a(r3)
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2, com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r3) {
            com.meizu.cloud.pushsdk.platform.PlatformMessageSender$1 r0 = new com.meizu.cloud.pushsdk.platform.PlatformMessageSender$1
            r0.<init>(r3)
            a(r1, r2, r0)
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2, com.meizu.cloud.pushsdk.platform.message.RegisterStatus r3) {
            com.meizu.cloud.pushsdk.platform.PlatformMessageSender$2 r0 = new com.meizu.cloud.pushsdk.platform.PlatformMessageSender$2
            r0.<init>(r3)
            a(r1, r2, r0)
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2, com.meizu.cloud.pushsdk.platform.message.SubAliasStatus r3) {
            com.meizu.cloud.pushsdk.platform.PlatformMessageSender$5 r0 = new com.meizu.cloud.pushsdk.platform.PlatformMessageSender$5
            r0.<init>(r3)
            a(r1, r2, r0)
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2, com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r3) {
            com.meizu.cloud.pushsdk.platform.PlatformMessageSender$4 r0 = new com.meizu.cloud.pushsdk.platform.PlatformMessageSender$4
            r0.<init>(r3)
            a(r1, r2, r0)
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2, com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus r3) {
            com.meizu.cloud.pushsdk.platform.PlatformMessageSender$3 r0 = new com.meizu.cloud.pushsdk.platform.PlatformMessageSender$3
            r0.<init>(r3)
            a(r1, r2, r0)
            return
    }

    public static void launchStartActivity(android.content.Context r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            com.meizu.cloud.pushsdk.handler.a.c.d r10 = com.meizu.cloud.pushsdk.util.d.a(r10)
            java.lang.String r2 = r10.e()
            java.lang.String r3 = r10.f()
            java.lang.String r4 = r10.c()
            java.lang.String r5 = r10.d()
            r0 = r8
            r1 = r8
            r6 = r9
            com.meizu.cloud.pushsdk.handler.MessageV3 r9 = com.meizu.cloud.pushsdk.handler.MessageV3.parse(r0, r1, r2, r3, r4, r5, r6)
            android.content.Intent r10 = new android.content.Intent
            r10.<init>()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "custom://"
            r0.append(r1)
            long r1 = java.lang.System.currentTimeMillis()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            android.net.Uri r0 = android.net.Uri.parse(r0)
            r10.setData(r0)
            java.lang.String r0 = "pushMessage"
            r10.putExtra(r0, r9)
            java.lang.String r0 = "method"
            java.lang.String r1 = "private"
            r10.putExtra(r0, r1)
            java.lang.String r0 = "com.meizu.flyme.push.intent.MESSAGE"
            r10.setAction(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L5b
            r10.setPackage(r8)
            java.lang.String r0 = "com.meizu.cloud.pushsdk.NotificationService"
            r10.setClassName(r8, r0)
        L5b:
            java.lang.String r8 = "command_type"
            java.lang.String r0 = "reflect_receiver"
            r10.putExtra(r8, r0)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "start notification service "
            r8.append(r0)
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            java.lang.String r9 = "PlatformMessageSender"
            com.meizu.cloud.pushinternal.DebugLogger.i(r9, r8)
            r7.startService(r10)     // Catch: java.lang.Exception -> L7c
            goto L95
        L7c:
            r7 = move-exception
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r10 = "launchStartActivity error "
            r8.append(r10)
            java.lang.String r7 = r7.getMessage()
            r8.append(r7)
            java.lang.String r7 = r8.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r9, r7)
        L95:
            return
    }

    public static void showQuickNotification(android.content.Context r4, java.lang.String r5, java.lang.String r6) {
            java.lang.String r0 = "PlatformMessageSender"
            com.meizu.cloud.pushsdk.handler.a.c.d r6 = com.meizu.cloud.pushsdk.util.d.a(r6)
            android.content.Intent r1 = new android.content.Intent
            r1.<init>()
            java.lang.String r2 = r6.d()
            java.lang.String r3 = "extra_app_push_seq_Id"
            r1.putExtra(r3, r2)
            java.lang.String r2 = r6.c()
            java.lang.String r3 = "extra_app_push_task_Id"
            r1.putExtra(r3, r2)
            java.lang.String r2 = r6.e()
            java.lang.String r3 = "extra_app_push_task_timestamp"
            r1.putExtra(r3, r2)
            java.lang.String r2 = r4.getPackageName()
            java.lang.String r3 = "extra_app_push_service_default_package_name"
            r1.putExtra(r3, r2)
            java.lang.String r2 = "pushMessage"
            r1.putExtra(r2, r5)
            java.lang.String r5 = r6.f()
            java.lang.String r6 = "statistics_imei_key"
            r1.putExtra(r6, r5)
            java.lang.String r5 = "method"
            java.lang.String r6 = "notification_show_v3"
            r1.putExtra(r5, r6)
            java.lang.String r5 = "com.meizu.flyme.push.intent.MESSAGE"
            r1.setAction(r5)
            java.lang.String r5 = r4.getPackageName()
            java.lang.String r6 = "com.meizu.cloud.pushsdk.NotificationService"
            r1.setClassName(r5, r6)
            java.lang.String r5 = "command_type"
            java.lang.String r6 = "reflect_receiver"
            r1.putExtra(r5, r6)
            java.lang.String r5 = "start notification service to show notification"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r5)     // Catch: java.lang.Exception -> L62
            r4.startService(r1)     // Catch: java.lang.Exception -> L62
            goto L7b
        L62:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "showNotification error "
            r5.append(r6)
            java.lang.String r4 = r4.getMessage()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r4)
        L7b:
            return
    }
}

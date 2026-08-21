package com.xiaomi.mipush.sdk;

public class FCMPushHelper {
    public FCMPushHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.util.Map<java.lang.String, java.lang.String> a(android.content.Context r3) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.xiaomi.push.hj r1 = com.xiaomi.push.hj.f
            int r1 = r1.a()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "actionType"
            r0.put(r2, r1)
            java.lang.String r1 = r3.getPackageName()
            short r3 = com.xiaomi.push.it.a(r3, r1)
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r1 = "deviceStatus"
            r0.put(r1, r3)
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.String r3 = java.lang.Long.toString(r1)
            java.lang.String r1 = "mat"
            r0.put(r1, r3)
            return r0
    }

    private static void a(android.content.Context r2, com.xiaomi.push.if r3) {
            com.xiaomi.push.iu r0 = com.xiaomi.mipush.sdk.ai.a(r2, r3)     // Catch: java.lang.Throwable -> L19
            com.xiaomi.push.im r0 = (com.xiaomi.push.im) r0     // Catch: java.lang.Throwable -> L19
            com.xiaomi.push.hw r3 = r3.a()     // Catch: java.lang.Throwable -> L19
            r1 = 0
            com.xiaomi.mipush.sdk.MiPushMessage r3 = com.xiaomi.mipush.sdk.PushMessageHelper.generateMessage(r0, r3, r1)     // Catch: java.lang.Throwable -> L19
            com.xiaomi.mipush.sdk.PushMessageReceiver r0 = com.xiaomi.mipush.sdk.i.a(r2)     // Catch: java.lang.Throwable -> L19
            if (r0 == 0) goto L1f
            r0.onNotificationMessageArrived(r2, r3)     // Catch: java.lang.Throwable -> L19
            goto L1f
        L19:
            r2 = move-exception
            java.lang.String r3 = "fcm broadcast notification come error "
            com.xiaomi.channel.commonutils.logger.b.a(r3, r2)
        L1f:
            return
    }

    private static void a(android.content.Context r7, byte[] r8) {
            com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r7)
            boolean r0 = r0.a()
            java.lang.String r1 = r7.getPackageName()
            java.lang.String r2 = "com.xiaomi.xmsf"
            boolean r1 = r2.equals(r1)
            r3 = 1
            r1 = r1 ^ r3
            boolean r4 = a(r7)
            r5 = 2
            r6 = 0
            if (r0 == 0) goto L69
            if (r1 == 0) goto L69
            if (r4 == 0) goto L69
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r7)
            java.lang.String r0 = r0.d()
            byte[] r8 = com.xiaomi.push.service.n.a(r8, r0)
            if (r8 != 0) goto L31
            java.lang.String r0 = "fcm message encrypt failed"
            goto L84
        L31:
            java.lang.String r0 = android.util.Base64.encodeToString(r8, r5)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L42
            java.lang.String r0 = "fcm message buf base64 encode failed"
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            r3 = r6
            goto L67
        L42:
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r4 = com.xiaomi.push.service.bk.n
            r1.<init>(r4)
            r1.setPackage(r2)
            java.lang.String r4 = "com.xiaomi.push.service.XMPushService"
            r1.setClassName(r2, r4)
            java.lang.String r2 = "ext_fcm_container_buffer"
            r1.putExtra(r2, r0)
            java.lang.String r0 = r7.getPackageName()
            java.lang.String r2 = "mipush_app_package"
            r1.putExtra(r2, r0)
            r7.startService(r1)
            java.lang.String r0 = "fcm message reroute to xmsf"
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L67:
            r6 = r3
            goto L87
        L69:
            r2 = 3
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            r2[r6] = r0
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r1)
            r2[r3] = r0
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r4)
            r2[r5] = r0
            java.lang.String r0 = "xmsf can not receive fcm msg - shouldUseMIUIPush=%s;isNotXmsf=%s;xmsfSupport=%s"
            java.lang.String r0 = java.lang.String.format(r0, r2)
        L84:
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L87:
            if (r6 != 0) goto L95
            java.lang.String r0 = "fcm message post local"
            com.xiaomi.channel.commonutils.logger.b.b(r0)
            com.xiaomi.push.if r0 = com.xiaomi.push.service.y.a(r8)
            com.xiaomi.push.service.al.a(r7, r0, r8)
        L95:
            return
    }

    private static boolean a(android.content.Context r4) {
            int r0 = com.xiaomi.push.m.b(r4)
            long r0 = (long) r0
            r2 = 50002000(0x2faf850, double:2.47042704E-316)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L14
            boolean r4 = b(r4)
            if (r4 == 0) goto L14
            r4 = 1
            goto L15
        L14:
            r4 = 0
        L15:
            return r4
    }

    private static boolean b(android.content.Context r2) {
            r0 = 0
            java.lang.String r1 = "mipush_extra"
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r1, r0)
            java.lang.String r1 = "is_xmsf_sup_decrypt"
            boolean r2 = r2.getBoolean(r1, r0)
            return r2
    }

    public static void clearToken(android.content.Context r1) {
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.b
            com.xiaomi.mipush.sdk.i.a(r1, r0)
            return
    }

    public static void convertMessage(android.content.Intent r0) {
            com.xiaomi.mipush.sdk.i.a(r0)
            return
    }

    public static boolean isFCMSwitchOpen(android.content.Context r1) {
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.b
            boolean r0 = com.xiaomi.mipush.sdk.i.a(r1, r0)
            if (r0 == 0) goto L10
            boolean r1 = com.xiaomi.mipush.sdk.MiPushClient.getOpenFCMPush(r1)
            if (r1 == 0) goto L10
            r1 = 1
            goto L11
        L10:
            r1 = 0
        L11:
            return r1
    }

    public static void notifyFCMNotificationCome(android.content.Context r1, java.util.Map<java.lang.String, java.lang.String> r2) {
            java.lang.String r0 = "pushMsg"
            java.lang.Object r2 = r2.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1b
            com.xiaomi.mipush.sdk.PushMessageReceiver r0 = com.xiaomi.mipush.sdk.i.a(r1)
            if (r0 == 0) goto L1b
            com.xiaomi.mipush.sdk.MiPushMessage r2 = com.xiaomi.mipush.sdk.i.a(r2)
            r0.onNotificationMessageArrived(r1, r2)
        L1b:
            return
    }

    public static java.util.Map<java.lang.String, java.lang.String> notifyFCMPassThoughMessageCome(android.content.Context r2, java.util.Map<java.lang.String, java.lang.String> r3) {
            java.lang.String r0 = "pushMsg"
            java.lang.Object r0 = r3.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L1b
            com.xiaomi.mipush.sdk.PushMessageReceiver r1 = com.xiaomi.mipush.sdk.i.a(r2)
            if (r1 == 0) goto L1b
            com.xiaomi.mipush.sdk.MiPushMessage r0 = com.xiaomi.mipush.sdk.i.a(r0)
            r1.onReceivePassThroughMessage(r2, r0)
        L1b:
            java.lang.String r0 = "mipushContainer"
            java.lang.Object r3 = r3.get(r0)
            java.lang.String r3 = (java.lang.String) r3
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L44
            r0 = 2
            byte[] r3 = android.util.Base64.decode(r3, r0)     // Catch: java.lang.Throwable -> L39
            com.xiaomi.push.if r0 = com.xiaomi.push.service.y.a(r3)     // Catch: java.lang.Throwable -> L39
            a(r2, r0)     // Catch: java.lang.Throwable -> L39
            a(r2, r3)     // Catch: java.lang.Throwable -> L39
            goto L3f
        L39:
            r3 = move-exception
            java.lang.String r0 = "fcm notify notification error "
            com.xiaomi.channel.commonutils.logger.b.a(r0, r3)
        L3f:
            java.util.Map r2 = a(r2)
            return r2
        L44:
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            return r2
    }

    public static void persistIfXmsfSupDecrypt(android.content.Context r6) {
            r0 = 0
            java.lang.String r1 = "mipush_extra"
            android.content.SharedPreferences r1 = r6.getSharedPreferences(r1, r0)
            android.content.SharedPreferences$Editor r1 = r1.edit()
            int r6 = com.xiaomi.push.m.b(r6)
            long r2 = (long) r6
            r4 = 50002000(0x2faf850, double:2.47042704E-316)
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 < 0) goto L18
            r0 = 1
        L18:
            java.lang.String r6 = "is_xmsf_sup_decrypt"
            android.content.SharedPreferences$Editor r6 = r1.putBoolean(r6, r0)
            r6.apply()
            return
    }

    public static void reportFCMMessageDelete() {
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.b
            java.lang.String r0 = com.xiaomi.mipush.sdk.i.c(r0)
            java.lang.String r1 = "fcm"
            r2 = 1
            java.lang.String r4 = "some fcm messages was deleted "
            com.xiaomi.mipush.sdk.MiTinyDataClient.upload(r0, r1, r2, r4)
            return
    }

    public static void uploadToken(android.content.Context r1, java.lang.String r2) {
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.b
            com.xiaomi.mipush.sdk.i.a(r1, r0, r2)
            return
    }
}

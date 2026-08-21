package com.meizu.cloud.pushsdk;

public class PushManager {
    private static final java.lang.String KEY_PUSH_ID = "pushId";
    private static final java.lang.String PUSH_ID_PREFERENCE_NAME = "com.meizu.flyme.push";
    private static final int PUSH_SUPPORT_CHECK_NOTIFICATION_MSG_VERSION_START = 6;
    public static final java.lang.String TAG = "4.1.4";

    public PushManager() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void checkNotificationMessage(android.content.Context r5) {
            java.lang.String r0 = "com.meizu.cloud"
            java.lang.String r1 = com.meizu.cloud.pushsdk.util.MzSystemUtils.getAppVersionName(r5, r0)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r5.getPackageName()
            r2.append(r3)
            java.lang.String r3 = " checkNotificationMessage cloudVersion_name "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "4.1.4"
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r2)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L68
            r2 = 0
            r4 = 1
            java.lang.String r1 = r1.substring(r2, r4)
            int r1 = java.lang.Integer.parseInt(r1)
            r2 = 6
            if (r1 < r2) goto L68
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r2 = "com.meizu.flyme.push.intent.GET_NOTIFICATION_MESSAGE"
            r1.<init>(r2)
            java.lang.String r2 = r5.getPackageName()
            java.lang.String r4 = "extra_notification_package_name"
            r1.putExtra(r4, r2)
            java.lang.String r2 = "com.meizu.cloud.pushsdk.pushservice.MzPushService"
            r1.setClassName(r0, r2)
            r5.startService(r1)     // Catch: java.lang.Exception -> L4f
            goto L68
        L4f:
            r5 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "start check notification message service error "
            r0.append(r1)
            java.lang.String r5 = r5.getMessage()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r5)
        L68:
            return
    }

    public static void checkPush(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isBrandMeizu(r1)
            if (r0 != 0) goto Le
            java.lang.String r1 = "4.1.4"
            java.lang.String r2 = "please invoke checkPush on meizu device Build-in FlymeOS"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r2)
            return
        Le:
            com.meizu.cloud.pushsdk.platform.a.b r0 = com.meizu.cloud.pushsdk.platform.a.b.a(r1)
            java.lang.String r1 = r1.getPackageName()
            r0.a(r2, r3, r1, r4)
            return
    }

    public static void checkSubScribeAlias(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isBrandMeizu(r1)
            if (r0 != 0) goto Le
            java.lang.String r1 = "4.1.4"
            java.lang.String r2 = "please invoke checkSubScribeAlias on meizu device Build-in FlymeOS"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r2)
            return
        Le:
            com.meizu.cloud.pushsdk.platform.a.b r0 = com.meizu.cloud.pushsdk.platform.a.b.a(r1)
            java.lang.String r1 = r1.getPackageName()
            r0.d(r2, r3, r1, r4)
            return
    }

    public static void checkSubScribeTags(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isBrandMeizu(r1)
            if (r0 != 0) goto Le
            java.lang.String r1 = "4.1.4"
            java.lang.String r2 = "please invoke checkSubScribeTags on meizu device Build-in FlymeOS"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r2)
            return
        Le:
            com.meizu.cloud.pushsdk.platform.a.b r0 = com.meizu.cloud.pushsdk.platform.a.b.a(r1)
            java.lang.String r1 = r1.getPackageName()
            r0.c(r2, r3, r1, r4)
            return
    }

    public static void clearNotification(android.content.Context r1) {
            com.meizu.cloud.pushsdk.platform.a.b r0 = com.meizu.cloud.pushsdk.platform.a.b.a(r1)
            java.lang.String r1 = r1.getPackageName()
            r0.a(r1)
            return
    }

    public static void clearNotification(android.content.Context r1, int... r2) {
            com.meizu.cloud.pushsdk.platform.a.b r0 = com.meizu.cloud.pushsdk.platform.a.b.a(r1)
            java.lang.String r1 = r1.getPackageName()
            r0.a(r1, r2)
            return
    }

    public static void enableCacheRequest(android.content.Context r0, boolean r1) {
            com.meizu.cloud.pushsdk.platform.a.b r0 = com.meizu.cloud.pushsdk.platform.a.b.a(r0)
            r0.a(r1)
            return
    }

    public static java.lang.String getPushId(android.content.Context r5) {
            java.lang.String r0 = r5.getPackageName()
            int r0 = com.meizu.cloud.pushsdk.util.b.b(r5, r0)
            if (r0 == 0) goto L18
            long r1 = java.lang.System.currentTimeMillis()
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 / r3
            long r3 = (long) r0
            int r0 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r0 <= 0) goto L18
            r5 = 0
            return r5
        L18:
            java.lang.String r0 = r5.getPackageName()
            java.lang.String r5 = com.meizu.cloud.pushsdk.util.b.a(r5, r0)
            return r5
    }

    @java.lang.Deprecated
    public static void register(android.content.Context r7) {
            com.meizu.cloud.pushinternal.DebugLogger.init(r7)
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isBrandMeizu(r7)
            java.lang.String r1 = "4.1.4"
            if (r0 != 0) goto L11
            java.lang.String r7 = "please invoke register on meizu device Build-in FlymeOS"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r7)
            return
        L11:
            java.lang.String r0 = "com.meizu.cloud"
            java.lang.String r2 = com.meizu.cloud.pushsdk.util.MzSystemUtils.getAppVersionName(r7, r0)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = r7.getPackageName()
            r3.append(r4)
            java.lang.String r4 = " start register cloudVersion_name "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r3)
            android.content.Intent r3 = new android.content.Intent
            java.lang.String r4 = "com.meizu.flyme.push.intent.REGISTER"
            r3.<init>(r4)
            java.lang.String r4 = com.meizu.cloud.pushsdk.util.MzSystemUtils.getMzPushServicePackageName(r7)
            boolean r4 = r0.equals(r4)
            java.lang.String r5 = "com.meizu.cloud.pushsdk.pushservice.MzPushService"
            java.lang.String r6 = "sender"
            if (r4 == 0) goto L52
        L47:
            r3.setClassName(r0, r5)
        L4a:
            java.lang.String r0 = r7.getPackageName()
            r3.putExtra(r6, r0)
            goto Lbd
        L52:
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 != 0) goto L78
            java.lang.String r4 = "4.5.7"
            boolean r4 = com.meizu.cloud.pushsdk.util.MzSystemUtils.compareVersion(r2, r4)
            if (r4 == 0) goto L78
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "flyme 4.x start register cloud versionName "
            r4.append(r5)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r2)
        L74:
            r3.setPackage(r0)
            goto L4a
        L78:
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 != 0) goto La0
            java.lang.String r4 = "3"
            boolean r4 = r2.startsWith(r4)
            if (r4 == 0) goto La0
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "flyme 3.x start register cloud versionName "
            r4.append(r5)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r2)
            java.lang.String r2 = "com.meizu.c2dm.intent.REGISTER"
            r3.setAction(r2)
            goto L74
        La0:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r7.getPackageName()
            r0.append(r2)
            java.lang.String r2 = " start register "
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
            java.lang.String r0 = r7.getPackageName()
            goto L47
        Lbd:
            r7.startService(r3)     // Catch: java.lang.Exception -> Lc1
            goto Lda
        Lc1:
            r7 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "start register service error "
            r0.append(r2)
            java.lang.String r7 = r7.getMessage()
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r7)
        Lda:
            return
    }

    public static void register(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            com.meizu.cloud.pushinternal.DebugLogger.init(r1)
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isBrandMeizu(r1)
            if (r0 != 0) goto L11
            java.lang.String r1 = "4.1.4"
            java.lang.String r2 = "please invoke register on meizu device Build-in FlymeOS"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r2)
            return
        L11:
            com.meizu.cloud.pushsdk.platform.a.b r0 = com.meizu.cloud.pushsdk.platform.a.b.a(r1)
            java.lang.String r1 = r1.getPackageName()
            r0.a(r2, r3, r1)
            return
    }

    public static void subScribeAlias(android.content.Context r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isBrandMeizu(r6)
            if (r0 != 0) goto Le
            java.lang.String r6 = "4.1.4"
            java.lang.String r7 = "please invoke subScribeAlias on meizu device Build-in FlymeOS"
            com.meizu.cloud.pushinternal.DebugLogger.e(r6, r7)
            return
        Le:
            com.meizu.cloud.pushsdk.platform.a.b r0 = com.meizu.cloud.pushsdk.platform.a.b.a(r6)
            java.lang.String r3 = r6.getPackageName()
            r1 = r7
            r2 = r8
            r4 = r9
            r5 = r10
            r0.c(r1, r2, r3, r4, r5)
            return
    }

    public static void subScribeTags(android.content.Context r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isBrandMeizu(r6)
            if (r0 != 0) goto Le
            java.lang.String r6 = "4.1.4"
            java.lang.String r7 = "please invoke subScribeTags on meizu device Build-in FlymeOS"
            com.meizu.cloud.pushinternal.DebugLogger.e(r6, r7)
            return
        Le:
            com.meizu.cloud.pushsdk.platform.a.b r0 = com.meizu.cloud.pushsdk.platform.a.b.a(r6)
            java.lang.String r3 = r6.getPackageName()
            r1 = r7
            r2 = r8
            r4 = r9
            r5 = r10
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    public static void switchPush(android.content.Context r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, int r11, boolean r12) {
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isBrandMeizu(r7)
            if (r0 != 0) goto Le
            java.lang.String r7 = "4.1.4"
            java.lang.String r8 = "please invoke switchPush on meizu device Build-in FlymeOS"
            com.meizu.cloud.pushinternal.DebugLogger.e(r7, r8)
            return
        Le:
            com.meizu.cloud.pushsdk.platform.a.b r0 = com.meizu.cloud.pushsdk.platform.a.b.a(r7)
            java.lang.String r3 = r7.getPackageName()
            r1 = r8
            r2 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r0.a(r1, r2, r3, r4, r5, r6)
            return
    }

    public static void switchPush(android.content.Context r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, boolean r10) {
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isBrandMeizu(r6)
            if (r0 != 0) goto Le
            java.lang.String r6 = "4.1.4"
            java.lang.String r7 = "please invoke switchPush on meizu device Build-in FlymeOS"
            com.meizu.cloud.pushinternal.DebugLogger.e(r6, r7)
            return
        Le:
            com.meizu.cloud.pushsdk.platform.a.b r0 = com.meizu.cloud.pushsdk.platform.a.b.a(r6)
            java.lang.String r3 = r6.getPackageName()
            r1 = r7
            r2 = r8
            r4 = r9
            r5 = r10
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    @java.lang.Deprecated
    public static void unRegister(android.content.Context r7) {
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isBrandMeizu(r7)
            java.lang.String r1 = "4.1.4"
            if (r0 != 0) goto Le
            java.lang.String r7 = "please invoke unRegister on meizu device Build-in FlymeOS"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r7)
            return
        Le:
            java.lang.String r0 = "com.meizu.cloud"
            java.lang.String r2 = com.meizu.cloud.pushsdk.util.MzSystemUtils.getAppVersionName(r7, r0)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = r7.getPackageName()
            r3.append(r4)
            java.lang.String r4 = " start unRegister cloud versionName "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r3)
            android.content.Intent r3 = new android.content.Intent
            java.lang.String r4 = "com.meizu.flyme.push.intent.UNREGISTER"
            r3.<init>(r4)
            java.lang.String r4 = com.meizu.cloud.pushsdk.util.MzSystemUtils.getMzPushServicePackageName(r7)
            boolean r4 = r0.equals(r4)
            java.lang.String r5 = "com.meizu.cloud.pushsdk.pushservice.MzPushService"
            java.lang.String r6 = "sender"
            if (r4 == 0) goto L4f
        L44:
            r3.setClassName(r0, r5)
        L47:
            java.lang.String r0 = r7.getPackageName()
            r3.putExtra(r6, r0)
            goto L92
        L4f:
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 != 0) goto L61
            java.lang.String r4 = "4.5.7"
            boolean r4 = com.meizu.cloud.pushsdk.util.MzSystemUtils.compareVersion(r2, r4)
            if (r4 == 0) goto L61
        L5d:
            r3.setPackage(r0)
            goto L47
        L61:
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 != 0) goto L75
            java.lang.String r4 = "3"
            boolean r2 = r2.startsWith(r4)
            if (r2 == 0) goto L75
            java.lang.String r2 = "com.meizu.c2dm.intent.UNREGISTER"
            r3.setAction(r2)
            goto L5d
        L75:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r7.getPackageName()
            r0.append(r2)
            java.lang.String r2 = " start unRegister "
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
            java.lang.String r0 = r7.getPackageName()
            goto L44
        L92:
            r7.startService(r3)     // Catch: java.lang.Exception -> L96
            goto Laf
        L96:
            r7 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "start unRegister service error "
            r0.append(r2)
            java.lang.String r7 = r7.getMessage()
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r7)
        Laf:
            return
    }

    public static void unRegister(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isBrandMeizu(r1)
            if (r0 != 0) goto Le
            java.lang.String r1 = "4.1.4"
            java.lang.String r2 = "please invoke unRegister on meizu device Build-in FlymeOS"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r2)
            return
        Le:
            com.meizu.cloud.pushsdk.platform.a.b r0 = com.meizu.cloud.pushsdk.platform.a.b.a(r1)
            java.lang.String r1 = r1.getPackageName()
            r0.b(r2, r3, r1)
            return
    }

    public static void unSubScribeAlias(android.content.Context r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isBrandMeizu(r6)
            if (r0 != 0) goto Le
            java.lang.String r6 = "4.1.4"
            java.lang.String r7 = "please invoke unSubScribeAlias on meizu device Build-in FlymeOS"
            com.meizu.cloud.pushinternal.DebugLogger.e(r6, r7)
            return
        Le:
            com.meizu.cloud.pushsdk.platform.a.b r0 = com.meizu.cloud.pushsdk.platform.a.b.a(r6)
            java.lang.String r3 = r6.getPackageName()
            r1 = r7
            r2 = r8
            r4 = r9
            r5 = r10
            r0.d(r1, r2, r3, r4, r5)
            return
    }

    public static void unSubScribeAllTags(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isBrandMeizu(r1)
            if (r0 != 0) goto Le
            java.lang.String r1 = "4.1.4"
            java.lang.String r2 = "please invoke unSubScribeAllTags on meizu device Build-in FlymeOS"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r2)
            return
        Le:
            com.meizu.cloud.pushsdk.platform.a.b r0 = com.meizu.cloud.pushsdk.platform.a.b.a(r1)
            java.lang.String r1 = r1.getPackageName()
            r0.b(r2, r3, r1, r4)
            return
    }

    public static void unSubScribeTags(android.content.Context r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isBrandMeizu(r6)
            if (r0 != 0) goto Le
            java.lang.String r6 = "4.1.4"
            java.lang.String r7 = "please invoke unSubScribeTags on meizu device Build-in FlymeOS"
            com.meizu.cloud.pushinternal.DebugLogger.e(r6, r7)
            return
        Le:
            com.meizu.cloud.pushsdk.platform.a.b r0 = com.meizu.cloud.pushsdk.platform.a.b.a(r6)
            java.lang.String r3 = r6.getPackageName()
            r1 = r7
            r2 = r8
            r4 = r9
            r5 = r10
            r0.b(r1, r2, r3, r4, r5)
            return
    }
}

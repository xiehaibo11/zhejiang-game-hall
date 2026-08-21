package com.tencent.tauth;

public class Tencent {
    public static final int REQUEST_LOGIN = 10001;
    public static boolean USE_ONE_HOUR;
    private static com.tencent.tauth.Tencent c;
    private static boolean d;
    public static boolean disableResetOrientation;
    private final com.tencent.connect.auth.c a;
    private java.lang.String b;

    static {
            return
    }

    private Tencent(java.lang.String r2, android.content.Context r3) {
            r1 = this;
            r1.<init>()
            com.tencent.connect.auth.c r0 = com.tencent.connect.auth.c.a(r2, r3)
            r1.a = r0
            com.tencent.open.b.b r0 = com.tencent.open.b.b.a()
            r0.a(r2, r3)
            com.tencent.open.utils.f r2 = com.tencent.open.utils.f.a()
            r2.a(r3)
            return
    }

    private static java.lang.String a(java.lang.Object... r4) {
            java.lang.String r0 = ""
            if (r4 == 0) goto L37
            int r1 = r4.length
            if (r1 != 0) goto L8
            goto L37
        L8:
            int r1 = r4.length
            int r1 = r1 % 2
            if (r1 == 0) goto Le
            return r0
        Le:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r4.length
            r2 = 0
        L15:
            if (r2 >= r1) goto L32
            if (r2 <= 0) goto L1e
            r3 = 124(0x7c, float:1.74E-43)
            r0.append(r3)
        L1e:
            r3 = r4[r2]
            r0.append(r3)
            r3 = 58
            r0.append(r3)
            int r3 = r2 + 1
            r3 = r4[r3]
            r0.append(r3)
            int r2 = r2 + 2
            goto L15
        L32:
            java.lang.String r4 = r0.toString()
            return r4
        L37:
            return r0
    }

    private static void a(java.lang.String r1, java.lang.Object r2) {
            com.tencent.open.b.b r0 = com.tencent.open.b.b.a()
            r0.a(r1, r2)
            return
    }

    private static void a(java.lang.String r1, java.lang.Object... r2) {
            java.lang.String r2 = a(r2)
            com.tencent.open.b.b r0 = com.tencent.open.b.b.a()
            r0.a(r1, r2)
            return
    }

    private static boolean a(android.content.Context r7, java.lang.String r8) {
            java.lang.String r0 = "checkManifestConfig exception"
            java.lang.String r1 = "openSDK_LOG.Tencent"
            r2 = 128(0x80, float:1.8E-43)
            r3 = 0
            android.content.ComponentName r4 = new android.content.ComponentName     // Catch: java.lang.Throwable -> L1a android.content.pm.PackageManager.NameNotFoundException -> L5f
            java.lang.String r5 = r7.getPackageName()     // Catch: java.lang.Throwable -> L1a android.content.pm.PackageManager.NameNotFoundException -> L5f
            java.lang.String r6 = "com.tencent.tauth.AuthActivity"
            r4.<init>(r5, r6)     // Catch: java.lang.Throwable -> L1a android.content.pm.PackageManager.NameNotFoundException -> L5f
            android.content.pm.PackageManager r5 = r7.getPackageManager()     // Catch: java.lang.Throwable -> L1a android.content.pm.PackageManager.NameNotFoundException -> L5f
            r5.getActivityInfo(r4, r2)     // Catch: java.lang.Throwable -> L1a android.content.pm.PackageManager.NameNotFoundException -> L5f
            goto L1e
        L1a:
            r8 = move-exception
            com.tencent.open.log.SLog.e(r1, r0, r8)
        L1e:
            android.content.ComponentName r8 = new android.content.ComponentName     // Catch: java.lang.Throwable -> L31 android.content.pm.PackageManager.NameNotFoundException -> L37
            java.lang.String r4 = r7.getPackageName()     // Catch: java.lang.Throwable -> L31 android.content.pm.PackageManager.NameNotFoundException -> L37
            java.lang.String r5 = "com.tencent.connect.common.AssistActivity"
            r8.<init>(r4, r5)     // Catch: java.lang.Throwable -> L31 android.content.pm.PackageManager.NameNotFoundException -> L37
            android.content.pm.PackageManager r7 = r7.getPackageManager()     // Catch: java.lang.Throwable -> L31 android.content.pm.PackageManager.NameNotFoundException -> L37
            r7.getActivityInfo(r8, r2)     // Catch: java.lang.Throwable -> L31 android.content.pm.PackageManager.NameNotFoundException -> L37
            goto L35
        L31:
            r7 = move-exception
            com.tencent.open.log.SLog.e(r1, r0, r7)
        L35:
            r7 = 1
            return r7
        L37:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "没有在AndroidManifest.xml中检测到com.tencent.connect.common.AssistActivity,请加上com.tencent.connect.common.AssistActivity,详细信息请查看官网文档."
            r7.append(r8)
            java.lang.String r8 = "\n配置示例如下: \n<activity\n     android:name=\"com.tencent.connect.common.AssistActivity\"\n     android:screenOrientation=\"behind\"\n     android:theme=\"@android:style/Theme.Translucent.NoTitleBar\"\n     android:configChanges=\"orientation|keyboardHidden\">\n</activity>"
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "AndroidManifest.xml 没有检测到com.tencent.connect.common.AssistActivity\n"
            r8.append(r0)
            r8.append(r7)
            java.lang.String r7 = r8.toString()
            com.tencent.open.log.SLog.e(r1, r7)
            return r3
        L5f:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "没有在AndroidManifest.xml中检测到com.tencent.tauth.AuthActivity,请加上com.tencent.tauth.AuthActivity,并配置<data android:scheme=\"tencent"
            r7.append(r0)
            r7.append(r8)
            java.lang.String r0 = "\" />,详细信息请查看官网文档."
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r7)
            java.lang.String r7 = "\n配置示例如下: \n<activity\n     android:name=\"com.tencent.tauth.AuthActivity\"\n     android:noHistory=\"true\"\n     android:launchMode=\"singleTask\">\n<intent-filter>\n    <action android:name=\"android.intent.action.VIEW\" />\n    <category android:name=\"android.intent.category.DEFAULT\" />\n    <category android:name=\"android.intent.category.BROWSABLE\" />\n    <data android:scheme=\"tencent"
            r0.append(r7)
            r0.append(r8)
            java.lang.String r7 = "\" />\n</intent-filter>\n</activity>"
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "AndroidManifest.xml 没有检测到com.tencent.tauth.AuthActivity"
            r8.append(r0)
            r8.append(r7)
            java.lang.String r7 = r8.toString()
            com.tencent.open.log.SLog.e(r1, r7)
            return r3
    }

    public static synchronized com.tencent.tauth.Tencent createInstance(java.lang.String r5, android.content.Context r6) {
            java.lang.Class<com.tencent.tauth.Tencent> r0 = com.tencent.tauth.Tencent.class
            monitor-enter(r0)
            android.content.Context r1 = r6.getApplicationContext()     // Catch: java.lang.Throwable -> L82
            com.tencent.open.utils.g.a(r1)     // Catch: java.lang.Throwable -> L82
            java.lang.String r1 = "openSDK_LOG.Tencent"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L82
            r2.<init>()     // Catch: java.lang.Throwable -> L82
            java.lang.String r3 = "createInstance()  -- start, appId = "
            r2.append(r3)     // Catch: java.lang.Throwable -> L82
            r2.append(r5)     // Catch: java.lang.Throwable -> L82
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L82
            com.tencent.open.log.SLog.i(r1, r2)     // Catch: java.lang.Throwable -> L82
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L82
            r2 = 0
            if (r1 == 0) goto L30
            java.lang.String r5 = "openSDK_LOG.Tencent"
            java.lang.String r6 = "appId should not be empty!"
            com.tencent.open.log.SLog.e(r5, r6)     // Catch: java.lang.Throwable -> L82
            monitor-exit(r0)
            return r2
        L30:
            com.tencent.tauth.Tencent r1 = com.tencent.tauth.Tencent.c     // Catch: java.lang.Throwable -> L82
            if (r1 != 0) goto L3c
            com.tencent.tauth.Tencent r1 = new com.tencent.tauth.Tencent     // Catch: java.lang.Throwable -> L82
            r1.<init>(r5, r6)     // Catch: java.lang.Throwable -> L82
            com.tencent.tauth.Tencent.c = r1     // Catch: java.lang.Throwable -> L82
            goto L54
        L3c:
            com.tencent.tauth.Tencent r1 = com.tencent.tauth.Tencent.c     // Catch: java.lang.Throwable -> L82
            java.lang.String r1 = r1.getAppId()     // Catch: java.lang.Throwable -> L82
            boolean r1 = r5.equals(r1)     // Catch: java.lang.Throwable -> L82
            if (r1 != 0) goto L54
            com.tencent.tauth.Tencent r1 = com.tencent.tauth.Tencent.c     // Catch: java.lang.Throwable -> L82
            r1.logout(r6)     // Catch: java.lang.Throwable -> L82
            com.tencent.tauth.Tencent r1 = new com.tencent.tauth.Tencent     // Catch: java.lang.Throwable -> L82
            r1.<init>(r5, r6)     // Catch: java.lang.Throwable -> L82
            com.tencent.tauth.Tencent.c = r1     // Catch: java.lang.Throwable -> L82
        L54:
            boolean r1 = a(r6, r5)     // Catch: java.lang.Throwable -> L82
            if (r1 != 0) goto L5c
            monitor-exit(r0)
            return r2
        L5c:
            java.lang.String r1 = "createInstance"
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L82
            r3 = 0
            java.lang.String r4 = "appid"
            r2[r3] = r4     // Catch: java.lang.Throwable -> L82
            r3 = 1
            r2[r3] = r5     // Catch: java.lang.Throwable -> L82
            a(r1, r2)     // Catch: java.lang.Throwable -> L82
            com.tencent.open.utils.i r5 = com.tencent.open.utils.i.a(r6, r5)     // Catch: java.lang.Throwable -> L82
            com.tencent.open.a.f r6 = com.tencent.open.a.f.a()     // Catch: java.lang.Throwable -> L82
            r6.a(r5)     // Catch: java.lang.Throwable -> L82
            java.lang.String r5 = "openSDK_LOG.Tencent"
            java.lang.String r6 = "createInstance()  -- end"
            com.tencent.open.log.SLog.i(r5, r6)     // Catch: java.lang.Throwable -> L82
            com.tencent.tauth.Tencent r5 = com.tencent.tauth.Tencent.c     // Catch: java.lang.Throwable -> L82
            monitor-exit(r0)
            return r5
        L82:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
    }

    public static synchronized com.tencent.tauth.Tencent createInstance(java.lang.String r5, android.content.Context r6, java.lang.String r7) {
            java.lang.Class<com.tencent.tauth.Tencent> r0 = com.tencent.tauth.Tencent.class
            monitor-enter(r0)
            com.tencent.tauth.Tencent r6 = createInstance(r5, r6)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r1 = "openSDK_LOG.Tencent"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4b
            r2.<init>()     // Catch: java.lang.Throwable -> L4b
            java.lang.String r3 = "createInstance()  -- start, appId = "
            r2.append(r3)     // Catch: java.lang.Throwable -> L4b
            r2.append(r5)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r3 = ", authorities="
            r2.append(r3)     // Catch: java.lang.Throwable -> L4b
            r2.append(r7)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L4b
            com.tencent.open.log.SLog.i(r1, r2)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r1 = "createInstance_authority"
            r2 = 4
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L4b
            r3 = 0
            java.lang.String r4 = "appid"
            r2[r3] = r4     // Catch: java.lang.Throwable -> L4b
            r3 = 1
            r2[r3] = r5     // Catch: java.lang.Throwable -> L4b
            r5 = 2
            java.lang.String r3 = "authorities"
            r2[r5] = r3     // Catch: java.lang.Throwable -> L4b
            r5 = 3
            r2[r5] = r7     // Catch: java.lang.Throwable -> L4b
            a(r1, r2)     // Catch: java.lang.Throwable -> L4b
            if (r6 == 0) goto L42
            r6.b = r7     // Catch: java.lang.Throwable -> L4b
            goto L49
        L42:
            java.lang.String r5 = "openSDK_LOG.Tencent"
            java.lang.String r7 = "null == tencent set mAuthorities fail"
            com.tencent.open.log.SLog.i(r5, r7)     // Catch: java.lang.Throwable -> L4b
        L49:
            monitor-exit(r0)
            return r6
        L4b:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
    }

    public static synchronized java.lang.String getAuthorities(java.lang.String r5) {
            java.lang.Class<com.tencent.tauth.Tencent> r0 = com.tencent.tauth.Tencent.class
            monitor-enter(r0)
            java.lang.String r1 = "getAuthorities"
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L45
            r3 = 0
            java.lang.String r4 = "appid"
            r2[r3] = r4     // Catch: java.lang.Throwable -> L45
            r3 = 1
            r2[r3] = r5     // Catch: java.lang.Throwable -> L45
            a(r1, r2)     // Catch: java.lang.Throwable -> L45
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L45
            r2 = 0
            if (r1 == 0) goto L23
            java.lang.String r5 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "TextUtils.isEmpty(appId)"
            com.tencent.open.log.SLog.i(r5, r1)     // Catch: java.lang.Throwable -> L45
            monitor-exit(r0)
            return r2
        L23:
            com.tencent.tauth.Tencent r1 = com.tencent.tauth.Tencent.c     // Catch: java.lang.Throwable -> L45
            if (r1 != 0) goto L30
            java.lang.String r5 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "sInstance == null"
            com.tencent.open.log.SLog.i(r5, r1)     // Catch: java.lang.Throwable -> L45
            monitor-exit(r0)
            return r2
        L30:
            com.tencent.tauth.Tencent r1 = com.tencent.tauth.Tencent.c     // Catch: java.lang.Throwable -> L45
            java.lang.String r1 = r1.getAppId()     // Catch: java.lang.Throwable -> L45
            boolean r5 = r5.equals(r1)     // Catch: java.lang.Throwable -> L45
            if (r5 == 0) goto L41
            com.tencent.tauth.Tencent r5 = com.tencent.tauth.Tencent.c     // Catch: java.lang.Throwable -> L45
            java.lang.String r5 = r5.b     // Catch: java.lang.Throwable -> L45
            goto L43
        L41:
            java.lang.String r5 = ""
        L43:
            monitor-exit(r0)
            return r5
        L45:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
    }

    public static void handleResultData(android.content.Intent r4, com.tencent.tauth.IUiListener r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "handleResultData() data = null ? "
            r0.append(r1)
            r1 = 1
            r2 = 0
            if (r4 != 0) goto L10
            r3 = 1
            goto L11
        L10:
            r3 = 0
        L11:
            r0.append(r3)
            java.lang.String r3 = ", listener = null ? "
            r0.append(r3)
            if (r5 != 0) goto L1c
            goto L1d
        L1c:
            r1 = 0
        L1d:
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r1, r0)
            java.lang.Object[] r0 = new java.lang.Object[r2]
            java.lang.String r1 = "handleResultData"
            a(r1, r0)
            com.tencent.connect.common.UIListenerManager r0 = com.tencent.connect.common.UIListenerManager.getInstance()
            r0.handleDataToListener(r4, r5)
            return
    }

    public static boolean isPermissionNotGranted() {
            boolean r0 = com.tencent.tauth.Tencent.d
            if (r0 == 0) goto L15
            com.tencent.open.utils.f r0 = com.tencent.open.utils.f.a()
            java.lang.String r0 = r0.b()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L13
            goto L15
        L13:
            r0 = 0
            goto L16
        L15:
            r0 = 1
        L16:
            return r0
    }

    public static boolean isSupportPushToQZone(android.content.Context r2) {
            java.lang.String r0 = "5.9.5"
            int r2 = com.tencent.open.utils.k.c(r2, r0)
            if (r2 >= 0) goto La
            r2 = 0
            goto Lb
        La:
            r2 = 1
        Lb:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "isSupportPushToQZone() support="
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r1, r0)
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r2)
            java.lang.String r1 = "isSupportPushToQZone"
            a(r1, r0)
            return r2
    }

    public static boolean isSupportShareToQQ(android.content.Context r4) {
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "isSupportShareToQQ()"
            com.tencent.open.log.SLog.i(r0, r1)
            boolean r1 = com.tencent.open.utils.m.c(r4)
            java.lang.String r2 = "isSupportShareToQQ"
            r3 = 1
            if (r1 == 0) goto L20
            java.lang.String r1 = "com.tencent.minihd.qq"
            java.lang.String r1 = com.tencent.open.utils.k.a(r4, r1)
            if (r1 == 0) goto L20
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r3)
            a(r2, r4)
            return r3
        L20:
            java.lang.String r1 = "4.1"
            int r1 = com.tencent.open.utils.k.c(r4, r1)
            if (r1 >= 0) goto L31
            java.lang.String r1 = "com.tencent.tim"
            java.lang.String r4 = com.tencent.open.utils.k.a(r4, r1)
            if (r4 != 0) goto L31
            r3 = 0
        L31:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "isSupportShareToQQ() support="
            r4.append(r1)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            com.tencent.open.log.SLog.i(r0, r4)
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r3)
            a(r2, r4)
            return r3
    }

    public static boolean onActivityResultData(int r4, int r5, android.content.Intent r6, com.tencent.tauth.IUiListener r7) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onActivityResultData() reqcode = "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = ", resultcode = "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r1 = ", data = null ? "
            r0.append(r1)
            r1 = 1
            r2 = 0
            if (r6 != 0) goto L20
            r3 = 1
            goto L21
        L20:
            r3 = 0
        L21:
            r0.append(r3)
            java.lang.String r3 = ", listener = null ? "
            r0.append(r3)
            if (r7 != 0) goto L2d
            r3 = 1
            goto L2e
        L2d:
            r3 = 0
        L2e:
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r3, r0)
            r0 = 4
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r3 = "requestCode"
            r0[r2] = r3
            java.lang.Integer r2 = java.lang.Integer.valueOf(r4)
            r0[r1] = r2
            r1 = 2
            java.lang.String r2 = "resultCode"
            r0[r1] = r2
            r1 = 3
            java.lang.Integer r2 = java.lang.Integer.valueOf(r5)
            r0[r1] = r2
            java.lang.String r1 = "onActivityResultData"
            a(r1, r0)
            com.tencent.connect.common.UIListenerManager r0 = com.tencent.connect.common.UIListenerManager.getInstance()
            boolean r4 = r0.onActivityResult(r4, r5, r6, r7)
            return r4
    }

    public static java.util.Map<java.lang.String, java.lang.String> parseMiniParameters(android.content.Intent r9) {
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "parseMiniParameters"
            a(r2, r1)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            java.lang.String r2 = "openSDK_LOG.Tencent"
            if (r9 != 0) goto L17
            java.lang.String r9 = "parseMiniParameters null == intent"
            com.tencent.open.log.SLog.e(r2, r9)
            return r1
        L17:
            java.lang.String r3 = "appParameter"
            java.lang.String r3 = r9.getStringExtra(r3)     // Catch: java.lang.Exception -> Lbd
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Lbd
            if (r4 != 0) goto L55
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lbd
            r9.<init>()     // Catch: java.lang.Exception -> Lbd
            java.lang.String r0 = "parseMiniParameters appParameter="
            r9.append(r0)     // Catch: java.lang.Exception -> Lbd
            r9.append(r3)     // Catch: java.lang.Exception -> Lbd
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> Lbd
            com.tencent.open.log.SLog.d(r2, r9)     // Catch: java.lang.Exception -> Lbd
            org.json.JSONObject r9 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lbd
            r9.<init>(r3)     // Catch: java.lang.Exception -> Lbd
            java.util.Iterator r0 = r9.keys()     // Catch: java.lang.Exception -> Lbd
        L40:
            boolean r3 = r0.hasNext()     // Catch: java.lang.Exception -> Lbd
            if (r3 == 0) goto L54
            java.lang.Object r3 = r0.next()     // Catch: java.lang.Exception -> Lbd
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> Lbd
            java.lang.String r4 = r9.getString(r3)     // Catch: java.lang.Exception -> Lbd
            r1.put(r3, r4)     // Catch: java.lang.Exception -> Lbd
            goto L40
        L54:
            return r1
        L55:
            android.net.Uri r9 = r9.getData()     // Catch: java.lang.Exception -> Lbd
            if (r9 != 0) goto L61
            java.lang.String r9 = "parseMiniParameters uri==null"
            com.tencent.open.log.SLog.d(r2, r9)     // Catch: java.lang.Exception -> Lbd
            return r1
        L61:
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> Lbd
            boolean r3 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> Lbd
            if (r3 == 0) goto L71
            java.lang.String r9 = "parseMiniParameters uriStr isEmpty"
            com.tencent.open.log.SLog.d(r2, r9)     // Catch: java.lang.Exception -> Lbd
            return r1
        L71:
            r3 = 63
            int r3 = r9.lastIndexOf(r3)     // Catch: java.lang.Exception -> Lbd
            r4 = 1
            int r3 = r3 + r4
            java.lang.String r9 = r9.substring(r3)     // Catch: java.lang.Exception -> Lbd
            boolean r3 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> Lbd
            if (r3 == 0) goto L89
            java.lang.String r9 = "parseMiniParameters uriParam is empty"
            com.tencent.open.log.SLog.d(r2, r9)     // Catch: java.lang.Exception -> Lbd
            return r1
        L89:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lbd
            r3.<init>()     // Catch: java.lang.Exception -> Lbd
            java.lang.String r5 = "parseMiniParameters uriParam="
            r3.append(r5)     // Catch: java.lang.Exception -> Lbd
            r3.append(r9)     // Catch: java.lang.Exception -> Lbd
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Lbd
            com.tencent.open.log.SLog.d(r2, r3)     // Catch: java.lang.Exception -> Lbd
            java.lang.String r3 = "&"
            java.lang.String[] r9 = r9.split(r3)     // Catch: java.lang.Exception -> Lbd
            int r3 = r9.length     // Catch: java.lang.Exception -> Lbd
            r5 = 0
        La5:
            if (r5 >= r3) goto Lc3
            r6 = r9[r5]     // Catch: java.lang.Exception -> Lbd
            java.lang.String r7 = "="
            java.lang.String[] r6 = r6.split(r7)     // Catch: java.lang.Exception -> Lbd
            int r7 = r6.length     // Catch: java.lang.Exception -> Lbd
            r8 = 2
            if (r7 != r8) goto Lba
            r7 = r6[r0]     // Catch: java.lang.Exception -> Lbd
            r6 = r6[r4]     // Catch: java.lang.Exception -> Lbd
            r1.put(r7, r6)     // Catch: java.lang.Exception -> Lbd
        Lba:
            int r5 = r5 + 1
            goto La5
        Lbd:
            r9 = move-exception
            java.lang.String r0 = "parseMiniParameters Exception"
            com.tencent.open.log.SLog.e(r2, r0, r9)
        Lc3:
            return r1
    }

    public static void resetQQAppInfoCache() {
            java.lang.String r0 = "com.tencent.mobileqq"
            com.tencent.open.utils.k.a(r0)
            return
    }

    public static void resetTargetAppInfoCache() {
            com.tencent.open.utils.k.a()
            return
    }

    public static void resetTimAppInfoCache() {
            java.lang.String r0 = "com.tencent.tim"
            com.tencent.open.utils.k.a(r0)
            return
    }

    public static void setCustomLogger(com.tencent.open.log.Tracer r2) {
            java.lang.String r0 = "setCustomLogger"
            java.lang.String r1 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r1, r0)
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            a(r0, r1)
            com.tencent.open.log.SLog r0 = com.tencent.open.log.SLog.getInstance()
            r0.setCustomLogger(r2)
            return
    }

    public static void setIsPermissionGranted(boolean r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setIsPermissionGranted, isPermissionGranted: "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r1, r0)
            if (r2 == 0) goto L36
            com.tencent.open.utils.f r0 = com.tencent.open.utils.f.a()
            android.content.Context r1 = com.tencent.open.utils.g.a()
            r0.a(r1)
            com.tencent.open.utils.f r0 = com.tencent.open.utils.f.a()
            java.lang.String r0 = r0.b()
            if (r0 == 0) goto L33
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto L38
        L33:
            java.lang.String r0 = android.os.Build.MODEL
            goto L38
        L36:
            java.lang.String r0 = ""
        L38:
            setIsPermissionGranted(r2, r0)
            return
    }

    public static void setIsPermissionGranted(boolean r3, java.lang.String r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setIsPermissionGranted, isPermissionGranted: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = ", model = "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r1, r0)
            r0 = 0
            if (r3 == 0) goto L47
            if (r4 == 0) goto L2d
            java.lang.String r2 = r4.trim()
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L48
        L2d:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r2 = "setIsPermissionGranted error! model= ["
            r3.append(r2)
            r3.append(r4)
            java.lang.String r4 = "]"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.tencent.open.log.SLog.e(r1, r3)
            r3 = 0
        L47:
            r4 = r0
        L48:
            com.tencent.tauth.Tencent.d = r3
            com.tencent.open.utils.f r3 = com.tencent.open.utils.f.a()
            android.content.Context r0 = com.tencent.open.utils.g.a()
            r3.a(r0, r4)
            return
    }

    public void bindQQGroup(android.app.Activity r4, java.lang.String r5, java.lang.String r6, com.tencent.tauth.IUiListener r7) {
            r3 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "bindQQGroup()"
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 4
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = "organizationId"
            r0[r1] = r2
            r1 = 1
            r0[r1] = r5
            r1 = 2
            java.lang.String r2 = "organizationName"
            r0[r1] = r2
            r1 = 3
            r0[r1] = r6
            java.lang.String r1 = "bindQQGroup"
            a(r1, r0)
            com.tencent.open.SocialOperation r0 = new com.tencent.open.SocialOperation
            com.tencent.connect.auth.QQToken r1 = r3.getQQToken()
            r0.<init>(r1)
            r0.bindQQGroup(r4, r5, r6, r7)
            return
    }

    public void callCommonChannelApi(android.app.Activity r4, android.os.Bundle r5, com.tencent.tauth.IUiListener r6) {
            r3 = this;
            com.tencent.connect.commonchannel.CommonChannelApi r0 = new com.tencent.connect.commonchannel.CommonChannelApi
            com.tencent.connect.auth.c r1 = r3.a
            com.tencent.connect.auth.QQToken r2 = r1.b()
            r0.<init>(r1, r2)
            int r4 = r0.launchQQ(r4, r5, r6)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "callCommonChannelApi ret: "
            r5.append(r6)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            java.lang.String r5 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r5, r4)
            return
    }

    public void checkLogin(com.tencent.tauth.IUiListener r3) {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "checkLogin()"
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "checkLogin"
            a(r1, r0)
            com.tencent.connect.auth.c r0 = r2.a
            r0.a(r3)
            return
    }

    public java.lang.String getAccessToken() {
            r3 = this;
            com.tencent.connect.auth.c r0 = r3.a
            com.tencent.connect.auth.QQToken r0 = r0.b()
            java.lang.String r0 = r0.getAccessToken()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getAccessToken() accessToken = "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r2, r1)
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = "getAccessToken"
            a(r2, r1)
            return r0
    }

    public java.lang.String getAppId() {
            r3 = this;
            com.tencent.connect.auth.c r0 = r3.a
            com.tencent.connect.auth.QQToken r0 = r0.b()
            java.lang.String r0 = r0.getAppId()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getAppId() appid ="
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r2, r1)
            java.lang.String r1 = "getAppId"
            a(r1, r0)
            return r0
    }

    public long getExpiresIn() {
            r4 = this;
            com.tencent.connect.auth.c r0 = r4.a
            com.tencent.connect.auth.QQToken r0 = r0.b()
            long r0 = r0.getExpireTimeInSecond()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getExpiresIn() expiresin= "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r3, r2)
            java.lang.Long r2 = java.lang.Long.valueOf(r0)
            java.lang.String r3 = "getExpiresIn"
            a(r3, r2)
            return r0
    }

    public java.lang.String getOpenId() {
            r3 = this;
            com.tencent.connect.auth.c r0 = r3.a
            com.tencent.connect.auth.QQToken r0 = r0.b()
            java.lang.String r0 = r0.getOpenId()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getOpenId() openid= "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r2, r1)
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = "getOpenId"
            a(r2, r1)
            return r0
    }

    public com.tencent.connect.auth.QQToken getQQToken() {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "getQQToken()"
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "getQQToken"
            a(r1, r0)
            com.tencent.connect.auth.c r0 = r2.a
            com.tencent.connect.auth.QQToken r0 = r0.b()
            return r0
    }

    @java.lang.Deprecated
    public void handleLoginData(android.content.Intent r5, com.tencent.tauth.IUiListener r6) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "handleLoginData() data = null ? "
            r0.append(r1)
            r1 = 1
            r2 = 0
            if (r5 != 0) goto L10
            r3 = 1
            goto L11
        L10:
            r3 = 0
        L11:
            r0.append(r3)
            java.lang.String r3 = ", listener = null ? "
            r0.append(r3)
            if (r6 != 0) goto L1c
            goto L1d
        L1c:
            r1 = 0
        L1d:
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r1, r0)
            java.lang.Object[] r0 = new java.lang.Object[r2]
            java.lang.String r1 = "handleLoginData"
            a(r1, r0)
            com.tencent.connect.common.UIListenerManager r0 = com.tencent.connect.common.UIListenerManager.getInstance()
            r0.handleDataToListener(r5, r6)
            return
    }

    public void initSessionCache(org.json.JSONObject r4) {
            r3 = this;
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "initSessionCache"
            a(r1, r0)
            java.lang.String r0 = "access_token"
            java.lang.String r0 = r4.getString(r0)     // Catch: java.lang.Exception -> L3a
            java.lang.String r1 = "expires_in"
            java.lang.String r1 = r4.getString(r1)     // Catch: java.lang.Exception -> L3a
            java.lang.String r2 = "openid"
            java.lang.String r4 = r4.getString(r2)     // Catch: java.lang.Exception -> L3a
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L3a
            if (r2 != 0) goto L32
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L3a
            if (r2 != 0) goto L32
            boolean r2 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L3a
            if (r2 != 0) goto L32
            r3.setAccessToken(r0, r1)     // Catch: java.lang.Exception -> L3a
            r3.setOpenId(r4)     // Catch: java.lang.Exception -> L3a
        L32:
            java.lang.String r4 = "openSDK_LOG.Tencent"
            java.lang.String r0 = "initSessionCache()"
            com.tencent.open.log.SLog.i(r4, r0)     // Catch: java.lang.Exception -> L3a
            goto L55
        L3a:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "initSessionCache "
            r0.append(r1)
            java.lang.String r4 = r4.toString()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.String r0 = "QQToken"
            com.tencent.open.log.SLog.i(r0, r4)
        L55:
            return
    }

    public boolean isQQInstalled(android.content.Context r3) {
            r2 = this;
            boolean r3 = com.tencent.open.utils.k.b(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "isQQInstalled() installed="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r1, r0)
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r3)
            java.lang.String r1 = "isQQInstalled"
            a(r1, r0)
            return r3
    }

    public boolean isQQInstalled(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            int r3 = com.tencent.open.utils.k.c(r3, r4)
            if (r3 < 0) goto L8
            r3 = 1
            goto L9
        L8:
            r3 = 0
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "isQQInstalled version["
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = "] = "
            r0.append(r4)
            r0.append(r3)
            java.lang.String r4 = r0.toString()
            java.lang.String r0 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r0, r4)
            return r3
    }

    public boolean isReady() {
            r3 = this;
            boolean r0 = r3.isSessionValid()
            if (r0 == 0) goto Le
            java.lang.String r0 = r3.getOpenId()
            if (r0 == 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "isReady() --ready="
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r2, r1)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r0)
            java.lang.String r2 = "isReady"
            a(r2, r1)
            return r0
    }

    public boolean isSessionValid() {
            r3 = this;
            com.tencent.connect.auth.c r0 = r3.a
            boolean r0 = r0.c()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "isSessionValid() isvalid ="
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r2, r1)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r0)
            java.lang.String r2 = "isSessionValid"
            a(r2, r1)
            return r0
    }

    public boolean isSupportSSOLogin(android.app.Activity r5) {
            r4 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "isSupportSSOLogin()"
            com.tencent.open.log.SLog.i(r0, r1)
            boolean r1 = com.tencent.open.utils.m.c(r5)
            java.lang.String r2 = "isSupportSSOLogin"
            r3 = 1
            if (r1 == 0) goto L20
            java.lang.String r1 = "com.tencent.minihd.qq"
            java.lang.String r1 = com.tencent.open.utils.k.a(r5, r1)
            if (r1 == 0) goto L20
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r3)
            a(r2, r5)
            return r3
        L20:
            java.lang.String r1 = "4.1"
            int r1 = com.tencent.open.utils.k.c(r5, r1)
            if (r1 >= 0) goto L31
            java.lang.String r1 = "1.1"
            int r5 = com.tencent.open.utils.k.d(r5, r1)
            if (r5 >= 0) goto L31
            r3 = 0
        L31:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "isSupportSSOLogin() support="
            r5.append(r1)
            r5.append(r3)
            java.lang.String r5 = r5.toString()
            com.tencent.open.log.SLog.i(r0, r5)
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r3)
            a(r2, r5)
            return r3
    }

    public void joinQQGroup(android.app.Activity r4, java.lang.String r5, com.tencent.tauth.IUiListener r6) {
            r3 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "joinQQGroup()"
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = "organizationId"
            r0[r1] = r2
            r1 = 1
            r0[r1] = r5
            java.lang.String r1 = "joinQQGroup"
            a(r1, r0)
            com.tencent.open.SocialOperation r0 = new com.tencent.open.SocialOperation
            com.tencent.connect.auth.QQToken r1 = r3.getQQToken()
            r0.<init>(r1)
            r0.joinGroup(r4, r5, r6)
            return
    }

    public org.json.JSONObject loadSession(java.lang.String r5) {
            r4 = this;
            com.tencent.connect.auth.c r0 = r4.a
            com.tencent.connect.auth.QQToken r0 = r0.b()
            org.json.JSONObject r0 = r0.loadSession(r5)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "loadSession() appid "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r2 = ", length="
            r1.append(r2)
            r2 = 0
            if (r0 == 0) goto L24
            int r3 = r0.length()
            goto L25
        L24:
            r3 = 0
        L25:
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.String r3 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r3, r1)
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r3 = "appid"
            r1[r2] = r3
            r2 = 1
            r1[r2] = r5
            java.lang.String r5 = "loadSession"
            a(r5, r1)
            return r0
    }

    public int login(android.app.Activity r3, com.tencent.tauth.IUiListener r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "login activity with params"
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "login_param"
            a(r1, r0)
            com.tencent.connect.auth.c r0 = r2.a
            int r3 = r0.a(r3, r4, r5)
            return r3
    }

    public int login(android.app.Activity r4, java.lang.String r5, com.tencent.tauth.IUiListener r6) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "login() with activity, scope is "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r1, r0)
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = "scope"
            r0[r1] = r2
            r1 = 1
            r0[r1] = r5
            java.lang.String r1 = "login_scope"
            a(r1, r0)
            com.tencent.connect.auth.c r0 = r3.a
            int r4 = r0.a(r4, r5, r6)
            return r4
    }

    public int login(android.app.Activity r4, java.lang.String r5, com.tencent.tauth.IUiListener r6, boolean r7) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "login() with activity, scope is "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r1, r0)
            r0 = 4
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = "scope"
            r0[r1] = r2
            r1 = 1
            r0[r1] = r5
            r1 = 2
            java.lang.String r2 = "qrcode"
            r0[r1] = r2
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r7)
            r2 = 3
            r0[r2] = r1
            java.lang.String r1 = "login_qrcode"
            a(r1, r0)
            com.tencent.connect.auth.c r0 = r3.a
            int r4 = r0.a(r4, r5, r6, r7)
            return r4
    }

    public int login(android.support.v4.app.Fragment r4, java.lang.String r5, com.tencent.tauth.IUiListener r6) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "login() with fragment, scope is "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r1, r0)
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = "scope"
            r0[r1] = r2
            r1 = 1
            r0[r1] = r5
            java.lang.String r1 = "login_fragment_scope"
            a(r1, r0)
            com.tencent.connect.auth.c r0 = r3.a
            java.lang.String r1 = ""
            int r4 = r0.a(r4, r5, r6, r1)
            return r4
    }

    public int login(android.support.v4.app.Fragment r9, java.lang.String r10, com.tencent.tauth.IUiListener r11, boolean r12) {
            r8 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "login() with fragment, scope is "
            r0.append(r1)
            r0.append(r10)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r1, r0)
            r0 = 4
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = "scope"
            r0[r1] = r2
            r1 = 1
            r0[r1] = r10
            r1 = 2
            java.lang.String r2 = "qrcode"
            r0[r1] = r2
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r12)
            r2 = 3
            r0[r2] = r1
            java.lang.String r1 = "login_fragment_scope_qrcode"
            a(r1, r0)
            com.tencent.connect.auth.c r2 = r8.a
            java.lang.String r6 = ""
            r3 = r9
            r4 = r10
            r5 = r11
            r7 = r12
            int r9 = r2.a(r3, r4, r5, r6, r7)
            return r9
    }

    public int loginServerSide(android.app.Activity r5, java.lang.String r6, com.tencent.tauth.IUiListener r7) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "loginServerSide() with activity, scope = "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r1 = ",server_side"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r2, r0)
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r2 = 0
            java.lang.String r3 = "scope"
            r0[r2] = r3
            r2 = 1
            r0[r2] = r6
            java.lang.String r2 = "loginServerSide_activity"
            a(r2, r0)
            com.tencent.connect.auth.c r0 = r4.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            r2.append(r1)
            java.lang.String r6 = r2.toString()
            int r5 = r0.a(r5, r6, r7)
            return r5
    }

    public int loginServerSide(android.support.v4.app.Fragment r5, java.lang.String r6, com.tencent.tauth.IUiListener r7) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "loginServerSide() with fragment, scope = "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r1 = ",server_side"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r2, r0)
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r2 = 0
            java.lang.String r3 = "scope"
            r0[r2] = r3
            r2 = 1
            r0[r2] = r6
            java.lang.String r2 = "loginServerSide_fragment"
            a(r2, r0)
            com.tencent.connect.auth.c r0 = r4.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            r2.append(r1)
            java.lang.String r6 = r2.toString()
            java.lang.String r1 = ""
            int r5 = r0.a(r5, r6, r7, r1)
            return r5
    }

    public int loginWithOEM(android.app.Activity r10, java.lang.String r11, com.tencent.tauth.IUiListener r12, boolean r13, java.lang.String r14, java.lang.String r15, java.lang.String r16) {
            r9 = this;
            r2 = r11
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "loginWithOEM() with activity, scope = "
            r0.append(r1)
            r0.append(r11)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r1, r0)
            r0 = 10
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r3 = "scope"
            r0[r1] = r3
            r1 = 1
            r0[r1] = r2
            r1 = 2
            java.lang.String r3 = "qrcode"
            r0[r1] = r3
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r13)
            r3 = 3
            r0[r3] = r1
            r1 = 4
            java.lang.String r3 = "registerChannel"
            r0[r1] = r3
            r1 = 5
            r0[r1] = r14
            r1 = 6
            java.lang.String r3 = "installChannel"
            r0[r1] = r3
            r1 = 7
            r0[r1] = r15
            r1 = 8
            java.lang.String r3 = "businessId"
            r0[r1] = r3
            r1 = 9
            r0[r1] = r16
            java.lang.String r1 = "loginWithOEM"
            a(r1, r0)
            r8 = r9
            com.tencent.connect.auth.c r0 = r8.a
            r1 = r10
            r3 = r12
            r4 = r13
            r5 = r14
            r6 = r15
            r7 = r16
            int r0 = r0.a(r1, r2, r3, r4, r5, r6, r7)
            return r0
    }

    public void logout(android.content.Context r3) {
            r2 = this;
            java.lang.String r3 = "openSDK_LOG.Tencent"
            java.lang.String r0 = "logout()"
            com.tencent.open.log.SLog.i(r3, r0)
            r3 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.String r0 = "logout"
            a(r0, r3)
            com.tencent.connect.auth.c r3 = r2.a
            com.tencent.connect.auth.QQToken r3 = r3.b()
            r0 = 0
            java.lang.String r1 = "0"
            r3.setAccessToken(r0, r1)
            com.tencent.connect.auth.c r3 = r2.a
            com.tencent.connect.auth.QQToken r3 = r3.b()
            r3.setOpenId(r0)
            com.tencent.connect.auth.c r3 = r2.a
            com.tencent.connect.auth.QQToken r3 = r3.b()
            com.tencent.connect.auth.c r0 = r2.a
            com.tencent.connect.auth.QQToken r0 = r0.b()
            java.lang.String r0 = r0.getAppId()
            r3.removeSession(r0)
            return
    }

    public void publishToQzone(android.app.Activity r3, android.os.Bundle r4, com.tencent.tauth.IUiListener r5) {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "publishToQzone()"
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "publishToQzone"
            a(r1, r0)
            com.tencent.connect.share.QzonePublish r0 = new com.tencent.connect.share.QzonePublish
            com.tencent.connect.auth.c r1 = r2.a
            com.tencent.connect.auth.QQToken r1 = r1.b()
            r0.<init>(r3, r1)
            r0.publishToQzone(r3, r4, r5)
            return
    }

    public int reAuth(android.app.Activity r4, java.lang.String r5, com.tencent.tauth.IUiListener r6) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "reAuth() with activity, scope = "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r1, r0)
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = "scope"
            r0[r1] = r2
            r1 = 1
            r0[r1] = r5
            java.lang.String r1 = "reAuth"
            a(r1, r0)
            com.tencent.connect.auth.c r0 = r3.a
            int r4 = r0.b(r4, r5, r6)
            return r4
    }

    public void reportDAU() {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "reportDAU() "
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "reportDAU"
            a(r1, r0)
            com.tencent.connect.auth.c r0 = r2.a
            r0.a()
            return
    }

    public org.json.JSONObject request(java.lang.String r4, android.os.Bundle r5, java.lang.String r6) throws java.io.IOException, org.json.JSONException, com.tencent.open.utils.HttpUtils.NetworkUnavailableException, com.tencent.open.utils.HttpUtils.HttpStatusException {
            r3 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "request()"
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 4
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = "graphPath"
            r0[r1] = r2
            r1 = 1
            r0[r1] = r4
            r1 = 2
            java.lang.String r2 = "httpMethod"
            r0[r1] = r2
            r1 = 3
            r0[r1] = r6
            java.lang.String r1 = "request"
            a(r1, r0)
            com.tencent.connect.auth.c r0 = r3.a
            com.tencent.connect.auth.QQToken r0 = r0.b()
            android.content.Context r1 = com.tencent.open.utils.g.a()
            org.json.JSONObject r4 = com.tencent.open.utils.HttpUtils.request(r0, r1, r4, r5, r6)
            return r4
    }

    public void requestAsync(java.lang.String r8, android.os.Bundle r9, java.lang.String r10, com.tencent.tauth.IRequestListener r11) {
            r7 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "requestAsync()"
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 4
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = "graphPath"
            r0[r1] = r2
            r1 = 1
            r0[r1] = r8
            r1 = 2
            java.lang.String r2 = "httpMethod"
            r0[r1] = r2
            r1 = 3
            r0[r1] = r10
            java.lang.String r1 = "requestAsync"
            a(r1, r0)
            com.tencent.connect.auth.c r0 = r7.a
            com.tencent.connect.auth.QQToken r1 = r0.b()
            android.content.Context r2 = com.tencent.open.utils.g.a()
            r3 = r8
            r4 = r9
            r5 = r10
            r6 = r11
            com.tencent.open.utils.HttpUtils.requestAsync(r1, r2, r3, r4, r5, r6)
            return
    }

    public void saveSession(org.json.JSONObject r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "saveSession() length="
            r0.append(r1)
            r1 = 0
            if (r4 == 0) goto L12
            int r2 = r4.length()
            goto L13
        L12:
            r2 = 0
        L13:
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r2, r0)
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.String r1 = "saveSession"
            a(r1, r0)
            com.tencent.connect.auth.c r0 = r3.a
            com.tencent.connect.auth.QQToken r0 = r0.b()
            r0.saveSession(r4)
            return
    }

    public void setAccessToken(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setAccessToken(), expiresIn = "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.Tencent"
            com.tencent.open.log.SLog.i(r1, r0)
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "setAccessToken"
            a(r1, r0)
            com.tencent.connect.auth.c r0 = r2.a
            r0.a(r3, r4)
            return
    }

    public void setAvatar(android.app.Activity r4, android.os.Bundle r5, com.tencent.tauth.IUiListener r6) {
            r3 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "setAvatar()"
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "setAvatar"
            a(r1, r0)
            java.lang.String r0 = "picture"
            java.lang.String r0 = r5.getString(r0)
            java.lang.String r1 = "exitAnim"
            int r5 = r5.getInt(r1)
            com.tencent.connect.avatar.QQAvatar r1 = new com.tencent.connect.avatar.QQAvatar
            com.tencent.connect.auth.c r2 = r3.a
            com.tencent.connect.auth.QQToken r2 = r2.b()
            r1.<init>(r2)
            android.net.Uri r0 = android.net.Uri.parse(r0)
            r1.setAvatar(r4, r0, r6, r5)
            return
    }

    public void setAvatar(android.app.Activity r4, android.os.Bundle r5, com.tencent.tauth.IUiListener r6, int r7, int r8) {
            r3 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "setAvatar()"
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "setAvatar_anim"
            a(r2, r1)
            java.lang.String r1 = "exitAnim"
            r5.putInt(r1, r8)
            r4.overridePendingTransition(r7, r0)
            r3.setAvatar(r4, r5, r6)
            return
    }

    public void setAvatarByQQ(android.app.Activity r3, android.net.Uri r4, com.tencent.tauth.IUiListener r5) {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "setAvatarByQQ()"
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "setAvatarByQQ"
            a(r1, r0)
            com.tencent.connect.avatar.QQAvatar r0 = new com.tencent.connect.avatar.QQAvatar
            com.tencent.connect.auth.c r1 = r2.a
            com.tencent.connect.auth.QQToken r1 = r1.b()
            r0.<init>(r1)
            r0.setAvatarByQQ(r3, r4, r5)
            return
    }

    public void setDynamicAvatar(android.app.Activity r3, android.net.Uri r4, com.tencent.tauth.IUiListener r5) {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "setDynamicAvatar()"
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "setDynamicAvatar"
            a(r1, r0)
            com.tencent.connect.avatar.QQAvatar r0 = new com.tencent.connect.avatar.QQAvatar
            com.tencent.connect.auth.c r1 = r2.a
            com.tencent.connect.auth.QQToken r1 = r1.b()
            r0.<init>(r1)
            r0.setDynamicAvatar(r3, r4, r5)
            return
    }

    public void setEmotions(android.app.Activity r3, java.util.ArrayList<android.net.Uri> r4, com.tencent.tauth.IUiListener r5) {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "saveQQEmotions()"
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "setEmotions"
            a(r1, r0)
            com.tencent.connect.emotion.QQEmotion r0 = new com.tencent.connect.emotion.QQEmotion
            com.tencent.connect.auth.c r1 = r2.a
            com.tencent.connect.auth.QQToken r1 = r1.b()
            r0.<init>(r1)
            r0.setEmotions(r3, r4, r5)
            return
    }

    public void setOpenId(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "setOpenId() --start"
            com.tencent.open.log.SLog.i(r0, r1)
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = "setOpenId"
            a(r2, r1)
            com.tencent.connect.auth.c r1 = r3.a
            android.content.Context r2 = com.tencent.open.utils.g.a()
            r1.b(r2, r4)
            java.lang.String r4 = "setOpenId() --end"
            com.tencent.open.log.SLog.i(r0, r4)
            return
    }

    public void shareToQQ(android.app.Activity r3, android.os.Bundle r4, com.tencent.tauth.IUiListener r5) {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "shareToQQ()"
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "shareToQQ"
            a(r1, r0)
            java.lang.String r0 = r2.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1c
            r0 = -19
            r5.onWarning(r0)
        L1c:
            com.tencent.connect.share.QQShare r0 = new com.tencent.connect.share.QQShare
            com.tencent.connect.auth.c r1 = r2.a
            com.tencent.connect.auth.QQToken r1 = r1.b()
            r0.<init>(r3, r1)
            r0.shareToQQ(r3, r4, r5)
            return
    }

    public void shareToQzone(android.app.Activity r3, android.os.Bundle r4, com.tencent.tauth.IUiListener r5) {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "shareToQzone()"
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "shareToQzone"
            a(r1, r0)
            com.tencent.connect.share.QzoneShare r0 = new com.tencent.connect.share.QzoneShare
            com.tencent.connect.auth.c r1 = r2.a
            com.tencent.connect.auth.QQToken r1 = r1.b()
            r0.<init>(r3, r1)
            r0.shareToQzone(r3, r4, r5)
            return
    }

    public void startAuthManagePage(android.app.Activity r4, com.tencent.open.apireq.IApiCallback r5) {
            r3 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "startAuthManagePage"
            com.tencent.open.log.SLog.i(r0, r1)
            com.tencent.connect.api.QQAuthManage r0 = new com.tencent.connect.api.QQAuthManage
            com.tencent.connect.auth.c r1 = r3.a
            com.tencent.connect.auth.QQToken r2 = r3.getQQToken()
            r0.<init>(r1, r2)
            r0.gotoManagePage(r4, r5)
            return
    }

    public int startIMAio(android.app.Activity r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "startIMAio()"
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 4
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = "uin"
            r0[r1] = r2
            r1 = 1
            r0[r1] = r5
            r1 = 2
            java.lang.String r2 = "pkg_name"
            r0[r1] = r2
            r1 = 3
            r0[r1] = r6
            java.lang.String r1 = "startIMAio"
            a(r1, r0)
            java.lang.String r0 = "thirdparty2c"
            int r4 = r3.startIMConversation(r4, r0, r5, r6)
            return r4
    }

    public int startIMAudio(android.app.Activity r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "startIMAudio()"
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 4
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = "uin"
            r0[r1] = r2
            r1 = 1
            r0[r1] = r5
            r1 = 2
            java.lang.String r2 = "pkg_name"
            r0[r1] = r2
            r1 = 3
            r0[r1] = r6
            java.lang.String r1 = "startIMAudio"
            a(r1, r0)
            java.lang.String r0 = "audio_chat"
            int r4 = r3.startIMConversation(r4, r0, r5, r6)
            return r4
    }

    public int startIMConversation(android.app.Activity r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r3 = this;
            r0 = 6
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = "chatType"
            r0[r1] = r2
            r1 = 1
            r0[r1] = r5
            r1 = 2
            java.lang.String r2 = "uin"
            r0[r1] = r2
            r1 = 3
            r0[r1] = r6
            r1 = 4
            java.lang.String r2 = "pkg_name"
            r0[r1] = r2
            r1 = 5
            r0[r1] = r7
            java.lang.String r1 = "startIMConversation"
            a(r1, r0)
            com.tencent.open.im.IM r0 = new com.tencent.open.im.IM
            com.tencent.connect.auth.QQToken r1 = r3.getQQToken()
            r0.<init>(r1)
            int r4 = r0.startIMConversation(r4, r5, r6, r7)
            return r4
    }

    public int startIMVideo(android.app.Activity r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "startIMVideo()"
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 4
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = "uin"
            r0[r1] = r2
            r1 = 1
            r0[r1] = r5
            r1 = 2
            java.lang.String r2 = "pkg_name"
            r0[r1] = r2
            r1 = 3
            r0[r1] = r6
            java.lang.String r1 = "startIMVideo"
            a(r1, r0)
            java.lang.String r0 = "video_chat"
            int r4 = r3.startIMConversation(r4, r0, r5, r6)
            return r4
    }

    public int startMiniApp(android.app.Activity r10, java.lang.String r11, java.lang.String r12, java.lang.String r13) {
            r9 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "startMiniApp()"
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 6
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = "miniAppId"
            r0[r1] = r2
            r1 = 1
            r0[r1] = r11
            r1 = 2
            java.lang.String r2 = "miniAppPath"
            r0[r1] = r2
            r1 = 3
            r0[r1] = r12
            r1 = 4
            java.lang.String r2 = "miniAppVersion"
            r0[r1] = r2
            r1 = 5
            r0[r1] = r13
            java.lang.String r1 = "startMiniApp"
            a(r1, r0)
            com.tencent.open.miniapp.MiniApp r2 = new com.tencent.open.miniapp.MiniApp
            com.tencent.connect.auth.QQToken r0 = r9.getQQToken()
            r2.<init>(r0)
            java.lang.String r4 = "mini_program_or_game"
            java.lang.String r6 = "21"
            r3 = r10
            r5 = r11
            r7 = r12
            r8 = r13
            int r10 = r2.startMiniApp(r3, r4, r5, r6, r7, r8)
            return r10
    }

    public void unBindQQGroup(android.content.Context r4, java.lang.String r5, com.tencent.tauth.IUiListener r6) {
            r3 = this;
            java.lang.String r0 = "openSDK_LOG.Tencent"
            java.lang.String r1 = "unBindQQGroup()"
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = "organizationId"
            r0[r1] = r2
            r1 = 1
            r0[r1] = r5
            java.lang.String r1 = "unBindQQGroup"
            a(r1, r0)
            com.tencent.open.SocialOperation r0 = new com.tencent.open.SocialOperation
            com.tencent.connect.auth.QQToken r1 = r3.getQQToken()
            r0.<init>(r1)
            r0.unBindGroup(r4, r5, r6)
            return
    }
}

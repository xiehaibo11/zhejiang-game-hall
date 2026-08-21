package com.igexin.assist.control.xiaomi;

public class MiuiPushManager implements com.igexin.assist.control.AbstractPushManager {
    public static final java.lang.String PLUGIN_VERSION = "1.2.0";
    public static final java.lang.String TAG = "Assist_XM";
    public static final java.lang.String XIAOMI_VERSION = "4.9.0";
    private static final java.lang.String a = null;
    private java.lang.String b;
    private java.lang.String c;

    static {
            java.lang.String r0 = android.os.Build.BRAND
            com.igexin.assist.control.xiaomi.MiuiPushManager.a = r0
            return
    }

    public MiuiPushManager(android.content.Context r5) {
            r4 = this;
            java.lang.String r0 = "XM_"
            r4.<init>()
            java.lang.String r1 = ""
            r4.b = r1
            r4.c = r1
            java.lang.String r2 = "Assist_XM"
            java.lang.String r3 = "xiaomi plugin version = 1.2.0, xiaomi sdk version = 4.9.0"
            android.util.Log.d(r2, r3)     // Catch: java.lang.Throwable -> L44
            android.content.pm.PackageManager r2 = r5.getPackageManager()     // Catch: java.lang.Throwable -> L44
            java.lang.String r5 = r5.getPackageName()     // Catch: java.lang.Throwable -> L44
            r3 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r5 = r2.getApplicationInfo(r5, r3)     // Catch: java.lang.Throwable -> L44
            android.os.Bundle r2 = r5.metaData     // Catch: java.lang.Throwable -> L44
            java.lang.String r3 = "MIPUSH_APPID"
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L44
            r4.b = r2     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = r2.replace(r0, r1)     // Catch: java.lang.Throwable -> L44
            r4.b = r2     // Catch: java.lang.Throwable -> L44
            android.os.Bundle r5 = r5.metaData     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = "MIPUSH_APPKEY"
            java.lang.Object r5 = r5.get(r2)     // Catch: java.lang.Throwable -> L44
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L44
            r4.c = r5     // Catch: java.lang.Throwable -> L44
            java.lang.String r5 = r5.replace(r0, r1)     // Catch: java.lang.Throwable -> L44
            r4.c = r5     // Catch: java.lang.Throwable -> L44
        L44:
            return
    }

    private static java.lang.String a(java.lang.String r4) {
            r0 = 0
            java.lang.Runtime r1 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L46
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L46
            r2.<init>()     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L46
            java.lang.String r3 = "getprop "
            r2.append(r3)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L46
            r2.append(r4)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L46
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L46
            java.lang.Process r4 = r1.exec(r4)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L46
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L46
            java.io.InputStreamReader r2 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L46
            java.io.InputStream r4 = r4.getInputStream()     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L46
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L46
            r4 = 1024(0x400, float:1.435E-42)
            r1.<init>(r2, r4)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L46
            java.lang.String r4 = r1.readLine()     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L47
            r1.close()     // Catch: java.io.IOException -> L32
            goto L36
        L32:
            r0 = move-exception
            r0.printStackTrace()
        L36:
            return r4
        L37:
            r4 = move-exception
            r0 = r1
            goto L3b
        L3a:
            r4 = move-exception
        L3b:
            if (r0 == 0) goto L45
            r0.close()     // Catch: java.io.IOException -> L41
            goto L45
        L41:
            r0 = move-exception
            r0.printStackTrace()
        L45:
            throw r4
        L46:
            r1 = r0
        L47:
            if (r1 == 0) goto L51
            r1.close()     // Catch: java.io.IOException -> L4d
            goto L51
        L4d:
            r4 = move-exception
            r4.printStackTrace()
        L51:
            return r0
    }

    private static boolean a() {
            java.lang.String r0 = "ro.miui.ui.version.name"
            java.lang.String r0 = a(r0)
            java.lang.String r1 = "ro.miui.ui.version.code"
            java.lang.String r1 = a(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1b
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L19
            goto L1b
        L19:
            r0 = 0
            goto L1c
        L1b:
            r0 = 1
        L1c:
            return r0
    }

    public static boolean checkXMDevice(android.content.Context r2) {
            r0 = 0
            boolean r1 = a()     // Catch: java.lang.Throwable -> L1a
            if (r1 == 0) goto L1a
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Throwable -> L1a
            java.lang.String r1 = "com.xiaomi.xmsf"
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r1, r0)     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L1a
            int r2 = r2.versionCode     // Catch: java.lang.Throwable -> L1a
            r1 = 105(0x69, float:1.47E-43)
            if (r2 < r1) goto L1a
            r0 = 1
        L1a:
            return r0
    }

    @Override
    public java.lang.String getToken(android.content.Context r1) {
            r0 = this;
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.lang.String r1 = com.xiaomi.mipush.sdk.MiPushClient.getRegId(r1)
            return r1
    }

    @Override
    public void register(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = r3.b     // Catch: java.lang.Throwable -> L38
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L38
            java.lang.String r1 = "Assist_XM"
            if (r0 != 0) goto L33
            java.lang.String r0 = r3.c     // Catch: java.lang.Throwable -> L38
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L13
            goto L33
        L13:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L38
            r0.<init>()     // Catch: java.lang.Throwable -> L38
            java.lang.String r2 = "Register mipush, pkg = "
            r0.append(r2)     // Catch: java.lang.Throwable -> L38
            java.lang.String r2 = r4.getPackageName()     // Catch: java.lang.Throwable -> L38
            r0.append(r2)     // Catch: java.lang.Throwable -> L38
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L38
            android.util.Log.d(r1, r0)     // Catch: java.lang.Throwable -> L38
            java.lang.String r0 = r3.b     // Catch: java.lang.Throwable -> L38
            java.lang.String r1 = r3.c     // Catch: java.lang.Throwable -> L38
            com.xiaomi.mipush.sdk.MiPushClient.registerPush(r4, r0, r1)     // Catch: java.lang.Throwable -> L38
            goto L38
        L33:
            java.lang.String r4 = "Register mipush appId or appKey is null or empty"
            android.util.Log.d(r1, r4)     // Catch: java.lang.Throwable -> L38
        L38:
            return
    }

    @Override
    public void setSilentTime(android.content.Context r7, int r8, int r9) {
            r6 = this;
            if (r9 != 0) goto L6
            r6.turnOnPush(r7)
            return
        L6:
            int r9 = r9 + r8
            int r1 = r9 % 24
            r2 = 0
            r4 = 0
            r5 = 0
            r0 = r7
            r3 = r8
            com.xiaomi.mipush.sdk.MiPushClient.setAcceptTime(r0, r1, r2, r3, r4, r5)
            return
    }

    @Override
    public void turnOffPush(android.content.Context r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = r1.b
            com.xiaomi.mipush.sdk.MiPushClient.pausePush(r2, r0)
            return
    }

    @Override
    public void turnOnPush(android.content.Context r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = r1.b
            com.xiaomi.mipush.sdk.MiPushClient.resumePush(r2, r0)
            return
    }

    @Override
    public void unregister(android.content.Context r3) {
            r2 = this;
            java.lang.String r0 = "Assist_XM"
            java.lang.String r1 = "Unregister mipush"
            android.util.Log.d(r0, r1)     // Catch: java.lang.Throwable -> Ld
            if (r3 != 0) goto La
            return
        La:
            com.xiaomi.mipush.sdk.MiPushClient.unregisterPush(r3)     // Catch: java.lang.Throwable -> Ld
        Ld:
            return
    }
}

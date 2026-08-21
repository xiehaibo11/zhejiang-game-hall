package com.mbridge.msdk.foundation.tools;

public final class aj {
    public static int a = -1;
    public static java.lang.String b = "";
    public static int c = -1;
    public static java.lang.String d = "";
    public static int e = -1;
    public static int f = -1;
    public static java.lang.String g = "";
    public static java.lang.String h = "";
    public static int i = -1;
    public static java.lang.String j = "";

    static {
            return
    }

    public static boolean a(android.content.Context r5) {
            int r0 = com.mbridge.msdk.foundation.tools.aj.i
            r1 = 1
            if (r0 != r1) goto L6
            return r1
        L6:
            r2 = 0
            if (r0 != 0) goto La
            return r2
        La:
            r0 = -1
            if (r5 != 0) goto L14
            com.mbridge.msdk.foundation.tools.aj.i = r0     // Catch: java.lang.Throwable -> L2e java.lang.NoSuchMethodError -> L38 java.lang.Exception -> L42
            java.lang.String r5 = "content is null"
            com.mbridge.msdk.foundation.tools.aj.j = r5     // Catch: java.lang.Throwable -> L2e java.lang.NoSuchMethodError -> L38 java.lang.Exception -> L42
            return r2
        L14:
            int r3 = com.mbridge.msdk.foundation.tools.v.w(r5)     // Catch: java.lang.Throwable -> L2e java.lang.NoSuchMethodError -> L38 java.lang.Exception -> L42
            r4 = 26
            if (r3 < r4) goto L4c
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L2e java.lang.NoSuchMethodError -> L38 java.lang.Exception -> L42
            if (r3 < r4) goto L4c
            android.support.v4.app.NotificationCompat$Builder r3 = new android.support.v4.app.NotificationCompat$Builder     // Catch: java.lang.Throwable -> L2e java.lang.NoSuchMethodError -> L38 java.lang.Exception -> L42
            java.lang.String r4 = "download"
            r3.<init>(r5, r4)     // Catch: java.lang.Throwable -> L2e java.lang.NoSuchMethodError -> L38 java.lang.Exception -> L42
            java.lang.String r5 = "ok"
            com.mbridge.msdk.foundation.tools.aj.j = r5     // Catch: java.lang.Throwable -> L2e java.lang.NoSuchMethodError -> L38 java.lang.Exception -> L42
            com.mbridge.msdk.foundation.tools.aj.i = r1     // Catch: java.lang.Throwable -> L2e java.lang.NoSuchMethodError -> L38 java.lang.Exception -> L42
            goto L4c
        L2e:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.aj.j = r5
            com.mbridge.msdk.foundation.tools.aj.i = r0
            goto L4b
        L38:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.aj.j = r5
            com.mbridge.msdk.foundation.tools.aj.i = r2
            goto L4b
        L42:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.aj.j = r5
            com.mbridge.msdk.foundation.tools.aj.i = r0
        L4b:
            r1 = r2
        L4c:
            return r1
    }

    public static boolean b(android.content.Context r7) {
            int r0 = com.mbridge.msdk.foundation.tools.aj.e
            r1 = 1
            if (r0 != r1) goto L6
            return r1
        L6:
            r2 = 0
            if (r0 != 0) goto La
            return r2
        La:
            r0 = -1
            if (r7 != 0) goto L14
            com.mbridge.msdk.foundation.tools.aj.e = r0     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L70
            java.lang.String r7 = "context is null"
            com.mbridge.msdk.foundation.tools.aj.g = r7     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L70
            return r2
        L14:
            int r3 = com.mbridge.msdk.foundation.tools.v.w(r7)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L70
            r4 = 26
            if (r3 < r4) goto L64
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L70
            if (r3 < r4) goto L64
            android.content.pm.PackageManager r3 = r7.getPackageManager()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L70
            java.lang.String r7 = r7.getPackageName()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L70
            r4 = 4096(0x1000, float:5.74E-42)
            android.content.pm.PackageInfo r7 = r3.getPackageInfo(r7, r4)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L70
            java.lang.String[] r7 = r7.requestedPermissions     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L70
            if (r7 != 0) goto L39
            com.mbridge.msdk.foundation.tools.aj.e = r0     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L70
            java.lang.String r7 = "permissions is null"
            com.mbridge.msdk.foundation.tools.aj.g = r7     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L70
            return r2
        L39:
            int r3 = r7.length     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L70
            if (r3 != 0) goto L43
            com.mbridge.msdk.foundation.tools.aj.e = r2     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L70
            java.lang.String r7 = "permissions is zero"
            com.mbridge.msdk.foundation.tools.aj.g = r7     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L70
            return r2
        L43:
            int r3 = r7.length     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L70
            r5 = r1
            r4 = r2
        L46:
            if (r4 >= r3) goto L63
            r5 = r7[r4]     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L70
            java.lang.String r6 = "android.permission.REQUEST_INSTALL_PACKAGES"
            boolean r5 = r5.equals(r6)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L70
            if (r5 == 0) goto L59
            com.mbridge.msdk.foundation.tools.aj.e = r1     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L70
            java.lang.String r7 = "ok"
            com.mbridge.msdk.foundation.tools.aj.g = r7     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L70
            goto L64
        L59:
            java.lang.String r5 = "can't find permission"
            com.mbridge.msdk.foundation.tools.aj.g = r5     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L70
            com.mbridge.msdk.foundation.tools.aj.e = r2     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L70
            int r4 = r4 + 1
            r5 = r2
            goto L46
        L63:
            r1 = r5
        L64:
            r2 = r1
            goto L79
        L66:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            com.mbridge.msdk.foundation.tools.aj.g = r7
            com.mbridge.msdk.foundation.tools.aj.e = r0
            goto L79
        L70:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            com.mbridge.msdk.foundation.tools.aj.g = r7
            com.mbridge.msdk.foundation.tools.aj.e = r0
        L79:
            return r2
    }

    public static boolean c(android.content.Context r7) {
            int r0 = com.mbridge.msdk.foundation.tools.aj.c
            r1 = 1
            if (r0 != r1) goto L6
            return r1
        L6:
            r2 = 0
            if (r0 != 0) goto La
            return r2
        La:
            r0 = -1
            if (r7 != 0) goto L14
            com.mbridge.msdk.foundation.tools.aj.c = r0     // Catch: java.lang.Throwable -> L5b java.lang.Exception -> L65
            java.lang.String r7 = "context is null"
            com.mbridge.msdk.foundation.tools.aj.d = r7     // Catch: java.lang.Throwable -> L5b java.lang.Exception -> L65
            return r2
        L14:
            android.content.pm.PackageManager r3 = r7.getPackageManager()     // Catch: java.lang.Throwable -> L5b java.lang.Exception -> L65
            java.lang.String r7 = r7.getPackageName()     // Catch: java.lang.Throwable -> L5b java.lang.Exception -> L65
            r4 = 4
            android.content.pm.PackageInfo r7 = r3.getPackageInfo(r7, r4)     // Catch: java.lang.Throwable -> L5b java.lang.Exception -> L65
            android.content.pm.ServiceInfo[] r7 = r7.services     // Catch: java.lang.Throwable -> L5b java.lang.Exception -> L65
            if (r7 != 0) goto L2c
            com.mbridge.msdk.foundation.tools.aj.c = r0     // Catch: java.lang.Throwable -> L5b java.lang.Exception -> L65
            java.lang.String r7 = "serviceinfo is null"
            com.mbridge.msdk.foundation.tools.aj.d = r7     // Catch: java.lang.Throwable -> L5b java.lang.Exception -> L65
            return r2
        L2c:
            int r3 = r7.length     // Catch: java.lang.Throwable -> L5b java.lang.Exception -> L65
            if (r3 != 0) goto L36
            com.mbridge.msdk.foundation.tools.aj.c = r2     // Catch: java.lang.Throwable -> L5b java.lang.Exception -> L65
            java.lang.String r7 = "serviceinfos is zero"
            com.mbridge.msdk.foundation.tools.aj.d = r7     // Catch: java.lang.Throwable -> L5b java.lang.Exception -> L65
            return r2
        L36:
            int r3 = r7.length     // Catch: java.lang.Throwable -> L5b java.lang.Exception -> L65
            r5 = r1
            r4 = r2
        L39:
            if (r4 >= r3) goto L58
            r5 = r7[r4]     // Catch: java.lang.Throwable -> L5b java.lang.Exception -> L65
            java.lang.String r5 = r5.name     // Catch: java.lang.Throwable -> L5b java.lang.Exception -> L65
            java.lang.String r6 = "com.mbridge.msdk.shell.MBService"
            boolean r5 = r5.equals(r6)     // Catch: java.lang.Throwable -> L5b java.lang.Exception -> L65
            if (r5 == 0) goto L4e
            com.mbridge.msdk.foundation.tools.aj.c = r1     // Catch: java.lang.Throwable -> L5b java.lang.Exception -> L65
            java.lang.String r7 = "ok"
            com.mbridge.msdk.foundation.tools.aj.d = r7     // Catch: java.lang.Throwable -> L5b java.lang.Exception -> L65
            goto L59
        L4e:
            java.lang.String r5 = "can't find service"
            com.mbridge.msdk.foundation.tools.aj.d = r5     // Catch: java.lang.Throwable -> L5b java.lang.Exception -> L65
            com.mbridge.msdk.foundation.tools.aj.c = r2     // Catch: java.lang.Throwable -> L5b java.lang.Exception -> L65
            int r4 = r4 + 1
            r5 = r2
            goto L39
        L58:
            r1 = r5
        L59:
            r2 = r1
            goto L6e
        L5b:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            com.mbridge.msdk.foundation.tools.aj.d = r7
            com.mbridge.msdk.foundation.tools.aj.c = r0
            goto L6e
        L65:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            com.mbridge.msdk.foundation.tools.aj.d = r7
            com.mbridge.msdk.foundation.tools.aj.c = r0
        L6e:
            return r2
    }

    public static boolean d(android.content.Context r8) {
            int r0 = com.mbridge.msdk.foundation.tools.aj.f
            r1 = 1
            if (r0 != r1) goto L6
            return r1
        L6:
            r2 = 0
            if (r0 != 0) goto La
            return r2
        La:
            r0 = -1
            if (r8 != 0) goto L14
            com.mbridge.msdk.foundation.tools.aj.f = r0     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            java.lang.String r8 = "context is null"
            com.mbridge.msdk.foundation.tools.aj.h = r8     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            return r2
        L14:
            android.content.pm.PackageManager r3 = r8.getPackageManager()     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            java.lang.String r8 = r8.getPackageName()     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            r4 = 8
            android.content.pm.PackageInfo r8 = r3.getPackageInfo(r8, r4)     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            android.content.pm.ProviderInfo[] r8 = r8.providers     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            if (r8 != 0) goto L2d
            com.mbridge.msdk.foundation.tools.aj.f = r0     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            java.lang.String r8 = "providerInfos is null"
            com.mbridge.msdk.foundation.tools.aj.h = r8     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            return r2
        L2d:
            int r3 = r8.length     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            if (r3 != 0) goto L37
            java.lang.String r8 = "providerInfos is zero"
            com.mbridge.msdk.foundation.tools.aj.h = r8     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            com.mbridge.msdk.foundation.tools.aj.f = r2     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            return r2
        L37:
            int r3 = r8.length     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            r5 = r1
            r4 = r2
        L3a:
            if (r4 >= r3) goto L6c
            r5 = r8[r4]     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            java.lang.String r6 = r5.name     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            java.lang.String r7 = "com.mbridge.msdk.foundation.tools.MBFileProvider"
            boolean r6 = r6.equals(r7)     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            if (r6 != 0) goto L65
            java.lang.String r6 = com.mbridge.msdk.MBridgeConstans.FILE_PROVIDE_CUSTOM_PATH     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            if (r6 != 0) goto L5b
            java.lang.String r5 = r5.name     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            java.lang.String r6 = com.mbridge.msdk.MBridgeConstans.FILE_PROVIDE_CUSTOM_PATH     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            boolean r5 = r5.equals(r6)     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            if (r5 == 0) goto L5b
            goto L65
        L5b:
            com.mbridge.msdk.foundation.tools.aj.f = r2     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            java.lang.String r5 = "providerInfos can't find"
            com.mbridge.msdk.foundation.tools.aj.h = r5     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            int r4 = r4 + 1
            r5 = r2
            goto L3a
        L65:
            com.mbridge.msdk.foundation.tools.aj.f = r1     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            java.lang.String r8 = "ok"
            com.mbridge.msdk.foundation.tools.aj.h = r8     // Catch: java.lang.Throwable -> L6f java.lang.Exception -> L79
            goto L6d
        L6c:
            r1 = r5
        L6d:
            r2 = r1
            goto L82
        L6f:
            r8 = move-exception
            java.lang.String r8 = r8.getMessage()
            com.mbridge.msdk.foundation.tools.aj.h = r8
            com.mbridge.msdk.foundation.tools.aj.f = r0
            goto L82
        L79:
            r8 = move-exception
            com.mbridge.msdk.foundation.tools.aj.f = r0
            java.lang.String r8 = r8.getMessage()
            com.mbridge.msdk.foundation.tools.aj.h = r8
        L82:
            return r2
    }

    public static boolean e(android.content.Context r2) {
            r0 = 0
            int r2 = com.mbridge.msdk.foundation.tools.v.w(r2)     // Catch: java.lang.Throwable -> L10
            r1 = 24
            if (r2 < r1) goto L18
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L10
            if (r2 < r1) goto L18
            r2 = 1
            r0 = r2
            goto L18
        L10:
            r2 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L18
            r2.printStackTrace()
        L18:
            return r0
    }
}

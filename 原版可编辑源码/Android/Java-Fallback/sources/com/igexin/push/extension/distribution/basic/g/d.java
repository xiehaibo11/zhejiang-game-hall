package com.igexin.push.extension.distribution.basic.g;

public class d {
    private static volatile java.lang.Boolean a;

    static {
            return
    }

    public static int a(android.content.Context r2) {
            r0 = 0
            android.content.pm.PackageManager r1 = r2.getPackageManager()     // Catch: java.lang.Exception -> L12
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L12
            android.content.pm.PackageInfo r2 = r1.getPackageInfo(r2, r0)     // Catch: java.lang.Exception -> L12
            android.content.pm.ApplicationInfo r2 = r2.applicationInfo     // Catch: java.lang.Exception -> L12
            int r2 = r2.targetSdkVersion     // Catch: java.lang.Exception -> L12
            return r2
        L12:
            return r0
    }

    public static java.lang.String a() {
            java.lang.String r0 = android.os.Build.BRAND
            return r0
    }

    private static java.lang.String a(java.lang.String r6) {
            java.lang.String r0 = "android.os.SystemProperties"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L1f
            java.lang.String r1 = "get"
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L1f
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Throwable -> L1f
            java.lang.reflect.Method r1 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.Throwable -> L1f
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L1f
            r2[r5] = r6     // Catch: java.lang.Throwable -> L1f
            java.lang.Object r6 = r1.invoke(r0, r2)     // Catch: java.lang.Throwable -> L1f
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> L1f
            goto L24
        L1f:
            r6 = move-exception
            r6.printStackTrace()
            r6 = 0
        L24:
            return r6
    }

    public static synchronized boolean a(int r7, android.app.Notification r8) {
            java.lang.Class<com.igexin.push.extension.distribution.basic.g.d> r0 = com.igexin.push.extension.distribution.basic.g.d.class
            monitor-enter(r0)
            r1 = 0
            boolean r2 = b()     // Catch: java.lang.Throwable -> L36
            if (r2 == 0) goto L36
            java.lang.Class r2 = r8.getClass()     // Catch: java.lang.Throwable -> L36
            java.lang.String r3 = "extraNotification"
            java.lang.reflect.Field r2 = r2.getDeclaredField(r3)     // Catch: java.lang.Throwable -> L36
            java.lang.Object r8 = r2.get(r8)     // Catch: java.lang.Throwable -> L36
            java.lang.Class r2 = r8.getClass()     // Catch: java.lang.Throwable -> L36
            java.lang.String r3 = "setMessageCount"
            r4 = 1
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L36
            java.lang.Class r6 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L36
            r5[r1] = r6     // Catch: java.lang.Throwable -> L36
            java.lang.reflect.Method r2 = r2.getDeclaredMethod(r3, r5)     // Catch: java.lang.Throwable -> L36
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L36
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L36
            r3[r1] = r7     // Catch: java.lang.Throwable -> L36
            r2.invoke(r8, r3)     // Catch: java.lang.Throwable -> L36
            monitor-exit(r0)
            return r4
        L36:
            monitor-exit(r0)
            return r1
    }

    public static synchronized boolean a(int r5, boolean r6) {
            java.lang.Class<com.igexin.push.extension.distribution.basic.g.d> r0 = com.igexin.push.extension.distribution.basic.g.d.class
            monitor-enter(r0)
            r1 = 0
            android.content.Context r2 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L74
            if (r2 != 0) goto La
            monitor-exit(r0)
            return r1
        La:
            java.lang.String r2 = a()     // Catch: java.lang.Throwable -> L74
            java.lang.String r3 = "huawei"
            boolean r3 = r3.equalsIgnoreCase(r2)     // Catch: java.lang.Throwable -> L74
            if (r3 != 0) goto L1e
            java.lang.String r3 = "honor"
            boolean r2 = r3.equalsIgnoreCase(r2)     // Catch: java.lang.Throwable -> L74
            if (r2 == 0) goto L74
        L1e:
            android.content.Context r2 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L74
            java.lang.String r3 = "hwBadgeNum"
            java.lang.Integer r4 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L74
            java.lang.Object r2 = com.igexin.push.extension.distribution.basic.g.g.b(r2, r3, r4)     // Catch: java.lang.Throwable -> L74
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Throwable -> L74
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L74
            if (r6 == 0) goto L33
            goto L34
        L33:
            int r5 = r5 + r2
        L34:
            android.content.Context r6 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "hwBadgeNum"
            java.lang.Integer r3 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L74
            com.igexin.push.extension.distribution.basic.g.g.a(r6, r2, r3)     // Catch: java.lang.Throwable -> L74
            android.os.Bundle r6 = new android.os.Bundle     // Catch: java.lang.Throwable -> L74
            r6.<init>()     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "package"
            android.content.Context r3 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L74
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Throwable -> L74
            r6.putString(r2, r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "class"
            android.content.Context r3 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L74
            java.lang.String r3 = b(r3)     // Catch: java.lang.Throwable -> L74
            r6.putString(r2, r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "badgenumber"
            r6.putInt(r2, r5)     // Catch: java.lang.Throwable -> L74
            android.content.Context r5 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L74
            android.content.ContentResolver r5 = r5.getContentResolver()     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "content://com.huawei.android.launcher.settings/badge/"
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.Throwable -> L74
            java.lang.String r3 = "change_badge"
            r4 = 0
            r5.call(r2, r3, r4, r6)     // Catch: java.lang.Throwable -> L74
            r5 = 1
            monitor-exit(r0)
            return r5
        L74:
            monitor-exit(r0)
            return r1
    }

    private static java.lang.String b(android.content.Context r2) {
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Throwable -> L26
            java.lang.String r1 = r2.getPackageName()     // Catch: java.lang.Throwable -> L26
            android.content.Intent r0 = r0.getLaunchIntentForPackage(r1)     // Catch: java.lang.Throwable -> L26
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Throwable -> L26
            r1 = 0
            java.util.List r2 = r2.queryIntentActivities(r0, r1)     // Catch: java.lang.Throwable -> L26
            int r0 = r2.size()     // Catch: java.lang.Throwable -> L26
            if (r0 <= 0) goto L26
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L26
            android.content.pm.ResolveInfo r2 = (android.content.pm.ResolveInfo) r2     // Catch: java.lang.Throwable -> L26
            android.content.pm.ActivityInfo r2 = r2.activityInfo     // Catch: java.lang.Throwable -> L26
            java.lang.String r2 = r2.name     // Catch: java.lang.Throwable -> L26
            return r2
        L26:
            java.lang.String r2 = ""
            return r2
    }

    public static boolean b() {
            r0 = 0
            java.lang.Boolean r1 = com.igexin.push.extension.distribution.basic.g.d.a     // Catch: java.lang.Throwable -> L3e
            if (r1 == 0) goto Lc
            java.lang.Boolean r1 = com.igexin.push.extension.distribution.basic.g.d.a     // Catch: java.lang.Throwable -> L3e
            boolean r0 = r1.booleanValue()     // Catch: java.lang.Throwable -> L3e
            return r0
        Lc:
            java.lang.String r1 = "ro.miui.ui.version.name"
            java.lang.String r1 = a(r1)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r2 = "ro.miui.ui.version.code"
            java.lang.String r2 = a(r2)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r3 = android.os.Build.BRAND     // Catch: java.lang.Throwable -> L3e
            java.lang.String r4 = "Xiaomi"
            boolean r3 = r4.equalsIgnoreCase(r3)     // Catch: java.lang.Throwable -> L3e
            if (r3 != 0) goto L31
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L3e
            if (r1 == 0) goto L31
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L3e
            if (r1 != 0) goto L2f
            goto L31
        L2f:
            r1 = r0
            goto L32
        L31:
            r1 = 1
        L32:
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)     // Catch: java.lang.Throwable -> L3e
            com.igexin.push.extension.distribution.basic.g.d.a = r1     // Catch: java.lang.Throwable -> L3e
            java.lang.Boolean r1 = com.igexin.push.extension.distribution.basic.g.d.a     // Catch: java.lang.Throwable -> L3e
            boolean r0 = r1.booleanValue()     // Catch: java.lang.Throwable -> L3e
        L3e:
            return r0
    }
}

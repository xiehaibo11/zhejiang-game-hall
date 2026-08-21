package com.bytedance.pangle.util;

public final class b {
    private static final char[] a = null;
    private static java.lang.String b;

    static {
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            com.bytedance.pangle.util.b.a = r0
            return
    }

    public static boolean a() {
            r0 = 0
            android.app.Application r1 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Exception -> L10
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo()     // Catch: java.lang.Exception -> L10
            int r1 = r1.flags     // Catch: java.lang.Exception -> L10
            r1 = r1 & 2
            if (r1 == 0) goto L10
            r0 = 1
        L10:
            return r0
    }

    public static boolean a(android.content.Context r4) {
            java.lang.String r0 = r4.getPackageName()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 == 0) goto Lc
            return r2
        Lc:
            java.lang.String r1 = "activity"
            java.lang.Object r4 = r4.getSystemService(r1)
            android.app.ActivityManager r4 = (android.app.ActivityManager) r4
            r1 = 1
            java.util.List r4 = r4.getRunningTasks(r1)
            if (r4 == 0) goto L36
            boolean r3 = r4.isEmpty()
            if (r3 != 0) goto L36
            java.lang.Object r4 = r4.get(r2)
            android.app.ActivityManager$RunningTaskInfo r4 = (android.app.ActivityManager.RunningTaskInfo) r4
            android.content.ComponentName r4 = r4.topActivity
            if (r4 == 0) goto L36
            java.lang.String r4 = r4.getPackageName()
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L36
            return r1
        L36:
            return r2
    }

    public static java.lang.String b(android.content.Context r2) {
            java.lang.String r0 = com.bytedance.pangle.util.b.b
            if (r0 != 0) goto L34
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo()
            java.lang.String r2 = r2.sourceDir
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            java.lang.String[] r2 = com.bytedance.pangle.util.c.a(r0)
            r0 = 0
            r0 = r2[r0]
            com.bytedance.pangle.util.b.b = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L34
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getHostIdentity failed. Reason: "
            r0.<init>(r1)
            r1 = 2
            r2 = r2[r1]
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "Zeus/init_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r2)
        L34:
            java.lang.String r2 = com.bytedance.pangle.util.b.b
            return r2
    }
}

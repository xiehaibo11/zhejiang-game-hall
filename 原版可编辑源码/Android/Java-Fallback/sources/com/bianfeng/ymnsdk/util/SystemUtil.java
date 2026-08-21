package com.bianfeng.ymnsdk.util;

public class SystemUtil {
    public SystemUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getRandom(int r7) {
            java.lang.String r0 = ""
            r1 = 0
        L3:
            if (r1 >= r7) goto L24
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            double r3 = java.lang.Math.random()
            r5 = 4621819117588971520(0x4024000000000000, double:10.0)
            double r3 = r3 * r5
            int r3 = (int) r3
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r2.append(r3)
            java.lang.String r0 = r2.toString()
            int r1 = r1 + 1
            goto L3
        L24:
            return r0
    }

    public static int getScreenOrient(android.app.Activity r5) {
            int r0 = r5.getRequestedOrientation()
            if (r0 == 0) goto L1a
            r1 = 1
            if (r0 == r1) goto L1a
            android.content.res.Resources r2 = r5.getResources()
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
            int r3 = r2.widthPixels
            int r4 = r2.heightPixels
            if (r3 >= r4) goto L18
            goto L19
        L18:
            r1 = 0
        L19:
            r0 = r1
        L1a:
            return r0
    }

    public static java.lang.String getSystemCurrentTime() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r1 = java.lang.System.currentTimeMillis()
            r0.append(r1)
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static void hideVirtualKey(android.app.Activity r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            r2 = 11
            if (r0 <= r2) goto L18
            if (r0 >= r1) goto L18
            android.view.Window r0 = r3.getWindow()
            android.view.View r0 = r0.getDecorView()
            r1 = 8
            r0.setSystemUiVisibility(r1)
            goto L29
        L18:
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r1) goto L29
            r0 = 4102(0x1006, float:5.748E-42)
            android.view.Window r1 = r3.getWindow()
            android.view.View r1 = r1.getDecorView()
            r1.setSystemUiVisibility(r0)
        L29:
            return
    }

    public static boolean isMainProcess(android.content.Context r6) {
            int r0 = android.os.Process.myPid()     // Catch: java.lang.Exception -> L68
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L68
            r1.<init>()     // Catch: java.lang.Exception -> L68
            java.lang.String r2 = "isMainProcess--11->pid="
            r1.append(r2)     // Catch: java.lang.Exception -> L68
            r1.append(r0)     // Catch: java.lang.Exception -> L68
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L68
            com.bianfeng.ymnsdk.util.Logger.e(r1)     // Catch: java.lang.Exception -> L68
            java.lang.String r1 = "activity"
            java.lang.Object r1 = r6.getSystemService(r1)     // Catch: java.lang.Exception -> L68
            android.app.ActivityManager r1 = (android.app.ActivityManager) r1     // Catch: java.lang.Exception -> L68
            java.util.List r2 = r1.getRunningAppProcesses()     // Catch: java.lang.Exception -> L68
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L68
        L28:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L68
            if (r3 == 0) goto L66
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L68
            android.app.ActivityManager$RunningAppProcessInfo r3 = (android.app.ActivityManager.RunningAppProcessInfo) r3     // Catch: java.lang.Exception -> L68
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L68
            r4.<init>()     // Catch: java.lang.Exception -> L68
            java.lang.String r5 = "isMainProcess--->pid="
            r4.append(r5)     // Catch: java.lang.Exception -> L68
            int r5 = r3.pid     // Catch: java.lang.Exception -> L68
            r4.append(r5)     // Catch: java.lang.Exception -> L68
            java.lang.String r5 = ";processName="
            r4.append(r5)     // Catch: java.lang.Exception -> L68
            java.lang.String r5 = r3.processName     // Catch: java.lang.Exception -> L68
            r4.append(r5)     // Catch: java.lang.Exception -> L68
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L68
            com.bianfeng.ymnsdk.util.Logger.e(r4)     // Catch: java.lang.Exception -> L68
            int r4 = r3.pid     // Catch: java.lang.Exception -> L68
            if (r4 != r0) goto L65
            android.content.pm.ApplicationInfo r2 = r6.getApplicationInfo()     // Catch: java.lang.Exception -> L68
            java.lang.String r2 = r2.packageName     // Catch: java.lang.Exception -> L68
            java.lang.String r4 = r3.processName     // Catch: java.lang.Exception -> L68
            boolean r2 = r2.equals(r4)     // Catch: java.lang.Exception -> L68
            return r2
        L65:
            goto L28
        L66:
            r2 = 0
            return r2
        L68:
            r0 = move-exception
            r0.printStackTrace()
            r1 = 1
            return r1
    }

    public static boolean isScreenLandscape(android.app.Activity r1) {
            int r0 = getScreenOrient(r1)
            if (r0 != 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static java.lang.String md5(java.lang.String r2) {
            com.bianfeng.ymnsdk.util.security.SecurityUtil r0 = com.bianfeng.ymnsdk.util.security.SecurityUtil.getInstance()     // Catch: java.lang.Exception -> L9
            java.lang.String r0 = r0.md5(r2)     // Catch: java.lang.Exception -> L9
            return r0
        L9:
            r0 = move-exception
            java.lang.String r1 = ""
            return r1
    }
}

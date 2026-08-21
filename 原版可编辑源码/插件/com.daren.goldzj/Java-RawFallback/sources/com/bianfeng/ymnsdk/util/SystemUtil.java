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
            int r0 = (int) r3
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            int r1 = r1 + 1
            goto L3
        L24:
            return r0
    }

    public static int getScreenOrient(android.app.Activity r2) {
            int r0 = r2.getRequestedOrientation()
            r1 = 1
            if (r0 == 0) goto L1a
            if (r0 == r1) goto L1a
            android.content.res.Resources r2 = r2.getResources()
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
            int r0 = r2.widthPixels
            int r2 = r2.heightPixels
            if (r0 >= r2) goto L19
            r0 = 1
            goto L1a
        L19:
            r0 = 0
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
            android.view.Window r3 = r3.getWindow()
            android.view.View r3 = r3.getDecorView()
            r0 = 8
            r3.setSystemUiVisibility(r0)
            goto L29
        L18:
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r1) goto L29
            android.view.Window r3 = r3.getWindow()
            android.view.View r3 = r3.getDecorView()
            r0 = 4102(0x1006, float:5.748E-42)
            r3.setSystemUiVisibility(r0)
        L29:
            return
    }

    public static boolean isMainProcess(android.content.Context r5) {
            int r0 = android.os.Process.myPid()     // Catch: java.lang.Exception -> L67
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L67
            r1.<init>()     // Catch: java.lang.Exception -> L67
            java.lang.String r2 = "isMainProcess--11->pid="
            r1.append(r2)     // Catch: java.lang.Exception -> L67
            r1.append(r0)     // Catch: java.lang.Exception -> L67
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L67
            com.bianfeng.ymnsdk.util.Logger.e(r1)     // Catch: java.lang.Exception -> L67
            java.lang.String r1 = "activity"
            java.lang.Object r1 = r5.getSystemService(r1)     // Catch: java.lang.Exception -> L67
            android.app.ActivityManager r1 = (android.app.ActivityManager) r1     // Catch: java.lang.Exception -> L67
            java.util.List r1 = r1.getRunningAppProcesses()     // Catch: java.lang.Exception -> L67
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L67
        L28:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L67
            if (r2 == 0) goto L65
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L67
            android.app.ActivityManager$RunningAppProcessInfo r2 = (android.app.ActivityManager.RunningAppProcessInfo) r2     // Catch: java.lang.Exception -> L67
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L67
            r3.<init>()     // Catch: java.lang.Exception -> L67
            java.lang.String r4 = "isMainProcess--->pid="
            r3.append(r4)     // Catch: java.lang.Exception -> L67
            int r4 = r2.pid     // Catch: java.lang.Exception -> L67
            r3.append(r4)     // Catch: java.lang.Exception -> L67
            java.lang.String r4 = ";processName="
            r3.append(r4)     // Catch: java.lang.Exception -> L67
            java.lang.String r4 = r2.processName     // Catch: java.lang.Exception -> L67
            r3.append(r4)     // Catch: java.lang.Exception -> L67
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L67
            com.bianfeng.ymnsdk.util.Logger.e(r3)     // Catch: java.lang.Exception -> L67
            int r3 = r2.pid     // Catch: java.lang.Exception -> L67
            if (r3 != r0) goto L28
            android.content.pm.ApplicationInfo r5 = r5.getApplicationInfo()     // Catch: java.lang.Exception -> L67
            java.lang.String r5 = r5.packageName     // Catch: java.lang.Exception -> L67
            java.lang.String r0 = r2.processName     // Catch: java.lang.Exception -> L67
            boolean r5 = r5.equals(r0)     // Catch: java.lang.Exception -> L67
            return r5
        L65:
            r5 = 0
            return r5
        L67:
            r5 = move-exception
            r5.printStackTrace()
            r5 = 1
            return r5
    }

    public static boolean isScreenLandscape(android.app.Activity r0) {
            int r0 = getScreenOrient(r0)
            if (r0 != 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static java.lang.String md5(java.lang.String r1) {
            com.bianfeng.ymnsdk.util.security.SecurityUtil r0 = com.bianfeng.ymnsdk.util.security.SecurityUtil.getInstance()     // Catch: java.lang.Exception -> L9
            java.lang.String r1 = r0.md5(r1)     // Catch: java.lang.Exception -> L9
            return r1
        L9:
            java.lang.String r1 = ""
            return r1
    }
}

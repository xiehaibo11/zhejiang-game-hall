package com.huawei.hms.framework.common;

public class ActivityUtil {
    private static final java.lang.String TAG = "ActivityUtil";

    public ActivityUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.app.PendingIntent getActivities(android.content.Context r2, int r3, android.content.Intent[] r4, int r5) {
            java.lang.String r0 = "ActivityUtil"
            r1 = 0
            if (r2 != 0) goto Lb
            java.lang.String r2 = "context is null"
            com.huawei.hms.framework.common.Logger.w(r0, r2)
            return r1
        Lb:
            android.app.PendingIntent r1 = android.app.PendingIntent.getActivities(r2, r3, r4, r5)     // Catch: java.lang.RuntimeException -> L10
            goto L16
        L10:
            r2 = move-exception
            java.lang.String r3 = "dealType rethrowFromSystemServer:"
            com.huawei.hms.framework.common.Logger.e(r0, r3, r2)
        L16:
            return r1
    }

    public static boolean isForeground(android.content.Context r5) {
            java.lang.String r0 = "ActivityUtil"
            if (r5 == 0) goto L49
            java.lang.String r1 = "activity"
            java.lang.Object r1 = com.huawei.hms.framework.common.ContextCompat.getSystemService(r5, r1)
            android.app.ActivityManager r1 = (android.app.ActivityManager) r1
            if (r1 == 0) goto L49
            r2 = 0
            java.util.List r2 = r1.getRunningAppProcesses()     // Catch: java.lang.RuntimeException -> L14
            goto L1a
        L14:
            r1 = move-exception
            java.lang.String r3 = "activityManager getRunningAppProcesses occur exception: "
            com.huawei.hms.framework.common.Logger.w(r0, r3, r1)
        L1a:
            if (r2 == 0) goto L49
            java.util.Iterator r1 = r2.iterator()
        L20:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L49
            java.lang.Object r2 = r1.next()
            android.app.ActivityManager$RunningAppProcessInfo r2 = (android.app.ActivityManager.RunningAppProcessInfo) r2
            java.lang.String r3 = r2.processName
            if (r3 == 0) goto L20
            java.lang.String r3 = r2.processName
            java.lang.String r4 = r5.getPackageName()
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L20
            int r2 = r2.importance
            r3 = 100
            if (r2 != r3) goto L20
            java.lang.String r5 = "isForeground true"
            com.huawei.hms.framework.common.Logger.v(r0, r5)
            r5 = 1
            return r5
        L49:
            r5 = 0
            return r5
    }
}

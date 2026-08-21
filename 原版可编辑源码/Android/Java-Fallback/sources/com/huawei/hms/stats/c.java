package com.huawei.hms.stats;

public class c {
    public static final java.lang.Object a = null;
    public static boolean b;
    public static boolean c;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.stats.c.a = r0
            return
    }

    public static boolean a() {
            java.lang.Object r0 = com.huawei.hms.stats.c.a
            monitor-enter(r0)
            boolean r1 = com.huawei.hms.stats.c.b     // Catch: java.lang.Throwable -> L4a
            if (r1 != 0) goto L46
            java.lang.String r1 = "com.huawei.hianalytics.process.HiAnalyticsInstance"
            r2 = 0
            r3 = 1
            java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L10 java.lang.Throwable -> L4a
            r1 = r3
            goto L18
        L10:
            java.lang.String r1 = "HianalyticsExist"
            java.lang.String r4 = "In isHianalyticsExist, Failed to find class HiAnalyticsConfig."
            com.huawei.hms.support.log.HMSLog.i(r1, r4)     // Catch: java.lang.Throwable -> L4a
            r1 = r2
        L18:
            java.lang.String r4 = "com.huawei.hms.hatool.HmsHiAnalyticsUtils"
            java.lang.Class.forName(r4)     // Catch: java.lang.ClassNotFoundException -> L1f java.lang.Throwable -> L4a
            r2 = r3
            goto L26
        L1f:
            java.lang.String r4 = "HianalyticsExist"
            java.lang.String r5 = "In isHianalyticsExist, Failed to find class HmsHiAnalyticsUtils."
            com.huawei.hms.support.log.HMSLog.i(r4, r5)     // Catch: java.lang.Throwable -> L4a
        L26:
            if (r1 == 0) goto L2c
            if (r2 != 0) goto L2c
            com.huawei.hms.stats.c.c = r3     // Catch: java.lang.Throwable -> L4a
        L2c:
            com.huawei.hms.stats.c.b = r3     // Catch: java.lang.Throwable -> L4a
            java.lang.String r1 = "HianalyticsExist"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4a
            r2.<init>()     // Catch: java.lang.Throwable -> L4a
            java.lang.String r3 = "hianalytics exist: "
            r2.append(r3)     // Catch: java.lang.Throwable -> L4a
            boolean r3 = com.huawei.hms.stats.c.c     // Catch: java.lang.Throwable -> L4a
            r2.append(r3)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L4a
            com.huawei.hms.support.log.HMSLog.i(r1, r2)     // Catch: java.lang.Throwable -> L4a
        L46:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4a
            boolean r0 = com.huawei.hms.stats.c.c
            return r0
        L4a:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4a
            throw r1
    }
}

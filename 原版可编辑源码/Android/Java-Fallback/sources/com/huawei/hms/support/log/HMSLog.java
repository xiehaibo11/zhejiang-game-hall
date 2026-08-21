package com.huawei.hms.support.log;

public class HMSLog {
    public static final com.huawei.hms.base.log.a a = null;

    static {
            com.huawei.hms.base.log.a r0 = new com.huawei.hms.base.log.a
            r0.<init>()
            com.huawei.hms.support.log.HMSLog.a = r0
            return
    }

    public HMSLog() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(android.content.Context r3) {
            android.content.pm.PackageManager r0 = r3.getPackageManager()
            java.lang.String r1 = "HMS-[unknown-version]"
            if (r0 == 0) goto L35
            java.lang.String r3 = r3.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L35
            r2 = 16384(0x4000, float:2.2959E-41)
            android.content.pm.PackageInfo r3 = r0.getPackageInfo(r3, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L35
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L35
            r0.<init>()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L35
            java.lang.String r2 = "HMS-"
            r0.append(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L35
            java.lang.String r2 = r3.versionName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L35
            r0.append(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L35
            java.lang.String r2 = "("
            r0.append(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L35
            int r3 = r3.versionCode     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L35
            r0.append(r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L35
            java.lang.String r3 = ")"
            r0.append(r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L35
            java.lang.String r3 = r0.toString()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L35
            return r3
        L35:
            return r1
    }

    public static void d(java.lang.String r2, java.lang.String r3) {
            com.huawei.hms.base.log.a r0 = com.huawei.hms.support.log.HMSLog.a
            r1 = 3
            r0.a(r1, r2, r3)
            return
    }

    public static void e(java.lang.String r3, long r4, java.lang.String r6) {
            com.huawei.hms.base.log.a r0 = com.huawei.hms.support.log.HMSLog.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "["
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "] "
            r1.append(r4)
            r1.append(r6)
            java.lang.String r4 = r1.toString()
            r5 = 6
            r0.a(r5, r3, r4)
            return
    }

    public static void e(java.lang.String r3, long r4, java.lang.String r6, java.lang.Throwable r7) {
            com.huawei.hms.base.log.a r0 = com.huawei.hms.support.log.HMSLog.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "["
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "] "
            r1.append(r4)
            r1.append(r6)
            java.lang.String r4 = r1.toString()
            r5 = 6
            r0.b(r5, r3, r4, r7)
            return
    }

    public static void e(java.lang.String r2, java.lang.String r3) {
            com.huawei.hms.base.log.a r0 = com.huawei.hms.support.log.HMSLog.a
            r1 = 6
            r0.a(r1, r2, r3)
            return
    }

    public static void e(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            com.huawei.hms.base.log.a r0 = com.huawei.hms.support.log.HMSLog.a
            r1 = 6
            r0.b(r1, r2, r3, r4)
            return
    }

    public static void i(java.lang.String r2, java.lang.String r3) {
            com.huawei.hms.base.log.a r0 = com.huawei.hms.support.log.HMSLog.a
            r1 = 4
            r0.a(r1, r2, r3)
            return
    }

    public static void init(android.content.Context r3, int r4, java.lang.String r5) {
            com.huawei.hms.base.log.a r0 = com.huawei.hms.support.log.HMSLog.a
            r0.a(r3, r4, r5)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "============================================================================"
            r4.append(r0)
            r1 = 10
            r4.append(r1)
            java.lang.String r2 = "====== "
            r4.append(r2)
            java.lang.String r3 = a(r3)
            r4.append(r3)
            r4.append(r1)
            r4.append(r0)
            com.huawei.hms.base.log.a r3 = com.huawei.hms.support.log.HMSLog.a
            java.lang.String r4 = r4.toString()
            r3.a(r5, r4)
            return
    }

    public static boolean isErrorEnable() {
            com.huawei.hms.base.log.a r0 = com.huawei.hms.support.log.HMSLog.a
            r1 = 6
            boolean r0 = r0.a(r1)
            return r0
    }

    public static boolean isInfoEnable() {
            com.huawei.hms.base.log.a r0 = com.huawei.hms.support.log.HMSLog.a
            r1 = 4
            boolean r0 = r0.a(r1)
            return r0
    }

    public static boolean isWarnEnable() {
            com.huawei.hms.base.log.a r0 = com.huawei.hms.support.log.HMSLog.a
            r1 = 5
            boolean r0 = r0.a(r1)
            return r0
    }

    public static void w(java.lang.String r2, java.lang.String r3) {
            com.huawei.hms.base.log.a r0 = com.huawei.hms.support.log.HMSLog.a
            r1 = 5
            r0.a(r1, r2, r3)
            return
    }
}

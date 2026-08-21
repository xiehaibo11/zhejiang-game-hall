package com.huawei.hms.stats;

public class a {
    public static int a;
    public static final java.lang.Object b = null;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.stats.a.b = r0
            return
    }

    public static boolean a(android.content.Context r4) {
            r0 = 0
            java.lang.String r1 = "AnalyticsSwitchHolder"
            if (r4 != 0) goto Lb
            java.lang.String r4 = "In getBiIsReportSetting, context is null."
            com.huawei.hms.support.log.HMSLog.e(r1, r4)
            return r0
        Lb:
            android.content.pm.PackageManager r2 = r4.getPackageManager()
            if (r2 == 0) goto L31
            java.lang.String r4 = r4.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2c
            r3 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r4 = r2.getPackageInfo(r4, r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2c
            android.content.pm.ApplicationInfo r4 = r4.applicationInfo     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2c
            if (r4 == 0) goto L31
            android.os.Bundle r2 = r4.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2c
            if (r2 == 0) goto L31
            android.os.Bundle r4 = r4.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2c
            java.lang.String r2 = "com.huawei.hms.client.bireport.setting"
            boolean r4 = r4.getBoolean(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2c
            return r4
        L2c:
            java.lang.String r4 = "In getBiIsReportSetting, Failed to read meta data bi report setting."
            com.huawei.hms.support.log.HMSLog.e(r1, r4)
        L31:
            java.lang.String r4 = "In getBiIsReportSetting, configuration not found for bi report setting."
            com.huawei.hms.support.log.HMSLog.i(r1, r4)
            return r0
    }

    public static boolean b(android.content.Context r4) {
            r0 = 0
            java.lang.String r1 = "AnalyticsSwitchHolder"
            if (r4 != 0) goto Lb
            java.lang.String r4 = "In getBiSetting, context is null."
            com.huawei.hms.support.log.HMSLog.e(r1, r4)
            return r0
        Lb:
            android.content.pm.PackageManager r2 = r4.getPackageManager()
            if (r2 == 0) goto L31
            java.lang.String r4 = r4.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2c
            r3 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r4 = r2.getPackageInfo(r4, r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2c
            android.content.pm.ApplicationInfo r4 = r4.applicationInfo     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2c
            if (r4 == 0) goto L31
            android.os.Bundle r2 = r4.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2c
            if (r2 == 0) goto L31
            android.os.Bundle r4 = r4.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2c
            java.lang.String r2 = "com.huawei.hms.client.bi.setting"
            boolean r4 = r4.getBoolean(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2c
            return r4
        L2c:
            java.lang.String r4 = "In getBiSetting, Failed to read meta data bisetting."
            com.huawei.hms.support.log.HMSLog.e(r1, r4)
        L31:
            java.lang.String r4 = "In getBiSetting, configuration not found for bisetting."
            com.huawei.hms.support.log.HMSLog.i(r1, r4)
            return r0
    }

    public static boolean c(android.content.Context r6) {
            java.lang.Object r0 = com.huawei.hms.stats.a.b
            monitor-enter(r0)
            int r1 = com.huawei.hms.stats.a.a     // Catch: java.lang.Throwable -> L80
            r2 = 1
            if (r1 != 0) goto L78
            if (r6 != 0) goto Lc
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L80
            return r2
        Lc:
            boolean r1 = a(r6)     // Catch: java.lang.Throwable -> L80
            if (r1 == 0) goto L1c
            java.lang.String r6 = "AnalyticsSwitchHolder"
            java.lang.String r1 = "Builder->biReportSetting :true"
            com.huawei.hms.support.log.HMSLog.i(r6, r1)     // Catch: java.lang.Throwable -> L80
            com.huawei.hms.stats.a.a = r2     // Catch: java.lang.Throwable -> L80
            goto L78
        L1c:
            boolean r1 = b(r6)     // Catch: java.lang.Throwable -> L80
            r3 = 2
            if (r1 == 0) goto L2d
            java.lang.String r6 = "AnalyticsSwitchHolder"
            java.lang.String r1 = "Builder->biSetting :true"
            com.huawei.hms.support.log.HMSLog.i(r6, r1)     // Catch: java.lang.Throwable -> L80
            com.huawei.hms.stats.a.a = r3     // Catch: java.lang.Throwable -> L80
            goto L78
        L2d:
            java.lang.String r1 = "CN"
            com.huawei.hms.framework.network.grs.GrsApp r4 = com.huawei.hms.framework.network.grs.GrsApp.getInstance()     // Catch: java.lang.Throwable -> L80
            java.lang.String r4 = r4.getIssueCountryCode(r6)     // Catch: java.lang.Throwable -> L80
            boolean r1 = r1.equalsIgnoreCase(r4)     // Catch: java.lang.Throwable -> L80
            if (r1 == 0) goto L40
            com.huawei.hms.stats.a.a = r2     // Catch: java.lang.Throwable -> L80
            goto L78
        L40:
            java.lang.String r1 = "AnalyticsSwitchHolder"
            java.lang.String r4 = "not ChinaROM"
            com.huawei.hms.support.log.HMSLog.i(r1, r4)     // Catch: java.lang.Throwable -> L80
            android.content.ContentResolver r6 = r6.getContentResolver()     // Catch: android.provider.Settings.SettingNotFoundException -> L6f java.lang.Throwable -> L80
            java.lang.String r1 = "hw_app_analytics_state"
            int r6 = android.provider.Settings.Secure.getInt(r6, r1)     // Catch: android.provider.Settings.SettingNotFoundException -> L6f java.lang.Throwable -> L80
            java.lang.String r1 = "AnalyticsSwitchHolder"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: android.provider.Settings.SettingNotFoundException -> L6f java.lang.Throwable -> L80
            r4.<init>()     // Catch: android.provider.Settings.SettingNotFoundException -> L6f java.lang.Throwable -> L80
            java.lang.String r5 = "hw_app_analytics_state value is "
            r4.append(r5)     // Catch: android.provider.Settings.SettingNotFoundException -> L6f java.lang.Throwable -> L80
            r4.append(r6)     // Catch: android.provider.Settings.SettingNotFoundException -> L6f java.lang.Throwable -> L80
            java.lang.String r4 = r4.toString()     // Catch: android.provider.Settings.SettingNotFoundException -> L6f java.lang.Throwable -> L80
            com.huawei.hms.support.log.HMSLog.i(r1, r4)     // Catch: android.provider.Settings.SettingNotFoundException -> L6f java.lang.Throwable -> L80
            if (r6 != r2) goto L6c
            com.huawei.hms.stats.a.a = r2     // Catch: android.provider.Settings.SettingNotFoundException -> L6f java.lang.Throwable -> L80
            goto L78
        L6c:
            com.huawei.hms.stats.a.a = r3     // Catch: android.provider.Settings.SettingNotFoundException -> L6f java.lang.Throwable -> L80
            goto L78
        L6f:
            java.lang.String r6 = "AnalyticsSwitchHolder"
            java.lang.String r1 = "Get OOBE failed"
            com.huawei.hms.support.log.HMSLog.i(r6, r1)     // Catch: java.lang.Throwable -> L80
            com.huawei.hms.stats.a.a = r3     // Catch: java.lang.Throwable -> L80
        L78:
            int r6 = com.huawei.hms.stats.a.a     // Catch: java.lang.Throwable -> L80
            if (r6 == r2) goto L7d
            goto L7e
        L7d:
            r2 = 0
        L7e:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L80
            return r2
        L80:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L80
            throw r6
    }
}

package com.huawei.hms.common.util;

public class AGCUtils {
    public AGCUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(android.content.Context r5) {
            java.lang.String r0 = "In getMetaDataAppId, Failed to read meta data for the AppID."
            android.content.pm.PackageManager r1 = r5.getPackageManager()
            java.lang.String r2 = ""
            java.lang.String r3 = "AGCUtils"
            if (r1 != 0) goto L12
            java.lang.String r5 = "In getMetaDataAppId, Failed to get 'PackageManager' instance."
            com.huawei.hms.support.log.HMSLog.e(r3, r5)
            return r2
        L12:
            java.lang.String r5 = r5.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L44
            r4 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r5 = r1.getPackageInfo(r5, r4)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L44
            android.content.pm.ApplicationInfo r5 = r5.applicationInfo     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L44
            if (r5 == 0) goto L40
            android.os.Bundle r1 = r5.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L44
            if (r1 == 0) goto L40
            android.os.Bundle r5 = r5.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L44
            java.lang.String r1 = "com.huawei.hms.client.appid"
            java.lang.Object r5 = r5.get(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L44
            if (r5 == 0) goto L40
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L44
            java.lang.String r1 = "appid="
            boolean r1 = r5.startsWith(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L44
            if (r1 == 0) goto L3f
            r1 = 6
            java.lang.String r5 = r5.substring(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L44
        L3f:
            return r5
        L40:
            com.huawei.hms.support.log.HMSLog.e(r3, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L44
            return r2
        L44:
            com.huawei.hms.support.log.HMSLog.e(r3, r0)
            return r2
    }

    public static java.lang.String a(android.content.Context r7, java.lang.String r8) {
            java.lang.String r0 = "Get "
            java.lang.String r1 = ""
            java.lang.String r2 = "AGCUtils"
            r3 = 0
            com.huawei.agconnect.AGConnectOptionsBuilder r4 = new com.huawei.agconnect.AGConnectOptionsBuilder     // Catch: java.lang.Throwable -> L2d java.lang.NullPointerException -> L2f java.io.IOException -> L4b
            r4.<init>()     // Catch: java.lang.Throwable -> L2d java.lang.NullPointerException -> L2f java.io.IOException -> L4b
            android.content.res.Resources r5 = r7.getResources()     // Catch: java.lang.Throwable -> L2d java.lang.NullPointerException -> L2f java.io.IOException -> L4b
            android.content.res.AssetManager r5 = r5.getAssets()     // Catch: java.lang.Throwable -> L2d java.lang.NullPointerException -> L2f java.io.IOException -> L4b
            java.lang.String r6 = "agconnect-services.json"
            java.io.InputStream r3 = r5.open(r6)     // Catch: java.lang.Throwable -> L2d java.lang.NullPointerException -> L2f java.io.IOException -> L4b
            r4.setInputStream(r3)     // Catch: java.lang.Throwable -> L2d java.lang.NullPointerException -> L2f java.io.IOException -> L4b
            com.huawei.agconnect.AGConnectInstance.initialize(r7, r4)     // Catch: java.lang.Throwable -> L2d java.lang.NullPointerException -> L2f java.io.IOException -> L4b
            com.huawei.agconnect.AGConnectInstance r7 = com.huawei.agconnect.AGConnectInstance.getInstance()     // Catch: java.lang.Throwable -> L2d java.lang.NullPointerException -> L2f java.io.IOException -> L4b
            com.huawei.agconnect.AGConnectOptions r7 = r7.getOptions()     // Catch: java.lang.Throwable -> L2d java.lang.NullPointerException -> L2f java.io.IOException -> L4b
            java.lang.String r7 = r7.getString(r8)     // Catch: java.lang.Throwable -> L2d java.lang.NullPointerException -> L2f java.io.IOException -> L4b
            goto L67
        L2d:
            r7 = move-exception
            goto L8b
        L2f:
            r7 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2d
            r4.<init>()     // Catch: java.lang.Throwable -> L2d
            r4.append(r0)     // Catch: java.lang.Throwable -> L2d
            r4.append(r8)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r0 = " with AGConnectServicesConfig failed: "
            r4.append(r0)     // Catch: java.lang.Throwable -> L2d
            r4.append(r7)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r7 = r4.toString()     // Catch: java.lang.Throwable -> L2d
            com.huawei.hms.support.log.HMSLog.e(r2, r7)     // Catch: java.lang.Throwable -> L2d
            goto L66
        L4b:
            r7 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2d
            r4.<init>()     // Catch: java.lang.Throwable -> L2d
            r4.append(r0)     // Catch: java.lang.Throwable -> L2d
            r4.append(r8)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r0 = " failed: "
            r4.append(r0)     // Catch: java.lang.Throwable -> L2d
            r4.append(r7)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r7 = r4.toString()     // Catch: java.lang.Throwable -> L2d
            com.huawei.hms.support.log.HMSLog.e(r2, r7)     // Catch: java.lang.Throwable -> L2d
        L66:
            r7 = r1
        L67:
            com.huawei.hms.utils.IOUtils.closeQuietly(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 != 0) goto L71
            return r7
        L71:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "The "
            r7.append(r0)
            r7.append(r8)
            java.lang.String r8 = " is null."
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.huawei.hms.support.log.HMSLog.e(r2, r7)
            return r1
        L8b:
            com.huawei.hms.utils.IOUtils.closeQuietly(r3)
            throw r7
    }

    public static java.lang.String b(android.content.Context r5) {
            java.lang.String r0 = "In getMetaDataCpId, Failed to read meta data for the CpId."
            android.content.pm.PackageManager r1 = r5.getPackageManager()
            java.lang.String r2 = ""
            java.lang.String r3 = "AGCUtils"
            if (r1 != 0) goto L12
            java.lang.String r5 = "In getMetaDataCpId, Failed to get 'PackageManager' instance."
            com.huawei.hms.support.log.HMSLog.e(r3, r5)
            return r2
        L12:
            java.lang.String r5 = r5.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L44
            r4 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r5 = r1.getPackageInfo(r5, r4)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L44
            android.content.pm.ApplicationInfo r5 = r5.applicationInfo     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L44
            if (r5 == 0) goto L40
            android.os.Bundle r1 = r5.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L44
            if (r1 == 0) goto L40
            android.os.Bundle r5 = r5.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L44
            java.lang.String r1 = "com.huawei.hms.client.cpid"
            java.lang.Object r5 = r5.get(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L44
            if (r5 == 0) goto L40
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L44
            java.lang.String r1 = "cpid="
            boolean r1 = r5.startsWith(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L44
            if (r1 == 0) goto L3f
            r1 = 5
            java.lang.String r5 = r5.substring(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L44
        L3f:
            return r5
        L40:
            com.huawei.hms.support.log.HMSLog.i(r3, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L44
            return r2
        L44:
            com.huawei.hms.support.log.HMSLog.e(r3, r0)
            return r2
    }

    public static boolean c(android.content.Context r1) {
            java.lang.String r0 = r1.getPackageName()
            com.huawei.hms.utils.HMSPackageManager r1 = com.huawei.hms.utils.HMSPackageManager.getInstance(r1)
            java.lang.String r1 = r1.getHMSPackageName()
            boolean r1 = r0.equals(r1)
            return r1
    }

    public static java.lang.String getAppId(android.content.Context r4) {
            boolean r0 = c(r4)
            java.lang.String r1 = "client/app_id"
            if (r0 == 0) goto Ld
            java.lang.String r4 = a(r4, r1)
            return r4
        Ld:
            r0 = 0
            com.huawei.agconnect.AGConnectInstance r2 = com.huawei.agconnect.AGConnectInstance.getInstance()     // Catch: java.lang.NullPointerException -> L1b
            com.huawei.agconnect.AGConnectOptions r2 = r2.getOptions()     // Catch: java.lang.NullPointerException -> L1b
            java.lang.String r0 = r2.getString(r1)     // Catch: java.lang.NullPointerException -> L1b
            goto L22
        L1b:
            java.lang.String r2 = "AGCUtils"
            java.lang.String r3 = "Get appId with AGConnectServicesConfig failed"
            com.huawei.hms.support.log.HMSLog.e(r2, r3)
        L22:
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L29
            return r0
        L29:
            java.lang.String r0 = a(r4)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L34
            return r0
        L34:
            java.lang.String r4 = a(r4, r1)
            return r4
    }

    public static java.lang.String getCpId(android.content.Context r4) {
            boolean r0 = c(r4)
            java.lang.String r1 = "client/cp_id"
            if (r0 == 0) goto Ld
            java.lang.String r4 = a(r4, r1)
            return r4
        Ld:
            r0 = 0
            com.huawei.agconnect.AGConnectInstance r2 = com.huawei.agconnect.AGConnectInstance.getInstance()     // Catch: java.lang.NullPointerException -> L1b
            com.huawei.agconnect.AGConnectOptions r2 = r2.getOptions()     // Catch: java.lang.NullPointerException -> L1b
            java.lang.String r0 = r2.getString(r1)     // Catch: java.lang.NullPointerException -> L1b
            goto L22
        L1b:
            java.lang.String r2 = "AGCUtils"
            java.lang.String r3 = "Get cpid with AGConnectServicesConfig failed"
            com.huawei.hms.support.log.HMSLog.e(r2, r3)
        L22:
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L29
            return r0
        L29:
            java.lang.String r0 = b(r4)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L34
            return r0
        L34:
            java.lang.String r4 = a(r4, r1)
            return r4
    }
}

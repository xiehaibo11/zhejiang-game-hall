package com.xiaomi.mipush.sdk;

public class Logger {
    private static boolean sDisablePushLog;
    private static com.xiaomi.channel.commonutils.logger.LoggerInterface sUserLogger;

    static {
            return
    }

    public Logger() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void disablePushFileLog(android.content.Context r1) {
            r0 = 1
            com.xiaomi.mipush.sdk.Logger.sDisablePushLog = r0
            setPushLog(r1)
            return
    }

    public static void enablePushFileLog(android.content.Context r1) {
            r0 = 0
            com.xiaomi.mipush.sdk.Logger.sDisablePushLog = r0
            setPushLog(r1)
            return
    }

    @java.lang.Deprecated
    public static java.io.File getLogFile(java.lang.String r0) {
            r0 = 0
            return r0
    }

    protected static com.xiaomi.channel.commonutils.logger.LoggerInterface getUserLogger() {
            com.xiaomi.channel.commonutils.logger.LoggerInterface r0 = com.xiaomi.mipush.sdk.Logger.sUserLogger
            return r0
    }

    private static boolean hasWritePermission(android.content.Context r5) {
            r0 = 0
            android.content.pm.PackageManager r1 = r5.getPackageManager()     // Catch: java.lang.Exception -> L26
            java.lang.String r5 = r5.getPackageName()     // Catch: java.lang.Exception -> L26
            r2 = 4096(0x1000, float:5.74E-42)
            android.content.pm.PackageInfo r5 = r1.getPackageInfo(r5, r2)     // Catch: java.lang.Exception -> L26
            java.lang.String[] r5 = r5.requestedPermissions     // Catch: java.lang.Exception -> L26
            if (r5 == 0) goto L26
            int r1 = r5.length     // Catch: java.lang.Exception -> L26
            r2 = r0
        L15:
            if (r2 >= r1) goto L26
            r3 = r5[r2]     // Catch: java.lang.Exception -> L26
            java.lang.String r4 = "android.permission.WRITE_EXTERNAL_STORAGE"
            boolean r3 = r4.equals(r3)     // Catch: java.lang.Exception -> L26
            if (r3 == 0) goto L23
            r5 = 1
            return r5
        L23:
            int r2 = r2 + 1
            goto L15
        L26:
            return r0
    }

    public static void setLogger(android.content.Context r0, com.xiaomi.channel.commonutils.logger.LoggerInterface r1) {
            com.xiaomi.mipush.sdk.Logger.sUserLogger = r1
            setPushLog(r0)
            return
    }

    public static void setPushLog(android.content.Context r4) {
            com.xiaomi.channel.commonutils.logger.LoggerInterface r0 = com.xiaomi.mipush.sdk.Logger.sUserLogger
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L8
            r0 = r1
            goto L9
        L8:
            r0 = r2
        L9:
            boolean r3 = com.xiaomi.mipush.sdk.Logger.sDisablePushLog
            if (r3 == 0) goto Lf
            r1 = r2
            goto L18
        Lf:
            boolean r3 = hasWritePermission(r4)
            if (r3 == 0) goto L16
            goto L17
        L16:
            r1 = r2
        L17:
            r2 = r0
        L18:
            com.xiaomi.push.di r0 = new com.xiaomi.push.di
            r3 = 0
            if (r2 == 0) goto L20
            com.xiaomi.channel.commonutils.logger.LoggerInterface r2 = com.xiaomi.mipush.sdk.Logger.sUserLogger
            goto L21
        L20:
            r2 = r3
        L21:
            if (r1 == 0) goto L27
            com.xiaomi.push.dj r3 = com.xiaomi.push.dj.a(r4)
        L27:
            r0.<init>(r2, r3)
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            return
    }

    @java.lang.Deprecated
    public static void uploadLogFile(android.content.Context r0, boolean r1) {
            return
    }
}

package com.alibaba.sdk.android.oss.common;

public class OSSLog {
    private static final java.lang.String TAG = "OSS-Android-SDK";
    private static boolean enableLog;

    static {
            return
    }

    public OSSLog() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void disableLog() {
            r0 = 0
            com.alibaba.sdk.android.oss.common.OSSLog.enableLog = r0
            return
    }

    public static void enableLog() {
            r0 = 1
            com.alibaba.sdk.android.oss.common.OSSLog.enableLog = r0
            return
    }

    public static boolean isEnableLog() {
            boolean r0 = com.alibaba.sdk.android.oss.common.OSSLog.enableLog
            return r0
    }

    private static void log2Local(java.lang.String r0, boolean r1) {
            if (r1 == 0) goto L9
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils r1 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.getInstance()
            r1.write(r0)
        L9:
            return
    }

    public static void logDebug(java.lang.String r1) {
            java.lang.String r0 = "OSS-Android-SDK"
            logDebug(r0, r1)
            return
    }

    public static void logDebug(java.lang.String r1, java.lang.String r2) {
            r0 = 1
            logDebug(r1, r2, r0)
            return
    }

    public static void logDebug(java.lang.String r1, java.lang.String r2, boolean r3) {
            boolean r0 = com.alibaba.sdk.android.oss.common.OSSLog.enableLog
            if (r0 == 0) goto L10
            java.lang.String r0 = "[Debug]: "
            java.lang.String r0 = r0.concat(r2)
            android.util.Log.d(r1, r0)
            log2Local(r2, r3)
        L10:
            return
    }

    public static void logDebug(java.lang.String r1, boolean r2) {
            java.lang.String r0 = "OSS-Android-SDK"
            logDebug(r0, r1, r2)
            return
    }

    public static void logError(java.lang.String r1) {
            java.lang.String r0 = "OSS-Android-SDK"
            logError(r0, r1)
            return
    }

    public static void logError(java.lang.String r1, java.lang.String r2) {
            r0 = 1
            logDebug(r1, r2, r0)
            return
    }

    public static void logError(java.lang.String r1, java.lang.String r2, boolean r3) {
            boolean r0 = com.alibaba.sdk.android.oss.common.OSSLog.enableLog
            if (r0 == 0) goto L10
            java.lang.String r0 = "[Error]: "
            java.lang.String r0 = r0.concat(r2)
            android.util.Log.d(r1, r0)
            log2Local(r2, r3)
        L10:
            return
    }

    public static void logError(java.lang.String r1, boolean r2) {
            java.lang.String r0 = "OSS-Android-SDK"
            logError(r0, r1, r2)
            return
    }

    public static void logInfo(java.lang.String r1) {
            r0 = 1
            logInfo(r1, r0)
            return
    }

    public static void logInfo(java.lang.String r2, boolean r3) {
            boolean r0 = com.alibaba.sdk.android.oss.common.OSSLog.enableLog
            if (r0 == 0) goto L12
            java.lang.String r0 = "[INFO]: "
            java.lang.String r0 = r0.concat(r2)
            java.lang.String r1 = "OSS-Android-SDK"
            android.util.Log.i(r1, r0)
            log2Local(r2, r3)
        L12:
            return
    }

    public static void logThrowable2Local(java.lang.Throwable r1) {
            boolean r0 = com.alibaba.sdk.android.oss.common.OSSLog.enableLog
            if (r0 == 0) goto Lb
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils r0 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.getInstance()
            r0.write(r1)
        Lb:
            return
    }

    public static void logVerbose(java.lang.String r1) {
            r0 = 1
            logVerbose(r1, r0)
            return
    }

    public static void logVerbose(java.lang.String r2, boolean r3) {
            boolean r0 = com.alibaba.sdk.android.oss.common.OSSLog.enableLog
            if (r0 == 0) goto L12
            java.lang.String r0 = "[Verbose]: "
            java.lang.String r0 = r0.concat(r2)
            java.lang.String r1 = "OSS-Android-SDK"
            android.util.Log.v(r1, r0)
            log2Local(r2, r3)
        L12:
            return
    }

    public static void logWarn(java.lang.String r1) {
            r0 = 1
            logWarn(r1, r0)
            return
    }

    public static void logWarn(java.lang.String r2, boolean r3) {
            boolean r0 = com.alibaba.sdk.android.oss.common.OSSLog.enableLog
            if (r0 == 0) goto L12
            java.lang.String r0 = "[Warn]: "
            java.lang.String r0 = r0.concat(r2)
            java.lang.String r1 = "OSS-Android-SDK"
            android.util.Log.w(r1, r0)
            log2Local(r2, r3)
        L12:
            return
    }
}

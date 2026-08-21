package com.ymnsdk.replugin.util;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class LogUtils {
    private static final int OPTIMIZATION_SIZE = 4096;
    public static java.lang.String REPLUGIN_LOG_SWITCH = "replugin_log_switch";
    private static volatile int isOpenLog;

    static {
            return
    }

    public LogUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getDiffPatchLogPath(android.app.Activity r1) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r1 = r1.getFilesDir()
            java.lang.String r1 = r1.getAbsolutePath()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "replugin_log"
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "diff_patch"
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "error_log"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static boolean isLogOpen() {
            int r0 = com.ymnsdk.replugin.util.LogUtils.isOpenLog
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            r0 = 1
            return r0
    }

    public static void postInterruptEvent(android.app.Activity r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r1 = r5.getFilesDir()
            java.lang.String r1 = r1.getAbsolutePath()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "handle_plugin_log"
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r2 = "install_plugin_step_log.txt"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "merge_apk_step_log.txt"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            java.io.File r2 = new java.io.File
            r2.<init>(r0)
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r1 = r2.exists()
            if (r1 == 0) goto L6f
            byte[] r1 = readFile(r2)
            if (r1 == 0) goto L6f
            java.lang.String r3 = new java.lang.String
            r3.<init>(r1)
            com.ymnsdk.replugin.datafun.PostdataLib r1 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.installplugin.MergeInterruptEvent r4 = new com.ymnsdk.replugin.event.installplugin.MergeInterruptEvent
            r4.<init>(r5, r3)
            r1.postToSeperllita(r4)
            r2.delete()
        L6f:
            boolean r1 = r0.exists()
            if (r1 == 0) goto L8f
            byte[] r1 = readFile(r0)
            if (r1 == 0) goto L8f
            java.lang.String r2 = new java.lang.String
            r2.<init>(r1)
            com.ymnsdk.replugin.datafun.PostdataLib r1 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.installplugin.InstallInterruptEvent r3 = new com.ymnsdk.replugin.event.installplugin.InstallInterruptEvent
            r3.<init>(r5, r2)
            r1.postToSeperllita(r3)
            r0.delete()
        L8f:
            return
    }

    public static byte[] readFile(java.io.File r1) {
            boolean r0 = r1.exists()     // Catch: java.io.FileNotFoundException -> L10
            if (r0 == 0) goto L14
            java.io.FileInputStream r0 = new java.io.FileInputStream     // Catch: java.io.FileNotFoundException -> L10
            r0.<init>(r1)     // Catch: java.io.FileNotFoundException -> L10
            byte[] r1 = readInputStream(r0)     // Catch: java.io.FileNotFoundException -> L10
            return r1
        L10:
            r1 = move-exception
            r1.printStackTrace()
        L14:
            r1 = 0
            return r1
    }

    public static byte[] readInputStream(java.io.InputStream r6) {
            r0 = 0
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L28
            r1.<init>()     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L28
            r2 = 4096(0x1000, float:5.74E-42)
            byte[] r2 = new byte[r2]     // Catch: java.lang.Exception -> L21 java.lang.Throwable -> L34
        La:
            int r3 = r6.read(r2)     // Catch: java.lang.Exception -> L21 java.lang.Throwable -> L34
            r4 = -1
            if (r3 == r4) goto L16
            r4 = 0
            r1.write(r2, r4, r3)     // Catch: java.lang.Exception -> L21 java.lang.Throwable -> L34
            goto La
        L16:
            byte[] r0 = r1.toByteArray()     // Catch: java.lang.Exception -> L21 java.lang.Throwable -> L34
            r1.close()     // Catch: java.io.IOException -> L1d
        L1d:
            r6.close()     // Catch: java.io.IOException -> L20
        L20:
            return r0
        L21:
            r2 = move-exception
            goto L2a
        L23:
            r1 = move-exception
            r5 = r1
            r1 = r0
            r0 = r5
            goto L35
        L28:
            r2 = move-exception
            r1 = r0
        L2a:
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L34
            r1.close()     // Catch: java.io.IOException -> L30
        L30:
            r6.close()     // Catch: java.io.IOException -> L33
        L33:
            return r0
        L34:
            r0 = move-exception
        L35:
            r1.close()     // Catch: java.io.IOException -> L38
        L38:
            r6.close()     // Catch: java.io.IOException -> L3b
        L3b:
            throw r0
    }

    public static void setIsOpenLog(int r0) {
            com.ymnsdk.replugin.util.LogUtils.isOpenLog = r0
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setIsLog(r0)
            return
    }
}

package com.qihoo360.replugin.helper;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class LogDebug {
    public static final boolean DUMP_ENABLED = false;
    public static final java.lang.String LOADER_TAG = "createClassLoader";
    public static final boolean LOG = false;
    public static final java.lang.String MAIN_TAG = "ws000";
    public static final java.lang.String MISC_TAG = "ws002";
    public static final java.lang.String PLUGIN_TAG = "ws001";
    public static final java.lang.String TAG = "RePlugin";
    private static final java.lang.String TAG_PREFIX = "RePlugin.";

    static {
            boolean r0 = com.qihoo360.replugin.RePluginInternal.FOR_DEV
            com.qihoo360.replugin.helper.LogDebug.LOG = r0
            com.qihoo360.replugin.helper.LogDebug.DUMP_ENABLED = r0
            return
    }

    public LogDebug() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int d(java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.qihoo360.replugin.RePluginInternal.FOR_DEV
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "RePlugin."
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            int r2 = com.qihoo360.replugin.helper.RepluginLog.d(r2, r3)
            return r2
        L1a:
            r2 = -1
            return r2
    }

    public static int d(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            boolean r0 = com.qihoo360.replugin.RePluginInternal.FOR_DEV
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "RePlugin."
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            int r2 = com.qihoo360.replugin.helper.RepluginLog.d(r2, r3, r4)
            return r2
        L1a:
            r2 = -1
            return r2
    }

    public static int e(java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.qihoo360.replugin.RePluginInternal.FOR_DEV
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "RePlugin."
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            int r2 = com.qihoo360.replugin.helper.RepluginLog.e(r2, r3)
            return r2
        L1a:
            r2 = -1
            return r2
    }

    public static int e(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            boolean r0 = com.qihoo360.replugin.RePluginInternal.FOR_DEV
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "RePlugin."
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            int r2 = com.qihoo360.replugin.helper.RepluginLog.e(r2, r3, r4)
            return r2
        L1a:
            r2 = -1
            return r2
    }

    public static int i(java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.qihoo360.replugin.RePluginInternal.FOR_DEV
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "RePlugin."
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            int r2 = com.qihoo360.replugin.helper.RepluginLog.i(r2, r3)
            return r2
        L1a:
            r2 = -1
            return r2
    }

    public static int i(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            boolean r0 = com.qihoo360.replugin.RePluginInternal.FOR_DEV
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "RePlugin."
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            int r2 = com.qihoo360.replugin.helper.RepluginLog.i(r2, r3, r4)
            return r2
        L1a:
            r2 = -1
            return r2
    }

    public static int printMemoryStatus(java.lang.String r3, java.lang.String r4) {
            boolean r0 = com.qihoo360.replugin.RePluginInternal.FOR_DEV
            if (r0 == 0) goto L75
            android.os.Debug$MemoryInfo r0 = new android.os.Debug$MemoryInfo
            r0.<init>()
            android.os.Debug.getMemoryInfo(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "desc=, memory_v_0_0_1, process=, "
            r1.append(r2)
            java.lang.String r2 = com.qihoo360.replugin.base.IPC.getCurrentProcessName()
            r1.append(r2)
            java.lang.String r2 = ", totalPss=, "
            r1.append(r2)
            int r2 = r0.getTotalPss()
            r1.append(r2)
            java.lang.String r2 = ", dalvikPss=, "
            r1.append(r2)
            int r2 = r0.dalvikPss
            r1.append(r2)
            java.lang.String r2 = ", nativeSize=, "
            r1.append(r2)
            int r2 = r0.nativePss
            r1.append(r2)
            java.lang.String r2 = ", otherPss=, "
            r1.append(r2)
            int r0 = r0.otherPss
            r1.append(r0)
            java.lang.String r0 = ", "
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = "-MEMORY"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            int r3 = android.util.Log.i(r3, r4)
            return r3
        L75:
            r3 = -1
            return r3
    }

    public static int printPluginInfo(com.qihoo360.replugin.model.PluginInfo r6, int r7) {
            java.io.File r0 = r6.getApkFile()
            long r0 = r0.length()
            java.io.File r2 = r6.getDexFile()
            long r2 = r2.length()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "act=, loadLocked, flag=, Start, pn=, "
            r4.append(r5)
            java.lang.String r6 = r6.getName()
            r4.append(r6)
            java.lang.String r6 = ", type=, "
            r4.append(r6)
            r4.append(r7)
            java.lang.String r6 = ", apk=, "
            r4.append(r6)
            r4.append(r0)
            java.lang.String r6 = ", odex=, "
            r4.append(r6)
            r4.append(r2)
            java.lang.String r6 = ", sys_api=, "
            r4.append(r6)
            int r6 = android.os.Build.VERSION.SDK_INT
            r4.append(r6)
            java.lang.String r6 = r4.toString()
            java.lang.String r7 = "RePlugin"
            int r6 = printMemoryStatus(r7, r6)
            return r6
    }

    public static int v(java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.qihoo360.replugin.RePluginInternal.FOR_DEV
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "RePlugin."
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            int r2 = com.qihoo360.replugin.helper.RepluginLog.v(r2, r3)
            return r2
        L1a:
            r2 = -1
            return r2
    }

    public static int v(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            boolean r0 = com.qihoo360.replugin.RePluginInternal.FOR_DEV
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "RePlugin."
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            int r2 = com.qihoo360.replugin.helper.RepluginLog.v(r2, r3, r4)
            return r2
        L1a:
            r2 = -1
            return r2
    }

    public static int w(java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.qihoo360.replugin.RePluginInternal.FOR_DEV
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "RePlugin."
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            int r2 = com.qihoo360.replugin.helper.RepluginLog.w(r2, r3)
            return r2
        L1a:
            r2 = -1
            return r2
    }

    public static int w(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            boolean r0 = com.qihoo360.replugin.RePluginInternal.FOR_DEV
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "RePlugin."
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            int r2 = com.qihoo360.replugin.helper.RepluginLog.w(r2, r3, r4)
            return r2
        L1a:
            r2 = -1
            return r2
    }

    public static int w(java.lang.String r2, java.lang.Throwable r3) {
            boolean r0 = com.qihoo360.replugin.RePluginInternal.FOR_DEV
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "RePlugin."
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            int r2 = com.qihoo360.replugin.helper.RepluginLog.w(r2, r3)
            return r2
        L1a:
            r2 = -1
            return r2
    }
}

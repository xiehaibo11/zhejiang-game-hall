package com.bytedance.pangle.log;

public class ZeusLogger {
    public static final java.lang.String TAG = "Zeus_pangle";
    public static final java.lang.String TAG_ACTIVITY = "Zeus/activity_pangle";
    public static final java.lang.String TAG_DOWNLOAD = "Zeus/download_pangle";
    public static final java.lang.String TAG_INIT = "Zeus/init_pangle";
    public static final java.lang.String TAG_INSTALL = "Zeus/install_pangle";
    public static final java.lang.String TAG_LOAD = "Zeus/load_pangle";
    public static final java.lang.String TAG_PAM = "Zeus/pam_pangle";
    public static final java.lang.String TAG_PPM = "Zeus/ppm_pangle";
    public static final java.lang.String TAG_PROVIDER = "Zeus/provider_pangle";
    public static final java.lang.String TAG_RECEIVER = "Zeus/receiver_pangle";
    public static final java.lang.String TAG_REPORTER = "Zeus/reporter_pangle";
    public static final java.lang.String TAG_RESOURCES = "Zeus/resources_pangle";
    public static final java.lang.String TAG_SERVER = "Zeus/server_pangle";
    public static final java.lang.String TAG_SERVICE = "Zeus/service_pangle";
    public static final java.lang.String TAG_SO = "Zeus/so_pangle";
    private static boolean sDebug = true;
    private static boolean sEnableTrace;

    static {
            return
    }

    public ZeusLogger() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void d(java.lang.String r1) {
            r0 = 0
            d(r0, r1)
            return
    }

    public static void d(java.lang.String r0, java.lang.String r1) {
            i(r0, r1)
            return
    }

    public static void errReport(java.lang.String r4, java.lang.String r5) {
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>()
            java.lang.StackTraceElement[] r1 = r0.getStackTrace()
            int r2 = r1.length
            r3 = 1
            int r2 = r2 - r3
            java.lang.Object[] r1 = java.util.Arrays.copyOfRange(r1, r3, r2)
            java.lang.StackTraceElement[] r1 = (java.lang.StackTraceElement[]) r1
            r0.setStackTrace(r1)
            r1 = 0
            errReport(r4, r5, r0, r1)
            return
    }

    public static void errReport(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            r0 = 1
            errReport(r1, r2, r3, r0)
            return
    }

    private static void errReport(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4, boolean r5) {
            boolean r0 = com.bytedance.pangle.log.ZeusLogger.sDebug
            r1 = 0
            if (r0 == 0) goto Lc
            if (r5 == 0) goto L8
            r1 = r4
        L8:
            android.util.Log.e(r2, r3, r1)
            goto L24
        Lc:
            com.bytedance.pangle.GlobalParam r0 = com.bytedance.pangle.GlobalParam.getInstance()
            com.bytedance.pangle.log.IZeusLogger r0 = r0.getLogger()
            if (r0 == 0) goto L24
            com.bytedance.pangle.GlobalParam r0 = com.bytedance.pangle.GlobalParam.getInstance()
            com.bytedance.pangle.log.IZeusLogger r0 = r0.getLogger()
            if (r5 == 0) goto L21
            r1 = r4
        L21:
            r0.e(r2, r3, r1)
        L24:
            com.bytedance.pangle.apm.AbsApm r2 = com.bytedance.pangle.apm.ApmUtils.getApmInstance()
            r2.reportError(r3, r4)
            return
    }

    private static java.lang.String getTraceInfo() {
            java.lang.String r0 = "\t\t[No Trace Info]"
            java.lang.Throwable r1 = new java.lang.Throwable     // Catch: java.lang.Exception -> L42
            r1.<init>()     // Catch: java.lang.Exception -> L42
            java.lang.StackTraceElement[] r1 = r1.getStackTrace()     // Catch: java.lang.Exception -> L42
            r2 = 0
            r3 = 1
        Ld:
            int r4 = r1.length     // Catch: java.lang.Exception -> L42
            if (r3 >= r4) goto L28
            r4 = r1[r3]     // Catch: java.lang.Exception -> L42
            java.lang.String r4 = r4.getClassName()     // Catch: java.lang.Exception -> L42
            java.lang.Class<com.bytedance.pangle.log.ZeusLogger> r5 = com.bytedance.pangle.log.ZeusLogger.class
            java.lang.String r5 = r5.getName()     // Catch: java.lang.Exception -> L42
            boolean r4 = android.text.TextUtils.equals(r4, r5)     // Catch: java.lang.Exception -> L42
            if (r4 != 0) goto L25
            r2 = r1[r3]     // Catch: java.lang.Exception -> L42
            goto L28
        L25:
            int r3 = r3 + 1
            goto Ld
        L28:
            if (r2 == 0) goto L46
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L42
            java.lang.String r3 = "\t\t["
            r1.<init>(r3)     // Catch: java.lang.Exception -> L42
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L42
            r1.append(r2)     // Catch: java.lang.Exception -> L42
            java.lang.String r2 = "]"
            r1.append(r2)     // Catch: java.lang.Exception -> L42
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L42
            goto L46
        L42:
            r1 = move-exception
            r1.printStackTrace()
        L46:
            return r0
    }

    public static void i(java.lang.String r1) {
            r0 = 0
            i(r0, r1)
            return
    }

    public static void i(java.lang.String r1, java.lang.String r2) {
            java.lang.String r2 = prefixTraceInfo(r2)
            boolean r0 = com.bytedance.pangle.log.ZeusLogger.sDebug
            if (r0 == 0) goto Lc
            android.util.Log.i(r1, r2)
            return
        Lc:
            com.bytedance.pangle.GlobalParam r0 = com.bytedance.pangle.GlobalParam.getInstance()
            com.bytedance.pangle.log.IZeusLogger r0 = r0.getLogger()
            if (r0 == 0) goto L21
            com.bytedance.pangle.GlobalParam r0 = com.bytedance.pangle.GlobalParam.getInstance()
            com.bytedance.pangle.log.IZeusLogger r0 = r0.getLogger()
            r0.i(r1, r2)
        L21:
            return
    }

    public static boolean isDebug() {
            boolean r0 = com.bytedance.pangle.log.ZeusLogger.sDebug
            return r0
    }

    public static boolean isEnableTrace() {
            boolean r0 = com.bytedance.pangle.log.ZeusLogger.sEnableTrace
            return r0
    }

    private static java.lang.String prefixTraceInfo(java.lang.String r1) {
            boolean r0 = com.bytedance.pangle.log.ZeusLogger.sEnableTrace
            if (r0 == 0) goto L17
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = getTraceInfo()
            r0.append(r1)
            java.lang.String r1 = r0.toString()
        L17:
            return r1
    }

    public static void setDebug(boolean r0) {
            com.bytedance.pangle.log.ZeusLogger.sDebug = r0
            return
    }

    public static void setEnableTrace(boolean r0) {
            com.bytedance.pangle.log.ZeusLogger.sEnableTrace = r0
            return
    }

    public static void v(java.lang.String r1) {
            r0 = 0
            v(r0, r1)
            return
    }

    public static void v(java.lang.String r1, java.lang.String r2) {
            java.lang.String r2 = prefixTraceInfo(r2)
            boolean r0 = com.bytedance.pangle.log.ZeusLogger.sDebug
            if (r0 == 0) goto Lc
            android.util.Log.v(r1, r2)
            return
        Lc:
            com.bytedance.pangle.GlobalParam r0 = com.bytedance.pangle.GlobalParam.getInstance()
            com.bytedance.pangle.log.IZeusLogger r0 = r0.getLogger()
            if (r0 == 0) goto L21
            com.bytedance.pangle.GlobalParam r0 = com.bytedance.pangle.GlobalParam.getInstance()
            com.bytedance.pangle.log.IZeusLogger r0 = r0.getLogger()
            r0.v(r1, r2)
        L21:
            return
    }

    public static void w(java.lang.String r1) {
            r0 = 0
            w(r0, r1)
            return
    }

    public static void w(java.lang.String r1, java.lang.String r2) {
            java.lang.String r2 = prefixTraceInfo(r2)
            boolean r0 = com.bytedance.pangle.log.ZeusLogger.sDebug
            if (r0 == 0) goto Lc
            android.util.Log.w(r1, r2)
            return
        Lc:
            com.bytedance.pangle.GlobalParam r0 = com.bytedance.pangle.GlobalParam.getInstance()
            com.bytedance.pangle.log.IZeusLogger r0 = r0.getLogger()
            if (r0 == 0) goto L21
            com.bytedance.pangle.GlobalParam r0 = com.bytedance.pangle.GlobalParam.getInstance()
            com.bytedance.pangle.log.IZeusLogger r0 = r0.getLogger()
            r0.w(r1, r2)
        L21:
            return
    }

    public static void w(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            java.lang.String r2 = prefixTraceInfo(r2)
            boolean r0 = com.bytedance.pangle.log.ZeusLogger.sDebug
            if (r0 == 0) goto Lc
            android.util.Log.w(r1, r2, r3)
            return
        Lc:
            com.bytedance.pangle.GlobalParam r0 = com.bytedance.pangle.GlobalParam.getInstance()
            com.bytedance.pangle.log.IZeusLogger r0 = r0.getLogger()
            if (r0 == 0) goto L21
            com.bytedance.pangle.GlobalParam r0 = com.bytedance.pangle.GlobalParam.getInstance()
            com.bytedance.pangle.log.IZeusLogger r0 = r0.getLogger()
            r0.w(r1, r2, r3)
        L21:
            return
    }
}

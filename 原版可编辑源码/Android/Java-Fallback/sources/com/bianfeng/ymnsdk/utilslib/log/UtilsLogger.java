package com.bianfeng.ymnsdk.utilslib.log;

public class UtilsLogger {
    public static final int ASSERT = 7;
    private static java.lang.String[] COLORS = null;
    public static final int DEBUG = 3;
    public static final int ERROR = 6;
    public static final int INFO = 4;
    public static final java.lang.String TAG = "YmnSdk";
    public static final int VERBOSE = 2;
    public static final int WARN = 5;
    private static java.util.LinkedList<java.lang.String> logs;
    private static boolean showDebugLog;


    static {
            java.lang.String r0 = "#66007F"
            java.lang.String r1 = "#66007F"
            java.lang.String r2 = "#66007F"
            java.lang.String r3 = "#66007F"
            java.lang.String r4 = "#3A7F00"
            java.lang.String r5 = "#FF7F00"
            java.lang.String r6 = "#ff0000"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6}
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.COLORS = r0
            r0 = 0
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.showDebugLog = r0
            return
    }

    private UtilsLogger() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int d(java.lang.String r1) {
            java.lang.String r0 = "YmnSdk"
            int r0 = d(r0, r1)
            return r0
    }

    public static int d(java.lang.String r2, java.lang.String r3) {
            r0 = -1
            boolean r1 = com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.showDebugLog
            if (r1 == 0) goto L9
            r1 = 3
            printlog(r1, r2, r3)
        L9:
            return r0
    }

    public static int dRich(java.lang.String r2) {
            java.lang.String r0 = rich(r2)
            java.lang.String r1 = "YmnSdk"
            int r0 = d(r1, r0)
            return r0
    }

    public static int e(java.lang.Class r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.getName()
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "YmnSdk"
            int r0 = e(r1, r0)
            return r0
    }

    public static int e(java.lang.Object r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "YmnSdk"
            int r0 = e(r1, r0)
            return r0
    }

    public static int e(java.lang.String r1) {
            java.lang.String r0 = "YmnSdk"
            int r0 = e(r0, r1)
            return r0
    }

    public static int e(java.lang.String r1, java.lang.String r2) {
            r0 = 6
            int r0 = printlog(r0, r1, r2)
            return r0
    }

    public static int eRich(java.lang.String r2) {
            java.lang.String r0 = rich(r2)
            java.lang.String r1 = "YmnSdk"
            int r0 = e(r1, r0)
            return r0
    }

    public static java.lang.StringBuilder getCacheLog() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.LinkedList<java.lang.String> r1 = com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.logs
            java.util.Iterator r1 = r1.iterator()
        Lb:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1b
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            r0.append(r2)
            goto Lb
        L1b:
            return r0
    }

    public static boolean getShowDebugLog() {
            boolean r0 = com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.showDebugLog
            return r0
    }

    public static int i(java.lang.Class r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.getName()
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "YmnSdk"
            int r0 = i(r1, r0)
            return r0
    }

    public static int i(java.lang.Object r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "YmnSdk"
            int r0 = i(r1, r0)
            return r0
    }

    public static int i(java.lang.String r1) {
            java.lang.String r0 = "YmnSdk"
            int r0 = i(r0, r1)
            return r0
    }

    public static int i(java.lang.String r2, java.lang.String r3) {
            r0 = -1
            boolean r1 = com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.showDebugLog
            if (r1 == 0) goto La
            r1 = 4
            int r0 = printlog(r1, r2, r3)
        La:
            return r0
    }

    public static int printlog(int r5, java.lang.String r6, java.lang.String r7) {
            java.util.LinkedList<java.lang.String> r0 = com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.logs
            if (r0 == 0) goto L27
            java.lang.String r0 = "\n"
            java.lang.String r1 = "<br/>"
            java.lang.String r0 = r7.replace(r0, r1)
            java.util.LinkedList<java.lang.String> r1 = com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.logs
            r2 = 3
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            java.lang.String[] r4 = com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.COLORS
            r4 = r4[r5]
            r2[r3] = r4
            r3 = 1
            r2[r3] = r6
            r3 = 2
            r2[r3] = r0
            java.lang.String r3 = "<font color='%s'>【%s】<br/>%s</font><br/><br/>"
            java.lang.String r2 = java.lang.String.format(r3, r2)
            r1.addLast(r2)
        L27:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Thread name:"
            r0.append(r1)
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = ";"
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            int r0 = android.util.Log.println(r5, r6, r0)
            return r0
    }

    public static java.lang.String rich(java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "---------------------------------------------->>"
            r0.append(r1)
            java.lang.String r1 = "\n"
            boolean r2 = r3.startsWith(r1)
            if (r2 != 0) goto L15
            r0.append(r1)
        L15:
            r0.append(r3)
            boolean r2 = r3.endsWith(r1)
            if (r2 != 0) goto L21
            r0.append(r1)
        L21:
            java.lang.String r1 = "<<----------------------------------------------"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static void setDebugLog(boolean r0) {
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.showDebugLog = r0
            return
    }

    public static void setLogToCache(boolean r1) {
            if (r1 == 0) goto La
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger$1 r0 = new com.bianfeng.ymnsdk.utilslib.log.UtilsLogger$1
            r0.<init>()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.logs = r0
            goto Ld
        La:
            r0 = 0
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.logs = r0
        Ld:
            return
    }

    public static void updateState() {
            java.lang.String r0 = "state of showDebugLog is "
            boolean r1 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.isSDCardMounted()     // Catch: java.lang.Exception -> L42
            if (r1 == 0) goto L41
            java.io.PrintStream r1 = java.lang.System.out     // Catch: java.lang.Exception -> L42
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L42
            r2.<init>()     // Catch: java.lang.Exception -> L42
            r2.append(r0)     // Catch: java.lang.Exception -> L42
            boolean r3 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.isSDCardMounted()     // Catch: java.lang.Exception -> L42
            r2.append(r3)     // Catch: java.lang.Exception -> L42
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L42
            r1.println(r2)     // Catch: java.lang.Exception -> L42
            java.lang.String r1 = "bianfeng/sdk/debug"
            boolean r1 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.isFileExistInSdCard(r1)     // Catch: java.lang.Exception -> L42
            if (r1 == 0) goto L41
            r1 = 1
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.showDebugLog = r1     // Catch: java.lang.Exception -> L42
            java.io.PrintStream r1 = java.lang.System.out     // Catch: java.lang.Exception -> L42
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L42
            r2.<init>()     // Catch: java.lang.Exception -> L42
            r2.append(r0)     // Catch: java.lang.Exception -> L42
            boolean r3 = com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.showDebugLog     // Catch: java.lang.Exception -> L42
            r2.append(r3)     // Catch: java.lang.Exception -> L42
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L42
            r1.println(r2)     // Catch: java.lang.Exception -> L42
        L41:
            goto L5b
        L42:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "updateState:"
            r2.append(r3)
            java.lang.String r3 = r1.getMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            i(r2)
        L5b:
            java.io.PrintStream r1 = java.lang.System.out
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            boolean r0 = com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.showDebugLog
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.println(r0)
            return
    }

    public static int v(java.lang.String r1) {
            java.lang.String r0 = "YmnSdk"
            int r0 = v(r0, r1)
            return r0
    }

    public static int v(java.lang.String r1, java.lang.String r2) {
            r0 = 2
            int r0 = printlog(r0, r1, r2)
            return r0
    }

    public static int w(java.lang.String r1) {
            java.lang.String r0 = "YmnSdk"
            int r0 = w(r0, r1)
            return r0
    }

    public static int w(java.lang.String r1, java.lang.String r2) {
            r0 = 5
            int r0 = printlog(r0, r1, r2)
            return r0
    }

    public static int wRich(java.lang.String r2) {
            java.lang.String r0 = rich(r2)
            java.lang.String r1 = "YmnSdk"
            int r0 = w(r1, r0)
            return r0
    }
}

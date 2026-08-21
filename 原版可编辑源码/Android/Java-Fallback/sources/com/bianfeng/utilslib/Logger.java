package com.bianfeng.utilslib;

public class Logger {
    public static final int ASSERT = 7;
    private static java.lang.String[] COLORS = null;
    public static final int DEBUG = 3;
    public static final int ERROR = 6;
    public static final int INFO = 4;
    public static final java.lang.String TAG = "YmnSdk";
    public static final int VERBOSE = 2;
    public static final int WARN = 5;
    private static volatile com.bianfeng.utilslib.Logger logger;
    private static java.util.LinkedList<java.lang.String> logs;
    private static boolean showDebugLog;


    static {
            r0 = 7
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            java.lang.String r2 = "#66007F"
            r0[r1] = r2
            r1 = 1
            r0[r1] = r2
            r1 = 2
            r0[r1] = r2
            r1 = 3
            r0[r1] = r2
            r1 = 4
            java.lang.String r2 = "#3A7F00"
            r0[r1] = r2
            r1 = 5
            java.lang.String r2 = "#FF7F00"
            r0[r1] = r2
            r1 = 6
            java.lang.String r2 = "#ff0000"
            r0[r1] = r2
            com.bianfeng.utilslib.Logger.COLORS = r0
            return
    }

    private Logger() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.utilslib.Logger getInstance() {
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.Logger.logger
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.utilslib.Logger> r0 = com.bianfeng.utilslib.Logger.class
            monitor-enter(r0)
            com.bianfeng.utilslib.Logger r1 = com.bianfeng.utilslib.Logger.logger     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.utilslib.Logger r1 = new com.bianfeng.utilslib.Logger     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.utilslib.Logger.logger = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.Logger.logger
            return r0
    }

    public int d(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "YmnSdk"
            int r2 = r1.d(r0, r2)
            return r2
    }

    public int d(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = com.bianfeng.utilslib.Logger.showDebugLog
            if (r0 == 0) goto L8
            r0 = 3
            r1.printlog(r0, r2, r3)
        L8:
            r2 = -1
            return r2
    }

    public int dRich(java.lang.String r2) {
            r1 = this;
            java.lang.String r2 = r1.rich(r2)
            java.lang.String r0 = "YmnSdk"
            int r2 = r1.d(r0, r2)
            return r2
    }

    public int e(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "YmnSdk"
            int r2 = r1.e(r0, r2)
            return r2
    }

    public int e(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r0 = 6
            int r2 = r1.printlog(r0, r2, r3)
            return r2
    }

    public int eRich(java.lang.String r2) {
            r1 = this;
            java.lang.String r2 = r1.rich(r2)
            java.lang.String r0 = "YmnSdk"
            int r2 = r1.e(r0, r2)
            return r2
    }

    public java.lang.StringBuilder getCacheLog() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.LinkedList<java.lang.String> r1 = com.bianfeng.utilslib.Logger.logs
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

    public boolean getShowDebugLog() {
            r1 = this;
            boolean r0 = com.bianfeng.utilslib.Logger.showDebugLog
            return r0
    }

    public int i(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "YmnSdk"
            int r2 = r1.i(r0, r2)
            return r2
    }

    public int i(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = com.bianfeng.utilslib.Logger.showDebugLog
            if (r0 == 0) goto La
            r0 = 4
            int r2 = r1.printlog(r0, r2, r3)
            goto Lb
        La:
            r2 = -1
        Lb:
            return r2
    }

    public int printlog(int r6, java.lang.String r7, java.lang.String r8) {
            r5 = this;
            java.util.LinkedList<java.lang.String> r0 = com.bianfeng.utilslib.Logger.logs
            if (r0 == 0) goto L27
            java.lang.String r0 = "\n"
            java.lang.String r1 = "<br/>"
            java.lang.String r0 = r8.replace(r0, r1)
            java.util.LinkedList<java.lang.String> r1 = com.bianfeng.utilslib.Logger.logs
            r2 = 3
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            java.lang.String[] r4 = com.bianfeng.utilslib.Logger.COLORS
            r4 = r4[r6]
            r2[r3] = r4
            r3 = 1
            r2[r3] = r7
            r3 = 2
            r2[r3] = r0
            java.lang.String r0 = "<font color='%s'>【%s】<br/>%s</font><br/><br/>"
            java.lang.String r0 = java.lang.String.format(r0, r2)
            r1.addLast(r0)
        L27:
            int r6 = android.util.Log.println(r6, r7, r8)
            return r6
    }

    public java.lang.String rich(java.lang.String r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "---------------------------------------------->>"
            r0.append(r1)
            java.lang.String r1 = "\n"
            boolean r2 = r4.startsWith(r1)
            if (r2 != 0) goto L15
            r0.append(r1)
        L15:
            r0.append(r4)
            boolean r4 = r4.endsWith(r1)
            if (r4 != 0) goto L21
            r0.append(r1)
        L21:
            java.lang.String r4 = "<<----------------------------------------------"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            return r4
    }

    public void setDebugLog(boolean r1) {
            r0 = this;
            com.bianfeng.utilslib.Logger.showDebugLog = r1
            return
    }

    public void setLogToCache(boolean r1) {
            r0 = this;
            if (r1 == 0) goto La
            com.bianfeng.utilslib.Logger$1 r1 = new com.bianfeng.utilslib.Logger$1
            r1.<init>(r0)
            com.bianfeng.utilslib.Logger.logs = r1
            goto Ld
        La:
            r1 = 0
            com.bianfeng.utilslib.Logger.logs = r1
        Ld:
            return
    }

    public void updateState() {
            r3 = this;
            com.bianfeng.utilslib.FileUtils r0 = com.bianfeng.utilslib.UtilsSdk.getFileUtils()     // Catch: java.lang.Exception -> L1a
            boolean r0 = r0.isSdcardReady()     // Catch: java.lang.Exception -> L1a
            if (r0 == 0) goto L33
            com.bianfeng.utilslib.FileUtils r0 = com.bianfeng.utilslib.UtilsSdk.getFileUtils()     // Catch: java.lang.Exception -> L1a
            java.lang.String r1 = "bianfeng/sdk/debug"
            boolean r0 = r0.isSdcardFileExist(r1)     // Catch: java.lang.Exception -> L1a
            if (r0 == 0) goto L33
            r0 = 1
            com.bianfeng.utilslib.Logger.showDebugLog = r0     // Catch: java.lang.Exception -> L1a
            goto L33
        L1a:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "updateState:"
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r3.i(r0)
        L33:
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "state of showDebugLog is "
            r1.append(r2)
            boolean r2 = com.bianfeng.utilslib.Logger.showDebugLog
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.print(r1)
            return
    }

    public int v(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "YmnSdk"
            int r2 = r1.v(r0, r2)
            return r2
    }

    public int v(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r0 = 2
            int r2 = r1.printlog(r0, r2, r3)
            return r2
    }

    public int w(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "YmnSdk"
            int r2 = r1.w(r0, r2)
            return r2
    }

    public int w(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r0 = 5
            int r2 = r1.printlog(r0, r2, r3)
            return r2
    }

    public int wRich(java.lang.String r2) {
            r1 = this;
            java.lang.String r2 = r1.rich(r2)
            java.lang.String r0 = "YmnSdk"
            int r2 = r1.w(r0, r2)
            return r2
    }
}

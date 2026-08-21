package com.czhj.sdk.common.exceptions;

public class CrashHandler implements java.lang.Thread.UncaughtExceptionHandler {
    private static final java.lang.String CRASH = "crash";
    private static com.czhj.sdk.common.exceptions.CrashHandler gInstance;
    private java.util.Set<com.czhj.sdk.common.exceptions.CrashHandler.CrashHandlerListener> crashHandlerListenerSet;
    private com.czhj.sdk.common.mta.PointEntityCrash entityCrash;
    private java.lang.Thread.UncaughtExceptionHandler mDefaultCrashHandler;


    public interface CrashHandlerListener {
        void reportCrash(java.lang.String r1);
    }

    static {
            return
    }

    private CrashHandler() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.entityCrash = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.crashHandlerListenerSet = r0
            java.lang.Thread$UncaughtExceptionHandler r0 = java.lang.Thread.getDefaultUncaughtExceptionHandler()
            r1.mDefaultCrashHandler = r0
            java.lang.Thread.setDefaultUncaughtExceptionHandler(r1)
            return
    }

    static void access$000(com.czhj.sdk.common.exceptions.CrashHandler r0, java.lang.Throwable r1) {
            r0.writeCrash(r1)
            return
    }

    public static synchronized com.czhj.sdk.common.exceptions.CrashHandler getInstance() {
            java.lang.Class<com.czhj.sdk.common.exceptions.CrashHandler> r0 = com.czhj.sdk.common.exceptions.CrashHandler.class
            monitor-enter(r0)
            com.czhj.sdk.common.exceptions.CrashHandler r1 = com.czhj.sdk.common.exceptions.CrashHandler.gInstance     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L14
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L18
            com.czhj.sdk.common.exceptions.CrashHandler r1 = new com.czhj.sdk.common.exceptions.CrashHandler     // Catch: java.lang.Throwable -> L11
            r1.<init>()     // Catch: java.lang.Throwable -> L11
            com.czhj.sdk.common.exceptions.CrashHandler.gInstance = r1     // Catch: java.lang.Throwable -> L11
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            goto L14
        L11:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            throw r1     // Catch: java.lang.Throwable -> L18
        L14:
            com.czhj.sdk.common.exceptions.CrashHandler r1 = com.czhj.sdk.common.exceptions.CrashHandler.gInstance     // Catch: java.lang.Throwable -> L18
            monitor-exit(r0)
            return r1
        L18:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private boolean handleException(java.lang.Throwable r3) {
            r2 = this;
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            java.lang.Thread r0 = new java.lang.Thread
            com.czhj.sdk.common.exceptions.CrashHandler$1 r1 = new com.czhj.sdk.common.exceptions.CrashHandler$1
            r1.<init>(r2, r3)
            r0.<init>(r1)
            r0.start()
            r0 = 1000(0x3e8, double:4.94E-321)
            java.lang.Thread.sleep(r0)     // Catch: java.lang.Exception -> L17
            goto L1b
        L17:
            r3 = move-exception
            r3.printStackTrace()
        L1b:
            r3 = 1
            return r3
    }

    private void writeCrash(java.lang.Throwable r3) {
            r2 = this;
            java.io.StringWriter r0 = new java.io.StringWriter     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L41
            r0.<init>()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L41
            java.io.PrintWriter r1 = new java.io.PrintWriter     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L41
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L41
            r3.printStackTrace(r1)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L41
        Ld:
            java.lang.Throwable r3 = r3.getCause()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L41
            if (r3 == 0) goto L17
            r3.printStackTrace(r1)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L41
            goto Ld
        L17:
            r1.close()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L41
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L41
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L41
            if (r0 != 0) goto L45
            java.util.Set<com.czhj.sdk.common.exceptions.CrashHandler$CrashHandlerListener> r0 = r2.crashHandlerListenerSet     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L41
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L41
        L2a:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L41
            if (r1 == 0) goto L45
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L41
            com.czhj.sdk.common.exceptions.CrashHandler$CrashHandlerListener r1 = (com.czhj.sdk.common.exceptions.CrashHandler.CrashHandlerListener) r1     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L41
            if (r1 == 0) goto L2a
            r1.reportCrash(r3)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L41
            goto L2a
        L3c:
            r3 = move-exception
            r3.printStackTrace()
            goto L45
        L41:
            r3 = move-exception
            r3.printStackTrace()
        L45:
            return
    }

    public void add(com.czhj.sdk.common.exceptions.CrashHandler.CrashHandlerListener r2) {
            r1 = this;
            if (r2 == 0) goto L7
            java.util.Set<com.czhj.sdk.common.exceptions.CrashHandler$CrashHandlerListener> r0 = r1.crashHandlerListenerSet
            r0.add(r2)
        L7:
            return
    }

    @Override
    public void uncaughtException(java.lang.Thread r2, java.lang.Throwable r3) {
            r1 = this;
            r1.handleException(r3)     // Catch: java.lang.Throwable -> L4 java.lang.Exception -> L9
            goto Ld
        L4:
            r0 = move-exception
            r0.printStackTrace()
            goto Ld
        L9:
            r0 = move-exception
            r0.printStackTrace()
        Ld:
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.mDefaultCrashHandler
            if (r0 == 0) goto L15
            r0.uncaughtException(r2, r3)
            goto L1c
        L15:
            int r2 = android.os.Process.myPid()
            android.os.Process.killProcess(r2)
        L1c:
            return
    }
}

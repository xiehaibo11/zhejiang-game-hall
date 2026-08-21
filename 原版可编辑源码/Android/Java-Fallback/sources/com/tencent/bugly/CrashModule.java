package com.tencent.bugly;

public class CrashModule extends com.tencent.bugly.proguard.o {
    public static final int MODULE_ID = 1004;
    private static int c;
    private static com.tencent.bugly.CrashModule e;
    private long a;
    private com.tencent.bugly.BuglyStrategy.a b;
    private boolean d;

    static {
            com.tencent.bugly.CrashModule r0 = new com.tencent.bugly.CrashModule
            r0.<init>()
            com.tencent.bugly.CrashModule.e = r0
            return
    }

    public CrashModule() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.d = r0
            return
    }

    private synchronized void a(android.content.Context r7, com.tencent.bugly.BuglyStrategy r8) {
            r6 = this;
            monitor-enter(r6)
            if (r8 != 0) goto L5
            monitor-exit(r6)
            return
        L5:
            java.lang.String r0 = r8.getLibBuglySOFilePath()     // Catch: java.lang.Throwable -> L54
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L54
            r2 = 1
            r3 = 0
            if (r1 != 0) goto L20
            com.tencent.bugly.proguard.aa r7 = com.tencent.bugly.proguard.aa.a(r7)     // Catch: java.lang.Throwable -> L54
            r7.t = r0     // Catch: java.lang.Throwable -> L54
            java.lang.String r7 = "setted libBugly.so file path :%s"
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L54
            r1[r3] = r0     // Catch: java.lang.Throwable -> L54
            com.tencent.bugly.proguard.al.a(r7, r1)     // Catch: java.lang.Throwable -> L54
        L20:
            com.tencent.bugly.BuglyStrategy$a r7 = r8.getCrashHandleCallback()     // Catch: java.lang.Throwable -> L54
            if (r7 == 0) goto L33
            com.tencent.bugly.BuglyStrategy$a r7 = r8.getCrashHandleCallback()     // Catch: java.lang.Throwable -> L54
            r6.b = r7     // Catch: java.lang.Throwable -> L54
            java.lang.String r7 = "setted CrashHanldeCallback"
            java.lang.Object[] r0 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L54
            com.tencent.bugly.proguard.al.a(r7, r0)     // Catch: java.lang.Throwable -> L54
        L33:
            long r0 = r8.getAppReportDelay()     // Catch: java.lang.Throwable -> L54
            r4 = 0
            int r7 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r7 <= 0) goto L52
            long r7 = r8.getAppReportDelay()     // Catch: java.lang.Throwable -> L54
            r6.a = r7     // Catch: java.lang.Throwable -> L54
            java.lang.String r7 = "setted delay: %d"
            java.lang.Object[] r8 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L54
            long r0 = r6.a     // Catch: java.lang.Throwable -> L54
            java.lang.Long r0 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Throwable -> L54
            r8[r3] = r0     // Catch: java.lang.Throwable -> L54
            com.tencent.bugly.proguard.al.a(r7, r8)     // Catch: java.lang.Throwable -> L54
        L52:
            monitor-exit(r6)
            return
        L54:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public static com.tencent.bugly.CrashModule getInstance() {
            com.tencent.bugly.CrashModule r0 = com.tencent.bugly.CrashModule.e
            r1 = 1004(0x3ec, float:1.407E-42)
            r0.id = r1
            return r0
    }

    @Override
    public java.lang.String[] getTables() {
            r1 = this;
            java.lang.String r0 = "t_cr"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            return r0
    }

    public synchronized boolean hasInitialized() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.d     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public synchronized void init(android.content.Context r5, boolean r6, com.tencent.bugly.BuglyStrategy r7) {
            r4 = this;
            monitor-enter(r4)
            if (r5 == 0) goto Le4
            boolean r0 = r4.d     // Catch: java.lang.Throwable -> Le1
            if (r0 == 0) goto L9
            goto Le4
        L9:
            java.lang.String r0 = "Initializing crash module."
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Le1
            com.tencent.bugly.proguard.al.a(r0, r2)     // Catch: java.lang.Throwable -> Le1
            com.tencent.bugly.proguard.u r0 = com.tencent.bugly.proguard.u.a()     // Catch: java.lang.Throwable -> Le1
            int r2 = com.tencent.bugly.CrashModule.c     // Catch: java.lang.Throwable -> Le1
            r3 = 1
            int r2 = r2 + r3
            com.tencent.bugly.CrashModule.c = r2     // Catch: java.lang.Throwable -> Le1
            r0.a(r2)     // Catch: java.lang.Throwable -> Le1
            r4.d = r3     // Catch: java.lang.Throwable -> Le1
            com.tencent.bugly.crashreport.CrashReport.setContext(r5)     // Catch: java.lang.Throwable -> Le1
            r4.a(r5, r7)     // Catch: java.lang.Throwable -> Le1
            com.tencent.bugly.BuglyStrategy$a r0 = r4.b     // Catch: java.lang.Throwable -> Le1
            com.tencent.bugly.proguard.at r6 = com.tencent.bugly.proguard.at.a(r5, r6, r0)     // Catch: java.lang.Throwable -> Le1
            com.tencent.bugly.proguard.av r0 = r6.t     // Catch: java.lang.Throwable -> Le1
            r0.a()     // Catch: java.lang.Throwable -> Le1
            if (r7 == 0) goto L61
            int r0 = r7.getCallBackType()     // Catch: java.lang.Throwable -> Le1
            r6.B = r0     // Catch: java.lang.Throwable -> Le1
            boolean r0 = r7.getCloseErrorCallback()     // Catch: java.lang.Throwable -> Le1
            r6.C = r0     // Catch: java.lang.Throwable -> Le1
            boolean r0 = r7.isUploadSpotCrash()     // Catch: java.lang.Throwable -> Le1
            com.tencent.bugly.proguard.at.o = r0     // Catch: java.lang.Throwable -> Le1
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.a(r5)     // Catch: java.lang.Throwable -> Le1
            boolean r2 = r7.isEnableRecordAnrMainStack()     // Catch: java.lang.Throwable -> Le1
            r0.S = r2     // Catch: java.lang.Throwable -> Le1
            boolean r0 = r7.isEnableCatchAnrTrace()     // Catch: java.lang.Throwable -> Le1
            if (r0 != 0) goto L5b
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r0 = r6.u     // Catch: java.lang.Throwable -> Le1
            r0.disableCatchAnrTrace()     // Catch: java.lang.Throwable -> Le1
            goto L66
        L5b:
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r0 = r6.u     // Catch: java.lang.Throwable -> Le1
            r0.enableCatchAnrTrace()     // Catch: java.lang.Throwable -> Le1
            goto L66
        L61:
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r0 = r6.u     // Catch: java.lang.Throwable -> Le1
            r0.enableCatchAnrTrace()     // Catch: java.lang.Throwable -> Le1
        L66:
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.b()     // Catch: java.lang.Throwable -> Le1
            java.lang.String r0 = r0.d     // Catch: java.lang.Throwable -> Le1
            android.content.Context r2 = r6.c     // Catch: java.lang.Throwable -> Le1
            java.lang.String r2 = com.tencent.bugly.proguard.z.a(r2)     // Catch: java.lang.Throwable -> Le1
            boolean r0 = r0.equals(r2)     // Catch: java.lang.Throwable -> Le1
            if (r0 == 0) goto L7d
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r0 = r6.u     // Catch: java.lang.Throwable -> Le1
            r0.removeEmptyNativeRecordFiles()     // Catch: java.lang.Throwable -> Le1
        L7d:
            if (r7 == 0) goto L91
            boolean r0 = r7.isEnableNativeCrashMonitor()     // Catch: java.lang.Throwable -> Le1
            if (r0 == 0) goto L86
            goto L91
        L86:
            java.lang.String r0 = "[crash] Closed native crash monitor!"
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Le1
            com.tencent.bugly.proguard.al.a(r0, r2)     // Catch: java.lang.Throwable -> Le1
            r6.d()     // Catch: java.lang.Throwable -> Le1
            goto L94
        L91:
            r6.e()     // Catch: java.lang.Throwable -> Le1
        L94:
            if (r7 == 0) goto La8
            boolean r0 = r7.isEnableANRCrashMonitor()     // Catch: java.lang.Throwable -> Le1
            if (r0 == 0) goto L9d
            goto La8
        L9d:
            java.lang.String r0 = "[crash] Closed ANR monitor!"
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Le1
            com.tencent.bugly.proguard.al.a(r0, r1)     // Catch: java.lang.Throwable -> Le1
            r6.g()     // Catch: java.lang.Throwable -> Le1
            goto Lab
        La8:
            r6.f()     // Catch: java.lang.Throwable -> Le1
        Lab:
            if (r7 == 0) goto Lb3
            boolean r0 = r7.isMerged()     // Catch: java.lang.Throwable -> Le1
            com.tencent.bugly.proguard.at.e = r0     // Catch: java.lang.Throwable -> Le1
        Lb3:
            if (r7 == 0) goto Lba
            long r0 = r7.getAppReportDelay()     // Catch: java.lang.Throwable -> Le1
            goto Lbc
        Lba:
            r0 = 0
        Lbc:
            r6.a(r0)     // Catch: java.lang.Throwable -> Le1
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r6 = r6.u     // Catch: java.lang.Throwable -> Le1
            r6.checkUploadRecordCrash()     // Catch: java.lang.Throwable -> Le1
            com.tencent.bugly.proguard.au.a(r5)     // Catch: java.lang.Throwable -> Le1
            com.tencent.bugly.proguard.aq r6 = com.tencent.bugly.proguard.aq.a()     // Catch: java.lang.Throwable -> Le1
            java.lang.String r7 = "android.net.conn.CONNECTIVITY_CHANGE"
            r6.a(r7)     // Catch: java.lang.Throwable -> Le1
            r6.a(r5)     // Catch: java.lang.Throwable -> Le1
            com.tencent.bugly.proguard.u r5 = com.tencent.bugly.proguard.u.a()     // Catch: java.lang.Throwable -> Le1
            int r6 = com.tencent.bugly.CrashModule.c     // Catch: java.lang.Throwable -> Le1
            int r6 = r6 - r3
            com.tencent.bugly.CrashModule.c = r6     // Catch: java.lang.Throwable -> Le1
            r5.a(r6)     // Catch: java.lang.Throwable -> Le1
            monitor-exit(r4)
            return
        Le1:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
        Le4:
            monitor-exit(r4)
            return
    }

    @Override
    public void onServerStrategyChanged(com.tencent.bugly.crashreport.common.strategy.StrategyBean r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            com.tencent.bugly.proguard.at r0 = com.tencent.bugly.proguard.at.a()
            if (r0 == 0) goto L18
            com.tencent.bugly.proguard.av r1 = r0.t
            r1.a(r3)
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r1 = r0.u
            r1.onStrategyChanged(r3)
            com.tencent.bugly.proguard.ay r3 = r0.x
            r3.b()
        L18:
            return
    }
}

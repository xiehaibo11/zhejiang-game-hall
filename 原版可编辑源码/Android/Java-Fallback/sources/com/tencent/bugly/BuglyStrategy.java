package com.tencent.bugly;

public class BuglyStrategy {
    protected int a;
    protected boolean b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private long f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private boolean j;
    private boolean k;
    private boolean l;
    private boolean m;
    private boolean n;
    private java.lang.Class<?> o;
    private boolean p;
    private boolean q;
    private boolean r;
    private boolean s;
    private boolean t;
    private com.tencent.bugly.BuglyStrategy.a u;
    private boolean v;

    public static class a {
        public static final int CRASHTYPE_ANR = 4;
        public static final int CRASHTYPE_BLOCK = 7;
        public static final int CRASHTYPE_COCOS2DX_JS = 5;
        public static final int CRASHTYPE_COCOS2DX_LUA = 6;
        public static final int CRASHTYPE_JAVA_CATCH = 1;
        public static final int CRASHTYPE_JAVA_CRASH = 0;
        public static final int CRASHTYPE_NATIVE = 2;
        public static final int CRASHTYPE_U3D = 3;
        public static final int MAX_USERDATA_KEY_LENGTH = 100;
        public static final int MAX_USERDATA_VALUE_LENGTH = 100000;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public synchronized java.util.Map<java.lang.String, java.lang.String> onCrashHandleStart(int r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
                r0 = this;
                monitor-enter(r0)
                monitor-exit(r0)
                r1 = 0
                return r1
        }

        public synchronized byte[] onCrashHandleStart2GetExtraDatas(int r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
                r0 = this;
                monitor-enter(r0)
                monitor-exit(r0)
                r1 = 0
                return r1
        }
    }

    public BuglyStrategy() {
            r3 = this;
            r3.<init>()
            r0 = 1
            r3.j = r0
            r3.k = r0
            r3.l = r0
            r1 = 0
            r3.m = r1
            r3.n = r0
            r2 = 0
            r3.o = r2
            r3.p = r0
            r3.q = r0
            r3.r = r0
            r3.s = r0
            r3.t = r1
            r0 = 31
            r3.a = r0
            r3.b = r1
            r3.v = r1
            return
    }

    public synchronized java.lang.String getAppChannel() {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = r1.d     // Catch: java.lang.Throwable -> L11
            if (r0 != 0) goto Ld
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.b()     // Catch: java.lang.Throwable -> L11
            java.lang.String r0 = r0.s     // Catch: java.lang.Throwable -> L11
            monitor-exit(r1)
            return r0
        Ld:
            java.lang.String r0 = r1.d     // Catch: java.lang.Throwable -> L11
            monitor-exit(r1)
            return r0
        L11:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized java.lang.String getAppPackageName() {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = r1.e     // Catch: java.lang.Throwable -> L11
            if (r0 != 0) goto Ld
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.b()     // Catch: java.lang.Throwable -> L11
            java.lang.String r0 = r0.c     // Catch: java.lang.Throwable -> L11
            monitor-exit(r1)
            return r0
        Ld:
            java.lang.String r0 = r1.e     // Catch: java.lang.Throwable -> L11
            monitor-exit(r1)
            return r0
        L11:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized long getAppReportDelay() {
            r2 = this;
            monitor-enter(r2)
            long r0 = r2.f     // Catch: java.lang.Throwable -> L5
            monitor-exit(r2)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public synchronized java.lang.String getAppVersion() {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = r1.c     // Catch: java.lang.Throwable -> L11
            if (r0 != 0) goto Ld
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.b()     // Catch: java.lang.Throwable -> L11
            java.lang.String r0 = r0.o     // Catch: java.lang.Throwable -> L11
            monitor-exit(r1)
            return r0
        Ld:
            java.lang.String r0 = r1.c     // Catch: java.lang.Throwable -> L11
            monitor-exit(r1)
            return r0
        L11:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized int getCallBackType() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.a     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized boolean getCloseErrorCallback() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.b     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized com.tencent.bugly.BuglyStrategy.a getCrashHandleCallback() {
            r1 = this;
            monitor-enter(r1)
            com.tencent.bugly.BuglyStrategy$a r0 = r1.u     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized java.lang.String getDeviceID() {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = r1.h     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized java.lang.String getDeviceModel() {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = r1.i     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized java.lang.String getLibBuglySOFilePath() {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = r1.g     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized java.lang.Class<?> getUserInfoActivity() {
            r1 = this;
            monitor-enter(r1)
            java.lang.Class<?> r0 = r1.o     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized boolean isBuglyLogUpload() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.p     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized boolean isEnableANRCrashMonitor() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.k     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized boolean isEnableCatchAnrTrace() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.l     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized boolean isEnableNativeCrashMonitor() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.j     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public boolean isEnableRecordAnrMainStack() {
            r1 = this;
            boolean r0 = r1.m
            return r0
    }

    public synchronized boolean isEnableUserInfo() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.n     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public boolean isMerged() {
            r1 = this;
            boolean r0 = r1.v
            return r0
    }

    public boolean isReplaceOldChannel() {
            r1 = this;
            boolean r0 = r1.q
            return r0
    }

    public synchronized boolean isUploadProcess() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.r     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized boolean isUploadSpotCrash() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.s     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized boolean recordUserInfoOnceADay() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.t     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized com.tencent.bugly.BuglyStrategy setAppChannel(java.lang.String r1) {
            r0 = this;
            monitor-enter(r0)
            r0.d = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized com.tencent.bugly.BuglyStrategy setAppPackageName(java.lang.String r1) {
            r0 = this;
            monitor-enter(r0)
            r0.e = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized com.tencent.bugly.BuglyStrategy setAppReportDelay(long r1) {
            r0 = this;
            monitor-enter(r0)
            r0.f = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized com.tencent.bugly.BuglyStrategy setAppVersion(java.lang.String r1) {
            r0 = this;
            monitor-enter(r0)
            r0.c = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized com.tencent.bugly.BuglyStrategy setBuglyLogUpload(boolean r1) {
            r0 = this;
            monitor-enter(r0)
            r0.p = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized void setCallBackType(int r1) {
            r0 = this;
            monitor-enter(r0)
            r0.a = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized void setCloseErrorCallback(boolean r1) {
            r0 = this;
            monitor-enter(r0)
            r0.b = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized com.tencent.bugly.BuglyStrategy setCrashHandleCallback(com.tencent.bugly.BuglyStrategy.a r1) {
            r0 = this;
            monitor-enter(r0)
            r0.u = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized com.tencent.bugly.BuglyStrategy setDeviceID(java.lang.String r1) {
            r0 = this;
            monitor-enter(r0)
            r0.h = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized com.tencent.bugly.BuglyStrategy setDeviceModel(java.lang.String r1) {
            r0 = this;
            monitor-enter(r0)
            r0.i = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized com.tencent.bugly.BuglyStrategy setEnableANRCrashMonitor(boolean r1) {
            r0 = this;
            monitor-enter(r0)
            r0.k = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public void setEnableCatchAnrTrace(boolean r1) {
            r0 = this;
            r0.l = r1
            return
    }

    public synchronized com.tencent.bugly.BuglyStrategy setEnableNativeCrashMonitor(boolean r1) {
            r0 = this;
            monitor-enter(r0)
            r0.j = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public void setEnableRecordAnrMainStack(boolean r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public synchronized com.tencent.bugly.BuglyStrategy setEnableUserInfo(boolean r1) {
            r0 = this;
            monitor-enter(r0)
            r0.n = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized com.tencent.bugly.BuglyStrategy setLibBuglySOFilePath(java.lang.String r1) {
            r0 = this;
            monitor-enter(r0)
            r0.g = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @java.lang.Deprecated
    public void setMerged(boolean r1) {
            r0 = this;
            r0.v = r1
            return
    }

    public synchronized com.tencent.bugly.BuglyStrategy setRecordUserInfoOnceADay(boolean r1) {
            r0 = this;
            monitor-enter(r0)
            r0.t = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public void setReplaceOldChannel(boolean r1) {
            r0 = this;
            r0.q = r1
            return
    }

    public synchronized com.tencent.bugly.BuglyStrategy setUploadProcess(boolean r1) {
            r0 = this;
            monitor-enter(r0)
            r0.r = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized void setUploadSpotCrash(boolean r1) {
            r0 = this;
            monitor-enter(r0)
            r0.s = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized com.tencent.bugly.BuglyStrategy setUserInfoActivity(java.lang.Class<?> r1) {
            r0 = this;
            monitor-enter(r0)
            r0.o = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }
}

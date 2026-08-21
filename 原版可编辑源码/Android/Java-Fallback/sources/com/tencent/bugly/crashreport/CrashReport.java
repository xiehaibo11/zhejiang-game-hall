package com.tencent.bugly.crashreport;

public class CrashReport {
    private static android.content.Context a;


    public static class CrashHandleCallback extends com.tencent.bugly.BuglyStrategy.a {
        public CrashHandleCallback() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class UserStrategy extends com.tencent.bugly.BuglyStrategy {
        com.tencent.bugly.crashreport.CrashReport.CrashHandleCallback c;

        public UserStrategy(android.content.Context r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
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

        @Override
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

        @Override
        public com.tencent.bugly.BuglyStrategy.a getCrashHandleCallback() {
                r1 = this;
                com.tencent.bugly.crashreport.CrashReport$CrashHandleCallback r0 = r1.getCrashHandleCallback()
                return r0
        }

        @Override
        public synchronized com.tencent.bugly.crashreport.CrashReport.CrashHandleCallback getCrashHandleCallback() {
                r1 = this;
                monitor-enter(r1)
                com.tencent.bugly.crashreport.CrashReport$CrashHandleCallback r0 = r1.c     // Catch: java.lang.Throwable -> L5
                monitor-exit(r1)
                return r0
            L5:
                r0 = move-exception
                monitor-exit(r1)
                throw r0
        }

        @Override
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

        @Override
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

        public synchronized void setCrashHandleCallback(com.tencent.bugly.crashreport.CrashReport.CrashHandleCallback r1) {
                r0 = this;
                monitor-enter(r0)
                r0.c = r1     // Catch: java.lang.Throwable -> L5
                monitor-exit(r0)
                return
            L5:
                r1 = move-exception
                monitor-exit(r0)
                throw r1
        }
    }

    public interface a {
        java.lang.String a();

        void a(com.tencent.bugly.crashreport.crash.h5.H5JavaScriptInterface r1, java.lang.String r2);

        void a(java.lang.String r1);

        void b();

        java.lang.CharSequence c();
    }

    public CrashReport() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void closeBugly() {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r1 = "Can not close bugly because bugly is disable."
            android.util.Log.w(r0, r1)
            return
        Lc:
            com.tencent.bugly.CrashModule r0 = com.tencent.bugly.CrashModule.getInstance()
            boolean r0 = r0.hasInitialized()
            if (r0 != 0) goto L1e
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r1 = "CrashReport has not been initialed! pls to call method 'initCrashReport' first!"
            android.util.Log.w(r0, r1)
            return
        L1e:
            android.content.Context r0 = com.tencent.bugly.crashreport.CrashReport.a
            if (r0 != 0) goto L23
            return
        L23:
            com.tencent.bugly.proguard.aq r0 = com.tencent.bugly.proguard.aq.a()
            if (r0 == 0) goto L2e
            android.content.Context r1 = com.tencent.bugly.crashreport.CrashReport.a
            r0.b(r1)
        L2e:
            closeCrashReport()
            android.content.Context r0 = com.tencent.bugly.crashreport.CrashReport.a
            com.tencent.bugly.proguard.s.a(r0)
            com.tencent.bugly.proguard.ak r0 = com.tencent.bugly.proguard.ak.a()
            if (r0 == 0) goto L3f
            r0.b()
        L3f:
            return
    }

    public static void closeCrashReport() {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r1 = "Can not close crash report because bugly is disable."
            android.util.Log.w(r0, r1)
            return
        Lc:
            com.tencent.bugly.CrashModule r0 = com.tencent.bugly.CrashModule.getInstance()
            boolean r0 = r0.hasInitialized()
            if (r0 != 0) goto L1e
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r1 = "CrashReport has not been initialed! pls to call method 'initCrashReport' first!"
            android.util.Log.w(r0, r1)
            return
        L1e:
            com.tencent.bugly.proguard.at r0 = com.tencent.bugly.proguard.at.a()
            r0.c()
            return
    }

    public static void closeNativeReport() {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r1 = "Can not close native report because bugly is disable."
            android.util.Log.w(r0, r1)
            return
        Lc:
            com.tencent.bugly.CrashModule r0 = com.tencent.bugly.CrashModule.getInstance()
            boolean r0 = r0.hasInitialized()
            if (r0 != 0) goto L1e
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r1 = "CrashReport has not been initialed! pls to call method 'initCrashReport' first!"
            android.util.Log.e(r0, r1)
            return
        L1e:
            com.tencent.bugly.proguard.at r0 = com.tencent.bugly.proguard.at.a()
            r0.d()
            return
    }

    public static void enableBugly(boolean r0) {
            com.tencent.bugly.proguard.p.a = r0
            return
    }

    public static void enableObtainId(android.content.Context r0, boolean r1) {
            setCollectPrivacyInfo(r0, r1)
            return
    }

    public static java.util.Set<java.lang.String> getAllUserDataKeys(android.content.Context r1) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto L11
            java.lang.String r1 = com.tencent.bugly.proguard.al.b
            java.lang.String r0 = "Can not get all keys of user data because bugly is disable."
            android.util.Log.w(r1, r0)
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            return r1
        L11:
            if (r1 != 0) goto L20
            java.lang.String r1 = com.tencent.bugly.proguard.al.b
            java.lang.String r0 = "getAllUserDataKeys args context should not be null"
            android.util.Log.e(r1, r0)
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            return r1
        L20:
            com.tencent.bugly.proguard.aa r1 = com.tencent.bugly.proguard.aa.a(r1)
            java.util.Set r1 = r1.w()
            return r1
    }

    public static java.lang.String getAppChannel() {
            boolean r0 = com.tencent.bugly.proguard.p.a
            java.lang.String r1 = "unknown"
            if (r0 != 0) goto Le
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "Can not get App channel because bugly is disable."
            android.util.Log.w(r0, r2)
            return r1
        Le:
            com.tencent.bugly.CrashModule r0 = com.tencent.bugly.CrashModule.getInstance()
            boolean r0 = r0.hasInitialized()
            if (r0 != 0) goto L20
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "CrashReport has not been initialed! pls to call method 'initCrashReport' first!"
            android.util.Log.e(r0, r2)
            return r1
        L20:
            android.content.Context r0 = com.tencent.bugly.crashreport.CrashReport.a
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.a(r0)
            java.lang.String r0 = r0.s
            return r0
    }

    public static java.lang.String getAppID() {
            boolean r0 = com.tencent.bugly.proguard.p.a
            java.lang.String r1 = "unknown"
            if (r0 != 0) goto Le
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "Can not get App ID because bugly is disable."
            android.util.Log.w(r0, r2)
            return r1
        Le:
            com.tencent.bugly.CrashModule r0 = com.tencent.bugly.CrashModule.getInstance()
            boolean r0 = r0.hasInitialized()
            if (r0 != 0) goto L20
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "CrashReport has not been initialed! pls to call method 'initCrashReport' first!"
            android.util.Log.e(r0, r2)
            return r1
        L20:
            android.content.Context r0 = com.tencent.bugly.crashreport.CrashReport.a
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.a(r0)
            java.lang.String r0 = r0.e()
            return r0
    }

    public static java.lang.String getAppVer() {
            boolean r0 = com.tencent.bugly.proguard.p.a
            java.lang.String r1 = "unknown"
            if (r0 != 0) goto Le
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "Can not get app version because bugly is disable."
            android.util.Log.w(r0, r2)
            return r1
        Le:
            com.tencent.bugly.CrashModule r0 = com.tencent.bugly.CrashModule.getInstance()
            boolean r0 = r0.hasInitialized()
            if (r0 != 0) goto L20
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "CrashReport has not been initialed! pls to call method 'initCrashReport' first!"
            android.util.Log.e(r0, r2)
            return r1
        L20:
            android.content.Context r0 = com.tencent.bugly.crashreport.CrashReport.a
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.a(r0)
            java.lang.String r0 = r0.o
            return r0
    }

    public static java.lang.String getBuglyVersion(android.content.Context r1) {
            if (r1 != 0) goto Ld
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r0 = "Please call with context."
            com.tencent.bugly.proguard.al.d(r0, r1)
            java.lang.String r1 = "unknown"
            return r1
        Ld:
            com.tencent.bugly.proguard.aa r1 = com.tencent.bugly.proguard.aa.a(r1)
            java.lang.String r1 = r1.h
            return r1
    }

    public static android.content.Context getContext() {
            android.content.Context r0 = com.tencent.bugly.crashreport.CrashReport.a
            return r0
    }

    public static java.lang.String getDeviceID(android.content.Context r0) {
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.a(r0)
            java.lang.String r0 = r0.g()
            return r0
    }

    public static java.net.Proxy getHttpProxy() {
            java.net.Proxy r0 = com.tencent.bugly.proguard.an.a
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.String> getSdkExtraData() {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto L11
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r1 = "Can not get SDK extra data because bugly is disable."
            android.util.Log.w(r0, r1)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            return r0
        L11:
            com.tencent.bugly.CrashModule r0 = com.tencent.bugly.CrashModule.getInstance()
            boolean r0 = r0.hasInitialized()
            if (r0 != 0) goto L24
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r1 = "CrashReport has not been initialed! pls to call method 'initCrashReport' first!"
            android.util.Log.e(r0, r1)
            r0 = 0
            return r0
        L24:
            android.content.Context r0 = com.tencent.bugly.crashreport.CrashReport.a
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.a(r0)
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r0.K
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.String> getSdkExtraData(android.content.Context r1) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto L11
            java.lang.String r1 = com.tencent.bugly.proguard.al.b
            java.lang.String r0 = "Can not get SDK extra data because bugly is disable."
            android.util.Log.w(r1, r0)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            return r1
        L11:
            if (r1 != 0) goto L1d
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r0 = "Context should not be null."
            com.tencent.bugly.proguard.al.d(r0, r1)
            r1 = 0
            return r1
        L1d:
            com.tencent.bugly.proguard.aa r1 = com.tencent.bugly.proguard.aa.a(r1)
            java.util.HashMap<java.lang.String, java.lang.String> r1 = r1.K
            return r1
    }

    public static java.lang.String getUserData(android.content.Context r2, java.lang.String r3) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            java.lang.String r1 = "unknown"
            if (r0 != 0) goto Le
            java.lang.String r2 = com.tencent.bugly.proguard.al.b
            java.lang.String r3 = "Can not get user data because bugly is disable."
            android.util.Log.w(r2, r3)
            return r1
        Le:
            if (r2 != 0) goto L18
            java.lang.String r2 = com.tencent.bugly.proguard.al.b
            java.lang.String r3 = "getUserDataValue args context should not be null"
            android.util.Log.e(r2, r3)
            return r1
        L18:
            boolean r0 = com.tencent.bugly.proguard.ap.b(r3)
            if (r0 == 0) goto L20
            r2 = 0
            return r2
        L20:
            com.tencent.bugly.proguard.aa r2 = com.tencent.bugly.proguard.aa.a(r2)
            java.lang.String r2 = r2.g(r3)
            return r2
    }

    public static int getUserDatasSize(android.content.Context r2) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            r1 = -1
            if (r0 != 0) goto Ld
            java.lang.String r2 = com.tencent.bugly.proguard.al.b
            java.lang.String r0 = "Can not get size of user data because bugly is disable."
            android.util.Log.w(r2, r0)
            return r1
        Ld:
            if (r2 != 0) goto L17
            java.lang.String r2 = com.tencent.bugly.proguard.al.b
            java.lang.String r0 = "getUserDatasSize args context should not be null"
            android.util.Log.e(r2, r0)
            return r1
        L17:
            com.tencent.bugly.proguard.aa r2 = com.tencent.bugly.proguard.aa.a(r2)
            int r2 = r2.v()
            return r2
    }

    public static java.lang.String getUserId() {
            boolean r0 = com.tencent.bugly.proguard.p.a
            java.lang.String r1 = "unknown"
            if (r0 != 0) goto Le
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "Can not get user ID because bugly is disable."
            android.util.Log.w(r0, r2)
            return r1
        Le:
            com.tencent.bugly.CrashModule r0 = com.tencent.bugly.CrashModule.getInstance()
            boolean r0 = r0.hasInitialized()
            if (r0 != 0) goto L20
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "CrashReport has not been initialed! pls to call method 'initCrashReport' first!"
            android.util.Log.e(r0, r2)
            return r1
        L20:
            android.content.Context r0 = com.tencent.bugly.crashreport.CrashReport.a
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.a(r0)
            java.lang.String r0 = r0.f()
            return r0
    }

    public static int getUserSceneTagId(android.content.Context r2) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            r1 = -1
            if (r0 != 0) goto Ld
            java.lang.String r2 = com.tencent.bugly.proguard.al.b
            java.lang.String r0 = "Can not get user scene tag because bugly is disable."
            android.util.Log.w(r2, r0)
            return r1
        Ld:
            if (r2 != 0) goto L17
            java.lang.String r2 = com.tencent.bugly.proguard.al.b
            java.lang.String r0 = "getUserSceneTagId args context should not be null"
            android.util.Log.e(r2, r0)
            return r1
        L17:
            com.tencent.bugly.proguard.aa r2 = com.tencent.bugly.proguard.aa.a(r2)
            int r2 = r2.z()
            return r2
    }

    public static void initCrashReport(android.content.Context r1) {
            if (r1 != 0) goto L3
            return
        L3:
            com.tencent.bugly.crashreport.CrashReport.a = r1
            com.tencent.bugly.CrashModule r0 = com.tencent.bugly.CrashModule.getInstance()
            com.tencent.bugly.proguard.p.a(r0)
            com.tencent.bugly.proguard.p.a(r1)
            return
    }

    public static void initCrashReport(android.content.Context r1, com.tencent.bugly.crashreport.CrashReport.UserStrategy r2) {
            if (r1 != 0) goto L3
            return
        L3:
            com.tencent.bugly.crashreport.CrashReport.a = r1
            com.tencent.bugly.CrashModule r0 = com.tencent.bugly.CrashModule.getInstance()
            com.tencent.bugly.proguard.p.a(r0)
            com.tencent.bugly.proguard.p.a(r1, r2)
            return
    }

    public static void initCrashReport(android.content.Context r1, java.lang.String r2, boolean r3) {
            r0 = 0
            initCrashReport(r1, r2, r3, r0)
            return
    }

    public static void initCrashReport(android.content.Context r1, java.lang.String r2, boolean r3, com.tencent.bugly.crashreport.CrashReport.UserStrategy r4) {
            if (r1 != 0) goto L3
            return
        L3:
            com.tencent.bugly.crashreport.CrashReport.a = r1
            com.tencent.bugly.CrashModule r0 = com.tencent.bugly.CrashModule.getInstance()
            com.tencent.bugly.proguard.p.a(r0)
            com.tencent.bugly.proguard.p.a(r1, r2, r3, r4)
            return
    }

    public static boolean isLastSessionCrash() {
            boolean r0 = com.tencent.bugly.proguard.p.a
            r1 = 0
            if (r0 != 0) goto Ld
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "The info 'isLastSessionCrash' is not accurate because bugly is disable."
            android.util.Log.w(r0, r2)
            return r1
        Ld:
            com.tencent.bugly.CrashModule r0 = com.tencent.bugly.CrashModule.getInstance()
            boolean r0 = r0.hasInitialized()
            if (r0 != 0) goto L1f
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "CrashReport has not been initialed! pls to call method 'initCrashReport' first!"
            android.util.Log.e(r0, r2)
            return r1
        L1f:
            com.tencent.bugly.proguard.at r0 = com.tencent.bugly.proguard.at.a()
            java.lang.Boolean r2 = r0.A
            if (r2 == 0) goto L2c
            boolean r0 = r2.booleanValue()
            return r0
        L2c:
            com.tencent.bugly.proguard.aa r2 = com.tencent.bugly.proguard.aa.b()
            java.lang.String r2 = r2.d
            com.tencent.bugly.proguard.w r3 = com.tencent.bugly.proguard.w.a()
            r4 = 1
            java.util.List r3 = r3.a(r4)
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            if (r3 == 0) goto L76
            int r6 = r3.size()
            if (r6 <= 0) goto L76
            java.util.Iterator r1 = r3.iterator()
        L4c:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L68
            java.lang.Object r3 = r1.next()
            com.tencent.bugly.proguard.y r3 = (com.tencent.bugly.proguard.y) r3
            java.lang.String r6 = r3.c
            boolean r6 = r2.equals(r6)
            if (r6 == 0) goto L4c
            java.lang.Boolean r6 = java.lang.Boolean.TRUE
            r0.A = r6
            r5.add(r3)
            goto L4c
        L68:
            int r0 = r5.size()
            if (r0 <= 0) goto L75
            com.tencent.bugly.proguard.w r0 = com.tencent.bugly.proguard.w.a()
            r0.a(r5)
        L75:
            return r4
        L76:
            java.lang.Boolean r2 = java.lang.Boolean.FALSE
            r0.A = r2
            return r1
    }

    public static void postCatchedException(java.lang.Throwable r1) {
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            postCatchedException(r1, r0)
            return
    }

    public static void postCatchedException(java.lang.Throwable r1, java.lang.Thread r2) {
            r0 = 0
            postCatchedException(r1, r2, r0)
            return
    }

    public static void postCatchedException(java.lang.Throwable r3, java.lang.Thread r4, boolean r5) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r3 = com.tencent.bugly.proguard.al.b
            java.lang.String r4 = "Can not post crash caught because bugly is disable."
            android.util.Log.w(r3, r4)
            return
        Lc:
            com.tencent.bugly.CrashModule r0 = com.tencent.bugly.CrashModule.getInstance()
            boolean r0 = r0.hasInitialized()
            if (r0 != 0) goto L1e
            java.lang.String r3 = com.tencent.bugly.proguard.al.b
            java.lang.String r4 = "CrashReport has not been initialed! pls to call method 'initCrashReport' first!"
            android.util.Log.e(r3, r4)
            return
        L1e:
            if (r3 != 0) goto L29
            r3 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.String r4 = "throwable is null, just return"
            com.tencent.bugly.proguard.al.d(r4, r3)
            return
        L29:
            if (r4 != 0) goto L2f
            java.lang.Thread r4 = java.lang.Thread.currentThread()
        L2f:
            com.tencent.bugly.proguard.at r0 = com.tencent.bugly.proguard.at.a()
            com.tencent.bugly.proguard.ak r1 = r0.w
            com.tencent.bugly.proguard.at$3 r2 = new com.tencent.bugly.proguard.at$3
            r2.<init>(r0, r4, r3, r5)
            r1.a(r2)
            return
    }

    public static void postException(int r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.util.Map<java.lang.String, java.lang.String> r10) {
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r1 = r6
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            postException(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void postException(java.lang.Thread r1, int r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.util.Map<java.lang.String, java.lang.String> r6) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r1 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "Can not post crash caught because bugly is disable."
            android.util.Log.w(r1, r2)
            return
        Lc:
            com.tencent.bugly.CrashModule r0 = com.tencent.bugly.CrashModule.getInstance()
            boolean r0 = r0.hasInitialized()
            if (r0 != 0) goto L1e
            java.lang.String r1 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "CrashReport has not been initialed! pls to call method 'initCrashReport' first!"
            android.util.Log.e(r1, r2)
            return
        L1e:
            com.tencent.bugly.proguard.au.a(r1, r2, r3, r4, r5, r6)
            return
    }

    private static void putSdkData(android.content.Context r6, java.lang.String r7, java.lang.String r8) {
            if (r6 == 0) goto L74
            boolean r0 = com.tencent.bugly.proguard.ap.b(r7)
            if (r0 != 0) goto L74
            boolean r0 = com.tencent.bugly.proguard.ap.b(r8)
            if (r0 == 0) goto Lf
            goto L74
        Lf:
            java.lang.String r0 = "[a-zA-Z[0-9]]+"
            java.lang.String r1 = ""
            java.lang.String r7 = r7.replace(r0, r1)
            int r0 = r7.length()
            r1 = 100
            r2 = 1
            r3 = 0
            if (r0 <= r1) goto L3a
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.Object[] r1 = new java.lang.Object[r2]
            r4 = 50
            java.lang.Integer r5 = java.lang.Integer.valueOf(r4)
            r1[r3] = r5
            java.lang.String r5 = "putSdkData key length over limit %d, will be cutted."
            java.lang.String r1 = java.lang.String.format(r5, r1)
            android.util.Log.w(r0, r1)
            java.lang.String r7 = r7.substring(r3, r4)
        L3a:
            int r0 = r8.length()
            r1 = 500(0x1f4, float:7.0E-43)
            if (r0 <= r1) goto L5b
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.Object[] r1 = new java.lang.Object[r2]
            r4 = 200(0xc8, float:2.8E-43)
            java.lang.Integer r5 = java.lang.Integer.valueOf(r4)
            r1[r3] = r5
            java.lang.String r5 = "putSdkData value length over limit %d, will be cutted!"
            java.lang.String r1 = java.lang.String.format(r5, r1)
            android.util.Log.w(r0, r1)
            java.lang.String r8 = r8.substring(r3, r4)
        L5b:
            com.tencent.bugly.proguard.aa r6 = com.tencent.bugly.proguard.aa.a(r6)
            r6.b(r7, r8)
            r6 = 2
            java.lang.Object[] r6 = new java.lang.Object[r6]
            r6[r3] = r7
            r6[r2] = r8
            java.lang.String r7 = "[param] putSdkData data: %s - %s"
            java.lang.String r6 = java.lang.String.format(r7, r6)
            java.lang.Object[] r7 = new java.lang.Object[r3]
            com.tencent.bugly.proguard.al.b(r6, r7)
        L74:
            return
    }

    public static void putUserData(android.content.Context r6, java.lang.String r7, java.lang.String r8) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r6 = com.tencent.bugly.proguard.al.b
            java.lang.String r7 = "Can not put user data because bugly is disable."
            android.util.Log.w(r6, r7)
            return
        Lc:
            if (r6 != 0) goto L16
            java.lang.String r6 = com.tencent.bugly.proguard.al.b
            java.lang.String r7 = "putUserData args context should not be null"
            android.util.Log.w(r6, r7)
            return
        L16:
            r0 = 0
            if (r7 != 0) goto L29
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r7)
            java.lang.Object[] r6 = new java.lang.Object[r0]
            java.lang.String r7 = "putUserData args key should not be null or empty"
            com.tencent.bugly.proguard.al.d(r7, r6)
            return
        L29:
            if (r8 != 0) goto L3b
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r8)
            java.lang.Object[] r6 = new java.lang.Object[r0]
            java.lang.String r7 = "putUserData args value should not be null"
            com.tencent.bugly.proguard.al.d(r7, r6)
            return
        L3b:
            int r1 = r8.length()
            r2 = 200(0xc8, float:2.8E-43)
            r3 = 1
            if (r1 <= r2) goto L55
            java.lang.Object[] r1 = new java.lang.Object[r3]
            java.lang.Integer r4 = java.lang.Integer.valueOf(r2)
            r1[r0] = r4
            java.lang.String r4 = "user data value length over limit %d, it will be cutted!"
            com.tencent.bugly.proguard.al.d(r4, r1)
            java.lang.String r8 = r8.substring(r0, r2)
        L55:
            com.tencent.bugly.proguard.aa r1 = com.tencent.bugly.proguard.aa.a(r6)
            java.util.Set r2 = r1.w()
            boolean r2 = r2.contains(r7)
            r4 = 2
            if (r2 == 0) goto L80
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r1 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.getInstance()
            if (r1 == 0) goto L6d
            r1.putKeyValueToNative(r7, r8)
        L6d:
            com.tencent.bugly.proguard.aa r6 = com.tencent.bugly.proguard.aa.a(r6)
            r6.a(r7, r8)
            java.lang.Object[] r6 = new java.lang.Object[r4]
            r6[r0] = r7
            r6[r3] = r8
            java.lang.String r7 = "replace KV %s %s"
            com.tencent.bugly.proguard.al.c(r7, r6)
            return
        L80:
            int r1 = r1.v()
            r2 = 50
            if (r1 < r2) goto L96
            java.lang.Object[] r6 = new java.lang.Object[r3]
            java.lang.Integer r7 = java.lang.Integer.valueOf(r2)
            r6[r0] = r7
            java.lang.String r7 = "user data size is over limit %d, it will be cutted!"
            com.tencent.bugly.proguard.al.d(r7, r6)
            return
        L96:
            int r1 = r7.length()
            if (r1 <= r2) goto Laf
            java.lang.Object[] r1 = new java.lang.Object[r4]
            java.lang.Integer r5 = java.lang.Integer.valueOf(r2)
            r1[r0] = r5
            r1[r3] = r7
            java.lang.String r5 = "user data key length over limit %d , will drop this new key %s"
            com.tencent.bugly.proguard.al.d(r5, r1)
            java.lang.String r7 = r7.substring(r0, r2)
        Laf:
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r1 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.getInstance()
            if (r1 == 0) goto Lb8
            r1.putKeyValueToNative(r7, r8)
        Lb8:
            com.tencent.bugly.proguard.aa r6 = com.tencent.bugly.proguard.aa.a(r6)
            r6.a(r7, r8)
            java.lang.Object[] r6 = new java.lang.Object[r4]
            r6[r0] = r7
            r6[r3] = r8
            java.lang.String r7 = "[param] set user data: %s - %s"
            com.tencent.bugly.proguard.al.b(r7, r6)
            return
    }

    public static java.lang.String removeUserData(android.content.Context r2, java.lang.String r3) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            java.lang.String r1 = "unknown"
            if (r0 != 0) goto Le
            java.lang.String r2 = com.tencent.bugly.proguard.al.b
            java.lang.String r3 = "Can not remove user data because bugly is disable."
            android.util.Log.w(r2, r3)
            return r1
        Le:
            if (r2 != 0) goto L18
            java.lang.String r2 = com.tencent.bugly.proguard.al.b
            java.lang.String r3 = "removeUserData args context should not be null"
            android.util.Log.e(r2, r3)
            return r1
        L18:
            boolean r0 = com.tencent.bugly.proguard.ap.b(r3)
            if (r0 == 0) goto L20
            r2 = 0
            return r2
        L20:
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            java.lang.String r1 = "[param] remove user data: %s"
            com.tencent.bugly.proguard.al.b(r1, r0)
            com.tencent.bugly.proguard.aa r2 = com.tencent.bugly.proguard.aa.a(r2)
            java.lang.String r2 = r2.f(r3)
            return r2
    }

    public static void setAllThreadStackEnable(android.content.Context r0, boolean r1, boolean r2) {
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.a(r0)
            r0.Q = r1
            r0.R = r2
            return
    }

    public static void setAppChannel(android.content.Context r1, java.lang.String r2) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r1 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "Can not set App channel because Bugly is disable."
            android.util.Log.w(r1, r2)
            return
        Lc:
            if (r1 != 0) goto L16
            java.lang.String r1 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "setAppChannel args context should not be null"
            android.util.Log.w(r1, r2)
            return
        L16:
            if (r2 != 0) goto L20
            java.lang.String r1 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "App channel is null, will not set"
            android.util.Log.w(r1, r2)
            return
        L20:
            com.tencent.bugly.proguard.aa r1 = com.tencent.bugly.proguard.aa.a(r1)
            r1.s = r2
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r1 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.getInstance()
            if (r1 == 0) goto L2f
            r1.setNativeAppChannel(r2)
        L2f:
            return
    }

    public static void setAppPackage(android.content.Context r1, java.lang.String r2) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r1 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "Can not set App package because bugly is disable."
            android.util.Log.w(r1, r2)
            return
        Lc:
            if (r1 != 0) goto L16
            java.lang.String r1 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "setAppPackage args context should not be null"
            android.util.Log.w(r1, r2)
            return
        L16:
            if (r2 != 0) goto L20
            java.lang.String r1 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "App package is null, will not set"
            android.util.Log.w(r1, r2)
            return
        L20:
            com.tencent.bugly.proguard.aa r1 = com.tencent.bugly.proguard.aa.a(r1)
            r1.c = r2
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r1 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.getInstance()
            if (r1 == 0) goto L2f
            r1.setNativeAppPackage(r2)
        L2f:
            return
    }

    public static void setAppVersion(android.content.Context r1, java.lang.String r2) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r1 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "Can not set App version because bugly is disable."
            android.util.Log.w(r1, r2)
            return
        Lc:
            if (r1 != 0) goto L16
            java.lang.String r1 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "setAppVersion args context should not be null"
            android.util.Log.w(r1, r2)
            return
        L16:
            if (r2 != 0) goto L20
            java.lang.String r1 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "App version is null, will not set"
            android.util.Log.w(r1, r2)
            return
        L20:
            com.tencent.bugly.proguard.aa r1 = com.tencent.bugly.proguard.aa.a(r1)
            r1.o = r2
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r1 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.getInstance()
            if (r1 == 0) goto L2f
            r1.setNativeAppVersion(r2)
        L2f:
            return
    }

    public static void setBuglyDbName(java.lang.String r3) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r3 = com.tencent.bugly.proguard.al.b
            java.lang.String r0 = "Can not set DB name because bugly is disable."
            android.util.Log.w(r3, r0)
            return
        Lc:
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r1 = java.lang.String.valueOf(r3)
            java.lang.String r2 = "Set Bugly DB name: "
            java.lang.String r1 = r2.concat(r1)
            android.util.Log.i(r0, r1)
            com.tencent.bugly.proguard.x.a = r3
            return
    }

    public static void setCollectPrivacyInfo(android.content.Context r3, boolean r4) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r3 = com.tencent.bugly.proguard.al.b
            java.lang.String r4 = "Can not set collect privacy info enable because bugly is disable."
            android.util.Log.w(r3, r4)
            return
        Lc:
            if (r3 != 0) goto L16
            java.lang.String r3 = com.tencent.bugly.proguard.al.b
            java.lang.String r4 = "setCollectPrivacyInfo args context should not be null"
            android.util.Log.w(r3, r4)
            return
        L16:
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r1 = java.lang.String.valueOf(r4)
            java.lang.String r2 = "setCollectPrivacyInfo: "
            java.lang.String r1 = r2.concat(r1)
            android.util.Log.i(r0, r1)
            com.tencent.bugly.proguard.aa r3 = com.tencent.bugly.proguard.aa.a(r3)
            r3.n = r4
            return
    }

    public static void setContext(android.content.Context r0) {
            com.tencent.bugly.crashreport.CrashReport.a = r0
            return
    }

    public static void setCrashFilter(java.lang.String r3) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r3 = com.tencent.bugly.proguard.al.b
            java.lang.String r0 = "Can not set App package because bugly is disable."
            android.util.Log.w(r3, r0)
            return
        Lc:
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r1 = java.lang.String.valueOf(r3)
            java.lang.String r2 = "Set crash stack filter: "
            java.lang.String r1 = r2.concat(r1)
            android.util.Log.i(r0, r1)
            com.tencent.bugly.proguard.at.q = r3
            return
    }

    public static void setCrashRegularFilter(java.lang.String r3) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r3 = com.tencent.bugly.proguard.al.b
            java.lang.String r0 = "Can not set App package because bugly is disable."
            android.util.Log.w(r3, r0)
            return
        Lc:
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r1 = java.lang.String.valueOf(r3)
            java.lang.String r2 = "Set crash stack filter: "
            java.lang.String r1 = r2.concat(r1)
            android.util.Log.i(r0, r1)
            com.tencent.bugly.proguard.at.r = r3
            return
    }

    public static void setDeviceId(android.content.Context r1, java.lang.String r2) {
            if (r1 == 0) goto Lf
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto Lf
            com.tencent.bugly.proguard.aa r1 = com.tencent.bugly.proguard.aa.a(r1)
            r1.a(r2)
        Lf:
            return
    }

    public static void setDeviceModel(android.content.Context r1, java.lang.String r2) {
            if (r1 == 0) goto Lf
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto Lf
            com.tencent.bugly.proguard.aa r1 = com.tencent.bugly.proguard.aa.a(r1)
            r1.b(r2)
        Lf:
            return
    }

    public static void setDumpFilePath(android.content.Context r2, java.lang.String r3) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r2 = com.tencent.bugly.proguard.al.b
            java.lang.String r3 = "Can not set App version because bugly is disable."
            android.util.Log.w(r2, r3)
            return
        Lc:
            if (r2 != 0) goto L16
            java.lang.String r2 = com.tencent.bugly.proguard.al.b
            java.lang.String r3 = "setTombPath args context should not be null"
            android.util.Log.w(r2, r3)
            return
        L16:
            if (r3 != 0) goto L20
            java.lang.String r2 = com.tencent.bugly.proguard.al.b
            java.lang.String r3 = "tombstone path is null, will not set"
            android.util.Log.w(r2, r3)
            return
        L20:
            java.lang.String r2 = com.tencent.bugly.proguard.al.b
            java.lang.String r0 = java.lang.String.valueOf(r3)
            java.lang.String r1 = "user set tombstone path: "
            java.lang.String r0 = r1.concat(r0)
            android.util.Log.i(r2, r0)
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.setDumpFilePath(r3)
            return
    }

    public static void setHandleNativeCrashInJava(boolean r3) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r3 = com.tencent.bugly.proguard.al.b
            java.lang.String r0 = "Can not set App package because bugly is disable."
            android.util.Log.w(r3, r0)
            return
        Lc:
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r1 = java.lang.String.valueOf(r3)
            java.lang.String r2 = "Should handle native crash in Java profile after handled in native profile: "
            java.lang.String r1 = r2.concat(r1)
            android.util.Log.i(r0, r1)
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.setShouldHandleInJava(r3)
            return
    }

    public static void setHttpProxy(java.lang.String r3, int r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto La
            r3 = 0
            com.tencent.bugly.proguard.an.a = r3
            return
        La:
            java.net.Proxy r0 = new java.net.Proxy
            java.net.Proxy$Type r1 = java.net.Proxy.Type.HTTP
            java.net.InetSocketAddress r2 = new java.net.InetSocketAddress
            r2.<init>(r3, r4)
            r0.<init>(r1, r2)
            com.tencent.bugly.proguard.an.a = r0
            return
    }

    public static void setHttpProxy(java.net.InetAddress r3, int r4) {
            if (r3 != 0) goto L6
            r3 = 0
            com.tencent.bugly.proguard.an.a = r3
            return
        L6:
            java.net.Proxy r0 = new java.net.Proxy
            java.net.Proxy$Type r1 = java.net.Proxy.Type.HTTP
            java.net.InetSocketAddress r2 = new java.net.InetSocketAddress
            r2.<init>(r3, r4)
            r0.<init>(r1, r2)
            com.tencent.bugly.proguard.an.a = r0
            return
    }

    @java.lang.Deprecated
    public static void setIsAppForeground(android.content.Context r0, boolean r1) {
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "App fore and back status are no longer supported"
            com.tencent.bugly.proguard.al.a(r1, r0)
            return
    }

    public static void setIsDevelopmentDevice(android.content.Context r2, boolean r3) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r2 = com.tencent.bugly.proguard.al.b
            java.lang.String r3 = "Can not set 'isDevelopmentDevice' because bugly is disable."
            android.util.Log.w(r2, r3)
            return
        Lc:
            r0 = 0
            if (r2 != 0) goto L17
            java.lang.Object[] r2 = new java.lang.Object[r0]
            java.lang.String r3 = "Context should not be null."
            com.tencent.bugly.proguard.al.d(r3, r2)
            return
        L17:
            if (r3 == 0) goto L21
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "This is a development device."
            com.tencent.bugly.proguard.al.c(r1, r0)
            goto L28
        L21:
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "This is not a development device."
            com.tencent.bugly.proguard.al.c(r1, r0)
        L28:
            com.tencent.bugly.proguard.aa r2 = com.tencent.bugly.proguard.aa.a(r2)
            r2.I = r3
            return
    }

    public static boolean setJavascriptMonitor(android.webkit.WebView r1, boolean r2) {
            r0 = 0
            boolean r1 = setJavascriptMonitor(r1, r2, r0)
            return r1
    }

    @android.annotation.SuppressLint({"SetJavaScriptEnabled"})
    public static boolean setJavascriptMonitor(android.webkit.WebView r2, boolean r3, boolean r4) {
            r0 = 0
            if (r2 != 0) goto Lb
            java.lang.String r2 = com.tencent.bugly.proguard.al.b
            java.lang.String r3 = "WebView is null."
            android.util.Log.w(r2, r3)
            return r0
        Lb:
            android.webkit.WebSettings r1 = r2.getSettings()
            r1.setSavePassword(r0)
            android.webkit.WebSettings r1 = r2.getSettings()
            r1.setAllowFileAccess(r0)
            com.tencent.bugly.crashreport.CrashReport$1 r0 = new com.tencent.bugly.crashreport.CrashReport$1
            r0.<init>(r2)
            boolean r2 = setJavascriptMonitor(r0, r3, r4)
            return r2
    }

    public static boolean setJavascriptMonitor(com.tencent.bugly.crashreport.CrashReport.a r1, boolean r2) {
            r0 = 0
            boolean r1 = setJavascriptMonitor(r1, r2, r0)
            return r1
    }

    @android.annotation.SuppressLint({"SetJavaScriptEnabled"})
    public static boolean setJavascriptMonitor(com.tencent.bugly.crashreport.CrashReport.a r4, boolean r5, boolean r6) {
            r0 = 0
            if (r4 != 0) goto Lb
            java.lang.String r4 = com.tencent.bugly.proguard.al.b
            java.lang.String r5 = "WebViewInterface is null."
            android.util.Log.w(r4, r5)
            return r0
        Lb:
            com.tencent.bugly.CrashModule r1 = com.tencent.bugly.CrashModule.getInstance()
            boolean r1 = r1.hasInitialized()
            if (r1 != 0) goto L1d
            java.lang.Object[] r4 = new java.lang.Object[r0]
            java.lang.String r5 = "CrashReport has not been initialed! please to call method 'initCrashReport' first!"
            com.tencent.bugly.proguard.al.e(r5, r4)
            return r0
        L1d:
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "Set Javascript exception monitor of webview."
            com.tencent.bugly.proguard.al.a(r2, r1)
            boolean r1 = com.tencent.bugly.proguard.p.a
            if (r1 != 0) goto L30
            java.lang.String r4 = com.tencent.bugly.proguard.al.b
            java.lang.String r5 = "Can not set JavaScript monitor because bugly is disable."
            android.util.Log.w(r4, r5)
            return r0
        L30:
            r1 = 1
            java.lang.Object[] r2 = new java.lang.Object[r1]
            java.lang.String r3 = r4.a()
            r2[r0] = r3
            java.lang.String r3 = "URL of webview is %s"
            com.tencent.bugly.proguard.al.c(r3, r2)
            if (r6 != 0) goto L4e
            int r6 = android.os.Build.VERSION.SDK_INT
            r2 = 19
            if (r6 >= r2) goto L4e
            java.lang.Object[] r4 = new java.lang.Object[r0]
            java.lang.String r5 = "This interface is only available for Android 4.4 or later."
            com.tencent.bugly.proguard.al.e(r5, r4)
            return r0
        L4e:
            java.lang.Object[] r6 = new java.lang.Object[r0]
            java.lang.String r2 = "Enable the javascript needed by webview monitor."
            com.tencent.bugly.proguard.al.a(r2, r6)
            r4.b()
            com.tencent.bugly.crashreport.crash.h5.H5JavaScriptInterface r6 = com.tencent.bugly.crashreport.crash.h5.H5JavaScriptInterface.getInstance(r4)
            if (r6 == 0) goto L6a
            java.lang.Object[] r2 = new java.lang.Object[r0]
            java.lang.String r3 = "Add a secure javascript interface to the webview."
            com.tencent.bugly.proguard.al.a(r3, r2)
            java.lang.String r2 = "exceptionUploader"
            r4.a(r6, r2)
        L6a:
            if (r5 == 0) goto L9a
            java.lang.Object[] r5 = new java.lang.Object[r1]
            java.lang.String r6 = com.tencent.bugly.proguard.bc.b()
            r5[r0] = r6
            java.lang.String r6 = "Inject bugly.js(v%s) to the webview."
            com.tencent.bugly.proguard.al.a(r6, r5)
            java.lang.String r5 = com.tencent.bugly.proguard.bc.a()
            if (r5 != 0) goto L8d
            java.lang.Object[] r4 = new java.lang.Object[r1]
            java.lang.String r5 = com.tencent.bugly.proguard.bc.b()
            r4[r0] = r5
            java.lang.String r5 = "Failed to inject Bugly.js."
            com.tencent.bugly.proguard.al.e(r5, r4)
            return r0
        L8d:
            java.lang.String r5 = java.lang.String.valueOf(r5)
            java.lang.String r6 = "javascript:"
            java.lang.String r5 = r6.concat(r5)
            r4.a(r5)
        L9a:
            return r1
    }

    public static void setSdkExtraData(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r1 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "Can not put SDK extra data because bugly is disable."
            android.util.Log.w(r1, r2)
            return
        Lc:
            if (r1 == 0) goto L31
            boolean r0 = com.tencent.bugly.proguard.ap.b(r2)
            if (r0 != 0) goto L31
            boolean r0 = com.tencent.bugly.proguard.ap.b(r3)
            if (r0 == 0) goto L1b
            goto L31
        L1b:
            com.tencent.bugly.proguard.aa r1 = com.tencent.bugly.proguard.aa.a(r1)
            if (r2 == 0) goto L31
            if (r3 != 0) goto L24
            goto L31
        L24:
            java.lang.Object r0 = r1.T
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, java.lang.String> r1 = r1.K     // Catch: java.lang.Throwable -> L2e
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L2e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
            return
        L2e:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
            throw r1
        L31:
            return
    }

    public static void setServerUrl(java.lang.String r1) {
            boolean r0 = com.tencent.bugly.proguard.ap.b(r1)
            if (r0 != 0) goto L15
            boolean r0 = com.tencent.bugly.proguard.ap.d(r1)
            if (r0 != 0) goto Ld
            goto L15
        Ld:
            com.tencent.bugly.proguard.ac.a(r1)
            com.tencent.bugly.crashreport.common.strategy.StrategyBean.a = r1
            com.tencent.bugly.crashreport.common.strategy.StrategyBean.b = r1
            return
        L15:
            java.lang.String r1 = com.tencent.bugly.proguard.al.b
            java.lang.String r0 = "URL is invalid."
            android.util.Log.i(r1, r0)
            return
    }

    public static void setSessionIntervalMills(long r1) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r1 = com.tencent.bugly.proguard.al.b
            java.lang.String r2 = "Can not set 'SessionIntervalMills' because bugly is disable."
            android.util.Log.w(r1, r2)
            return
        Lc:
            com.tencent.bugly.proguard.s.a(r1)
            return
    }

    public static void setUserId(android.content.Context r5, java.lang.String r6) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r5 = com.tencent.bugly.proguard.al.b
            java.lang.String r6 = "Can not set user ID because bugly is disable."
            android.util.Log.w(r5, r6)
            return
        Lc:
            if (r5 != 0) goto L16
            java.lang.String r5 = com.tencent.bugly.proguard.al.b
            java.lang.String r6 = "Context should not be null when bugly has not been initialed!"
            android.util.Log.e(r5, r6)
            return
        L16:
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 0
            if (r0 == 0) goto L25
            java.lang.Object[] r5 = new java.lang.Object[r1]
            java.lang.String r6 = "userId should not be null"
            com.tencent.bugly.proguard.al.d(r6, r5)
            return
        L25:
            int r0 = r6.length()
            r2 = 1
            r3 = 100
            if (r0 <= r3) goto L46
            java.lang.String r0 = r6.substring(r1, r3)
            r4 = 3
            java.lang.Object[] r4 = new java.lang.Object[r4]
            r4[r1] = r6
            java.lang.Integer r6 = java.lang.Integer.valueOf(r3)
            r4[r2] = r6
            r6 = 2
            r4[r6] = r0
            java.lang.String r6 = "userId %s length is over limit %d substring to %s"
            com.tencent.bugly.proguard.al.d(r6, r4)
            r6 = r0
        L46:
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.a(r5)
            java.lang.String r0 = r0.f()
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L55
            return
        L55:
            com.tencent.bugly.proguard.aa r5 = com.tencent.bugly.proguard.aa.a(r5)
            java.lang.Object r0 = r5.V
            monitor-enter(r0)
            if (r6 != 0) goto L61
            java.lang.String r3 = "10000"
            goto L62
        L61:
            r3 = r6
        L62:
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L89
            r5.l = r3     // Catch: java.lang.Throwable -> L89
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L89
            java.lang.Object[] r5 = new java.lang.Object[r2]
            r5[r1] = r6
            java.lang.String r0 = "[user] set userId : %s"
            com.tencent.bugly.proguard.al.b(r0, r5)
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r5 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.getInstance()
            if (r5 == 0) goto L7b
            r5.setNativeUserId(r6)
        L7b:
            com.tencent.bugly.CrashModule r5 = com.tencent.bugly.CrashModule.getInstance()
            boolean r5 = r5.hasInitialized()
            if (r5 == 0) goto L88
            com.tencent.bugly.proguard.s.a()
        L88:
            return
        L89:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L89
            throw r5
    }

    public static void setUserId(java.lang.String r1) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r1 = com.tencent.bugly.proguard.al.b
            java.lang.String r0 = "Can not set user ID because bugly is disable."
            android.util.Log.w(r1, r0)
            return
        Lc:
            com.tencent.bugly.CrashModule r0 = com.tencent.bugly.CrashModule.getInstance()
            boolean r0 = r0.hasInitialized()
            if (r0 != 0) goto L1e
            java.lang.String r1 = com.tencent.bugly.proguard.al.b
            java.lang.String r0 = "CrashReport has not been initialed! pls to call method 'initCrashReport' first!"
            android.util.Log.e(r1, r0)
            return
        L1e:
            android.content.Context r0 = com.tencent.bugly.crashreport.CrashReport.a
            setUserId(r0, r1)
            return
    }

    public static void setUserSceneTag(android.content.Context r6, int r7) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r6 = com.tencent.bugly.proguard.al.b
            java.lang.String r7 = "Can not set tag caught because bugly is disable."
            android.util.Log.w(r6, r7)
            return
        Lc:
            if (r6 != 0) goto L16
            java.lang.String r6 = com.tencent.bugly.proguard.al.b
            java.lang.String r7 = "setTag args context should not be null"
            android.util.Log.e(r6, r7)
            return
        L16:
            r0 = 0
            if (r7 > 0) goto L20
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "setTag args tagId should > 0"
            com.tencent.bugly.proguard.al.d(r2, r1)
        L20:
            com.tencent.bugly.proguard.aa r6 = com.tencent.bugly.proguard.aa.a(r6)
            java.lang.Object r1 = r6.U
            monitor-enter(r1)
            int r2 = r6.w     // Catch: java.lang.Throwable -> L53
            r3 = 1
            if (r2 == r7) goto L44
            r6.w = r7     // Catch: java.lang.Throwable -> L53
            java.lang.String r4 = "user scene tag %d changed to tag %d"
            r5 = 2
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L53
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L53
            r5[r0] = r2     // Catch: java.lang.Throwable -> L53
            int r6 = r6.w     // Catch: java.lang.Throwable -> L53
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L53
            r5[r3] = r6     // Catch: java.lang.Throwable -> L53
            com.tencent.bugly.proguard.al.a(r4, r5)     // Catch: java.lang.Throwable -> L53
        L44:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L53
            java.lang.Object[] r6 = new java.lang.Object[r3]
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)
            r6[r0] = r7
            java.lang.String r7 = "[param] set user scene tag: %d"
            com.tencent.bugly.proguard.al.b(r7, r6)
            return
        L53:
            r6 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L53
            throw r6
    }

    public static void startCrashReport() {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r1 = "Can not start crash report because bugly is disable."
            android.util.Log.w(r0, r1)
            return
        Lc:
            com.tencent.bugly.CrashModule r0 = com.tencent.bugly.CrashModule.getInstance()
            boolean r0 = r0.hasInitialized()
            if (r0 != 0) goto L1e
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r1 = "CrashReport has not been initialed! pls to call method 'initCrashReport' first!"
            android.util.Log.w(r0, r1)
            return
        L1e:
            com.tencent.bugly.proguard.at r0 = com.tencent.bugly.proguard.at.a()
            r0.b()
            return
    }

    public static void testANRCrash() {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r1 = "Can not test ANR crash because bugly is disable."
            android.util.Log.w(r0, r1)
            return
        Lc:
            com.tencent.bugly.CrashModule r0 = com.tencent.bugly.CrashModule.getInstance()
            boolean r0 = r0.hasInitialized()
            if (r0 != 0) goto L1e
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r1 = "CrashReport has not been initialed! pls to call method 'initCrashReport' first!"
            android.util.Log.e(r0, r1)
            return
        L1e:
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "start to create a anr crash for test!"
            com.tencent.bugly.proguard.al.a(r1, r0)
            com.tencent.bugly.proguard.at r0 = com.tencent.bugly.proguard.at.a()
            r0.h()
            return
    }

    public static void testJavaCrash() {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r1 = "Can not test Java crash because bugly is disable."
            android.util.Log.w(r0, r1)
            return
        Lc:
            com.tencent.bugly.CrashModule r0 = com.tencent.bugly.CrashModule.getInstance()
            boolean r0 = r0.hasInitialized()
            if (r0 != 0) goto L1e
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r1 = "CrashReport has not been initialed! pls to call method 'initCrashReport' first!"
            android.util.Log.e(r0, r1)
            return
        L1e:
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.b()
            if (r0 == 0) goto L44
            int r1 = r0.x
            r2 = 24096(0x5e20, float:3.3766E-41)
            if (r1 == r2) goto L44
            r0.x = r2
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2[r3] = r1
            r1 = 1
            int r0 = r0.x
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r2[r1] = r0
            java.lang.String r0 = "server scene tag %d changed to tag %d"
            com.tencent.bugly.proguard.al.a(r0, r2)
        L44:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "This Crash create for Test! You can go to Bugly see more detail!"
            r0.<init>(r1)
            throw r0
    }

    public static void testNativeCrash() {
            r0 = 1
            r1 = 0
            testNativeCrash(r0, r0, r1)
            return
    }

    public static void testNativeCrash(boolean r2, boolean r3, boolean r4) {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r2 = com.tencent.bugly.proguard.al.b
            java.lang.String r3 = "Can not test native crash because bugly is disable."
            android.util.Log.w(r2, r3)
            return
        Lc:
            com.tencent.bugly.CrashModule r0 = com.tencent.bugly.CrashModule.getInstance()
            boolean r0 = r0.hasInitialized()
            if (r0 != 0) goto L1e
            java.lang.String r2 = com.tencent.bugly.proguard.al.b
            java.lang.String r3 = "CrashReport has not been initialed! pls to call method 'initCrashReport' first!"
            android.util.Log.e(r2, r3)
            return
        L1e:
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "start to create a native crash for test!"
            com.tencent.bugly.proguard.al.a(r1, r0)
            com.tencent.bugly.proguard.at r0 = com.tencent.bugly.proguard.at.a()
            r0.a(r2, r3, r4)
            return
    }

    public static void uploadUserInfo() {
            boolean r0 = com.tencent.bugly.proguard.p.a
            if (r0 != 0) goto Lc
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r1 = "Can not upload user info because bugly is disable."
            android.util.Log.w(r0, r1)
            return
        Lc:
            com.tencent.bugly.proguard.r r0 = com.tencent.bugly.proguard.s.b
            if (r0 != 0) goto L18
            java.lang.String r0 = com.tencent.bugly.proguard.al.b
            java.lang.String r1 = "Can not upload user info because bugly is not init."
            android.util.Log.w(r0, r1)
            return
        L18:
            com.tencent.bugly.proguard.r r0 = com.tencent.bugly.proguard.s.b
            r0.b()
            return
    }
}

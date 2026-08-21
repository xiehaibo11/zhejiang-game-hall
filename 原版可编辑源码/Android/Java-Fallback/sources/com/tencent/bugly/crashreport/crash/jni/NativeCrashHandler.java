package com.tencent.bugly.crashreport.crash.jni;

public class NativeCrashHandler implements com.tencent.bugly.proguard.q {
    static java.lang.String a = null;
    private static com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler b = null;
    private static int c = 1;
    private static boolean n = true;
    private final android.content.Context d;
    private final com.tencent.bugly.proguard.aa e;
    private final com.tencent.bugly.proguard.ak f;
    private com.tencent.bugly.crashreport.crash.jni.NativeExceptionHandler g;
    private final boolean h;
    private boolean i;
    private boolean j;
    private boolean k;
    private boolean l;
    private com.tencent.bugly.proguard.as m;



    static {
            return
    }

    @android.annotation.SuppressLint({"SdCardPath"})
    private NativeCrashHandler(android.content.Context r3, com.tencent.bugly.proguard.aa r4, com.tencent.bugly.proguard.as r5, com.tencent.bugly.proguard.ak r6, boolean r7, java.lang.String r8) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.i = r0
            r2.j = r0
            r2.k = r0
            r2.l = r0
            android.content.Context r1 = com.tencent.bugly.proguard.ap.a(r3)
            r2.d = r1
            java.lang.String r1 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.a
            boolean r1 = com.tencent.bugly.proguard.ap.b(r1)
            if (r1 == 0) goto L46
            boolean r1 = com.tencent.bugly.proguard.ap.b(r8)     // Catch: java.lang.Throwable -> L2b
            if (r1 == 0) goto L44
            java.lang.String r8 = "bugly"
            java.io.File r8 = r3.getDir(r8, r0)     // Catch: java.lang.Throwable -> L2b
            java.lang.String r8 = r8.getAbsolutePath()     // Catch: java.lang.Throwable -> L2b
            goto L44
        L2b:
            com.tencent.bugly.proguard.aa r8 = com.tencent.bugly.proguard.aa.a(r3)
            java.lang.String r8 = r8.c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "/data/data/"
            r0.<init>(r1)
            r0.append(r8)
            java.lang.String r8 = "/app_bugly"
            r0.append(r8)
            java.lang.String r8 = r0.toString()
        L44:
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.a = r8
        L46:
            r2.m = r5
            r2.e = r4
            r2.f = r6
            r2.h = r7
            com.tencent.bugly.proguard.bd r6 = new com.tencent.bugly.proguard.bd
            com.tencent.bugly.proguard.ac r7 = com.tencent.bugly.proguard.ac.a()
            r6.<init>(r3, r4, r5, r7)
            r2.g = r6
            return
    }

    static android.content.Context a(com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r0) {
            android.content.Context r0 = r0.d
            return r0
    }

    private synchronized void a(boolean r11) {
            r10 = this;
            monitor-enter(r10)
            boolean r0 = r10.k     // Catch: java.lang.Throwable -> L13e
            r1 = 0
            if (r0 == 0) goto Lf
            java.lang.String r11 = "[Native] Native crash report has already registered."
            java.lang.Object[] r0 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L13e
            com.tencent.bugly.proguard.al.d(r11, r0)     // Catch: java.lang.Throwable -> L13e
            monitor-exit(r10)
            return
        Lf:
            boolean r0 = r10.j     // Catch: java.lang.Throwable -> L13e
            r2 = 1
            if (r0 == 0) goto L80
            java.lang.String r0 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.a     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            int r3 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.c     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            java.lang.String r11 = r10.regist(r0, r11, r3)     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            if (r11 == 0) goto L138
            java.lang.String r0 = "[Native] Native Crash Report enable."
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            com.tencent.bugly.proguard.al.a(r0, r3)     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            com.tencent.bugly.proguard.aa r0 = r10.e     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            r0.u = r11     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            java.lang.String r11 = "-"
            com.tencent.bugly.proguard.aa r0 = r10.e     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            java.lang.String r0 = r0.u     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            java.lang.String r11 = r11.concat(r0)     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            boolean r0 = com.tencent.bugly.proguard.at.b     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            if (r0 != 0) goto L57
            com.tencent.bugly.proguard.aa r0 = r10.e     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            java.lang.String r0 = r0.h     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            boolean r11 = r0.contains(r11)     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            if (r11 != 0) goto L57
            com.tencent.bugly.proguard.aa r11 = r10.e     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            com.tencent.bugly.proguard.aa r0 = r10.e     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            java.lang.String r0 = r0.h     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            java.lang.String r3 = "-"
            java.lang.String r0 = r0.concat(r3)     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            com.tencent.bugly.proguard.aa r3 = r10.e     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            java.lang.String r3 = r3.u     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            java.lang.String r0 = r0.concat(r3)     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            r11.h = r0     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
        L57:
            java.lang.String r11 = "comInfo.sdkVersion %s"
            java.lang.Object[] r0 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            com.tencent.bugly.proguard.aa r3 = r10.e     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            java.lang.String r3 = r3.h     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            r0[r1] = r3     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            com.tencent.bugly.proguard.al.a(r11, r0)     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            r10.k = r2     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            java.lang.String r11 = r10.getRunningCpuAbi()     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            boolean r0 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            if (r0 != 0) goto L75
            com.tencent.bugly.proguard.aa r0 = r10.e     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
            r0.e(r11)     // Catch: java.lang.Throwable -> L77 java.lang.Throwable -> L13e
        L75:
            monitor-exit(r10)
            return
        L77:
            java.lang.String r11 = "[Native] Failed to load Bugly SO file."
            java.lang.Object[] r0 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L13e
            com.tencent.bugly.proguard.al.c(r11, r0)     // Catch: java.lang.Throwable -> L13e
            goto L138
        L80:
            boolean r0 = r10.i     // Catch: java.lang.Throwable -> L13e
            if (r0 == 0) goto L138
            java.lang.String r0 = "com.tencent.feedback.eup.jni.NativeExceptionUpload"
            java.lang.String r3 = "registNativeExceptionHandler2"
            r4 = 4
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r5[r1] = r6     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r5[r2] = r6     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.Class r6 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            r7 = 2
            r5[r7] = r6     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.Class r6 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            r8 = 3
            r5[r8] = r6     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.String r6 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.a     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            r4[r1] = r6     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.String r6 = com.tencent.bugly.proguard.ab.d()     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            r4[r2] = r6     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            r6 = 5
            if (r11 == 0) goto Lae
            r9 = 1
            goto Laf
        Lae:
            r9 = 5
        Laf:
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            r4[r7] = r9     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.Integer r9 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            r4[r8] = r9     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.Object r0 = com.tencent.bugly.proguard.ap.a(r0, r3, r5, r4)     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            if (r0 != 0) goto Lf4
            java.lang.String r0 = "com.tencent.feedback.eup.jni.NativeExceptionUpload"
            java.lang.String r3 = "registNativeExceptionHandler"
            java.lang.Class[] r4 = new java.lang.Class[r8]     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r4[r1] = r5     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r4[r2] = r5     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            r4[r7] = r5     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.Object[] r5 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.String r8 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.a     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            r5[r1] = r8     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.String r8 = com.tencent.bugly.proguard.ab.d()     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            r5[r2] = r8     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            com.tencent.bugly.proguard.aa.b()     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            int r8 = com.tencent.bugly.proguard.aa.B()     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            r5[r7] = r8     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.Object r0 = com.tencent.bugly.proguard.ap.a(r0, r3, r4, r5)     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
        Lf4:
            if (r0 == 0) goto L138
            r10.k = r2     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            com.tencent.bugly.proguard.aa r3 = r10.e     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            r3.u = r0     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.String r0 = "com.tencent.feedback.eup.jni.NativeExceptionUpload"
            java.lang.String r3 = "enableHandler"
            java.lang.Class[] r4 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.Class r5 = java.lang.Boolean.TYPE     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            r4[r1] = r5     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.Object[] r5 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.Boolean r7 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            r5[r1] = r7     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            com.tencent.bugly.proguard.ap.a(r0, r3, r4, r5)     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            if (r11 == 0) goto L112
            r6 = 1
        L112:
            java.lang.String r11 = "com.tencent.feedback.eup.jni.NativeExceptionUpload"
            java.lang.String r0 = "setLogMode"
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            r3[r1] = r4     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.Integer r4 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            r2[r1] = r4     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            com.tencent.bugly.proguard.ap.a(r11, r0, r3, r2)     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            java.lang.String r11 = r10.getRunningCpuAbi()     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            boolean r0 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            if (r0 != 0) goto L136
            com.tencent.bugly.proguard.aa r0 = r10.e     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
            r0.e(r11)     // Catch: java.lang.Throwable -> L138 java.lang.Throwable -> L13e
        L136:
            monitor-exit(r10)
            return
        L138:
            r10.j = r1     // Catch: java.lang.Throwable -> L13e
            r10.i = r1     // Catch: java.lang.Throwable -> L13e
            monitor-exit(r10)
            return
        L13e:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
    }

    static boolean a() {
            boolean r0 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.n
            return r0
    }

    private boolean a(int r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = r2.j
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            r2.setNativeInfo(r3, r4)     // Catch: java.lang.Throwable -> Lb java.lang.UnsatisfiedLinkError -> L15
            r3 = 1
            return r3
        Lb:
            r3 = move-exception
            boolean r4 = com.tencent.bugly.proguard.al.a(r3)
            if (r4 != 0) goto L15
            r3.printStackTrace()
        L15:
            return r1
    }

    static boolean a(com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r1, java.lang.String r2) {
            r0 = 999(0x3e7, float:1.4E-42)
            boolean r1 = r1.a(r0, r2)
            return r1
    }

    private static boolean a(java.lang.String r4, boolean r5) {
            r0 = 1
            r1 = 0
            java.lang.String r2 = "[Native] Trying to load so: %s"
            java.lang.Object[] r3 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L21
            r3[r1] = r4     // Catch: java.lang.Throwable -> L21
            com.tencent.bugly.proguard.al.a(r2, r3)     // Catch: java.lang.Throwable -> L21
            if (r5 == 0) goto L11
            java.lang.System.load(r4)     // Catch: java.lang.Throwable -> L21
            goto L14
        L11:
            java.lang.System.loadLibrary(r4)     // Catch: java.lang.Throwable -> L21
        L14:
            java.lang.String r5 = "[Native] Successfully loaded SO: %s"
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L1e
            r2[r1] = r4     // Catch: java.lang.Throwable -> L1e
            com.tencent.bugly.proguard.al.a(r5, r2)     // Catch: java.lang.Throwable -> L1e
            goto L36
        L1e:
            r5 = move-exception
            r2 = 1
            goto L23
        L21:
            r5 = move-exception
            r2 = 0
        L23:
            java.lang.String r5 = r5.getMessage()
            java.lang.Object[] r3 = new java.lang.Object[r1]
            com.tencent.bugly.proguard.al.d(r5, r3)
            java.lang.Object[] r5 = new java.lang.Object[r0]
            r5[r1] = r4
            java.lang.String r4 = "[Native] Failed to load so: %s"
            com.tencent.bugly.proguard.al.d(r4, r5)
            r0 = r2
        L36:
            return r0
    }

    static com.tencent.bugly.crashreport.crash.jni.NativeExceptionHandler b(com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r0) {
            com.tencent.bugly.crashreport.crash.jni.NativeExceptionHandler r0 = r0.g
            return r0
    }

    static java.lang.String b() {
            java.lang.String r0 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.a
            return r0
    }

    private synchronized void b(boolean r1) {
            r0 = this;
            monitor-enter(r0)
            if (r1 == 0) goto L8
            r0.startNativeMonitor()     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)
            return
        L8:
            r0.c()     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)
            return
        Ld:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    static com.tencent.bugly.proguard.as c(com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r0) {
            com.tencent.bugly.proguard.as r0 = r0.m
            return r0
    }

    private synchronized void c() {
            r6 = this;
            monitor-enter(r6)
            boolean r0 = r6.k     // Catch: java.lang.Throwable -> L53
            r1 = 0
            if (r0 != 0) goto Lf
            java.lang.String r0 = "[Native] Native crash report has already unregistered."
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L53
            com.tencent.bugly.proguard.al.d(r0, r1)     // Catch: java.lang.Throwable -> L53
            monitor-exit(r6)
            return
        Lf:
            java.lang.String r0 = r6.unregist()     // Catch: java.lang.Throwable -> L20 java.lang.Throwable -> L53
            if (r0 == 0) goto L27
            java.lang.String r0 = "[Native] Successfully closed native crash report."
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L20 java.lang.Throwable -> L53
            com.tencent.bugly.proguard.al.a(r0, r2)     // Catch: java.lang.Throwable -> L20 java.lang.Throwable -> L53
            r6.k = r1     // Catch: java.lang.Throwable -> L20 java.lang.Throwable -> L53
            monitor-exit(r6)
            return
        L20:
            java.lang.String r0 = "[Native] Failed to close native crash report."
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L53
            com.tencent.bugly.proguard.al.c(r0, r2)     // Catch: java.lang.Throwable -> L53
        L27:
            java.lang.String r0 = "com.tencent.feedback.eup.jni.NativeExceptionUpload"
            java.lang.String r2 = "enableHandler"
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L46 java.lang.Throwable -> L53
            java.lang.Class r5 = java.lang.Boolean.TYPE     // Catch: java.lang.Throwable -> L46 java.lang.Throwable -> L53
            r4[r1] = r5     // Catch: java.lang.Throwable -> L46 java.lang.Throwable -> L53
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L46 java.lang.Throwable -> L53
            java.lang.Boolean r5 = java.lang.Boolean.FALSE     // Catch: java.lang.Throwable -> L46 java.lang.Throwable -> L53
            r3[r1] = r5     // Catch: java.lang.Throwable -> L46 java.lang.Throwable -> L53
            com.tencent.bugly.proguard.ap.a(r0, r2, r4, r3)     // Catch: java.lang.Throwable -> L46 java.lang.Throwable -> L53
            r6.k = r1     // Catch: java.lang.Throwable -> L46 java.lang.Throwable -> L53
            java.lang.String r0 = "[Native] Successfully closed native crash report."
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L46 java.lang.Throwable -> L53
            com.tencent.bugly.proguard.al.a(r0, r2)     // Catch: java.lang.Throwable -> L46 java.lang.Throwable -> L53
            monitor-exit(r6)
            return
        L46:
            java.lang.String r0 = "[Native] Failed to close native crash report."
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L53
            com.tencent.bugly.proguard.al.c(r0, r2)     // Catch: java.lang.Throwable -> L53
            r6.j = r1     // Catch: java.lang.Throwable -> L53
            r6.i = r1     // Catch: java.lang.Throwable -> L53
            monitor-exit(r6)
            return
        L53:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }

    private synchronized void c(boolean r5) {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = r4.l     // Catch: java.lang.Throwable -> L18
            if (r0 == r5) goto L16
            java.lang.String r0 = "user change native %b"
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L18
            r2 = 0
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r5)     // Catch: java.lang.Throwable -> L18
            r1[r2] = r3     // Catch: java.lang.Throwable -> L18
            com.tencent.bugly.proguard.al.a(r0, r1)     // Catch: java.lang.Throwable -> L18
            r4.l = r5     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r4)
            return
        L18:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public static synchronized java.lang.String getDumpFilePath() {
            java.lang.Class<com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler> r0 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.class
            monitor-enter(r0)
            java.lang.String r1 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.a     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler getInstance() {
            java.lang.Class<com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler> r0 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.class
            monitor-enter(r0)
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r1 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.b     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler getInstance(android.content.Context r8, com.tencent.bugly.proguard.aa r9, com.tencent.bugly.proguard.as r10, com.tencent.bugly.proguard.ac r11, com.tencent.bugly.proguard.ak r12, boolean r13, java.lang.String r14) {
            java.lang.Class<com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler> r11 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.class
            monitor-enter(r11)
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r0 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.b     // Catch: java.lang.Throwable -> L19
            if (r0 != 0) goto L15
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r0 = new com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler     // Catch: java.lang.Throwable -> L19
            r1 = r0
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r12
            r6 = r13
            r7 = r14
            r1.<init>(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L19
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.b = r0     // Catch: java.lang.Throwable -> L19
        L15:
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r8 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.b     // Catch: java.lang.Throwable -> L19
            monitor-exit(r11)
            return r8
        L19:
            r8 = move-exception
            monitor-exit(r11)
            throw r8
    }

    private native java.lang.String getProperties(java.lang.String r1);

    private native java.lang.String getSoCpuAbi();

    public static boolean isShouldHandleInJava() {
            boolean r0 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.n
            return r0
    }

    public static synchronized void setDumpFilePath(java.lang.String r1) {
            java.lang.Class<com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler> r0 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.class
            monitor-enter(r0)
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.a = r1     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static void setShouldHandleInJava(boolean r2) {
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.n = r2
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r0 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.b
            if (r0 == 0) goto Lf
            r1 = 999(0x3e7, float:1.4E-42)
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.a(r1, r2)
        Lf:
            return
    }

    @Override
    public boolean appendLogToNative(java.lang.String r9, java.lang.String r10, java.lang.String r11) {
            r8 = this;
            boolean r0 = r8.i
            r1 = 0
            if (r0 != 0) goto La
            boolean r0 = r8.j
            if (r0 != 0) goto La
            return r1
        La:
            if (r9 == 0) goto L4f
            if (r10 == 0) goto L4f
            if (r11 != 0) goto L11
            goto L4f
        L11:
            boolean r0 = r8.j     // Catch: java.lang.Throwable -> L45 java.lang.UnsatisfiedLinkError -> L4f
            if (r0 == 0) goto L1a
            boolean r9 = r8.appendNativeLog(r9, r10, r11)     // Catch: java.lang.Throwable -> L45 java.lang.UnsatisfiedLinkError -> L4f
            return r9
        L1a:
            java.lang.String r0 = "com.tencent.feedback.eup.jni.NativeExceptionUpload"
            java.lang.String r2 = "appendNativeLog"
            r3 = 3
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L45 java.lang.UnsatisfiedLinkError -> L4f
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r4[r1] = r5     // Catch: java.lang.Throwable -> L45 java.lang.UnsatisfiedLinkError -> L4f
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r6 = 1
            r4[r6] = r5     // Catch: java.lang.Throwable -> L45 java.lang.UnsatisfiedLinkError -> L4f
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r7 = 2
            r4[r7] = r5     // Catch: java.lang.Throwable -> L45 java.lang.UnsatisfiedLinkError -> L4f
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L45 java.lang.UnsatisfiedLinkError -> L4f
            r3[r1] = r9     // Catch: java.lang.Throwable -> L45 java.lang.UnsatisfiedLinkError -> L4f
            r3[r6] = r10     // Catch: java.lang.Throwable -> L45 java.lang.UnsatisfiedLinkError -> L4f
            r3[r7] = r11     // Catch: java.lang.Throwable -> L45 java.lang.UnsatisfiedLinkError -> L4f
            java.lang.Object r9 = com.tencent.bugly.proguard.ap.a(r0, r2, r4, r3)     // Catch: java.lang.Throwable -> L45 java.lang.UnsatisfiedLinkError -> L4f
            java.lang.Boolean r9 = (java.lang.Boolean) r9     // Catch: java.lang.Throwable -> L45 java.lang.UnsatisfiedLinkError -> L4f
            if (r9 == 0) goto L44
            boolean r9 = r9.booleanValue()     // Catch: java.lang.Throwable -> L45 java.lang.UnsatisfiedLinkError -> L4f
            return r9
        L44:
            return r1
        L45:
            r9 = move-exception
            boolean r10 = com.tencent.bugly.proguard.al.a(r9)
            if (r10 != 0) goto L4f
            r9.printStackTrace()
        L4f:
            return r1
    }

    protected native boolean appendNativeLog(java.lang.String r1, java.lang.String r2, java.lang.String r3);

    protected native boolean appendWholeNativeLog(java.lang.String r1);

    public void checkUploadRecordCrash() {
            r2 = this;
            com.tencent.bugly.proguard.ak r0 = r2.f
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler$1 r1 = new com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler$1
            r1.<init>(r2)
            r0.a(r1)
            return
    }

    public void disableCatchAnrTrace() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 <= r1) goto L9
            r0 = 1
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.c = r0
        L9:
            return
    }

    public void dumpAnrNativeStack() {
            r2 = this;
            r0 = 19
            java.lang.String r1 = "1"
            r2.a(r0, r1)
            return
    }

    public void enableCatchAnrTrace() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 <= r1) goto Lc
            int r0 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.c
            r0 = r0 | 2
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.c = r0
        Lc:
            return
    }

    public boolean filterSigabrtSysLog() {
            r2 = this;
            r0 = 998(0x3e6, float:1.398E-42)
            java.lang.String r1 = "true"
            boolean r0 = r2.a(r0, r1)
            return r0
    }

    @Override
    public java.lang.String getLogFromNative() {
            r3 = this;
            boolean r0 = r3.i
            r1 = 0
            if (r0 != 0) goto La
            boolean r0 = r3.j
            if (r0 != 0) goto La
            return r1
        La:
            boolean r0 = r3.j     // Catch: java.lang.Throwable -> L1e java.lang.UnsatisfiedLinkError -> L28
            if (r0 == 0) goto L13
            java.lang.String r0 = r3.getNativeLog()     // Catch: java.lang.Throwable -> L1e java.lang.UnsatisfiedLinkError -> L28
            return r0
        L13:
            java.lang.String r0 = "com.tencent.feedback.eup.jni.NativeExceptionUpload"
            java.lang.String r2 = "getNativeLog"
            java.lang.Object r0 = com.tencent.bugly.proguard.ap.a(r0, r2, r1, r1)     // Catch: java.lang.Throwable -> L1e java.lang.UnsatisfiedLinkError -> L28
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L1e java.lang.UnsatisfiedLinkError -> L28
            return r0
        L1e:
            r0 = move-exception
            boolean r2 = com.tencent.bugly.proguard.al.a(r0)
            if (r2 != 0) goto L28
            r0.printStackTrace()
        L28:
            return r1
    }

    public com.tencent.bugly.crashreport.crash.jni.NativeExceptionHandler getNativeExceptionHandler() {
            r1 = this;
            com.tencent.bugly.crashreport.crash.jni.NativeExceptionHandler r0 = r1.g
            return r0
    }

    protected native java.lang.String getNativeKeyValueList();

    protected native java.lang.String getNativeLog();

    public java.lang.String getRunningCpuAbi() {
            r2 = this;
            java.lang.String r0 = r2.getSoCpuAbi()     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "get so cpu abi failed，please upgrade bugly so version"
            com.tencent.bugly.proguard.al.d(r1, r0)
            java.lang.String r0 = ""
            return r0
    }

    public java.lang.String getSystemProperty(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.j
            if (r0 != 0) goto Lc
            boolean r0 = r1.i
            if (r0 == 0) goto L9
            goto Lc
        L9:
            java.lang.String r2 = "fail"
            return r2
        Lc:
            java.lang.String r2 = r1.getProperties(r2)
            return r2
    }

    public boolean isEnableCatchAnrTrace() {
            r2 = this;
            int r0 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.c
            r1 = 2
            r0 = r0 & r1
            if (r0 != r1) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public synchronized boolean isUserOpened() {
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

    public synchronized void onStrategyChanged(com.tencent.bugly.crashreport.common.strategy.StrategyBean r5) {
            r4 = this;
            monitor-enter(r4)
            r0 = 1
            r1 = 0
            if (r5 == 0) goto L1a
            boolean r2 = r5.f     // Catch: java.lang.Throwable -> L43
            boolean r3 = r4.k     // Catch: java.lang.Throwable -> L43
            if (r2 == r3) goto L1a
            java.lang.String r2 = "server native changed to %b"
            java.lang.Object[] r3 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L43
            boolean r5 = r5.f     // Catch: java.lang.Throwable -> L43
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r5)     // Catch: java.lang.Throwable -> L43
            r3[r1] = r5     // Catch: java.lang.Throwable -> L43
            com.tencent.bugly.proguard.al.d(r2, r3)     // Catch: java.lang.Throwable -> L43
        L1a:
            com.tencent.bugly.proguard.ac r5 = com.tencent.bugly.proguard.ac.a()     // Catch: java.lang.Throwable -> L43
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r5 = r5.c()     // Catch: java.lang.Throwable -> L43
            boolean r5 = r5.f     // Catch: java.lang.Throwable -> L43
            if (r5 == 0) goto L2c
            boolean r5 = r4.l     // Catch: java.lang.Throwable -> L43
            if (r5 == 0) goto L2c
            r5 = 1
            goto L2d
        L2c:
            r5 = 0
        L2d:
            boolean r2 = r4.k     // Catch: java.lang.Throwable -> L43
            if (r5 == r2) goto L41
            java.lang.String r2 = "native changed to %b"
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L43
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r5)     // Catch: java.lang.Throwable -> L43
            r0[r1] = r3     // Catch: java.lang.Throwable -> L43
            com.tencent.bugly.proguard.al.a(r2, r0)     // Catch: java.lang.Throwable -> L43
            r4.b(r5)     // Catch: java.lang.Throwable -> L43
        L41:
            monitor-exit(r4)
            return
        L43:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public boolean putKeyValueToNative(java.lang.String r8, java.lang.String r9) {
            r7 = this;
            boolean r0 = r7.i
            r1 = 0
            if (r0 != 0) goto La
            boolean r0 = r7.j
            if (r0 != 0) goto La
            return r1
        La:
            if (r8 == 0) goto L46
            if (r9 != 0) goto Lf
            goto L46
        Lf:
            boolean r0 = r7.j     // Catch: java.lang.Throwable -> L3c java.lang.UnsatisfiedLinkError -> L46
            if (r0 == 0) goto L18
            boolean r8 = r7.putNativeKeyValue(r8, r9)     // Catch: java.lang.Throwable -> L3c java.lang.UnsatisfiedLinkError -> L46
            return r8
        L18:
            java.lang.String r0 = "com.tencent.feedback.eup.jni.NativeExceptionUpload"
            java.lang.String r2 = "putNativeKeyValue"
            r3 = 2
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L3c java.lang.UnsatisfiedLinkError -> L46
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r4[r1] = r5     // Catch: java.lang.Throwable -> L3c java.lang.UnsatisfiedLinkError -> L46
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r6 = 1
            r4[r6] = r5     // Catch: java.lang.Throwable -> L3c java.lang.UnsatisfiedLinkError -> L46
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L3c java.lang.UnsatisfiedLinkError -> L46
            r3[r1] = r8     // Catch: java.lang.Throwable -> L3c java.lang.UnsatisfiedLinkError -> L46
            r3[r6] = r9     // Catch: java.lang.Throwable -> L3c java.lang.UnsatisfiedLinkError -> L46
            java.lang.Object r8 = com.tencent.bugly.proguard.ap.a(r0, r2, r4, r3)     // Catch: java.lang.Throwable -> L3c java.lang.UnsatisfiedLinkError -> L46
            java.lang.Boolean r8 = (java.lang.Boolean) r8     // Catch: java.lang.Throwable -> L3c java.lang.UnsatisfiedLinkError -> L46
            if (r8 == 0) goto L3b
            boolean r8 = r8.booleanValue()     // Catch: java.lang.Throwable -> L3c java.lang.UnsatisfiedLinkError -> L46
            return r8
        L3b:
            return r1
        L3c:
            r8 = move-exception
            boolean r9 = com.tencent.bugly.proguard.al.a(r8)
            if (r9 != 0) goto L46
            r8.printStackTrace()
        L46:
            return r1
    }

    protected native boolean putNativeKeyValue(java.lang.String r1, java.lang.String r2);

    protected native java.lang.String regist(java.lang.String r1, boolean r2, int r3);

    public void removeEmptyNativeRecordFiles() {
            r1 = this;
            java.lang.String r0 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.a
            com.tencent.bugly.proguard.be.c(r0)
            return
    }

    protected native java.lang.String removeNativeKeyValue(java.lang.String r1);

    public void resendSigquit() {
            r2 = this;
            r0 = 20
            java.lang.String r1 = ""
            r2.a(r0, r1)
            return
    }

    public boolean setNativeAppChannel(java.lang.String r2) {
            r1 = this;
            r0 = 12
            boolean r2 = r1.a(r0, r2)
            return r2
    }

    public boolean setNativeAppPackage(java.lang.String r2) {
            r1 = this;
            r0 = 13
            boolean r2 = r1.a(r0, r2)
            return r2
    }

    public boolean setNativeAppVersion(java.lang.String r2) {
            r1 = this;
            r0 = 10
            boolean r2 = r1.a(r0, r2)
            return r2
    }

    protected native void setNativeInfo(int r1, java.lang.String r2);

    @Override
    public boolean setNativeIsAppForeground(boolean r2) {
            r1 = this;
            if (r2 == 0) goto L5
            java.lang.String r2 = "true"
            goto L7
        L5:
            java.lang.String r2 = "false"
        L7:
            r0 = 14
            boolean r2 = r1.a(r0, r2)
            return r2
    }

    public boolean setNativeLaunchTime(long r2) {
            r1 = this;
            r0 = 15
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.NumberFormatException -> Lb
            boolean r2 = r1.a(r0, r2)     // Catch: java.lang.NumberFormatException -> Lb
            return r2
        Lb:
            r2 = move-exception
            boolean r3 = com.tencent.bugly.proguard.al.a(r2)
            if (r3 != 0) goto L15
            r2.printStackTrace()
        L15:
            r2 = 0
            return r2
    }

    public boolean setNativeUserId(java.lang.String r2) {
            r1 = this;
            r0 = 11
            boolean r2 = r1.a(r0, r2)
            return r2
    }

    public synchronized void setUserOpened(boolean r5) {
            r4 = this;
            monitor-enter(r4)
            r4.c(r5)     // Catch: java.lang.Throwable -> L33
            boolean r5 = r4.isUserOpened()     // Catch: java.lang.Throwable -> L33
            com.tencent.bugly.proguard.ac r0 = com.tencent.bugly.proguard.ac.a()     // Catch: java.lang.Throwable -> L33
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L1d
            if (r5 == 0) goto L1c
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r5 = r0.c()     // Catch: java.lang.Throwable -> L33
            boolean r5 = r5.f     // Catch: java.lang.Throwable -> L33
            if (r5 == 0) goto L1c
            r5 = 1
            goto L1d
        L1c:
            r5 = 0
        L1d:
            boolean r0 = r4.k     // Catch: java.lang.Throwable -> L33
            if (r5 == r0) goto L31
            java.lang.String r0 = "native changed to %b"
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L33
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r5)     // Catch: java.lang.Throwable -> L33
            r1[r2] = r3     // Catch: java.lang.Throwable -> L33
            com.tencent.bugly.proguard.al.a(r0, r1)     // Catch: java.lang.Throwable -> L33
            r4.b(r5)     // Catch: java.lang.Throwable -> L33
        L31:
            monitor-exit(r4)
            return
        L33:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public synchronized void startNativeMonitor() {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = r4.j     // Catch: java.lang.Throwable -> L95
            if (r0 != 0) goto L8e
            boolean r0 = r4.i     // Catch: java.lang.Throwable -> L95
            if (r0 == 0) goto Lb
            goto L8e
        Lb:
            com.tencent.bugly.proguard.aa r0 = r4.e     // Catch: java.lang.Throwable -> L95
            java.lang.String r0 = r0.t     // Catch: java.lang.Throwable -> L95
            boolean r0 = com.tencent.bugly.proguard.ap.b(r0)     // Catch: java.lang.Throwable -> L95
            r1 = 0
            if (r0 != 0) goto L18
            r0 = 1
            goto L19
        L18:
            r0 = 0
        L19:
            boolean r2 = com.tencent.bugly.proguard.at.b     // Catch: java.lang.Throwable -> L95
            if (r2 == 0) goto L3a
            java.lang.String r2 = "Bugly_Native"
            java.lang.String r3 = "NativeRQD"
            if (r0 == 0) goto L27
            com.tencent.bugly.proguard.aa r2 = r4.e     // Catch: java.lang.Throwable -> L95
            java.lang.String r2 = r2.t     // Catch: java.lang.Throwable -> L95
        L27:
            boolean r2 = a(r2, r0)     // Catch: java.lang.Throwable -> L95
            r4.j = r2     // Catch: java.lang.Throwable -> L95
            boolean r2 = r4.j     // Catch: java.lang.Throwable -> L95
            if (r2 != 0) goto L4f
            if (r0 != 0) goto L4f
            boolean r0 = a(r3, r1)     // Catch: java.lang.Throwable -> L95
            r4.i = r0     // Catch: java.lang.Throwable -> L95
            goto L4f
        L3a:
            java.lang.String r1 = "Bugly_Native"
            com.tencent.bugly.proguard.aa r2 = r4.e     // Catch: java.lang.Throwable -> L95
            java.lang.String r2 = r2.t     // Catch: java.lang.Throwable -> L95
            if (r0 != 0) goto L48
            com.tencent.bugly.proguard.aa r2 = r4.e     // Catch: java.lang.Throwable -> L95
            r2.getClass()     // Catch: java.lang.Throwable -> L95
            goto L49
        L48:
            r1 = r2
        L49:
            boolean r0 = a(r1, r0)     // Catch: java.lang.Throwable -> L95
            r4.j = r0     // Catch: java.lang.Throwable -> L95
        L4f:
            boolean r0 = r4.j     // Catch: java.lang.Throwable -> L95
            if (r0 != 0) goto L59
            boolean r0 = r4.i     // Catch: java.lang.Throwable -> L95
            if (r0 != 0) goto L59
            monitor-exit(r4)
            return
        L59:
            boolean r0 = r4.h     // Catch: java.lang.Throwable -> L95
            r4.a(r0)     // Catch: java.lang.Throwable -> L95
            com.tencent.bugly.proguard.aa r0 = r4.e     // Catch: java.lang.Throwable -> L95
            java.lang.String r0 = r0.o     // Catch: java.lang.Throwable -> L95
            r4.setNativeAppVersion(r0)     // Catch: java.lang.Throwable -> L95
            com.tencent.bugly.proguard.aa r0 = r4.e     // Catch: java.lang.Throwable -> L95
            java.lang.String r0 = r0.s     // Catch: java.lang.Throwable -> L95
            r4.setNativeAppChannel(r0)     // Catch: java.lang.Throwable -> L95
            com.tencent.bugly.proguard.aa r0 = r4.e     // Catch: java.lang.Throwable -> L95
            java.lang.String r0 = r0.c     // Catch: java.lang.Throwable -> L95
            r4.setNativeAppPackage(r0)     // Catch: java.lang.Throwable -> L95
            com.tencent.bugly.proguard.aa r0 = r4.e     // Catch: java.lang.Throwable -> L95
            java.lang.String r0 = r0.f()     // Catch: java.lang.Throwable -> L95
            r4.setNativeUserId(r0)     // Catch: java.lang.Throwable -> L95
            com.tencent.bugly.proguard.aa r0 = r4.e     // Catch: java.lang.Throwable -> L95
            boolean r0 = r0.a()     // Catch: java.lang.Throwable -> L95
            r4.setNativeIsAppForeground(r0)     // Catch: java.lang.Throwable -> L95
            com.tencent.bugly.proguard.aa r0 = r4.e     // Catch: java.lang.Throwable -> L95
            long r0 = r0.a     // Catch: java.lang.Throwable -> L95
            r4.setNativeLaunchTime(r0)     // Catch: java.lang.Throwable -> L95
            monitor-exit(r4)
            return
        L8e:
            boolean r0 = r4.h     // Catch: java.lang.Throwable -> L95
            r4.a(r0)     // Catch: java.lang.Throwable -> L95
            monitor-exit(r4)
            return
        L95:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    protected native void testCrash();

    public void testNativeCrash() {
            r2 = this;
            boolean r0 = r2.j
            if (r0 != 0) goto Ld
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "[Native] Bugly SO file has not been load."
            com.tencent.bugly.proguard.al.d(r1, r0)
            return
        Ld:
            r2.testCrash()
            return
    }

    public void testNativeCrash(boolean r2, boolean r3, boolean r4) {
            r1 = this;
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0 = 16
            r1.a(r0, r2)
            java.lang.String r2 = java.lang.String.valueOf(r3)
            r3 = 17
            r1.a(r3, r2)
            java.lang.String r2 = java.lang.String.valueOf(r4)
            r3 = 18
            r1.a(r3, r2)
            r1.testNativeCrash()
            return
    }

    public void unBlockSigquit(boolean r2) {
            r1 = this;
            r0 = 21
            if (r2 == 0) goto La
            java.lang.String r2 = "true"
            r1.a(r0, r2)
            return
        La:
            java.lang.String r2 = "false"
            r1.a(r0, r2)
            return
    }

    protected native java.lang.String unregist();
}

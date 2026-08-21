package com.kwad.sdk.crash.utils;

public final class g {
    private static final java.io.File aBS = null;
    private static final java.io.File aBT = null;


    static {
            java.io.File r0 = new java.io.File
            java.lang.String r1 = "/proc/self/fd"
            r0.<init>(r1)
            com.kwad.sdk.crash.utils.g.aBS = r0
            java.io.File r0 = new java.io.File
            java.lang.String r1 = "/proc/self/task"
            r0.<init>(r1)
            com.kwad.sdk.crash.utils.g.aBT = r0
            return
    }

    public static void E(java.io.File r21) {
            r0 = 21
            boolean r0 = com.kwad.sdk.utils.SystemUtil.de(r0)
            java.lang.String r2 = "-f"
            r3 = 10
            java.lang.String r4 = "-d"
            r5 = 9
            java.lang.String r6 = "events"
            r7 = 8
            r8 = 7
            java.lang.String r9 = "system"
            r10 = 6
            r11 = 5
            java.lang.String r12 = "main"
            r13 = 4
            r14 = 3
            java.lang.String r15 = "threadtime"
            r16 = 2
            java.lang.String r17 = "-v"
            r18 = 1
            java.lang.String r19 = "logcat"
            r1 = 0
            java.lang.String r20 = "-b"
            if (r0 == 0) goto L57
            r0 = 14
            java.lang.String[] r0 = new java.lang.String[r0]
            r0[r1] = r19
            r0[r18] = r17
            r0[r16] = r15
            r0[r14] = r20
            r0[r13] = r12
            r0[r11] = r20
            r0[r10] = r9
            r0[r8] = r20
            r0[r7] = r6
            r0[r5] = r20
            java.lang.String r5 = "crash"
            r0[r3] = r5
            r3 = 11
            r0[r3] = r4
            r3 = 12
            r0[r3] = r2
            r2 = 13
            java.lang.String r3 = r21.getPath()
            r0[r2] = r3
            goto L79
        L57:
            r0 = 12
            java.lang.String[] r0 = new java.lang.String[r0]
            r0[r1] = r19
            r0[r18] = r17
            r0[r16] = r15
            r0[r14] = r20
            r0[r13] = r12
            r0[r11] = r20
            r0[r10] = r9
            r0[r8] = r20
            r0[r7] = r6
            r0[r5] = r4
            r0[r3] = r2
            java.lang.String r2 = r21.getPath()
            r3 = 11
            r0[r3] = r2
        L79:
            com.kwad.sdk.crash.utils.d.a(r0, r1)     // Catch: java.io.IOException -> L7d
            return
        L7d:
            r0 = move-exception
            r1 = r0
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)
            return
    }

    public static void F(java.io.File r0) {
            if (r0 != 0) goto L3
            return
        L3:
            com.kwad.sdk.utils.q.T(r0)     // Catch: java.lang.Exception -> L7
            return
        L7:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            return
    }

    private static int Fn() {
            java.io.File r0 = com.kwad.sdk.crash.utils.g.aBS
            com.kwad.sdk.utils.ao.checkNotNull(r0)
            java.io.File r0 = com.kwad.sdk.crash.utils.g.aBS
            boolean r0 = r0.exists()
            if (r0 == 0) goto L1f
            java.io.File r0 = com.kwad.sdk.crash.utils.g.aBS
            boolean r0 = r0.isDirectory()
            if (r0 == 0) goto L1f
            java.io.File r0 = com.kwad.sdk.crash.utils.g.aBS
            java.io.File[] r0 = r0.listFiles()
            if (r0 == 0) goto L1f
            int r0 = r0.length
            return r0
        L1f:
            r0 = 0
            return r0
    }

    public static void G(java.io.File r4) {
            com.kwad.sdk.utils.q.P(r4)     // Catch: java.io.IOException -> L73
            r0 = 0
            java.io.BufferedWriter r1 = new java.io.BufferedWriter     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f java.io.FileNotFoundException -> L67
            java.io.FileWriter r2 = new java.io.FileWriter     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f java.io.FileNotFoundException -> L67
            r3 = 1
            r2.<init>(r4, r3)     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f java.io.FileNotFoundException -> L67
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L5d java.io.IOException -> L5f java.io.FileNotFoundException -> L67
            java.util.Map r4 = java.lang.Thread.getAllStackTraces()     // Catch: java.lang.Throwable -> L54 java.io.IOException -> L57 java.io.FileNotFoundException -> L5a
            java.util.Set r4 = r4.entrySet()     // Catch: java.lang.Throwable -> L54 java.io.IOException -> L57 java.io.FileNotFoundException -> L5a
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L54 java.io.IOException -> L57 java.io.FileNotFoundException -> L5a
        L1b:
            boolean r0 = r4.hasNext()     // Catch: java.lang.Throwable -> L54 java.io.IOException -> L57 java.io.FileNotFoundException -> L5a
            if (r0 == 0) goto L50
            java.lang.Object r0 = r4.next()     // Catch: java.lang.Throwable -> L54 java.io.IOException -> L57 java.io.FileNotFoundException -> L5a
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0     // Catch: java.lang.Throwable -> L54 java.io.IOException -> L57 java.io.FileNotFoundException -> L5a
            java.lang.Object r2 = r0.getValue()     // Catch: java.lang.Throwable -> L54 java.io.IOException -> L57 java.io.FileNotFoundException -> L5a
            java.lang.StackTraceElement[] r2 = (java.lang.StackTraceElement[]) r2     // Catch: java.lang.Throwable -> L54 java.io.IOException -> L57 java.io.FileNotFoundException -> L5a
            java.lang.String r2 = b(r2)     // Catch: java.lang.Throwable -> L54 java.io.IOException -> L57 java.io.FileNotFoundException -> L5a
            boolean r3 = r2.isEmpty()     // Catch: java.lang.Throwable -> L54 java.io.IOException -> L57 java.io.FileNotFoundException -> L5a
            if (r3 == 0) goto L39
            java.lang.String r2 = "(no managed stack frames)\n"
        L39:
            java.lang.Object r0 = r0.getKey()     // Catch: java.lang.Throwable -> L54 java.io.IOException -> L57 java.io.FileNotFoundException -> L5a
            java.lang.Thread r0 = (java.lang.Thread) r0     // Catch: java.lang.Throwable -> L54 java.io.IOException -> L57 java.io.FileNotFoundException -> L5a
            java.lang.String r0 = r0.getName()     // Catch: java.lang.Throwable -> L54 java.io.IOException -> L57 java.io.FileNotFoundException -> L5a
            r1.write(r0)     // Catch: java.lang.Throwable -> L54 java.io.IOException -> L57 java.io.FileNotFoundException -> L5a
            r1.newLine()     // Catch: java.lang.Throwable -> L54 java.io.IOException -> L57 java.io.FileNotFoundException -> L5a
            r1.write(r2)     // Catch: java.lang.Throwable -> L54 java.io.IOException -> L57 java.io.FileNotFoundException -> L5a
            r1.newLine()     // Catch: java.lang.Throwable -> L54 java.io.IOException -> L57 java.io.FileNotFoundException -> L5a
            goto L1b
        L50:
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return
        L54:
            r4 = move-exception
            r0 = r1
            goto L6f
        L57:
            r4 = move-exception
            r0 = r1
            goto L60
        L5a:
            r4 = move-exception
            r0 = r1
            goto L68
        L5d:
            r4 = move-exception
            goto L6f
        L5f:
            r4 = move-exception
        L60:
            com.kwad.sdk.core.e.c.printStackTraceOnly(r4)     // Catch: java.lang.Throwable -> L5d
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            return
        L67:
            r4 = move-exception
        L68:
            com.kwad.sdk.core.e.c.printStackTraceOnly(r4)     // Catch: java.lang.Throwable -> L5d
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            return
        L6f:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            throw r4
        L73:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r4)
            return
    }

    public static void H(java.io.File r14) {
            android.os.Debug$MemoryInfo r0 = new android.os.Debug$MemoryInfo     // Catch: java.lang.Exception -> Ld7
            r0.<init>()     // Catch: java.lang.Exception -> Ld7
            android.os.Debug.getMemoryInfo(r0)     // Catch: java.lang.Exception -> Ld7
            java.lang.String r1 = "android.app.ActivityThread"
            java.lang.String r2 = "currentActivityThread"
            r3 = 0
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> Ld7
            java.lang.Object r1 = com.kwad.sdk.utils.s.a(r1, r2, r4)     // Catch: java.lang.Exception -> Ld7
            java.lang.String r2 = "mAppThread"
            java.lang.Object r1 = com.kwad.sdk.utils.s.f(r1, r2)     // Catch: java.lang.Exception -> Ld7
            r2 = 1006632960(0x3c000000, float:0.0078125)
            android.os.ParcelFileDescriptor r2 = android.os.ParcelFileDescriptor.open(r14, r2)     // Catch: java.lang.Exception -> Ld7
            r4 = 26
            boolean r5 = com.kwad.sdk.utils.SystemUtil.de(r4)     // Catch: java.lang.Exception -> Ld7
            if (r5 != 0) goto L2d
            android.os.ParcelFileDescriptor r2 = (android.os.ParcelFileDescriptor) r2     // Catch: java.lang.Exception -> Ld7
            java.io.FileDescriptor r2 = r2.getFileDescriptor()     // Catch: java.lang.Exception -> Ld7
        L2d:
            r5 = 24
            boolean r5 = com.kwad.sdk.utils.SystemUtil.de(r5)     // Catch: java.lang.Exception -> Ld7
            r6 = 7
            r7 = 5
            r8 = 4
            r9 = 3
            r10 = 6
            java.lang.String r11 = "dumpMemInfo"
            r12 = 2
            r13 = 1
            if (r5 == 0) goto L62
            r5 = 8
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> Ld7
            r5[r3] = r2     // Catch: java.lang.Exception -> Ld7
            r5[r13] = r0     // Catch: java.lang.Exception -> Ld7
            java.lang.Boolean r0 = java.lang.Boolean.FALSE     // Catch: java.lang.Exception -> Ld7
            r5[r12] = r0     // Catch: java.lang.Exception -> Ld7
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Exception -> Ld7
            r5[r9] = r0     // Catch: java.lang.Exception -> Ld7
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Exception -> Ld7
            r5[r8] = r0     // Catch: java.lang.Exception -> Ld7
            java.lang.Boolean r0 = java.lang.Boolean.FALSE     // Catch: java.lang.Exception -> Ld7
            r5[r7] = r0     // Catch: java.lang.Exception -> Ld7
            java.lang.Boolean r0 = java.lang.Boolean.FALSE     // Catch: java.lang.Exception -> Ld7
            r5[r10] = r0     // Catch: java.lang.Exception -> Ld7
            java.lang.String[] r0 = new java.lang.String[r3]     // Catch: java.lang.Exception -> Ld7
            r5[r6] = r0     // Catch: java.lang.Exception -> Ld7
            com.kwad.sdk.utils.s.f(r1, r11, r5)     // Catch: java.lang.Exception -> Ld7
            goto La9
        L62:
            r5 = 23
            boolean r5 = com.kwad.sdk.utils.SystemUtil.de(r5)     // Catch: java.lang.Exception -> Ld7
            if (r5 == 0) goto L88
            java.lang.Object[] r5 = new java.lang.Object[r6]     // Catch: java.lang.Exception -> Ld7
            r5[r3] = r2     // Catch: java.lang.Exception -> Ld7
            r5[r13] = r0     // Catch: java.lang.Exception -> Ld7
            java.lang.Boolean r0 = java.lang.Boolean.FALSE     // Catch: java.lang.Exception -> Ld7
            r5[r12] = r0     // Catch: java.lang.Exception -> Ld7
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Exception -> Ld7
            r5[r9] = r0     // Catch: java.lang.Exception -> Ld7
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Exception -> Ld7
            r5[r8] = r0     // Catch: java.lang.Exception -> Ld7
            java.lang.Boolean r0 = java.lang.Boolean.FALSE     // Catch: java.lang.Exception -> Ld7
            r5[r7] = r0     // Catch: java.lang.Exception -> Ld7
            java.lang.String[] r0 = new java.lang.String[r3]     // Catch: java.lang.Exception -> Ld7
            r5[r10] = r0     // Catch: java.lang.Exception -> Ld7
            com.kwad.sdk.utils.s.f(r1, r11, r5)     // Catch: java.lang.Exception -> Ld7
            goto La9
        L88:
            r5 = 19
            boolean r5 = com.kwad.sdk.utils.SystemUtil.de(r5)     // Catch: java.lang.Exception -> Ld7
            if (r5 == 0) goto La9
            java.lang.Object[] r5 = new java.lang.Object[r10]     // Catch: java.lang.Exception -> Ld7
            r5[r3] = r2     // Catch: java.lang.Exception -> Ld7
            r5[r13] = r0     // Catch: java.lang.Exception -> Ld7
            java.lang.Boolean r0 = java.lang.Boolean.FALSE     // Catch: java.lang.Exception -> Ld7
            r5[r12] = r0     // Catch: java.lang.Exception -> Ld7
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Exception -> Ld7
            r5[r9] = r0     // Catch: java.lang.Exception -> Ld7
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Exception -> Ld7
            r5[r8] = r0     // Catch: java.lang.Exception -> Ld7
            java.lang.String[] r0 = new java.lang.String[r3]     // Catch: java.lang.Exception -> Ld7
            r5[r7] = r0     // Catch: java.lang.Exception -> Ld7
            com.kwad.sdk.utils.s.f(r1, r11, r5)     // Catch: java.lang.Exception -> Ld7
        La9:
            r0 = 973078528(0x3a000000, float:4.8828125E-4)
            android.os.ParcelFileDescriptor r14 = android.os.ParcelFileDescriptor.open(r14, r0)     // Catch: java.lang.Exception -> Ld7
            boolean r0 = com.kwad.sdk.utils.SystemUtil.de(r4)     // Catch: java.lang.Exception -> Ld7
            if (r0 != 0) goto Lbb
            android.os.ParcelFileDescriptor r14 = (android.os.ParcelFileDescriptor) r14     // Catch: java.lang.Exception -> Ld7
            java.io.FileDescriptor r14 = r14.getFileDescriptor()     // Catch: java.lang.Exception -> Ld7
        Lbb:
            java.lang.String r0 = "dumpGfxInfo"
            java.lang.Object[] r2 = new java.lang.Object[r12]     // Catch: java.lang.Exception -> Ld7
            r2[r3] = r14     // Catch: java.lang.Exception -> Ld7
            java.lang.String[] r14 = new java.lang.String[r13]     // Catch: java.lang.Exception -> Ld7
            com.kwad.sdk.crash.e r4 = com.kwad.sdk.crash.e.EC()     // Catch: java.lang.Exception -> Ld7
            android.content.Context r4 = r4.getContext()     // Catch: java.lang.Exception -> Ld7
            java.lang.String r4 = com.kwad.sdk.utils.SystemUtil.getProcessName(r4)     // Catch: java.lang.Exception -> Ld7
            r14[r3] = r4     // Catch: java.lang.Exception -> Ld7
            r2[r13] = r14     // Catch: java.lang.Exception -> Ld7
            com.kwad.sdk.utils.s.f(r1, r0, r2)     // Catch: java.lang.Exception -> Ld7
            return
        Ld7:
            r14 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r14)
            return
    }

    private static java.lang.String a(java.lang.StackTraceElement[] r5, int r6) {
            if (r5 != 0) goto L5
            java.lang.String r5 = ""
            return r5
        L5:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            int r0 = r5.length
            r1 = 0
            r2 = r1
        Ld:
            if (r2 >= r0) goto L21
            r3 = r5[r2]
            java.lang.String r4 = "at "
            r6.append(r4)
            r6.append(r3)
            r3 = 10
            r6.append(r3)
            int r2 = r2 + 1
            goto Ld
        L21:
            java.lang.String r5 = r6.substring(r1)
            return r5
    }

    public static void a(com.kwad.sdk.crash.model.message.ExceptionMessage r0, int r1) {
            com.kwad.sdk.crash.e r1 = com.kwad.sdk.crash.e.EC()
            com.kwad.sdk.crash.h r1 = r1.EI()
            if (r1 != 0) goto L12
            java.lang.String r0 = "tag"
            java.lang.String r1 = "getter is null!"
            com.kwad.sdk.core.e.c.d(r0, r1)
            return
        L12:
            com.kwad.sdk.crash.model.message.a r1 = r1.mJ()
            java.lang.String r1 = r1.toString()
            r0.mCustomMsg = r1
            return
    }

    private static void a(com.kwad.sdk.crash.model.message.ExceptionMessage r3, android.content.Context r4) {
            boolean r0 = r3 instanceof com.kwad.sdk.crash.model.message.JavaExceptionMessage
            if (r0 == 0) goto L1e
            java.lang.String r0 = r3.mThreadName
            java.lang.String r1 = "Unknown"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L18
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            java.lang.String r0 = r0.getName()
            r3.mThreadName = r0
        L18:
            int r0 = android.os.Process.myTid()
            r3.mTid = r0
        L1e:
            if (r4 == 0) goto L2c
            java.lang.String r0 = com.kwad.sdk.utils.SystemUtil.getProcessName(r4)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L2c
            r3.mProcessName = r0
        L2c:
            int r0 = android.os.Process.myPid()
            r3.mPid = r0
            long r0 = java.lang.System.currentTimeMillis()
            r3.mCurrentTimeStamp = r0
            com.kwad.sdk.crash.e r0 = com.kwad.sdk.crash.e.EC()
            long r0 = r0.EJ()
            r3.mUsageTimeMills = r0
            boolean r0 = com.kwad.sdk.utils.AbiUtil.isArm64(r4)
            if (r0 == 0) goto L4b
            java.lang.String r0 = "arm64"
            goto L4d
        L4b:
            java.lang.String r0 = "arm"
        L4d:
            r3.mAbi = r0
            java.lang.String r0 = r3.mVersionCode
            com.kwad.sdk.crash.e r1 = com.kwad.sdk.crash.e.EC()
            int r1 = r1.EG()
            java.lang.String r2 = "1.0"
            java.lang.String r1 = com.kwad.sdk.crash.model.message.ExceptionMessage.getSdkCrashVersionName(r2, r1)
            boolean r0 = android.text.TextUtils.equals(r0, r1)
            r3.mVersionConflict = r0
            java.lang.String r0 = by(r4)
            r3.mBuildConfigInfo = r0
            e(r3)
            b(r3, r4)
            java.lang.String r4 = bx(r4)
            r3.mTaskId = r4
            return
    }

    private static void a(com.kwad.sdk.crash.model.message.ExceptionMessage r6, com.kwad.sdk.crash.model.message.DiskInfo r7) {
            java.io.File r0 = android.os.Environment.getDataDirectory()     // Catch: java.lang.Exception -> L69
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Exception -> L69
            long r1 = com.kwad.sdk.crash.utils.h.getTotalBytes(r0)     // Catch: java.lang.Exception -> L69
            double r1 = ak(r1)     // Catch: java.lang.Exception -> L69
            r7.mDataTotalGB = r1     // Catch: java.lang.Exception -> L69
            java.lang.Class<com.kwad.sdk.service.a.f> r1 = com.kwad.sdk.service.a.f.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)     // Catch: java.lang.Exception -> L69
            com.kwad.sdk.service.a.f r1 = (com.kwad.sdk.service.a.f) r1     // Catch: java.lang.Exception -> L69
            r2 = 1024(0x400, double:5.06E-321)
            boolean r1 = r1.R(r2)     // Catch: java.lang.Exception -> L69
            if (r1 != 0) goto L2c
            long r0 = com.kwad.sdk.crash.utils.h.getAvailableBytes(r0)     // Catch: java.lang.Exception -> L69
            double r0 = ak(r0)     // Catch: java.lang.Exception -> L69
            r7.mDataAvailableGB = r0     // Catch: java.lang.Exception -> L69
        L2c:
            java.lang.String r0 = "mounted"
            java.lang.String r1 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Exception -> L69
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Exception -> L69
            if (r0 == 0) goto L6d
            java.io.File r0 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Exception -> L69
            if (r0 == 0) goto L6d
            java.lang.String r1 = r0.getPath()     // Catch: java.lang.Exception -> L69
            long r4 = com.kwad.sdk.crash.utils.h.getTotalBytes(r1)     // Catch: java.lang.Exception -> L69
            double r4 = ak(r4)     // Catch: java.lang.Exception -> L69
            r7.mExternalStorageTotalGB = r4     // Catch: java.lang.Exception -> L69
            java.lang.Class<com.kwad.sdk.service.a.f> r1 = com.kwad.sdk.service.a.f.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)     // Catch: java.lang.Exception -> L69
            com.kwad.sdk.service.a.f r1 = (com.kwad.sdk.service.a.f) r1     // Catch: java.lang.Exception -> L69
            boolean r1 = r1.R(r2)     // Catch: java.lang.Exception -> L69
            if (r1 != 0) goto L6d
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Exception -> L69
            long r0 = com.kwad.sdk.crash.utils.h.getAvailableBytes(r0)     // Catch: java.lang.Exception -> L69
            double r0 = ak(r0)     // Catch: java.lang.Exception -> L69
            r7.mExternalStorageAvailableGB = r0     // Catch: java.lang.Exception -> L69
            goto L6d
        L69:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        L6d:
            org.json.JSONObject r7 = r7.toJson()
            java.lang.String r7 = r7.toString()
            r6.mDiskInfo = r7
            return
    }

    private static void a(com.kwad.sdk.crash.model.message.ExceptionMessage r4, com.kwad.sdk.crash.model.message.MemoryInfo r5) {
            int r0 = r5.mPssMB
            int r0 = r0 * 2
            int r1 = r5.mTotalMB
            if (r0 > r1) goto L26
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            boolean r0 = com.kwad.sdk.utils.AbiUtil.isArm64(r0)
            if (r0 != 0) goto L2c
            int r5 = r5.mVssMB
            double r0 = (double) r5
            r2 = 4660324894402989261(0x40accccccccccccd, double:3686.4)
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 <= 0) goto L2c
        L26:
            java.lang.String r5 = r4.getTypeHeapOOM()
            r4.mCrashType = r5
        L2c:
            return
    }

    private static void a(com.kwad.sdk.crash.model.message.ExceptionMessage r8, com.kwad.sdk.crash.model.message.MemoryInfo r9, android.content.Context r10) {
            com.kwad.sdk.utils.SystemUtil$a r0 = com.kwad.sdk.utils.SystemUtil.JF()
            java.lang.Runtime r1 = java.lang.Runtime.getRuntime()
            long r1 = r1.totalMemory()
            java.lang.Runtime r3 = java.lang.Runtime.getRuntime()
            long r3 = r3.freeMemory()
            long r1 = r1 - r3
            r0.aJK = r1
            long r1 = com.kwad.sdk.utils.SystemUtil.JE()
            r0.aJG = r1
            long r1 = android.os.Debug.getPss()
            r0.aJJ = r1
            long r1 = r0.aJG
            r3 = 1048576(0x100000, double:5.180654E-318)
            long r1 = r1 / r3
            int r1 = (int) r1
            r9.mTotalMB = r1
            double r1 = com.kwad.sdk.crash.d.azO
            r5 = 4697254411347427328(0x4130000000000000, double:1048576.0)
            double r1 = r1 / r5
            int r1 = (int) r1
            r9.mJavaHeapLimitMB = r1
            long r1 = r0.aJK
            long r1 = r1 / r3
            int r1 = (int) r1
            r9.mJavaHeapMB = r1
            long r1 = r0.aJH
            r5 = 1024(0x400, double:5.06E-321)
            long r1 = r1 / r5
            int r1 = (int) r1
            r9.mVssMB = r1
            long r1 = r0.aJI
            long r1 = r1 / r5
            int r1 = (int) r1
            r9.mRssMB = r1
            long r1 = r0.aJJ
            long r1 = r1 / r5
            int r1 = (int) r1
            r9.mPssMB = r1
            int r1 = r0.mThreadsCount
            r9.mThreadsCount = r1
            int r1 = Fn()
            r9.mFdCount = r1
            if (r10 == 0) goto L62
            long r1 = com.kwad.sdk.utils.SystemUtil.cY(r10)
            long r1 = r1 / r3
            int r10 = (int) r1
            r9.mAvailableMB = r10
        L62:
            java.lang.String r10 = "False"
            r8.mFdOverflow = r10
            int r1 = r9.mFdCount
            r2 = 800(0x320, float:1.121E-42)
            java.lang.String r3 = "True"
            if (r1 <= r2) goto Lae
            java.lang.String r1 = r8.getTypeFdOOM()
            r8.mCrashType = r1
            r8.mFdOverflow = r3
            java.io.File r1 = com.kwad.sdk.crash.utils.g.aBS
            java.io.File[] r1 = r1.listFiles()
            if (r1 == 0) goto Lae
            int r2 = r1.length
            if (r2 <= 0) goto Lae
            int r2 = r1.length
            r4 = 0
        L83:
            if (r4 >= r2) goto La9
            r5 = r1[r4]
            int r6 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> La2
            r7 = 21
            if (r6 < r7) goto L9b
            java.util.List<java.lang.String> r6 = r9.mFds     // Catch: java.lang.Exception -> La2
            java.lang.String r5 = r5.getPath()     // Catch: java.lang.Exception -> La2
            java.lang.String r5 = android.system.Os.readlink(r5)     // Catch: java.lang.Exception -> La2
        L97:
            r6.add(r5)     // Catch: java.lang.Exception -> La2
            goto La6
        L9b:
            java.util.List<java.lang.String> r6 = r9.mFds     // Catch: java.lang.Exception -> La2
            java.lang.String r5 = r5.getCanonicalPath()     // Catch: java.lang.Exception -> La2
            goto L97
        La2:
            r5 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r5)
        La6:
            int r4 = r4 + 1
            goto L83
        La9:
            java.util.List<java.lang.String> r1 = r9.mFds
            java.util.Collections.sort(r1)
        Lae:
            r8.mThreadOverflow = r10
            int r10 = r0.mThreadsCount
            r0 = 400(0x190, float:5.6E-43)
            if (r10 <= r0) goto Lcb
            java.lang.String r10 = r8.getTypeThreadOOM()
            r8.mCrashType = r10
            r8.mThreadOverflow = r3
            a(r9)
            java.util.List<com.kwad.sdk.crash.model.message.ThreadInfo> r10 = r9.mAllThreads
            com.kwad.sdk.crash.utils.g$1 r0 = new com.kwad.sdk.crash.utils.g$1
            r0.<init>()
            java.util.Collections.sort(r10, r0)
        Lcb:
            org.json.JSONObject r9 = r9.toJson()
            java.lang.String r9 = r9.toString()
            r8.mMemoryInfo = r9
            return
    }

    private static void a(com.kwad.sdk.crash.model.message.MemoryInfo r7) {
            java.io.File r0 = com.kwad.sdk.crash.utils.g.aBT
            java.io.File[] r0 = r0.listFiles()
            if (r0 != 0) goto L9
            return
        L9:
            int r1 = r0.length
            r2 = 0
        Lb:
            if (r2 >= r1) goto L40
            r3 = r0[r2]
            com.kwad.sdk.crash.model.message.ThreadInfo r4 = new com.kwad.sdk.crash.model.message.ThreadInfo
            r4.<init>()
            java.io.File r5 = new java.io.File     // Catch: java.io.IOException -> L22
            java.lang.String r6 = "comm"
            r5.<init>(r3, r6)     // Catch: java.io.IOException -> L22
            java.lang.String r3 = com.kwad.sdk.crash.utils.h.I(r5)     // Catch: java.io.IOException -> L22
            r4.mName = r3     // Catch: java.io.IOException -> L22
            goto L26
        L22:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
        L26:
            java.lang.String r3 = r4.mName
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L3d
            java.lang.String r3 = r4.mName
            java.lang.String r5 = "\n"
            java.lang.String r3 = ag(r3, r5)
            r4.mName = r3
            java.util.List<com.kwad.sdk.crash.model.message.ThreadInfo> r3 = r7.mAllThreads
            r3.add(r4)
        L3d:
            int r2 = r2 + 1
            goto Lb
        L40:
            return
    }

    public static void a(com.kwad.sdk.crash.report.e r2, java.lang.String r3, java.io.File r4) {
            com.kwad.sdk.utils.q.P(r4)     // Catch: java.io.IOException -> L40
            r3 = 0
            java.io.BufferedReader r0 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L2a java.io.IOException -> L2c java.io.FileNotFoundException -> L34
            java.io.FileReader r1 = new java.io.FileReader     // Catch: java.lang.Throwable -> L2a java.io.IOException -> L2c java.io.FileNotFoundException -> L34
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L2a java.io.IOException -> L2c java.io.FileNotFoundException -> L34
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L2a java.io.IOException -> L2c java.io.FileNotFoundException -> L34
            if (r2 == 0) goto L26
        L10:
            java.lang.String r2 = r0.readLine()     // Catch: java.lang.Throwable -> L1d java.io.IOException -> L20 java.io.FileNotFoundException -> L23
            if (r2 == 0) goto L26
            boolean r2 = r2.isEmpty()     // Catch: java.lang.Throwable -> L1d java.io.IOException -> L20 java.io.FileNotFoundException -> L23
            if (r2 == 0) goto L10
            goto L26
        L1d:
            r2 = move-exception
            r3 = r0
            goto L3c
        L20:
            r2 = move-exception
            r3 = r0
            goto L2d
        L23:
            r2 = move-exception
            r3 = r0
            goto L35
        L26:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            return
        L2a:
            r2 = move-exception
            goto L3c
        L2c:
            r2 = move-exception
        L2d:
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)     // Catch: java.lang.Throwable -> L2a
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            return
        L34:
            r2 = move-exception
        L35:
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)     // Catch: java.lang.Throwable -> L2a
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            return
        L3c:
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            throw r2
        L40:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
            return
    }

    public static void a(java.io.File r2, java.lang.CharSequence r3) {
            java.nio.charset.Charset r0 = java.nio.charset.Charset.defaultCharset()
            r1 = 0
            a(r2, r3, r0, r1)
            return
    }

    private static void a(java.io.File r0, java.lang.CharSequence r1, java.nio.charset.Charset r2, boolean r3) {
            if (r1 != 0) goto L4
            r1 = 0
            goto L8
        L4:
            java.lang.String r1 = r1.toString()
        L8:
            a(r0, r1, r2, r3)
            return
    }

    public static void a(java.io.File r1, java.lang.CharSequence r2, boolean r3) {
            java.nio.charset.Charset r3 = java.nio.charset.Charset.defaultCharset()
            r0 = 1
            a(r1, r2, r3, r0)
            return
    }

    private static void a(java.io.File r1, java.lang.String r2, java.nio.charset.Charset r3, boolean r4) {
            r0 = 0
            java.io.FileOutputStream r0 = com.kwad.sdk.utils.q.a(r1, r4)     // Catch: java.lang.Throwable -> Lf java.lang.Exception -> L11
            com.kwad.sdk.crash.utils.h.a(r2, r0, r3)     // Catch: java.lang.Throwable -> Lf java.lang.Exception -> L11
            a(r0)     // Catch: java.lang.Throwable -> Lf java.lang.Exception -> L11
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            return
        Lf:
            r1 = move-exception
            goto L19
        L11:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)     // Catch: java.lang.Throwable -> Lf
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            return
        L19:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            throw r1
    }

    private static void a(java.lang.Throwable r1, com.kwad.sdk.crash.model.message.ExceptionMessage r2) {
            boolean r1 = o(r1)
            if (r1 == 0) goto L18
            java.lang.String r1 = r2.mCrashType
            java.lang.String r0 = r2.getTypeCommon()
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L18
            java.lang.String r1 = r2.getTypeHeapOOM()
            r2.mCrashType = r1
        L18:
            return
    }

    private static boolean a(java.io.FileOutputStream r0) {
            if (r0 == 0) goto L10
            java.io.FileDescriptor r0 = r0.getFD()     // Catch: java.io.IOException -> La
            r0.sync()     // Catch: java.io.IOException -> La
            goto L10
        La:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            r0 = 0
            return r0
        L10:
            r0 = 1
            return r0
    }

    private static java.lang.String ag(java.lang.String r1, java.lang.String r2) {
            com.kwad.sdk.utils.ao.fE(r1)
            boolean r0 = r1.endsWith(r2)
            if (r0 != 0) goto La
            return r1
        La:
            r0 = 0
            int r2 = r1.lastIndexOf(r2)
            java.lang.String r1 = r1.substring(r0, r2)
            return r1
    }

    private static double ak(long r1) {
            r0 = 20
            long r1 = r1 >> r0
            float r1 = (float) r1
            r2 = 1149239296(0x44800000, float:1024.0)
            float r1 = r1 / r2
            double r1 = (double) r1
            java.math.BigDecimal r1 = java.math.BigDecimal.valueOf(r1)
            r2 = 2
            r0 = 4
            java.math.BigDecimal r1 = r1.setScale(r2, r0)
            float r1 = r1.floatValue()
            double r1 = (double) r1
            return r1
    }

    private static java.lang.String b(java.lang.StackTraceElement[] r1) {
            r0 = 0
            java.lang.String r1 = a(r1, r0)
            return r1
    }

    private static void b(com.kwad.sdk.crash.model.message.ExceptionMessage r4, android.content.Context r5) {
            if (r5 != 0) goto L3
            return
        L3:
            java.io.File r0 = r5.getCacheDir()
            java.io.File r0 = r0.getParentFile()
            java.io.File r0 = r0.getParentFile()
            java.io.File r0 = r0.getParentFile()
            java.lang.String r0 = r0.getCanonicalPath()     // Catch: java.io.IOException -> L18
            goto L20
        L18:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)
            java.lang.String r0 = r0.getAbsolutePath()
        L20:
            java.util.regex.Pattern r1 = com.kwad.sdk.crash.d.azP
            java.util.regex.Matcher r1 = r1.matcher(r0)
            boolean r1 = r1.matches()
            if (r1 != 0) goto L61
            java.util.regex.Pattern r1 = com.kwad.sdk.crash.d.azQ
            java.util.regex.Matcher r1 = r1.matcher(r0)
            boolean r1 = r1.matches()
            if (r1 == 0) goto L39
            goto L61
        L39:
            java.util.regex.Pattern r5 = com.kwad.sdk.crash.d.azR
            java.util.regex.Matcher r5 = r5.matcher(r0)
            java.util.regex.Pattern r1 = com.kwad.sdk.crash.d.azS
            java.util.regex.Matcher r1 = r1.matcher(r0)
            boolean r2 = r5.matches()
            r3 = 1
            if (r2 == 0) goto L53
            java.lang.String r5 = r5.group(r3)
        L50:
            r4.mVirtualApp = r5
            return
        L53:
            boolean r5 = r1.matches()
            if (r5 == 0) goto L5e
            java.lang.String r5 = r1.group(r3)
            goto L50
        L5e:
            r4.mVirtualApp = r0
            return
        L61:
            java.lang.String r5 = r5.getPackageName()
            goto L50
    }

    private static void b(java.lang.Throwable r2, com.kwad.sdk.crash.model.message.ExceptionMessage r3) {
            java.lang.String r0 = p(r2)
            boolean r2 = r2 instanceof java.lang.StackOverflowError
            if (r2 == 0) goto Lc
            java.lang.String r0 = eU(r0)
        Lc:
            java.lang.String r2 = "[\n\t]"
            java.lang.String r1 = "#"
            java.lang.String r2 = r0.replaceAll(r2, r1)
            r3.mCrashDetail = r2
            return
    }

    public static void b(java.lang.Throwable r1, com.kwad.sdk.crash.model.message.ExceptionMessage r2, android.content.Context r3) {
            if (r1 == 0) goto L5
            b(r1, r2)
        L5:
            a(r2, r3)
            com.kwad.sdk.crash.model.message.MemoryInfo r0 = new com.kwad.sdk.crash.model.message.MemoryInfo
            r0.<init>()
            a(r2, r0, r3)
            com.kwad.sdk.crash.model.message.DiskInfo r3 = new com.kwad.sdk.crash.model.message.DiskInfo
            r3.<init>()
            a(r2, r3)
            boolean r3 = r2 instanceof com.kwad.sdk.crash.model.message.NativeExceptionMessage
            if (r3 == 0) goto L20
            a(r2, r0)
            return
        L20:
            boolean r3 = r2 instanceof com.kwad.sdk.crash.model.message.JavaExceptionMessage
            if (r3 == 0) goto L27
            a(r1, r2)
        L27:
            return
    }

    private static java.lang.String bx(android.content.Context r3) {
            java.lang.String r0 = ""
            r1 = 0
            android.content.res.Resources r3 = r3.getResources()     // Catch: java.lang.Throwable -> L24 java.io.IOException -> L2c org.json.JSONException -> L34
            android.content.res.AssetManager r3 = r3.getAssets()     // Catch: java.lang.Throwable -> L24 java.io.IOException -> L2c org.json.JSONException -> L34
            java.lang.String r2 = "apk.json"
            java.io.InputStream r1 = r3.open(r2)     // Catch: java.lang.Throwable -> L24 java.io.IOException -> L2c org.json.JSONException -> L34
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L24 java.io.IOException -> L2c org.json.JSONException -> L34
            java.lang.String r2 = com.kwad.sdk.crash.utils.h.d(r1)     // Catch: java.lang.Throwable -> L24 java.io.IOException -> L2c org.json.JSONException -> L34
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L24 java.io.IOException -> L2c org.json.JSONException -> L34
            java.lang.String r2 = "task_id"
            java.lang.String r3 = r3.getString(r2)     // Catch: java.lang.Throwable -> L24 java.io.IOException -> L2c org.json.JSONException -> L34
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return r3
        L24:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)     // Catch: java.lang.Throwable -> L3c
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return r0
        L2c:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)     // Catch: java.lang.Throwable -> L3c
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return r0
        L34:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)     // Catch: java.lang.Throwable -> L3c
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return r0
        L3c:
            r3 = move-exception
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            throw r3
    }

    private static java.lang.String by(android.content.Context r4) {
            java.lang.String r0 = "\n"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6c
            java.lang.String r3 = "BuildConfig Version Name: "
            r2.<init>(r3)     // Catch: java.lang.Exception -> L6c
            com.kwad.sdk.crash.e r3 = com.kwad.sdk.crash.e.EC()     // Catch: java.lang.Exception -> L6c
            java.lang.String r3 = r3.getSdkVersion()     // Catch: java.lang.Exception -> L6c
            r2.append(r3)     // Catch: java.lang.Exception -> L6c
            r2.append(r0)     // Catch: java.lang.Exception -> L6c
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L6c
            r1.append(r2)     // Catch: java.lang.Exception -> L6c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6c
            java.lang.String r3 = "PackageInfo CodePath: "
            r2.<init>(r3)     // Catch: java.lang.Exception -> L6c
            java.lang.String r3 = r4.getPackageCodePath()     // Catch: java.lang.Exception -> L6c
            r2.append(r3)     // Catch: java.lang.Exception -> L6c
            r2.append(r0)     // Catch: java.lang.Exception -> L6c
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L6c
            r1.append(r2)     // Catch: java.lang.Exception -> L6c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6c
            java.lang.String r3 = "PackageInfo ResPath: "
            r2.<init>(r3)     // Catch: java.lang.Exception -> L6c
            java.lang.String r3 = r4.getPackageResourcePath()     // Catch: java.lang.Exception -> L6c
            r2.append(r3)     // Catch: java.lang.Exception -> L6c
            r2.append(r0)     // Catch: java.lang.Exception -> L6c
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L6c
            r1.append(r2)     // Catch: java.lang.Exception -> L6c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6c
            java.lang.String r3 = "DexPath: "
            r2.<init>(r3)     // Catch: java.lang.Exception -> L6c
            java.lang.String r4 = bz(r4)     // Catch: java.lang.Exception -> L6c
            r2.append(r4)     // Catch: java.lang.Exception -> L6c
            r2.append(r0)     // Catch: java.lang.Exception -> L6c
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Exception -> L6c
            r1.append(r4)     // Catch: java.lang.Exception -> L6c
            goto L70
        L6c:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r4)
        L70:
            java.lang.String r4 = r1.toString()
            return r4
    }

    private static java.lang.String bz(android.content.Context r6) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.ClassLoader r6 = r6.getClassLoader()
            if (r6 == 0) goto L77
            java.lang.String r1 = r6.toString()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "ClassLoader "
            r2.<init>(r3)
            r3 = 0
            r2.append(r3)
            java.lang.String r4 = " : "
            r2.append(r4)
            r2.append(r1)
        L22:
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.ClassLoader r2 = r6.getParent()
            r5 = 1
            if (r2 == 0) goto L4a
            java.lang.ClassLoader r6 = r6.getParent()
            int r3 = r3 + r5
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r5 = "\nClassLoader "
            r2.<init>(r5)
            r2.append(r3)
            r2.append(r4)
            java.lang.String r5 = r6.toString()
            r2.append(r5)
            goto L22
        L4a:
            if (r1 == 0) goto L77
            java.lang.String r6 = "\""
            java.lang.String[] r6 = r1.split(r6)
            int r1 = r6.length
            r2 = 2
            if (r1 < r2) goto L77
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "\n====path: "
            r1.<init>(r2)
            r2 = r6[r5]
            r1.append(r2)
            java.lang.String r2 = ", length: "
            r1.append(r2)
            r6 = r6[r5]
            long r2 = eT(r6)
            r1.append(r2)
            java.lang.String r6 = r1.toString()
            r0.append(r6)
        L77:
            java.lang.String r6 = r0.toString()
            return r6
    }

    public static void d(java.io.File r4, java.io.File r5) {
            com.kwad.sdk.utils.q.P(r4)     // Catch: java.io.IOException -> L54
            com.kwad.sdk.utils.q.P(r5)     // Catch: java.io.IOException -> L54
            r0 = 0
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L3d java.io.IOException -> L40 java.io.FileNotFoundException -> L49
            java.io.FileReader r2 = new java.io.FileReader     // Catch: java.lang.Throwable -> L3d java.io.IOException -> L40 java.io.FileNotFoundException -> L49
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L3d java.io.IOException -> L40 java.io.FileNotFoundException -> L49
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L3d java.io.IOException -> L40 java.io.FileNotFoundException -> L49
            java.io.BufferedWriter r4 = new java.io.BufferedWriter     // Catch: java.io.IOException -> L39 java.io.FileNotFoundException -> L3b java.lang.Throwable -> L4c
            java.io.FileWriter r2 = new java.io.FileWriter     // Catch: java.io.IOException -> L39 java.io.FileNotFoundException -> L3b java.lang.Throwable -> L4c
            r3 = 1
            r2.<init>(r5, r3)     // Catch: java.io.IOException -> L39 java.io.FileNotFoundException -> L3b java.lang.Throwable -> L4c
            r4.<init>(r2)     // Catch: java.io.IOException -> L39 java.io.FileNotFoundException -> L3b java.lang.Throwable -> L4c
        L1c:
            java.lang.String r5 = r1.readLine()     // Catch: java.lang.Throwable -> L30 java.io.IOException -> L33 java.io.FileNotFoundException -> L36
            if (r5 == 0) goto L29
            r4.write(r5)     // Catch: java.lang.Throwable -> L30 java.io.IOException -> L33 java.io.FileNotFoundException -> L36
            r4.newLine()     // Catch: java.lang.Throwable -> L30 java.io.IOException -> L33 java.io.FileNotFoundException -> L36
            goto L1c
        L29:
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
        L2c:
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return
        L30:
            r5 = move-exception
            r0 = r4
            goto L4d
        L33:
            r5 = move-exception
            r0 = r4
            goto L42
        L36:
            r5 = move-exception
            r0 = r4
            goto L42
        L39:
            r5 = move-exception
            goto L42
        L3b:
            r5 = move-exception
            goto L42
        L3d:
            r5 = move-exception
            r1 = r0
            goto L4d
        L40:
            r5 = move-exception
            r1 = r0
        L42:
            com.kwad.sdk.core.e.c.printStackTraceOnly(r5)     // Catch: java.lang.Throwable -> L4c
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            goto L2c
        L49:
            r5 = move-exception
            r1 = r0
            goto L42
        L4c:
            r5 = move-exception
        L4d:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            throw r5
        L54:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r4)
            return
    }

    private static void e(com.kwad.sdk.crash.model.message.ExceptionMessage r1) {
            com.kwad.sdk.crash.e r0 = com.kwad.sdk.crash.e.EC()
            java.lang.String r0 = r0.EF()
            r1.mVirtualApp = r0
            com.kwad.sdk.crash.e r0 = com.kwad.sdk.crash.e.EC()
            java.lang.String r0 = r0.getSdkVersion()
            r1.mVersionCode = r0
            return
    }

    public static java.lang.String eR(java.lang.String r2) {
            java.lang.String r0 = "."
            boolean r0 = r2.contains(r0)
            if (r0 == 0) goto L13
            r0 = 0
            r1 = 46
            int r1 = r2.lastIndexOf(r1)
            java.lang.String r2 = r2.substring(r0, r1)
        L13:
            return r2
    }

    public static java.lang.String eS(java.lang.String r2) {
            java.lang.String r0 = "("
            boolean r0 = r2.contains(r0)
            if (r0 == 0) goto L22
            java.lang.String r0 = ")"
            boolean r0 = r2.contains(r0)
            if (r0 == 0) goto L22
            r0 = 40
            int r0 = r2.lastIndexOf(r0)
            int r0 = r0 + 1
            r1 = 41
            int r1 = r2.lastIndexOf(r1)
            java.lang.String r2 = r2.substring(r0, r1)
        L22:
            return r2
    }

    private static long eT(java.lang.String r3) {
            r0 = -1
            java.io.File r2 = new java.io.File     // Catch: java.lang.Exception -> L11
            r2.<init>(r3)     // Catch: java.lang.Exception -> L11
            boolean r3 = r2.exists()     // Catch: java.lang.Exception -> L11
            if (r3 == 0) goto L11
            long r0 = r2.length()     // Catch: java.lang.Exception -> L11
        L11:
            return r0
    }

    private static java.lang.String eU(java.lang.String r6) {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.lang.String r1 = "\n"
            java.lang.String[] r6 = r6.split(r1)
            int r2 = r6.length
            r3 = 0
            r4 = r3
        Le:
            if (r4 >= r2) goto L18
            r5 = r6[r4]
            r0.add(r5)
            int r4 = r4 + 1
            goto Le
        L18:
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Iterator r6 = r6.iterator()
        L26:
            boolean r2 = r6.hasNext()
            if (r2 == 0) goto L39
            java.lang.Object r2 = r6.next()
            java.lang.String r2 = (java.lang.String) r2
            r0.append(r2)
            r0.append(r1)
            goto L26
        L39:
            java.lang.String r6 = r0.substring(r3)
            return r6
    }

    public static int getIndex(java.lang.String r1) {
            java.lang.String r0 = "-"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L17
            r0 = 45
            int r0 = r1.lastIndexOf(r0)
            java.lang.String r1 = r1.substring(r0)
            int r1 = java.lang.Integer.parseInt(r1)
            goto L18
        L17:
            r1 = -1
        L18:
            return r1
    }

    private static boolean o(java.lang.Throwable r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.lang.Throwable r0 = r1.getCause()
            if (r0 == 0) goto Lf
            java.lang.Throwable r1 = r1.getCause()
            goto L4
        Lf:
            boolean r1 = r1 instanceof java.lang.OutOfMemoryError
            return r1
    }

    public static java.lang.String p(java.lang.Throwable r3) {
            java.lang.String r0 = r3.toString()
            r1 = 0
            java.io.StringWriter r2 = new java.io.StringWriter     // Catch: java.lang.Throwable -> L20 java.lang.Exception -> L22
            r2.<init>()     // Catch: java.lang.Throwable -> L20 java.lang.Exception -> L22
            java.io.PrintWriter r1 = new java.io.PrintWriter     // Catch: java.lang.Throwable -> L1a java.lang.Exception -> L1d
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1a java.lang.Exception -> L1d
            com.kwad.sdk.crash.utils.f.a(r3, r1)     // Catch: java.lang.Throwable -> L1a java.lang.Exception -> L1d
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L1a java.lang.Exception -> L1d
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            goto L29
        L1a:
            r3 = move-exception
            r1 = r2
            goto L2a
        L1d:
            r3 = move-exception
            r1 = r2
            goto L23
        L20:
            r3 = move-exception
            goto L2a
        L22:
            r3 = move-exception
        L23:
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)     // Catch: java.lang.Throwable -> L20
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
        L29:
            return r0
        L2a:
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            throw r3
    }
}

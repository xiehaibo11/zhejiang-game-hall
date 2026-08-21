package com.kwad.sdk.crash.handler;

public final class NativeCrashHandler extends com.kwad.sdk.crash.handler.b {
    private static final java.lang.String NATIVE_CRASH_HAPPENED_BEGIN = "------ Native Crash Happened Begin ------\n";
    private static final java.lang.String TAG = "NativeCrashHandler";
    private static com.kwad.sdk.crash.model.message.ExceptionMessage mMessage;
    private java.io.File mMessageFile;

    static class 1 {
    }

    static class a {
        private static final com.kwad.sdk.crash.handler.NativeCrashHandler aAj = null;

        static {
                com.kwad.sdk.crash.handler.NativeCrashHandler r0 = new com.kwad.sdk.crash.handler.NativeCrashHandler
                r1 = 0
                r0.<init>(r1)
                com.kwad.sdk.crash.handler.NativeCrashHandler.a.aAj = r0
                return
        }

        static com.kwad.sdk.crash.handler.NativeCrashHandler EU() {
                com.kwad.sdk.crash.handler.NativeCrashHandler r0 = com.kwad.sdk.crash.handler.NativeCrashHandler.a.aAj
                return r0
        }
    }

    static {
            com.kwad.sdk.crash.model.message.NativeExceptionMessage r0 = new com.kwad.sdk.crash.model.message.NativeExceptionMessage
            r0.<init>()
            com.kwad.sdk.crash.handler.NativeCrashHandler.mMessage = r0
            return
    }

    private NativeCrashHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    NativeCrashHandler(com.kwad.sdk.crash.handler.NativeCrashHandler.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static native void doCrash();

    public static com.kwad.sdk.crash.handler.NativeCrashHandler getInstance() {
            com.kwad.sdk.crash.handler.NativeCrashHandler r0 = com.kwad.sdk.crash.handler.NativeCrashHandler.a.EU()
            return r0
    }

    public static native void install(java.lang.String r0, boolean r1, java.lang.String r2, int r3);

    public static void onCallFromNative() {
            java.lang.String r0 = "NativeCrashHandler"
            java.lang.String r1 = "onCallFromNative NativeCrashHandler.doCrash()"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.sdk.crash.handler.NativeCrashHandler r1 = getInstance()
            java.io.File r1 = r1.mLogDir
            com.kwad.sdk.crash.handler.NativeCrashHandler r2 = getInstance()
            java.io.File r2 = r2.mMessageFile
            com.kwad.sdk.crash.handler.NativeCrashHandler r3 = getInstance()
            java.io.File r3 = r3.mJavaTraceFile
            com.kwad.sdk.crash.handler.NativeCrashHandler r4 = getInstance()
            java.io.File r4 = r4.mMemoryInfoFile
            com.kwad.sdk.crash.handler.NativeCrashHandler r5 = getInstance()
            com.kwad.sdk.crash.report.e r5 = r5.getUploader()
            boolean r6 = r1.exists()     // Catch: java.lang.Throwable -> L124
            if (r6 != 0) goto L5d
            boolean r6 = r1.mkdirs()     // Catch: java.lang.Throwable -> L124
            if (r6 != 0) goto L5d
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L124
            r6.<init>()     // Catch: java.lang.Throwable -> L124
            com.kwad.sdk.crash.model.message.ExceptionMessage r7 = com.kwad.sdk.crash.handler.NativeCrashHandler.mMessage     // Catch: java.lang.Throwable -> L124
            java.lang.String r8 = r7.mErrorMessage     // Catch: java.lang.Throwable -> L124
            r6.append(r8)     // Catch: java.lang.Throwable -> L124
            java.lang.String r8 = "create "
            r6.append(r8)     // Catch: java.lang.Throwable -> L124
            java.lang.String r8 = r1.getPath()     // Catch: java.lang.Throwable -> L124
            r6.append(r8)     // Catch: java.lang.Throwable -> L124
            java.lang.String r8 = " failed!\n"
            r6.append(r8)     // Catch: java.lang.Throwable -> L124
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L124
            r7.mErrorMessage = r6     // Catch: java.lang.Throwable -> L124
            if (r5 == 0) goto L5d
            com.kwad.sdk.crash.model.message.ExceptionMessage r6 = com.kwad.sdk.crash.handler.NativeCrashHandler.mMessage     // Catch: java.lang.Throwable -> L124
            r6.toJson()     // Catch: java.lang.Throwable -> L124
        L5d:
            if (r2 != 0) goto L7b
            java.io.File r6 = new java.io.File     // Catch: java.lang.Throwable -> L124
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L124
            r7.<init>()     // Catch: java.lang.Throwable -> L124
            getInstance()     // Catch: java.lang.Throwable -> L124
            java.lang.String r8 = com.kwad.sdk.crash.handler.NativeCrashHandler.FILE_NAME_BASE     // Catch: java.lang.Throwable -> L124
            r7.append(r8)     // Catch: java.lang.Throwable -> L124
            java.lang.String r8 = ".msg"
            r7.append(r8)     // Catch: java.lang.Throwable -> L124
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L124
            r6.<init>(r1, r7)     // Catch: java.lang.Throwable -> L124
            r2 = r6
        L7b:
            if (r3 != 0) goto L99
            java.io.File r6 = new java.io.File     // Catch: java.lang.Throwable -> L124
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L124
            r7.<init>()     // Catch: java.lang.Throwable -> L124
            getInstance()     // Catch: java.lang.Throwable -> L124
            java.lang.String r8 = com.kwad.sdk.crash.handler.NativeCrashHandler.FILE_NAME_BASE     // Catch: java.lang.Throwable -> L124
            r7.append(r8)     // Catch: java.lang.Throwable -> L124
            java.lang.String r8 = ".jtrace"
            r7.append(r8)     // Catch: java.lang.Throwable -> L124
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L124
            r6.<init>(r1, r7)     // Catch: java.lang.Throwable -> L124
            r3 = r6
        L99:
            if (r4 != 0) goto Lb7
            java.io.File r6 = new java.io.File     // Catch: java.lang.Throwable -> L124
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L124
            r7.<init>()     // Catch: java.lang.Throwable -> L124
            getInstance()     // Catch: java.lang.Throwable -> L124
            java.lang.String r8 = com.kwad.sdk.crash.handler.NativeCrashHandler.FILE_NAME_BASE     // Catch: java.lang.Throwable -> L124
            r7.append(r8)     // Catch: java.lang.Throwable -> L124
            java.lang.String r8 = ".minfo"
            r7.append(r8)     // Catch: java.lang.Throwable -> L124
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L124
            r6.<init>(r1, r7)     // Catch: java.lang.Throwable -> L124
            r4 = r6
        Lb7:
            r6 = 0
            com.kwad.sdk.crash.model.message.ExceptionMessage r7 = com.kwad.sdk.crash.handler.NativeCrashHandler.mMessage     // Catch: java.lang.Throwable -> L124
            com.kwad.sdk.crash.e r8 = com.kwad.sdk.crash.e.EC()     // Catch: java.lang.Throwable -> L124
            android.content.Context r8 = r8.getContext()     // Catch: java.lang.Throwable -> L124
            com.kwad.sdk.crash.utils.g.b(r6, r7, r8)     // Catch: java.lang.Throwable -> L124
            com.kwad.sdk.crash.model.message.ExceptionMessage r6 = com.kwad.sdk.crash.handler.NativeCrashHandler.mMessage     // Catch: java.lang.Throwable -> L124
            com.kwad.sdk.crash.handler.NativeCrashHandler r7 = getInstance()     // Catch: java.lang.Throwable -> L124
            int r7 = r7.getCrashType()     // Catch: java.lang.Throwable -> L124
            com.kwad.sdk.crash.utils.g.a(r6, r7)     // Catch: java.lang.Throwable -> L124
            com.kwad.sdk.crash.handler.NativeCrashHandler r6 = getInstance()     // Catch: java.lang.Throwable -> L124
            com.kwad.sdk.crash.f r6 = r6.mExceptionListener     // Catch: java.lang.Throwable -> L124
            if (r6 == 0) goto Led
            com.kwad.sdk.crash.handler.NativeCrashHandler r6 = getInstance()     // Catch: java.lang.Throwable -> L124
            com.kwad.sdk.crash.f r6 = r6.mExceptionListener     // Catch: java.lang.Throwable -> L124
            com.kwad.sdk.crash.handler.NativeCrashHandler r7 = getInstance()     // Catch: java.lang.Throwable -> L124
            int r7 = r7.getCrashType()     // Catch: java.lang.Throwable -> L124
            com.kwad.sdk.crash.model.message.ExceptionMessage r8 = com.kwad.sdk.crash.handler.NativeCrashHandler.mMessage     // Catch: java.lang.Throwable -> L124
            r6.a(r7, r8)     // Catch: java.lang.Throwable -> L124
        Led:
            if (r2 == 0) goto Lfc
            com.kwad.sdk.crash.model.message.ExceptionMessage r6 = com.kwad.sdk.crash.handler.NativeCrashHandler.mMessage     // Catch: java.lang.Throwable -> L11a
            org.json.JSONObject r6 = r6.toJson()     // Catch: java.lang.Throwable -> L11a
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L11a
            com.kwad.sdk.crash.utils.g.a(r2, r6)     // Catch: java.lang.Throwable -> L11a
        Lfc:
            com.kwad.sdk.crash.utils.g.G(r3)     // Catch: java.lang.Throwable -> L11a
            com.kwad.sdk.crash.handler.NativeCrashHandler r2 = getInstance()     // Catch: java.lang.Throwable -> L11a
            r2.backupLogFiles(r1)     // Catch: java.lang.Throwable -> L11a
            com.kwad.sdk.crash.handler.NativeCrashHandler r1 = getInstance()     // Catch: java.lang.Throwable -> L11a
            java.io.File r1 = r1.mDumpFile     // Catch: java.lang.Throwable -> L11a
            com.kwad.sdk.crash.utils.g.a(r5, r0, r1)     // Catch: java.lang.Throwable -> L11a
            com.kwad.sdk.crash.handler.NativeCrashHandler r0 = getInstance()     // Catch: java.lang.Throwable -> L11a
            r0.uploadRemainingExceptions()     // Catch: java.lang.Throwable -> L11a
            com.kwad.sdk.crash.utils.g.H(r4)     // Catch: java.lang.Throwable -> L11a
            return
        L11a:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            if (r5 == 0) goto L123
            com.kwad.sdk.crash.utils.g.p(r0)
        L123:
            return
        L124:
            r6 = move-exception
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L174
            r7.<init>()     // Catch: java.lang.Throwable -> L174
            com.kwad.sdk.crash.model.message.ExceptionMessage r8 = com.kwad.sdk.crash.handler.NativeCrashHandler.mMessage     // Catch: java.lang.Throwable -> L174
            java.lang.String r9 = r8.mErrorMessage     // Catch: java.lang.Throwable -> L174
            r7.append(r9)     // Catch: java.lang.Throwable -> L174
            r7.append(r6)     // Catch: java.lang.Throwable -> L174
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L174
            r8.mErrorMessage = r7     // Catch: java.lang.Throwable -> L174
            com.kwad.sdk.core.e.c.printStackTraceOnly(r6)     // Catch: java.lang.Throwable -> L174
            if (r2 == 0) goto L14c
            com.kwad.sdk.crash.model.message.ExceptionMessage r6 = com.kwad.sdk.crash.handler.NativeCrashHandler.mMessage     // Catch: java.lang.Throwable -> L16a
            org.json.JSONObject r6 = r6.toJson()     // Catch: java.lang.Throwable -> L16a
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L16a
            com.kwad.sdk.crash.utils.g.a(r2, r6)     // Catch: java.lang.Throwable -> L16a
        L14c:
            com.kwad.sdk.crash.utils.g.G(r3)     // Catch: java.lang.Throwable -> L16a
            com.kwad.sdk.crash.handler.NativeCrashHandler r2 = getInstance()     // Catch: java.lang.Throwable -> L16a
            r2.backupLogFiles(r1)     // Catch: java.lang.Throwable -> L16a
            com.kwad.sdk.crash.handler.NativeCrashHandler r1 = getInstance()     // Catch: java.lang.Throwable -> L16a
            java.io.File r1 = r1.mDumpFile     // Catch: java.lang.Throwable -> L16a
            com.kwad.sdk.crash.utils.g.a(r5, r0, r1)     // Catch: java.lang.Throwable -> L16a
            com.kwad.sdk.crash.handler.NativeCrashHandler r0 = getInstance()     // Catch: java.lang.Throwable -> L16a
            r0.uploadRemainingExceptions()     // Catch: java.lang.Throwable -> L16a
            com.kwad.sdk.crash.utils.g.H(r4)     // Catch: java.lang.Throwable -> L16a
            return
        L16a:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            if (r5 == 0) goto L173
            com.kwad.sdk.crash.utils.g.p(r0)
        L173:
            return
        L174:
            r6 = move-exception
            if (r2 == 0) goto L184
            com.kwad.sdk.crash.model.message.ExceptionMessage r7 = com.kwad.sdk.crash.handler.NativeCrashHandler.mMessage     // Catch: java.lang.Throwable -> L1a2
            org.json.JSONObject r7 = r7.toJson()     // Catch: java.lang.Throwable -> L1a2
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L1a2
            com.kwad.sdk.crash.utils.g.a(r2, r7)     // Catch: java.lang.Throwable -> L1a2
        L184:
            com.kwad.sdk.crash.utils.g.G(r3)     // Catch: java.lang.Throwable -> L1a2
            com.kwad.sdk.crash.handler.NativeCrashHandler r2 = getInstance()     // Catch: java.lang.Throwable -> L1a2
            r2.backupLogFiles(r1)     // Catch: java.lang.Throwable -> L1a2
            com.kwad.sdk.crash.handler.NativeCrashHandler r1 = getInstance()     // Catch: java.lang.Throwable -> L1a2
            java.io.File r1 = r1.mDumpFile     // Catch: java.lang.Throwable -> L1a2
            com.kwad.sdk.crash.utils.g.a(r5, r0, r1)     // Catch: java.lang.Throwable -> L1a2
            com.kwad.sdk.crash.handler.NativeCrashHandler r0 = getInstance()     // Catch: java.lang.Throwable -> L1a2
            r0.uploadRemainingExceptions()     // Catch: java.lang.Throwable -> L1a2
            com.kwad.sdk.crash.utils.g.H(r4)     // Catch: java.lang.Throwable -> L1a2
            goto L1ab
        L1a2:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            if (r5 == 0) goto L1ab
            com.kwad.sdk.crash.utils.g.p(r0)
        L1ab:
            throw r6
    }

    @Override
    protected final int getCrashType() {
            r1 = this;
            r0 = 4
            return r0
    }

    public final void init(java.io.File r3, boolean r4, java.lang.String r5, com.kwad.sdk.crash.report.c r6) {
            r2 = this;
            r0 = 0
            super.init(r3, r0, r6)
            boolean r6 = com.kwad.sdk.crash.b.Em()
            if (r6 != 0) goto Lb
            return
        Lb:
            r2.mLogDir = r3
            java.io.File r6 = r2.mLogDir
            boolean r6 = r6.exists()
            if (r6 != 0) goto L1a
            java.io.File r6 = r2.mLogDir
            r6.mkdirs()
        L1a:
            java.io.File r6 = new java.io.File
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.kwad.sdk.crash.handler.NativeCrashHandler.FILE_NAME_BASE
            r0.append(r1)
            java.lang.String r1 = ".dump"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.<init>(r3, r0)
            r2.mDumpFile = r6
            java.io.File r6 = new java.io.File
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.kwad.sdk.crash.handler.NativeCrashHandler.FILE_NAME_BASE
            r0.append(r1)
            java.lang.String r1 = ".jtrace"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.<init>(r3, r0)
            r2.mJavaTraceFile = r6
            java.io.File r6 = new java.io.File
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.kwad.sdk.crash.handler.NativeCrashHandler.FILE_NAME_BASE
            r0.append(r1)
            java.lang.String r1 = ".minfo"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.<init>(r3, r0)
            r2.mMemoryInfoFile = r6
            java.lang.String r6 = "NativeCrashHandler"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La7
            java.lang.String r1 = "ANR init2 "
            r0.<init>(r1)     // Catch: java.lang.Throwable -> La7
            java.io.File r1 = r2.mDumpFile     // Catch: java.lang.Throwable -> La7
            java.lang.String r1 = r1.getPath()     // Catch: java.lang.Throwable -> La7
            r0.append(r1)     // Catch: java.lang.Throwable -> La7
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> La7
            com.kwad.sdk.core.e.c.d(r6, r0)     // Catch: java.lang.Throwable -> La7
            java.io.File r6 = r2.mDumpFile     // Catch: java.lang.Throwable -> La7
            java.lang.String r6 = r6.getPath()     // Catch: java.lang.Throwable -> La7
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> La7
            install(r6, r4, r5, r0)     // Catch: java.lang.Throwable -> La7
            java.io.File r4 = new java.io.File
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = com.kwad.sdk.crash.handler.NativeCrashHandler.FILE_NAME_BASE
            r5.append(r6)
            java.lang.String r6 = ".msg"
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r4.<init>(r3, r5)
            r2.mMessageFile = r4
            return
        La7:
            r2.getUploader()
            return
    }

    @Override
    protected final void reportException(java.io.File[] r5, java.util.concurrent.CountDownLatch r6) {
            r4 = this;
            com.kwad.sdk.crash.report.g r0 = new com.kwad.sdk.crash.report.g
            r0.<init>()
            com.kwad.sdk.crash.report.e r1 = r4.getUploader()
            r0.a(r1)
            int r1 = r5.length
            r2 = 0
        Le:
            if (r2 >= r1) goto L18
            r3 = r5[r2]
            r0.a(r3, r6)
            int r2 = r2 + 1
            goto Le
        L18:
            return
    }
}

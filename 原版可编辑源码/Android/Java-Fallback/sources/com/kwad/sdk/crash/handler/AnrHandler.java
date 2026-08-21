package com.kwad.sdk.crash.handler;

public final class AnrHandler extends com.kwad.sdk.crash.handler.b {
    private static final java.lang.String ANR_HAPPENED_BEGIN = "------ ANR Happened Begin ------\n";
    private static final java.lang.String DEFAULT_TRACE_ROOT = "/data/anr/";
    private static final boolean DUMP_FROM_SIG_QUIT = false;
    private static final long GET_REASON_INTERVAL = 500;
    private static final int MY_PID = 0;
    private static final long PARSE_TRACE_INTERVAL = 10000;
    private static final java.util.regex.Pattern PID_PATTERN = null;
    private static final java.lang.String TAG = "AnrHandler";
    private static final long TRY_TIMES = 20;
    private static long sLastTime;
    private android.os.FileObserver mTraceFileObserver;




    static class a {
        private static final com.kwad.sdk.crash.handler.AnrHandler aAg = null;

        static {
                com.kwad.sdk.crash.handler.AnrHandler r0 = new com.kwad.sdk.crash.handler.AnrHandler
                r1 = 0
                r0.<init>(r1)
                com.kwad.sdk.crash.handler.AnrHandler.a.aAg = r0
                return
        }

        static com.kwad.sdk.crash.handler.AnrHandler ER() {
                com.kwad.sdk.crash.handler.AnrHandler r0 = com.kwad.sdk.crash.handler.AnrHandler.a.aAg
                return r0
        }
    }

    static {
            int r0 = android.os.Process.myPid()
            com.kwad.sdk.crash.handler.AnrHandler.MY_PID = r0
            java.lang.String r0 = "-{5}\\spid\\s\\d+\\sat\\s\\d+-\\d+-\\d+\\s\\d{2}:\\d{2}:\\d{2}\\s-{5}"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.kwad.sdk.crash.handler.AnrHandler.PID_PATTERN = r0
            r0 = 21
            boolean r0 = com.kwad.sdk.utils.SystemUtil.de(r0)
            com.kwad.sdk.crash.handler.AnrHandler.DUMP_FROM_SIG_QUIT = r0
            return
    }

    private AnrHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    AnrHandler(com.kwad.sdk.crash.handler.AnrHandler.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static void access$200(com.kwad.sdk.crash.handler.AnrHandler r0, java.lang.String r1) {
            r0.onTraceFileWritten(r1)
            return
    }

    static void access$300(java.lang.String r0, java.io.File r1) {
            getAnrReasonInner(r0, r1)
            return
    }

    private static synchronized void dumpAnr(java.lang.String r7, int r8) {
            java.lang.Class<com.kwad.sdk.crash.handler.AnrHandler> r0 = com.kwad.sdk.crash.handler.AnrHandler.class
            monitor-enter(r0)
            java.lang.String r1 = "AnrHandler"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L103
            java.lang.String r3 = "ANR dumpAnr tracePath="
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L103
            r2.append(r7)     // Catch: java.lang.Throwable -> L103
            java.lang.String r3 = " index="
            r2.append(r3)     // Catch: java.lang.Throwable -> L103
            r2.append(r8)     // Catch: java.lang.Throwable -> L103
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L103
            com.kwad.sdk.core.e.c.d(r1, r2)     // Catch: java.lang.Throwable -> L103
            com.kwad.sdk.crash.model.message.AnrExceptionMessage r1 = new com.kwad.sdk.crash.model.message.AnrExceptionMessage     // Catch: java.lang.Throwable -> L103
            r1.<init>()     // Catch: java.lang.Throwable -> L103
            com.kwad.sdk.crash.handler.AnrHandler r2 = getInstance()     // Catch: java.lang.Throwable -> L103
            java.io.File r2 = r2.mLogDir     // Catch: java.lang.Throwable -> L103
            r3 = 1
            boolean r4 = r2.exists()     // Catch: java.lang.Throwable -> Le2
            if (r4 != 0) goto L5f
            boolean r4 = r2.mkdirs()     // Catch: java.lang.Throwable -> Le2
            if (r4 != 0) goto L5f
            java.lang.String r4 = "AnrHandler"
            java.lang.String r5 = "ANR dumpAnr create dir failed."
            com.kwad.sdk.core.e.c.d(r4, r5)     // Catch: java.lang.Throwable -> Le2
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le2
            r4.<init>()     // Catch: java.lang.Throwable -> Le2
            java.lang.String r5 = r1.mErrorMessage     // Catch: java.lang.Throwable -> Le2
            r4.append(r5)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r5 = "create "
            r4.append(r5)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r5 = r2.getPath()     // Catch: java.lang.Throwable -> Le2
            r4.append(r5)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r5 = " failed!\n"
            r4.append(r5)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> Le2
            r1.mErrorMessage = r4     // Catch: java.lang.Throwable -> Le2
            r3 = 0
        L5f:
            if (r7 == 0) goto Lb4
            if (r3 == 0) goto Lb4
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> Le2
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le2
            r5.<init>()     // Catch: java.lang.Throwable -> Le2
            getInstance()     // Catch: java.lang.Throwable -> Le2
            java.lang.String r6 = com.kwad.sdk.crash.handler.AnrHandler.FILE_NAME_BASE     // Catch: java.lang.Throwable -> Le2
            r5.append(r6)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r6 = "-"
            r5.append(r6)     // Catch: java.lang.Throwable -> Le2
            r5.append(r8)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r6 = ".dump"
            r5.append(r6)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Le2
            r4.<init>(r2, r5)     // Catch: java.lang.Throwable -> Le2
            java.io.File r5 = new java.io.File     // Catch: java.lang.Throwable -> Le2
            r5.<init>(r7)     // Catch: java.lang.Throwable -> Le2
            com.kwad.sdk.utils.q.f(r5, r4)     // Catch: java.lang.Throwable -> Le2
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> Le2
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le2
            r5.<init>()     // Catch: java.lang.Throwable -> Le2
            getInstance()     // Catch: java.lang.Throwable -> Le2
            java.lang.String r6 = com.kwad.sdk.crash.handler.AnrHandler.FILE_NAME_BASE     // Catch: java.lang.Throwable -> Le2
            r5.append(r6)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r6 = "-"
            r5.append(r6)     // Catch: java.lang.Throwable -> Le2
            r5.append(r8)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r6 = ".log"
            r5.append(r6)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Le2
            r4.<init>(r2, r5)     // Catch: java.lang.Throwable -> Le2
            com.kwad.sdk.crash.utils.g.E(r4)     // Catch: java.lang.Throwable -> Le2
        Lb4:
            r2 = 0
            com.kwad.sdk.crash.e r4 = com.kwad.sdk.crash.e.EC()     // Catch: java.lang.Throwable -> Le2
            android.content.Context r4 = r4.getContext()     // Catch: java.lang.Throwable -> Le2
            com.kwad.sdk.crash.utils.g.b(r2, r1, r4)     // Catch: java.lang.Throwable -> Le2
            r2 = 3
            com.kwad.sdk.crash.utils.g.a(r1, r2)     // Catch: java.lang.Throwable -> Le2
            com.kwad.sdk.crash.handler.AnrHandler r2 = getInstance()     // Catch: java.lang.Throwable -> Le2
            com.kwad.sdk.crash.f r2 = r2.mExceptionListener     // Catch: java.lang.Throwable -> Le2
            if (r2 == 0) goto Ldd
            com.kwad.sdk.crash.handler.AnrHandler r2 = getInstance()     // Catch: java.lang.Throwable -> Le2
            com.kwad.sdk.crash.f r2 = r2.mExceptionListener     // Catch: java.lang.Throwable -> Le2
            com.kwad.sdk.crash.handler.AnrHandler r4 = getInstance()     // Catch: java.lang.Throwable -> Le2
            int r4 = r4.getCrashType()     // Catch: java.lang.Throwable -> Le2
            r2.a(r4, r1)     // Catch: java.lang.Throwable -> Le2
        Ldd:
            dumpAnrReason(r7, r8, r1, r3)     // Catch: java.lang.Throwable -> L103
            monitor-exit(r0)
            return
        Le2:
            r2 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfe
            r4.<init>()     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r5 = r1.mErrorMessage     // Catch: java.lang.Throwable -> Lfe
            r4.append(r5)     // Catch: java.lang.Throwable -> Lfe
            r4.append(r2)     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> Lfe
            r1.mErrorMessage = r4     // Catch: java.lang.Throwable -> Lfe
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)     // Catch: java.lang.Throwable -> Lfe
            dumpAnrReason(r7, r8, r1, r3)     // Catch: java.lang.Throwable -> L103
            monitor-exit(r0)
            return
        Lfe:
            r2 = move-exception
            dumpAnrReason(r7, r8, r1, r3)     // Catch: java.lang.Throwable -> L103
            throw r2     // Catch: java.lang.Throwable -> L103
        L103:
            r7 = move-exception
            monitor-exit(r0)
            throw r7
    }

    private static void dumpAnrReason(java.lang.String r10, int r11, com.kwad.sdk.crash.model.message.AnrExceptionMessage r12, boolean r13) {
            java.lang.String r0 = "-"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "ANR dumpAnrReason tracePath="
            r1.<init>(r2)
            r1.append(r10)
            java.lang.String r2 = " index="
            r1.append(r2)
            r1.append(r11)
            java.lang.String r2 = " dirReady="
            r1.append(r2)
            r1.append(r13)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "AnrHandler"
            com.kwad.sdk.core.e.c.d(r2, r1)
            com.kwad.sdk.crash.handler.AnrHandler r1 = getInstance()
            com.kwad.sdk.crash.report.e r1 = r1.getUploader()
            com.kwad.sdk.crash.handler.AnrHandler r3 = getInstance()     // Catch: java.lang.Throwable -> L119
            java.io.File r3 = r3.mLogDir     // Catch: java.lang.Throwable -> L119
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L119
            r4.<init>()     // Catch: java.lang.Throwable -> L119
            com.kwad.sdk.crash.handler.AnrHandler$2 r5 = new com.kwad.sdk.crash.handler.AnrHandler$2     // Catch: java.lang.Throwable -> L119
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L119
            android.os.Looper r6 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L119
            java.lang.String r7 = ""
            r6.dump(r5, r7)     // Catch: java.lang.Throwable -> L119
            r5 = 0
            int r6 = r4.length()     // Catch: java.lang.Throwable -> L119
            int r6 = r6 + (-1)
            java.lang.String r4 = r4.substring(r5, r6)     // Catch: java.lang.Throwable -> L119
            r12.mMessageQueueDetail = r4     // Catch: java.lang.Throwable -> L119
            org.json.JSONObject r4 = r12.toJson()     // Catch: java.lang.Throwable -> L119
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L119
            java.io.File r5 = new java.io.File     // Catch: java.lang.Throwable -> L119
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L119
            r6.<init>()     // Catch: java.lang.Throwable -> L119
            getInstance()     // Catch: java.lang.Throwable -> L119
            java.lang.String r7 = com.kwad.sdk.crash.handler.AnrHandler.FILE_NAME_BASE     // Catch: java.lang.Throwable -> L119
            r6.append(r7)     // Catch: java.lang.Throwable -> L119
            r6.append(r0)     // Catch: java.lang.Throwable -> L119
            r6.append(r11)     // Catch: java.lang.Throwable -> L119
            java.lang.String r7 = ".dump"
            r6.append(r7)     // Catch: java.lang.Throwable -> L119
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L119
            r5.<init>(r3, r6)     // Catch: java.lang.Throwable -> L119
            java.lang.String r6 = "------ ANR Happened Begin ------\n"
            if (r13 == 0) goto Le4
            java.io.File r13 = new java.io.File     // Catch: java.lang.Throwable -> L119
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L119
            r7.<init>()     // Catch: java.lang.Throwable -> L119
            getInstance()     // Catch: java.lang.Throwable -> L119
            java.lang.String r8 = com.kwad.sdk.crash.handler.AnrHandler.FILE_NAME_BASE     // Catch: java.lang.Throwable -> L119
            r7.append(r8)     // Catch: java.lang.Throwable -> L119
            r7.append(r0)     // Catch: java.lang.Throwable -> L119
            r7.append(r11)     // Catch: java.lang.Throwable -> L119
            java.lang.String r8 = ".msg"
            r7.append(r8)     // Catch: java.lang.Throwable -> L119
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L119
            r13.<init>(r3, r7)     // Catch: java.lang.Throwable -> L119
            java.io.File r7 = new java.io.File     // Catch: java.lang.Throwable -> L119
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L119
            r8.<init>()     // Catch: java.lang.Throwable -> L119
            getInstance()     // Catch: java.lang.Throwable -> L119
            java.lang.String r9 = com.kwad.sdk.crash.handler.AnrHandler.FILE_NAME_BASE     // Catch: java.lang.Throwable -> L119
            r8.append(r9)     // Catch: java.lang.Throwable -> L119
            r8.append(r0)     // Catch: java.lang.Throwable -> L119
            r8.append(r11)     // Catch: java.lang.Throwable -> L119
            java.lang.String r9 = ".minfo"
            r8.append(r9)     // Catch: java.lang.Throwable -> L119
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L119
            r7.<init>(r3, r8)     // Catch: java.lang.Throwable -> L119
            com.kwad.sdk.crash.utils.g.a(r13, r4)     // Catch: java.lang.Throwable -> L119
            com.kwad.sdk.crash.handler.AnrHandler r13 = getInstance()     // Catch: java.lang.Throwable -> L119
            r13.backupLogFiles(r3)     // Catch: java.lang.Throwable -> L119
            if (r1 == 0) goto Ld6
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L119
            r13.<init>(r6)     // Catch: java.lang.Throwable -> L119
            r13.append(r12)     // Catch: java.lang.Throwable -> L119
        Ld6:
            com.kwad.sdk.crash.utils.g.a(r1, r2, r5)     // Catch: java.lang.Throwable -> L119
            com.kwad.sdk.crash.handler.AnrHandler r12 = getInstance()     // Catch: java.lang.Throwable -> L119
            r12.uploadRemainingExceptions()     // Catch: java.lang.Throwable -> L119
            com.kwad.sdk.crash.utils.g.H(r7)     // Catch: java.lang.Throwable -> L119
            goto Lf4
        Le4:
            if (r1 == 0) goto Lf4
            if (r10 == 0) goto Lec
            r13 = 0
            r1.a(r12, r13)     // Catch: java.lang.Throwable -> L119
        Lec:
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L119
            r13.<init>(r6)     // Catch: java.lang.Throwable -> L119
            r13.append(r12)     // Catch: java.lang.Throwable -> L119
        Lf4:
            java.io.File r12 = new java.io.File     // Catch: java.lang.Throwable -> L119
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L119
            r13.<init>()     // Catch: java.lang.Throwable -> L119
            getInstance()     // Catch: java.lang.Throwable -> L119
            java.lang.String r2 = com.kwad.sdk.crash.handler.AnrHandler.FILE_NAME_BASE     // Catch: java.lang.Throwable -> L119
            r13.append(r2)     // Catch: java.lang.Throwable -> L119
            r13.append(r0)     // Catch: java.lang.Throwable -> L119
            r13.append(r11)     // Catch: java.lang.Throwable -> L119
            java.lang.String r11 = ".anr"
            r13.append(r11)     // Catch: java.lang.Throwable -> L119
            java.lang.String r11 = r13.toString()     // Catch: java.lang.Throwable -> L119
            r12.<init>(r3, r11)     // Catch: java.lang.Throwable -> L119
            getAnrReason(r10, r12)     // Catch: java.lang.Throwable -> L119
            return
        L119:
            r10 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r10)
            if (r1 == 0) goto L122
            com.kwad.sdk.crash.utils.g.p(r10)
        L122:
            return
    }

    private static void getAnrReason(java.lang.String r2, java.io.File r3) {
            java.lang.String r0 = "AnrHandler"
            java.lang.String r1 = "ANR getAnrReason"
            com.kwad.sdk.core.e.c.d(r0, r1)
            if (r2 != 0) goto L16
            com.kwad.sdk.crash.handler.AnrHandler$3 r2 = new com.kwad.sdk.crash.handler.AnrHandler$3
            r2.<init>(r3)
            r0 = 0
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS
            com.kwad.sdk.utils.g.schedule(r2, r0, r3)
            return
        L16:
            getAnrReasonInner(r2, r3)
            return
    }

    private static void getAnrReasonInner(java.lang.String r7, java.io.File r8) {
            java.lang.String r0 = "AnrHandler"
            java.lang.String r1 = "ANR getAnrReasonInner"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.sdk.crash.handler.AnrHandler r0 = getInstance()
            com.kwad.sdk.crash.report.e r0 = r0.getUploader()
            if (r7 == 0) goto L2b
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> La1
            r1.<init>(r7)     // Catch: java.lang.Throwable -> La1
            long r1 = r1.lastModified()     // Catch: java.lang.Throwable -> La1
            long r3 = com.kwad.sdk.crash.handler.AnrHandler.sLastTime     // Catch: java.lang.Throwable -> La1
            long r3 = r1 - r3
            long r3 = java.lang.Math.abs(r3)     // Catch: java.lang.Throwable -> La1
            r5 = 10000(0x2710, double:4.9407E-320)
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 >= 0) goto L29
            return
        L29:
            com.kwad.sdk.crash.handler.AnrHandler.sLastTime = r1     // Catch: java.lang.Throwable -> La1
        L2b:
            com.kwad.sdk.crash.e r7 = com.kwad.sdk.crash.e.EC()     // Catch: java.lang.Throwable -> La1
            android.content.Context r7 = r7.getContext()     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = "activity"
            java.lang.Object r7 = r7.getSystemService(r1)     // Catch: java.lang.Throwable -> La1
            android.app.ActivityManager r7 = (android.app.ActivityManager) r7     // Catch: java.lang.Throwable -> La1
            r1 = 0
            if (r7 != 0) goto L3f
            return
        L3f:
            r2 = 0
        L40:
            long r3 = (long) r2     // Catch: java.lang.Throwable -> La1
            r5 = 20
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 >= 0) goto L6d
            java.util.List r3 = r7.getProcessesInErrorState()     // Catch: java.lang.Throwable -> La1
            if (r3 == 0) goto L63
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> La1
        L51:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> La1
            if (r4 == 0) goto L63
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> La1
            android.app.ActivityManager$ProcessErrorStateInfo r4 = (android.app.ActivityManager.ProcessErrorStateInfo) r4     // Catch: java.lang.Throwable -> La1
            int r5 = r4.condition     // Catch: java.lang.Throwable -> La1
            r6 = 2
            if (r5 != r6) goto L51
            r1 = r4
        L63:
            if (r1 != 0) goto L6d
            r3 = 500(0x1f4, double:2.47E-321)
            java.lang.Thread.sleep(r3)     // Catch: java.lang.Throwable -> La1
            int r2 = r2 + 1
            goto L40
        L6d:
            if (r1 != 0) goto L70
            return
        L70:
            int r7 = r1.pid     // Catch: java.lang.Throwable -> La1
            int r2 = com.kwad.sdk.crash.handler.AnrHandler.MY_PID     // Catch: java.lang.Throwable -> La1
            if (r7 == r2) goto L85
            if (r0 == 0) goto L84
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La1
            java.lang.String r8 = "other process anr:\n"
            r7.<init>(r8)     // Catch: java.lang.Throwable -> La1
            java.lang.String r8 = r1.shortMsg     // Catch: java.lang.Throwable -> La1
            r7.append(r8)     // Catch: java.lang.Throwable -> La1
        L84:
            return
        L85:
            com.kwad.sdk.crash.model.message.AnrReason r7 = new com.kwad.sdk.crash.model.message.AnrReason     // Catch: java.lang.Throwable -> La1
            r7.<init>()     // Catch: java.lang.Throwable -> La1
            java.lang.String r2 = r1.tag     // Catch: java.lang.Throwable -> La1
            r7.mTag = r2     // Catch: java.lang.Throwable -> La1
            java.lang.String r2 = r1.shortMsg     // Catch: java.lang.Throwable -> La1
            r7.mShortMsg = r2     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = r1.longMsg     // Catch: java.lang.Throwable -> La1
            r7.mLongMsg = r1     // Catch: java.lang.Throwable -> La1
            org.json.JSONObject r7 = r7.toJson()     // Catch: java.lang.Throwable -> La1
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> La1
            com.kwad.sdk.crash.utils.g.a(r8, r7)     // Catch: java.lang.Throwable -> La1
        La1:
            return
    }

    public static com.kwad.sdk.crash.handler.AnrHandler getInstance() {
            com.kwad.sdk.crash.handler.AnrHandler r0 = com.kwad.sdk.crash.handler.AnrHandler.a.ER()
            return r0
    }

    public static native void install(java.lang.String r0, int r1);

    public static void onCallFromNative(int r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "ANR onCallFromNative index="
            r0.<init>(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AnrHandler"
            com.kwad.sdk.core.e.c.d(r1, r0)
            r0 = 0
            dumpAnr(r0, r2)
            return
    }

    private void onTraceFileWritten(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "AnrHandler"
            java.lang.String r1 = "ANR onTraceFileWritten"
            com.kwad.sdk.core.e.c.d(r0, r1)
            boolean r0 = r2.parseTraceFile(r3)
            if (r0 == 0) goto L16
            java.util.concurrent.atomic.AtomicInteger r0 = r2.mIndex
            int r0 = r0.getAndIncrement()
            dumpAnr(r3, r0)
        L16:
            return
    }

    private boolean parseTraceFile(java.lang.String r5) {
            r4 = this;
            r0 = 0
            r1 = 0
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L3c java.lang.Throwable -> L3e
            java.io.FileReader r3 = new java.io.FileReader     // Catch: java.lang.Throwable -> L3c java.lang.Throwable -> L3e
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L3c java.lang.Throwable -> L3e
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L3c java.lang.Throwable -> L3e
            r5 = -1
        Ld:
            java.lang.String r1 = r2.readLine()     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L38 java.io.FileNotFoundException -> L3a
            if (r1 == 0) goto L2c
            java.util.regex.Pattern r3 = com.kwad.sdk.crash.handler.AnrHandler.PID_PATTERN     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L38 java.io.FileNotFoundException -> L3a
            java.util.regex.Matcher r3 = r3.matcher(r1)     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L38 java.io.FileNotFoundException -> L3a
            boolean r3 = r3.matches()     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L38 java.io.FileNotFoundException -> L3a
            if (r3 == 0) goto Ld
            java.lang.String r5 = "\\s"
            java.lang.String[] r5 = r1.split(r5)     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L38 java.io.FileNotFoundException -> L3a
            r1 = 2
            r5 = r5[r1]     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L38 java.io.FileNotFoundException -> L3a
            int r5 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L38 java.io.FileNotFoundException -> L3a
        L2c:
            int r1 = com.kwad.sdk.crash.handler.AnrHandler.MY_PID     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L38 java.io.FileNotFoundException -> L3a
            if (r5 != r1) goto L31
            r0 = 1
        L31:
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            return r0
        L35:
            r5 = move-exception
            r1 = r2
            goto L45
        L38:
            r1 = r2
            goto L3e
        L3a:
            r1 = r2
            goto L3e
        L3c:
            r5 = move-exception
            goto L45
        L3e:
            r4.getUploader()     // Catch: java.lang.Throwable -> L3c
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return r0
        L45:
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            throw r5
    }

    private void watchTraceFile() {
            r3 = this;
            java.lang.String r0 = "AnrHandler"
            java.lang.String r1 = "ANR watchTraceFile"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.sdk.crash.handler.AnrHandler$1 r0 = new com.kwad.sdk.crash.handler.AnrHandler$1
            java.lang.String r1 = "/data/anr/"
            r2 = 8
            r0.<init>(r3, r1, r2)
            r3.mTraceFileObserver = r0
            r0.startWatching()     // Catch: java.lang.Throwable -> L16
            return
        L16:
            com.kwad.sdk.crash.handler.AnrHandler r0 = getInstance()
            r0.getUploader()
            return
    }

    @Override
    protected final int getCrashType() {
            r1 = this;
            r0 = 3
            return r0
    }

    @Override
    public final void init(java.io.File r1, com.kwad.sdk.crash.f r2, com.kwad.sdk.crash.report.e r3) {
            r0 = this;
            super.init(r1, r2, r3)
            boolean r2 = com.kwad.sdk.crash.b.Em()
            if (r2 != 0) goto La
            return
        La:
            java.lang.String r2 = "AnrHandler"
            java.lang.String r3 = "ANR init"
            com.kwad.sdk.core.e.c.d(r2, r3)
            r0.mLogDir = r1
            java.io.File r1 = r0.mLogDir
            boolean r1 = r1.exists()
            if (r1 != 0) goto L20
            java.io.File r1 = r0.mLogDir
            r1.mkdirs()
        L20:
            java.io.File r1 = new java.io.File
            java.io.File r2 = r0.mLogDir
            java.lang.String r3 = com.kwad.sdk.crash.handler.AnrHandler.FILE_NAME_BASE
            r1.<init>(r2, r3)
            boolean r2 = com.kwad.sdk.crash.handler.AnrHandler.DUMP_FROM_SIG_QUIT
            if (r2 != 0) goto L31
            r0.watchTraceFile()
            return
        L31:
            java.lang.String r1 = r1.getPath()     // Catch: java.lang.Throwable -> L3b
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L3b
            install(r1, r2)     // Catch: java.lang.Throwable -> L3b
            return
        L3b:
            r0.getUploader()
            return
    }

    @Override
    protected final void reportException(java.io.File[] r5, java.util.concurrent.CountDownLatch r6) {
            r4 = this;
            com.kwad.sdk.crash.report.b r0 = new com.kwad.sdk.crash.report.b
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

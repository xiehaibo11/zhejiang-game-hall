package com.kwad.sdk.crash.handler;

public abstract class b {
    public static final java.lang.String FILE_NAME_BASE = null;
    private static final int REAL_TIME_UPLOAD_THRESHOLD = 2;
    public static java.io.File sBackupDir;
    protected java.io.File mDumpFile;
    protected com.kwad.sdk.crash.f mExceptionListener;
    protected java.util.concurrent.atomic.AtomicInteger mIndex;
    protected java.io.File mJavaTraceFile;
    protected java.io.File mLogDir;
    protected java.io.File mLogFile;
    protected java.io.File mMemoryInfoFile;
    protected com.kwad.sdk.crash.report.e mUploader;


    static {
            java.util.UUID r0 = java.util.UUID.randomUUID()
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.crash.handler.b.FILE_NAME_BASE = r0
            return
    }

    public b() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r0.<init>()
            r1.mIndex = r0
            return
    }

    public static void initBackupDir(java.io.File r0) {
            com.kwad.sdk.crash.handler.b.sBackupDir = r0
            boolean r0 = r0.exists()
            if (r0 != 0) goto Ld
            java.io.File r0 = com.kwad.sdk.crash.handler.b.sBackupDir
            r0.mkdirs()
        Ld:
            return
    }

    void backupLogFiles(java.io.File r2) {
            r1 = this;
            java.io.File r0 = com.kwad.sdk.crash.handler.b.sBackupDir
            if (r0 != 0) goto L5
            return
        L5:
            boolean r0 = r0.exists()
            if (r0 != 0) goto L10
            java.io.File r0 = com.kwad.sdk.crash.handler.b.sBackupDir
            r0.mkdirs()
        L10:
            java.io.File r2 = r2.getParentFile()     // Catch: java.io.IOException -> L1e
            java.io.File r2 = r2.getParentFile()     // Catch: java.io.IOException -> L1e
            java.io.File r0 = com.kwad.sdk.crash.handler.b.sBackupDir     // Catch: java.io.IOException -> L1e
            com.kwad.sdk.utils.q.g(r2, r0)     // Catch: java.io.IOException -> L1e
            return
        L1e:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
            return
    }

    public com.kwad.sdk.crash.f getCrashListener() {
            r1 = this;
            com.kwad.sdk.crash.f r0 = r1.mExceptionListener
            return r0
    }

    protected abstract int getCrashType();

    public final com.kwad.sdk.crash.report.e getUploader() {
            r1 = this;
            com.kwad.sdk.crash.report.e r0 = r1.mUploader
            return r0
    }

    public void init(java.io.File r5, com.kwad.sdk.crash.f r6, com.kwad.sdk.crash.report.e r7) {
            r4 = this;
            r4.mLogDir = r5
            boolean r5 = r5.exists()
            if (r5 != 0) goto Ld
            java.io.File r5 = r4.mLogDir
            r5.mkdirs()
        Ld:
            java.io.File r5 = new java.io.File
            java.io.File r0 = r4.mLogDir
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.kwad.sdk.crash.handler.b.FILE_NAME_BASE
            r1.append(r2)
            java.lang.String r2 = "-"
            r1.append(r2)
            java.util.concurrent.atomic.AtomicInteger r3 = r4.mIndex
            r1.append(r3)
            java.lang.String r3 = ".dump"
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r5.<init>(r0, r1)
            r4.mDumpFile = r5
            java.io.File r5 = new java.io.File
            java.io.File r0 = r4.mLogDir
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = com.kwad.sdk.crash.handler.b.FILE_NAME_BASE
            r1.append(r3)
            r1.append(r2)
            java.util.concurrent.atomic.AtomicInteger r3 = r4.mIndex
            r1.append(r3)
            java.lang.String r3 = ".log"
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r5.<init>(r0, r1)
            r4.mLogFile = r5
            java.io.File r5 = new java.io.File
            java.io.File r0 = r4.mLogDir
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = com.kwad.sdk.crash.handler.b.FILE_NAME_BASE
            r1.append(r3)
            r1.append(r2)
            java.util.concurrent.atomic.AtomicInteger r3 = r4.mIndex
            r1.append(r3)
            java.lang.String r3 = ".jtrace"
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r5.<init>(r0, r1)
            r4.mJavaTraceFile = r5
            java.io.File r5 = new java.io.File
            java.io.File r0 = r4.mLogDir
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = com.kwad.sdk.crash.handler.b.FILE_NAME_BASE
            r1.append(r3)
            r1.append(r2)
            java.util.concurrent.atomic.AtomicInteger r2 = r4.mIndex
            r1.append(r2)
            java.lang.String r2 = ".minfo"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r5.<init>(r0, r1)
            r4.mMemoryInfoFile = r5
            r4.mExceptionListener = r6
            r4.mUploader = r7
            return
    }

    protected abstract void reportException(java.io.File[] r1, java.util.concurrent.CountDownLatch r2);

    void uploadRemainingExceptions() {
            r4 = this;
            java.io.File r0 = r4.mLogDir
            com.kwad.sdk.crash.handler.b$1 r1 = new com.kwad.sdk.crash.handler.b$1
            r1.<init>(r4)
            java.io.File[] r0 = r0.listFiles(r1)
            if (r0 == 0) goto L26
            int r1 = r0.length
            r2 = 2
            if (r1 <= r2) goto L26
            java.util.concurrent.CountDownLatch r1 = new java.util.concurrent.CountDownLatch
            int r2 = r0.length
            r1.<init>(r2)
            r4.reportException(r0, r1)
            r2 = 5
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.InterruptedException -> L22
            r1.await(r2, r0)     // Catch: java.lang.InterruptedException -> L22
            return
        L22:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        L26:
            return
    }
}

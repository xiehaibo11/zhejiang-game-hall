package com.kwad.sdk.crash.handler;

import com.kwad.sdk.crash.f;
import com.kwad.sdk.crash.report.e;
import com.kwad.sdk.utils.q;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.io.FileFilter;
import java.io.IOException;
import java.util.UUID;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes2.dex */
public abstract class b {
    public static final String FILE_NAME_BASE = UUID.randomUUID().toString();
    private static final int REAL_TIME_UPLOAD_THRESHOLD = 2;
    public static File sBackupDir;
    protected File mDumpFile;
    protected f mExceptionListener;
    protected AtomicInteger mIndex = new AtomicInteger();
    protected File mJavaTraceFile;
    protected File mLogDir;
    protected File mLogFile;
    protected File mMemoryInfoFile;
    protected e mUploader;

    public static void initBackupDir(File file) {
        sBackupDir = file;
        if (file.exists()) {
            return;
        }
        sBackupDir.mkdirs();
    }

    void backupLogFiles(File file) throws Throwable {
        File file2 = sBackupDir;
        if (file2 == null) {
            return;
        }
        if (!file2.exists()) {
            sBackupDir.mkdirs();
        }
        try {
            q.g(file.getParentFile().getParentFile(), sBackupDir);
        } catch (IOException e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
    }

    public f getCrashListener() {
        return this.mExceptionListener;
    }

    protected abstract int getCrashType();

    public final e getUploader() {
        return this.mUploader;
    }

    public void init(File file, f fVar, e eVar) {
        this.mLogDir = file;
        if (!file.exists()) {
            this.mLogDir.mkdirs();
        }
        this.mDumpFile = new File(this.mLogDir, FILE_NAME_BASE + Constants.ACCEPT_TIME_SEPARATOR_SERVER + this.mIndex + ".dump");
        this.mLogFile = new File(this.mLogDir, FILE_NAME_BASE + Constants.ACCEPT_TIME_SEPARATOR_SERVER + this.mIndex + com.tkay.china.common.a.a.f);
        this.mJavaTraceFile = new File(this.mLogDir, FILE_NAME_BASE + Constants.ACCEPT_TIME_SEPARATOR_SERVER + this.mIndex + ".jtrace");
        this.mMemoryInfoFile = new File(this.mLogDir, FILE_NAME_BASE + Constants.ACCEPT_TIME_SEPARATOR_SERVER + this.mIndex + ".minfo");
        this.mExceptionListener = fVar;
        this.mUploader = eVar;
    }

    protected abstract void reportException(File[] fileArr, CountDownLatch countDownLatch);

    void uploadRemainingExceptions() {
        File[] fileArrListFiles = this.mLogDir.listFiles(new FileFilter() { // from class: com.kwad.sdk.crash.handler.b.1
            @Override // java.io.FileFilter
            public final boolean accept(File file) {
                return file.getName().endsWith(".dump");
            }
        });
        if (fileArrListFiles == null || fileArrListFiles.length <= 2) {
            return;
        }
        CountDownLatch countDownLatch = new CountDownLatch(fileArrListFiles.length);
        reportException(fileArrListFiles, countDownLatch);
        try {
            countDownLatch.await(5L, TimeUnit.SECONDS);
        } catch (InterruptedException e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
    }
}

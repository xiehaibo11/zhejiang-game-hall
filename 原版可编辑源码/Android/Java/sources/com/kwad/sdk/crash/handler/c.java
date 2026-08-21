package com.kwad.sdk.crash.handler;

import android.content.Context;
import com.kwad.sdk.crash.f;
import com.kwad.sdk.crash.model.message.ExceptionMessage;
import com.kwad.sdk.crash.report.e;
import com.kwad.sdk.crash.utils.g;
import com.kwad.sdk.service.ServiceProvider;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;

public final class c extends b {

    static class a {
        private static final c aAi = new c(0);
    }

    private c() {
    }

    c(byte b) {
        this();
    }

    public static c ES() {
        return a.aAi;
    }

    /* JADX WARN: Removed duplicated region for block: B:106:0x0225  */
    /* JADX WARN: Removed duplicated region for block: B:11:0x005e  */
    /* JADX WARN: Removed duplicated region for block: B:166:0x008c A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:181:0x00da A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:191:0x00b3 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:26:0x00b1 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:32:0x00d8 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:39:0x010b A[Catch: all -> 0x018f, TRY_LEAVE, TryCatch #10 {all -> 0x018f, blocks: (B:37:0x00fd, B:39:0x010b), top: B:173:0x00fd }] */
    /* JADX WARN: Removed duplicated region for block: B:42:0x011e A[Catch: all -> 0x0186, TryCatch #5 {all -> 0x0186, blocks: (B:40:0x0114, B:42:0x011e, B:44:0x0131, B:46:0x0138, B:48:0x0142, B:49:0x0150, B:51:0x0158, B:52:0x015b, B:54:0x0162, B:56:0x0167, B:58:0x016f, B:60:0x017c), top: B:165:0x0114 }] */
    /* JADX WARN: Removed duplicated region for block: B:53:0x0160  */
    /* JADX WARN: Removed duplicated region for block: B:95:0x01e4 A[Catch: all -> 0x024a, TryCatch #8 {all -> 0x024a, blocks: (B:93:0x01da, B:95:0x01e4, B:97:0x01f7, B:99:0x01fe, B:101:0x0208, B:102:0x0216, B:104:0x021e, B:105:0x0221, B:107:0x0227, B:109:0x022c, B:111:0x0234, B:113:0x0241), top: B:170:0x01da }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void a(Throwable th, ExceptionMessage exceptionMessage, Context context, boolean z) throws Throwable {
        boolean z2;
        int andIncrement = this.mIndex.getAndIncrement();
        File file = this.mDumpFile;
        File file2 = this.mLogFile;
        File file3 = this.mJavaTraceFile;
        File file4 = this.mMemoryInfoFile;
        e uploader = getUploader();
        try {
            exceptionMessage.mCrashDetail = th.toString();
            if (!this.mLogDir.exists()) {
                try {
                    if (this.mLogDir.mkdirs()) {
                        z2 = true;
                    } else {
                        exceptionMessage.mErrorMessage += "create " + ES().mLogDir.getPath() + " failed!\n";
                        z2 = false;
                    }
                    if (file == null || andIncrement != 0) {
                        try {
                            File file5 = this.mLogDir;
                            StringBuilder sb = new StringBuilder();
                            try {
                                sb.append(FILE_NAME_BASE);
                                sb.append(Constants.ACCEPT_TIME_SEPARATOR_SERVER);
                                sb.append(andIncrement);
                                sb.append(".dump");
                                file = new File(file5, sb.toString());
                                if (file2 != null || andIncrement != 0) {
                                    try {
                                        File file6 = this.mLogDir;
                                        StringBuilder sb2 = new StringBuilder();
                                        try {
                                            sb2.append(FILE_NAME_BASE);
                                            sb2.append(Constants.ACCEPT_TIME_SEPARATOR_SERVER);
                                            sb2.append(andIncrement);
                                            sb2.append(com.tkay.china.common.a.a.f);
                                            file2 = new File(file6, sb2.toString());
                                            if (file3 == null || andIncrement != 0) {
                                                try {
                                                    File file7 = this.mLogDir;
                                                    StringBuilder sb3 = new StringBuilder();
                                                    try {
                                                        sb3.append(FILE_NAME_BASE);
                                                        sb3.append(Constants.ACCEPT_TIME_SEPARATOR_SERVER);
                                                        sb3.append(andIncrement);
                                                        sb3.append(".jtrace");
                                                        file3 = new File(file7, sb3.toString());
                                                        if (file4 == null || andIncrement != 0) {
                                                            try {
                                                                File file8 = this.mLogDir;
                                                                StringBuilder sb4 = new StringBuilder();
                                                                try {
                                                                    sb4.append(FILE_NAME_BASE);
                                                                    sb4.append(Constants.ACCEPT_TIME_SEPARATOR_SERVER);
                                                                    sb4.append(andIncrement);
                                                                    sb4.append(".minfo");
                                                                    file4 = new File(file8, sb4.toString());
                                                                    try {
                                                                        g.b(th, exceptionMessage, context);
                                                                        g.a(exceptionMessage, getCrashType());
                                                                        if (this.mExceptionListener != null) {
                                                                            this.mExceptionListener.a(getCrashType(), exceptionMessage);
                                                                        }
                                                                        try {
                                                                            String string = exceptionMessage.toJson().toString();
                                                                            if (!z2) {
                                                                                if (uploader != null) {
                                                                                    com.kwad.sdk.core.e.c.d("ExceptionCollector", "uploader.uploadEvent(message);");
                                                                                    CountDownLatch countDownLatch = z ? new CountDownLatch(1) : null;
                                                                                    uploader.a(exceptionMessage, countDownLatch);
                                                                                    new StringBuilder("------  Java Crash Happened Begin ------\n").append(exceptionMessage);
                                                                                    if (countDownLatch != null) {
                                                                                        try {
                                                                                            countDownLatch.await(5L, TimeUnit.SECONDS);
                                                                                            return;
                                                                                        } catch (InterruptedException unused) {
                                                                                            return;
                                                                                        }
                                                                                    }
                                                                                    return;
                                                                                }
                                                                                return;
                                                                            }
                                                                            g.a(file, string);
                                                                            g.G(file3);
                                                                            g.E(file2);
                                                                            if (com.kwad.sdk.crash.e.EC().isDebug()) {
                                                                                backupLogFiles(this.mLogDir);
                                                                            }
                                                                            if (uploader != null) {
                                                                                new StringBuilder("------  Java Crash Happened Begin ------\n").append(exceptionMessage);
                                                                                if (z) {
                                                                                    CountDownLatch countDownLatch2 = new CountDownLatch(1);
                                                                                    reportException(new File[]{file}, countDownLatch2);
                                                                                    try {
                                                                                        countDownLatch2.await(5L, TimeUnit.SECONDS);
                                                                                    } catch (InterruptedException unused2) {
                                                                                    }
                                                                                } else {
                                                                                    uploadRemainingExceptions();
                                                                                }
                                                                            }
                                                                            g.H(file4);
                                                                            return;
                                                                        } catch (Throwable th2) {
                                                                            if (uploader != null) {
                                                                                try {
                                                                                    g.p(th2);
                                                                                    return;
                                                                                } catch (Exception unused3) {
                                                                                    return;
                                                                                }
                                                                            }
                                                                            return;
                                                                        }
                                                                    } catch (Throwable th3) {
                                                                        th = th3;
                                                                    }
                                                                } catch (Throwable th4) {
                                                                    th = th4;
                                                                    file4 = file4;
                                                                }
                                                            } catch (Throwable th5) {
                                                                th = th5;
                                                            }
                                                        } else {
                                                            g.b(th, exceptionMessage, context);
                                                            g.a(exceptionMessage, getCrashType());
                                                            if (this.mExceptionListener != null) {
                                                            }
                                                            String string2 = exceptionMessage.toJson().toString();
                                                            if (!z2) {
                                                            }
                                                        }
                                                    } catch (Throwable th6) {
                                                        th = th6;
                                                        file3 = file3;
                                                    }
                                                } catch (Throwable th7) {
                                                    th = th7;
                                                    exceptionMessage.mErrorMessage += th;
                                                    try {
                                                        String string3 = exceptionMessage.toJson().toString();
                                                        if (z2) {
                                                        }
                                                    } catch (Throwable th8) {
                                                        if (uploader != null) {
                                                            try {
                                                                g.p(th8);
                                                                return;
                                                            } catch (Exception unused4) {
                                                                return;
                                                            }
                                                        }
                                                        return;
                                                    }
                                                }
                                            } else if (file4 == null) {
                                                File file82 = this.mLogDir;
                                                StringBuilder sb42 = new StringBuilder();
                                                sb42.append(FILE_NAME_BASE);
                                                sb42.append(Constants.ACCEPT_TIME_SEPARATOR_SERVER);
                                                sb42.append(andIncrement);
                                                sb42.append(".minfo");
                                                file4 = new File(file82, sb42.toString());
                                                g.b(th, exceptionMessage, context);
                                                g.a(exceptionMessage, getCrashType());
                                                if (this.mExceptionListener != null) {
                                                }
                                                String string22 = exceptionMessage.toJson().toString();
                                                if (!z2) {
                                                }
                                            }
                                        } catch (Throwable th9) {
                                            th = th9;
                                            file2 = file2;
                                        }
                                    } catch (Throwable th10) {
                                        th = th10;
                                        exceptionMessage.mErrorMessage += th;
                                        String string32 = exceptionMessage.toJson().toString();
                                        if (z2) {
                                        }
                                    }
                                } else if (file3 == null) {
                                    File file72 = this.mLogDir;
                                    StringBuilder sb32 = new StringBuilder();
                                    sb32.append(FILE_NAME_BASE);
                                    sb32.append(Constants.ACCEPT_TIME_SEPARATOR_SERVER);
                                    sb32.append(andIncrement);
                                    sb32.append(".jtrace");
                                    file3 = new File(file72, sb32.toString());
                                    if (file4 == null) {
                                    }
                                }
                            } catch (Throwable th11) {
                                th = th11;
                                file = file;
                            }
                        } catch (Throwable th12) {
                            th = th12;
                            exceptionMessage.mErrorMessage += th;
                            String string322 = exceptionMessage.toJson().toString();
                            if (z2) {
                            }
                        }
                    } else if (file2 != null) {
                        File file62 = this.mLogDir;
                        StringBuilder sb22 = new StringBuilder();
                        sb22.append(FILE_NAME_BASE);
                        sb22.append(Constants.ACCEPT_TIME_SEPARATOR_SERVER);
                        sb22.append(andIncrement);
                        sb22.append(com.tkay.china.common.a.a.f);
                        file2 = new File(file62, sb22.toString());
                        if (file3 == null) {
                        }
                    }
                } catch (Throwable th13) {
                    th = th13;
                    z2 = true;
                }
            }
        } catch (Throwable th14) {
            th = th14;
        }
        try {
            exceptionMessage.mErrorMessage += th;
            String string3222 = exceptionMessage.toJson().toString();
            if (z2) {
                if (uploader != null) {
                    com.kwad.sdk.core.e.c.d("ExceptionCollector", "uploader.uploadEvent(message);");
                    CountDownLatch countDownLatch3 = z ? new CountDownLatch(1) : null;
                    uploader.a(exceptionMessage, countDownLatch3);
                    new StringBuilder("------  Java Crash Happened Begin ------\n").append(exceptionMessage);
                    if (countDownLatch3 != null) {
                        try {
                            countDownLatch3.await(5L, TimeUnit.SECONDS);
                            return;
                        } catch (InterruptedException unused5) {
                            return;
                        }
                    }
                    return;
                }
                return;
            }
            g.a(file, string3222);
            g.G(file3);
            g.E(file2);
            if (com.kwad.sdk.crash.e.EC().isDebug()) {
                backupLogFiles(this.mLogDir);
            }
            if (uploader != null) {
                new StringBuilder("------  Java Crash Happened Begin ------\n").append(exceptionMessage);
                if (z) {
                    CountDownLatch countDownLatch4 = new CountDownLatch(1);
                    reportException(new File[]{file}, countDownLatch4);
                    try {
                        countDownLatch4.await(5L, TimeUnit.SECONDS);
                    } catch (InterruptedException unused6) {
                    }
                } else {
                    uploadRemainingExceptions();
                }
            }
            g.H(file4);
        } catch (Throwable th15) {
            try {
                String string4 = exceptionMessage.toJson().toString();
                if (!z2) {
                    if (uploader == null) {
                        throw th15;
                    }
                    com.kwad.sdk.core.e.c.d("ExceptionCollector", "uploader.uploadEvent(message);");
                    CountDownLatch countDownLatch5 = z ? new CountDownLatch(1) : null;
                    uploader.a(exceptionMessage, countDownLatch5);
                    new StringBuilder("------  Java Crash Happened Begin ------\n").append(exceptionMessage);
                    if (countDownLatch5 == null) {
                        throw th15;
                    }
                    try {
                        countDownLatch5.await(5L, TimeUnit.SECONDS);
                        throw th15;
                    } catch (InterruptedException | Exception unused7) {
                        throw th15;
                    }
                }
                g.a(file, string4);
                g.G(file3);
                g.E(file2);
                if (com.kwad.sdk.crash.e.EC().isDebug()) {
                    backupLogFiles(this.mLogDir);
                }
                if (uploader != null) {
                    new StringBuilder("------  Java Crash Happened Begin ------\n").append(exceptionMessage);
                    if (z) {
                        CountDownLatch countDownLatch6 = new CountDownLatch(1);
                        reportException(new File[]{file}, countDownLatch6);
                        try {
                            countDownLatch6.await(5L, TimeUnit.SECONDS);
                        } catch (InterruptedException unused8) {
                        }
                    } else {
                        uploadRemainingExceptions();
                    }
                }
                g.H(file4);
                throw th15;
            } catch (Throwable th16) {
                if (uploader == null) {
                    throw th15;
                }
                g.p(th16);
                throw th15;
            }
        }
    }

    public final void a(Throwable th, ExceptionMessage exceptionMessage, Context context) throws Throwable {
        a(th, exceptionMessage, context, ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getIsExternal());
    }

    @Override
    protected final int getCrashType() {
        return 1;
    }

    @Override
    public final void init(File file, f fVar, e eVar) {
        super.init(file, fVar, eVar);
        if (com.kwad.sdk.crash.e.EC().isDebug()) {
            initBackupDir(new File("sdcard/kwad_ex/java_crash/dump"));
        }
    }

    @Override
    protected final void reportException(File[] fileArr, CountDownLatch countDownLatch) {
        com.kwad.sdk.crash.report.f fVar = new com.kwad.sdk.crash.report.f();
        fVar.a(getUploader());
        for (File file : fileArr) {
            fVar.a(file, countDownLatch);
        }
    }
}

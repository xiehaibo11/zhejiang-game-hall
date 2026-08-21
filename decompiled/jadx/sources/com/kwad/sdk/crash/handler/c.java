package com.kwad.sdk.crash.handler;

import android.content.Context;
import com.kwad.sdk.crash.f;
import com.kwad.sdk.crash.model.message.ExceptionMessage;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.service.a.e;
import java.io.File;
import java.util.concurrent.CountDownLatch;

/* JADX INFO: loaded from: classes2.dex */
public final class c extends b {

    static class a {
        private static final c aAi = new c(0);
    }

    private c() {
    }

    /* synthetic */ c(byte b) {
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
        To view partially-correct add '--show-bad-code' argument
    */
    private void a(java.lang.Throwable r21, com.kwad.sdk.crash.model.message.ExceptionMessage r22, android.content.Context r23, boolean r24) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 713
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.sdk.crash.handler.c.a(java.lang.Throwable, com.kwad.sdk.crash.model.message.ExceptionMessage, android.content.Context, boolean):void");
    }

    public final void a(Throwable th, ExceptionMessage exceptionMessage, Context context) throws Throwable {
        a(th, exceptionMessage, context, ((e) ServiceProvider.get(e.class)).getIsExternal());
    }

    @Override // com.kwad.sdk.crash.handler.b
    protected final int getCrashType() {
        return 1;
    }

    @Override // com.kwad.sdk.crash.handler.b
    public final void init(File file, f fVar, com.kwad.sdk.crash.report.e eVar) {
        super.init(file, fVar, eVar);
        if (com.kwad.sdk.crash.e.EC().isDebug()) {
            initBackupDir(new File("sdcard/kwad_ex/java_crash/dump"));
        }
    }

    @Override // com.kwad.sdk.crash.handler.b
    protected final void reportException(File[] fileArr, CountDownLatch countDownLatch) {
        com.kwad.sdk.crash.report.f fVar = new com.kwad.sdk.crash.report.f();
        fVar.a(getUploader());
        for (File file : fileArr) {
            fVar.a(file, countDownLatch);
        }
    }
}

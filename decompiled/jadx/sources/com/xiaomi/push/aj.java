package com.xiaomi.push;

import android.content.Context;
import android.os.Build;
import java.io.Closeable;
import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.channels.FileLock;

/* JADX INFO: loaded from: classes4.dex */
public class aj {
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v0 */
    /* JADX WARN: Type inference failed for: r2v1 */
    /* JADX WARN: Type inference failed for: r2v3, types: [java.io.Closeable] */
    public static boolean a(Context context, String str, long j) throws Throwable {
        RandomAccessFile randomAccessFile;
        ?? r2 = 23;
        if (Build.VERSION.SDK_INT >= 23 && !h.c(context, "android.permission.WRITE_EXTERNAL_STORAGE")) {
            return true;
        }
        FileLock fileLockLock = null;
        try {
            try {
                File file = new File(new File(context.getExternalFilesDir(null), "/.vdevdir/"), "lcfp.lock");
                ab.m115a(file);
                randomAccessFile = new RandomAccessFile(file, "rw");
                try {
                    fileLockLock = randomAccessFile.getChannel().lock();
                    boolean zB = b(context, str, j);
                    if (fileLockLock != null && fileLockLock.isValid()) {
                        try {
                            fileLockLock.release();
                        } catch (IOException unused) {
                        }
                    }
                    ab.a(randomAccessFile);
                    return zB;
                } catch (IOException e) {
                    e = e;
                    e.printStackTrace();
                    if (fileLockLock != null && fileLockLock.isValid()) {
                        try {
                            fileLockLock.release();
                        } catch (IOException unused2) {
                        }
                    }
                    ab.a(randomAccessFile);
                    return true;
                }
            } catch (Throwable th) {
                th = th;
                if (0 != 0 && fileLockLock.isValid()) {
                    try {
                        fileLockLock.release();
                    } catch (IOException unused3) {
                    }
                }
                ab.a((Closeable) r2);
                throw th;
            }
        } catch (IOException e2) {
            e = e2;
            randomAccessFile = null;
        } catch (Throwable th2) {
            th = th2;
            r2 = 0;
            if (0 != 0) {
                fileLockLock.release();
            }
            ab.a((Closeable) r2);
            throw th;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:41:0x00d7 A[Catch: IOException -> 0x00e7, all -> 0x00f9, LOOP:0: B:39:0x00d1->B:41:0x00d7, LOOP_END, TRY_LEAVE, TryCatch #0 {IOException -> 0x00e7, blocks: (B:38:0x00cd, B:39:0x00d1, B:41:0x00d7), top: B:56:0x00cd }] */
    /* JADX WARN: Type inference failed for: r10v0, types: [boolean] */
    /* JADX WARN: Type inference failed for: r1v1 */
    /* JADX WARN: Type inference failed for: r1v2, types: [java.io.Closeable] */
    /* JADX WARN: Type inference failed for: r1v3 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static boolean b(android.content.Context r16, java.lang.String r17, long r18) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 254
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.aj.b(android.content.Context, java.lang.String, long):boolean");
    }
}

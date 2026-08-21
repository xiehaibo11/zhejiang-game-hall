package com.qihoo360.loader.utils;

import android.content.Context;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import com.qihoo360.replugin.utils.FileUtils;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.nio.channels.FileChannel;
import java.nio.channels.FileLock;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public final class ProcessLocker {
    private static final String TAG = "ws001";
    private final Context mContext;
    private File mFile;
    private FileChannel mFileChannel;
    private FileLock mFileLock;
    private FileOutputStream mFileOutputStream;

    public ProcessLocker(Context context, String str) {
        this.mContext = context;
        try {
            this.mFile = new File(str);
            FileOutputStream fileOutputStreamOpenFileOutput = this.mContext.openFileOutput(str, 0);
            this.mFileOutputStream = fileOutputStreamOpenFileOutput;
            if (fileOutputStreamOpenFileOutput != null) {
                this.mFileChannel = fileOutputStreamOpenFileOutput.getChannel();
            }
            if (this.mFileChannel == null) {
                LogRelease.e(LogDebug.MAIN_TAG, "channel is null");
            }
        } catch (Throwable th) {
            LogRelease.e(LogDebug.MAIN_TAG, th.getMessage(), th);
        }
    }

    public ProcessLocker(Context context, String str, String str2) {
        this.mContext = context;
        try {
            File file = new File(str, str2);
            this.mFile = file;
            if (!file.exists()) {
                FileUtils.forceMkdirParent(this.mFile);
                this.mFile.createNewFile();
            }
            FileOutputStream fileOutputStream = new FileOutputStream(this.mFile, false);
            this.mFileOutputStream = fileOutputStream;
            this.mFileChannel = fileOutputStream.getChannel();
        } catch (Throwable th) {
            LogRelease.e(LogDebug.MAIN_TAG, th.getMessage(), th);
        }
    }

    public final synchronized boolean isLocked() {
        boolean zTryLock;
        zTryLock = tryLock();
        if (zTryLock) {
            unlock();
        }
        return !zTryLock;
    }

    public final synchronized boolean tryLock() {
        if (this.mFileChannel == null) {
            return false;
        }
        try {
            FileLock fileLockTryLock = this.mFileChannel.tryLock();
            this.mFileLock = fileLockTryLock;
            if (fileLockTryLock != null) {
                return true;
            }
        } catch (Throwable th) {
            LogRelease.e(LogDebug.MAIN_TAG, th.getMessage(), th);
        }
        return false;
    }

    public final synchronized boolean tryLockTimeWait(int i, int i2) {
        if (this.mFileChannel == null) {
            return false;
        }
        if (i <= 0) {
            i = 1;
        }
        if (i2 <= 0) {
            i2 = 1;
        }
        for (int i3 = 0; i3 < i; i3 += i2) {
            try {
                try {
                    this.mFileLock = this.mFileChannel.tryLock();
                } catch (Throwable th) {
                    LogRelease.e(LogDebug.MAIN_TAG, th.getMessage(), th);
                    return false;
                }
            } catch (IOException unused) {
            }
            if (this.mFileLock != null) {
                return true;
            }
            if (i3 % 1000 == 0) {
                LogRelease.i("ws001", "wait process lock: " + i3 + "/" + i);
            }
            Thread.sleep(i2, 0);
        }
        return false;
    }

    public final synchronized boolean lock() {
        if (this.mFileChannel == null) {
            return false;
        }
        try {
            FileLock fileLockLock = this.mFileChannel.lock();
            this.mFileLock = fileLockLock;
            if (fileLockLock != null) {
                return true;
            }
        } catch (Throwable th) {
            LogRelease.e(LogDebug.MAIN_TAG, th.getMessage(), th);
        }
        return false;
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0029 A[Catch: all -> 0x0050, TRY_LEAVE, TryCatch #0 {, blocks: (B:3:0x0001, B:9:0x0015, B:15:0x0029, B:21:0x003d, B:23:0x0041, B:25:0x0049, B:20:0x0034, B:14:0x0020, B:8:0x000c, B:17:0x002d, B:5:0x0005, B:11:0x0019), top: B:31:0x0001, inners: #1, #2, #3 }] */
    /* JADX WARN: Removed duplicated region for block: B:21:0x003d A[Catch: all -> 0x0050, TryCatch #0 {, blocks: (B:3:0x0001, B:9:0x0015, B:15:0x0029, B:21:0x003d, B:23:0x0041, B:25:0x0049, B:20:0x0034, B:14:0x0020, B:8:0x000c, B:17:0x002d, B:5:0x0005, B:11:0x0019), top: B:31:0x0001, inners: #1, #2, #3 }] */
    /* JADX WARN: Removed duplicated region for block: B:33:0x002d A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:37:0x0019 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final synchronized void unlock() {
        /*
            r3 = this;
            monitor-enter(r3)
            java.nio.channels.FileLock r0 = r3.mFileLock     // Catch: java.lang.Throwable -> L50
            if (r0 == 0) goto L15
            java.nio.channels.FileLock r0 = r3.mFileLock     // Catch: java.lang.Throwable -> Lb
            r0.release()     // Catch: java.lang.Throwable -> Lb
            goto L15
        Lb:
            r0 = move-exception
            java.lang.String r1 = "ws001"
            java.lang.String r2 = r0.getMessage()     // Catch: java.lang.Throwable -> L50
            com.qihoo360.replugin.helper.LogRelease.e(r1, r2, r0)     // Catch: java.lang.Throwable -> L50
        L15:
            java.nio.channels.FileChannel r0 = r3.mFileChannel     // Catch: java.lang.Throwable -> L50
            if (r0 == 0) goto L29
            java.nio.channels.FileChannel r0 = r3.mFileChannel     // Catch: java.lang.Throwable -> L1f
            r0.close()     // Catch: java.lang.Throwable -> L1f
            goto L29
        L1f:
            r0 = move-exception
            java.lang.String r1 = "ws001"
            java.lang.String r2 = r0.getMessage()     // Catch: java.lang.Throwable -> L50
            com.qihoo360.replugin.helper.LogRelease.e(r1, r2, r0)     // Catch: java.lang.Throwable -> L50
        L29:
            java.io.FileOutputStream r0 = r3.mFileOutputStream     // Catch: java.lang.Throwable -> L50
            if (r0 == 0) goto L3d
            java.io.FileOutputStream r0 = r3.mFileOutputStream     // Catch: java.lang.Throwable -> L33
            r0.close()     // Catch: java.lang.Throwable -> L33
            goto L3d
        L33:
            r0 = move-exception
            java.lang.String r1 = "ws001"
            java.lang.String r2 = r0.getMessage()     // Catch: java.lang.Throwable -> L50
            com.qihoo360.replugin.helper.LogRelease.e(r1, r2, r0)     // Catch: java.lang.Throwable -> L50
        L3d:
            java.io.File r0 = r3.mFile     // Catch: java.lang.Throwable -> L50
            if (r0 == 0) goto L4e
            java.io.File r0 = r3.mFile     // Catch: java.lang.Throwable -> L50
            boolean r0 = r0.exists()     // Catch: java.lang.Throwable -> L50
            if (r0 == 0) goto L4e
            java.io.File r0 = r3.mFile     // Catch: java.lang.Throwable -> L50
            r0.delete()     // Catch: java.lang.Throwable -> L50
        L4e:
            monitor-exit(r3)
            return
        L50:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.qihoo360.loader.utils.ProcessLocker.unlock():void");
    }
}

package com.qihoo360.loader.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public final class ProcessLocker {
    private static final java.lang.String TAG = "ws001";
    private final android.content.Context mContext;
    private java.io.File mFile;
    private java.nio.channels.FileChannel mFileChannel;
    private java.nio.channels.FileLock mFileLock;
    private java.io.FileOutputStream mFileOutputStream;

    public ProcessLocker(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "ws000"
            r2.<init>()
            r2.mContext = r3
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L29
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L29
            r2.mFile = r3     // Catch: java.lang.Throwable -> L29
            android.content.Context r3 = r2.mContext     // Catch: java.lang.Throwable -> L29
            r1 = 0
            java.io.FileOutputStream r3 = r3.openFileOutput(r4, r1)     // Catch: java.lang.Throwable -> L29
            r2.mFileOutputStream = r3     // Catch: java.lang.Throwable -> L29
            if (r3 == 0) goto L1f
            java.nio.channels.FileChannel r3 = r3.getChannel()     // Catch: java.lang.Throwable -> L29
            r2.mFileChannel = r3     // Catch: java.lang.Throwable -> L29
        L1f:
            java.nio.channels.FileChannel r3 = r2.mFileChannel     // Catch: java.lang.Throwable -> L29
            if (r3 != 0) goto L31
            java.lang.String r3 = "channel is null"
            com.qihoo360.replugin.helper.LogRelease.e(r0, r3)     // Catch: java.lang.Throwable -> L29
            goto L31
        L29:
            r3 = move-exception
            java.lang.String r4 = r3.getMessage()
            com.qihoo360.replugin.helper.LogRelease.e(r0, r4, r3)
        L31:
            return
    }

    public ProcessLocker(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.mContext = r1
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L2d
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L2d
            r0.mFile = r1     // Catch: java.lang.Throwable -> L2d
            boolean r1 = r1.exists()     // Catch: java.lang.Throwable -> L2d
            if (r1 != 0) goto L1c
            java.io.File r1 = r0.mFile     // Catch: java.lang.Throwable -> L2d
            com.qihoo360.replugin.utils.FileUtils.forceMkdirParent(r1)     // Catch: java.lang.Throwable -> L2d
            java.io.File r1 = r0.mFile     // Catch: java.lang.Throwable -> L2d
            r1.createNewFile()     // Catch: java.lang.Throwable -> L2d
        L1c:
            java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L2d
            java.io.File r2 = r0.mFile     // Catch: java.lang.Throwable -> L2d
            r3 = 0
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L2d
            r0.mFileOutputStream = r1     // Catch: java.lang.Throwable -> L2d
            java.nio.channels.FileChannel r1 = r1.getChannel()     // Catch: java.lang.Throwable -> L2d
            r0.mFileChannel = r1     // Catch: java.lang.Throwable -> L2d
            goto L37
        L2d:
            r1 = move-exception
            java.lang.String r2 = r1.getMessage()
            java.lang.String r3 = "ws000"
            com.qihoo360.replugin.helper.LogRelease.e(r3, r2, r1)
        L37:
            return
    }

    public final synchronized boolean isLocked() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.tryLock()     // Catch: java.lang.Throwable -> Le
            if (r0 == 0) goto La
            r1.unlock()     // Catch: java.lang.Throwable -> Le
        La:
            r0 = r0 ^ 1
            monitor-exit(r1)
            return r0
        Le:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized boolean lock() {
            r4 = this;
            monitor-enter(r4)
            java.nio.channels.FileChannel r0 = r4.mFileChannel     // Catch: java.lang.Throwable -> L21
            r1 = 0
            if (r0 != 0) goto L8
            monitor-exit(r4)
            return r1
        L8:
            java.nio.channels.FileChannel r0 = r4.mFileChannel     // Catch: java.lang.Throwable -> L15
            java.nio.channels.FileLock r0 = r0.lock()     // Catch: java.lang.Throwable -> L15
            r4.mFileLock = r0     // Catch: java.lang.Throwable -> L15
            if (r0 == 0) goto L1f
            r0 = 1
            monitor-exit(r4)
            return r0
        L15:
            r0 = move-exception
            java.lang.String r2 = "ws000"
            java.lang.String r3 = r0.getMessage()     // Catch: java.lang.Throwable -> L21
            com.qihoo360.replugin.helper.LogRelease.e(r2, r3, r0)     // Catch: java.lang.Throwable -> L21
        L1f:
            monitor-exit(r4)
            return r1
        L21:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public final synchronized boolean tryLock() {
            r4 = this;
            monitor-enter(r4)
            java.nio.channels.FileChannel r0 = r4.mFileChannel     // Catch: java.lang.Throwable -> L21
            r1 = 0
            if (r0 != 0) goto L8
            monitor-exit(r4)
            return r1
        L8:
            java.nio.channels.FileChannel r0 = r4.mFileChannel     // Catch: java.lang.Throwable -> L15
            java.nio.channels.FileLock r0 = r0.tryLock()     // Catch: java.lang.Throwable -> L15
            r4.mFileLock = r0     // Catch: java.lang.Throwable -> L15
            if (r0 == 0) goto L1f
            r0 = 1
            monitor-exit(r4)
            return r0
        L15:
            r0 = move-exception
            java.lang.String r2 = "ws000"
            java.lang.String r3 = r0.getMessage()     // Catch: java.lang.Throwable -> L21
            com.qihoo360.replugin.helper.LogRelease.e(r2, r3, r0)     // Catch: java.lang.Throwable -> L21
        L1f:
            monitor-exit(r4)
            return r1
        L21:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public final synchronized boolean tryLockTimeWait(int r7, int r8) {
            r6 = this;
            monitor-enter(r6)
            java.nio.channels.FileChannel r0 = r6.mFileChannel     // Catch: java.lang.Throwable -> L56
            r1 = 0
            if (r0 != 0) goto L8
            monitor-exit(r6)
            return r1
        L8:
            r0 = 1
            if (r7 > 0) goto Lc
            r7 = r0
        Lc:
            if (r8 > 0) goto Lf
            r8 = r0
        Lf:
            r2 = r1
        L10:
            if (r2 >= r7) goto L54
            java.nio.channels.FileChannel r3 = r6.mFileChannel     // Catch: java.lang.Throwable -> L1b java.io.IOException -> L1d
            java.nio.channels.FileLock r3 = r3.tryLock()     // Catch: java.lang.Throwable -> L1b java.io.IOException -> L1d
            r6.mFileLock = r3     // Catch: java.lang.Throwable -> L1b java.io.IOException -> L1d
            goto L1d
        L1b:
            r7 = move-exception
            goto L4b
        L1d:
            java.nio.channels.FileLock r3 = r6.mFileLock     // Catch: java.lang.Throwable -> L1b
            if (r3 == 0) goto L23
            monitor-exit(r6)
            return r0
        L23:
            int r3 = r2 % 1000
            if (r3 != 0) goto L45
            java.lang.String r3 = "ws001"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1b
            r4.<init>()     // Catch: java.lang.Throwable -> L1b
            java.lang.String r5 = "wait process lock: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L1b
            r4.append(r2)     // Catch: java.lang.Throwable -> L1b
            java.lang.String r5 = "/"
            r4.append(r5)     // Catch: java.lang.Throwable -> L1b
            r4.append(r7)     // Catch: java.lang.Throwable -> L1b
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L1b
            com.qihoo360.replugin.helper.LogRelease.i(r3, r4)     // Catch: java.lang.Throwable -> L1b
        L45:
            long r3 = (long) r8     // Catch: java.lang.Throwable -> L1b
            java.lang.Thread.sleep(r3, r1)     // Catch: java.lang.Throwable -> L1b
            int r2 = r2 + r8
            goto L10
        L4b:
            java.lang.String r8 = "ws000"
            java.lang.String r0 = r7.getMessage()     // Catch: java.lang.Throwable -> L56
            com.qihoo360.replugin.helper.LogRelease.e(r8, r0, r7)     // Catch: java.lang.Throwable -> L56
        L54:
            monitor-exit(r6)
            return r1
        L56:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public final synchronized void unlock() {
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
    }
}

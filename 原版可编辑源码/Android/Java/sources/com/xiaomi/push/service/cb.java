package com.xiaomi.push.service;

import android.content.Context;
import com.xiaomi.push.hn;
import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.channels.FileLock;

final class cb implements Runnable {
    final Context a;
    final hn a;

    cb(Context context, hn hnVar) {
        this.a = context;
        this.a = hnVar;
    }

    @Override
    public void run() {
        RandomAccessFile randomAccessFile;
        synchronized (ca.a) {
            FileLock fileLockLock = null;
            try {
                try {
                    File file = new File(this.a.getFilesDir(), "tiny_data.lock");
                    com.xiaomi.push.ab.a(file);
                    randomAccessFile = new RandomAccessFile(file, "rw");
                    try {
                        try {
                            fileLockLock = randomAccessFile.getChannel().lock();
                            ca.c(this.a, this.a);
                            if (fileLockLock != null && fileLockLock.isValid()) {
                                try {
                                    fileLockLock.release();
                                } catch (IOException e) {
                                    com.xiaomi.channel.commonutils.logger.b.a(e);
                                }
                            }
                        } catch (Exception e2) {
                            e = e2;
                            com.xiaomi.channel.commonutils.logger.b.a(e);
                            if (fileLockLock != null && fileLockLock.isValid()) {
                                try {
                                    fileLockLock.release();
                                } catch (IOException e3) {
                                    com.xiaomi.channel.commonutils.logger.b.a(e3);
                                }
                            }
                        }
                    } catch (Throwable th) {
                        th = th;
                        if (fileLockLock != null && fileLockLock.isValid()) {
                            try {
                                fileLockLock.release();
                            } catch (IOException e4) {
                                com.xiaomi.channel.commonutils.logger.b.a(e4);
                            }
                        }
                        com.xiaomi.push.ab.a(randomAccessFile);
                        throw th;
                    }
                } catch (Throwable th2) {
                    throw th2;
                }
            } catch (Exception e5) {
                e = e5;
                randomAccessFile = null;
            } catch (Throwable th3) {
                th = th3;
                randomAccessFile = null;
                if (fileLockLock != null) {
                    fileLockLock.release();
                }
                com.xiaomi.push.ab.a(randomAccessFile);
                throw th;
            }
            com.xiaomi.push.ab.a(randomAccessFile);
        }
    }
}

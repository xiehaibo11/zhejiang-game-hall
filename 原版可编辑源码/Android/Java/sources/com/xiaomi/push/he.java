package com.xiaomi.push;

import android.content.Context;
import android.content.SharedPreferences;
import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.channels.FileLock;
import java.util.ArrayList;

public class he {
    private static boolean a;

    class a implements Runnable {
        private Context a;
        private hh a;

        public a(Context context, hh hhVar) {
            this.a = hhVar;
            this.a = context;
        }

        @Override
        public void run() throws Throwable {
            he.c(this.a, this.a);
        }
    }

    private static void a(Context context) {
        File file = new File(context.getFilesDir() + "/tdReadTemp");
        if (file.exists()) {
            return;
        }
        file.mkdirs();
    }

    public static void a(Context context, hh hhVar) {
        al.a(context).a(new a(context, hhVar));
    }

    /* JADX WARN: Code restructure failed: missing block: B:30:0x009d, code lost:
    
        r15 = "TinyData read from cache file failed cause lengthBuffer < 1 || too big. length:" + r7;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static void a(Context context, hh hhVar, File file, byte[] bArr) throws Throwable {
        String str;
        ArrayList arrayList = new ArrayList();
        byte[] bArr2 = new byte[4];
        BufferedInputStream bufferedInputStream = null;
        try {
            try {
                BufferedInputStream bufferedInputStream2 = new BufferedInputStream(new FileInputStream(file));
                loop0: while (true) {
                    int i = 0;
                    int length = 0;
                    while (true) {
                        try {
                            int i2 = bufferedInputStream2.read(bArr2);
                            if (i2 == -1) {
                                break loop0;
                            }
                            if (i2 != 4) {
                                str = "TinyData read from cache file failed cause lengthBuffer error. size:" + i2;
                                break loop0;
                            }
                            int iA = af.a(bArr2);
                            if (iA < 1 || iA > 10240) {
                                break loop0;
                            }
                            byte[] bArr3 = new byte[iA];
                            int i3 = bufferedInputStream2.read(bArr3);
                            if (i3 != iA) {
                                str = "TinyData read from cache file failed cause buffer size not equal length. size:" + i3 + "__length:" + iA;
                                break loop0;
                            }
                            byte[] bArrA = i.a(bArr, bArr3);
                            if (bArrA == null || bArrA.length == 0) {
                                com.xiaomi.channel.commonutils.logger.b.d("TinyData read from cache file failed cause decrypt fail");
                            } else {
                                hn hnVar = new hn();
                                it.a(hnVar, bArrA);
                                hnVar.a("item_size", String.valueOf(bArrA.length));
                                arrayList.add(hnVar);
                                i++;
                                length += bArrA.length;
                                if (i >= 8 || length >= 10240) {
                                    break;
                                }
                            }
                        } catch (Exception e) {
                            e = e;
                            bufferedInputStream = bufferedInputStream2;
                            com.xiaomi.channel.commonutils.logger.b.a(e);
                            ab.a(bufferedInputStream);
                            return;
                        } catch (Throwable th) {
                            th = th;
                            bufferedInputStream = bufferedInputStream2;
                            ab.a(bufferedInputStream);
                            throw th;
                        }
                    }
                    hf.a(context, hhVar, arrayList);
                    arrayList.clear();
                }
                com.xiaomi.channel.commonutils.logger.b.d(str);
                hf.a(context, hhVar, arrayList);
                if (file != null && file.exists() && !file.delete()) {
                    com.xiaomi.channel.commonutils.logger.b.a("TinyData delete reading temp file failed");
                }
                ab.a(bufferedInputStream2);
            } catch (Exception e2) {
                e = e2;
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }

    private static void b(Context context) {
        SharedPreferences.Editor editorEdit = context.getSharedPreferences("mipush_extra", 4).edit();
        editorEdit.putLong("last_tiny_data_upload_timestamp", System.currentTimeMillis() / 1000);
        editorEdit.commit();
    }

    /* JADX WARN: Removed duplicated region for block: B:34:0x00b7  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x00bb  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static void c(Context context, hh hhVar) throws Throwable {
        RandomAccessFile randomAccessFile;
        File file;
        if (a) {
            com.xiaomi.channel.commonutils.logger.b.a("TinyData extractTinyData is running");
            return;
        }
        a = true;
        File file2 = new File(context.getFilesDir(), "tiny_data.data");
        if (!file2.exists()) {
            com.xiaomi.channel.commonutils.logger.b.a("TinyData no ready file to get data.");
            return;
        }
        a(context);
        byte[] bArrA = com.xiaomi.push.service.ca.a(context);
        FileLock fileLockLock = null;
        try {
            try {
                File file3 = new File(context.getFilesDir(), "tiny_data.lock");
                ab.a(file3);
                randomAccessFile = new RandomAccessFile(file3, "rw");
                try {
                    fileLockLock = randomAccessFile.getChannel().lock();
                    file2.renameTo(new File(context.getFilesDir() + "/tdReadTemp/tiny_data.data"));
                    if (fileLockLock != null && fileLockLock.isValid()) {
                        try {
                            fileLockLock.release();
                        } catch (IOException e) {
                            e = e;
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
                            e = e3;
                            com.xiaomi.channel.commonutils.logger.b.a(e);
                        }
                    }
                    ab.a(randomAccessFile);
                    file = new File(context.getFilesDir() + "/tdReadTemp/tiny_data.data");
                    if (file.exists()) {
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
                ab.a(randomAccessFile);
                throw th;
            }
        } catch (Exception e5) {
            e = e5;
            randomAccessFile = null;
        } catch (Throwable th2) {
            th = th2;
            randomAccessFile = null;
            if (fileLockLock != null) {
                fileLockLock.release();
            }
            ab.a(randomAccessFile);
            throw th;
        }
        ab.a(randomAccessFile);
        file = new File(context.getFilesDir() + "/tdReadTemp/tiny_data.data");
        if (file.exists()) {
            com.xiaomi.channel.commonutils.logger.b.a("TinyData no ready file to get data.");
            return;
        }
        a(context, hhVar, file, bArrA);
        hd.a(false);
        b(context);
        a = false;
    }
}

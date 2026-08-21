package com.xiaomi.push;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.Closeable;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.channels.FileLock;
import java.util.ArrayList;
import java.util.Iterator;

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
                ab.a(file);
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
    */
    private static boolean b(Context context, String str, long j) throws Throwable {
        ?? r1;
        BufferedReader bufferedReader;
        BufferedWriter bufferedWriter;
        Iterator it;
        File file = new File(new File(context.getExternalFilesDir(null), "/.vdevdir/"), "lcfp");
        ArrayList arrayList = new ArrayList();
        String str2 = str + Constants.COLON_SEPARATOR + context.getPackageName() + Constants.ACCEPT_TIME_SEPARATOR_SP + System.currentTimeMillis();
        ?? Exists = file.exists();
        try {
            if (Exists != 0) {
                try {
                    bufferedReader = new BufferedReader(new FileReader(file));
                    while (true) {
                        try {
                            String line = bufferedReader.readLine();
                            if (line == null) {
                                break;
                            }
                            String[] strArrSplit = line.split(Constants.COLON_SEPARATOR);
                            if (strArrSplit.length == 2) {
                                if (TextUtils.equals(strArrSplit[0], String.valueOf(str))) {
                                    String[] strArrSplit2 = strArrSplit[1].split(Constants.ACCEPT_TIME_SEPARATOR_SP);
                                    if (strArrSplit2.length == 2) {
                                        long j2 = Long.parseLong(strArrSplit2[1]);
                                        if (!TextUtils.equals(strArrSplit2[0], context.getPackageName()) && Math.abs(r4 - j2) < 1000 * j * 0.9f) {
                                            ab.a(bufferedReader);
                                            return false;
                                        }
                                    }
                                } else {
                                    arrayList.add(line);
                                }
                            }
                        } catch (Exception unused) {
                            arrayList.clear();
                            ab.a(bufferedReader);
                            arrayList.add(str2);
                            bufferedWriter = new BufferedWriter(new FileWriter(file));
                            try {
                                try {
                                    it = arrayList.iterator();
                                    while (it.hasNext()) {
                                    }
                                } catch (IOException e) {
                                    e = e;
                                    com.xiaomi.channel.commonutils.logger.b.d(e.toString());
                                }
                                ab.a(bufferedWriter);
                                return true;
                            } catch (Throwable th) {
                                th = th;
                                ab.a(bufferedWriter);
                                throw th;
                            }
                        }
                    }
                } catch (Exception unused2) {
                    bufferedReader = null;
                } catch (Throwable th2) {
                    th = th2;
                    r1 = 0;
                    ab.a((Closeable) r1);
                    throw th;
                }
            } else if (!ab.a(file)) {
                return true;
            }
            arrayList.add(str2);
            try {
                bufferedWriter = new BufferedWriter(new FileWriter(file));
                it = arrayList.iterator();
                while (it.hasNext()) {
                    bufferedWriter.write((String) it.next());
                    bufferedWriter.newLine();
                    bufferedWriter.flush();
                }
            } catch (IOException e2) {
                e = e2;
                bufferedWriter = null;
            } catch (Throwable th3) {
                th = th3;
                bufferedWriter = null;
                ab.a(bufferedWriter);
                throw th;
            }
            ab.a(bufferedWriter);
            return true;
        } catch (Throwable th4) {
            th = th4;
            r1 = Exists;
        }
    }
}

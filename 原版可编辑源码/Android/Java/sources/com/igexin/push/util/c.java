package com.igexin.push.util;

import android.content.Context;
import android.text.TextUtils;
import com.igexin.push.core.x;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.channels.FileLock;
import java.util.Arrays;
import java.util.List;

public class c {
    public static void a() {
        FileOutputStream fileOutputStream = null;
        try {
            try {
                File file = new File(com.igexin.push.core.d.R);
                if (!file.exists() && !file.createNewFile()) {
                    com.igexin.b.a.c.b.a("FileUtils | create file : " + file.toString() + " failed !!!", new Object[0]);
                    h.a(null);
                    return;
                }
                FileOutputStream fileOutputStream2 = new FileOutputStream(com.igexin.push.core.d.R);
                try {
                    fileOutputStream2.write(com.igexin.b.a.a.a.d((("v01" + com.igexin.push.core.d.z) + com.igexin.push.core.d.t + "|" + com.igexin.push.core.d.a + "|" + com.igexin.push.core.d.u + "|" + x.a().e(com.igexin.push.core.d.g)).getBytes(), com.igexin.push.core.d.E));
                    h.a(fileOutputStream2);
                } catch (Exception e) {
                    e = e;
                    fileOutputStream = fileOutputStream2;
                    com.igexin.b.a.c.b.a("FileUtils | " + e.toString(), new Object[0]);
                    h.a(fileOutputStream);
                } catch (Throwable th) {
                    th = th;
                    fileOutputStream = fileOutputStream2;
                    h.a(fileOutputStream);
                    throw th;
                }
            } catch (Exception e2) {
                e = e2;
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }

    public static void a(File file, String... strArr) {
        File[] fileArrListFiles;
        if (!file.exists() || (fileArrListFiles = file.listFiles()) == null || fileArrListFiles.length <= 0) {
            return;
        }
        List listAsList = strArr != null ? Arrays.asList(strArr) : null;
        for (File file2 : fileArrListFiles) {
            if (listAsList == null || !listAsList.contains(file2.getName())) {
                file2.delete();
            }
        }
    }

    public static void a(byte[] bArr, String str, boolean z) throws Throwable {
        FileOutputStream fileOutputStream = null;
        try {
            try {
                FileOutputStream fileOutputStream2 = new FileOutputStream(new File(str), z);
                try {
                    fileOutputStream2.write(bArr);
                    fileOutputStream2.close();
                } catch (Exception unused) {
                    fileOutputStream = fileOutputStream2;
                    if (fileOutputStream == null) {
                    } else {
                        fileOutputStream.close();
                    }
                } catch (Throwable th) {
                    th = th;
                    fileOutputStream = fileOutputStream2;
                    if (fileOutputStream != null) {
                        try {
                            fileOutputStream.close();
                        } catch (Exception unused2) {
                        }
                    }
                    throw th;
                }
            } catch (Exception unused3) {
            }
        } catch (Exception unused4) {
        } catch (Throwable th2) {
            th = th2;
        }
    }

    public static boolean a(Context context) {
        return !new com.igexin.sdk.a.c(context).b();
    }

    /* JADX WARN: Can't wrap try/catch for region: R(10:6|(2:57|7)|(2:59|8)|(6:46|9|(1:11)(1:61)|44|14|31)|12|52|13|44|14|31) */
    /* JADX WARN: Removed duplicated region for block: B:48:0x0087 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:54:0x0082 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:62:? A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static byte[] a(String str) {
        ByteArrayOutputStream byteArrayOutputStream;
        FileInputStream fileInputStream;
        FileInputStream fileInputStream2 = null;
        byteArray = null;
        byte[] byteArray = null;
        if (!new File(str).exists()) {
            com.igexin.b.a.c.b.a("FileUtils|get data from file = " + str + " file not exist ######", new Object[0]);
            return null;
        }
        byte[] bArr = new byte[1024];
        try {
            fileInputStream = new FileInputStream(str);
        } catch (Exception e) {
            e = e;
            byteArrayOutputStream = null;
            fileInputStream = null;
        } catch (Throwable th) {
            th = th;
            byteArrayOutputStream = null;
            if (fileInputStream2 != null) {
            }
            if (byteArrayOutputStream == null) {
            }
        }
        try {
            byteArrayOutputStream = new ByteArrayOutputStream();
        } catch (Exception e2) {
            e = e2;
            byteArrayOutputStream = null;
        } catch (Throwable th2) {
            th = th2;
            byteArrayOutputStream = null;
            fileInputStream2 = fileInputStream;
            if (fileInputStream2 != null) {
            }
            if (byteArrayOutputStream == null) {
            }
        }
        while (true) {
            try {
                try {
                    int i = fileInputStream.read(bArr);
                    if (i == -1) {
                        break;
                    }
                    byteArrayOutputStream.write(bArr, 0, i);
                } catch (Exception e3) {
                    e = e3;
                    com.igexin.b.a.c.b.a("FileUtils|" + e.toString(), new Object[0]);
                    if (fileInputStream != null) {
                        try {
                            fileInputStream.close();
                        } catch (Exception unused) {
                        }
                    }
                    if (byteArrayOutputStream != null) {
                    }
                    return byteArray;
                }
                byteArrayOutputStream.close();
                return byteArray;
            } catch (Throwable th3) {
                th = th3;
                fileInputStream2 = fileInputStream;
                if (fileInputStream2 != null) {
                    try {
                        fileInputStream2.close();
                    } catch (Exception unused2) {
                    }
                }
                if (byteArrayOutputStream == null) {
                    throw th;
                }
                try {
                    byteArrayOutputStream.close();
                    throw th;
                } catch (Exception unused3) {
                    throw th;
                }
            }
        }
        byteArray = byteArrayOutputStream.toByteArray();
        fileInputStream.close();
        byteArrayOutputStream.close();
        return byteArray;
    }

    public static String b() {
        return com.igexin.push.core.d.d.a().b(com.igexin.push.core.d.g);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static String b(Context context) throws Throwable {
        RandomAccessFile randomAccessFile;
        Throwable th;
        FileLock fileLockLock;
        Exception exc;
        Object obj;
        RandomAccessFile randomAccessFile2 = null;
        String str = null;
        String strA = null;
        try {
            randomAccessFile = new RandomAccessFile(new File(context.getFilesDir().getPath() + "/gt_safe.pid"), "rw");
        } catch (Exception e) {
            e = e;
            fileLockLock = null;
        } catch (Throwable th2) {
            randomAccessFile = null;
            th = th2;
            fileLockLock = null;
        }
        try {
            fileLockLock = randomAccessFile.getChannel().lock();
            try {
                try {
                } catch (Exception e2) {
                    obj = strA;
                    randomAccessFile2 = randomAccessFile;
                    exc = e2;
                }
            } catch (Throwable th3) {
                th = th3;
                h.a(randomAccessFile);
                if (fileLockLock != null) {
                    try {
                        fileLockLock.release();
                    } catch (IOException unused) {
                    }
                }
                throw th;
            }
        } catch (Exception e3) {
            e = e3;
            fileLockLock = null;
            randomAccessFile2 = randomAccessFile;
            exc = e;
            obj = fileLockLock;
        } catch (Throwable th4) {
            th = th4;
            fileLockLock = null;
        }
        if (fileLockLock.isValid()) {
            byte[] bArr = new byte[128];
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            while (true) {
                int i = randomAccessFile.read(bArr);
                if (i == -1) {
                    break;
                }
                byteArrayOutputStream.write(bArr, 0, i);
                try {
                    com.igexin.b.a.c.b.a("FileUtils|get safeCode err = " + exc.toString(), new Object[0]);
                    h.a(randomAccessFile2);
                    if (fileLockLock != null && fileLockLock.isValid()) {
                        try {
                            fileLockLock.release();
                        } catch (IOException unused2) {
                        }
                    }
                    return obj;
                } catch (Throwable th5) {
                    randomAccessFile = randomAccessFile2;
                    th = th5;
                    h.a(randomAccessFile);
                    if (fileLockLock != null && fileLockLock.isValid()) {
                        fileLockLock.release();
                    }
                    throw th;
                }
            }
            String str2 = new String(byteArrayOutputStream.toByteArray());
            try {
                com.igexin.b.a.c.b.a("FileUtils|old safeCode = " + str2, new Object[0]);
                if (TextUtils.isEmpty(str2)) {
                    strA = l.a(16);
                    com.igexin.b.a.c.b.a("FileUtils|new safeCode = " + strA, new Object[0]);
                    randomAccessFile.write(strA.getBytes("utf-8"));
                    str = strA;
                } else {
                    str = str2;
                }
            } catch (Exception e4) {
                exc = e4;
                randomAccessFile2 = randomAccessFile;
                obj = str2;
            }
        }
        h.a(randomAccessFile);
        if (fileLockLock == null || !fileLockLock.isValid()) {
            return str;
        }
        try {
            fileLockLock.release();
            return str;
        } catch (IOException unused3) {
            return str;
        }
    }

    public static String c() {
        return com.igexin.push.core.d.d.a().a(com.igexin.push.core.d.g);
    }

    public static String c(Context context) {
        return context.getExternalFilesDir("gtpush") + "/log/";
    }

    public static long d() {
        return com.igexin.push.core.d.d.a().c(com.igexin.push.core.d.g);
    }

    public static void e() {
        com.igexin.push.core.d.d.a().a(com.igexin.push.core.d.g, com.igexin.push.core.d.A);
    }

    public static void f() throws Throwable {
        String str = com.igexin.push.core.d.g.getFilesDir().getPath() + "/init.pid";
        FileOutputStream fileOutputStream = null;
        try {
            try {
                if (new File(str).exists()) {
                    byte[] bytes = com.igexin.push.core.d.u.getBytes();
                    byte[] bArr = new byte[bytes.length];
                    for (int i = 0; i < bytes.length; i++) {
                        bArr[i] = (byte) (bytes[i] ^ com.igexin.push.core.d.V[i]);
                    }
                    FileOutputStream fileOutputStream2 = new FileOutputStream(str);
                    try {
                        fileOutputStream2.write(bArr);
                        fileOutputStream = fileOutputStream2;
                    } catch (Exception e) {
                        e = e;
                        fileOutputStream = fileOutputStream2;
                        com.igexin.b.a.c.b.a("FileUtils|" + e.toString(), new Object[0]);
                        if (fileOutputStream == null) {
                            return;
                        }
                    } catch (Throwable th) {
                        th = th;
                        fileOutputStream = fileOutputStream2;
                        if (fileOutputStream != null) {
                            try {
                                fileOutputStream.close();
                            } catch (Exception unused) {
                            }
                        }
                        throw th;
                    }
                }
                if (fileOutputStream == null) {
                    return;
                }
            } catch (Exception e2) {
                e = e2;
            }
            try {
                fileOutputStream.close();
            } catch (Exception unused2) {
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }
}

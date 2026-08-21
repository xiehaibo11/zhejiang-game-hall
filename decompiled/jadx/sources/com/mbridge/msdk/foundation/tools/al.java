package com.mbridge.msdk.foundation.tools;

import com.kuaishou.weapon.p0.bh;
import java.io.Closeable;
import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.security.SecureRandom;

/* JADX INFO: compiled from: Util.java */
/* JADX INFO: loaded from: classes2.dex */
final class al {

    /* JADX INFO: compiled from: Util.java */
    private static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final SecureRandom f3519a = new SecureRandom();
        static final char[] b = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    }

    static String a() {
        byte[] bArr = new byte[16];
        a.f3519a.nextBytes(bArr);
        char[] cArr = new char[32];
        for (int i = 0; i < 16; i++) {
            byte b = bArr[i];
            int i2 = i << 1;
            cArr[i2] = a.b[(b >> 4) & 15];
            cArr[i2 + 1] = a.b[b & 15];
        }
        return new String(cArr);
    }

    static int b() {
        try {
            Class<?> cls = Class.forName("sun.misc.Unsafe");
            Field declaredField = cls.getDeclaredField("theUnsafe");
            declaredField.setAccessible(true);
            Method declaredMethod = cls.getDeclaredMethod("pageSize", new Class[0]);
            declaredMethod.setAccessible(true);
            return ((Integer) declaredMethod.invoke(declaredField.get(null), new Object[0])).intValue();
        } catch (Throwable unused) {
            return 4096;
        }
    }

    static boolean a(File file) throws IOException {
        if (file.isFile()) {
            return true;
        }
        File parentFile = file.getParentFile();
        return parentFile != null && (parentFile.isDirectory() || parentFile.mkdirs()) && file.createNewFile();
    }

    static byte[] b(File file) throws IOException {
        if (!file.isFile()) {
            return null;
        }
        long length = file.length();
        if ((length >> 32) != 0) {
            throw new IllegalArgumentException("file too large, path:" + file.getPath());
        }
        int i = (int) length;
        byte[] bArr = new byte[i];
        a(file, bArr, i);
        return bArr;
    }

    static void a(File file, byte[] bArr, int i) throws IOException {
        RandomAccessFile randomAccessFile = new RandomAccessFile(file, "rw");
        int i2 = 0;
        while (i2 < i) {
            try {
                int i3 = randomAccessFile.read(bArr, i2, i - i2);
                if (i3 < 0) {
                    break;
                } else {
                    i2 += i3;
                }
            } finally {
                a(randomAccessFile);
            }
        }
    }

    static boolean a(File file, byte[] bArr) {
        try {
            File file2 = new File(file.getParent(), file.getName() + bh.k);
            if (!a(file2)) {
                return false;
            }
            RandomAccessFile randomAccessFile = new RandomAccessFile(file2, "rw");
            try {
                randomAccessFile.setLength(bArr.length);
                randomAccessFile.write(bArr);
                a(randomAccessFile);
                if (!file.exists() || file.delete()) {
                    return file2.renameTo(file);
                }
            } catch (Throwable th) {
                a(randomAccessFile);
                throw th;
            }
        } catch (Exception unused) {
        }
        return false;
    }

    static void a(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (Exception unused) {
            }
        }
    }

    static void c(File file) {
        try {
            if (file.exists()) {
                d(file);
            }
        } catch (Exception unused) {
        }
    }

    private static void d(File file) {
        File[] fileArrListFiles;
        if (file.isDirectory() && (fileArrListFiles = file.listFiles()) != null) {
            for (File file2 : fileArrListFiles) {
                d(file2);
            }
        }
        file.delete();
    }
}

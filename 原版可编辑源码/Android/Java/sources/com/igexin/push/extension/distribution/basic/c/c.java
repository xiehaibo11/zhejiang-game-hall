package com.igexin.push.extension.distribution.basic.c;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import com.igexin.push.core.CoreConsts;
import com.tkay.expressad.foundation.d.c;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.util.concurrent.locks.ReentrantReadWriteLock;

public class c {
    private static final String a = "EXT-" + c.class.getSimpleName();
    private static c d;
    private com.igexin.push.extension.distribution.basic.e.a b;
    private Context c;
    private final String e = "/sdcard/libs//com.getui.sdk.deviceId.db";

    private c(Context context) {
        this.c = context;
    }

    public static c a() {
        if (d == null) {
            d = new c(e.a);
        }
        return d;
    }

    private void a(File file) {
        for (File file2 : file.listFiles()) {
            while (file2.exists()) {
                if (file2.isFile()) {
                    file2.delete();
                } else if (!file2.delete()) {
                    a(file2);
                }
            }
        }
        file.delete();
    }

    /* JADX WARN: Removed duplicated region for block: B:37:0x00a0 A[EXC_TOP_SPLITTER, PHI: r2
      0x00a0: PHI (r2v3 java.io.FileOutputStream) = (r2v4 java.io.FileOutputStream), (r2v5 java.io.FileOutputStream) binds: [B:26:0x00c9, B:19:0x009e] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void b(String str) throws Throwable {
        com.igexin.b.a.c.b.a(a + "|save deviceId = " + str + " to " + this.e, new Object[0]);
        ReentrantReadWriteLock.WriteLock writeLock = new ReentrantReadWriteLock().writeLock();
        FileOutputStream fileOutputStream = null;
        try {
            try {
                if (writeLock.tryLock()) {
                    File file = new File(this.e);
                    if (!file.exists() && !file.createNewFile()) {
                        com.igexin.b.a.c.b.a(a + "|create file " + file.toString() + " failed", new Object[0]);
                        writeLock.unlock();
                        return;
                    }
                    FileOutputStream fileOutputStream2 = new FileOutputStream(this.e);
                    try {
                        fileOutputStream2.write(com.igexin.b.b.a.b(("V1|" + str).getBytes("utf-8")));
                        fileOutputStream = fileOutputStream2;
                    } catch (Exception e) {
                        e = e;
                        fileOutputStream = fileOutputStream2;
                        com.igexin.b.a.c.b.a(a + "|" + e.toString(), new Object[0]);
                        if (fileOutputStream != null) {
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
                        writeLock.unlock();
                        throw th;
                    }
                }
            } catch (Exception e2) {
                e = e2;
            }
            if (fileOutputStream != null) {
                try {
                    fileOutputStream.close();
                } catch (Exception unused2) {
                }
            }
            writeLock.unlock();
        } catch (Throwable th2) {
            th = th2;
        }
    }

    private void c(String str) {
        try {
            if (e.l.a()) {
                ContentValues contentValues = new ContentValues();
                contentValues.put("id", (Integer) 2);
                contentValues.put("value", str);
                e.l.a("runtime", (String) null, contentValues);
                e.l.close();
            }
        } catch (Throwable unused) {
        }
    }

    /* JADX WARN: Can't wrap try/catch for region: R(9:4|(4:58|5|56|6)|(5:54|7|(1:9)(1:60)|48|17)|10|(2:14|15)|52|16|48|17) */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private String g() throws Throwable {
        ByteArrayOutputStream byteArrayOutputStream;
        FileInputStream fileInputStream;
        String str = null;
        str = null;
        str = null;
        str = null;
        str = null;
        FileInputStream fileInputStream2 = null;
        if (new File(this.e).exists()) {
            byte[] bArr = new byte[1024];
            try {
                fileInputStream = new FileInputStream(this.e);
                try {
                    byteArrayOutputStream = new ByteArrayOutputStream();
                } catch (Exception unused) {
                    byteArrayOutputStream = null;
                } catch (Throwable th) {
                    th = th;
                    byteArrayOutputStream = null;
                }
            } catch (Exception unused2) {
                fileInputStream = null;
                byteArrayOutputStream = null;
            } catch (Throwable th2) {
                th = th2;
                byteArrayOutputStream = null;
            }
            try {
                while (true) {
                    try {
                        int i = fileInputStream.read(bArr);
                        if (i == -1) {
                            break;
                        }
                        byteArrayOutputStream.write(bArr, 0, i);
                    } catch (Exception unused3) {
                        if (fileInputStream != null) {
                            try {
                                fileInputStream.close();
                            } catch (Exception unused4) {
                            }
                        }
                        if (byteArrayOutputStream != null) {
                        }
                        return str;
                    } catch (Throwable th3) {
                        th = th3;
                        fileInputStream2 = fileInputStream;
                        if (fileInputStream2 != null) {
                            try {
                                fileInputStream2.close();
                            } catch (Exception unused5) {
                            }
                        }
                        if (byteArrayOutputStream == null) {
                            throw th;
                        }
                        try {
                            byteArrayOutputStream.close();
                            throw th;
                        } catch (Exception unused6) {
                            throw th;
                        }
                    }
                    byteArrayOutputStream.close();
                }
                byteArrayOutputStream.close();
            } catch (Exception unused7) {
            }
            String[] strArrSplit = new String(com.igexin.b.b.a.c(byteArrayOutputStream.toByteArray()), "utf-8").split("\\|");
            if (strArrSplit.length > 1 && "V1".equals(strArrSplit[0])) {
                str = strArrSplit[1];
            }
            fileInputStream.close();
        }
        return str;
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x0084 A[DONT_GENERATE, PHI: r1 r8
      0x0084: PHI (r1v1 java.lang.String) = (r1v3 java.lang.String), (r1v4 java.lang.String) binds: [B:24:0x008f, B:18:0x0082] A[DONT_GENERATE, DONT_INLINE]
      0x0084: PHI (r8v3 android.database.Cursor) = (r8v4 android.database.Cursor), (r8v5 android.database.Cursor) binds: [B:24:0x008f, B:18:0x0082] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public String a(String str) {
        String string;
        String str2 = "";
        com.igexin.push.extension.distribution.basic.e.a aVarB = b();
        this.b = aVarB;
        Cursor cursorA = null;
        try {
            try {
                cursorA = aVarB.a(c.c.e, new String[]{"imageurl"}, new String[]{str}, null, null);
                if (cursorA != null) {
                    loop0: while (true) {
                        string = "";
                        while (cursorA.moveToNext()) {
                            try {
                                string = cursorA.getString(cursorA.getColumnIndexOrThrow("imagesrc"));
                                File file = new File(string);
                                if (!file.exists() || !file.canRead()) {
                                    this.b.a(c.c.e, new String[]{"imageurl"}, new String[]{str});
                                    if (this.c.getPackageManager().checkPermission("android.permission.WRITE_EXTERNAL_STORAGE", this.c.getPackageName()) != 0) {
                                        e.k = this.c.getCacheDir() + "/ImgCache/";
                                    }
                                }
                            } catch (Exception unused) {
                                str2 = string;
                                if (cursorA != null) {
                                }
                            }
                        }
                        break loop0;
                    }
                    str2 = string;
                }
            } catch (Exception unused2) {
            }
            return str2;
        } finally {
            if (0 != 0) {
                cursorA.close();
            }
        }
    }

    public com.igexin.push.extension.distribution.basic.e.a b() {
        if (this.b == null) {
            this.b = new com.igexin.push.extension.distribution.basic.e.a(this.c);
        }
        return this.b;
    }

    public void c() {
        Cursor cursorA = null;
        try {
            cursorA = b().a(c.c.e, new String[]{"taskid"}, "createtime <= " + String.valueOf(System.currentTimeMillis() - 604800000));
            if (cursorA != null) {
                while (cursorA.moveToNext()) {
                    String string = cursorA.getString(cursorA.getColumnIndexOrThrow("taskid"));
                    b().a(c.c.e, new String[]{"taskid"}, new String[]{string});
                    File file = new File(e.k + string);
                    if (file.exists()) {
                        a(file);
                    }
                }
            }
            if (cursorA == null) {
                return;
            }
        } catch (Exception unused) {
            if (cursorA == null) {
                return;
            }
        } catch (Throwable th) {
            if (cursorA != null) {
                cursorA.close();
            }
            throw th;
        }
        cursorA.close();
    }

    public void d() {
        File file = new File(CoreConsts.q);
        if (file.exists()) {
            for (File file2 : file.listFiles(new d(this))) {
                if (file2.exists()) {
                    a(file2);
                }
            }
        }
    }

    public void e() throws Throwable {
        String strG = g();
        com.igexin.b.a.c.b.a(a + "|read from com.getui.sdk.deviceId.db = " + strG + "; CoreRuntimeInfo.deviceId = " + com.igexin.push.core.d.A, new Object[0]);
        if (strG != null) {
            if (strG.equals(com.igexin.push.core.d.A)) {
                return;
            }
            com.igexin.push.core.d.A = strG;
            c(strG);
            return;
        }
        if (com.igexin.push.core.d.A != null) {
            b(com.igexin.push.core.d.A);
            return;
        }
        com.igexin.b.a.c.b.a(a + "|updateDeviceId new file deviceId and CoreRuntimeInfo deviceId is null return", new Object[0]);
    }

    public void f() {
    }
}

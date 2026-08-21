package com.tkay.core.common.l;

import android.content.Context;
import android.os.Environment;
import android.os.StatFs;
import android.text.TextUtils;
import java.io.File;
import java.io.FileInputStream;
import java.util.UUID;

/* JADX INFO: loaded from: classes3.dex */
public final class j {
    /* JADX WARN: Removed duplicated region for block: B:19:0x0057 A[PHI: r0
      0x0057: PHI (r0v4 java.io.File) = (r0v3 java.io.File), (r0v3 java.io.File), (r0v7 java.io.File) binds: [B:10:0x0015, B:12:0x001b, B:17:0x0054] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0014  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.io.File a(android.content.Context r6) {
        /*
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 18
            if (r0 < r2) goto L14
            java.io.File r0 = r6.getExternalFilesDir(r1)     // Catch: java.lang.Throwable -> L14
            if (r0 == 0) goto L14
            java.io.File r0 = a(r0)     // Catch: java.lang.Throwable -> L14
            if (r0 == 0) goto L15
            return r0
        L14:
            r0 = r1
        L15:
            if (r0 != 0) goto L57
            boolean r2 = b(r6)
            if (r2 == 0) goto L57
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r2 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r2 = r2.getPath()
            r0.append(r2)
            java.lang.String r2 = java.io.File.separator
            r0.append(r2)
            java.lang.String r2 = r6.getPackageName()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.io.File r2 = new java.io.File
            r2.<init>(r0)
            java.io.File r0 = a(r2)
            long r2 = b()
            r4 = 31457280(0x1e00000, double:1.55419614E-316)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L53
            r2 = 1
            goto L54
        L53:
            r2 = 0
        L54:
            if (r2 != 0) goto L57
            goto L58
        L57:
            r1 = r0
        L58:
            if (r1 != 0) goto L6b
            java.io.File r6 = r6.getFilesDir()
            java.io.File r6 = r6.getAbsoluteFile()
            java.lang.String r6 = r6.getAbsolutePath()
            java.io.File r1 = new java.io.File
            r1.<init>(r6)
        L6b:
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.l.j.a(android.content.Context):java.io.File");
    }

    private static File a(File file) {
        StringBuilder sb = new StringBuilder();
        sb.append(UUID.randomUUID());
        File file2 = new File(file, sb.toString());
        if (file2.exists()) {
            file2.delete();
        }
        if (!file2.mkdirs()) {
            return null;
        }
        file2.delete();
        return file.getAbsoluteFile();
    }

    private static boolean b(Context context) {
        if (context == null) {
            return false;
        }
        try {
            return context.getPackageManager().checkPermission("android.permission.WRITE_EXTERNAL_STORAGE", context.getPackageName()) == 0;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    private static boolean a() {
        return b() > 31457280;
    }

    private static boolean c() {
        return "mounted".equals(Environment.getExternalStorageState());
    }

    private static String b(String str) {
        return f.a(str);
    }

    public static long a(String str) {
        long jB = 0;
        if (TextUtils.isEmpty(str)) {
            return 0L;
        }
        File file = new File(str);
        if (!file.exists()) {
            return 0L;
        }
        try {
            if (file.isDirectory()) {
                jB = c(file);
            } else {
                jB = b(file);
            }
        } catch (Throwable unused) {
        }
        return jB;
    }

    private static long b(File file) throws Throwable {
        long jAvailable = 0;
        FileInputStream fileInputStream = null;
        try {
            try {
                try {
                    if (file.exists()) {
                        FileInputStream fileInputStream2 = new FileInputStream(file);
                        try {
                            jAvailable = fileInputStream2.available();
                            fileInputStream = fileInputStream2;
                        } catch (Exception e) {
                            e = e;
                            fileInputStream = fileInputStream2;
                            e.printStackTrace();
                            if (fileInputStream != null) {
                                fileInputStream.close();
                            }
                            return jAvailable;
                        } catch (Throwable th) {
                            th = th;
                            fileInputStream = fileInputStream2;
                            if (fileInputStream != null) {
                                try {
                                    fileInputStream.close();
                                } catch (Exception e2) {
                                    e2.printStackTrace();
                                }
                            }
                            throw th;
                        }
                    } else {
                        file.createNewFile();
                    }
                } catch (Exception e3) {
                    e = e3;
                }
                if (fileInputStream != null) {
                    fileInputStream.close();
                }
            } catch (Exception e4) {
                e4.printStackTrace();
            }
            return jAvailable;
        } catch (Throwable th2) {
            th = th2;
        }
    }

    private static long c(File file) throws Throwable {
        long jB;
        File[] fileArrListFiles = file.listFiles();
        long j = 0;
        if (fileArrListFiles != null) {
            for (int i = 0; i < fileArrListFiles.length; i++) {
                if (fileArrListFiles[i].isDirectory()) {
                    jB = c(fileArrListFiles[i]);
                } else {
                    jB = b(fileArrListFiles[i]);
                }
                j += jB;
            }
        }
        return j;
    }

    private static long b() {
        if ("mounted".equals(Environment.getExternalStorageState())) {
            try {
                StatFs statFs = new StatFs(Environment.getExternalStorageDirectory().getPath());
                return ((long) statFs.getAvailableBlocks()) * ((long) statFs.getBlockSize());
            } catch (Error unused) {
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return 0L;
    }
}

package com.mbridge.msdk.foundation.tools;

import android.content.Context;
import android.os.Environment;
import android.os.StatFs;
import java.io.File;
import java.util.UUID;

/* JADX INFO: compiled from: SameSDCardTool.java */
/* JADX INFO: loaded from: classes2.dex */
public final class ac {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static boolean f3514a = false;
    static String b = "";
    public static char[] c = {'P', 'a', 'c', 'k', 'a', 'g', 'e', 'M', 'a', 'n', 'a', 'g', 'e', 'r'};
    private static boolean d = false;
    private static int e = -1;
    private static int f = -1;
    private static int g = -1;
    private static int h = -1;

    public static void a(Context context) {
        if (d) {
            return;
        }
        try {
            try {
                b = context.getFilesDir().getAbsolutePath() + File.separator;
                f3514a = false;
                b(context);
            } catch (Exception unused) {
                b = context.getFilesDir().getAbsolutePath() + File.separator;
                b(context);
            }
        } catch (Exception unused2) {
        }
        d = true;
    }

    private static void b(Context context) {
        com.mbridge.msdk.foundation.same.b.e.a(new com.mbridge.msdk.foundation.same.b.d(c(context)));
        com.mbridge.msdk.foundation.same.b.e.a().b();
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x001a  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x006f A[PHI: r0
      0x006f: PHI (r0v5 java.io.File) = (r0v4 java.io.File), (r0v7 java.io.File) binds: [B:12:0x001d, B:19:0x006c] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static java.lang.String c(android.content.Context r6) {
        /*
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 18
            if (r0 < r2) goto L1a
            java.io.File r0 = r6.getExternalFilesDir(r1)     // Catch: java.lang.Throwable -> L12
            if (r0 == 0) goto L1a
            java.io.File r0 = a(r0)     // Catch: java.lang.Throwable -> L12
            goto L1b
        L12:
            r0 = move-exception
            java.lang.String r2 = "common-exception"
            java.lang.String r3 = "hasSDCard is failed"
            com.mbridge.msdk.foundation.tools.z.c(r2, r3, r0)
        L1a:
            r0 = r1
        L1b:
            boolean r2 = com.mbridge.msdk.foundation.tools.ac.f3514a
            if (r2 == 0) goto L6f
            if (r0 != 0) goto L5e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r2 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r2 = r2.getPath()
            r0.append(r2)
            java.lang.String r2 = java.io.File.separator
            r0.append(r2)
            java.lang.String r2 = "Android"
            r0.append(r2)
            java.lang.String r2 = java.io.File.separator
            r0.append(r2)
            java.lang.String r2 = "data"
            r0.append(r2)
            java.lang.String r2 = java.io.File.separator
            r0.append(r2)
            java.lang.String r2 = r6.getPackageName()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.io.File r2 = new java.io.File
            r2.<init>(r0)
            java.io.File r0 = a(r2)
        L5e:
            long r2 = d()
            r4 = 31457280(0x1e00000, double:1.55419614E-316)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L6b
            r2 = 1
            goto L6c
        L6b:
            r2 = 0
        L6c:
            if (r2 != 0) goto L6f
            goto L70
        L6f:
            r1 = r0
        L70:
            if (r1 == 0) goto L78
            boolean r0 = r1.exists()
            if (r0 != 0) goto L80
        L78:
            java.io.File r6 = r6.getFilesDir()
            java.io.File r1 = r6.getAbsoluteFile()
        L80:
            java.lang.String r6 = r1.getAbsolutePath()
            return r6
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.tools.ac.c(android.content.Context):java.lang.String");
    }

    private static File a(File file) {
        File file2 = new File(file, UUID.randomUUID() + "");
        if (file2.exists()) {
            file2.delete();
        }
        if (!file2.mkdirs()) {
            return null;
        }
        file2.delete();
        return file.getAbsoluteFile();
    }

    private static boolean c() {
        try {
            return "mounted".equals(Environment.getExternalStorageState());
        } catch (Exception unused) {
            z.d("", "hasSDCard is failed");
            return false;
        }
    }

    public static int a() {
        try {
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            long jLongValue = ((Long) ag.b(contextJ, "freeExternalSize", 0L)).longValue();
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (jCurrentTimeMillis - jLongValue > 1800000 || f == -1) {
                f = Long.valueOf((d() / 1000) / 1000).intValue();
                ag.a(contextJ, "freeExternalSize", Long.valueOf(jCurrentTimeMillis));
            }
        } catch (Throwable th) {
            z.c("SameSDCardTool", th.getMessage(), th);
        }
        return f;
    }

    private static long d() {
        if (c()) {
            try {
                StatFs statFs = new StatFs(Environment.getExternalStorageDirectory().getPath());
                return ((long) statFs.getAvailableBlocks()) * ((long) statFs.getBlockSize());
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
        return 0L;
    }

    public static int b() {
        if (e == -1) {
            try {
                e = new Long((e() / 1000) / 1000).intValue();
            } catch (Throwable th) {
                z.c("SameSDCardTool", th.getMessage(), th);
            }
        }
        return e;
    }

    private static long e() {
        if (c()) {
            try {
                StatFs statFs = new StatFs(Environment.getExternalStorageDirectory().getPath());
                return ((long) statFs.getBlockCount()) * ((long) statFs.getBlockSize());
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
        return 0L;
    }
}

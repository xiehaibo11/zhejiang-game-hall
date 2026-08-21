package com.mbridge.msdk.foundation.tools;

import android.content.Context;
import android.os.Build;
import android.os.Environment;
import android.os.StatFs;
import java.io.File;
import java.util.UUID;

public final class ac {
    static boolean a = false;
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
                a = false;
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
    */
    private static String c(Context context) {
        File externalFilesDir;
        File fileA;
        File absoluteFile = null;
        if (Build.VERSION.SDK_INT >= 18) {
            try {
                externalFilesDir = context.getExternalFilesDir(null);
            } catch (Throwable th) {
                z.c("common-exception", "hasSDCard is failed", th);
            }
            fileA = externalFilesDir != null ? a(externalFilesDir) : null;
        }
        if (a) {
            if (fileA == null) {
                fileA = a(new File(Environment.getExternalStorageDirectory().getPath() + File.separator + "Android" + File.separator + "data" + File.separator + context.getPackageName()));
            }
            if (d() > 31457280) {
            }
        } else {
            absoluteFile = fileA;
        }
        if (absoluteFile == null || !absoluteFile.exists()) {
            absoluteFile = context.getFilesDir().getAbsoluteFile();
        }
        return absoluteFile.getAbsolutePath();
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

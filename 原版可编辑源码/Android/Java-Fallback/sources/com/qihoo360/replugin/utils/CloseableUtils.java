package com.qihoo360.replugin.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class CloseableUtils {
    public CloseableUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void closeQuietly(android.database.Cursor r0) {
            if (r0 == 0) goto L5
            r0.close()     // Catch: java.lang.Exception -> L5
        L5:
            return
    }

    public static void closeQuietly(java.io.Closeable r0) {
            if (r0 == 0) goto L5
            r0.close()     // Catch: java.io.IOException -> L5
        L5:
            return
    }

    public static void closeQuietly(java.util.zip.ZipFile r0) {
            if (r0 == 0) goto L5
            r0.close()     // Catch: java.lang.Exception -> L5
        L5:
            return
    }

    public static void closeQuietly(java.io.Closeable... r3) {
            if (r3 != 0) goto L3
            return
        L3:
            int r0 = r3.length
            r1 = 0
        L5:
            if (r1 >= r0) goto Lf
            r2 = r3[r1]
            closeQuietly(r2)
            int r1 = r1 + 1
            goto L5
        Lf:
            return
    }
}

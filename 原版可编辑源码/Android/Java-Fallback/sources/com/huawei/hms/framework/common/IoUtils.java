package com.huawei.hms.framework.common;

public class IoUtils {
    private static final int BUFF_SIZE = 4096;
    private static final int MAX_SIZE = 16777216;

    private IoUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void close(android.database.Cursor r0) {
            if (r0 == 0) goto L5
            r0.close()
        L5:
            return
    }

    public static void closeSecure(java.io.Closeable r2) {
            java.lang.String r0 = "IOUtil"
            if (r2 == 0) goto Lf
            r2.close()     // Catch: java.io.IOException -> L8
            goto L14
        L8:
            r2 = move-exception
            java.lang.String r1 = "closeSecure IOException"
            com.huawei.hms.framework.common.Logger.w(r0, r1, r2)
            goto L14
        Lf:
            java.lang.String r2 = "closeable is null"
            com.huawei.hms.framework.common.Logger.w(r0, r2)
        L14:
            return
    }

    public static void closeSecure(java.io.InputStream r0) {
            closeSecure(r0)
            return
    }

    public static void closeSecure(java.io.OutputStream r0) {
            closeSecure(r0)
            return
    }

    public static void closeSecure(java.io.Reader r0) {
            closeSecure(r0)
            return
    }

    public static void closeSecure(java.io.Writer r0) {
            closeSecure(r0)
            return
    }

    public static long copy(java.io.InputStream r6, java.io.OutputStream r7) {
            r0 = 4096(0x1000, float:5.74E-42)
            byte[] r0 = new byte[r0]
            r1 = 0
        L6:
            int r3 = r6.read(r0)
            r4 = -1
            if (r4 == r3) goto L23
            r4 = 16777216(0x1000000, double:8.289046E-317)
            int r4 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
            if (r4 > 0) goto L1b
            r4 = 0
            r7.write(r0, r4, r3)
            long r3 = (long) r3
            long r1 = r1 + r3
            goto L6
        L1b:
            java.io.IOException r6 = new java.io.IOException
            java.lang.String r7 = "input data too large for byte."
            r6.<init>(r7)
            throw r6
        L23:
            return r1
    }

    public static byte[] toByteArray(java.io.InputStream r1) {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            copy(r1, r0)
            byte[] r1 = r0.toByteArray()
            return r1
    }
}

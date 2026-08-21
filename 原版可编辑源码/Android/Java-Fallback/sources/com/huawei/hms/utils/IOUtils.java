package com.huawei.hms.utils;

public final class IOUtils {
    public IOUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void closeQuietly(java.io.Closeable r1) {
            if (r1 == 0) goto Ld
            r1.close()     // Catch: java.io.IOException -> L6
            goto Ld
        L6:
            java.lang.String r1 = "IOUtils"
            java.lang.String r0 = "An exception occurred while closing the 'Closeable' object."
            com.huawei.hms.support.log.HMSLog.e(r1, r0)
        Ld:
            return
    }

    public static void closeQuietly(java.io.InputStream r0) {
            closeQuietly(r0)
            return
    }

    public static void closeQuietly(java.io.OutputStream r0) {
            closeQuietly(r0)
            return
    }

    public static void closeQuietly(java.io.Reader r0) {
            closeQuietly(r0)
            return
    }

    public static void closeQuietly(java.io.Writer r0) {
            closeQuietly(r0)
            return
    }

    public static long copy(java.io.InputStream r1, java.io.OutputStream r2) throws java.io.IOException {
            r0 = 4096(0x1000, float:5.74E-42)
            byte[] r0 = new byte[r0]
            long r1 = copy(r1, r2, r0)
            return r1
    }

    public static long copy(java.io.InputStream r4, java.io.OutputStream r5, byte[] r6) throws java.io.IOException {
            r0 = 0
        L2:
            int r2 = r4.read(r6)
            r3 = -1
            if (r3 == r2) goto L10
            r3 = 0
            r5.write(r6, r3, r2)
            long r2 = (long) r2
            long r0 = r0 + r2
            goto L2
        L10:
            return r0
    }

    public static byte[] toByteArray(java.io.InputStream r1) throws java.io.IOException {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            copy(r1, r0)
            byte[] r1 = r0.toByteArray()
            return r1
    }

    public static java.io.InputStream toInputStream(byte[] r1) throws java.io.IOException {
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            r0.<init>(r1)
            return r0
    }
}

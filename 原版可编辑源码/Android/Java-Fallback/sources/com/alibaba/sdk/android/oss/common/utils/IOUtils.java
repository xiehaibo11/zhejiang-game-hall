package com.alibaba.sdk.android.oss.common.utils;

public class IOUtils {
    private static final int BUFFER_SIZE = 4096;

    public IOUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] readStreamAsBytesArray(java.io.InputStream r5) throws java.io.IOException {
            r0 = 0
            if (r5 != 0) goto L6
            byte[] r5 = new byte[r0]
            return r5
        L6:
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>()
            r2 = 4096(0x1000, float:5.74E-42)
            byte[] r2 = new byte[r2]
        Lf:
            int r3 = r5.read(r2)
            r4 = -1
            if (r3 <= r4) goto L1a
            r1.write(r2, r0, r3)
            goto Lf
        L1a:
            r1.flush()
            safeClose(r1)
            byte[] r5 = r1.toByteArray()
            return r5
    }

    public static byte[] readStreamAsBytesArray(java.io.InputStream r8, int r9) throws java.io.IOException {
            r0 = 0
            if (r8 != 0) goto L6
            byte[] r8 = new byte[r0]
            return r8
        L6:
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>()
            r2 = 4096(0x1000, float:5.74E-42)
            byte[] r2 = new byte[r2]
            r3 = 0
        L11:
            long r5 = (long) r9
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 >= 0) goto L2b
            r7 = 2048(0x800, float:2.87E-42)
            long r5 = r5 - r3
            int r6 = (int) r5
            int r5 = java.lang.Math.min(r7, r6)
            int r5 = r8.read(r2, r0, r5)
            r6 = -1
            if (r5 <= r6) goto L2b
            r1.write(r2, r0, r5)
            long r5 = (long) r5
            long r3 = r3 + r5
            goto L11
        L2b:
            r1.flush()
            safeClose(r1)
            byte[] r8 = r1.toByteArray()
            return r8
    }

    public static java.lang.String readStreamAsString(java.io.InputStream r5, java.lang.String r6) throws java.io.IOException {
            if (r5 != 0) goto L5
            java.lang.String r5 = ""
            return r5
        L5:
            r0 = 0
            java.io.StringWriter r1 = new java.io.StringWriter
            r1.<init>()
            r2 = 4096(0x1000, float:5.74E-42)
            char[] r2 = new char[r2]
            java.io.BufferedReader r3 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L35
            java.io.InputStreamReader r4 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L35
            r4.<init>(r5, r6)     // Catch: java.lang.Throwable -> L35
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L35
        L19:
            int r6 = r3.read(r2)     // Catch: java.lang.Throwable -> L32
            if (r6 <= 0) goto L24
            r0 = 0
            r1.write(r2, r0, r6)     // Catch: java.lang.Throwable -> L32
            goto L19
        L24:
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Throwable -> L32
            safeClose(r5)
            r3.close()
            r1.close()
            return r6
        L32:
            r6 = move-exception
            r0 = r3
            goto L36
        L35:
            r6 = move-exception
        L36:
            safeClose(r5)
            if (r0 == 0) goto L3e
            r0.close()
        L3e:
            r1.close()
            goto L43
        L42:
            throw r6
        L43:
            goto L42
    }

    public static void safeClose(java.io.InputStream r0) {
            if (r0 == 0) goto L5
            r0.close()     // Catch: java.io.IOException -> L5
        L5:
            return
    }

    public static void safeClose(java.io.OutputStream r0) {
            if (r0 == 0) goto L5
            r0.close()     // Catch: java.io.IOException -> L5
        L5:
            return
    }
}

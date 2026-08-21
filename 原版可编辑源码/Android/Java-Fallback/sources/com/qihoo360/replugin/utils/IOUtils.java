package com.qihoo360.replugin.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class IOUtils {
    private static final int DEFAULT_BUFFER_SIZE = 4096;
    public static final int EOF = -1;

    public IOUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int copy(java.io.InputStream r2, java.io.OutputStream r3) throws java.io.IOException {
            long r2 = copyLarge(r2, r3)
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 <= 0) goto Ld
            r2 = -1
            return r2
        Ld:
            int r2 = (int) r2
            return r2
    }

    public static int copy(java.io.Reader r2, java.io.Writer r3) throws java.io.IOException {
            long r2 = copyLarge(r2, r3)
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 <= 0) goto Ld
            r2 = -1
            return r2
        Ld:
            int r2 = (int) r2
            return r2
    }

    public static long copy(java.io.InputStream r0, java.io.OutputStream r1, int r2) throws java.io.IOException {
            byte[] r2 = new byte[r2]
            long r0 = copyLarge(r0, r1, r2)
            return r0
    }

    public static void copy(java.io.InputStream r1, java.io.Writer r2, java.nio.charset.Charset r3) throws java.io.IOException {
            java.io.InputStreamReader r0 = new java.io.InputStreamReader
            java.nio.charset.Charset r3 = com.qihoo360.replugin.utils.Charsets.toCharset(r3)
            r0.<init>(r1, r3)
            copy(r0, r2)
            return
    }

    public static long copyLarge(java.io.InputStream r1, java.io.OutputStream r2) throws java.io.IOException {
            r0 = 4096(0x1000, float:5.74E-42)
            long r1 = copy(r1, r2, r0)
            return r1
    }

    public static long copyLarge(java.io.InputStream r4, java.io.OutputStream r5, byte[] r6) throws java.io.IOException {
            r0 = 0
        L2:
            r2 = -1
            int r3 = r4.read(r6)
            if (r2 == r3) goto L10
            r2 = 0
            r5.write(r6, r2, r3)
            long r2 = (long) r3
            long r0 = r0 + r2
            goto L2
        L10:
            return r0
    }

    public static long copyLarge(java.io.Reader r1, java.io.Writer r2) throws java.io.IOException {
            r0 = 4096(0x1000, float:5.74E-42)
            char[] r0 = new char[r0]
            long r1 = copyLarge(r1, r2, r0)
            return r1
    }

    public static long copyLarge(java.io.Reader r4, java.io.Writer r5, char[] r6) throws java.io.IOException {
            r0 = 0
        L2:
            r2 = -1
            int r3 = r4.read(r6)
            if (r2 == r3) goto L10
            r2 = 0
            r5.write(r6, r2, r3)
            long r2 = (long) r3
            long r0 = r0 + r2
            goto L2
        L10:
            return r0
    }

    public static java.lang.String toString(java.io.InputStream r1, java.nio.charset.Charset r2) throws java.io.IOException {
            com.qihoo360.replugin.utils.StringBuilderWriter r0 = new com.qihoo360.replugin.utils.StringBuilderWriter
            r0.<init>()
            copy(r1, r0, r2)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static void write(java.lang.String r0, java.io.OutputStream r1, java.nio.charset.Charset r2) throws java.io.IOException {
            if (r0 == 0) goto Ld
            java.nio.charset.Charset r2 = com.qihoo360.replugin.utils.Charsets.toCharset(r2)
            byte[] r0 = r0.getBytes(r2)
            r1.write(r0)
        Ld:
            return
    }
}

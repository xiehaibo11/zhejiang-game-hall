package com.ss.android.socialbase.downloader.utils;

public class DownloadDigestUtils {
    static final char[] HEX_CHARS = null;

    static {
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            com.ss.android.socialbase.downloader.utils.DownloadDigestUtils.HEX_CHARS = r0
            return
    }

    public DownloadDigestUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] hexStringToBytes(java.lang.String r7) throws java.lang.IllegalArgumentException {
            if (r7 == 0) goto L33
            int r0 = r7.length()
            int r0 = r0 % 2
            r1 = 1
            if (r0 == r1) goto L33
            char[] r7 = r7.toCharArray()
            int r0 = r7.length
            int r1 = r0 / 2
            byte[] r1 = new byte[r1]
            r2 = 0
        L15:
            if (r2 >= r0) goto L32
            int r3 = r2 / 2
            char r4 = r7[r2]
            r5 = 16
            int r4 = java.lang.Character.digit(r4, r5)
            int r4 = r4 << 4
            int r6 = r2 + 1
            char r6 = r7[r6]
            int r5 = java.lang.Character.digit(r6, r5)
            int r4 = r4 + r5
            byte r4 = (byte) r4
            r1[r3] = r4
            int r2 = r2 + 2
            goto L15
        L32:
            return r1
        L33:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "hexBinary needs to be even-length: "
            r1.append(r2)
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            r0.<init>(r7)
            throw r0
    }

    public static java.lang.String md5Hex(java.io.File r7) {
            r0 = 0
            r1 = 1
            r2 = 0
            java.lang.String r3 = "MD5"
            java.security.MessageDigest r3 = java.security.MessageDigest.getInstance(r3)     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L42
            if (r3 != 0) goto L13
            java.io.Closeable[] r7 = new java.io.Closeable[r1]
            r7[r2] = r0
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r7)
            return r0
        L13:
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L42
            r4.<init>(r7)     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L42
            r7 = 8192(0x2000, float:1.148E-41)
            byte[] r5 = new byte[r7]     // Catch: java.lang.Throwable -> L36 java.lang.Exception -> L43
        L1c:
            int r6 = r4.read(r5, r2, r7)     // Catch: java.lang.Throwable -> L36 java.lang.Exception -> L43
            if (r6 <= 0) goto L26
            r3.update(r5, r2, r6)     // Catch: java.lang.Throwable -> L36 java.lang.Exception -> L43
            goto L1c
        L26:
            byte[] r7 = r3.digest()     // Catch: java.lang.Throwable -> L36 java.lang.Exception -> L43
            java.lang.String r7 = toHexString(r7)     // Catch: java.lang.Throwable -> L36 java.lang.Exception -> L43
            java.io.Closeable[] r0 = new java.io.Closeable[r1]
            r0[r2] = r4
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r0)
            return r7
        L36:
            r7 = move-exception
            r0 = r4
            goto L3a
        L39:
            r7 = move-exception
        L3a:
            java.io.Closeable[] r1 = new java.io.Closeable[r1]
            r1[r2] = r0
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r1)
            throw r7
        L42:
            r4 = r0
        L43:
            java.io.Closeable[] r7 = new java.io.Closeable[r1]
            r7[r2] = r4
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r7)
            return r0
    }

    public static java.lang.String md5Hex(java.lang.String r3) {
            r0 = 0
            if (r3 == 0) goto L22
            int r1 = r3.length()     // Catch: java.lang.Exception -> L22
            if (r1 != 0) goto La
            goto L22
        La:
            java.lang.String r1 = "MD5"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = "UTF-8"
            byte[] r3 = r3.getBytes(r2)     // Catch: java.lang.Exception -> L22
            r1.update(r3)     // Catch: java.lang.Exception -> L22
            byte[] r3 = r1.digest()     // Catch: java.lang.Exception -> L22
            java.lang.String r3 = toHexString(r3)     // Catch: java.lang.Exception -> L22
            return r3
        L22:
            return r0
    }

    public static java.lang.String md5Hex(byte[] r2) {
            r0 = 0
            if (r2 == 0) goto L19
            int r1 = r2.length     // Catch: java.lang.Exception -> L19
            if (r1 != 0) goto L7
            goto L19
        L7:
            java.lang.String r1 = "MD5"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.lang.Exception -> L19
            r1.update(r2)     // Catch: java.lang.Exception -> L19
            byte[] r2 = r1.digest()     // Catch: java.lang.Exception -> L19
            java.lang.String r2 = toHexString(r2)     // Catch: java.lang.Exception -> L19
            return r2
        L19:
            return r0
    }

    public static java.lang.String md5Hex(byte[] r3, int r4, int r5) {
            r0 = 0
            if (r3 == 0) goto L1f
            if (r4 < 0) goto L1f
            if (r5 <= 0) goto L1f
            int r1 = r4 + r5
            int r2 = r3.length     // Catch: java.lang.Exception -> L1f
            if (r1 <= r2) goto Ld
            goto L1f
        Ld:
            java.lang.String r1 = "MD5"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.lang.Exception -> L1f
            r1.update(r3, r4, r5)     // Catch: java.lang.Exception -> L1f
            byte[] r3 = r1.digest()     // Catch: java.lang.Exception -> L1f
            java.lang.String r3 = toHexString(r3)     // Catch: java.lang.Exception -> L1f
            return r3
        L1f:
            return r0
    }

    public static java.lang.String toHexString(byte[] r2) {
            if (r2 == 0) goto L9
            r0 = 0
            int r1 = r2.length
            java.lang.String r2 = toHexString(r2, r0, r1)
            return r2
        L9:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "bytes is null"
            r2.<init>(r0)
            throw r2
    }

    public static java.lang.String toHexString(byte[] r9, int r10, int r11) {
            if (r9 == 0) goto L39
            if (r10 < 0) goto L33
            int r0 = r10 + r11
            int r1 = r9.length
            if (r0 > r1) goto L33
            int r0 = r11 * 2
            char[] r1 = new char[r0]
            r2 = 0
            r3 = r2
            r4 = r3
        L10:
            if (r3 >= r11) goto L2d
            int r5 = r3 + r10
            r5 = r9[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r6 = r4 + 1
            char[] r7 = com.ss.android.socialbase.downloader.utils.DownloadDigestUtils.HEX_CHARS
            int r8 = r5 >> 4
            char r8 = r7[r8]
            r1[r4] = r8
            int r4 = r6 + 1
            r5 = r5 & 15
            char r5 = r7[r5]
            r1[r6] = r5
            int r3 = r3 + 1
            goto L10
        L2d:
            java.lang.String r9 = new java.lang.String
            r9.<init>(r1, r2, r0)
            return r9
        L33:
            java.lang.IndexOutOfBoundsException r9 = new java.lang.IndexOutOfBoundsException
            r9.<init>()
            throw r9
        L39:
            java.lang.NullPointerException r9 = new java.lang.NullPointerException
            java.lang.String r10 = "bytes is null"
            r9.<init>(r10)
            throw r9
    }
}

package com.kwad.sdk.utils;

public final class ad {
    static final char[] ajn = null;

    static {
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            com.kwad.sdk.utils.ad.ajn = r0
            return
    }

    public static java.lang.String ab(java.io.File r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "MD5"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            r5 = 4096(0x1000, float:5.74E-42)
            byte[] r5 = new byte[r5]     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L38
        L13:
            int r3 = r2.read(r5)     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L38
            r4 = -1
            if (r3 == r4) goto L1f
            r4 = 0
            r1.update(r5, r4, r3)     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L38
            goto L13
        L1f:
            byte[] r5 = r1.digest()     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L38
            java.lang.String r5 = m(r5)     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L38
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            return r5
        L2b:
            r5 = move-exception
            goto L31
        L2d:
            r5 = move-exception
            goto L3a
        L2f:
            r5 = move-exception
            r2 = r0
        L31:
            com.kwad.sdk.core.e.c.printStackTraceOnly(r5)     // Catch: java.lang.Throwable -> L38
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            return r0
        L38:
            r5 = move-exception
            r0 = r2
        L3a:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            throw r5
    }

    public static java.lang.String bp(java.lang.String r0) {
            byte[] r0 = r0.getBytes()
            java.lang.String r0 = l(r0)
            return r0
    }

    public static java.lang.String fx(java.lang.String r2) {
            java.lang.String r0 = "SHA-1"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> L18
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> L18
            r0.update(r2)     // Catch: java.lang.Exception -> L18
            byte[] r2 = r0.digest()     // Catch: java.lang.Exception -> L18
            r0 = 0
            int r1 = r2.length     // Catch: java.lang.Exception -> L18
            java.lang.String r2 = toHexString(r2, r0, r1)     // Catch: java.lang.Exception -> L18
            return r2
        L18:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r2)
            java.lang.String r2 = ""
            return r2
    }

    public static java.lang.String l(byte[] r5) {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> L34
            r0.update(r5)     // Catch: java.lang.Exception -> L34
            byte[] r5 = r0.digest()     // Catch: java.lang.Exception -> L34
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L34
            r0.<init>()     // Catch: java.lang.Exception -> L34
            int r1 = r5.length     // Catch: java.lang.Exception -> L34
            r2 = 0
        L14:
            if (r2 >= r1) goto L2f
            r3 = r5[r2]     // Catch: java.lang.Exception -> L34
            if (r3 >= 0) goto L1c
            int r3 = r3 + 256
        L1c:
            r4 = 16
            if (r3 >= r4) goto L25
            java.lang.String r4 = "0"
            r0.append(r4)     // Catch: java.lang.Exception -> L34
        L25:
            java.lang.String r3 = java.lang.Integer.toHexString(r3)     // Catch: java.lang.Exception -> L34
            r0.append(r3)     // Catch: java.lang.Exception -> L34
            int r2 = r2 + 1
            goto L14
        L2f:
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Exception -> L34
            return r5
        L34:
            java.lang.String r5 = ""
            return r5
    }

    private static java.lang.String m(byte[] r6) {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            int r1 = r6.length
            r2 = 0
            r3 = r2
        L8:
            if (r3 >= r1) goto L21
            r4 = r6[r3]
            r5 = 1
            java.lang.Object[] r5 = new java.lang.Object[r5]
            java.lang.Byte r4 = java.lang.Byte.valueOf(r4)
            r5[r2] = r4
            java.lang.String r4 = "%02x"
            java.lang.String r4 = java.lang.String.format(r4, r5)
            r0.append(r4)
            int r3 = r3 + 1
            goto L8
        L21:
            java.lang.String r6 = r0.toString()
            return r6
    }

    public static java.lang.String toHexString(byte[] r8, int r9, int r10) {
            com.kwad.sdk.utils.ao.checkNotNull(r8)
            int r9 = r10 + 0
            int r0 = r8.length
            if (r9 > r0) goto L32
            int r9 = r10 * 2
            char[] r0 = new char[r9]
            r1 = 0
            r2 = r1
            r3 = r2
        Lf:
            if (r2 >= r10) goto L2c
            int r4 = r2 + 0
            r4 = r8[r4]
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r5 = r3 + 1
            char[] r6 = com.kwad.sdk.utils.ad.ajn
            int r7 = r4 >> 4
            char r7 = r6[r7]
            r0[r3] = r7
            int r3 = r5 + 1
            r4 = r4 & 15
            char r4 = r6[r4]
            r0[r5] = r4
            int r2 = r2 + 1
            goto Lf
        L2c:
            java.lang.String r8 = new java.lang.String
            r8.<init>(r0, r1, r9)
            return r8
        L32:
            java.lang.IndexOutOfBoundsException r8 = new java.lang.IndexOutOfBoundsException
            r8.<init>()
            throw r8
    }
}

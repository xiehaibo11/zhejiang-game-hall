package com.bianfeng.ymnsdk.gongxiang;

public final class e {
    private static java.util.Map<java.lang.Integer, java.nio.ByteBuffer> a(java.io.File r3) {
            r0 = 0
            java.io.RandomAccessFile r1 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L27 java.io.IOException -> L38
            java.lang.String r2 = "r"
            r1.<init>(r3, r2)     // Catch: java.lang.Throwable -> L27 java.io.IOException -> L38
            java.nio.channels.FileChannel r3 = r1.getChannel()     // Catch: java.lang.Throwable -> L22 java.io.IOException -> L25
            com.bianfeng.ymnsdk.gongxiang.d r2 = com.bianfeng.ymnsdk.gongxiang.a.a(r3)     // Catch: java.lang.Throwable -> L20 java.io.IOException -> L3a
            java.lang.Object r2 = r2.a()     // Catch: java.lang.Throwable -> L20 java.io.IOException -> L3a
            java.nio.ByteBuffer r2 = (java.nio.ByteBuffer) r2     // Catch: java.lang.Throwable -> L20 java.io.IOException -> L3a
            java.util.Map r0 = com.bianfeng.ymnsdk.gongxiang.a.b(r2)     // Catch: java.lang.Throwable -> L20 java.io.IOException -> L3a
            if (r3 == 0) goto L43
            r3.close()     // Catch: java.io.IOException -> L43 java.lang.Throwable -> L46
            goto L43
        L20:
            r2 = move-exception
            goto L2b
        L22:
            r2 = move-exception
            r3 = r0
            goto L2b
        L25:
            r3 = r0
            goto L3a
        L27:
            r3 = move-exception
            r2 = r3
            r3 = r0
            r1 = r3
        L2b:
            if (r3 == 0) goto L32
            r3.close()     // Catch: java.io.IOException -> L31 java.lang.Throwable -> L46
            goto L32
        L31:
        L32:
            if (r1 == 0) goto L37
            r1.close()     // Catch: java.io.IOException -> L37 java.lang.Throwable -> L46
        L37:
            throw r2     // Catch: java.lang.Throwable -> L46
        L38:
            r3 = r0
            r1 = r3
        L3a:
            if (r3 == 0) goto L41
            r3.close()     // Catch: java.io.IOException -> L40 java.lang.Throwable -> L46
            goto L41
        L40:
        L41:
            if (r1 == 0) goto L46
        L43:
            r1.close()     // Catch: java.lang.Throwable -> L46
        L46:
            return r0
    }

    public static byte[] a(java.io.File r1, int r2) {
            java.util.Map r1 = a(r1)
            r0 = 0
            if (r1 != 0) goto L8
            return r0
        L8:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.Object r1 = r1.get(r2)
            java.nio.ByteBuffer r1 = (java.nio.ByteBuffer) r1
            if (r1 != 0) goto L15
            return r0
        L15:
            byte[] r1 = a(r1)
            return r1
    }

    private static byte[] a(java.nio.ByteBuffer r3) {
            byte[] r0 = r3.array()
            int r1 = r3.arrayOffset()
            int r2 = r3.position()
            int r2 = r2 + r1
            int r3 = r3.limit()
            int r1 = r1 + r3
            byte[] r3 = java.util.Arrays.copyOfRange(r0, r2, r1)
            return r3
    }

    public static java.lang.String b(java.io.File r2, int r3) {
            byte[] r2 = a(r2, r3)
            r3 = 0
            if (r2 != 0) goto L8
            return r3
        L8:
            java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L10
            java.lang.String r1 = "UTF-8"
            r0.<init>(r2, r1)     // Catch: java.io.UnsupportedEncodingException -> L10
            return r0
        L10:
            r2 = move-exception
            r2.printStackTrace()
            return r3
    }
}

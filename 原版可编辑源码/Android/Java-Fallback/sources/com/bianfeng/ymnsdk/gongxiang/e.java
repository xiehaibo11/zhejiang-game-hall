package com.bianfeng.ymnsdk.gongxiang;

public final class e {
    private static java.util.Map<java.lang.Integer, java.nio.ByteBuffer> a(java.io.File r5) {
            r0 = 0
            r1 = 0
            r2 = 0
            java.io.RandomAccessFile r3 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L44
            java.lang.String r4 = "r"
            r3.<init>(r5, r4)     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L44
            r1 = r3
            java.nio.channels.FileChannel r3 = r1.getChannel()     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L44
            r2 = r3
            com.bianfeng.ymnsdk.gongxiang.d r3 = com.bianfeng.ymnsdk.gongxiang.a.a(r2)     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L44
            java.lang.Object r3 = r3.a()     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L44
            java.nio.ByteBuffer r3 = (java.nio.ByteBuffer) r3     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L44
            java.util.Map r4 = com.bianfeng.ymnsdk.gongxiang.a.b(r3)     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L44
            r0 = r4
            if (r2 == 0) goto L27
            r2.close()     // Catch: java.io.IOException -> L25 com.bianfeng.ymnsdk.gongxiang.f -> L4b
            goto L27
        L25:
            r3 = move-exception
            goto L28
        L27:
        L28:
            r1.close()     // Catch: java.io.IOException -> L2d com.bianfeng.ymnsdk.gongxiang.f -> L4b
        L2c:
            goto L56
        L2d:
            r3 = move-exception
            goto L56
        L2f:
            r3 = move-exception
            if (r2 == 0) goto L38
            r2.close()     // Catch: java.io.IOException -> L36 com.bianfeng.ymnsdk.gongxiang.f -> L4b
            goto L38
        L36:
            r4 = move-exception
            goto L39
        L38:
        L39:
            if (r1 == 0) goto L41
            r1.close()     // Catch: java.io.IOException -> L3f com.bianfeng.ymnsdk.gongxiang.f -> L4b
            goto L41
        L3f:
            r4 = move-exception
            goto L42
        L41:
        L42:
            throw r3     // Catch: com.bianfeng.ymnsdk.gongxiang.f -> L4b
        L44:
            r3 = move-exception
            if (r2 == 0) goto L4f
            r2.close()     // Catch: com.bianfeng.ymnsdk.gongxiang.f -> L4b java.io.IOException -> L4d
            goto L4f
        L4b:
            r1 = move-exception
            goto L57
        L4d:
            r3 = move-exception
            goto L50
        L4f:
        L50:
            if (r1 == 0) goto L2c
            r1.close()     // Catch: java.io.IOException -> L2d com.bianfeng.ymnsdk.gongxiang.f -> L4b
            goto L2c
        L56:
        L57:
            return r0
    }

    public static byte[] a(java.io.File r3, int r4) {
            java.util.Map r0 = a(r3)
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r4)
            java.lang.Object r2 = r0.get(r2)
            java.nio.ByteBuffer r2 = (java.nio.ByteBuffer) r2
            if (r2 != 0) goto L15
            return r1
        L15:
            byte[] r1 = a(r2)
            return r1
    }

    private static byte[] a(java.nio.ByteBuffer r4) {
            byte[] r0 = r4.array()
            int r1 = r4.arrayOffset()
            int r2 = r4.position()
            int r2 = r2 + r1
            int r3 = r4.limit()
            int r3 = r3 + r1
            byte[] r2 = java.util.Arrays.copyOfRange(r0, r2, r3)
            return r2
    }

    public static java.lang.String b(java.io.File r4, int r5) {
            byte[] r0 = a(r4, r5)
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            java.lang.String r2 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L10
            java.lang.String r3 = "UTF-8"
            r2.<init>(r0, r3)     // Catch: java.io.UnsupportedEncodingException -> L10
            return r2
        L10:
            r2 = move-exception
            r2.printStackTrace()
            return r1
    }
}

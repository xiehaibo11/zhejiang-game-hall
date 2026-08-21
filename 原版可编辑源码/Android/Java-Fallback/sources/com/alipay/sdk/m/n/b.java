package com.alipay.sdk.m.n;

public class b {
    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] a(byte[] r6) throws java.io.IOException {
            r0 = 0
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> L45
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L45
            java.io.ByteArrayOutputStream r6 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L3f
            r6.<init>()     // Catch: java.lang.Throwable -> L3f
            java.util.zip.GZIPOutputStream r2 = new java.util.zip.GZIPOutputStream     // Catch: java.lang.Throwable -> L39
            r2.<init>(r6)     // Catch: java.lang.Throwable -> L39
            r0 = 4096(0x1000, float:5.74E-42)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L34
        L14:
            int r3 = r1.read(r0)     // Catch: java.lang.Throwable -> L34
            r4 = -1
            if (r3 == r4) goto L20
            r4 = 0
            r2.write(r0, r4, r3)     // Catch: java.lang.Throwable -> L34
            goto L14
        L20:
            r2.flush()     // Catch: java.lang.Throwable -> L34
            r2.finish()     // Catch: java.lang.Throwable -> L34
            byte[] r0 = r6.toByteArray()     // Catch: java.lang.Throwable -> L34
            r1.close()     // Catch: java.lang.Exception -> L2d
        L2d:
            r6.close()     // Catch: java.lang.Exception -> L30
        L30:
            r2.close()     // Catch: java.lang.Exception -> L33
        L33:
            return r0
        L34:
            r0 = move-exception
            r5 = r1
            r1 = r0
            r0 = r5
            goto L49
        L39:
            r2 = move-exception
            r5 = r2
            r2 = r0
            r0 = r1
            r1 = r5
            goto L49
        L3f:
            r6 = move-exception
            r2 = r0
            r0 = r1
            r1 = r6
            r6 = r2
            goto L49
        L45:
            r6 = move-exception
            r1 = r6
            r6 = r0
            r2 = r6
        L49:
            if (r0 == 0) goto L50
            r0.close()     // Catch: java.lang.Exception -> L4f
            goto L50
        L4f:
        L50:
            if (r6 == 0) goto L57
            r6.close()     // Catch: java.lang.Exception -> L56
            goto L57
        L56:
        L57:
            if (r2 == 0) goto L5c
            r2.close()     // Catch: java.lang.Exception -> L5c
        L5c:
            goto L5e
        L5d:
            throw r1
        L5e:
            goto L5d
    }

    public static byte[] b(byte[] r7) throws java.io.IOException {
            r0 = 0
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> L3b
            r1.<init>(r7)     // Catch: java.lang.Throwable -> L3b
            java.util.zip.GZIPInputStream r7 = new java.util.zip.GZIPInputStream     // Catch: java.lang.Throwable -> L37
            r7.<init>(r1)     // Catch: java.lang.Throwable -> L37
            r2 = 4096(0x1000, float:5.74E-42)
            byte[] r3 = new byte[r2]     // Catch: java.lang.Throwable -> L35
            java.io.ByteArrayOutputStream r4 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L35
            r4.<init>()     // Catch: java.lang.Throwable -> L35
        L14:
            r0 = 0
            int r5 = r7.read(r3, r0, r2)     // Catch: java.lang.Throwable -> L31
            r6 = -1
            if (r5 == r6) goto L20
            r4.write(r3, r0, r5)     // Catch: java.lang.Throwable -> L31
            goto L14
        L20:
            r4.flush()     // Catch: java.lang.Throwable -> L31
            byte[] r0 = r4.toByteArray()     // Catch: java.lang.Throwable -> L31
            r4.close()     // Catch: java.lang.Exception -> L2a
        L2a:
            r7.close()     // Catch: java.lang.Exception -> L2d
        L2d:
            r1.close()     // Catch: java.lang.Exception -> L30
        L30:
            return r0
        L31:
            r0 = move-exception
            r2 = r0
            r0 = r4
            goto L3f
        L35:
            r2 = move-exception
            goto L3f
        L37:
            r7 = move-exception
            r2 = r7
            r7 = r0
            goto L3f
        L3b:
            r7 = move-exception
            r2 = r7
            r7 = r0
            r1 = r7
        L3f:
            r0.close()     // Catch: java.lang.Exception -> L42
        L42:
            r7.close()     // Catch: java.lang.Exception -> L45
        L45:
            r1.close()     // Catch: java.lang.Exception -> L48
        L48:
            goto L4a
        L49:
            throw r2
        L4a:
            goto L49
    }
}

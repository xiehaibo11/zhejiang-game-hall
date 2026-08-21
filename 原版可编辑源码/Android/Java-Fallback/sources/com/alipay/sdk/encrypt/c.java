package com.alipay.sdk.encrypt;

public class c {
    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] a(byte[] r6) throws java.io.IOException {
            r0 = 0
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> L3e
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L3e
            java.io.ByteArrayOutputStream r6 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L3b
            r6.<init>()     // Catch: java.lang.Throwable -> L3b
            java.util.zip.GZIPOutputStream r2 = new java.util.zip.GZIPOutputStream     // Catch: java.lang.Throwable -> L36
            r2.<init>(r6)     // Catch: java.lang.Throwable -> L36
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
            goto L43
        L36:
            r2 = move-exception
            r5 = r2
            r2 = r0
            r0 = r5
            goto L43
        L3b:
            r6 = move-exception
            r2 = r0
            goto L41
        L3e:
            r6 = move-exception
            r1 = r0
            r2 = r1
        L41:
            r0 = r6
            r6 = r2
        L43:
            if (r1 == 0) goto L4a
            r1.close()     // Catch: java.lang.Exception -> L49
            goto L4a
        L49:
        L4a:
            if (r6 == 0) goto L51
            r6.close()     // Catch: java.lang.Exception -> L50
            goto L51
        L50:
        L51:
            if (r2 == 0) goto L56
            r2.close()     // Catch: java.lang.Exception -> L56
        L56:
            goto L58
        L57:
            throw r0
        L58:
            goto L57
    }

    public static byte[] b(byte[] r6) throws java.io.IOException {
            r0 = 0
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> L3b
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L3b
            java.util.zip.GZIPInputStream r6 = new java.util.zip.GZIPInputStream     // Catch: java.lang.Throwable -> L38
            r6.<init>(r1)     // Catch: java.lang.Throwable -> L38
            r2 = 4096(0x1000, float:5.74E-42)
            byte[] r2 = new byte[r2]     // Catch: java.lang.Throwable -> L34
            java.io.ByteArrayOutputStream r3 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L34
            r3.<init>()     // Catch: java.lang.Throwable -> L34
        L14:
            int r0 = r2.length     // Catch: java.lang.Throwable -> L32
            r4 = 0
            int r0 = r6.read(r2, r4, r0)     // Catch: java.lang.Throwable -> L32
            r5 = -1
            if (r0 == r5) goto L21
            r3.write(r2, r4, r0)     // Catch: java.lang.Throwable -> L32
            goto L14
        L21:
            r3.flush()     // Catch: java.lang.Throwable -> L32
            byte[] r0 = r3.toByteArray()     // Catch: java.lang.Throwable -> L32
            r3.close()     // Catch: java.lang.Exception -> L2b
        L2b:
            r6.close()     // Catch: java.lang.Exception -> L2e
        L2e:
            r1.close()     // Catch: java.lang.Exception -> L31
        L31:
            return r0
        L32:
            r0 = move-exception
            goto L40
        L34:
            r2 = move-exception
            r3 = r0
            r0 = r2
            goto L40
        L38:
            r6 = move-exception
            r3 = r0
            goto L3e
        L3b:
            r6 = move-exception
            r1 = r0
            r3 = r1
        L3e:
            r0 = r6
            r6 = r3
        L40:
            r3.close()     // Catch: java.lang.Exception -> L43
        L43:
            r6.close()     // Catch: java.lang.Exception -> L46
        L46:
            r1.close()     // Catch: java.lang.Exception -> L49
        L49:
            goto L4b
        L4a:
            throw r0
        L4b:
            goto L4a
    }
}

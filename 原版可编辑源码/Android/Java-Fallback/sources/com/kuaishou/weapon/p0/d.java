package com.kuaishou.weapon.p0;

public abstract class d {
    public static final int a = 2048;
    public static final java.lang.String b = ".gz";

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(java.io.InputStream r5, java.io.OutputStream r6) {
            java.util.zip.GZIPOutputStream r0 = new java.util.zip.GZIPOutputStream     // Catch: java.lang.Throwable -> L1f
            r0.<init>(r6)     // Catch: java.lang.Throwable -> L1f
            r6 = 2048(0x800, float:2.87E-42)
            byte[] r1 = new byte[r6]     // Catch: java.lang.Throwable -> L20
        L9:
            r2 = 0
            int r3 = r5.read(r1, r2, r6)     // Catch: java.lang.Throwable -> L20
            r4 = -1
            if (r3 == r4) goto L15
            r0.write(r1, r2, r3)     // Catch: java.lang.Throwable -> L20
            goto L9
        L15:
            r0.flush()     // Catch: java.lang.Throwable -> L20
            r0.finish()     // Catch: java.lang.Throwable -> L20
            r0.close()     // Catch: java.lang.Throwable -> L20
            return
        L1f:
            r0 = 0
        L20:
            if (r0 == 0) goto L25
            r0.close()     // Catch: java.lang.Exception -> L25
        L25:
            return
    }

    public static byte[] a(byte[] r3) {
            r0 = 0
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> L28
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L28
            java.io.ByteArrayOutputStream r3 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L26
            r3.<init>()     // Catch: java.lang.Throwable -> L26
            a(r1, r3)     // Catch: java.lang.Throwable -> L22
            byte[] r0 = r3.toByteArray()     // Catch: java.lang.Throwable -> L22
            r3.flush()     // Catch: java.lang.Throwable -> L22
            r3.close()     // Catch: java.lang.Throwable -> L22
            r1.close()     // Catch: java.lang.Throwable -> L22
            r3.close()     // Catch: java.lang.Exception -> L1e
        L1e:
            r1.close()     // Catch: java.lang.Exception -> L35
            goto L35
        L22:
            r2 = r0
            r0 = r3
            r3 = r2
            goto L2a
        L26:
            r3 = r0
            goto L2a
        L28:
            r3 = r0
            r1 = r3
        L2a:
            if (r0 == 0) goto L2f
            r0.close()     // Catch: java.lang.Exception -> L2f
        L2f:
            if (r1 == 0) goto L34
            r1.close()     // Catch: java.lang.Exception -> L34
        L34:
            r0 = r3
        L35:
            return r0
    }

    public static void b(java.io.InputStream r5, java.io.OutputStream r6) {
            r0 = 0
            java.util.zip.GZIPInputStream r1 = new java.util.zip.GZIPInputStream     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L29
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L29
            r5 = 2048(0x800, float:2.87E-42)
            byte[] r0 = new byte[r5]     // Catch: java.lang.Throwable -> L1d java.lang.Exception -> L20
        La:
            r2 = 0
            int r3 = r1.read(r0, r2, r5)     // Catch: java.lang.Throwable -> L1d java.lang.Exception -> L20
            r4 = -1
            if (r3 == r4) goto L16
            r6.write(r0, r2, r3)     // Catch: java.lang.Throwable -> L1d java.lang.Exception -> L20
            goto La
        L16:
            r1.close()     // Catch: java.lang.Throwable -> L1d java.lang.Exception -> L20
            r1.close()     // Catch: java.lang.Exception -> L1c
        L1c:
            return
        L1d:
            r5 = move-exception
            r0 = r1
            goto L23
        L20:
            r0 = r1
            goto L29
        L22:
            r5 = move-exception
        L23:
            if (r0 == 0) goto L28
            r0.close()     // Catch: java.lang.Exception -> L28
        L28:
            throw r5
        L29:
            if (r0 == 0) goto L2e
            r0.close()     // Catch: java.lang.Exception -> L2e
        L2e:
            return
    }

    public static byte[] b(byte[] r3) {
            r0 = 0
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> L24
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L24
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L25
            r2.<init>()     // Catch: java.lang.Throwable -> L25
            b(r1, r2)     // Catch: java.lang.Throwable -> L22
            byte[] r3 = r2.toByteArray()     // Catch: java.lang.Throwable -> L22
            r2.flush()     // Catch: java.lang.Throwable -> L22
            r2.close()     // Catch: java.lang.Throwable -> L22
            r1.close()     // Catch: java.lang.Throwable -> L22
            r2.close()     // Catch: java.lang.Exception -> L1e
        L1e:
            r1.close()     // Catch: java.lang.Exception -> L2d
            goto L2d
        L22:
            r0 = r2
            goto L25
        L24:
            r1 = r0
        L25:
            if (r0 == 0) goto L2a
            r0.close()     // Catch: java.lang.Exception -> L2a
        L2a:
            if (r1 == 0) goto L2d
            goto L1e
        L2d:
            return r3
    }
}

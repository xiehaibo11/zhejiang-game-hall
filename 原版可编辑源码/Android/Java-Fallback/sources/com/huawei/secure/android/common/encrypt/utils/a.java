package com.huawei.secure.android.common.encrypt.utils;

public class a {
    private static final java.lang.String a = "IOUtil";
    private static final int b = 4096;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static long a(java.io.InputStream r1, java.io.OutputStream r2) throws java.io.IOException {
            r0 = 4096(0x1000, float:5.74E-42)
            byte[] r0 = new byte[r0]
            long r1 = a(r1, r2, r0)
            return r1
    }

    public static long a(java.io.InputStream r4, java.io.OutputStream r5, byte[] r6) throws java.io.IOException {
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

    public static java.io.InputStream a(byte[] r1) throws java.io.IOException {
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            r0.<init>(r1)
            return r0
    }

    public static void a(android.database.Cursor r0) {
            if (r0 == 0) goto L5
            r0.close()
        L5:
            return
    }

    public static void a(java.io.Closeable r1) {
            if (r1 == 0) goto Ld
            r1.close()     // Catch: java.io.IOException -> L6
            goto Ld
        L6:
            java.lang.String r1 = "IOUtil"
            java.lang.String r0 = "closeSecure IOException"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r0)
        Ld:
            return
    }

    public static void a(java.io.File r1) {
            if (r1 == 0) goto L15
            boolean r0 = r1.exists()
            if (r0 == 0) goto L15
            boolean r1 = r1.delete()
            if (r1 != 0) goto L15
            java.lang.String r1 = "IOUtil"
            java.lang.String r0 = "deleteSecure exception"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r0)
        L15:
            return
    }

    public static void a(java.io.InputStream r0) {
            a(r0)
            return
    }

    public static void a(java.io.OutputStream r0) {
            a(r0)
            return
    }

    public static void a(java.io.Reader r0) {
            a(r0)
            return
    }

    public static void a(java.io.Writer r0) {
            a(r0)
            return
    }

    public static void a(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto Le
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            a(r0)
        Le:
            return
    }

    public static byte[] b(java.io.InputStream r1) throws java.io.IOException {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            a(r1, r0)
            byte[] r1 = r0.toByteArray()
            return r1
    }
}

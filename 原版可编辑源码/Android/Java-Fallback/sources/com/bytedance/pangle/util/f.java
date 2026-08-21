package com.bytedance.pangle.util;

public final class f {
    public static java.lang.String a = "DES/ECB/NoPadding";
    public static java.lang.String b = "DESede/ECB/NoPadding";
    private static final char[] c = null;

    static {
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70} // fill-array
            com.bytedance.pangle.util.f.c = r0
            return
    }

    public static java.lang.String a(java.lang.String r1) {
            byte[] r1 = r1.getBytes()
            java.lang.String r0 = "MD5"
            byte[] r1 = a(r1, r0)
            java.lang.String r1 = b(r1)
            return r1
    }

    public static java.lang.String a(byte[] r1) {
            java.lang.String r0 = "MD5"
            byte[] r1 = a(r1, r0)
            java.lang.String r1 = b(r1)
            return r1
    }

    private static byte[] a(byte[] r2, java.lang.String r3) {
            r0 = 0
            if (r2 == 0) goto L17
            int r1 = r2.length
            if (r1 > 0) goto L7
            goto L17
        L7:
            java.security.MessageDigest r3 = java.security.MessageDigest.getInstance(r3)     // Catch: java.security.NoSuchAlgorithmException -> L13
            r3.update(r2)     // Catch: java.security.NoSuchAlgorithmException -> L13
            byte[] r2 = r3.digest()     // Catch: java.security.NoSuchAlgorithmException -> L13
            return r2
        L13:
            r2 = move-exception
            r2.printStackTrace()
        L17:
            return r0
    }

    private static java.lang.String b(byte[] r7) {
            r0 = 0
            if (r7 != 0) goto L4
            return r0
        L4:
            int r1 = r7.length
            if (r1 > 0) goto L8
            return r0
        L8:
            int r0 = r1 << 1
            char[] r0 = new char[r0]
            r2 = 0
            r3 = r2
        Le:
            if (r2 >= r1) goto L2b
            int r4 = r3 + 1
            char[] r5 = com.bytedance.pangle.util.f.c
            r6 = r7[r2]
            int r6 = r6 >>> 4
            r6 = r6 & 15
            char r6 = r5[r6]
            r0[r3] = r6
            int r3 = r4 + 1
            r6 = r7[r2]
            r6 = r6 & 15
            char r5 = r5[r6]
            r0[r4] = r5
            int r2 = r2 + 1
            goto Le
        L2b:
            java.lang.String r7 = new java.lang.String
            r7.<init>(r0)
            return r7
    }
}

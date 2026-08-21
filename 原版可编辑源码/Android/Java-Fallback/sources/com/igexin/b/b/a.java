package com.igexin.b.b;

public class a {
    private static final char[] a = null;

    static {
            r0 = 62
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90} // fill-array
            com.igexin.b.b.a.a = r0
            return
    }

    public static java.lang.String a(int r5) {
            r0 = 100
            if (r5 >= 0) goto L5
            r5 = r0
        L5:
            if (r5 <= r0) goto L9
            r5 = 10
        L9:
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            char[] r1 = new char[r5]
            r2 = 0
        L11:
            if (r2 >= r5) goto L21
            char[] r3 = com.igexin.b.b.a.a
            int r4 = r3.length
            int r4 = r0.nextInt(r4)
            char r3 = r3[r4]
            r1[r2] = r3
            int r2 = r2 + 1
            goto L11
        L21:
            java.lang.String r5 = new java.lang.String
            r5.<init>(r1)
            return r5
    }

    public static java.lang.String a(java.lang.String r8) {
            byte[] r8 = r8.getBytes()
            r0 = 16
            char[] r1 = new char[r0]
            r1 = {x0044: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            r2 = 0
            java.lang.String r3 = "MD5"
            java.security.MessageDigest r3 = java.security.MessageDigest.getInstance(r3)     // Catch: java.security.NoSuchAlgorithmException -> L13
            goto L14
        L13:
            r3 = r2
        L14:
            if (r3 != 0) goto L17
            return r2
        L17:
            r3.update(r8)
            byte[] r8 = r3.digest()
            r2 = 32
            char[] r2 = new char[r2]
            r3 = 0
            r4 = r3
        L24:
            if (r3 >= r0) goto L3d
            r5 = r8[r3]
            int r6 = r4 + 1
            int r7 = r5 >>> 4
            r7 = r7 & 15
            char r7 = r1[r7]
            r2[r4] = r7
            int r4 = r6 + 1
            r5 = r5 & 15
            char r5 = r1[r5]
            r2[r6] = r5
            int r3 = r3 + 1
            goto L24
        L3d:
            java.lang.String r8 = new java.lang.String
            r8.<init>(r2)
            return r8
    }

    public static boolean a(java.lang.String r0, java.lang.String r1) {
            if (r0 != 0) goto L8
            if (r1 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
        L8:
            boolean r0 = r0.equals(r1)
            return r0
    }

    public static byte[] a(byte[] r2) {
            r0 = 0
            java.lang.String r1 = "MD5"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.security.NoSuchAlgorithmException -> L8
            goto L9
        L8:
            r1 = r0
        L9:
            if (r1 != 0) goto Lc
            return r0
        Lc:
            r1.update(r2)
            byte[] r2 = r1.digest()
            return r2
    }

    public static java.lang.String b(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L7
            r1 = r2
        L7:
            return r1
    }

    public static byte[] b(byte[] r8) {
            r0 = 0
            if (r8 != 0) goto L4
            return r0
        L4:
            byte[] r8 = com.igexin.b.a.b.f.c(r8)
            if (r8 == 0) goto L3d
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r0 = a(r0)
            int r1 = r8.length
            int r2 = r1 + 16
            byte[] r2 = new byte[r2]
            r3 = 8
            r4 = 0
            java.lang.String r5 = r0.substring(r4, r3)
            byte[] r5 = r5.getBytes()
            r6 = 24
            r7 = 32
            java.lang.String r0 = r0.substring(r6, r7)
            byte[] r0 = r0.getBytes()
            java.lang.System.arraycopy(r5, r4, r2, r4, r3)
            java.lang.System.arraycopy(r8, r4, r2, r3, r1)
            int r1 = r1 + r3
            java.lang.System.arraycopy(r0, r4, r2, r1, r3)
            r0 = r2
        L3d:
            return r0
    }

    public static byte[] c(byte[] r5) {
            if (r5 == 0) goto L19
            int r0 = r5.length
            r1 = 16
            if (r0 >= r1) goto L8
            goto L19
        L8:
            int r0 = r5.length
            int r0 = r0 - r1
            byte[] r0 = new byte[r0]
            r2 = 8
            r3 = 0
            int r4 = r5.length
            int r4 = r4 - r1
            java.lang.System.arraycopy(r5, r2, r0, r3, r4)
            byte[] r5 = com.igexin.b.a.b.f.d(r0)
            return r5
        L19:
            r5 = 0
            return r5
    }
}

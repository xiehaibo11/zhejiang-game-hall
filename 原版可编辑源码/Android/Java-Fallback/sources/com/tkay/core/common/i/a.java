package com.tkay.core.common.i;

public final class a {
    private static java.util.Map<java.lang.Character, java.lang.Character> a;
    private static char[] b;
    private static char[] c;
    private static byte[] d;

    static {
            r0 = 64
            char[] r1 = new char[r0]
            r1 = {x001a: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 43, 47} // fill-array
            com.tkay.core.common.i.a.b = r1
            char[] r0 = new char[r0]
            r0 = {x005e: FILL_ARRAY_DATA , data: [53, 80, 86, 117, 51, 74, 106, 108, 101, 81, 98, 72, 57, 65, 118, 104, 116, 115, 103, 87, 73, 67, 85, 105, 70, 50, 97, 100, 77, 56, 68, 121, 90, 79, 78, 107, 47, 52, 82, 55, 48, 102, 110, 43, 122, 71, 89, 76, 88, 112, 109, 49, 69, 75, 83, 84, 111, 120, 54, 113, 119, 114, 99, 66} // fill-array
            com.tkay.core.common.i.a.c = r0
            r0 = 128(0x80, float:1.8E-43)
            byte[] r0 = new byte[r0]
            r0 = {x00a2: FILL_ARRAY_DATA , data: [-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 62, -1, -1, -1, 63, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, -1, -1, -1, -1, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, -1, -1, -1, -1, -1, -1, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, -1, -1, -1, -1, -1} // fill-array
            com.tkay.core.common.i.a.d = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    protected static com.tkay.core.common.i.b a(java.lang.String r5, java.lang.String r6) {
            com.tkay.core.common.i.b r0 = new com.tkay.core.common.i.b
            r0.<init>()
            java.lang.String r1 = "RSA"
            java.security.KeyFactory r1 = java.security.KeyFactory.getInstance(r1)     // Catch: java.lang.Throwable -> L5b
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Throwable -> L5b
            r2 = 2
            byte[] r5 = android.util.Base64.decode(r5, r2)     // Catch: java.lang.Throwable -> L5b
            java.security.spec.X509EncodedKeySpec r3 = new java.security.spec.X509EncodedKeySpec     // Catch: java.lang.Throwable -> L5b
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L5b
            java.security.PublicKey r5 = r1.generatePublic(r3)     // Catch: java.lang.Throwable -> L5b
            r1 = 0
            boolean r3 = r5 instanceof java.security.interfaces.RSAPublicKey     // Catch: java.lang.Throwable -> L5b
            if (r3 == 0) goto L2d
            r1 = r5
            java.security.interfaces.RSAPublicKey r1 = (java.security.interfaces.RSAPublicKey) r1     // Catch: java.lang.Throwable -> L5b
            java.math.BigInteger r1 = r1.getModulus()     // Catch: java.lang.Throwable -> L5b
            int r1 = r1.bitLength()     // Catch: java.lang.Throwable -> L5b
        L2d:
            java.lang.String r3 = "RSA/ECB/PKCS1Padding"
            javax.crypto.Cipher r3 = javax.crypto.Cipher.getInstance(r3)     // Catch: java.lang.Throwable -> L5b
            r4 = 1
            r3.init(r4, r5)     // Catch: java.lang.Throwable -> L5b
            int r1 = r1 / 8
            int r1 = r1 + (-11)
            if (r1 <= 0) goto L46
            byte[] r5 = r6.getBytes()     // Catch: java.lang.Throwable -> L5b
            byte[] r5 = a(r3, r5, r1)     // Catch: java.lang.Throwable -> L5b
            goto L4e
        L46:
            byte[] r5 = r6.getBytes()     // Catch: java.lang.Throwable -> L5b
            byte[] r5 = r3.doFinal(r5)     // Catch: java.lang.Throwable -> L5b
        L4e:
            byte[] r5 = android.util.Base64.encode(r5, r2)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r6 = new java.lang.String     // Catch: java.lang.Throwable -> L5b
            r6.<init>(r5)     // Catch: java.lang.Throwable -> L5b
            r0.a(r6)     // Catch: java.lang.Throwable -> L5b
            goto L63
        L5b:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            r0.b(r5)
        L63:
            return r0
    }

    private static java.lang.Character a(char r4) {
            java.util.Map<java.lang.Character, java.lang.Character> r0 = com.tkay.core.common.i.a.a
            if (r0 != 0) goto L29
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tkay.core.common.i.a.a = r0
            r0 = 0
        Lc:
            char[] r1 = com.tkay.core.common.i.a.b
            int r1 = r1.length
            if (r0 >= r1) goto L29
            java.util.Map<java.lang.Character, java.lang.Character> r1 = com.tkay.core.common.i.a.a
            char[] r2 = com.tkay.core.common.i.a.c
            char r2 = r2[r0]
            java.lang.Character r2 = java.lang.Character.valueOf(r2)
            char[] r3 = com.tkay.core.common.i.a.b
            char r3 = r3[r0]
            java.lang.Character r3 = java.lang.Character.valueOf(r3)
            r1.put(r2, r3)
            int r0 = r0 + 1
            goto Lc
        L29:
            java.util.Map<java.lang.Character, java.lang.Character> r0 = com.tkay.core.common.i.a.a
            java.lang.Character r1 = java.lang.Character.valueOf(r4)
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L42
            java.util.Map<java.lang.Character, java.lang.Character> r0 = com.tkay.core.common.i.a.a
            java.lang.Character r4 = java.lang.Character.valueOf(r4)
            java.lang.Object r4 = r0.get(r4)
            java.lang.Character r4 = (java.lang.Character) r4
            return r4
        L42:
            java.lang.Character r4 = java.lang.Character.valueOf(r4)
            return r4
    }

    public static java.lang.String a(java.lang.String r9) {
            java.lang.String r0 = ""
            boolean r1 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> L7b
            if (r1 != 0) goto L7f
            char[] r9 = r9.toCharArray()     // Catch: java.lang.Exception -> L7b
            if (r9 == 0) goto L70
            int r1 = r9.length     // Catch: java.lang.Exception -> L7b
            if (r1 <= 0) goto L70
            int r1 = r9.length     // Catch: java.lang.Exception -> L7b
            char[] r1 = new char[r1]     // Catch: java.lang.Exception -> L7b
            r2 = 0
            r3 = r2
        L16:
            int r4 = r9.length     // Catch: java.lang.Exception -> L7b
            if (r3 >= r4) goto L6a
            char r4 = r9[r3]     // Catch: java.lang.Exception -> L7b
            java.util.Map<java.lang.Character, java.lang.Character> r5 = com.tkay.core.common.i.a.a     // Catch: java.lang.Exception -> L7b
            if (r5 != 0) goto L44
            java.util.HashMap r5 = new java.util.HashMap     // Catch: java.lang.Exception -> L7b
            r5.<init>()     // Catch: java.lang.Exception -> L7b
            com.tkay.core.common.i.a.a = r5     // Catch: java.lang.Exception -> L7b
            r5 = r2
        L27:
            char[] r6 = com.tkay.core.common.i.a.b     // Catch: java.lang.Exception -> L7b
            int r6 = r6.length     // Catch: java.lang.Exception -> L7b
            if (r5 >= r6) goto L44
            java.util.Map<java.lang.Character, java.lang.Character> r6 = com.tkay.core.common.i.a.a     // Catch: java.lang.Exception -> L7b
            char[] r7 = com.tkay.core.common.i.a.c     // Catch: java.lang.Exception -> L7b
            char r7 = r7[r5]     // Catch: java.lang.Exception -> L7b
            java.lang.Character r7 = java.lang.Character.valueOf(r7)     // Catch: java.lang.Exception -> L7b
            char[] r8 = com.tkay.core.common.i.a.b     // Catch: java.lang.Exception -> L7b
            char r8 = r8[r5]     // Catch: java.lang.Exception -> L7b
            java.lang.Character r8 = java.lang.Character.valueOf(r8)     // Catch: java.lang.Exception -> L7b
            r6.put(r7, r8)     // Catch: java.lang.Exception -> L7b
            int r5 = r5 + 1
            goto L27
        L44:
            java.util.Map<java.lang.Character, java.lang.Character> r5 = com.tkay.core.common.i.a.a     // Catch: java.lang.Exception -> L7b
            java.lang.Character r6 = java.lang.Character.valueOf(r4)     // Catch: java.lang.Exception -> L7b
            boolean r5 = r5.containsKey(r6)     // Catch: java.lang.Exception -> L7b
            if (r5 == 0) goto L5d
            java.util.Map<java.lang.Character, java.lang.Character> r5 = com.tkay.core.common.i.a.a     // Catch: java.lang.Exception -> L7b
            java.lang.Character r4 = java.lang.Character.valueOf(r4)     // Catch: java.lang.Exception -> L7b
            java.lang.Object r4 = r5.get(r4)     // Catch: java.lang.Exception -> L7b
            java.lang.Character r4 = (java.lang.Character) r4     // Catch: java.lang.Exception -> L7b
            goto L61
        L5d:
            java.lang.Character r4 = java.lang.Character.valueOf(r4)     // Catch: java.lang.Exception -> L7b
        L61:
            char r4 = r4.charValue()     // Catch: java.lang.Exception -> L7b
            r1[r3] = r4     // Catch: java.lang.Exception -> L7b
            int r3 = r3 + 1
            goto L16
        L6a:
            java.lang.String r9 = new java.lang.String     // Catch: java.lang.Exception -> L7b
            r9.<init>(r1)     // Catch: java.lang.Exception -> L7b
            r0 = r9
        L70:
            java.lang.String r9 = new java.lang.String     // Catch: java.lang.Exception -> L7b
            byte[] r1 = b(r0)     // Catch: java.lang.Exception -> L7b
            r9.<init>(r1)     // Catch: java.lang.Exception -> L7b
            r0 = r9
            goto L7f
        L7b:
            r9 = move-exception
            r9.printStackTrace()
        L7f:
            return r0
    }

    private static byte[] a(javax.crypto.Cipher r6, byte[] r7, int r8) {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            int r1 = r7.length
            r2 = 0
            r3 = r2
            r4 = r3
        L9:
            int r5 = r1 - r3
            if (r5 <= 0) goto L21
            if (r5 <= r8) goto L14
            byte[] r3 = r6.doFinal(r7, r3, r8)
            goto L18
        L14:
            byte[] r3 = r6.doFinal(r7, r3, r5)
        L18:
            int r5 = r3.length
            r0.write(r3, r2, r5)
            int r4 = r4 + 1
            int r3 = r4 * r8
            goto L9
        L21:
            byte[] r6 = r0.toByteArray()
            r0.close()
            return r6
    }

    private static byte[] b(java.lang.String r8) {
            byte[] r8 = r8.getBytes()
            int r0 = r8.length
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>(r0)
            r2 = 0
        Lb:
            if (r2 >= r0) goto L82
        Ld:
            byte[] r3 = com.tkay.core.common.i.a.d
            int r4 = r2 + 1
            r2 = r8[r2]
            r2 = r3[r2]
            r3 = -1
            if (r4 >= r0) goto L1d
            if (r2 == r3) goto L1b
            goto L1d
        L1b:
            r2 = r4
            goto Ld
        L1d:
            if (r2 == r3) goto L82
        L1f:
            byte[] r5 = com.tkay.core.common.i.a.d
            int r6 = r4 + 1
            r4 = r8[r4]
            r4 = r5[r4]
            if (r6 >= r0) goto L2e
            if (r4 == r3) goto L2c
            goto L2e
        L2c:
            r4 = r6
            goto L1f
        L2e:
            if (r4 == r3) goto L82
            int r2 = r2 << 2
            r5 = r4 & 48
            int r5 = r5 >>> 4
            r2 = r2 | r5
            r1.write(r2)
        L3a:
            int r2 = r6 + 1
            r5 = r8[r6]
            r6 = 61
            if (r5 != r6) goto L47
            byte[] r8 = r1.toByteArray()
            return r8
        L47:
            byte[] r7 = com.tkay.core.common.i.a.d
            r5 = r7[r5]
            if (r2 >= r0) goto L52
            if (r5 == r3) goto L50
            goto L52
        L50:
            r6 = r2
            goto L3a
        L52:
            if (r5 == r3) goto L82
            r4 = r4 & 15
            int r4 = r4 << 4
            r7 = r5 & 60
            int r7 = r7 >>> 2
            r4 = r4 | r7
            r1.write(r4)
        L60:
            int r4 = r2 + 1
            r2 = r8[r2]
            if (r2 != r6) goto L6b
            byte[] r8 = r1.toByteArray()
            return r8
        L6b:
            byte[] r7 = com.tkay.core.common.i.a.d
            r2 = r7[r2]
            if (r4 >= r0) goto L76
            if (r2 == r3) goto L74
            goto L76
        L74:
            r2 = r4
            goto L60
        L76:
            if (r2 == r3) goto L82
            r3 = r5 & 3
            int r3 = r3 << 6
            r2 = r2 | r3
            r1.write(r2)
            r2 = r4
            goto Lb
        L82:
            byte[] r8 = r1.toByteArray()
            return r8
    }
}

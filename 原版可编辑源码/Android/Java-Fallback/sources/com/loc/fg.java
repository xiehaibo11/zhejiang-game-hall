package com.loc;

public final class fg {
    private static final char[] a = null;
    private static final byte[] b = null;
    private static final byte[] c = null;
    private static final javax.crypto.spec.IvParameterSpec d = null;

    static {
            r0 = 16
            char[] r1 = new char[r0]
            r1 = {x0024: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            com.loc.fg.a = r1
            r1 = 128(0x80, float:1.8E-43)
            byte[] r1 = new byte[r1]
            r1 = {x0038: FILL_ARRAY_DATA , data: [61, 61, 81, 65, 65, 69, 119, 65, 67, 48, 74, 80, 115, 116, 54, 75, 104, 76, 122, 97, 88, 99, 53, 71, 49, 122, 68, 70, 79, 104, 113, 113, 65, 97, 76, 54, 65, 66, 87, 53, 103, 85, 84, 113, 71, 68, 69, 76, 80, 82, 106, 51, 66, 75, 75, 69, 98, 55, 84, 108, 115, 122, 51, 106, 76, 55, 88, 122, 70, 121, 73, 75, 52, 50, 43, 101, 70, 121, 56, 105, 115, 105, 89, 120, 117, 112, 53, 48, 76, 81, 70, 86, 108, 110, 73, 65, 66, 74, 65, 83, 119, 65, 119, 83, 68, 65, 81, 66, 66, 69, 81, 65, 78, 99, 118, 104, 73, 90, 111, 75, 74, 89, 81, 68, 119, 119, 70, 77} // fill-array
            com.loc.fg.b = r1
            byte[] r0 = new byte[r0]
            r0 = {x007c: FILL_ARRAY_DATA , data: [0, 1, 1, 2, 3, 5, 8, 13, 8, 7, 6, 5, 4, 3, 2, 1} // fill-array
            com.loc.fg.c = r0
            javax.crypto.spec.IvParameterSpec r0 = new javax.crypto.spec.IvParameterSpec
            byte[] r1 = com.loc.fg.c
            r0.<init>(r1)
            com.loc.fg.d = r0
            return
    }

    public static java.lang.String a(java.lang.String r4) {
            r0 = 0
            if (r4 == 0) goto L2e
            int r1 = r4.length()     // Catch: java.lang.Throwable -> L26
            if (r1 != 0) goto La
            goto L2e
        La:
            java.lang.String r1 = "SHA1"
            java.lang.String r1 = a(r1, r4)     // Catch: java.lang.Throwable -> L26
            java.lang.String r2 = "MD5"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L26
            r3.<init>()     // Catch: java.lang.Throwable -> L26
            r3.append(r1)     // Catch: java.lang.Throwable -> L26
            r3.append(r4)     // Catch: java.lang.Throwable -> L26
            java.lang.String r4 = r3.toString()     // Catch: java.lang.Throwable -> L26
            java.lang.String r4 = a(r2, r4)     // Catch: java.lang.Throwable -> L26
            return r4
        L26:
            r4 = move-exception
            java.lang.String r1 = "Encrypt"
            java.lang.String r2 = "generatorKey"
            com.loc.fr.a(r4, r1, r2)
        L2e:
            return r0
    }

    public static java.lang.String a(java.lang.String r2, java.lang.String r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "UTF-8"
            byte[] r3 = r3.getBytes(r1)     // Catch: java.lang.Throwable -> L13
            byte[] r2 = com.loc.s.a(r3, r2)     // Catch: java.lang.Throwable -> L13
            java.lang.String r2 = c(r2)     // Catch: java.lang.Throwable -> L13
            return r2
        L13:
            r2 = move-exception
            java.lang.String r3 = "Encrypt"
            java.lang.String r1 = "encode"
            com.loc.fr.a(r2, r3, r1)
            return r0
    }

    private static byte[] a() {
            byte[] r0 = com.loc.x.c()
            return r0
    }

    public static byte[] a(byte[] r3) throws java.lang.Exception {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = new java.lang.String
            byte[] r2 = com.loc.fg.b
            r1.<init>(r2)
            r0.<init>(r1)
            java.lang.StringBuilder r0 = r0.reverse()
            java.lang.String r0 = r0.toString()
            byte[] r0 = r0.getBytes()
            byte[] r0 = com.loc.en.a(r0)
            java.security.spec.X509EncodedKeySpec r1 = new java.security.spec.X509EncodedKeySpec
            r1.<init>(r0)
            java.lang.String r0 = "RSA"
            java.security.KeyFactory r0 = java.security.KeyFactory.getInstance(r0)
            java.security.PublicKey r0 = r0.generatePublic(r1)
            java.lang.String r1 = "WUlNBL0VDQi9PQUVQV0lUSFNIQS0xQU5ETUdGMVBBRERJTkc"
            java.lang.String r1 = com.loc.x.c(r1)
            javax.crypto.Cipher r1 = javax.crypto.Cipher.getInstance(r1)
            r2 = 1
            r1.init(r2, r0)
            byte[] r3 = r1.doFinal(r3)
            return r3
    }

    public static byte[] a(byte[] r3, java.lang.String r4) {
            javax.crypto.spec.SecretKeySpec r4 = b(r4)     // Catch: java.lang.Throwable -> L1c
            byte[] r0 = a()     // Catch: java.lang.Throwable -> L1c
            javax.crypto.spec.IvParameterSpec r1 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Throwable -> L1c
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L1c
            java.lang.String r0 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r0 = javax.crypto.Cipher.getInstance(r0)     // Catch: java.lang.Throwable -> L1c
            r2 = 1
            r0.init(r2, r4, r1)     // Catch: java.lang.Throwable -> L1c
            byte[] r3 = r0.doFinal(r3)     // Catch: java.lang.Throwable -> L1c
            return r3
        L1c:
            r3 = move-exception
            java.lang.String r4 = "Encrypt"
            java.lang.String r0 = "aesEncrypt"
            com.loc.fr.a(r3, r4, r0)
            r3 = 0
            return r3
    }

    private static javax.crypto.spec.SecretKeySpec b(java.lang.String r2) {
            if (r2 != 0) goto L4
            java.lang.String r2 = ""
        L4:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r1 = 16
            r0.<init>(r1)
        Lb:
            r0.append(r2)
            int r2 = r0.length()
            if (r2 >= r1) goto L17
            java.lang.String r2 = "0"
            goto Lb
        L17:
            int r2 = r0.length()
            if (r2 <= r1) goto L20
            r0.setLength(r1)
        L20:
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Throwable -> L2b
            java.lang.String r0 = "UTF-8"
            byte[] r2 = r2.getBytes(r0)     // Catch: java.lang.Throwable -> L2b
            goto L34
        L2b:
            r2 = move-exception
            java.lang.String r0 = "Encrypt"
            java.lang.String r1 = "createKey"
            com.loc.fr.a(r2, r0, r1)
            r2 = 0
        L34:
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec
            java.lang.String r1 = "AES"
            r0.<init>(r2, r1)
            return r0
    }

    public static byte[] b(byte[] r6) {
            r0 = 0
            r1 = 16
            byte[] r2 = new byte[r1]     // Catch: java.lang.Throwable -> L30
            int r3 = r6.length     // Catch: java.lang.Throwable -> L30
            int r3 = r3 - r1
            byte[] r3 = new byte[r3]     // Catch: java.lang.Throwable -> L30
            java.lang.System.arraycopy(r6, r0, r2, r0, r1)     // Catch: java.lang.Throwable -> L30
            int r4 = r6.length     // Catch: java.lang.Throwable -> L30
            int r4 = r4 - r1
            java.lang.System.arraycopy(r6, r1, r3, r0, r4)     // Catch: java.lang.Throwable -> L30
            javax.crypto.spec.SecretKeySpec r1 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Throwable -> L30
            java.lang.String r4 = "AES"
            r1.<init>(r2, r4)     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r2 = javax.crypto.Cipher.getInstance(r2)     // Catch: java.lang.Throwable -> L30
            javax.crypto.spec.IvParameterSpec r4 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Throwable -> L30
            byte[] r5 = com.loc.x.c()     // Catch: java.lang.Throwable -> L30
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L30
            r5 = 2
            r2.init(r5, r1, r4)     // Catch: java.lang.Throwable -> L30
            byte[] r6 = r2.doFinal(r3)     // Catch: java.lang.Throwable -> L30
            return r6
        L30:
            r1 = move-exception
            if (r6 == 0) goto L34
            int r0 = r6.length
        L34:
            java.lang.String r6 = java.lang.String.valueOf(r0)
            java.lang.String r0 = "decryptRsponse length = "
            java.lang.String r6 = r0.concat(r6)
            java.lang.String r0 = "Encrypt"
            com.loc.fr.a(r1, r0, r6)
            r6 = 0
            return r6
    }

    public static byte[] b(byte[] r3, java.lang.String r4) {
            javax.crypto.spec.SecretKeySpec r4 = b(r4)     // Catch: java.lang.Throwable -> L1c
            byte[] r0 = a()     // Catch: java.lang.Throwable -> L1c
            javax.crypto.spec.IvParameterSpec r1 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Throwable -> L1c
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L1c
            java.lang.String r0 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r0 = javax.crypto.Cipher.getInstance(r0)     // Catch: java.lang.Throwable -> L1c
            r2 = 2
            r0.init(r2, r4, r1)     // Catch: java.lang.Throwable -> L1c
            byte[] r3 = r0.doFinal(r3)     // Catch: java.lang.Throwable -> L1c
            return r3
        L1c:
            r3 = move-exception
            java.lang.String r4 = "Encrypt"
            java.lang.String r0 = "aesDecrypt"
            com.loc.fr.a(r3, r4, r0)
            r3 = 0
            return r3
    }

    private static java.lang.String c(byte[] r5) {
            int r0 = r5.length
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            int r2 = r0 * 2
            r1.<init>(r2)
            r2 = 0
        L9:
            if (r2 >= r0) goto L26
            char[] r3 = com.loc.fg.a
            r4 = r5[r2]
            int r4 = r4 >> 4
            r4 = r4 & 15
            char r3 = r3[r4]
            r1.append(r3)
            char[] r3 = com.loc.fg.a
            r4 = r5[r2]
            r4 = r4 & 15
            char r3 = r3[r4]
            r1.append(r3)
            int r2 = r2 + 1
            goto L9
        L26:
            java.lang.String r5 = r1.toString()
            return r5
    }
}

package com.kuaishou.weapon.p0;

public final class b {
    public static final java.lang.String a = "AES/CBC/NoPadding";
    public static final int b = 16;
    public static final java.lang.String c = "a3NyaXNrY3RsYnVzaW5zc3Z4cHprd3NwYWlvcXBrc3M=";
    private static final java.lang.String d = "AES/CBC/PKCS5Padding";
    private static final java.lang.String e = "AES";
    private static final java.lang.String f = "AES/CBC/PKCS7Padding";

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] a(java.lang.String r2, java.lang.String r3, byte[] r4) {
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec
            byte[] r2 = r2.getBytes()
            java.lang.String r1 = "AES"
            r0.<init>(r2, r1)
            java.lang.String r2 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r2 = javax.crypto.Cipher.getInstance(r2)
            javax.crypto.spec.IvParameterSpec r1 = new javax.crypto.spec.IvParameterSpec
            byte[] r3 = r3.getBytes()
            r1.<init>(r3)
            r3 = 1
            r2.init(r3, r0, r1)
            byte[] r2 = r2.doFinal(r4)
            return r2
    }

    public static byte[] a(byte[] r5, byte[] r6, boolean r7) {
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Throwable -> L34
            java.lang.String r1 = "AES"
            r0.<init>(r5, r1)     // Catch: java.lang.Throwable -> L34
            java.lang.String r5 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r5 = javax.crypto.Cipher.getInstance(r5)     // Catch: java.lang.Throwable -> L34
            r1 = 16
            byte[] r2 = new byte[r1]     // Catch: java.lang.Throwable -> L34
            r3 = 0
            r4 = r3
        L13:
            if (r4 >= r1) goto L1a
            r2[r4] = r3     // Catch: java.lang.Throwable -> L34
            int r4 = r4 + 1
            goto L13
        L1a:
            javax.crypto.spec.IvParameterSpec r4 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Throwable -> L34
            r4.<init>(r2)     // Catch: java.lang.Throwable -> L34
            r2 = 2
            r5.init(r2, r0, r4)     // Catch: java.lang.Throwable -> L34
            if (r7 == 0) goto L2f
            int r7 = r6.length     // Catch: java.lang.Throwable -> L34
            int r7 = r7 - r1
            byte[] r7 = new byte[r7]     // Catch: java.lang.Throwable -> L34
            int r0 = r6.length     // Catch: java.lang.Throwable -> L34
            int r0 = r0 - r1
            java.lang.System.arraycopy(r6, r3, r7, r3, r0)     // Catch: java.lang.Throwable -> L34
            r6 = r7
        L2f:
            byte[] r5 = r5.doFinal(r6)     // Catch: java.lang.Throwable -> L34
            return r5
        L34:
            r5 = move-exception
            java.io.PrintStream r6 = java.lang.System.out
            java.lang.String r5 = r5.getMessage()
            r6.println(r5)
            r5 = 0
            return r5
    }

    public static byte[] b(java.lang.String r2, java.lang.String r3, byte[] r4) {
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec
            byte[] r3 = r3.getBytes()
            java.lang.String r1 = "AES"
            r0.<init>(r3, r1)
            java.lang.String r3 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r3 = javax.crypto.Cipher.getInstance(r3)
            javax.crypto.spec.IvParameterSpec r1 = new javax.crypto.spec.IvParameterSpec
            byte[] r2 = r2.getBytes()
            r1.<init>(r2)
            r2 = 2
            r3.init(r2, r0, r1)
            byte[] r2 = r3.doFinal(r4)
            return r2
    }

    public static int c(java.lang.String r7, java.lang.String r8, byte[] r9) {
            r0 = -1
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Throwable -> L98
            r1.<init>(r9)     // Catch: java.lang.Throwable -> L98
            int r9 = r1.length()     // Catch: java.lang.Throwable -> L98
            r2 = 0
            r3 = 16
            if (r9 >= r3) goto L2a
            int r9 = r1.length()     // Catch: java.lang.Throwable -> L98
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L98
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L98
            r1 = r2
        L19:
            int r5 = 16 - r9
            if (r1 >= r5) goto L25
            java.lang.String r5 = "0"
            r4.append(r5)     // Catch: java.lang.Throwable -> L98
            int r1 = r1 + 1
            goto L19
        L25:
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Throwable -> L98
            goto L34
        L2a:
            int r9 = r1.length()     // Catch: java.lang.Throwable -> L98
            if (r9 <= r3) goto L34
            java.lang.String r1 = r1.substring(r2, r3)     // Catch: java.lang.Throwable -> L98
        L34:
            r9 = 0
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L88
            r4.<init>(r7)     // Catch: java.lang.Throwable -> L88
            java.io.FileOutputStream r7 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L86
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L86
            javax.crypto.spec.SecretKeySpec r8 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Throwable -> L83
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Throwable -> L83
            java.lang.String r5 = "AES"
            r8.<init>(r1, r5)     // Catch: java.lang.Throwable -> L83
            java.lang.String r1 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r1 = javax.crypto.Cipher.getInstance(r1)     // Catch: java.lang.Throwable -> L83
            byte[] r5 = new byte[r3]     // Catch: java.lang.Throwable -> L83
            r6 = r2
        L53:
            if (r6 >= r3) goto L5a
            r5[r6] = r2     // Catch: java.lang.Throwable -> L83
            int r6 = r6 + 1
            goto L53
        L5a:
            javax.crypto.spec.IvParameterSpec r3 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Throwable -> L83
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L83
            r5 = 2
            r1.init(r5, r8, r3)     // Catch: java.lang.Throwable -> L83
            javax.crypto.CipherInputStream r8 = new javax.crypto.CipherInputStream     // Catch: java.lang.Throwable -> L83
            r8.<init>(r4, r1)     // Catch: java.lang.Throwable -> L83
            r9 = 1024(0x400, float:1.435E-42)
            byte[] r9 = new byte[r9]     // Catch: java.lang.Throwable -> L84
        L6c:
            int r1 = r8.read(r9)     // Catch: java.lang.Throwable -> L84
            if (r1 == r0) goto L76
            r7.write(r9, r2, r1)     // Catch: java.lang.Throwable -> L84
            goto L6c
        L76:
            r8.close()     // Catch: java.lang.Throwable -> L84
            r7.close()     // Catch: java.io.IOException -> L7c java.lang.Throwable -> L98
        L7c:
            r4.close()     // Catch: java.io.IOException -> L7f java.lang.Throwable -> L98
        L7f:
            r8.close()     // Catch: java.io.IOException -> L97 java.lang.Throwable -> L98
            goto L97
        L83:
            r8 = r9
        L84:
            r9 = r7
            goto L8a
        L86:
            r8 = r9
            goto L8a
        L88:
            r8 = r9
            r4 = r8
        L8a:
            if (r9 == 0) goto L8f
            r9.close()     // Catch: java.io.IOException -> L8f java.lang.Throwable -> L98
        L8f:
            if (r4 == 0) goto L94
            r4.close()     // Catch: java.io.IOException -> L94 java.lang.Throwable -> L98
        L94:
            if (r8 == 0) goto L97
            goto L7f
        L97:
            return r2
        L98:
            return r0
    }
}

package com.alipay.security.mobile.module.a.a;

public final class c {
    private static java.lang.String a;

    static {
            java.lang.String r0 = new java.lang.String
            java.lang.String r1 = "idnjfhncnsfuobcnt847y929o449u474w7j3h22aoddc98euk#%&&)*&^%#"
            r0.<init>(r1)
            com.alipay.security.mobile.module.a.a.c.a = r0
            return
    }

    public static java.lang.String a() {
            java.lang.String r0 = new java.lang.String
            r0.<init>()
            r1 = 0
        L6:
            java.lang.String r2 = com.alipay.security.mobile.module.a.a.c.a
            int r2 = r2.length()
            int r2 = r2 + (-1)
            if (r1 >= r2) goto L28
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = com.alipay.security.mobile.module.a.a.c.a
            char r0 = r0.charAt(r1)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            int r1 = r1 + 4
            goto L6
        L28:
            return r0
    }

    public static java.lang.String a(java.lang.String r7, java.lang.String r8) {
            javax.crypto.spec.PBEKeySpec r0 = a(r7)     // Catch: java.lang.Exception -> L54
            byte[] r1 = r8.getBytes()     // Catch: java.lang.Exception -> L54
            java.lang.String r2 = "PBKDF2WithHmacSHA1"
            javax.crypto.SecretKeyFactory r2 = javax.crypto.SecretKeyFactory.getInstance(r2)     // Catch: java.lang.Exception -> L54
            javax.crypto.SecretKey r2 = r2.generateSecret(r0)     // Catch: java.lang.Exception -> L54
            byte[] r2 = r2.getEncoded()     // Catch: java.lang.Exception -> L54
            javax.crypto.spec.SecretKeySpec r3 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L54
            java.lang.String r4 = "AES"
            r3.<init>(r2, r4)     // Catch: java.lang.Exception -> L54
            java.lang.String r2 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r2 = javax.crypto.Cipher.getInstance(r2)     // Catch: java.lang.Exception -> L54
            r4 = 1
            javax.crypto.spec.IvParameterSpec r5 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L54
            int r6 = r2.getBlockSize()     // Catch: java.lang.Exception -> L54
            byte[] r6 = new byte[r6]     // Catch: java.lang.Exception -> L54
            r5.<init>(r6)     // Catch: java.lang.Exception -> L54
            r2.init(r4, r3, r5)     // Catch: java.lang.Exception -> L54
            byte[] r0 = r0.getSalt()     // Catch: java.lang.Exception -> L54
            int r3 = r0.length     // Catch: java.lang.Exception -> L54
            int r4 = r1.length     // Catch: java.lang.Exception -> L54
            int r4 = r2.getOutputSize(r4)     // Catch: java.lang.Exception -> L54
            int r3 = r3 + r4
            java.nio.ByteBuffer r3 = java.nio.ByteBuffer.allocate(r3)     // Catch: java.lang.Exception -> L54
            r3.put(r0)     // Catch: java.lang.Exception -> L54
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.wrap(r1)     // Catch: java.lang.Exception -> L54
            r2.doFinal(r0, r3)     // Catch: java.lang.Exception -> L54
            byte[] r0 = r3.array()     // Catch: java.lang.Exception -> L54
            java.lang.String r7 = b(r0)     // Catch: java.lang.Exception -> L54
            return r7
        L54:
            byte[] r7 = r7.getBytes()     // Catch: java.lang.Exception -> L69
            byte[] r7 = a(r7)     // Catch: java.lang.Exception -> L69
            byte[] r8 = r8.getBytes()     // Catch: java.lang.Exception -> L69
            byte[] r7 = a(r7, r8)     // Catch: java.lang.Exception -> L69
            java.lang.String r7 = b(r7)     // Catch: java.lang.Exception -> L69
            return r7
        L69:
            r7 = 0
            return r7
    }

    private static javax.crypto.spec.PBEKeySpec a(java.lang.String r7) {
            java.lang.String r0 = new java.lang.String
            java.lang.String r1 = "amF2YS5zZWN1cml0eS5TZWN1cmVSYW5kb20="
            byte[] r1 = com.alipay.security.mobile.module.a.a.a.a(r1)
            r0.<init>(r1)
            java.lang.Class r0 = java.lang.Class.forName(r0)
            java.lang.Object r1 = r0.newInstance()
            r2 = 16
            byte[] r2 = new byte[r2]
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]
            java.lang.Class r5 = r2.getClass()
            r6 = 0
            r4[r6] = r5
            java.lang.String r5 = "nextBytes"
            java.lang.reflect.Method r0 = r0.getMethod(r5, r4)
            r0.setAccessible(r3)
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r3[r6] = r2
            r0.invoke(r1, r3)
            javax.crypto.spec.PBEKeySpec r0 = new javax.crypto.spec.PBEKeySpec
            char[] r7 = r7.toCharArray()
            r1 = 10
            r3 = 128(0x80, float:1.8E-43)
            r0.<init>(r7, r2, r1, r3)
            return r0
    }

    private static byte[] a(byte[] r8) {
            java.lang.String r0 = "AES"
            javax.crypto.KeyGenerator r0 = javax.crypto.KeyGenerator.getInstance(r0)
            java.lang.String r1 = new java.lang.String
            java.lang.String r2 = "amF2YS5zZWN1cml0eS5TZWN1cmVSYW5kb20="
            byte[] r2 = com.alipay.security.mobile.module.a.a.a.a(r2)
            r1.<init>(r2)
            java.lang.Class r1 = java.lang.Class.forName(r1)
            r2 = 2
            java.lang.Class[] r3 = new java.lang.Class[r2]
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r6 = 1
            r3[r6] = r4
            java.lang.String r4 = "getInstance"
            java.lang.reflect.Method r3 = r1.getMethod(r4, r3)
            java.lang.Object[] r4 = new java.lang.Object[r2]
            java.lang.String r7 = "SHA1PRNG"
            r4[r5] = r7
            java.lang.String r7 = "Crypto"
            r4[r6] = r7
            r7 = 0
            java.lang.Object r3 = r3.invoke(r7, r4)
            java.lang.Class[] r4 = new java.lang.Class[r6]
            java.lang.Class r7 = r8.getClass()
            r4[r5] = r7
            java.lang.String r7 = "setSeed"
            java.lang.reflect.Method r4 = r1.getMethod(r7, r4)
            r4.setAccessible(r6)
            java.lang.Object[] r7 = new java.lang.Object[r6]
            r7[r5] = r8
            r4.invoke(r3, r7)
            java.lang.Class<javax.crypto.KeyGenerator> r8 = javax.crypto.KeyGenerator.class
            java.lang.Class[] r4 = new java.lang.Class[r2]
            java.lang.Class r7 = java.lang.Integer.TYPE
            r4[r5] = r7
            r4[r6] = r1
            java.lang.String r1 = "init"
            java.lang.reflect.Method r8 = r8.getMethod(r1, r4)
            java.lang.Object[] r1 = new java.lang.Object[r2]
            r2 = 128(0x80, float:1.8E-43)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1[r5] = r2
            r1[r6] = r3
            r8.invoke(r0, r1)
            javax.crypto.SecretKey r8 = r0.generateKey()
            byte[] r8 = r8.getEncoded()
            return r8
    }

    private static byte[] a(byte[] r4, byte[] r5) {
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Throwable -> L21
            java.lang.String r1 = "AES"
            r0.<init>(r4, r1)     // Catch: java.lang.Throwable -> L21
            java.lang.String r4 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r4 = javax.crypto.Cipher.getInstance(r4)     // Catch: java.lang.Throwable -> L21
            r1 = 1
            javax.crypto.spec.IvParameterSpec r2 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Throwable -> L21
            int r3 = r4.getBlockSize()     // Catch: java.lang.Throwable -> L21
            byte[] r3 = new byte[r3]     // Catch: java.lang.Throwable -> L21
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L21
            r4.init(r1, r0, r2)     // Catch: java.lang.Throwable -> L21
            byte[] r4 = r4.doFinal(r5)     // Catch: java.lang.Throwable -> L21
            return r4
        L21:
            r4 = 0
            return r4
    }

    public static java.lang.String b(java.lang.String r11, java.lang.String r12) {
            java.lang.String r0 = "AES/CBC/PKCS5Padding"
            java.lang.String r1 = "AES"
            r2 = 2
            r3 = 0
            javax.crypto.spec.PBEKeySpec r4 = a(r11)     // Catch: java.lang.Exception -> L65
            byte[] r5 = b(r12)     // Catch: java.lang.Exception -> L65
            int r6 = r5.length     // Catch: java.lang.Exception -> L65
            r7 = 16
            if (r6 > r7) goto L15
            r4 = r3
            goto L51
        L15:
            javax.crypto.spec.PBEKeySpec r6 = new javax.crypto.spec.PBEKeySpec     // Catch: java.lang.Exception -> L65
            char[] r4 = r4.getPassword()     // Catch: java.lang.Exception -> L65
            byte[] r8 = java.util.Arrays.copyOf(r5, r7)     // Catch: java.lang.Exception -> L65
            r9 = 10
            r10 = 128(0x80, float:1.8E-43)
            r6.<init>(r4, r8, r9, r10)     // Catch: java.lang.Exception -> L65
            java.lang.String r4 = "PBKDF2WithHmacSHA1"
            javax.crypto.SecretKeyFactory r4 = javax.crypto.SecretKeyFactory.getInstance(r4)     // Catch: java.lang.Exception -> L65
            javax.crypto.SecretKey r4 = r4.generateSecret(r6)     // Catch: java.lang.Exception -> L65
            byte[] r4 = r4.getEncoded()     // Catch: java.lang.Exception -> L65
            javax.crypto.spec.SecretKeySpec r6 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L65
            r6.<init>(r4, r1)     // Catch: java.lang.Exception -> L65
            javax.crypto.Cipher r4 = javax.crypto.Cipher.getInstance(r0)     // Catch: java.lang.Exception -> L65
            javax.crypto.spec.IvParameterSpec r8 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L65
            int r9 = r4.getBlockSize()     // Catch: java.lang.Exception -> L65
            byte[] r9 = new byte[r9]     // Catch: java.lang.Exception -> L65
            r8.<init>(r9)     // Catch: java.lang.Exception -> L65
            r4.init(r2, r6, r8)     // Catch: java.lang.Exception -> L65
            int r6 = r5.length     // Catch: java.lang.Exception -> L65
            int r6 = r6 - r7
            byte[] r4 = r4.doFinal(r5, r7, r6)     // Catch: java.lang.Exception -> L65
        L51:
            if (r4 == 0) goto L5f
            java.lang.String r5 = new java.lang.String     // Catch: java.lang.Exception -> L65
            r5.<init>(r4)     // Catch: java.lang.Exception -> L65
            boolean r4 = com.alipay.security.mobile.module.a.a.c(r5)     // Catch: java.lang.Exception -> L65
            if (r4 == 0) goto L65
            return r5
        L5f:
            java.lang.Exception r4 = new java.lang.Exception     // Catch: java.lang.Exception -> L65
            r4.<init>()     // Catch: java.lang.Exception -> L65
            throw r4     // Catch: java.lang.Exception -> L65
        L65:
            byte[] r11 = r11.getBytes()     // Catch: java.lang.Exception -> L98
            byte[] r11 = a(r11)     // Catch: java.lang.Exception -> L98
            byte[] r12 = b(r12)     // Catch: java.lang.Exception -> L98
            javax.crypto.spec.SecretKeySpec r4 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L98
            r4.<init>(r11, r1)     // Catch: java.lang.Exception -> L98
            javax.crypto.Cipher r11 = javax.crypto.Cipher.getInstance(r0)     // Catch: java.lang.Exception -> L98
            javax.crypto.spec.IvParameterSpec r0 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L98
            int r1 = r11.getBlockSize()     // Catch: java.lang.Exception -> L98
            byte[] r1 = new byte[r1]     // Catch: java.lang.Exception -> L98
            r0.<init>(r1)     // Catch: java.lang.Exception -> L98
            r11.init(r2, r4, r0)     // Catch: java.lang.Exception -> L98
            byte[] r11 = r11.doFinal(r12)     // Catch: java.lang.Exception -> L98
            java.lang.String r12 = new java.lang.String     // Catch: java.lang.Exception -> L98
            r12.<init>(r11)     // Catch: java.lang.Exception -> L98
            boolean r11 = com.alipay.security.mobile.module.a.a.c(r12)     // Catch: java.lang.Exception -> L98
            if (r11 == 0) goto L98
            return r12
        L98:
            return r3
    }

    private static java.lang.String b(byte[] r5) {
            if (r5 != 0) goto L5
            java.lang.String r5 = ""
            return r5
        L5:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            int r1 = r5.length
            int r1 = r1 * 2
            r0.<init>(r1)
            r1 = 0
        Le:
            int r2 = r5.length
            if (r1 >= r2) goto L2c
            r2 = r5[r1]
            int r3 = r2 >> 4
            r3 = r3 & 15
            java.lang.String r4 = "0123456789ABCDEF"
            char r3 = r4.charAt(r3)
            r0.append(r3)
            r2 = r2 & 15
            char r2 = r4.charAt(r2)
            r0.append(r2)
            int r1 = r1 + 1
            goto Le
        L2c:
            java.lang.String r5 = r0.toString()
            return r5
    }

    private static byte[] b(java.lang.String r5) {
            int r0 = r5.length()
            int r0 = r0 / 2
            byte[] r1 = new byte[r0]
            r2 = 0
        L9:
            if (r2 >= r0) goto L22
            int r3 = r2 * 2
            int r4 = r3 + 2
            java.lang.String r3 = r5.substring(r3, r4)
            r4 = 16
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3, r4)
            byte r3 = r3.byteValue()
            r1[r2] = r3
            int r2 = r2 + 1
            goto L9
        L22:
            return r1
    }
}

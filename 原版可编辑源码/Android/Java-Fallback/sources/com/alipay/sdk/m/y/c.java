package com.alipay.sdk.m.y;

public final class c {
    public static java.lang.String a = "idnjfhncnsfuobcnt847y929o449u474w7j3h22aoddc98euk#%&&)*&^%#";

    static {
            return
    }

    public static java.lang.String a() {
            java.lang.String r0 = new java.lang.String
            r0.<init>()
            r1 = 0
        L6:
            java.lang.String r2 = com.alipay.sdk.m.y.c.a
            int r2 = r2.length()
            int r2 = r2 + (-1)
            if (r1 >= r2) goto L28
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = com.alipay.sdk.m.y.c.a
            char r0 = r0.charAt(r1)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            int r1 = r1 + 4
            goto L6
        L28:
            return r0
    }

    public static java.lang.String a(java.lang.String r5, java.lang.String r6) {
            javax.crypto.spec.PBEKeySpec r5 = a(r5)     // Catch: java.lang.Exception -> L52
            byte[] r6 = r6.getBytes()     // Catch: java.lang.Exception -> L52
            byte[] r0 = b()     // Catch: java.lang.Exception -> L52
            java.lang.String r1 = "PBKDF2WithHmacSHA1"
            javax.crypto.SecretKeyFactory r1 = javax.crypto.SecretKeyFactory.getInstance(r1)     // Catch: java.lang.Exception -> L52
            javax.crypto.SecretKey r1 = r1.generateSecret(r5)     // Catch: java.lang.Exception -> L52
            byte[] r1 = r1.getEncoded()     // Catch: java.lang.Exception -> L52
            javax.crypto.spec.SecretKeySpec r2 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L52
            java.lang.String r3 = "AES"
            r2.<init>(r1, r3)     // Catch: java.lang.Exception -> L52
            java.lang.String r1 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r1 = javax.crypto.Cipher.getInstance(r1)     // Catch: java.lang.Exception -> L52
            r3 = 1
            javax.crypto.spec.IvParameterSpec r4 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L52
            r4.<init>(r0)     // Catch: java.lang.Exception -> L52
            r1.init(r3, r2, r4)     // Catch: java.lang.Exception -> L52
            byte[] r5 = r5.getSalt()     // Catch: java.lang.Exception -> L52
            int r0 = r5.length     // Catch: java.lang.Exception -> L52
            int r2 = r6.length     // Catch: java.lang.Exception -> L52
            int r2 = r1.getOutputSize(r2)     // Catch: java.lang.Exception -> L52
            int r0 = r0 + r2
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)     // Catch: java.lang.Exception -> L52
            r0.put(r5)     // Catch: java.lang.Exception -> L52
            java.nio.ByteBuffer r5 = java.nio.ByteBuffer.wrap(r6)     // Catch: java.lang.Exception -> L52
            r1.doFinal(r5, r0)     // Catch: java.lang.Exception -> L52
            byte[] r5 = r0.array()     // Catch: java.lang.Exception -> L52
            java.lang.String r5 = a(r5)     // Catch: java.lang.Exception -> L52
            return r5
        L52:
            r5 = 0
            return r5
    }

    public static java.lang.String a(byte[] r5) {
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

    public static javax.crypto.spec.PBEKeySpec a(java.lang.String r7) {
            java.lang.String r0 = new java.lang.String
            java.lang.String r1 = "amF2YS5zZWN1cml0eS5TZWN1cmVSYW5kb20="
            byte[] r1 = com.alipay.sdk.m.y.a.a(r1)
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

    public static java.lang.String b(java.lang.String r9, java.lang.String r10) {
            r0 = 0
            javax.crypto.spec.PBEKeySpec r9 = a(r9)     // Catch: java.lang.Exception -> L7c
            int r1 = r10.length()     // Catch: java.lang.Exception -> L7c
            r2 = 2
            int r1 = r1 / r2
            byte[] r3 = new byte[r1]     // Catch: java.lang.Exception -> L7c
            r4 = 0
        Le:
            r5 = 16
            if (r4 >= r1) goto L27
            int r6 = r4 * 2
            int r7 = r6 + 2
            java.lang.String r6 = r10.substring(r6, r7)     // Catch: java.lang.Exception -> L7c
            java.lang.Integer r5 = java.lang.Integer.valueOf(r6, r5)     // Catch: java.lang.Exception -> L7c
            byte r5 = r5.byteValue()     // Catch: java.lang.Exception -> L7c
            r3[r4] = r5     // Catch: java.lang.Exception -> L7c
            int r4 = r4 + 1
            goto Le
        L27:
            byte[] r10 = b()     // Catch: java.lang.Exception -> L7c
            if (r1 > r5) goto L2f
            r9 = r0
            goto L68
        L2f:
            javax.crypto.spec.PBEKeySpec r4 = new javax.crypto.spec.PBEKeySpec     // Catch: java.lang.Exception -> L7c
            char[] r9 = r9.getPassword()     // Catch: java.lang.Exception -> L7c
            byte[] r6 = java.util.Arrays.copyOf(r3, r5)     // Catch: java.lang.Exception -> L7c
            r7 = 10
            r8 = 128(0x80, float:1.8E-43)
            r4.<init>(r9, r6, r7, r8)     // Catch: java.lang.Exception -> L7c
            java.lang.String r9 = "PBKDF2WithHmacSHA1"
            javax.crypto.SecretKeyFactory r9 = javax.crypto.SecretKeyFactory.getInstance(r9)     // Catch: java.lang.Exception -> L7c
            javax.crypto.SecretKey r9 = r9.generateSecret(r4)     // Catch: java.lang.Exception -> L7c
            byte[] r9 = r9.getEncoded()     // Catch: java.lang.Exception -> L7c
            javax.crypto.spec.SecretKeySpec r4 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L7c
            java.lang.String r6 = "AES"
            r4.<init>(r9, r6)     // Catch: java.lang.Exception -> L7c
            java.lang.String r9 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r9 = javax.crypto.Cipher.getInstance(r9)     // Catch: java.lang.Exception -> L7c
            javax.crypto.spec.IvParameterSpec r6 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L7c
            r6.<init>(r10)     // Catch: java.lang.Exception -> L7c
            r9.init(r2, r4, r6)     // Catch: java.lang.Exception -> L7c
            int r1 = r1 - r5
            byte[] r9 = r9.doFinal(r3, r5, r1)     // Catch: java.lang.Exception -> L7c
        L68:
            if (r9 == 0) goto L76
            java.lang.String r10 = new java.lang.String     // Catch: java.lang.Exception -> L7c
            r10.<init>(r9)     // Catch: java.lang.Exception -> L7c
            boolean r9 = com.alipay.sdk.m.z.a.c(r10)     // Catch: java.lang.Exception -> L7c
            if (r9 == 0) goto L7c
            return r10
        L76:
            java.lang.Exception r9 = new java.lang.Exception     // Catch: java.lang.Exception -> L7c
            r9.<init>()     // Catch: java.lang.Exception -> L7c
            throw r9     // Catch: java.lang.Exception -> L7c
        L7c:
            return r0
    }

    public static byte[] b() {
            java.lang.String r0 = "AsAgAtA5A6AdAgABABACADAfAsAdAfAsAgAaAgA3A5A6=8=0"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1f
            r1.<init>()     // Catch: java.lang.Exception -> L1f
            r2 = 0
        L8:
            r3 = 48
            if (r2 >= r3) goto L16
            char r3 = r0.charAt(r2)     // Catch: java.lang.Exception -> L1f
            r1.append(r3)     // Catch: java.lang.Exception -> L1f
            int r2 = r2 + 2
            goto L8
        L16:
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L1f
            byte[] r0 = com.alipay.sdk.m.y.a.a(r0)     // Catch: java.lang.Exception -> L1f
            return r0
        L1f:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }
}

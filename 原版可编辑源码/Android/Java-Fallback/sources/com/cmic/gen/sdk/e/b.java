package com.cmic.gen.sdk.e;

public class b {
    private static byte[] a;

    static {
            return
    }

    static java.lang.String a(android.content.Context r1, java.lang.String r2) {
            a()
            byte[] r1 = b(r1)
            if (r1 == 0) goto L10
            byte[] r0 = com.cmic.gen.sdk.e.b.a
            java.lang.String r1 = com.cmic.gen.sdk.e.a.a(r1, r2, r0)
            return r1
        L10:
            a()
            r1 = 0
            return r1
    }

    public static void a() {
            java.lang.String r0 = "AES_KEY"
            com.cmic.gen.sdk.e.k.a(r0)
            return
    }

    private static boolean a(android.content.Context r11) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 1000(0x3e8, double:4.94E-321)
            java.lang.String r3 = "CMCC_SDK_V1"
            java.lang.String r4 = "KeystoreUtil"
            java.lang.String r5 = "AndroidKeyStore"
            r6 = 1
            r7 = 0
            r8 = 23
            if (r0 < r8) goto L60
            java.lang.String r11 = "AES"
            javax.crypto.KeyGenerator r11 = javax.crypto.KeyGenerator.getInstance(r11, r5)     // Catch: java.lang.Exception -> L57
            android.security.keystore.KeyGenParameterSpec$Builder r0 = new android.security.keystore.KeyGenParameterSpec$Builder     // Catch: java.lang.Exception -> L57
            r5 = 3
            r0.<init>(r3, r5)     // Catch: java.lang.Exception -> L57
            r3 = 2
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Exception -> L57
            java.lang.String r5 = "SHA-256"
            r3[r7] = r5     // Catch: java.lang.Exception -> L57
            java.lang.String r5 = "SHA-512"
            r3[r6] = r5     // Catch: java.lang.Exception -> L57
            android.security.keystore.KeyGenParameterSpec$Builder r0 = r0.setDigests(r3)     // Catch: java.lang.Exception -> L57
            java.lang.String[] r3 = new java.lang.String[r6]     // Catch: java.lang.Exception -> L57
            java.lang.String r5 = "CBC"
            r3[r7] = r5     // Catch: java.lang.Exception -> L57
            android.security.keystore.KeyGenParameterSpec$Builder r0 = r0.setBlockModes(r3)     // Catch: java.lang.Exception -> L57
            java.lang.String[] r3 = new java.lang.String[r6]     // Catch: java.lang.Exception -> L57
            java.lang.String r5 = "PKCS7Padding"
            r3[r7] = r5     // Catch: java.lang.Exception -> L57
            android.security.keystore.KeyGenParameterSpec$Builder r0 = r0.setEncryptionPaddings(r3)     // Catch: java.lang.Exception -> L57
            android.security.keystore.KeyGenParameterSpec$Builder r0 = r0.setRandomizedEncryptionRequired(r7)     // Catch: java.lang.Exception -> L57
            r3 = 256(0x100, float:3.59E-43)
            android.security.keystore.KeyGenParameterSpec$Builder r0 = r0.setKeySize(r3)     // Catch: java.lang.Exception -> L57
            android.security.keystore.KeyGenParameterSpec r0 = r0.build()     // Catch: java.lang.Exception -> L57
            r11.init(r0)     // Catch: java.lang.Exception -> L57
            java.lang.Thread.sleep(r1)     // Catch: java.lang.Exception -> L57
            r11.generateKey()     // Catch: java.lang.Exception -> L57
            return r6
        L57:
            r11 = move-exception
            java.lang.String r11 = r11.getMessage()
            com.cmic.gen.sdk.e.c.a(r4, r11)
            return r7
        L60:
            java.util.Calendar r0 = java.util.Calendar.getInstance()
            java.util.Calendar r8 = java.util.Calendar.getInstance()
            r9 = 30
            r8.add(r6, r9)
            int r9 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> Lb2
            r10 = 18
            if (r9 < r10) goto Lb1
            android.security.KeyPairGeneratorSpec$Builder r9 = new android.security.KeyPairGeneratorSpec$Builder     // Catch: java.lang.Exception -> Lb2
            r9.<init>(r11)     // Catch: java.lang.Exception -> Lb2
            android.security.KeyPairGeneratorSpec$Builder r11 = r9.setAlias(r3)     // Catch: java.lang.Exception -> Lb2
            javax.security.auth.x500.X500Principal r3 = new javax.security.auth.x500.X500Principal     // Catch: java.lang.Exception -> Lb2
            java.lang.String r9 = "CN=CMCC_SDK_V1"
            r3.<init>(r9)     // Catch: java.lang.Exception -> Lb2
            android.security.KeyPairGeneratorSpec$Builder r11 = r11.setSubject(r3)     // Catch: java.lang.Exception -> Lb2
            java.math.BigInteger r3 = java.math.BigInteger.TEN     // Catch: java.lang.Exception -> Lb2
            android.security.KeyPairGeneratorSpec$Builder r11 = r11.setSerialNumber(r3)     // Catch: java.lang.Exception -> Lb2
            java.util.Date r0 = r0.getTime()     // Catch: java.lang.Exception -> Lb2
            android.security.KeyPairGeneratorSpec$Builder r11 = r11.setStartDate(r0)     // Catch: java.lang.Exception -> Lb2
            java.util.Date r0 = r8.getTime()     // Catch: java.lang.Exception -> Lb2
            android.security.KeyPairGeneratorSpec$Builder r11 = r11.setEndDate(r0)     // Catch: java.lang.Exception -> Lb2
            android.security.KeyPairGeneratorSpec r11 = r11.build()     // Catch: java.lang.Exception -> Lb2
            java.lang.String r0 = "RSA"
            java.security.KeyPairGenerator r0 = java.security.KeyPairGenerator.getInstance(r0, r5)     // Catch: java.lang.Exception -> Lb2
            r0.initialize(r11)     // Catch: java.lang.Exception -> Lb2
            java.lang.Thread.sleep(r1)     // Catch: java.lang.Exception -> Lb2
            r0.generateKeyPair()     // Catch: java.lang.Exception -> Lb2
            return r6
        Lb1:
            return r7
        Lb2:
            r11 = move-exception
            java.lang.String r11 = r11.getMessage()
            com.cmic.gen.sdk.e.c.a(r4, r11)
            return r7
    }

    public static boolean a(android.content.Context r3, boolean r4) {
            java.lang.String r0 = "AndroidKeyStore"
            java.security.KeyStore r0 = java.security.KeyStore.getInstance(r0)     // Catch: java.lang.Exception -> L14
            r1 = 0
            r0.load(r1)     // Catch: java.lang.Exception -> L14
            java.lang.String r2 = "CMCC_SDK_V1"
            java.security.Key r0 = r0.getKey(r2, r1)     // Catch: java.lang.Exception -> L14
            if (r0 == 0) goto L18
            r3 = 1
            return r3
        L14:
            r0 = move-exception
            r0.printStackTrace()
        L18:
            if (r4 == 0) goto L1f
            boolean r3 = a(r3)
            return r3
        L1f:
            r3 = 0
            return r3
    }

    private static java.lang.String b() {
            java.lang.String r0 = "AES_KEY"
            java.lang.String r1 = ""
            java.lang.String r0 = com.cmic.gen.sdk.e.k.b(r0, r1)
            return r0
    }

    static java.lang.String b(android.content.Context r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L16
            byte[] r1 = b(r1)
            if (r1 == 0) goto L13
            byte[] r0 = com.cmic.gen.sdk.e.b.a
            java.lang.String r1 = com.cmic.gen.sdk.e.a.b(r1, r2, r0)
            return r1
        L13:
            a()
        L16:
            r1 = 0
            return r1
    }

    private static synchronized byte[] b(android.content.Context r9) {
            java.lang.Class<com.cmic.gen.sdk.e.b> r0 = com.cmic.gen.sdk.e.b.class
            monitor-enter(r0)
            r1 = 0
            java.lang.String r2 = "AndroidKeyStore"
            java.security.KeyStore r2 = java.security.KeyStore.getInstance(r2)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            r2.load(r1)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            r3 = 0
            boolean r9 = a(r9, r3)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            if (r9 != 0) goto L16
            monitor-exit(r0)
            return r1
        L16:
            java.lang.String r9 = b()     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            boolean r4 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            r5 = 1
            if (r4 == 0) goto L8f
            byte[] r9 = com.cmic.gen.sdk.e.q.a()     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            byte[] r4 = com.cmic.gen.sdk.e.q.a()     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            com.cmic.gen.sdk.e.b.a = r4     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            java.lang.String r4 = "CMCC_SDK_V1"
            java.security.Key r4 = r2.getKey(r4, r1)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            boolean r6 = r4 instanceof javax.crypto.SecretKey     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            if (r6 == 0) goto L4d
            java.lang.String r2 = "KeystoreUtil"
            java.lang.String r6 = "随机生成aes秘钥"
            com.cmic.gen.sdk.e.c.b(r2, r6)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            java.lang.String r2 = "AES/CBC/PKCS7Padding"
            javax.crypto.Cipher r2 = javax.crypto.Cipher.getInstance(r2)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            javax.crypto.spec.IvParameterSpec r6 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            byte[] r7 = com.cmic.gen.sdk.e.b.a     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            r2.init(r5, r4, r6)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            goto L6c
        L4d:
            boolean r4 = r4 instanceof java.security.PrivateKey     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            if (r4 == 0) goto L8d
            java.lang.String r4 = "CMCC_SDK_V1"
            java.security.cert.Certificate r2 = r2.getCertificate(r4)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            java.security.PublicKey r2 = r2.getPublicKey()     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            java.lang.String r4 = "RSA/ECB/OAEPWithSHA256AndMGF1Padding"
            javax.crypto.Cipher r4 = javax.crypto.Cipher.getInstance(r4)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            java.lang.String r6 = "KeystoreUtil"
            java.lang.String r7 = "生成rsa密"
            com.cmic.gen.sdk.e.c.b(r6, r7)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            r4.init(r5, r2)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            r2 = r4
        L6c:
            byte[] r2 = r2.doFinal(r9)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            byte[] r4 = com.cmic.gen.sdk.e.b.a     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            java.lang.String r3 = android.util.Base64.encodeToString(r4, r3)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            java.util.HashMap r4 = new java.util.HashMap     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            r4.<init>()     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            java.lang.String r5 = "AES_IV"
            r4.put(r5, r3)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            java.lang.String r3 = "AES_KEY"
            r4.put(r3, r2)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            com.cmic.gen.sdk.e.k.a(r4)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            goto Lfd
        L8d:
            monitor-exit(r0)
            return r1
        L8f:
            java.lang.String r4 = c()     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            byte[] r4 = android.util.Base64.decode(r4, r3)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            com.cmic.gen.sdk.e.b.a = r4     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            byte[] r9 = android.util.Base64.decode(r9, r3)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            java.lang.String r4 = "CMCC_SDK_V1"
            java.security.Key r2 = r2.getKey(r4, r1)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            if (r2 != 0) goto La7
            monitor-exit(r0)
            return r1
        La7:
            boolean r4 = r2 instanceof javax.crypto.SecretKey     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            r6 = 2
            if (r4 == 0) goto Lc4
            java.lang.String r4 = "AES/CBC/PKCS7Padding"
            javax.crypto.Cipher r4 = javax.crypto.Cipher.getInstance(r4)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            javax.crypto.spec.IvParameterSpec r7 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            byte[] r8 = com.cmic.gen.sdk.e.b.a     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            r4.init(r6, r2, r7)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            java.lang.String r2 = "KeystoreUtil"
            java.lang.String r6 = "使用aes"
            com.cmic.gen.sdk.e.c.b(r2, r6)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            goto Ld8
        Lc4:
            boolean r4 = r2 instanceof java.security.PrivateKey     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            if (r4 == 0) goto Lff
            java.lang.String r4 = "RSA/ECB/OAEPWithSHA256AndMGF1Padding"
            javax.crypto.Cipher r4 = javax.crypto.Cipher.getInstance(r4)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            r4.init(r6, r2)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            java.lang.String r2 = "KeystoreUtil"
            java.lang.String r6 = "使用rsa"
            com.cmic.gen.sdk.e.c.b(r2, r6)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
        Ld8:
            byte[] r9 = r4.doFinal(r9)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            java.lang.String r2 = "KeystoreUtil"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            r4.<init>()     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            java.lang.String r6 = "是否解密出秘钥："
            r4.append(r6)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            java.lang.String r6 = android.util.Base64.encodeToString(r9, r3)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            if (r6 != 0) goto Lf3
            r3 = 1
        Lf3:
            r4.append(r3)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
            com.cmic.gen.sdk.e.c.b(r2, r3)     // Catch: java.lang.Throwable -> L101 java.lang.Exception -> L103
        Lfd:
            monitor-exit(r0)
            return r9
        Lff:
            monitor-exit(r0)
            return r1
        L101:
            r9 = move-exception
            goto L109
        L103:
            r9 = move-exception
            r9.printStackTrace()     // Catch: java.lang.Throwable -> L101
            monitor-exit(r0)
            return r1
        L109:
            monitor-exit(r0)
            throw r9
    }

    private static java.lang.String c() {
            java.lang.String r0 = "AES_IV"
            java.lang.String r1 = ""
            java.lang.String r0 = com.cmic.gen.sdk.e.k.b(r0, r1)
            return r0
    }
}

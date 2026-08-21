package com.huawei.secure.android.common.encrypt.keystore.aes;

public class AesCbcKS {
    private static final java.lang.String a = "AesCbcKS";
    private static final java.lang.String b = "AndroidKeyStore";
    private static final java.lang.String c = "AES/CBC/PKCS7Padding";
    private static final java.lang.String d = "";
    private static final int e = 16;
    private static final int f = 256;
    private static java.util.Map<java.lang.String, javax.crypto.SecretKey> g;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.g = r0
            return
    }

    public AesCbcKS() {
            r0 = this;
            r0.<init>()
            return
    }

    private static synchronized javax.crypto.SecretKey a(java.lang.String r6) {
            java.lang.Class<com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS> r0 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.class
            monitor-enter(r0)
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a     // Catch: java.lang.Throwable -> L148
            java.lang.String r2 = "load key"
            com.huawei.secure.android.common.encrypt.utils.b.c(r1, r2)     // Catch: java.lang.Throwable -> L148
            r1 = 0
            java.lang.String r2 = "AndroidKeyStore"
            java.security.KeyStore r2 = java.security.KeyStore.getInstance(r2)     // Catch: java.lang.Exception -> L5f java.security.NoSuchProviderException -> L7c java.security.InvalidAlgorithmParameterException -> L99 java.security.UnrecoverableKeyException -> Lb6 java.security.NoSuchAlgorithmException -> Ld2 java.security.cert.CertificateException -> Lee java.io.IOException -> L10a java.security.KeyStoreException -> L126 java.lang.Throwable -> L148
            r2.load(r1)     // Catch: java.lang.Exception -> L5f java.security.NoSuchProviderException -> L7c java.security.InvalidAlgorithmParameterException -> L99 java.security.UnrecoverableKeyException -> Lb6 java.security.NoSuchAlgorithmException -> Ld2 java.security.cert.CertificateException -> Lee java.io.IOException -> L10a java.security.KeyStoreException -> L126 java.lang.Throwable -> L148
            java.security.Key r2 = r2.getKey(r6, r1)     // Catch: java.lang.Exception -> L5f java.security.NoSuchProviderException -> L7c java.security.InvalidAlgorithmParameterException -> L99 java.security.UnrecoverableKeyException -> Lb6 java.security.NoSuchAlgorithmException -> Ld2 java.security.cert.CertificateException -> Lee java.io.IOException -> L10a java.security.KeyStoreException -> L126 java.lang.Throwable -> L148
            if (r2 == 0) goto L23
            boolean r3 = r2 instanceof javax.crypto.SecretKey     // Catch: java.lang.Exception -> L5f java.security.NoSuchProviderException -> L7c java.security.InvalidAlgorithmParameterException -> L99 java.security.UnrecoverableKeyException -> Lb6 java.security.NoSuchAlgorithmException -> Ld2 java.security.cert.CertificateException -> Lee java.io.IOException -> L10a java.security.KeyStoreException -> L126 java.lang.Throwable -> L148
            if (r3 == 0) goto L23
            javax.crypto.SecretKey r2 = (javax.crypto.SecretKey) r2     // Catch: java.lang.Exception -> L5f java.security.NoSuchProviderException -> L7c java.security.InvalidAlgorithmParameterException -> L99 java.security.UnrecoverableKeyException -> Lb6 java.security.NoSuchAlgorithmException -> Ld2 java.security.cert.CertificateException -> Lee java.io.IOException -> L10a java.security.KeyStoreException -> L126 java.lang.Throwable -> L148
            r1 = r2
            goto L141
        L23:
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a     // Catch: java.lang.Exception -> L5f java.security.NoSuchProviderException -> L7c java.security.InvalidAlgorithmParameterException -> L99 java.security.UnrecoverableKeyException -> Lb6 java.security.NoSuchAlgorithmException -> Ld2 java.security.cert.CertificateException -> Lee java.io.IOException -> L10a java.security.KeyStoreException -> L126 java.lang.Throwable -> L148
            java.lang.String r3 = "generate key"
            com.huawei.secure.android.common.encrypt.utils.b.c(r2, r3)     // Catch: java.lang.Exception -> L5f java.security.NoSuchProviderException -> L7c java.security.InvalidAlgorithmParameterException -> L99 java.security.UnrecoverableKeyException -> Lb6 java.security.NoSuchAlgorithmException -> Ld2 java.security.cert.CertificateException -> Lee java.io.IOException -> L10a java.security.KeyStoreException -> L126 java.lang.Throwable -> L148
            java.lang.String r2 = "AES"
            java.lang.String r3 = "AndroidKeyStore"
            javax.crypto.KeyGenerator r2 = javax.crypto.KeyGenerator.getInstance(r2, r3)     // Catch: java.lang.Exception -> L5f java.security.NoSuchProviderException -> L7c java.security.InvalidAlgorithmParameterException -> L99 java.security.UnrecoverableKeyException -> Lb6 java.security.NoSuchAlgorithmException -> Ld2 java.security.cert.CertificateException -> Lee java.io.IOException -> L10a java.security.KeyStoreException -> L126 java.lang.Throwable -> L148
            android.security.keystore.KeyGenParameterSpec$Builder r3 = new android.security.keystore.KeyGenParameterSpec$Builder     // Catch: java.lang.Exception -> L5f java.security.NoSuchProviderException -> L7c java.security.InvalidAlgorithmParameterException -> L99 java.security.UnrecoverableKeyException -> Lb6 java.security.NoSuchAlgorithmException -> Ld2 java.security.cert.CertificateException -> Lee java.io.IOException -> L10a java.security.KeyStoreException -> L126 java.lang.Throwable -> L148
            r4 = 3
            r3.<init>(r6, r4)     // Catch: java.lang.Exception -> L5f java.security.NoSuchProviderException -> L7c java.security.InvalidAlgorithmParameterException -> L99 java.security.UnrecoverableKeyException -> Lb6 java.security.NoSuchAlgorithmException -> Ld2 java.security.cert.CertificateException -> Lee java.io.IOException -> L10a java.security.KeyStoreException -> L126 java.lang.Throwable -> L148
            java.lang.String r4 = "CBC"
            java.lang.String[] r4 = new java.lang.String[]{r4}     // Catch: java.lang.Exception -> L5f java.security.NoSuchProviderException -> L7c java.security.InvalidAlgorithmParameterException -> L99 java.security.UnrecoverableKeyException -> Lb6 java.security.NoSuchAlgorithmException -> Ld2 java.security.cert.CertificateException -> Lee java.io.IOException -> L10a java.security.KeyStoreException -> L126 java.lang.Throwable -> L148
            android.security.keystore.KeyGenParameterSpec$Builder r3 = r3.setBlockModes(r4)     // Catch: java.lang.Exception -> L5f java.security.NoSuchProviderException -> L7c java.security.InvalidAlgorithmParameterException -> L99 java.security.UnrecoverableKeyException -> Lb6 java.security.NoSuchAlgorithmException -> Ld2 java.security.cert.CertificateException -> Lee java.io.IOException -> L10a java.security.KeyStoreException -> L126 java.lang.Throwable -> L148
            java.lang.String r4 = "PKCS7Padding"
            java.lang.String[] r4 = new java.lang.String[]{r4}     // Catch: java.lang.Exception -> L5f java.security.NoSuchProviderException -> L7c java.security.InvalidAlgorithmParameterException -> L99 java.security.UnrecoverableKeyException -> Lb6 java.security.NoSuchAlgorithmException -> Ld2 java.security.cert.CertificateException -> Lee java.io.IOException -> L10a java.security.KeyStoreException -> L126 java.lang.Throwable -> L148
            android.security.keystore.KeyGenParameterSpec$Builder r3 = r3.setEncryptionPaddings(r4)     // Catch: java.lang.Exception -> L5f java.security.NoSuchProviderException -> L7c java.security.InvalidAlgorithmParameterException -> L99 java.security.UnrecoverableKeyException -> Lb6 java.security.NoSuchAlgorithmException -> Ld2 java.security.cert.CertificateException -> Lee java.io.IOException -> L10a java.security.KeyStoreException -> L126 java.lang.Throwable -> L148
            r4 = 256(0x100, float:3.59E-43)
            android.security.keystore.KeyGenParameterSpec$Builder r3 = r3.setKeySize(r4)     // Catch: java.lang.Exception -> L5f java.security.NoSuchProviderException -> L7c java.security.InvalidAlgorithmParameterException -> L99 java.security.UnrecoverableKeyException -> Lb6 java.security.NoSuchAlgorithmException -> Ld2 java.security.cert.CertificateException -> Lee java.io.IOException -> L10a java.security.KeyStoreException -> L126 java.lang.Throwable -> L148
            android.security.keystore.KeyGenParameterSpec r3 = r3.build()     // Catch: java.lang.Exception -> L5f java.security.NoSuchProviderException -> L7c java.security.InvalidAlgorithmParameterException -> L99 java.security.UnrecoverableKeyException -> Lb6 java.security.NoSuchAlgorithmException -> Ld2 java.security.cert.CertificateException -> Lee java.io.IOException -> L10a java.security.KeyStoreException -> L126 java.lang.Throwable -> L148
            r2.init(r3)     // Catch: java.lang.Exception -> L5f java.security.NoSuchProviderException -> L7c java.security.InvalidAlgorithmParameterException -> L99 java.security.UnrecoverableKeyException -> Lb6 java.security.NoSuchAlgorithmException -> Ld2 java.security.cert.CertificateException -> Lee java.io.IOException -> L10a java.security.KeyStoreException -> L126 java.lang.Throwable -> L148
            javax.crypto.SecretKey r1 = r2.generateKey()     // Catch: java.lang.Exception -> L5f java.security.NoSuchProviderException -> L7c java.security.InvalidAlgorithmParameterException -> L99 java.security.UnrecoverableKeyException -> Lb6 java.security.NoSuchAlgorithmException -> Ld2 java.security.cert.CertificateException -> Lee java.io.IOException -> L10a java.security.KeyStoreException -> L126 java.lang.Throwable -> L148
            goto L141
        L5f:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a     // Catch: java.lang.Throwable -> L148
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L148
            r4.<init>()     // Catch: java.lang.Throwable -> L148
            java.lang.String r5 = "Exception: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L148
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L148
            r4.append(r2)     // Catch: java.lang.Throwable -> L148
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L148
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)     // Catch: java.lang.Throwable -> L148
            goto L141
        L7c:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a     // Catch: java.lang.Throwable -> L148
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L148
            r4.<init>()     // Catch: java.lang.Throwable -> L148
            java.lang.String r5 = "NoSuchProviderException: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L148
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L148
            r4.append(r2)     // Catch: java.lang.Throwable -> L148
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L148
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)     // Catch: java.lang.Throwable -> L148
            goto L141
        L99:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a     // Catch: java.lang.Throwable -> L148
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L148
            r4.<init>()     // Catch: java.lang.Throwable -> L148
            java.lang.String r5 = "InvalidAlgorithmParameterException: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L148
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L148
            r4.append(r2)     // Catch: java.lang.Throwable -> L148
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L148
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)     // Catch: java.lang.Throwable -> L148
            goto L141
        Lb6:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a     // Catch: java.lang.Throwable -> L148
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L148
            r4.<init>()     // Catch: java.lang.Throwable -> L148
            java.lang.String r5 = "UnrecoverableKeyException: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L148
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L148
            r4.append(r2)     // Catch: java.lang.Throwable -> L148
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L148
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)     // Catch: java.lang.Throwable -> L148
            goto L141
        Ld2:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a     // Catch: java.lang.Throwable -> L148
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L148
            r4.<init>()     // Catch: java.lang.Throwable -> L148
            java.lang.String r5 = "NoSuchAlgorithmException: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L148
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L148
            r4.append(r2)     // Catch: java.lang.Throwable -> L148
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L148
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)     // Catch: java.lang.Throwable -> L148
            goto L141
        Lee:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a     // Catch: java.lang.Throwable -> L148
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L148
            r4.<init>()     // Catch: java.lang.Throwable -> L148
            java.lang.String r5 = "CertificateException: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L148
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L148
            r4.append(r2)     // Catch: java.lang.Throwable -> L148
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L148
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)     // Catch: java.lang.Throwable -> L148
            goto L141
        L10a:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a     // Catch: java.lang.Throwable -> L148
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L148
            r4.<init>()     // Catch: java.lang.Throwable -> L148
            java.lang.String r5 = "IOException: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L148
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L148
            r4.append(r2)     // Catch: java.lang.Throwable -> L148
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L148
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)     // Catch: java.lang.Throwable -> L148
            goto L141
        L126:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a     // Catch: java.lang.Throwable -> L148
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L148
            r4.<init>()     // Catch: java.lang.Throwable -> L148
            java.lang.String r5 = "KeyStoreException: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L148
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L148
            r4.append(r2)     // Catch: java.lang.Throwable -> L148
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L148
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)     // Catch: java.lang.Throwable -> L148
        L141:
            java.util.Map<java.lang.String, javax.crypto.SecretKey> r2 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.g     // Catch: java.lang.Throwable -> L148
            r2.put(r6, r1)     // Catch: java.lang.Throwable -> L148
            monitor-exit(r0)
            return r1
        L148:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
    }

    private static boolean a() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    private static javax.crypto.SecretKey b(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L8
            r1 = 0
            return r1
        L8:
            java.util.Map<java.lang.String, javax.crypto.SecretKey> r0 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.g
            java.lang.Object r0 = r0.get(r1)
            if (r0 != 0) goto L13
            a(r1)
        L13:
            java.util.Map<java.lang.String, javax.crypto.SecretKey> r0 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.g
            java.lang.Object r1 = r0.get(r1)
            javax.crypto.SecretKey r1 = (javax.crypto.SecretKey) r1
            return r1
    }

    public static java.lang.String decrypt(java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            java.lang.String r1 = ""
            if (r0 != 0) goto L27
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Lf
            goto L27
        Lf:
            byte[] r3 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r3)
            java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L1f
            byte[] r2 = decrypt(r2, r3)     // Catch: java.io.UnsupportedEncodingException -> L1f
            java.lang.String r3 = "UTF-8"
            r0.<init>(r2, r3)     // Catch: java.io.UnsupportedEncodingException -> L1f
            return r0
        L1f:
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.String r3 = "encrypt: UnsupportedEncodingException"
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
            return r1
        L27:
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.String r3 = "alias or encrypt content is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
            return r1
    }

    public static byte[] decrypt(java.lang.String r6, byte[] r7) {
            r0 = 0
            byte[] r0 = new byte[r0]
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 != 0) goto L116
            if (r7 != 0) goto Ld
            goto L116
        Ld:
            boolean r1 = a()
            if (r1 != 0) goto L1b
            java.lang.String r6 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.String r7 = "sdk version is too low"
            com.huawei.secure.android.common.encrypt.utils.b.b(r6, r7)
            return r0
        L1b:
            int r1 = r7.length
            r2 = 16
            if (r1 > r2) goto L28
            java.lang.String r6 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.String r7 = "Decrypt source data is invalid."
            com.huawei.secure.android.common.encrypt.utils.b.b(r6, r7)
            return r0
        L28:
            javax.crypto.SecretKey r6 = b(r6)
            if (r6 != 0) goto L36
            java.lang.String r6 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.String r7 = "decrypt secret key is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r6, r7)
            return r0
        L36:
            byte[] r1 = java.util.Arrays.copyOf(r7, r2)
            java.lang.String r3 = "AES/CBC/PKCS7Padding"
            javax.crypto.Cipher r3 = javax.crypto.Cipher.getInstance(r3)     // Catch: java.lang.Exception -> L50 javax.crypto.BadPaddingException -> L6d javax.crypto.IllegalBlockSizeException -> L8a java.security.InvalidAlgorithmParameterException -> La6 java.security.InvalidKeyException -> Lc2 javax.crypto.NoSuchPaddingException -> Lde java.security.NoSuchAlgorithmException -> Lfa
            r4 = 2
            javax.crypto.spec.IvParameterSpec r5 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L50 javax.crypto.BadPaddingException -> L6d javax.crypto.IllegalBlockSizeException -> L8a java.security.InvalidAlgorithmParameterException -> La6 java.security.InvalidKeyException -> Lc2 javax.crypto.NoSuchPaddingException -> Lde java.security.NoSuchAlgorithmException -> Lfa
            r5.<init>(r1)     // Catch: java.lang.Exception -> L50 javax.crypto.BadPaddingException -> L6d javax.crypto.IllegalBlockSizeException -> L8a java.security.InvalidAlgorithmParameterException -> La6 java.security.InvalidKeyException -> Lc2 javax.crypto.NoSuchPaddingException -> Lde java.security.NoSuchAlgorithmException -> Lfa
            r3.init(r4, r6, r5)     // Catch: java.lang.Exception -> L50 javax.crypto.BadPaddingException -> L6d javax.crypto.IllegalBlockSizeException -> L8a java.security.InvalidAlgorithmParameterException -> La6 java.security.InvalidKeyException -> Lc2 javax.crypto.NoSuchPaddingException -> Lde java.security.NoSuchAlgorithmException -> Lfa
            int r6 = r7.length     // Catch: java.lang.Exception -> L50 javax.crypto.BadPaddingException -> L6d javax.crypto.IllegalBlockSizeException -> L8a java.security.InvalidAlgorithmParameterException -> La6 java.security.InvalidKeyException -> Lc2 javax.crypto.NoSuchPaddingException -> Lde java.security.NoSuchAlgorithmException -> Lfa
            int r6 = r6 - r2
            byte[] r6 = r3.doFinal(r7, r2, r6)     // Catch: java.lang.Exception -> L50 javax.crypto.BadPaddingException -> L6d javax.crypto.IllegalBlockSizeException -> L8a java.security.InvalidAlgorithmParameterException -> La6 java.security.InvalidKeyException -> Lc2 javax.crypto.NoSuchPaddingException -> Lde java.security.NoSuchAlgorithmException -> Lfa
            return r6
        L50:
            r6 = move-exception
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Exception: "
            r1.append(r2)
            java.lang.String r6 = r6.getMessage()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r6)
            goto L115
        L6d:
            r6 = move-exception
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "BadPaddingException: "
            r1.append(r2)
            java.lang.String r6 = r6.getMessage()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r6)
            goto L115
        L8a:
            r6 = move-exception
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "IllegalBlockSizeException: "
            r1.append(r2)
            java.lang.String r6 = r6.getMessage()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r6)
            goto L115
        La6:
            r6 = move-exception
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "InvalidAlgorithmParameterException: "
            r1.append(r2)
            java.lang.String r6 = r6.getMessage()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r6)
            goto L115
        Lc2:
            r6 = move-exception
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "InvalidKeyException: "
            r1.append(r2)
            java.lang.String r6 = r6.getMessage()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r6)
            goto L115
        Lde:
            r6 = move-exception
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "NoSuchPaddingException: "
            r1.append(r2)
            java.lang.String r6 = r6.getMessage()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r6)
            goto L115
        Lfa:
            r6 = move-exception
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "NoSuchAlgorithmException: "
            r1.append(r2)
            java.lang.String r6 = r6.getMessage()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r6)
        L115:
            return r0
        L116:
            java.lang.String r6 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.String r7 = "alias or encrypt content is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r6, r7)
            return r0
    }

    public static java.lang.String encrypt(java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 == 0) goto L10
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.String r3 = "encrypt: content is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
            return r1
        L10:
            java.lang.String r0 = "UTF-8"
            byte[] r3 = r3.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L1f
            byte[] r2 = encrypt(r2, r3)     // Catch: java.io.UnsupportedEncodingException -> L1f
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r2)     // Catch: java.io.UnsupportedEncodingException -> L1f
            return r2
        L1f:
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.String r3 = "encrypt: UnsupportedEncodingException"
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
            return r1
    }

    public static byte[] encrypt(java.lang.String r4, byte[] r5) {
            r0 = 0
            byte[] r1 = new byte[r0]
            boolean r2 = android.text.TextUtils.isEmpty(r4)
            if (r2 != 0) goto L102
            if (r5 != 0) goto Ld
            goto L102
        Ld:
            boolean r2 = a()
            if (r2 != 0) goto L1b
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.String r5 = "sdk version is too low"
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r5)
            return r1
        L1b:
            java.lang.String r2 = "AES/CBC/PKCS7Padding"
            javax.crypto.Cipher r2 = javax.crypto.Cipher.getInstance(r2)     // Catch: java.lang.Exception -> L59 java.security.InvalidKeyException -> L76 javax.crypto.IllegalBlockSizeException -> L92 javax.crypto.BadPaddingException -> Lae javax.crypto.NoSuchPaddingException -> Lca java.security.NoSuchAlgorithmException -> Le6
            javax.crypto.SecretKey r4 = b(r4)     // Catch: java.lang.Exception -> L59 java.security.InvalidKeyException -> L76 javax.crypto.IllegalBlockSizeException -> L92 javax.crypto.BadPaddingException -> Lae javax.crypto.NoSuchPaddingException -> Lca java.security.NoSuchAlgorithmException -> Le6
            if (r4 != 0) goto L2f
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a     // Catch: java.lang.Exception -> L59 java.security.InvalidKeyException -> L76 javax.crypto.IllegalBlockSizeException -> L92 javax.crypto.BadPaddingException -> Lae javax.crypto.NoSuchPaddingException -> Lca java.security.NoSuchAlgorithmException -> Le6
            java.lang.String r5 = "encrypt secret key is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r5)     // Catch: java.lang.Exception -> L59 java.security.InvalidKeyException -> L76 javax.crypto.IllegalBlockSizeException -> L92 javax.crypto.BadPaddingException -> Lae javax.crypto.NoSuchPaddingException -> Lca java.security.NoSuchAlgorithmException -> Le6
            return r1
        L2f:
            r3 = 1
            r2.init(r3, r4)     // Catch: java.lang.Exception -> L59 java.security.InvalidKeyException -> L76 javax.crypto.IllegalBlockSizeException -> L92 javax.crypto.BadPaddingException -> Lae javax.crypto.NoSuchPaddingException -> Lca java.security.NoSuchAlgorithmException -> Le6
            byte[] r4 = r2.doFinal(r5)     // Catch: java.lang.Exception -> L59 java.security.InvalidKeyException -> L76 javax.crypto.IllegalBlockSizeException -> L92 javax.crypto.BadPaddingException -> Lae javax.crypto.NoSuchPaddingException -> Lca java.security.NoSuchAlgorithmException -> Le6
            byte[] r5 = r2.getIV()     // Catch: java.lang.Exception -> L59 java.security.InvalidKeyException -> L76 javax.crypto.IllegalBlockSizeException -> L92 javax.crypto.BadPaddingException -> Lae javax.crypto.NoSuchPaddingException -> Lca java.security.NoSuchAlgorithmException -> Le6
            if (r5 == 0) goto L51
            int r2 = r5.length     // Catch: java.lang.Exception -> L59 java.security.InvalidKeyException -> L76 javax.crypto.IllegalBlockSizeException -> L92 javax.crypto.BadPaddingException -> Lae javax.crypto.NoSuchPaddingException -> Lca java.security.NoSuchAlgorithmException -> Le6
            r3 = 16
            if (r2 == r3) goto L43
            goto L51
        L43:
            int r2 = r5.length     // Catch: java.lang.Exception -> L59 java.security.InvalidKeyException -> L76 javax.crypto.IllegalBlockSizeException -> L92 javax.crypto.BadPaddingException -> Lae javax.crypto.NoSuchPaddingException -> Lca java.security.NoSuchAlgorithmException -> Le6
            int r3 = r4.length     // Catch: java.lang.Exception -> L59 java.security.InvalidKeyException -> L76 javax.crypto.IllegalBlockSizeException -> L92 javax.crypto.BadPaddingException -> Lae javax.crypto.NoSuchPaddingException -> Lca java.security.NoSuchAlgorithmException -> Le6
            int r2 = r2 + r3
            byte[] r1 = java.util.Arrays.copyOf(r5, r2)     // Catch: java.lang.Exception -> L59 java.security.InvalidKeyException -> L76 javax.crypto.IllegalBlockSizeException -> L92 javax.crypto.BadPaddingException -> Lae javax.crypto.NoSuchPaddingException -> Lca java.security.NoSuchAlgorithmException -> Le6
            int r5 = r5.length     // Catch: java.lang.Exception -> L59 java.security.InvalidKeyException -> L76 javax.crypto.IllegalBlockSizeException -> L92 javax.crypto.BadPaddingException -> Lae javax.crypto.NoSuchPaddingException -> Lca java.security.NoSuchAlgorithmException -> Le6
            int r2 = r4.length     // Catch: java.lang.Exception -> L59 java.security.InvalidKeyException -> L76 javax.crypto.IllegalBlockSizeException -> L92 javax.crypto.BadPaddingException -> Lae javax.crypto.NoSuchPaddingException -> Lca java.security.NoSuchAlgorithmException -> Le6
            java.lang.System.arraycopy(r4, r0, r1, r5, r2)     // Catch: java.lang.Exception -> L59 java.security.InvalidKeyException -> L76 javax.crypto.IllegalBlockSizeException -> L92 javax.crypto.BadPaddingException -> Lae javax.crypto.NoSuchPaddingException -> Lca java.security.NoSuchAlgorithmException -> Le6
            goto L101
        L51:
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a     // Catch: java.lang.Exception -> L59 java.security.InvalidKeyException -> L76 javax.crypto.IllegalBlockSizeException -> L92 javax.crypto.BadPaddingException -> Lae javax.crypto.NoSuchPaddingException -> Lca java.security.NoSuchAlgorithmException -> Le6
            java.lang.String r5 = "IV is invalid."
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r5)     // Catch: java.lang.Exception -> L59 java.security.InvalidKeyException -> L76 javax.crypto.IllegalBlockSizeException -> L92 javax.crypto.BadPaddingException -> Lae javax.crypto.NoSuchPaddingException -> Lca java.security.NoSuchAlgorithmException -> Le6
            return r1
        L59:
            r4 = move-exception
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Exception: "
            r0.append(r2)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r4)
            goto L101
        L76:
            r4 = move-exception
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "InvalidKeyException: "
            r0.append(r2)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r4)
            goto L101
        L92:
            r4 = move-exception
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "IllegalBlockSizeException: "
            r0.append(r2)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r4)
            goto L101
        Lae:
            r4 = move-exception
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "BadPaddingException: "
            r0.append(r2)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r4)
            goto L101
        Lca:
            r4 = move-exception
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "NoSuchPaddingException: "
            r0.append(r2)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r4)
            goto L101
        Le6:
            r4 = move-exception
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "NoSuchAlgorithmException: "
            r0.append(r2)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r4)
        L101:
            return r1
        L102:
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.keystore.aes.AesCbcKS.a
            java.lang.String r5 = "alias or encrypt content is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r5)
            return r1
    }
}

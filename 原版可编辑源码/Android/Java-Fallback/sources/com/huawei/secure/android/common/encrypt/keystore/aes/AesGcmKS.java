package com.huawei.secure.android.common.encrypt.keystore.aes;

public class AesGcmKS {
    private static final java.lang.String a = "AesGcmKS";
    private static final java.lang.String b = "AndroidKeyStore";
    private static final java.lang.String c = "AES/GCM/NoPadding";
    private static final java.lang.String d = "";
    private static final int e = 12;
    private static final int f = 256;
    private static java.util.Map<java.lang.String, javax.crypto.SecretKey> g;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.g = r0
            return
    }

    public AesGcmKS() {
            r0 = this;
            r0.<init>()
            return
    }

    private static synchronized javax.crypto.SecretKey a(java.lang.String r6) {
            java.lang.Class<com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS> r0 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.class
            monitor-enter(r0)
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a     // Catch: java.lang.Throwable -> L146
            java.lang.String r2 = "load key"
            com.huawei.secure.android.common.encrypt.utils.b.c(r1, r2)     // Catch: java.lang.Throwable -> L146
            r1 = 0
            java.lang.String r2 = "AndroidKeyStore"
            java.security.KeyStore r2 = java.security.KeyStore.getInstance(r2)     // Catch: java.lang.Exception -> L5d java.security.NoSuchProviderException -> L7a java.security.InvalidAlgorithmParameterException -> L97 java.security.UnrecoverableKeyException -> Lb4 java.security.NoSuchAlgorithmException -> Ld0 java.security.cert.CertificateException -> Lec java.io.IOException -> L108 java.security.KeyStoreException -> L124 java.lang.Throwable -> L146
            r2.load(r1)     // Catch: java.lang.Exception -> L5d java.security.NoSuchProviderException -> L7a java.security.InvalidAlgorithmParameterException -> L97 java.security.UnrecoverableKeyException -> Lb4 java.security.NoSuchAlgorithmException -> Ld0 java.security.cert.CertificateException -> Lec java.io.IOException -> L108 java.security.KeyStoreException -> L124 java.lang.Throwable -> L146
            java.security.Key r2 = r2.getKey(r6, r1)     // Catch: java.lang.Exception -> L5d java.security.NoSuchProviderException -> L7a java.security.InvalidAlgorithmParameterException -> L97 java.security.UnrecoverableKeyException -> Lb4 java.security.NoSuchAlgorithmException -> Ld0 java.security.cert.CertificateException -> Lec java.io.IOException -> L108 java.security.KeyStoreException -> L124 java.lang.Throwable -> L146
            boolean r3 = r2 instanceof javax.crypto.SecretKey     // Catch: java.lang.Exception -> L5d java.security.NoSuchProviderException -> L7a java.security.InvalidAlgorithmParameterException -> L97 java.security.UnrecoverableKeyException -> Lb4 java.security.NoSuchAlgorithmException -> Ld0 java.security.cert.CertificateException -> Lec java.io.IOException -> L108 java.security.KeyStoreException -> L124 java.lang.Throwable -> L146
            if (r3 == 0) goto L21
            javax.crypto.SecretKey r2 = (javax.crypto.SecretKey) r2     // Catch: java.lang.Exception -> L5d java.security.NoSuchProviderException -> L7a java.security.InvalidAlgorithmParameterException -> L97 java.security.UnrecoverableKeyException -> Lb4 java.security.NoSuchAlgorithmException -> Ld0 java.security.cert.CertificateException -> Lec java.io.IOException -> L108 java.security.KeyStoreException -> L124 java.lang.Throwable -> L146
            r1 = r2
            goto L13f
        L21:
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a     // Catch: java.lang.Exception -> L5d java.security.NoSuchProviderException -> L7a java.security.InvalidAlgorithmParameterException -> L97 java.security.UnrecoverableKeyException -> Lb4 java.security.NoSuchAlgorithmException -> Ld0 java.security.cert.CertificateException -> Lec java.io.IOException -> L108 java.security.KeyStoreException -> L124 java.lang.Throwable -> L146
            java.lang.String r3 = "generate key"
            com.huawei.secure.android.common.encrypt.utils.b.c(r2, r3)     // Catch: java.lang.Exception -> L5d java.security.NoSuchProviderException -> L7a java.security.InvalidAlgorithmParameterException -> L97 java.security.UnrecoverableKeyException -> Lb4 java.security.NoSuchAlgorithmException -> Ld0 java.security.cert.CertificateException -> Lec java.io.IOException -> L108 java.security.KeyStoreException -> L124 java.lang.Throwable -> L146
            java.lang.String r2 = "AES"
            java.lang.String r3 = "AndroidKeyStore"
            javax.crypto.KeyGenerator r2 = javax.crypto.KeyGenerator.getInstance(r2, r3)     // Catch: java.lang.Exception -> L5d java.security.NoSuchProviderException -> L7a java.security.InvalidAlgorithmParameterException -> L97 java.security.UnrecoverableKeyException -> Lb4 java.security.NoSuchAlgorithmException -> Ld0 java.security.cert.CertificateException -> Lec java.io.IOException -> L108 java.security.KeyStoreException -> L124 java.lang.Throwable -> L146
            android.security.keystore.KeyGenParameterSpec$Builder r3 = new android.security.keystore.KeyGenParameterSpec$Builder     // Catch: java.lang.Exception -> L5d java.security.NoSuchProviderException -> L7a java.security.InvalidAlgorithmParameterException -> L97 java.security.UnrecoverableKeyException -> Lb4 java.security.NoSuchAlgorithmException -> Ld0 java.security.cert.CertificateException -> Lec java.io.IOException -> L108 java.security.KeyStoreException -> L124 java.lang.Throwable -> L146
            r4 = 3
            r3.<init>(r6, r4)     // Catch: java.lang.Exception -> L5d java.security.NoSuchProviderException -> L7a java.security.InvalidAlgorithmParameterException -> L97 java.security.UnrecoverableKeyException -> Lb4 java.security.NoSuchAlgorithmException -> Ld0 java.security.cert.CertificateException -> Lec java.io.IOException -> L108 java.security.KeyStoreException -> L124 java.lang.Throwable -> L146
            java.lang.String r4 = "GCM"
            java.lang.String[] r4 = new java.lang.String[]{r4}     // Catch: java.lang.Exception -> L5d java.security.NoSuchProviderException -> L7a java.security.InvalidAlgorithmParameterException -> L97 java.security.UnrecoverableKeyException -> Lb4 java.security.NoSuchAlgorithmException -> Ld0 java.security.cert.CertificateException -> Lec java.io.IOException -> L108 java.security.KeyStoreException -> L124 java.lang.Throwable -> L146
            android.security.keystore.KeyGenParameterSpec$Builder r3 = r3.setBlockModes(r4)     // Catch: java.lang.Exception -> L5d java.security.NoSuchProviderException -> L7a java.security.InvalidAlgorithmParameterException -> L97 java.security.UnrecoverableKeyException -> Lb4 java.security.NoSuchAlgorithmException -> Ld0 java.security.cert.CertificateException -> Lec java.io.IOException -> L108 java.security.KeyStoreException -> L124 java.lang.Throwable -> L146
            java.lang.String r4 = "NoPadding"
            java.lang.String[] r4 = new java.lang.String[]{r4}     // Catch: java.lang.Exception -> L5d java.security.NoSuchProviderException -> L7a java.security.InvalidAlgorithmParameterException -> L97 java.security.UnrecoverableKeyException -> Lb4 java.security.NoSuchAlgorithmException -> Ld0 java.security.cert.CertificateException -> Lec java.io.IOException -> L108 java.security.KeyStoreException -> L124 java.lang.Throwable -> L146
            android.security.keystore.KeyGenParameterSpec$Builder r3 = r3.setEncryptionPaddings(r4)     // Catch: java.lang.Exception -> L5d java.security.NoSuchProviderException -> L7a java.security.InvalidAlgorithmParameterException -> L97 java.security.UnrecoverableKeyException -> Lb4 java.security.NoSuchAlgorithmException -> Ld0 java.security.cert.CertificateException -> Lec java.io.IOException -> L108 java.security.KeyStoreException -> L124 java.lang.Throwable -> L146
            r4 = 256(0x100, float:3.59E-43)
            android.security.keystore.KeyGenParameterSpec$Builder r3 = r3.setKeySize(r4)     // Catch: java.lang.Exception -> L5d java.security.NoSuchProviderException -> L7a java.security.InvalidAlgorithmParameterException -> L97 java.security.UnrecoverableKeyException -> Lb4 java.security.NoSuchAlgorithmException -> Ld0 java.security.cert.CertificateException -> Lec java.io.IOException -> L108 java.security.KeyStoreException -> L124 java.lang.Throwable -> L146
            android.security.keystore.KeyGenParameterSpec r3 = r3.build()     // Catch: java.lang.Exception -> L5d java.security.NoSuchProviderException -> L7a java.security.InvalidAlgorithmParameterException -> L97 java.security.UnrecoverableKeyException -> Lb4 java.security.NoSuchAlgorithmException -> Ld0 java.security.cert.CertificateException -> Lec java.io.IOException -> L108 java.security.KeyStoreException -> L124 java.lang.Throwable -> L146
            r2.init(r3)     // Catch: java.lang.Exception -> L5d java.security.NoSuchProviderException -> L7a java.security.InvalidAlgorithmParameterException -> L97 java.security.UnrecoverableKeyException -> Lb4 java.security.NoSuchAlgorithmException -> Ld0 java.security.cert.CertificateException -> Lec java.io.IOException -> L108 java.security.KeyStoreException -> L124 java.lang.Throwable -> L146
            javax.crypto.SecretKey r1 = r2.generateKey()     // Catch: java.lang.Exception -> L5d java.security.NoSuchProviderException -> L7a java.security.InvalidAlgorithmParameterException -> L97 java.security.UnrecoverableKeyException -> Lb4 java.security.NoSuchAlgorithmException -> Ld0 java.security.cert.CertificateException -> Lec java.io.IOException -> L108 java.security.KeyStoreException -> L124 java.lang.Throwable -> L146
            goto L13f
        L5d:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a     // Catch: java.lang.Throwable -> L146
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L146
            r4.<init>()     // Catch: java.lang.Throwable -> L146
            java.lang.String r5 = "Exception: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L146
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L146
            r4.append(r2)     // Catch: java.lang.Throwable -> L146
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L146
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)     // Catch: java.lang.Throwable -> L146
            goto L13f
        L7a:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a     // Catch: java.lang.Throwable -> L146
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L146
            r4.<init>()     // Catch: java.lang.Throwable -> L146
            java.lang.String r5 = "NoSuchProviderException : "
            r4.append(r5)     // Catch: java.lang.Throwable -> L146
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L146
            r4.append(r2)     // Catch: java.lang.Throwable -> L146
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L146
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)     // Catch: java.lang.Throwable -> L146
            goto L13f
        L97:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a     // Catch: java.lang.Throwable -> L146
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L146
            r4.<init>()     // Catch: java.lang.Throwable -> L146
            java.lang.String r5 = "InvalidAlgorithmParameterException : "
            r4.append(r5)     // Catch: java.lang.Throwable -> L146
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L146
            r4.append(r2)     // Catch: java.lang.Throwable -> L146
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L146
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)     // Catch: java.lang.Throwable -> L146
            goto L13f
        Lb4:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a     // Catch: java.lang.Throwable -> L146
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L146
            r4.<init>()     // Catch: java.lang.Throwable -> L146
            java.lang.String r5 = "UnrecoverableKeyException : "
            r4.append(r5)     // Catch: java.lang.Throwable -> L146
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L146
            r4.append(r2)     // Catch: java.lang.Throwable -> L146
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L146
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)     // Catch: java.lang.Throwable -> L146
            goto L13f
        Ld0:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a     // Catch: java.lang.Throwable -> L146
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L146
            r4.<init>()     // Catch: java.lang.Throwable -> L146
            java.lang.String r5 = "NoSuchAlgorithmException : "
            r4.append(r5)     // Catch: java.lang.Throwable -> L146
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L146
            r4.append(r2)     // Catch: java.lang.Throwable -> L146
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L146
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)     // Catch: java.lang.Throwable -> L146
            goto L13f
        Lec:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a     // Catch: java.lang.Throwable -> L146
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L146
            r4.<init>()     // Catch: java.lang.Throwable -> L146
            java.lang.String r5 = "CertificateException : "
            r4.append(r5)     // Catch: java.lang.Throwable -> L146
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L146
            r4.append(r2)     // Catch: java.lang.Throwable -> L146
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L146
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)     // Catch: java.lang.Throwable -> L146
            goto L13f
        L108:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a     // Catch: java.lang.Throwable -> L146
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L146
            r4.<init>()     // Catch: java.lang.Throwable -> L146
            java.lang.String r5 = "IOException : "
            r4.append(r5)     // Catch: java.lang.Throwable -> L146
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L146
            r4.append(r2)     // Catch: java.lang.Throwable -> L146
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L146
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)     // Catch: java.lang.Throwable -> L146
            goto L13f
        L124:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a     // Catch: java.lang.Throwable -> L146
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L146
            r4.<init>()     // Catch: java.lang.Throwable -> L146
            java.lang.String r5 = "KeyStoreException : "
            r4.append(r5)     // Catch: java.lang.Throwable -> L146
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L146
            r4.append(r2)     // Catch: java.lang.Throwable -> L146
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L146
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)     // Catch: java.lang.Throwable -> L146
        L13f:
            java.util.Map<java.lang.String, javax.crypto.SecretKey> r2 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.g     // Catch: java.lang.Throwable -> L146
            r2.put(r6, r1)     // Catch: java.lang.Throwable -> L146
            monitor-exit(r0)
            return r1
        L146:
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
            java.util.Map<java.lang.String, javax.crypto.SecretKey> r0 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.g
            java.lang.Object r0 = r0.get(r1)
            if (r0 != 0) goto L13
            a(r1)
        L13:
            java.util.Map<java.lang.String, javax.crypto.SecretKey> r0 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.g
            java.lang.Object r1 = r0.get(r1)
            javax.crypto.SecretKey r1 = (javax.crypto.SecretKey) r1
            return r1
    }

    public static java.lang.String decrypt(java.lang.String r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 != 0) goto L3b
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Lf
            goto L3b
        Lf:
            java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L1f
            byte[] r4 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r4)     // Catch: java.io.UnsupportedEncodingException -> L1f
            byte[] r3 = decrypt(r3, r4)     // Catch: java.io.UnsupportedEncodingException -> L1f
            java.lang.String r4 = "UTF-8"
            r0.<init>(r3, r4)     // Catch: java.io.UnsupportedEncodingException -> L1f
            return r0
        L1f:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "decrypt: UnsupportedEncodingException : "
            r0.append(r2)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r3)
            return r1
        L3b:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.String r4 = "alias or encrypt content is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
    }

    public static byte[] decrypt(java.lang.String r3, byte[] r4) {
            r0 = 0
            byte[] r0 = new byte[r0]
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L30
            if (r4 != 0) goto Lc
            goto L30
        Lc:
            boolean r1 = a()
            if (r1 != 0) goto L1a
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.String r4 = "sdk version is too low"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r0
        L1a:
            int r1 = r4.length
            r2 = 12
            if (r1 > r2) goto L27
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.String r4 = "Decrypt source data is invalid."
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r0
        L27:
            javax.crypto.SecretKey r3 = b(r3)
            byte[] r3 = decrypt(r3, r4)
            return r3
        L30:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.String r4 = "alias or encrypt content is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r0
    }

    public static byte[] decrypt(javax.crypto.SecretKey r6, byte[] r7) {
            r0 = 0
            byte[] r0 = new byte[r0]
            if (r6 != 0) goto Ld
            java.lang.String r6 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.String r7 = "Decrypt secret key is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r6, r7)
            return r0
        Ld:
            if (r7 != 0) goto L17
            java.lang.String r6 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.String r7 = "content is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r6, r7)
            return r0
        L17:
            boolean r1 = a()
            if (r1 != 0) goto L25
            java.lang.String r6 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.String r7 = "sdk version is too low"
            com.huawei.secure.android.common.encrypt.utils.b.b(r6, r7)
            return r0
        L25:
            int r1 = r7.length
            r2 = 12
            if (r1 > r2) goto L32
            java.lang.String r6 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.String r7 = "Decrypt source data is invalid."
            com.huawei.secure.android.common.encrypt.utils.b.b(r6, r7)
            return r0
        L32:
            byte[] r1 = java.util.Arrays.copyOf(r7, r2)
            java.lang.String r3 = "AES/GCM/NoPadding"
            javax.crypto.Cipher r3 = javax.crypto.Cipher.getInstance(r3)     // Catch: java.lang.Exception -> L4f javax.crypto.BadPaddingException -> L6c javax.crypto.IllegalBlockSizeException -> L89 java.security.InvalidAlgorithmParameterException -> La5 java.security.InvalidKeyException -> Lc1 javax.crypto.NoSuchPaddingException -> Ldd java.security.NoSuchAlgorithmException -> Lf9
            javax.crypto.spec.GCMParameterSpec r4 = new javax.crypto.spec.GCMParameterSpec     // Catch: java.lang.Exception -> L4f javax.crypto.BadPaddingException -> L6c javax.crypto.IllegalBlockSizeException -> L89 java.security.InvalidAlgorithmParameterException -> La5 java.security.InvalidKeyException -> Lc1 javax.crypto.NoSuchPaddingException -> Ldd java.security.NoSuchAlgorithmException -> Lf9
            r5 = 128(0x80, float:1.8E-43)
            r4.<init>(r5, r1)     // Catch: java.lang.Exception -> L4f javax.crypto.BadPaddingException -> L6c javax.crypto.IllegalBlockSizeException -> L89 java.security.InvalidAlgorithmParameterException -> La5 java.security.InvalidKeyException -> Lc1 javax.crypto.NoSuchPaddingException -> Ldd java.security.NoSuchAlgorithmException -> Lf9
            r1 = 2
            r3.init(r1, r6, r4)     // Catch: java.lang.Exception -> L4f javax.crypto.BadPaddingException -> L6c javax.crypto.IllegalBlockSizeException -> L89 java.security.InvalidAlgorithmParameterException -> La5 java.security.InvalidKeyException -> Lc1 javax.crypto.NoSuchPaddingException -> Ldd java.security.NoSuchAlgorithmException -> Lf9
            int r6 = r7.length     // Catch: java.lang.Exception -> L4f javax.crypto.BadPaddingException -> L6c javax.crypto.IllegalBlockSizeException -> L89 java.security.InvalidAlgorithmParameterException -> La5 java.security.InvalidKeyException -> Lc1 javax.crypto.NoSuchPaddingException -> Ldd java.security.NoSuchAlgorithmException -> Lf9
            int r6 = r6 - r2
            byte[] r0 = r3.doFinal(r7, r2, r6)     // Catch: java.lang.Exception -> L4f javax.crypto.BadPaddingException -> L6c javax.crypto.IllegalBlockSizeException -> L89 java.security.InvalidAlgorithmParameterException -> La5 java.security.InvalidKeyException -> Lc1 javax.crypto.NoSuchPaddingException -> Ldd java.security.NoSuchAlgorithmException -> Lf9
            goto L114
        L4f:
            r6 = move-exception
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Exception: "
            r1.append(r2)
            java.lang.String r6 = r6.getMessage()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r6)
            goto L114
        L6c:
            r6 = move-exception
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "BadPaddingException : "
            r1.append(r2)
            java.lang.String r6 = r6.getMessage()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r6)
            goto L114
        L89:
            r6 = move-exception
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "IllegalBlockSizeException : "
            r1.append(r2)
            java.lang.String r6 = r6.getMessage()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r6)
            goto L114
        La5:
            r6 = move-exception
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "InvalidAlgorithmParameterException : "
            r1.append(r2)
            java.lang.String r6 = r6.getMessage()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r6)
            goto L114
        Lc1:
            r6 = move-exception
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "InvalidKeyException : "
            r1.append(r2)
            java.lang.String r6 = r6.getMessage()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r6)
            goto L114
        Ldd:
            r6 = move-exception
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "NoSuchPaddingException : "
            r1.append(r2)
            java.lang.String r6 = r6.getMessage()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r6)
            goto L114
        Lf9:
            r6 = move-exception
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "NoSuchAlgorithmException : "
            r1.append(r2)
            java.lang.String r6 = r6.getMessage()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r6)
        L114:
            return r0
    }

    public static java.lang.String encrypt(java.lang.String r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 != 0) goto L3a
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Lf
            goto L3a
        Lf:
            java.lang.String r0 = "UTF-8"
            byte[] r4 = r4.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L1e
            byte[] r3 = encrypt(r3, r4)     // Catch: java.io.UnsupportedEncodingException -> L1e
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r3)     // Catch: java.io.UnsupportedEncodingException -> L1e
            return r3
        L1e:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "encrypt: UnsupportedEncodingException : "
            r0.append(r2)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r3)
            return r1
        L3a:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.String r4 = "alias or encrypt content is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
    }

    public static byte[] encrypt(java.lang.String r2, byte[] r3) {
            r0 = 0
            byte[] r0 = new byte[r0]
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L23
            if (r3 != 0) goto Lc
            goto L23
        Lc:
            boolean r1 = a()
            if (r1 != 0) goto L1a
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.String r3 = "sdk version is too low"
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
            return r0
        L1a:
            javax.crypto.SecretKey r2 = b(r2)
            byte[] r2 = encrypt(r2, r3)
            return r2
        L23:
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.String r3 = "alias or encrypt content is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
            return r0
    }

    public static byte[] encrypt(javax.crypto.SecretKey r4, byte[] r5) {
            r0 = 0
            byte[] r1 = new byte[r0]
            if (r5 != 0) goto Ld
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.String r5 = "content is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r5)
            return r1
        Ld:
            if (r4 != 0) goto L17
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.String r5 = "secret key is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r5)
            return r1
        L17:
            boolean r2 = a()
            if (r2 != 0) goto L25
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.String r5 = "sdk version is too low"
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r5)
            return r1
        L25:
            java.lang.String r2 = "AES/GCM/NoPadding"
            javax.crypto.Cipher r2 = javax.crypto.Cipher.getInstance(r2)     // Catch: java.lang.Exception -> L55 java.security.InvalidKeyException -> L72 javax.crypto.IllegalBlockSizeException -> L8e javax.crypto.BadPaddingException -> Laa javax.crypto.NoSuchPaddingException -> Lc6 java.security.NoSuchAlgorithmException -> Le2
            r3 = 1
            r2.init(r3, r4)     // Catch: java.lang.Exception -> L55 java.security.InvalidKeyException -> L72 javax.crypto.IllegalBlockSizeException -> L8e javax.crypto.BadPaddingException -> Laa javax.crypto.NoSuchPaddingException -> Lc6 java.security.NoSuchAlgorithmException -> Le2
            byte[] r4 = r2.doFinal(r5)     // Catch: java.lang.Exception -> L55 java.security.InvalidKeyException -> L72 javax.crypto.IllegalBlockSizeException -> L8e javax.crypto.BadPaddingException -> Laa javax.crypto.NoSuchPaddingException -> Lc6 java.security.NoSuchAlgorithmException -> Le2
            byte[] r5 = r2.getIV()     // Catch: java.lang.Exception -> L55 java.security.InvalidKeyException -> L72 javax.crypto.IllegalBlockSizeException -> L8e javax.crypto.BadPaddingException -> Laa javax.crypto.NoSuchPaddingException -> Lc6 java.security.NoSuchAlgorithmException -> Le2
            if (r5 == 0) goto L4d
            int r2 = r5.length     // Catch: java.lang.Exception -> L55 java.security.InvalidKeyException -> L72 javax.crypto.IllegalBlockSizeException -> L8e javax.crypto.BadPaddingException -> Laa javax.crypto.NoSuchPaddingException -> Lc6 java.security.NoSuchAlgorithmException -> Le2
            r3 = 12
            if (r2 == r3) goto L3f
            goto L4d
        L3f:
            int r2 = r5.length     // Catch: java.lang.Exception -> L55 java.security.InvalidKeyException -> L72 javax.crypto.IllegalBlockSizeException -> L8e javax.crypto.BadPaddingException -> Laa javax.crypto.NoSuchPaddingException -> Lc6 java.security.NoSuchAlgorithmException -> Le2
            int r3 = r4.length     // Catch: java.lang.Exception -> L55 java.security.InvalidKeyException -> L72 javax.crypto.IllegalBlockSizeException -> L8e javax.crypto.BadPaddingException -> Laa javax.crypto.NoSuchPaddingException -> Lc6 java.security.NoSuchAlgorithmException -> Le2
            int r2 = r2 + r3
            byte[] r1 = java.util.Arrays.copyOf(r5, r2)     // Catch: java.lang.Exception -> L55 java.security.InvalidKeyException -> L72 javax.crypto.IllegalBlockSizeException -> L8e javax.crypto.BadPaddingException -> Laa javax.crypto.NoSuchPaddingException -> Lc6 java.security.NoSuchAlgorithmException -> Le2
            int r5 = r5.length     // Catch: java.lang.Exception -> L55 java.security.InvalidKeyException -> L72 javax.crypto.IllegalBlockSizeException -> L8e javax.crypto.BadPaddingException -> Laa javax.crypto.NoSuchPaddingException -> Lc6 java.security.NoSuchAlgorithmException -> Le2
            int r2 = r4.length     // Catch: java.lang.Exception -> L55 java.security.InvalidKeyException -> L72 javax.crypto.IllegalBlockSizeException -> L8e javax.crypto.BadPaddingException -> Laa javax.crypto.NoSuchPaddingException -> Lc6 java.security.NoSuchAlgorithmException -> Le2
            java.lang.System.arraycopy(r4, r0, r1, r5, r2)     // Catch: java.lang.Exception -> L55 java.security.InvalidKeyException -> L72 javax.crypto.IllegalBlockSizeException -> L8e javax.crypto.BadPaddingException -> Laa javax.crypto.NoSuchPaddingException -> Lc6 java.security.NoSuchAlgorithmException -> Le2
            goto Lfd
        L4d:
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a     // Catch: java.lang.Exception -> L55 java.security.InvalidKeyException -> L72 javax.crypto.IllegalBlockSizeException -> L8e javax.crypto.BadPaddingException -> Laa javax.crypto.NoSuchPaddingException -> Lc6 java.security.NoSuchAlgorithmException -> Le2
            java.lang.String r5 = "IV is invalid."
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r5)     // Catch: java.lang.Exception -> L55 java.security.InvalidKeyException -> L72 javax.crypto.IllegalBlockSizeException -> L8e javax.crypto.BadPaddingException -> Laa javax.crypto.NoSuchPaddingException -> Lc6 java.security.NoSuchAlgorithmException -> Le2
            return r1
        L55:
            r4 = move-exception
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Exception: "
            r0.append(r2)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r4)
            goto Lfd
        L72:
            r4 = move-exception
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "InvalidKeyException : "
            r0.append(r2)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r4)
            goto Lfd
        L8e:
            r4 = move-exception
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "IllegalBlockSizeException : "
            r0.append(r2)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r4)
            goto Lfd
        Laa:
            r4 = move-exception
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "BadPaddingException : "
            r0.append(r2)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r4)
            goto Lfd
        Lc6:
            r4 = move-exception
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "NoSuchPaddingException : "
            r0.append(r2)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r4)
            goto Lfd
        Le2:
            r4 = move-exception
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.keystore.aes.AesGcmKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "NoSuchAlgorithmException : "
            r0.append(r2)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r4)
        Lfd:
            return r1
    }
}

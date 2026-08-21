package com.huawei.secure.android.common.encrypt.keystore.rsa;

public abstract class RSAEncryptKS {
    private static final java.lang.String a = "RSAEncryptKS";
    private static final java.lang.String b = "AndroidKeyStore";
    private static final java.lang.String c = "RSA/ECB/OAEPWithSHA-256AndMGF1Padding";
    private static final java.lang.String d = "";
    private static final int e = 2048;
    private static final int f = 3072;

    static {
            return
    }

    public RSAEncryptKS() {
            r0 = this;
            r0.<init>()
            return
    }

    private static synchronized java.security.KeyPair a(java.lang.String r4, boolean r5) {
            java.lang.Class<com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS> r0 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.class
            monitor-enter(r0)
            boolean r1 = b(r4)     // Catch: java.lang.Throwable -> Lec
            r2 = 0
            if (r1 == 0) goto L13
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a     // Catch: java.lang.Throwable -> Lec
            java.lang.String r5 = "Key pair exits"
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r5)     // Catch: java.lang.Throwable -> Lec
            monitor-exit(r0)
            return r2
        L13:
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a     // Catch: java.lang.Throwable -> Lec
            java.lang.String r3 = "generate key pair."
            com.huawei.secure.android.common.encrypt.utils.b.c(r1, r3)     // Catch: java.lang.Throwable -> Lec
            java.lang.String r1 = "RSA"
            java.lang.String r3 = "AndroidKeyStore"
            java.security.KeyPairGenerator r1 = java.security.KeyPairGenerator.getInstance(r1, r3)     // Catch: java.lang.Exception -> L7b java.security.InvalidAlgorithmParameterException -> L97 java.security.NoSuchProviderException -> Lb3 java.security.NoSuchAlgorithmException -> Lcf java.lang.Throwable -> Lec
            r3 = 2
            if (r5 != 0) goto L4e
            android.security.keystore.KeyGenParameterSpec$Builder r5 = new android.security.keystore.KeyGenParameterSpec$Builder     // Catch: java.lang.Exception -> L7b java.security.InvalidAlgorithmParameterException -> L97 java.security.NoSuchProviderException -> Lb3 java.security.NoSuchAlgorithmException -> Lcf java.lang.Throwable -> Lec
            r5.<init>(r4, r3)     // Catch: java.lang.Exception -> L7b java.security.InvalidAlgorithmParameterException -> L97 java.security.NoSuchProviderException -> Lb3 java.security.NoSuchAlgorithmException -> Lcf java.lang.Throwable -> Lec
            java.lang.String r4 = "SHA-256"
            java.lang.String r3 = "SHA-512"
            java.lang.String[] r4 = new java.lang.String[]{r4, r3}     // Catch: java.lang.Exception -> L7b java.security.InvalidAlgorithmParameterException -> L97 java.security.NoSuchProviderException -> Lb3 java.security.NoSuchAlgorithmException -> Lcf java.lang.Throwable -> Lec
            android.security.keystore.KeyGenParameterSpec$Builder r4 = r5.setDigests(r4)     // Catch: java.lang.Exception -> L7b java.security.InvalidAlgorithmParameterException -> L97 java.security.NoSuchProviderException -> Lb3 java.security.NoSuchAlgorithmException -> Lcf java.lang.Throwable -> Lec
            java.lang.String r5 = "OAEPPadding"
            java.lang.String[] r5 = new java.lang.String[]{r5}     // Catch: java.lang.Exception -> L7b java.security.InvalidAlgorithmParameterException -> L97 java.security.NoSuchProviderException -> Lb3 java.security.NoSuchAlgorithmException -> Lcf java.lang.Throwable -> Lec
            android.security.keystore.KeyGenParameterSpec$Builder r4 = r4.setEncryptionPaddings(r5)     // Catch: java.lang.Exception -> L7b java.security.InvalidAlgorithmParameterException -> L97 java.security.NoSuchProviderException -> Lb3 java.security.NoSuchAlgorithmException -> Lcf java.lang.Throwable -> Lec
            r5 = 2048(0x800, float:2.87E-42)
            android.security.keystore.KeyGenParameterSpec$Builder r4 = r4.setKeySize(r5)     // Catch: java.lang.Exception -> L7b java.security.InvalidAlgorithmParameterException -> L97 java.security.NoSuchProviderException -> Lb3 java.security.NoSuchAlgorithmException -> Lcf java.lang.Throwable -> Lec
            android.security.keystore.KeyGenParameterSpec r4 = r4.build()     // Catch: java.lang.Exception -> L7b java.security.InvalidAlgorithmParameterException -> L97 java.security.NoSuchProviderException -> Lb3 java.security.NoSuchAlgorithmException -> Lcf java.lang.Throwable -> Lec
            r1.initialize(r4)     // Catch: java.lang.Exception -> L7b java.security.InvalidAlgorithmParameterException -> L97 java.security.NoSuchProviderException -> Lb3 java.security.NoSuchAlgorithmException -> Lcf java.lang.Throwable -> Lec
            goto L76
        L4e:
            android.security.keystore.KeyGenParameterSpec$Builder r5 = new android.security.keystore.KeyGenParameterSpec$Builder     // Catch: java.lang.Exception -> L7b java.security.InvalidAlgorithmParameterException -> L97 java.security.NoSuchProviderException -> Lb3 java.security.NoSuchAlgorithmException -> Lcf java.lang.Throwable -> Lec
            r5.<init>(r4, r3)     // Catch: java.lang.Exception -> L7b java.security.InvalidAlgorithmParameterException -> L97 java.security.NoSuchProviderException -> Lb3 java.security.NoSuchAlgorithmException -> Lcf java.lang.Throwable -> Lec
            java.lang.String r4 = "SHA-256"
            java.lang.String r3 = "SHA-512"
            java.lang.String[] r4 = new java.lang.String[]{r4, r3}     // Catch: java.lang.Exception -> L7b java.security.InvalidAlgorithmParameterException -> L97 java.security.NoSuchProviderException -> Lb3 java.security.NoSuchAlgorithmException -> Lcf java.lang.Throwable -> Lec
            android.security.keystore.KeyGenParameterSpec$Builder r4 = r5.setDigests(r4)     // Catch: java.lang.Exception -> L7b java.security.InvalidAlgorithmParameterException -> L97 java.security.NoSuchProviderException -> Lb3 java.security.NoSuchAlgorithmException -> Lcf java.lang.Throwable -> Lec
            java.lang.String r5 = "OAEPPadding"
            java.lang.String[] r5 = new java.lang.String[]{r5}     // Catch: java.lang.Exception -> L7b java.security.InvalidAlgorithmParameterException -> L97 java.security.NoSuchProviderException -> Lb3 java.security.NoSuchAlgorithmException -> Lcf java.lang.Throwable -> Lec
            android.security.keystore.KeyGenParameterSpec$Builder r4 = r4.setEncryptionPaddings(r5)     // Catch: java.lang.Exception -> L7b java.security.InvalidAlgorithmParameterException -> L97 java.security.NoSuchProviderException -> Lb3 java.security.NoSuchAlgorithmException -> Lcf java.lang.Throwable -> Lec
            r5 = 3072(0xc00, float:4.305E-42)
            android.security.keystore.KeyGenParameterSpec$Builder r4 = r4.setKeySize(r5)     // Catch: java.lang.Exception -> L7b java.security.InvalidAlgorithmParameterException -> L97 java.security.NoSuchProviderException -> Lb3 java.security.NoSuchAlgorithmException -> Lcf java.lang.Throwable -> Lec
            android.security.keystore.KeyGenParameterSpec r4 = r4.build()     // Catch: java.lang.Exception -> L7b java.security.InvalidAlgorithmParameterException -> L97 java.security.NoSuchProviderException -> Lb3 java.security.NoSuchAlgorithmException -> Lcf java.lang.Throwable -> Lec
            r1.initialize(r4)     // Catch: java.lang.Exception -> L7b java.security.InvalidAlgorithmParameterException -> L97 java.security.NoSuchProviderException -> Lb3 java.security.NoSuchAlgorithmException -> Lcf java.lang.Throwable -> Lec
        L76:
            java.security.KeyPair r2 = r1.generateKeyPair()     // Catch: java.lang.Exception -> L7b java.security.InvalidAlgorithmParameterException -> L97 java.security.NoSuchProviderException -> Lb3 java.security.NoSuchAlgorithmException -> Lcf java.lang.Throwable -> Lec
            goto Lea
        L7b:
            r4 = move-exception
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a     // Catch: java.lang.Throwable -> Lec
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lec
            r1.<init>()     // Catch: java.lang.Throwable -> Lec
            java.lang.String r3 = "Exception: "
            r1.append(r3)     // Catch: java.lang.Throwable -> Lec
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> Lec
            r1.append(r4)     // Catch: java.lang.Throwable -> Lec
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> Lec
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r4)     // Catch: java.lang.Throwable -> Lec
            goto Lea
        L97:
            r4 = move-exception
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a     // Catch: java.lang.Throwable -> Lec
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lec
            r1.<init>()     // Catch: java.lang.Throwable -> Lec
            java.lang.String r3 = "InvalidAlgorithmParameterException: "
            r1.append(r3)     // Catch: java.lang.Throwable -> Lec
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> Lec
            r1.append(r4)     // Catch: java.lang.Throwable -> Lec
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> Lec
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r4)     // Catch: java.lang.Throwable -> Lec
            goto Lea
        Lb3:
            r4 = move-exception
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a     // Catch: java.lang.Throwable -> Lec
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lec
            r1.<init>()     // Catch: java.lang.Throwable -> Lec
            java.lang.String r3 = "NoSuchProviderException: "
            r1.append(r3)     // Catch: java.lang.Throwable -> Lec
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> Lec
            r1.append(r4)     // Catch: java.lang.Throwable -> Lec
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> Lec
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r4)     // Catch: java.lang.Throwable -> Lec
            goto Lea
        Lcf:
            r4 = move-exception
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a     // Catch: java.lang.Throwable -> Lec
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lec
            r1.<init>()     // Catch: java.lang.Throwable -> Lec
            java.lang.String r3 = "NoSuchAlgorithmException: "
            r1.append(r3)     // Catch: java.lang.Throwable -> Lec
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> Lec
            r1.append(r4)     // Catch: java.lang.Throwable -> Lec
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> Lec
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r4)     // Catch: java.lang.Throwable -> Lec
        Lea:
            monitor-exit(r0)
            return r2
        Lec:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    private static java.security.PrivateKey a(java.lang.String r4) {
            boolean r0 = b(r4)
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            java.lang.String r0 = "AndroidKeyStore"
            java.security.KeyStore r0 = java.security.KeyStore.getInstance(r0)     // Catch: java.lang.Exception -> L1a java.io.IOException -> L37 java.security.NoSuchAlgorithmException -> L53 java.security.UnrecoverableKeyException -> L6f java.security.cert.CertificateException -> L8b java.security.KeyStoreException -> La7
            r0.load(r1)     // Catch: java.lang.Exception -> L1a java.io.IOException -> L37 java.security.NoSuchAlgorithmException -> L53 java.security.UnrecoverableKeyException -> L6f java.security.cert.CertificateException -> L8b java.security.KeyStoreException -> La7
            java.security.Key r4 = r0.getKey(r4, r1)     // Catch: java.lang.Exception -> L1a java.io.IOException -> L37 java.security.NoSuchAlgorithmException -> L53 java.security.UnrecoverableKeyException -> L6f java.security.cert.CertificateException -> L8b java.security.KeyStoreException -> La7
            java.security.PrivateKey r4 = (java.security.PrivateKey) r4     // Catch: java.lang.Exception -> L1a java.io.IOException -> L37 java.security.NoSuchAlgorithmException -> L53 java.security.UnrecoverableKeyException -> L6f java.security.cert.CertificateException -> L8b java.security.KeyStoreException -> La7
            r1 = r4
            goto Lc2
        L1a:
            r4 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Exception: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r4)
            goto Lc2
        L37:
            r4 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "IOException: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r4)
            goto Lc2
        L53:
            r4 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "NoSuchAlgorithmException: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r4)
            goto Lc2
        L6f:
            r4 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "UnrecoverableKeyException: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r4)
            goto Lc2
        L8b:
            r4 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "CertificateException: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r4)
            goto Lc2
        La7:
            r4 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "KeyStoreException: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r4)
        Lc2:
            return r1
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

    private static byte[] a(java.lang.String r6, byte[] r7, boolean r8) {
            r0 = 0
            byte[] r0 = new byte[r0]
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 != 0) goto L110
            if (r7 != 0) goto Ld
            goto L110
        Ld:
            boolean r1 = a()
            if (r1 != 0) goto L1b
            java.lang.String r6 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.String r7 = "sdk version is too low"
            com.huawei.secure.android.common.encrypt.utils.b.b(r6, r7)
            return r0
        L1b:
            java.security.PublicKey r6 = b(r6, r8)
            if (r6 != 0) goto L29
            java.lang.String r6 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.String r7 = "Public key is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r6, r7)
            return r0
        L29:
            java.lang.String r8 = "RSA/ECB/OAEPWithSHA-256AndMGF1Padding"
            javax.crypto.Cipher r8 = javax.crypto.Cipher.getInstance(r8)     // Catch: java.lang.Exception -> L4a javax.crypto.BadPaddingException -> L67 javax.crypto.IllegalBlockSizeException -> L84 java.security.InvalidAlgorithmParameterException -> La0 java.security.InvalidKeyException -> Lbc javax.crypto.NoSuchPaddingException -> Ld8 java.security.NoSuchAlgorithmException -> Lf4
            javax.crypto.spec.OAEPParameterSpec r1 = new javax.crypto.spec.OAEPParameterSpec     // Catch: java.lang.Exception -> L4a javax.crypto.BadPaddingException -> L67 javax.crypto.IllegalBlockSizeException -> L84 java.security.InvalidAlgorithmParameterException -> La0 java.security.InvalidKeyException -> Lbc javax.crypto.NoSuchPaddingException -> Ld8 java.security.NoSuchAlgorithmException -> Lf4
            java.lang.String r2 = "SHA-256"
            java.lang.String r3 = "MGF1"
            java.security.spec.MGF1ParameterSpec r4 = new java.security.spec.MGF1ParameterSpec     // Catch: java.lang.Exception -> L4a javax.crypto.BadPaddingException -> L67 javax.crypto.IllegalBlockSizeException -> L84 java.security.InvalidAlgorithmParameterException -> La0 java.security.InvalidKeyException -> Lbc javax.crypto.NoSuchPaddingException -> Ld8 java.security.NoSuchAlgorithmException -> Lf4
            java.lang.String r5 = "SHA-1"
            r4.<init>(r5)     // Catch: java.lang.Exception -> L4a javax.crypto.BadPaddingException -> L67 javax.crypto.IllegalBlockSizeException -> L84 java.security.InvalidAlgorithmParameterException -> La0 java.security.InvalidKeyException -> Lbc javax.crypto.NoSuchPaddingException -> Ld8 java.security.NoSuchAlgorithmException -> Lf4
            javax.crypto.spec.PSource$PSpecified r5 = javax.crypto.spec.PSource.PSpecified.DEFAULT     // Catch: java.lang.Exception -> L4a javax.crypto.BadPaddingException -> L67 javax.crypto.IllegalBlockSizeException -> L84 java.security.InvalidAlgorithmParameterException -> La0 java.security.InvalidKeyException -> Lbc javax.crypto.NoSuchPaddingException -> Ld8 java.security.NoSuchAlgorithmException -> Lf4
            r1.<init>(r2, r3, r4, r5)     // Catch: java.lang.Exception -> L4a javax.crypto.BadPaddingException -> L67 javax.crypto.IllegalBlockSizeException -> L84 java.security.InvalidAlgorithmParameterException -> La0 java.security.InvalidKeyException -> Lbc javax.crypto.NoSuchPaddingException -> Ld8 java.security.NoSuchAlgorithmException -> Lf4
            r2 = 1
            r8.init(r2, r6, r1)     // Catch: java.lang.Exception -> L4a javax.crypto.BadPaddingException -> L67 javax.crypto.IllegalBlockSizeException -> L84 java.security.InvalidAlgorithmParameterException -> La0 java.security.InvalidKeyException -> Lbc javax.crypto.NoSuchPaddingException -> Ld8 java.security.NoSuchAlgorithmException -> Lf4
            byte[] r6 = r8.doFinal(r7)     // Catch: java.lang.Exception -> L4a javax.crypto.BadPaddingException -> L67 javax.crypto.IllegalBlockSizeException -> L84 java.security.InvalidAlgorithmParameterException -> La0 java.security.InvalidKeyException -> Lbc javax.crypto.NoSuchPaddingException -> Ld8 java.security.NoSuchAlgorithmException -> Lf4
            return r6
        L4a:
            r6 = move-exception
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r1 = "Exception: "
            r8.append(r1)
            java.lang.String r6 = r6.getMessage()
            r8.append(r6)
            java.lang.String r6 = r8.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r6)
            goto L10f
        L67:
            r6 = move-exception
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r1 = "BadPaddingException: "
            r8.append(r1)
            java.lang.String r6 = r6.getMessage()
            r8.append(r6)
            java.lang.String r6 = r8.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r6)
            goto L10f
        L84:
            r6 = move-exception
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r1 = "IllegalBlockSizeException: "
            r8.append(r1)
            java.lang.String r6 = r6.getMessage()
            r8.append(r6)
            java.lang.String r6 = r8.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r6)
            goto L10f
        La0:
            r6 = move-exception
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r1 = "InvalidAlgorithmParameterException: "
            r8.append(r1)
            java.lang.String r6 = r6.getMessage()
            r8.append(r6)
            java.lang.String r6 = r8.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r6)
            goto L10f
        Lbc:
            r6 = move-exception
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r1 = "InvalidKeyException: "
            r8.append(r1)
            java.lang.String r6 = r6.getMessage()
            r8.append(r6)
            java.lang.String r6 = r8.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r6)
            goto L10f
        Ld8:
            r6 = move-exception
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r1 = "NoSuchPaddingException: "
            r8.append(r1)
            java.lang.String r6 = r6.getMessage()
            r8.append(r6)
            java.lang.String r6 = r8.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r6)
            goto L10f
        Lf4:
            r6 = move-exception
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r1 = "NoSuchAlgorithmException: "
            r8.append(r1)
            java.lang.String r6 = r6.getMessage()
            r8.append(r6)
            java.lang.String r6 = r8.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r6)
        L10f:
            return r0
        L110:
            java.lang.String r6 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.String r7 = "alias or content is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r6, r7)
            return r0
    }

    private static java.security.PublicKey b(java.lang.String r1, boolean r2) {
            boolean r0 = b(r1)
            if (r0 != 0) goto L9
            a(r1, r2)
        L9:
            java.security.cert.Certificate r1 = c(r1)
            if (r1 == 0) goto L14
            java.security.PublicKey r1 = r1.getPublicKey()
            return r1
        L14:
            r1 = 0
            return r1
    }

    private static boolean b(java.lang.String r4) {
            r0 = 0
            java.lang.String r1 = "AndroidKeyStore"
            java.security.KeyStore r1 = java.security.KeyStore.getInstance(r1)     // Catch: java.lang.Exception -> L13 java.io.IOException -> L30 java.security.NoSuchAlgorithmException -> L4c java.security.UnrecoverableKeyException -> L68 java.security.cert.CertificateException -> L84 java.security.KeyStoreException -> La0
            r2 = 0
            r1.load(r2)     // Catch: java.lang.Exception -> L13 java.io.IOException -> L30 java.security.NoSuchAlgorithmException -> L4c java.security.UnrecoverableKeyException -> L68 java.security.cert.CertificateException -> L84 java.security.KeyStoreException -> La0
            java.security.Key r4 = r1.getKey(r4, r2)     // Catch: java.lang.Exception -> L13 java.io.IOException -> L30 java.security.NoSuchAlgorithmException -> L4c java.security.UnrecoverableKeyException -> L68 java.security.cert.CertificateException -> L84 java.security.KeyStoreException -> La0
            if (r4 == 0) goto L12
            r0 = 1
        L12:
            return r0
        L13:
            r4 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Exception: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
            goto Lbb
        L30:
            r4 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "IOException: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
            goto Lbb
        L4c:
            r4 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "NoSuchAlgorithmException: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
            goto Lbb
        L68:
            r4 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "UnrecoverableKeyException: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
            goto Lbb
        L84:
            r4 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "CertificateException: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
            goto Lbb
        La0:
            r4 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "KeyStoreException: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
        Lbb:
            return r0
    }

    private static java.security.cert.Certificate c(java.lang.String r4) {
            r0 = 0
            java.lang.String r1 = "AndroidKeyStore"
            java.security.KeyStore r1 = java.security.KeyStore.getInstance(r1)     // Catch: java.lang.Exception -> L10 java.io.IOException -> L2c java.security.NoSuchAlgorithmException -> L48 java.security.cert.CertificateException -> L64 java.security.KeyStoreException -> L80
            r1.load(r0)     // Catch: java.lang.Exception -> L10 java.io.IOException -> L2c java.security.NoSuchAlgorithmException -> L48 java.security.cert.CertificateException -> L64 java.security.KeyStoreException -> L80
            java.security.cert.Certificate r0 = r1.getCertificate(r4)     // Catch: java.lang.Exception -> L10 java.io.IOException -> L2c java.security.NoSuchAlgorithmException -> L48 java.security.cert.CertificateException -> L64 java.security.KeyStoreException -> L80
            goto L9b
        L10:
            r4 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Exception: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
            goto L9b
        L2c:
            r4 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "IOException: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
            goto L9b
        L48:
            r4 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "NoSuchAlgorithmException: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
            goto L9b
        L64:
            r4 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "CertificateException: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
            goto L9b
        L80:
            r4 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "KeyStoreException: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
        L9b:
            return r0
    }

    @java.lang.Deprecated
    public static java.lang.String decrpyt(java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Exception -> L11 java.io.UnsupportedEncodingException -> L2d
            r1 = 0
            byte[] r3 = android.util.Base64.decode(r3, r1)     // Catch: java.lang.Exception -> L11 java.io.UnsupportedEncodingException -> L2d
            byte[] r2 = decrpyt(r2, r3)     // Catch: java.lang.Exception -> L11 java.io.UnsupportedEncodingException -> L2d
            java.lang.String r3 = "UTF-8"
            r0.<init>(r2, r3)     // Catch: java.lang.Exception -> L11 java.io.UnsupportedEncodingException -> L2d
            return r0
        L11:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Exception: "
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)
            goto L48
        L2d:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "UnsupportedEncodingException: "
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)
        L48:
            java.lang.String r2 = ""
            return r2
    }

    @java.lang.Deprecated
    public static byte[] decrpyt(java.lang.String r7, byte[] r8) {
            r0 = 0
            byte[] r0 = new byte[r0]
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 != 0) goto L110
            if (r8 != 0) goto Ld
            goto L110
        Ld:
            boolean r1 = a()
            if (r1 != 0) goto L1b
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.String r8 = "sdk version is too low"
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r8)
            return r0
        L1b:
            java.security.PrivateKey r7 = a(r7)
            if (r7 != 0) goto L29
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.String r8 = "Private key is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r8)
            return r0
        L29:
            java.lang.String r1 = "RSA/ECB/OAEPWithSHA-256AndMGF1Padding"
            javax.crypto.Cipher r1 = javax.crypto.Cipher.getInstance(r1)     // Catch: java.lang.Exception -> L4a javax.crypto.BadPaddingException -> L67 javax.crypto.IllegalBlockSizeException -> L84 java.security.InvalidAlgorithmParameterException -> La0 java.security.InvalidKeyException -> Lbc javax.crypto.NoSuchPaddingException -> Ld8 java.security.NoSuchAlgorithmException -> Lf4
            javax.crypto.spec.OAEPParameterSpec r2 = new javax.crypto.spec.OAEPParameterSpec     // Catch: java.lang.Exception -> L4a javax.crypto.BadPaddingException -> L67 javax.crypto.IllegalBlockSizeException -> L84 java.security.InvalidAlgorithmParameterException -> La0 java.security.InvalidKeyException -> Lbc javax.crypto.NoSuchPaddingException -> Ld8 java.security.NoSuchAlgorithmException -> Lf4
            java.lang.String r3 = "SHA-256"
            java.lang.String r4 = "MGF1"
            java.security.spec.MGF1ParameterSpec r5 = new java.security.spec.MGF1ParameterSpec     // Catch: java.lang.Exception -> L4a javax.crypto.BadPaddingException -> L67 javax.crypto.IllegalBlockSizeException -> L84 java.security.InvalidAlgorithmParameterException -> La0 java.security.InvalidKeyException -> Lbc javax.crypto.NoSuchPaddingException -> Ld8 java.security.NoSuchAlgorithmException -> Lf4
            java.lang.String r6 = "SHA-1"
            r5.<init>(r6)     // Catch: java.lang.Exception -> L4a javax.crypto.BadPaddingException -> L67 javax.crypto.IllegalBlockSizeException -> L84 java.security.InvalidAlgorithmParameterException -> La0 java.security.InvalidKeyException -> Lbc javax.crypto.NoSuchPaddingException -> Ld8 java.security.NoSuchAlgorithmException -> Lf4
            javax.crypto.spec.PSource$PSpecified r6 = javax.crypto.spec.PSource.PSpecified.DEFAULT     // Catch: java.lang.Exception -> L4a javax.crypto.BadPaddingException -> L67 javax.crypto.IllegalBlockSizeException -> L84 java.security.InvalidAlgorithmParameterException -> La0 java.security.InvalidKeyException -> Lbc javax.crypto.NoSuchPaddingException -> Ld8 java.security.NoSuchAlgorithmException -> Lf4
            r2.<init>(r3, r4, r5, r6)     // Catch: java.lang.Exception -> L4a javax.crypto.BadPaddingException -> L67 javax.crypto.IllegalBlockSizeException -> L84 java.security.InvalidAlgorithmParameterException -> La0 java.security.InvalidKeyException -> Lbc javax.crypto.NoSuchPaddingException -> Ld8 java.security.NoSuchAlgorithmException -> Lf4
            r3 = 2
            r1.init(r3, r7, r2)     // Catch: java.lang.Exception -> L4a javax.crypto.BadPaddingException -> L67 javax.crypto.IllegalBlockSizeException -> L84 java.security.InvalidAlgorithmParameterException -> La0 java.security.InvalidKeyException -> Lbc javax.crypto.NoSuchPaddingException -> Ld8 java.security.NoSuchAlgorithmException -> Lf4
            byte[] r7 = r1.doFinal(r8)     // Catch: java.lang.Exception -> L4a javax.crypto.BadPaddingException -> L67 javax.crypto.IllegalBlockSizeException -> L84 java.security.InvalidAlgorithmParameterException -> La0 java.security.InvalidKeyException -> Lbc javax.crypto.NoSuchPaddingException -> Ld8 java.security.NoSuchAlgorithmException -> Lf4
            return r7
        L4a:
            r7 = move-exception
            java.lang.String r8 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Exception: "
            r1.append(r2)
            java.lang.String r7 = r7.getMessage()
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r8, r7)
            goto L10f
        L67:
            r7 = move-exception
            java.lang.String r8 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "BadPaddingException: "
            r1.append(r2)
            java.lang.String r7 = r7.getMessage()
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r8, r7)
            goto L10f
        L84:
            r7 = move-exception
            java.lang.String r8 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "IllegalBlockSizeException: "
            r1.append(r2)
            java.lang.String r7 = r7.getMessage()
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r8, r7)
            goto L10f
        La0:
            r7 = move-exception
            java.lang.String r8 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "InvalidAlgorithmParameterException: "
            r1.append(r2)
            java.lang.String r7 = r7.getMessage()
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r8, r7)
            goto L10f
        Lbc:
            r7 = move-exception
            java.lang.String r8 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "InvalidKeyException: "
            r1.append(r2)
            java.lang.String r7 = r7.getMessage()
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r8, r7)
            goto L10f
        Ld8:
            r7 = move-exception
            java.lang.String r8 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "NoSuchPaddingException: "
            r1.append(r2)
            java.lang.String r7 = r7.getMessage()
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r8, r7)
            goto L10f
        Lf4:
            r7 = move-exception
            java.lang.String r8 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "NoSuchAlgorithmException: "
            r1.append(r2)
            java.lang.String r7 = r7.getMessage()
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r8, r7)
        L10f:
            return r0
        L110:
            java.lang.String r7 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.String r8 = "alias or encrypted content is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r7, r8)
            return r0
    }

    public static java.lang.String decrpytNew(java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Exception -> L11 java.io.UnsupportedEncodingException -> L2d
            r1 = 0
            byte[] r3 = android.util.Base64.decode(r3, r1)     // Catch: java.lang.Exception -> L11 java.io.UnsupportedEncodingException -> L2d
            byte[] r2 = decrpytNew(r2, r3)     // Catch: java.lang.Exception -> L11 java.io.UnsupportedEncodingException -> L2d
            java.lang.String r3 = "UTF-8"
            r0.<init>(r2, r3)     // Catch: java.lang.Exception -> L11 java.io.UnsupportedEncodingException -> L2d
            return r0
        L11:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Exception: "
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)
            goto L48
        L2d:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "UnsupportedEncodingException: "
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)
        L48:
            java.lang.String r2 = ""
            return r2
    }

    public static byte[] decrpytNew(java.lang.String r0, byte[] r1) {
            byte[] r0 = decrpyt(r0, r1)
            return r0
    }

    @java.lang.Deprecated
    public static java.lang.String encrypt(java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L31
            java.lang.String r0 = "UTF-8"
            byte[] r3 = r3.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L16
            byte[] r2 = encrypt(r2, r3)     // Catch: java.io.UnsupportedEncodingException -> L16
            r3 = 0
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)     // Catch: java.io.UnsupportedEncodingException -> L16
            return r2
        L16:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "UnsupportedEncodingException: "
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)
        L31:
            java.lang.String r2 = ""
            return r2
    }

    @java.lang.Deprecated
    public static byte[] encrypt(java.lang.String r1, byte[] r2) {
            r0 = 0
            byte[] r1 = a(r1, r2, r0)
            return r1
    }

    public static java.lang.String encryptNew(java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L31
            java.lang.String r0 = "UTF-8"
            byte[] r3 = r3.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L16
            byte[] r2 = encryptNew(r2, r3)     // Catch: java.io.UnsupportedEncodingException -> L16
            r3 = 0
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)     // Catch: java.io.UnsupportedEncodingException -> L16
            return r2
        L16:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSAEncryptKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "UnsupportedEncodingException: "
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)
        L31:
            java.lang.String r2 = ""
            return r2
    }

    public static byte[] encryptNew(java.lang.String r1, byte[] r2) {
            r0 = 1
            byte[] r1 = a(r1, r2, r0)
            return r1
    }
}

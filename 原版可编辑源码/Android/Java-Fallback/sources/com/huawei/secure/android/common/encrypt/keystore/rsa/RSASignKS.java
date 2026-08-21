package com.huawei.secure.android.common.encrypt.keystore.rsa;

public abstract class RSASignKS {
    private static final java.lang.String a = "RSASignKS";
    private static final java.lang.String b = "AndroidKeyStore";
    private static final java.lang.String c = "SHA256withRSA/PSS";
    private static final java.lang.String d = "";
    private static final int e = 2048;
    private static final int f = 3072;

    static {
            return
    }

    public RSASignKS() {
            r0 = this;
            r0.<init>()
            return
    }

    private static synchronized java.security.KeyPair a(java.lang.String r4, boolean r5) {
            java.lang.Class<com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS> r0 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.class
            monitor-enter(r0)
            boolean r1 = a(r4)     // Catch: java.lang.Throwable -> Lca
            r2 = 0
            if (r1 == 0) goto L13
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a     // Catch: java.lang.Throwable -> Lca
            java.lang.String r5 = "Key pair exits"
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r5)     // Catch: java.lang.Throwable -> Lca
            monitor-exit(r0)
            return r2
        L13:
            java.lang.String r1 = "RSA"
            java.lang.String r3 = "AndroidKeyStore"
            java.security.KeyPairGenerator r1 = java.security.KeyPairGenerator.getInstance(r1, r3)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 java.security.NoSuchProviderException -> L91 java.security.NoSuchAlgorithmException -> Lad java.lang.Throwable -> Lca
            r3 = 12
            if (r5 != 0) goto L48
            android.security.keystore.KeyGenParameterSpec$Builder r5 = new android.security.keystore.KeyGenParameterSpec$Builder     // Catch: java.security.InvalidAlgorithmParameterException -> L75 java.security.NoSuchProviderException -> L91 java.security.NoSuchAlgorithmException -> Lad java.lang.Throwable -> Lca
            r5.<init>(r4, r3)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 java.security.NoSuchProviderException -> L91 java.security.NoSuchAlgorithmException -> Lad java.lang.Throwable -> Lca
            java.lang.String r4 = "SHA-256"
            java.lang.String r3 = "SHA-512"
            java.lang.String[] r4 = new java.lang.String[]{r4, r3}     // Catch: java.security.InvalidAlgorithmParameterException -> L75 java.security.NoSuchProviderException -> L91 java.security.NoSuchAlgorithmException -> Lad java.lang.Throwable -> Lca
            android.security.keystore.KeyGenParameterSpec$Builder r4 = r5.setDigests(r4)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 java.security.NoSuchProviderException -> L91 java.security.NoSuchAlgorithmException -> Lad java.lang.Throwable -> Lca
            java.lang.String r5 = "PSS"
            java.lang.String[] r5 = new java.lang.String[]{r5}     // Catch: java.security.InvalidAlgorithmParameterException -> L75 java.security.NoSuchProviderException -> L91 java.security.NoSuchAlgorithmException -> Lad java.lang.Throwable -> Lca
            android.security.keystore.KeyGenParameterSpec$Builder r4 = r4.setSignaturePaddings(r5)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 java.security.NoSuchProviderException -> L91 java.security.NoSuchAlgorithmException -> Lad java.lang.Throwable -> Lca
            r5 = 2048(0x800, float:2.87E-42)
            android.security.keystore.KeyGenParameterSpec$Builder r4 = r4.setKeySize(r5)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 java.security.NoSuchProviderException -> L91 java.security.NoSuchAlgorithmException -> Lad java.lang.Throwable -> Lca
            android.security.keystore.KeyGenParameterSpec r4 = r4.build()     // Catch: java.security.InvalidAlgorithmParameterException -> L75 java.security.NoSuchProviderException -> L91 java.security.NoSuchAlgorithmException -> Lad java.lang.Throwable -> Lca
            r1.initialize(r4)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 java.security.NoSuchProviderException -> L91 java.security.NoSuchAlgorithmException -> Lad java.lang.Throwable -> Lca
            goto L70
        L48:
            android.security.keystore.KeyGenParameterSpec$Builder r5 = new android.security.keystore.KeyGenParameterSpec$Builder     // Catch: java.security.InvalidAlgorithmParameterException -> L75 java.security.NoSuchProviderException -> L91 java.security.NoSuchAlgorithmException -> Lad java.lang.Throwable -> Lca
            r5.<init>(r4, r3)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 java.security.NoSuchProviderException -> L91 java.security.NoSuchAlgorithmException -> Lad java.lang.Throwable -> Lca
            java.lang.String r4 = "SHA-256"
            java.lang.String r3 = "SHA-512"
            java.lang.String[] r4 = new java.lang.String[]{r4, r3}     // Catch: java.security.InvalidAlgorithmParameterException -> L75 java.security.NoSuchProviderException -> L91 java.security.NoSuchAlgorithmException -> Lad java.lang.Throwable -> Lca
            android.security.keystore.KeyGenParameterSpec$Builder r4 = r5.setDigests(r4)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 java.security.NoSuchProviderException -> L91 java.security.NoSuchAlgorithmException -> Lad java.lang.Throwable -> Lca
            java.lang.String r5 = "PSS"
            java.lang.String[] r5 = new java.lang.String[]{r5}     // Catch: java.security.InvalidAlgorithmParameterException -> L75 java.security.NoSuchProviderException -> L91 java.security.NoSuchAlgorithmException -> Lad java.lang.Throwable -> Lca
            android.security.keystore.KeyGenParameterSpec$Builder r4 = r4.setSignaturePaddings(r5)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 java.security.NoSuchProviderException -> L91 java.security.NoSuchAlgorithmException -> Lad java.lang.Throwable -> Lca
            r5 = 3072(0xc00, float:4.305E-42)
            android.security.keystore.KeyGenParameterSpec$Builder r4 = r4.setKeySize(r5)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 java.security.NoSuchProviderException -> L91 java.security.NoSuchAlgorithmException -> Lad java.lang.Throwable -> Lca
            android.security.keystore.KeyGenParameterSpec r4 = r4.build()     // Catch: java.security.InvalidAlgorithmParameterException -> L75 java.security.NoSuchProviderException -> L91 java.security.NoSuchAlgorithmException -> Lad java.lang.Throwable -> Lca
            r1.initialize(r4)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 java.security.NoSuchProviderException -> L91 java.security.NoSuchAlgorithmException -> Lad java.lang.Throwable -> Lca
        L70:
            java.security.KeyPair r2 = r1.generateKeyPair()     // Catch: java.security.InvalidAlgorithmParameterException -> L75 java.security.NoSuchProviderException -> L91 java.security.NoSuchAlgorithmException -> Lad java.lang.Throwable -> Lca
            goto Lc8
        L75:
            r4 = move-exception
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a     // Catch: java.lang.Throwable -> Lca
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lca
            r1.<init>()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r3 = "InvalidAlgorithmParameterException: "
            r1.append(r3)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> Lca
            r1.append(r4)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> Lca
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r4)     // Catch: java.lang.Throwable -> Lca
            goto Lc8
        L91:
            r4 = move-exception
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a     // Catch: java.lang.Throwable -> Lca
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lca
            r1.<init>()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r3 = "NoSuchProviderException: "
            r1.append(r3)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> Lca
            r1.append(r4)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> Lca
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r4)     // Catch: java.lang.Throwable -> Lca
            goto Lc8
        Lad:
            r4 = move-exception
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a     // Catch: java.lang.Throwable -> Lca
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lca
            r1.<init>()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r3 = "NoSuchAlgorithmException: "
            r1.append(r3)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> Lca
            r1.append(r4)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> Lca
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r4)     // Catch: java.lang.Throwable -> Lca
        Lc8:
            monitor-exit(r0)
            return r2
        Lca:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    private static boolean a(java.lang.String r4) {
            r0 = 0
            java.lang.String r1 = "AndroidKeyStore"
            java.security.KeyStore r1 = java.security.KeyStore.getInstance(r1)     // Catch: java.io.IOException -> L13 java.security.NoSuchAlgorithmException -> L2f java.security.UnrecoverableKeyException -> L4b java.security.cert.CertificateException -> L67 java.security.KeyStoreException -> L83
            r2 = 0
            r1.load(r2)     // Catch: java.io.IOException -> L13 java.security.NoSuchAlgorithmException -> L2f java.security.UnrecoverableKeyException -> L4b java.security.cert.CertificateException -> L67 java.security.KeyStoreException -> L83
            java.security.Key r4 = r1.getKey(r4, r2)     // Catch: java.io.IOException -> L13 java.security.NoSuchAlgorithmException -> L2f java.security.UnrecoverableKeyException -> L4b java.security.cert.CertificateException -> L67 java.security.KeyStoreException -> L83
            if (r4 == 0) goto L12
            r0 = 1
        L12:
            return r0
        L13:
            r4 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "IOException: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
            goto L9e
        L2f:
            r4 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "NoSuchAlgorithmException: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
            goto L9e
        L4b:
            r4 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "UnrecoverableKeyException: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
            goto L9e
        L67:
            r4 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "CertificateException: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
            goto L9e
        L83:
            r4 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "KeyStoreException: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
        L9e:
            return r0
    }

    private static boolean a(java.lang.String r2, byte[] r3, byte[] r4, boolean r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 != 0) goto Lb2
            if (r3 == 0) goto Lb2
            if (r4 != 0) goto Ld
            goto Lb2
        Ld:
            boolean r0 = isBuildVersionHigherThan22()
            if (r0 != 0) goto L1b
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.String r3 = "sdk version is too low"
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
            return r1
        L1b:
            java.security.KeyStore$Entry r2 = b(r2, r5)
            boolean r5 = r2 instanceof java.security.KeyStore.PrivateKeyEntry
            if (r5 != 0) goto L2b
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.String r3 = "Not an instance of a PrivateKeyEntry"
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
            return r1
        L2b:
            java.lang.String r5 = "SHA256withRSA/PSS"
            java.security.Signature r5 = java.security.Signature.getInstance(r5)     // Catch: java.lang.Exception -> L42 java.security.InvalidKeyException -> L5e java.security.SignatureException -> L7a java.security.NoSuchAlgorithmException -> L96
            java.security.KeyStore$PrivateKeyEntry r2 = (java.security.KeyStore.PrivateKeyEntry) r2     // Catch: java.lang.Exception -> L42 java.security.InvalidKeyException -> L5e java.security.SignatureException -> L7a java.security.NoSuchAlgorithmException -> L96
            java.security.cert.Certificate r2 = r2.getCertificate()     // Catch: java.lang.Exception -> L42 java.security.InvalidKeyException -> L5e java.security.SignatureException -> L7a java.security.NoSuchAlgorithmException -> L96
            r5.initVerify(r2)     // Catch: java.lang.Exception -> L42 java.security.InvalidKeyException -> L5e java.security.SignatureException -> L7a java.security.NoSuchAlgorithmException -> L96
            r5.update(r3)     // Catch: java.lang.Exception -> L42 java.security.InvalidKeyException -> L5e java.security.SignatureException -> L7a java.security.NoSuchAlgorithmException -> L96
            boolean r1 = r5.verify(r4)     // Catch: java.lang.Exception -> L42 java.security.InvalidKeyException -> L5e java.security.SignatureException -> L7a java.security.NoSuchAlgorithmException -> L96
            goto Lb1
        L42:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Exception: "
            r4.append(r5)
            java.lang.String r2 = r2.getMessage()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)
            goto Lb1
        L5e:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "InvalidKeyException: "
            r4.append(r5)
            java.lang.String r2 = r2.getMessage()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)
            goto Lb1
        L7a:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "SignatureException: "
            r4.append(r5)
            java.lang.String r2 = r2.getMessage()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)
            goto Lb1
        L96:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "NoSuchAlgorithmException: "
            r4.append(r5)
            java.lang.String r2 = r2.getMessage()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)
        Lb1:
            return r1
        Lb2:
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.String r3 = "alias or content or sign value is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
            return r1
    }

    private static byte[] a(java.lang.String r2, byte[] r3, boolean r4) {
            r0 = 0
            byte[] r0 = new byte[r0]
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto Lb2
            if (r3 != 0) goto Ld
            goto Lb2
        Ld:
            boolean r1 = isBuildVersionHigherThan22()
            if (r1 != 0) goto L1b
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.String r3 = "sdk version is too low"
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
            return r0
        L1b:
            java.security.KeyStore$Entry r2 = b(r2, r4)
            boolean r4 = r2 instanceof java.security.KeyStore.PrivateKeyEntry
            if (r4 != 0) goto L2b
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.String r3 = "Not an instance of a PrivateKeyEntry"
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
            return r0
        L2b:
            java.lang.String r4 = "SHA256withRSA/PSS"
            java.security.Signature r4 = java.security.Signature.getInstance(r4)     // Catch: java.lang.Exception -> L42 java.security.InvalidKeyException -> L5e java.security.SignatureException -> L7a java.security.NoSuchAlgorithmException -> L96
            java.security.KeyStore$PrivateKeyEntry r2 = (java.security.KeyStore.PrivateKeyEntry) r2     // Catch: java.lang.Exception -> L42 java.security.InvalidKeyException -> L5e java.security.SignatureException -> L7a java.security.NoSuchAlgorithmException -> L96
            java.security.PrivateKey r2 = r2.getPrivateKey()     // Catch: java.lang.Exception -> L42 java.security.InvalidKeyException -> L5e java.security.SignatureException -> L7a java.security.NoSuchAlgorithmException -> L96
            r4.initSign(r2)     // Catch: java.lang.Exception -> L42 java.security.InvalidKeyException -> L5e java.security.SignatureException -> L7a java.security.NoSuchAlgorithmException -> L96
            r4.update(r3)     // Catch: java.lang.Exception -> L42 java.security.InvalidKeyException -> L5e java.security.SignatureException -> L7a java.security.NoSuchAlgorithmException -> L96
            byte[] r2 = r4.sign()     // Catch: java.lang.Exception -> L42 java.security.InvalidKeyException -> L5e java.security.SignatureException -> L7a java.security.NoSuchAlgorithmException -> L96
            return r2
        L42:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "Exception: "
            r4.append(r1)
            java.lang.String r2 = r2.getMessage()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)
            goto Lb1
        L5e:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "InvalidKeyException: "
            r4.append(r1)
            java.lang.String r2 = r2.getMessage()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)
            goto Lb1
        L7a:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "SignatureException: "
            r4.append(r1)
            java.lang.String r2 = r2.getMessage()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)
            goto Lb1
        L96:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "NoSuchAlgorithmException: "
            r4.append(r1)
            java.lang.String r2 = r2.getMessage()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)
        Lb1:
            return r0
        Lb2:
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.String r3 = "alias or content is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
            return r0
    }

    private static java.security.KeyStore.Entry b(java.lang.String r3, boolean r4) {
            boolean r0 = a(r3)
            if (r0 != 0) goto L9
            a(r3, r4)
        L9:
            r4 = 0
            java.lang.String r0 = "AndroidKeyStore"
            java.security.KeyStore r0 = java.security.KeyStore.getInstance(r0)     // Catch: java.security.UnrecoverableEntryException -> L19 java.io.IOException -> L35 java.security.NoSuchAlgorithmException -> L51 java.security.cert.CertificateException -> L6d java.security.KeyStoreException -> L89
            r0.load(r4)     // Catch: java.security.UnrecoverableEntryException -> L19 java.io.IOException -> L35 java.security.NoSuchAlgorithmException -> L51 java.security.cert.CertificateException -> L6d java.security.KeyStoreException -> L89
            java.security.KeyStore$Entry r4 = r0.getEntry(r3, r4)     // Catch: java.security.UnrecoverableEntryException -> L19 java.io.IOException -> L35 java.security.NoSuchAlgorithmException -> L51 java.security.cert.CertificateException -> L6d java.security.KeyStoreException -> L89
            goto La4
        L19:
            r3 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "UnrecoverableEntryException: "
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r3)
            goto La4
        L35:
            r3 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "IOException: "
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r3)
            goto La4
        L51:
            r3 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "NoSuchAlgorithmException: "
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r3)
            goto La4
        L6d:
            r3 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "CertificateException: "
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r3)
            goto La4
        L89:
            r3 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "KeyStoreException: "
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r3)
        La4:
            return r4
    }

    public static boolean isBuildVersionHigherThan22() {
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

    @java.lang.Deprecated
    public static java.lang.String sign(java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = "UTF-8"
            byte[] r3 = r3.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L10
            byte[] r2 = sign(r2, r3)     // Catch: java.io.UnsupportedEncodingException -> L10
            r3 = 0
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)     // Catch: java.io.UnsupportedEncodingException -> L10
            return r2
        L10:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "sign UnsupportedEncodingException : "
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            android.util.Log.e(r3, r2)
            java.lang.String r2 = ""
            return r2
    }

    @java.lang.Deprecated
    public static byte[] sign(java.lang.String r1, byte[] r2) {
            r0 = 0
            byte[] r1 = a(r1, r2, r0)
            return r1
    }

    public static java.lang.String signNew(java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = "UTF-8"
            byte[] r3 = r3.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L10
            byte[] r2 = signNew(r2, r3)     // Catch: java.io.UnsupportedEncodingException -> L10
            r3 = 0
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)     // Catch: java.io.UnsupportedEncodingException -> L10
            return r2
        L10:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "sign UnsupportedEncodingException : "
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            android.util.Log.e(r3, r2)
            java.lang.String r2 = ""
            return r2
    }

    public static byte[] signNew(java.lang.String r1, byte[] r2) {
            r0 = 1
            byte[] r1 = a(r1, r2, r0)
            return r1
    }

    @java.lang.Deprecated
    public static boolean verifySign(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = 0
            java.lang.String r1 = "UTF-8"
            byte[] r3 = r3.getBytes(r1)     // Catch: java.lang.Exception -> L10 java.io.UnsupportedEncodingException -> L2c
            byte[] r4 = android.util.Base64.decode(r4, r0)     // Catch: java.lang.Exception -> L10 java.io.UnsupportedEncodingException -> L2c
            boolean r2 = verifySign(r2, r3, r4)     // Catch: java.lang.Exception -> L10 java.io.UnsupportedEncodingException -> L2c
            return r2
        L10:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "base64 decode Exception"
            r4.append(r1)
            java.lang.String r2 = r2.getMessage()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)
            goto L47
        L2c:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "verifySign UnsupportedEncodingException: "
            r4.append(r1)
            java.lang.String r2 = r2.getMessage()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            android.util.Log.e(r3, r2)
        L47:
            return r0
    }

    @java.lang.Deprecated
    public static boolean verifySign(java.lang.String r1, byte[] r2, byte[] r3) {
            r0 = 0
            boolean r1 = a(r1, r2, r3, r0)
            return r1
    }

    public static boolean verifySignNew(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = 0
            java.lang.String r1 = "UTF-8"
            byte[] r3 = r3.getBytes(r1)     // Catch: java.lang.Exception -> L10 java.io.UnsupportedEncodingException -> L2c
            byte[] r4 = android.util.Base64.decode(r4, r0)     // Catch: java.lang.Exception -> L10 java.io.UnsupportedEncodingException -> L2c
            boolean r2 = verifySignNew(r2, r3, r4)     // Catch: java.lang.Exception -> L10 java.io.UnsupportedEncodingException -> L2c
            return r2
        L10:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "base64 decode Exception"
            r4.append(r1)
            java.lang.String r2 = r2.getMessage()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)
            goto L47
        L2c:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.keystore.rsa.RSASignKS.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "verifySign UnsupportedEncodingException: "
            r4.append(r1)
            java.lang.String r2 = r2.getMessage()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            android.util.Log.e(r3, r2)
        L47:
            return r0
    }

    public static boolean verifySignNew(java.lang.String r1, byte[] r2, byte[] r3) {
            r0 = 1
            boolean r1 = a(r1, r2, r3, r0)
            return r1
    }
}

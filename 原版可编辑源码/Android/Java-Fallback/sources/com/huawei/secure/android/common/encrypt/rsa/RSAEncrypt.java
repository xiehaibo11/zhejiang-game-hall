package com.huawei.secure.android.common.encrypt.rsa;

public abstract class RSAEncrypt {
    private static final java.lang.String a = "RSA/ECB/OAEPWithSHA-256AndMGF1Padding";
    private static final java.lang.String b = "RSAEncrypt";
    private static final java.lang.String c = "UTF-8";
    private static final java.lang.String d = "";
    private static final int e = 2048;
    private static final java.lang.String f = "RSA";

    public RSAEncrypt() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String decrypt(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L16
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Ld
            goto L16
        Ld:
            java.security.PrivateKey r2 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.getPrivateKey(r2)
            java.lang.String r1 = decrypt(r1, r2)
            return r1
        L16:
            java.lang.String r1 = "RSAEncrypt"
            java.lang.String r2 = "content or private key is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r2)
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String decrypt(java.lang.String r4, java.security.PrivateKey r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            java.lang.String r1 = ""
            java.lang.String r2 = "RSAEncrypt"
            if (r0 != 0) goto L5b
            if (r5 == 0) goto L5b
            r0 = r5
            java.security.interfaces.RSAPrivateKey r0 = (java.security.interfaces.RSAPrivateKey) r0
            boolean r0 = isPrivateKeyLengthRight(r0)
            if (r0 != 0) goto L16
            goto L5b
        L16:
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Exception -> L27 java.io.UnsupportedEncodingException -> L41
            r3 = 0
            byte[] r4 = android.util.Base64.decode(r4, r3)     // Catch: java.lang.Exception -> L27 java.io.UnsupportedEncodingException -> L41
            byte[] r4 = decrypt(r4, r5)     // Catch: java.lang.Exception -> L27 java.io.UnsupportedEncodingException -> L41
            java.lang.String r5 = "UTF-8"
            r0.<init>(r4, r5)     // Catch: java.lang.Exception -> L27 java.io.UnsupportedEncodingException -> L41
            return r0
        L27:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "exception : "
            r5.append(r0)
            java.lang.String r4 = r4.getMessage()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r4)
            goto L5a
        L41:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "RSA decrypt exception : "
            r5.append(r0)
            java.lang.String r4 = r4.getMessage()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r4)
        L5a:
            return r1
        L5b:
            java.lang.String r4 = "content or privateKey is null , or length is too short"
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r4)
            return r1
    }

    public static byte[] decrypt(byte[] r4, java.security.PrivateKey r5) {
            r0 = 0
            byte[] r0 = new byte[r0]
            java.lang.String r1 = "RSAEncrypt"
            if (r4 == 0) goto L3c
            if (r5 == 0) goto L3c
            r2 = r5
            java.security.interfaces.RSAPrivateKey r2 = (java.security.interfaces.RSAPrivateKey) r2
            boolean r2 = isPrivateKeyLengthRight(r2)
            if (r2 != 0) goto L13
            goto L3c
        L13:
            java.lang.String r2 = "RSA/ECB/OAEPWithSHA-256AndMGF1Padding"
            javax.crypto.Cipher r2 = javax.crypto.Cipher.getInstance(r2)     // Catch: java.security.GeneralSecurityException -> L22
            r3 = 2
            r2.init(r3, r5)     // Catch: java.security.GeneralSecurityException -> L22
            byte[] r0 = r2.doFinal(r4)     // Catch: java.security.GeneralSecurityException -> L22
            goto L3b
        L22:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r2 = "RSA decrypt exception : "
            r5.append(r2)
            java.lang.String r4 = r4.getMessage()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
        L3b:
            return r0
        L3c:
            java.lang.String r4 = "content or privateKey is null , or length is too short"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
            return r0
    }

    public static java.lang.String encrypt(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L16
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Ld
            goto L16
        Ld:
            java.security.interfaces.RSAPublicKey r2 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.getPublicKey(r2)
            java.lang.String r1 = encrypt(r1, r2)
            return r1
        L16:
            java.lang.String r1 = "RSAEncrypt"
            java.lang.String r2 = "content or public key is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r2)
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String encrypt(java.lang.String r3, java.security.PublicKey r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            java.lang.String r2 = "RSAEncrypt"
            if (r0 != 0) goto L46
            if (r4 == 0) goto L46
            r0 = r4
            java.security.interfaces.RSAPublicKey r0 = (java.security.interfaces.RSAPublicKey) r0
            boolean r0 = isPublicKeyLengthRight(r0)
            if (r0 != 0) goto L16
            goto L46
        L16:
            java.lang.String r0 = "UTF-8"
            byte[] r3 = r3.getBytes(r0)     // Catch: java.lang.Exception -> L26 java.io.UnsupportedEncodingException -> L40
            byte[] r3 = encrypt(r3, r4)     // Catch: java.lang.Exception -> L26 java.io.UnsupportedEncodingException -> L40
            r4 = 0
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r4)     // Catch: java.lang.Exception -> L26 java.io.UnsupportedEncodingException -> L40
            return r3
        L26:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "exception : "
            r4.append(r0)
            java.lang.String r3 = r3.getMessage()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
            goto L45
        L40:
            java.lang.String r3 = "encrypt: UnsupportedEncodingException"
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
        L45:
            return r1
        L46:
            java.lang.String r3 = "content or PublicKey is null , or length is too short"
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
            return r1
    }

    public static byte[] encrypt(byte[] r4, java.security.PublicKey r5) {
            r0 = 0
            byte[] r0 = new byte[r0]
            java.lang.String r1 = "RSAEncrypt"
            if (r4 == 0) goto L3c
            if (r5 == 0) goto L3c
            r2 = r5
            java.security.interfaces.RSAPublicKey r2 = (java.security.interfaces.RSAPublicKey) r2
            boolean r2 = isPublicKeyLengthRight(r2)
            if (r2 != 0) goto L13
            goto L3c
        L13:
            java.lang.String r2 = "RSA/ECB/OAEPWithSHA-256AndMGF1Padding"
            javax.crypto.Cipher r2 = javax.crypto.Cipher.getInstance(r2)     // Catch: java.security.GeneralSecurityException -> L22
            r3 = 1
            r2.init(r3, r5)     // Catch: java.security.GeneralSecurityException -> L22
            byte[] r4 = r2.doFinal(r4)     // Catch: java.security.GeneralSecurityException -> L22
            return r4
        L22:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r2 = "RSA encrypt exception : "
            r5.append(r2)
            java.lang.String r4 = r4.getMessage()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
            return r0
        L3c:
            java.lang.String r4 = "content or PublicKey is null , or length is too short"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
            return r0
    }

    public static java.util.Map<java.lang.String, java.security.Key> generateRSAKeyPair(int r3) throws java.security.NoSuchAlgorithmException {
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 2
            r0.<init>(r1)
            r1 = 2048(0x800, float:2.87E-42)
            if (r3 >= r1) goto L12
            java.lang.String r3 = "RSAEncrypt"
            java.lang.String r1 = "generateRSAKeyPair: key length is too short"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r1)
            return r0
        L12:
            java.security.SecureRandom r1 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.genSecureRandom()
            java.lang.String r2 = "RSA"
            java.security.KeyPairGenerator r2 = java.security.KeyPairGenerator.getInstance(r2)
            r2.initialize(r3, r1)
            java.security.KeyPair r3 = r2.generateKeyPair()
            java.security.PublicKey r1 = r3.getPublic()
            java.security.PrivateKey r3 = r3.getPrivate()
            java.lang.String r2 = "publicKey"
            r0.put(r2, r1)
            java.lang.String r1 = "privateKey"
            r0.put(r1, r3)
            return r0
    }

    public static boolean isPrivateKeyLengthRight(java.security.interfaces.RSAPrivateKey r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.math.BigInteger r2 = r2.getModulus()
            int r2 = r2.bitLength()
            r1 = 2048(0x800, float:2.87E-42)
            if (r2 < r1) goto L11
            r0 = 1
        L11:
            return r0
    }

    public static boolean isPublicKeyLengthRight(java.security.interfaces.RSAPublicKey r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.math.BigInteger r2 = r2.getModulus()
            int r2 = r2.bitLength()
            r1 = 2048(0x800, float:2.87E-42)
            if (r2 < r1) goto L11
            r0 = 1
        L11:
            return r0
    }
}

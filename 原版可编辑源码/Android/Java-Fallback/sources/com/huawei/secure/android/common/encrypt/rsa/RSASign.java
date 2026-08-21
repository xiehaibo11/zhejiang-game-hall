package com.huawei.secure.android.common.encrypt.rsa;

public abstract class RSASign {
    private static final java.lang.String a = "SHA256WithRSA";
    private static final java.lang.String b = "SHA256WithRSA/PSS";
    private static final java.lang.String c = "RSASign";
    private static final java.lang.String d = "UTF-8";
    private static final java.lang.String e = "";

    static {
            return
    }

    public RSASign() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(java.lang.String r1, java.lang.String r2, boolean r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L1d
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Ld
            goto L1d
        Ld:
            java.security.PrivateKey r2 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.getPrivateKey(r2)
            if (r3 == 0) goto L18
            java.lang.String r1 = newSign(r1, r2)
            return r1
        L18:
            java.lang.String r1 = sign(r1, r2)
            return r1
        L1d:
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.rsa.RSASign.c
            java.lang.String r2 = "sign content or key is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r2)
            java.lang.String r1 = ""
            return r1
    }

    private static java.lang.String a(java.lang.String r1, java.security.PrivateKey r2, boolean r3) {
            java.lang.String r0 = "UTF-8"
            byte[] r1 = r1.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L10
            byte[] r1 = sign(r1, r2, r3)     // Catch: java.io.UnsupportedEncodingException -> L10
            r2 = 0
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> L10
            return r1
        L10:
            r1 = move-exception
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.rsa.RSASign.c
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "sign UnsupportedEncodingException: "
            r3.append(r0)
            java.lang.String r1 = r1.getMessage()
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r1)
            java.lang.String r1 = ""
            return r1
    }

    private static boolean a(java.lang.String r1, java.lang.String r2, java.lang.String r3, boolean r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L23
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L23
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L13
            goto L23
        L13:
            java.security.interfaces.RSAPublicKey r3 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.getPublicKey(r3)
            if (r4 == 0) goto L1e
            boolean r1 = newVerifySign(r1, r2, r3)
            return r1
        L1e:
            boolean r1 = verifySign(r1, r2, r3)
            return r1
        L23:
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.rsa.RSASign.c
            java.lang.String r2 = "content or public key or sign value is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r2)
            r1 = 0
            return r1
    }

    private static boolean a(java.lang.String r2, java.lang.String r3, java.security.PublicKey r4, boolean r5) {
            r0 = 0
            java.lang.String r1 = "UTF-8"
            byte[] r2 = r2.getBytes(r1)     // Catch: java.lang.Exception -> L10 java.io.UnsupportedEncodingException -> L2c
            byte[] r3 = android.util.Base64.decode(r3, r0)     // Catch: java.lang.Exception -> L10 java.io.UnsupportedEncodingException -> L2c
            boolean r2 = verifySign(r2, r3, r4, r5)     // Catch: java.lang.Exception -> L10 java.io.UnsupportedEncodingException -> L2c
            return r2
        L10:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.rsa.RSASign.c
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "base64 decode Exception : "
            r4.append(r5)
            java.lang.String r2 = r2.getMessage()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)
            goto L47
        L2c:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.rsa.RSASign.c
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "verifySign UnsupportedEncodingException: "
            r4.append(r5)
            java.lang.String r2 = r2.getMessage()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)
        L47:
            return r0
    }

    public static boolean isBuildVersionHigherThan23() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 <= r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static java.lang.String newSign(java.lang.String r1, java.lang.String r2) {
            boolean r0 = isBuildVersionHigherThan23()
            if (r0 != 0) goto L10
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.rsa.RSASign.c
            java.lang.String r2 = "sdk version is too low"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r2)
            java.lang.String r1 = ""
            return r1
        L10:
            r0 = 1
            java.lang.String r1 = a(r1, r2, r0)
            return r1
    }

    public static java.lang.String newSign(java.lang.String r1, java.security.PrivateKey r2) {
            boolean r0 = isBuildVersionHigherThan23()
            if (r0 != 0) goto L10
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.rsa.RSASign.c
            java.lang.String r2 = "sdk version is too low"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r2)
            java.lang.String r1 = ""
            return r1
        L10:
            r0 = 1
            java.lang.String r1 = a(r1, r2, r0)
            return r1
    }

    public static boolean newVerifySign(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            boolean r0 = isBuildVersionHigherThan23()
            if (r0 != 0) goto Lf
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.rsa.RSASign.c
            java.lang.String r2 = "sdk version is too low"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r2)
            r1 = 0
            return r1
        Lf:
            r0 = 1
            boolean r1 = a(r1, r2, r3, r0)
            return r1
    }

    public static boolean newVerifySign(java.lang.String r1, java.lang.String r2, java.security.PublicKey r3) {
            boolean r0 = isBuildVersionHigherThan23()
            if (r0 != 0) goto Lf
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.rsa.RSASign.c
            java.lang.String r2 = "sdk version is too low"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r2)
            r1 = 0
            return r1
        Lf:
            r0 = 1
            boolean r1 = a(r1, r2, r3, r0)
            return r1
    }

    @java.lang.Deprecated
    public static java.lang.String sign(java.lang.String r1, java.lang.String r2) {
            r0 = 0
            java.lang.String r1 = a(r1, r2, r0)
            return r1
    }

    @java.lang.Deprecated
    public static java.lang.String sign(java.lang.String r1, java.security.PrivateKey r2) {
            r0 = 0
            java.lang.String r1 = a(r1, r2, r0)
            return r1
    }

    public static byte[] sign(byte[] r8, java.security.PrivateKey r9, boolean r10) {
            r0 = 0
            byte[] r0 = new byte[r0]
            if (r8 == 0) goto Lcb
            if (r9 == 0) goto Lcb
            r1 = r9
            java.security.interfaces.RSAPrivateKey r1 = (java.security.interfaces.RSAPrivateKey) r1
            boolean r1 = com.huawei.secure.android.common.encrypt.rsa.RSAEncrypt.isPrivateKeyLengthRight(r1)
            if (r1 != 0) goto L12
            goto Lcb
        L12:
            if (r10 == 0) goto L2d
            java.lang.String r10 = "SHA256WithRSA/PSS"
            java.security.Signature r10 = java.security.Signature.getInstance(r10)     // Catch: java.lang.Exception -> L3f java.security.InvalidAlgorithmParameterException -> L5b java.security.SignatureException -> L77 java.security.InvalidKeyException -> L93 java.security.NoSuchAlgorithmException -> Laf
            java.security.spec.PSSParameterSpec r7 = new java.security.spec.PSSParameterSpec     // Catch: java.lang.Exception -> L3f java.security.InvalidAlgorithmParameterException -> L5b java.security.SignatureException -> L77 java.security.InvalidKeyException -> L93 java.security.NoSuchAlgorithmException -> Laf
            java.lang.String r2 = "SHA-256"
            java.lang.String r3 = "MGF1"
            java.security.spec.MGF1ParameterSpec r4 = java.security.spec.MGF1ParameterSpec.SHA256     // Catch: java.lang.Exception -> L3f java.security.InvalidAlgorithmParameterException -> L5b java.security.SignatureException -> L77 java.security.InvalidKeyException -> L93 java.security.NoSuchAlgorithmException -> Laf
            r5 = 32
            r6 = 1
            r1 = r7
            r1.<init>(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L3f java.security.InvalidAlgorithmParameterException -> L5b java.security.SignatureException -> L77 java.security.InvalidKeyException -> L93 java.security.NoSuchAlgorithmException -> Laf
            r10.setParameter(r7)     // Catch: java.lang.Exception -> L3f java.security.InvalidAlgorithmParameterException -> L5b java.security.SignatureException -> L77 java.security.InvalidKeyException -> L93 java.security.NoSuchAlgorithmException -> Laf
            goto L33
        L2d:
            java.lang.String r10 = "SHA256WithRSA"
            java.security.Signature r10 = java.security.Signature.getInstance(r10)     // Catch: java.lang.Exception -> L3f java.security.InvalidAlgorithmParameterException -> L5b java.security.SignatureException -> L77 java.security.InvalidKeyException -> L93 java.security.NoSuchAlgorithmException -> Laf
        L33:
            r10.initSign(r9)     // Catch: java.lang.Exception -> L3f java.security.InvalidAlgorithmParameterException -> L5b java.security.SignatureException -> L77 java.security.InvalidKeyException -> L93 java.security.NoSuchAlgorithmException -> Laf
            r10.update(r8)     // Catch: java.lang.Exception -> L3f java.security.InvalidAlgorithmParameterException -> L5b java.security.SignatureException -> L77 java.security.InvalidKeyException -> L93 java.security.NoSuchAlgorithmException -> Laf
            byte[] r0 = r10.sign()     // Catch: java.lang.Exception -> L3f java.security.InvalidAlgorithmParameterException -> L5b java.security.SignatureException -> L77 java.security.InvalidKeyException -> L93 java.security.NoSuchAlgorithmException -> Laf
            goto Lca
        L3f:
            r8 = move-exception
            java.lang.String r9 = com.huawei.secure.android.common.encrypt.rsa.RSASign.c
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r1 = "sign Exception: "
            r10.append(r1)
            java.lang.String r8 = r8.getMessage()
            r10.append(r8)
            java.lang.String r8 = r10.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r9, r8)
            goto Lca
        L5b:
            r8 = move-exception
            java.lang.String r9 = com.huawei.secure.android.common.encrypt.rsa.RSASign.c
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r1 = "sign InvalidAlgorithmParameterException: "
            r10.append(r1)
            java.lang.String r8 = r8.getMessage()
            r10.append(r8)
            java.lang.String r8 = r10.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r9, r8)
            goto Lca
        L77:
            r8 = move-exception
            java.lang.String r9 = com.huawei.secure.android.common.encrypt.rsa.RSASign.c
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r1 = "sign SignatureException: "
            r10.append(r1)
            java.lang.String r8 = r8.getMessage()
            r10.append(r8)
            java.lang.String r8 = r10.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r9, r8)
            goto Lca
        L93:
            r8 = move-exception
            java.lang.String r9 = com.huawei.secure.android.common.encrypt.rsa.RSASign.c
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r1 = "sign InvalidKeyException: "
            r10.append(r1)
            java.lang.String r8 = r8.getMessage()
            r10.append(r8)
            java.lang.String r8 = r10.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r9, r8)
            goto Lca
        Laf:
            r8 = move-exception
            java.lang.String r9 = com.huawei.secure.android.common.encrypt.rsa.RSASign.c
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r1 = "sign NoSuchAlgorithmException: "
            r10.append(r1)
            java.lang.String r8 = r8.getMessage()
            r10.append(r8)
            java.lang.String r8 = r10.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r9, r8)
        Lca:
            return r0
        Lcb:
            java.lang.String r8 = com.huawei.secure.android.common.encrypt.rsa.RSASign.c
            java.lang.String r9 = "content or privateKey is null , or length is too short"
            com.huawei.secure.android.common.encrypt.utils.b.b(r8, r9)
            return r0
    }

    @java.lang.Deprecated
    public static boolean verifySign(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0 = 0
            boolean r1 = a(r1, r2, r3, r0)
            return r1
    }

    @java.lang.Deprecated
    public static boolean verifySign(java.lang.String r1, java.lang.String r2, java.security.PublicKey r3) {
            r0 = 0
            boolean r1 = a(r1, r2, r3, r0)
            return r1
    }

    public static boolean verifySign(byte[] r8, byte[] r9, java.security.PublicKey r10, boolean r11) {
            r0 = 0
            if (r8 == 0) goto L75
            if (r10 == 0) goto L75
            if (r9 == 0) goto L75
            r1 = r10
            java.security.interfaces.RSAPublicKey r1 = (java.security.interfaces.RSAPublicKey) r1
            boolean r1 = com.huawei.secure.android.common.encrypt.rsa.RSAEncrypt.isPublicKeyLengthRight(r1)
            if (r1 != 0) goto L11
            goto L75
        L11:
            if (r11 == 0) goto L2c
            java.lang.String r11 = "SHA256WithRSA/PSS"
            java.security.Signature r11 = java.security.Signature.getInstance(r11)     // Catch: java.lang.Exception -> L3d java.security.GeneralSecurityException -> L59
            java.security.spec.PSSParameterSpec r7 = new java.security.spec.PSSParameterSpec     // Catch: java.lang.Exception -> L3d java.security.GeneralSecurityException -> L59
            java.lang.String r2 = "SHA-256"
            java.lang.String r3 = "MGF1"
            java.security.spec.MGF1ParameterSpec r4 = java.security.spec.MGF1ParameterSpec.SHA256     // Catch: java.lang.Exception -> L3d java.security.GeneralSecurityException -> L59
            r5 = 32
            r6 = 1
            r1 = r7
            r1.<init>(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L3d java.security.GeneralSecurityException -> L59
            r11.setParameter(r7)     // Catch: java.lang.Exception -> L3d java.security.GeneralSecurityException -> L59
            goto L32
        L2c:
            java.lang.String r11 = "SHA256WithRSA"
            java.security.Signature r11 = java.security.Signature.getInstance(r11)     // Catch: java.lang.Exception -> L3d java.security.GeneralSecurityException -> L59
        L32:
            r11.initVerify(r10)     // Catch: java.lang.Exception -> L3d java.security.GeneralSecurityException -> L59
            r11.update(r8)     // Catch: java.lang.Exception -> L3d java.security.GeneralSecurityException -> L59
            boolean r8 = r11.verify(r9)     // Catch: java.lang.Exception -> L3d java.security.GeneralSecurityException -> L59
            return r8
        L3d:
            r8 = move-exception
            java.lang.String r9 = com.huawei.secure.android.common.encrypt.rsa.RSASign.c
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "exception : "
            r10.append(r11)
            java.lang.String r8 = r8.getMessage()
            r10.append(r8)
            java.lang.String r8 = r10.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r9, r8)
            goto L74
        L59:
            r8 = move-exception
            java.lang.String r9 = com.huawei.secure.android.common.encrypt.rsa.RSASign.c
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "check sign exception: "
            r10.append(r11)
            java.lang.String r8 = r8.getMessage()
            r10.append(r8)
            java.lang.String r8 = r10.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r9, r8)
        L74:
            return r0
        L75:
            java.lang.String r8 = com.huawei.secure.android.common.encrypt.rsa.RSASign.c
            java.lang.String r9 = "content or publicKey is null , or length is too short"
            com.huawei.secure.android.common.encrypt.utils.b.b(r8, r9)
            return r0
    }
}

package com.huawei.secure.android.common.encrypt.aes;

public final class AesGcm {
    private static final java.lang.String a = "security:";
    private static final java.lang.String b = "AES/GCM/NoPadding";
    private static final java.lang.String c = "AES";
    private static final java.lang.String d = "AesGcm";
    private static final java.lang.String e = "";
    private static final int f = 16;
    private static final int g = 12;
    private static final int h = 2;

    static {
            return
    }

    private AesGcm() {
            r0 = this;
            r0.<init>()
            return
    }

    private static int a(byte[] r2) {
            r0 = 12
            r2 = r2[r0]
            r1 = 58
            if (r2 != r1) goto L9
            return r0
        L9:
            r2 = -1
            return r2
    }

    private static java.lang.String a(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L14
            int r0 = r2.length()
            r1 = 24
            if (r0 >= r1) goto Lf
            goto L14
        Lf:
            java.lang.String r2 = r2.substring(r1)
            return r2
        L14:
            java.lang.String r2 = ""
            return r2
    }

    private static byte[] a(java.lang.String r3, byte[] r4, byte[] r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 != 0) goto L45
            if (r4 == 0) goto L45
            int r0 = r4.length
            r2 = 16
            if (r0 < r2) goto L45
            if (r5 == 0) goto L45
            int r0 = r5.length
            r2 = 12
            if (r0 < r2) goto L45
            boolean r0 = isBuildVersionHigherThan19()
            if (r0 != 0) goto L1c
            goto L45
        L1c:
            java.lang.String r0 = "UTF-8"
            byte[] r3 = r3.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L27
            byte[] r3 = encrypt(r3, r4, r5)     // Catch: java.io.UnsupportedEncodingException -> L27
            return r3
        L27:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.aes.AesGcm.d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "GCM encrypt data error"
            r5.append(r0)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r3)
            byte[] r3 = new byte[r1]
            return r3
        L45:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesGcm.d
            java.lang.String r4 = "gcm encrypt param is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            byte[] r3 = new byte[r1]
            return r3
    }

    private static byte[] a(byte[] r3, byte[] r4) {
            int r0 = r3.length
            int r1 = r4.length
            int r0 = r0 + r1
            byte[] r0 = new byte[r0]
            int r1 = r3.length
            r2 = 0
            java.lang.System.arraycopy(r3, r2, r0, r2, r1)
            int r3 = r3.length
            int r1 = r4.length
            java.lang.System.arraycopy(r4, r2, r0, r3, r1)
            return r0
    }

    private static java.lang.String b(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L15
            int r0 = r2.length()
            r1 = 24
            if (r0 >= r1) goto Lf
            goto L15
        Lf:
            r0 = 0
            java.lang.String r2 = r2.substring(r0, r1)
            return r2
        L15:
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.aes.AesGcm.d
            java.lang.String r0 = "IV is invalid."
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r0)
            java.lang.String r2 = ""
            return r2
    }

    private static byte[] b(byte[] r4) {
            int r0 = r4.length
            r1 = 12
            int r0 = r0 - r1
            byte[] r0 = new byte[r0]
            int r2 = r4.length
            int r2 = r2 - r1
            r3 = 0
            java.lang.System.arraycopy(r4, r1, r0, r3, r2)
            return r0
    }

    private static byte[] c(byte[] r3) {
            r0 = 12
            byte[] r1 = new byte[r0]
            r2 = 0
            java.lang.System.arraycopy(r3, r2, r1, r2, r0)
            return r1
    }

    public static java.lang.String decrypt(java.lang.String r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 != 0) goto L2b
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L2b
            boolean r0 = isBuildVersionHigherThan19()
            if (r0 != 0) goto L15
            goto L2b
        L15:
            byte[] r4 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r4)
            int r0 = r4.length
            r2 = 16
            if (r0 >= r2) goto L26
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesGcm.d
            java.lang.String r4 = "key length is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
        L26:
            java.lang.String r3 = decrypt(r3, r4)
            return r3
        L2b:
            return r1
    }

    public static java.lang.String decrypt(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 != 0) goto L3b
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L3b
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L3b
            boolean r0 = isBuildVersionHigherThan19()
            if (r0 != 0) goto L1b
            goto L3b
        L1b:
            byte[] r4 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r4)
            byte[] r5 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r5)
            int r0 = r4.length
            r2 = 16
            if (r0 < r2) goto L33
            int r0 = r5.length
            r2 = 12
            if (r0 >= r2) goto L2e
            goto L33
        L2e:
            java.lang.String r3 = decrypt(r3, r4, r5)
            return r3
        L33:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesGcm.d
            java.lang.String r4 = "key length or iv length is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
        L3b:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesGcm.d
            java.lang.String r4 = "gcm decrypt param is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
    }

    public static java.lang.String decrypt(java.lang.String r4, byte[] r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            java.lang.String r1 = ""
            if (r0 != 0) goto L79
            if (r5 == 0) goto L79
            int r0 = r5.length
            r2 = 16
            if (r0 < r2) goto L79
            boolean r0 = isBuildVersionHigherThan19()
            if (r0 != 0) goto L16
            goto L79
        L16:
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec     // Catch: java.io.UnsupportedEncodingException -> L5c java.security.GeneralSecurityException -> L5e
            java.lang.String r2 = "AES"
            r0.<init>(r5, r2)     // Catch: java.io.UnsupportedEncodingException -> L5c java.security.GeneralSecurityException -> L5e
            java.lang.String r5 = "AES/GCM/NoPadding"
            javax.crypto.Cipher r5 = javax.crypto.Cipher.getInstance(r5)     // Catch: java.io.UnsupportedEncodingException -> L5c java.security.GeneralSecurityException -> L5e
            java.lang.String r2 = b(r4)     // Catch: java.io.UnsupportedEncodingException -> L5c java.security.GeneralSecurityException -> L5e
            java.lang.String r4 = a(r4)     // Catch: java.io.UnsupportedEncodingException -> L5c java.security.GeneralSecurityException -> L5e
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.io.UnsupportedEncodingException -> L5c java.security.GeneralSecurityException -> L5e
            if (r3 != 0) goto L54
            boolean r3 = android.text.TextUtils.isEmpty(r4)     // Catch: java.io.UnsupportedEncodingException -> L5c java.security.GeneralSecurityException -> L5e
            if (r3 == 0) goto L38
            goto L54
        L38:
            byte[] r2 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r2)     // Catch: java.io.UnsupportedEncodingException -> L5c java.security.GeneralSecurityException -> L5e
            java.security.spec.AlgorithmParameterSpec r2 = getGcmAlgorithmParams(r2)     // Catch: java.io.UnsupportedEncodingException -> L5c java.security.GeneralSecurityException -> L5e
            r3 = 2
            r5.init(r3, r0, r2)     // Catch: java.io.UnsupportedEncodingException -> L5c java.security.GeneralSecurityException -> L5e
            byte[] r4 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r4)     // Catch: java.io.UnsupportedEncodingException -> L5c java.security.GeneralSecurityException -> L5e
            byte[] r4 = r5.doFinal(r4)     // Catch: java.io.UnsupportedEncodingException -> L5c java.security.GeneralSecurityException -> L5e
            java.lang.String r5 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L5c java.security.GeneralSecurityException -> L5e
            java.lang.String r0 = "UTF-8"
            r5.<init>(r4, r0)     // Catch: java.io.UnsupportedEncodingException -> L5c java.security.GeneralSecurityException -> L5e
            return r5
        L54:
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.aes.AesGcm.d     // Catch: java.io.UnsupportedEncodingException -> L5c java.security.GeneralSecurityException -> L5e
            java.lang.String r5 = "ivParameter or encrypedWord is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r5)     // Catch: java.io.UnsupportedEncodingException -> L5c java.security.GeneralSecurityException -> L5e
            return r1
        L5c:
            r4 = move-exception
            goto L5f
        L5e:
            r4 = move-exception
        L5f:
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.aes.AesGcm.d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "GCM decrypt data exception: "
            r0.append(r2)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r4)
        L79:
            return r1
    }

    public static java.lang.String decrypt(java.lang.String r3, byte[] r4, byte[] r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 != 0) goto L48
            if (r4 == 0) goto L48
            int r0 = r4.length
            r2 = 16
            if (r0 < r2) goto L48
            if (r5 == 0) goto L48
            int r0 = r5.length
            r2 = 12
            if (r0 < r2) goto L48
            boolean r0 = isBuildVersionHigherThan19()
            if (r0 != 0) goto L1d
            goto L48
        L1d:
            byte[] r3 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r3)     // Catch: java.io.UnsupportedEncodingException -> L2d
            byte[] r3 = decrypt(r3, r4, r5)     // Catch: java.io.UnsupportedEncodingException -> L2d
            java.lang.String r4 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L2d
            java.lang.String r5 = "UTF-8"
            r4.<init>(r3, r5)     // Catch: java.io.UnsupportedEncodingException -> L2d
            return r4
        L2d:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.aes.AesGcm.d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "GCM decrypt data exception: "
            r5.append(r0)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r3)
        L48:
            return r1
    }

    public static byte[] decrypt(byte[] r1, byte[] r2) {
            byte[] r0 = c(r1)
            byte[] r1 = b(r1)
            byte[] r1 = decrypt(r1, r2, r0)
            return r1
    }

    public static byte[] decrypt(byte[] r3, byte[] r4, byte[] r5) {
            r0 = 0
            if (r3 == 0) goto L4c
            int r1 = r3.length
            if (r1 == 0) goto L4c
            if (r4 == 0) goto L4c
            int r1 = r4.length
            r2 = 16
            if (r1 < r2) goto L4c
            boolean r1 = isBuildVersionHigherThan19()
            if (r1 != 0) goto L14
            goto L4c
        L14:
            javax.crypto.spec.SecretKeySpec r1 = new javax.crypto.spec.SecretKeySpec     // Catch: java.security.GeneralSecurityException -> L2e
            java.lang.String r2 = "AES"
            r1.<init>(r4, r2)     // Catch: java.security.GeneralSecurityException -> L2e
            java.lang.String r4 = "AES/GCM/NoPadding"
            javax.crypto.Cipher r4 = javax.crypto.Cipher.getInstance(r4)     // Catch: java.security.GeneralSecurityException -> L2e
            java.security.spec.AlgorithmParameterSpec r5 = getGcmAlgorithmParams(r5)     // Catch: java.security.GeneralSecurityException -> L2e
            r2 = 2
            r4.init(r2, r1, r5)     // Catch: java.security.GeneralSecurityException -> L2e
            byte[] r3 = r4.doFinal(r3)     // Catch: java.security.GeneralSecurityException -> L2e
            return r3
        L2e:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.aes.AesGcm.d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "GCM decrypt data exception: "
            r5.append(r1)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r3)
            byte[] r3 = new byte[r0]
            return r3
        L4c:
            byte[] r3 = new byte[r0]
            return r3
    }

    public static java.lang.String decryptWithCryptHead(java.lang.String r3, byte[] r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 != 0) goto L46
            if (r4 == 0) goto L46
            int r0 = r4.length
            r2 = 16
            if (r0 >= r2) goto L10
            goto L46
        L10:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesCbc.c(r3)
            boolean r0 = r1.equals(r3)
            if (r0 == 0) goto L1b
            return r1
        L1b:
            r0 = 58
            int r0 = r3.indexOf(r0)
            if (r0 < 0) goto L3f
            r1 = 0
            java.lang.String r1 = r3.substring(r1, r0)
            byte[] r1 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r1)
            int r0 = r0 + 1
            java.lang.String r3 = r3.substring(r0)
            byte[] r3 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r3)
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r3)
            java.lang.String r3 = decrypt(r3, r4, r1)
            return r3
        L3f:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesGcm.d
            java.lang.String r4 = " gcm cipherText data missing colon"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
        L46:
            return r1
    }

    public static java.lang.String decryptWithCryptHead(byte[] r1, byte[] r2) {
            java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> Lc
            byte[] r1 = decryptWithCryptHeadReturnByte(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> Lc
            java.lang.String r2 = "UTF-8"
            r0.<init>(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> Lc
            return r0
        Lc:
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.aes.AesGcm.d
            java.lang.String r2 = "UnsupportedEncodingException"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r2)
            java.lang.String r1 = ""
            return r1
    }

    public static byte[] decryptWithCryptHeadReturnByte(byte[] r5, byte[] r6) {
            r0 = 0
            if (r5 == 0) goto L3a
            if (r6 == 0) goto L3a
            int r1 = r6.length
            r2 = 16
            if (r1 >= r2) goto Lb
            goto L3a
        Lb:
            byte[] r5 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d(r5)
            int r1 = r5.length
            if (r1 != 0) goto L15
            byte[] r5 = new byte[r0]
            return r5
        L15:
            int r1 = a(r5)
            if (r1 < 0) goto L30
            byte[] r2 = java.util.Arrays.copyOf(r5, r1)
            int r3 = r5.length
            int r4 = r2.length
            int r3 = r3 - r4
            int r3 = r3 + (-1)
            byte[] r4 = new byte[r3]
            int r1 = r1 + 1
            java.lang.System.arraycopy(r5, r1, r4, r0, r3)
            byte[] r5 = decrypt(r4, r6, r2)
            return r5
        L30:
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.aes.AesGcm.d
            java.lang.String r6 = " gcm cipherText data missing colon"
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r6)
            byte[] r5 = new byte[r0]
            return r5
        L3a:
            byte[] r5 = new byte[r0]
            return r5
    }

    public static java.lang.String encrypt(java.lang.String r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 != 0) goto L2b
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L2b
            boolean r0 = isBuildVersionHigherThan19()
            if (r0 != 0) goto L15
            goto L2b
        L15:
            byte[] r4 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r4)
            int r0 = r4.length
            r2 = 16
            if (r0 >= r2) goto L26
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesGcm.d
            java.lang.String r4 = "key length is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
        L26:
            java.lang.String r3 = encrypt(r3, r4)
            return r3
        L2b:
            return r1
    }

    public static java.lang.String encrypt(java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            java.lang.String r1 = ""
            if (r0 != 0) goto L3e
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L3e
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 != 0) goto L3e
            boolean r0 = isBuildVersionHigherThan19()
            if (r0 != 0) goto L1b
            goto L3e
        L1b:
            byte[] r5 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r5)
            byte[] r0 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r6)
            int r2 = r5.length
            r3 = 16
            if (r2 < r3) goto L36
            int r6 = r6.length()
            r2 = 12
            if (r6 >= r2) goto L31
            goto L36
        L31:
            java.lang.String r4 = encrypt(r4, r5, r0)
            return r4
        L36:
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.aes.AesGcm.d
            java.lang.String r5 = "key length or iv length is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r5)
            return r1
        L3e:
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.aes.AesGcm.d
            java.lang.String r5 = "gcm encrypt parameter is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r5)
            return r1
    }

    public static java.lang.String encrypt(java.lang.String r3, byte[] r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 != 0) goto L3e
            if (r4 == 0) goto L3e
            int r0 = r4.length
            r2 = 16
            if (r0 < r2) goto L3e
            boolean r0 = isBuildVersionHigherThan19()
            if (r0 != 0) goto L16
            goto L3e
        L16:
            r0 = 12
            byte[] r0 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.generateSecureRandom(r0)
            byte[] r3 = a(r3, r4, r0)
            if (r3 == 0) goto L3e
            int r4 = r3.length
            if (r4 != 0) goto L26
            goto L3e
        L26:
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r0)
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
        L3e:
            return r1
    }

    public static java.lang.String encrypt(java.lang.String r2, byte[] r3, byte[] r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L24
            if (r3 == 0) goto L24
            int r0 = r3.length
            r1 = 16
            if (r0 < r1) goto L24
            if (r4 == 0) goto L24
            int r0 = r4.length
            r1 = 12
            if (r0 < r1) goto L24
            boolean r0 = isBuildVersionHigherThan19()
            if (r0 != 0) goto L1b
            goto L24
        L1b:
            byte[] r2 = a(r2, r3, r4)
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r2)
            return r2
        L24:
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.aes.AesGcm.d
            java.lang.String r3 = "gcm encrypt param is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
            java.lang.String r2 = ""
            return r2
    }

    public static byte[] encrypt(byte[] r1, byte[] r2) {
            r0 = 12
            byte[] r0 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.generateSecureRandom(r0)
            byte[] r1 = encrypt(r1, r2, r0)
            byte[] r1 = a(r0, r1)
            return r1
    }

    public static byte[] encrypt(byte[] r3, byte[] r4, byte[] r5) {
            r0 = 0
            if (r3 == 0) goto L53
            int r1 = r3.length
            if (r1 == 0) goto L53
            if (r4 == 0) goto L53
            int r1 = r4.length
            r2 = 16
            if (r1 < r2) goto L53
            if (r5 == 0) goto L53
            int r1 = r5.length
            r2 = 12
            if (r1 < r2) goto L53
            boolean r1 = isBuildVersionHigherThan19()
            if (r1 != 0) goto L1b
            goto L53
        L1b:
            javax.crypto.spec.SecretKeySpec r1 = new javax.crypto.spec.SecretKeySpec     // Catch: java.security.GeneralSecurityException -> L35
            java.lang.String r2 = "AES"
            r1.<init>(r4, r2)     // Catch: java.security.GeneralSecurityException -> L35
            java.lang.String r4 = "AES/GCM/NoPadding"
            javax.crypto.Cipher r4 = javax.crypto.Cipher.getInstance(r4)     // Catch: java.security.GeneralSecurityException -> L35
            java.security.spec.AlgorithmParameterSpec r5 = getGcmAlgorithmParams(r5)     // Catch: java.security.GeneralSecurityException -> L35
            r2 = 1
            r4.init(r2, r1, r5)     // Catch: java.security.GeneralSecurityException -> L35
            byte[] r3 = r4.doFinal(r3)     // Catch: java.security.GeneralSecurityException -> L35
            return r3
        L35:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.aes.AesGcm.d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "GCM encrypt data error"
            r5.append(r1)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r3)
            byte[] r3 = new byte[r0]
            return r3
        L53:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesGcm.d
            java.lang.String r4 = "gcm encrypt param is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            byte[] r3 = new byte[r0]
            return r3
    }

    public static java.security.spec.AlgorithmParameterSpec getGcmAlgorithmParams(byte[] r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 >= r1) goto Lc
            javax.crypto.spec.IvParameterSpec r0 = new javax.crypto.spec.IvParameterSpec
            r0.<init>(r2)
            return r0
        Lc:
            javax.crypto.spec.GCMParameterSpec r0 = new javax.crypto.spec.GCMParameterSpec
            r1 = 128(0x80, float:1.8E-43)
            r0.<init>(r1, r2)
            return r0
    }

    public static boolean isBuildVersionHigherThan19() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }
}

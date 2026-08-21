package com.huawei.secure.android.common.encrypt.aes;

public final class AesCbc {
    private static final java.lang.String a = "security:";
    private static final java.lang.String b = "AES/CBC/PKCS5Padding";
    private static final java.lang.String c = "AES";
    private static final java.lang.String d = "AesCbc";
    private static final java.lang.String e = "";
    private static final int f = 16;
    private static final int g = 16;

    static {
            return
    }

    private AesCbc() {
            r0 = this;
            r0.<init>()
            return
    }

    private static int a(byte[] r2) {
            r0 = 16
            r2 = r2[r0]
            r1 = 58
            if (r2 != r1) goto L9
            return r0
        L9:
            r2 = -1
            return r2
    }

    private static java.lang.String a(java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3b
            r0.<init>()     // Catch: java.lang.Exception -> L3b
            r2 = 0
            r3 = 6
            java.lang.String r2 = r4.substring(r2, r3)     // Catch: java.lang.Exception -> L3b
            r0.append(r2)     // Catch: java.lang.Exception -> L3b
            r2 = 12
            r3 = 16
            java.lang.String r2 = r4.substring(r2, r3)     // Catch: java.lang.Exception -> L3b
            r0.append(r2)     // Catch: java.lang.Exception -> L3b
            r2 = 26
            r3 = 32
            java.lang.String r2 = r4.substring(r2, r3)     // Catch: java.lang.Exception -> L3b
            r0.append(r2)     // Catch: java.lang.Exception -> L3b
            r2 = 48
            java.lang.String r4 = r4.substring(r2)     // Catch: java.lang.Exception -> L3b
            r0.append(r4)     // Catch: java.lang.Exception -> L3b
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> L3b
            return r4
        L3b:
            r4 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "get encryptword exception : "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r4)
            return r1
    }

    private static java.lang.String a(java.lang.String r5, java.lang.String r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            java.lang.String r1 = ""
            if (r0 != 0) goto L6b
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto Lf
            goto L6b
        Lf:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L50
            r0.<init>()     // Catch: java.lang.Exception -> L50
            r2 = 0
            r3 = 6
            java.lang.String r4 = r6.substring(r2, r3)     // Catch: java.lang.Exception -> L50
            r0.append(r4)     // Catch: java.lang.Exception -> L50
            java.lang.String r2 = r5.substring(r2, r3)     // Catch: java.lang.Exception -> L50
            r0.append(r2)     // Catch: java.lang.Exception -> L50
            r2 = 10
            java.lang.String r4 = r6.substring(r3, r2)     // Catch: java.lang.Exception -> L50
            r0.append(r4)     // Catch: java.lang.Exception -> L50
            r4 = 16
            java.lang.String r3 = r5.substring(r3, r4)     // Catch: java.lang.Exception -> L50
            r0.append(r3)     // Catch: java.lang.Exception -> L50
            java.lang.String r2 = r6.substring(r2, r4)     // Catch: java.lang.Exception -> L50
            r0.append(r2)     // Catch: java.lang.Exception -> L50
            java.lang.String r5 = r5.substring(r4)     // Catch: java.lang.Exception -> L50
            r0.append(r5)     // Catch: java.lang.Exception -> L50
            java.lang.String r5 = r6.substring(r4)     // Catch: java.lang.Exception -> L50
            r0.append(r5)     // Catch: java.lang.Exception -> L50
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Exception -> L50
            return r5
        L50:
            r5 = move-exception
            java.lang.String r6 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "mix exception: "
            r0.append(r2)
            java.lang.String r5 = r5.getMessage()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r6, r5)
        L6b:
            return r1
    }

    private static byte[] a(java.lang.String r2, byte[] r3, byte[] r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto L11
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.String r3 = "cbc encrypt param is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
            byte[] r2 = new byte[r1]
            return r2
        L11:
            java.lang.String r0 = "UTF-8"
            byte[] r2 = r2.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L1c
            byte[] r2 = encrypt(r2, r3, r4)     // Catch: java.io.UnsupportedEncodingException -> L1c
            return r2
        L1c:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = " cbc encrypt data error"
            r4.append(r0)
            java.lang.String r2 = r2.getMessage()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r2)
            byte[] r2 = new byte[r1]
            return r2
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

    private static java.lang.String b(java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L33
            r0.<init>()     // Catch: java.lang.Exception -> L33
            r2 = 6
            r3 = 12
            java.lang.String r2 = r4.substring(r2, r3)     // Catch: java.lang.Exception -> L33
            r0.append(r2)     // Catch: java.lang.Exception -> L33
            r2 = 16
            r3 = 26
            java.lang.String r2 = r4.substring(r2, r3)     // Catch: java.lang.Exception -> L33
            r0.append(r2)     // Catch: java.lang.Exception -> L33
            r2 = 32
            r3 = 48
            java.lang.String r4 = r4.substring(r2, r3)     // Catch: java.lang.Exception -> L33
            r0.append(r4)     // Catch: java.lang.Exception -> L33
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> L33
            return r4
        L33:
            r4 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getIv exception : "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r4)
            return r1
    }

    private static byte[] b(byte[] r4) {
            int r0 = r4.length
            r1 = 16
            int r0 = r0 - r1
            byte[] r0 = new byte[r0]
            int r2 = r4.length
            int r2 = r2 - r1
            r3 = 0
            java.lang.System.arraycopy(r4, r1, r0, r3, r2)
            return r0
    }

    static java.lang.String c(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            java.lang.String r0 = "security:"
            int r0 = r3.indexOf(r0)
            r2 = -1
            if (r0 != r2) goto L13
            goto L19
        L13:
            r0 = 9
            java.lang.String r1 = r3.substring(r0)
        L19:
            return r1
    }

    private static byte[] c(byte[] r3) {
            r0 = 16
            byte[] r1 = new byte[r0]
            r2 = 0
            java.lang.System.arraycopy(r3, r2, r1, r2, r0)
            return r1
    }

    static byte[] d(byte[] r4) {
            java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L8
            java.lang.String r1 = "UTF-8"
            r0.<init>(r4, r1)     // Catch: java.io.UnsupportedEncodingException -> L8
            goto L25
        L8:
            r0 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "stripCryptHead: exception : "
            r2.append(r3)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r0)
            java.lang.String r0 = ""
        L25:
            java.lang.String r1 = "security:"
            boolean r0 = r0.startsWith(r1)
            r1 = 0
            if (r0 != 0) goto L31
            byte[] r4 = new byte[r1]
            return r4
        L31:
            int r0 = r4.length
            r2 = 9
            if (r0 <= r2) goto L3e
            int r0 = r4.length
            int r0 = r0 - r2
            byte[] r3 = new byte[r0]
            java.lang.System.arraycopy(r4, r2, r3, r1, r0)
            return r3
        L3e:
            byte[] r4 = new byte[r1]
            return r4
    }

    public static java.lang.String decrypt(java.lang.String r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 != 0) goto L25
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Lf
            goto L25
        Lf:
            byte[] r4 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r4)
            int r0 = r4.length
            r2 = 16
            if (r0 >= r2) goto L20
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.String r4 = "key length is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
        L20:
            java.lang.String r3 = decrypt(r3, r4)
            return r3
        L25:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.String r4 = "content or key is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
    }

    public static java.lang.String decrypt(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 != 0) goto L33
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L33
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L15
            goto L33
        L15:
            byte[] r4 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r4)
            byte[] r5 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r5)
            int r0 = r4.length
            r2 = 16
            if (r0 < r2) goto L2b
            int r0 = r5.length
            if (r0 >= r2) goto L26
            goto L2b
        L26:
            java.lang.String r3 = decrypt(r3, r4, r5)
            return r3
        L2b:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.String r4 = "key length or ivParameter is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
        L33:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.String r4 = "cbc decrypt param is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
    }

    public static java.lang.String decrypt(java.lang.String r3, byte[] r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 != 0) goto L35
            if (r4 == 0) goto L35
            int r0 = r4.length
            r2 = 16
            if (r0 >= r2) goto L10
            goto L35
        L10:
            java.lang.String r0 = b(r3)
            java.lang.String r3 = a(r3)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L2e
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            if (r2 == 0) goto L25
            goto L2e
        L25:
            byte[] r0 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r0)
            java.lang.String r3 = decrypt(r3, r4, r0)
            return r3
        L2e:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.String r4 = "ivParameter or encrypedWord is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
        L35:
            return r1
    }

    public static java.lang.String decrypt(java.lang.String r3, byte[] r4, byte[] r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 != 0) goto L41
            if (r4 == 0) goto L41
            int r0 = r4.length
            r2 = 16
            if (r0 < r2) goto L41
            if (r5 == 0) goto L41
            int r0 = r5.length
            if (r0 >= r2) goto L15
            goto L41
        L15:
            byte[] r3 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r3)     // Catch: java.io.UnsupportedEncodingException -> L25
            byte[] r3 = decrypt(r3, r4, r5)     // Catch: java.io.UnsupportedEncodingException -> L25
            java.lang.String r4 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L25
            java.lang.String r5 = "UTF-8"
            r4.<init>(r3, r5)     // Catch: java.io.UnsupportedEncodingException -> L25
            return r4
        L25:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = " cbc decrypt data error"
            r5.append(r0)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r3)
            return r1
        L41:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.String r4 = "cbc decrypt param is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
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
            if (r3 == 0) goto Lda
            int r1 = r3.length
            if (r1 == 0) goto Lda
            if (r4 == 0) goto Lda
            int r1 = r4.length
            r2 = 16
            if (r1 < r2) goto Lda
            if (r5 == 0) goto Lda
            int r1 = r5.length
            if (r1 >= r2) goto L14
            goto Lda
        L14:
            javax.crypto.spec.SecretKeySpec r1 = new javax.crypto.spec.SecretKeySpec
            java.lang.String r2 = "AES"
            r1.<init>(r4, r2)
            java.lang.String r4 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r4 = javax.crypto.Cipher.getInstance(r4)     // Catch: javax.crypto.BadPaddingException -> L2f javax.crypto.IllegalBlockSizeException -> L4c java.security.InvalidAlgorithmParameterException -> L68 java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> La0 java.security.NoSuchAlgorithmException -> Lbc
            javax.crypto.spec.IvParameterSpec r2 = new javax.crypto.spec.IvParameterSpec     // Catch: javax.crypto.BadPaddingException -> L2f javax.crypto.IllegalBlockSizeException -> L4c java.security.InvalidAlgorithmParameterException -> L68 java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> La0 java.security.NoSuchAlgorithmException -> Lbc
            r2.<init>(r5)     // Catch: javax.crypto.BadPaddingException -> L2f javax.crypto.IllegalBlockSizeException -> L4c java.security.InvalidAlgorithmParameterException -> L68 java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> La0 java.security.NoSuchAlgorithmException -> Lbc
            r5 = 2
            r4.init(r5, r1, r2)     // Catch: javax.crypto.BadPaddingException -> L2f javax.crypto.IllegalBlockSizeException -> L4c java.security.InvalidAlgorithmParameterException -> L68 java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> La0 java.security.NoSuchAlgorithmException -> Lbc
            byte[] r3 = r4.doFinal(r3)     // Catch: javax.crypto.BadPaddingException -> L2f javax.crypto.IllegalBlockSizeException -> L4c java.security.InvalidAlgorithmParameterException -> L68 java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> La0 java.security.NoSuchAlgorithmException -> Lbc
            return r3
        L2f:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "BadPaddingException: "
            r5.append(r1)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r3)
            goto Ld7
        L4c:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "IllegalBlockSizeException: "
            r5.append(r1)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r3)
            goto Ld7
        L68:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "InvalidAlgorithmParameterException: "
            r5.append(r1)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r3)
            goto Ld7
        L84:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "InvalidKeyException: "
            r5.append(r1)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r3)
            goto Ld7
        La0:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "NoSuchPaddingException: "
            r5.append(r1)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r3)
            goto Ld7
        Lbc:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "NoSuchAlgorithmException: "
            r5.append(r1)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r3)
        Ld7:
            byte[] r3 = new byte[r0]
            return r3
        Lda:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.String r4 = "cbc decrypt param is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
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
            java.lang.String r3 = c(r3)
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
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.String r4 = " cbc cipherText data missing colon"
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
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.String r2 = "decryptWithCryptHead UnsupportedEncodingException "
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
            byte[] r5 = d(r5)
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
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.String r6 = " cbc cipherText data missing colon"
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
            if (r0 != 0) goto L25
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Lf
            goto L25
        Lf:
            byte[] r4 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r4)
            int r0 = r4.length
            r2 = 16
            if (r0 >= r2) goto L20
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.String r4 = "key length is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
        L20:
            java.lang.String r3 = encrypt(r3, r4)
            return r3
        L25:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.String r4 = "cbc encrypt param is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
    }

    public static java.lang.String encrypt(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 != 0) goto L33
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L33
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L15
            goto L33
        L15:
            byte[] r4 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r4)
            byte[] r5 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r5)
            int r0 = r4.length
            r2 = 16
            if (r0 < r2) goto L2b
            int r0 = r5.length
            if (r0 >= r2) goto L26
            goto L2b
        L26:
            java.lang.String r3 = encrypt(r3, r4, r5)
            return r3
        L2b:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.String r4 = "key length or ivParameter length is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
        L33:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.String r4 = "cbc encrypt param is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
    }

    public static java.lang.String encrypt(java.lang.String r3, byte[] r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 != 0) goto L2c
            if (r4 == 0) goto L2c
            int r0 = r4.length
            r2 = 16
            if (r0 >= r2) goto L10
            goto L2c
        L10:
            byte[] r0 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.generateSecureRandom(r2)
            byte[] r3 = a(r3, r4, r0)
            if (r3 == 0) goto L2b
            int r4 = r3.length
            if (r4 != 0) goto L1e
            goto L2b
        L1e:
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r0)
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r3)
            java.lang.String r3 = a(r4, r3)
            return r3
        L2b:
            return r1
        L2c:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.String r4 = "cbc encrypt param is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
    }

    public static java.lang.String encrypt(java.lang.String r2, byte[] r3, byte[] r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1c
            if (r3 == 0) goto L1c
            int r0 = r3.length
            r1 = 16
            if (r0 < r1) goto L1c
            if (r4 == 0) goto L1c
            int r0 = r4.length
            if (r0 >= r1) goto L13
            goto L1c
        L13:
            byte[] r2 = a(r2, r3, r4)
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r2)
            return r2
        L1c:
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.String r3 = "cbc encrypt param is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
            java.lang.String r2 = ""
            return r2
    }

    public static byte[] encrypt(byte[] r1, byte[] r2) {
            r0 = 16
            byte[] r0 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.generateSecureRandom(r0)
            byte[] r1 = encrypt(r1, r2, r0)
            byte[] r1 = a(r0, r1)
            return r1
    }

    public static byte[] encrypt(byte[] r3, byte[] r4, byte[] r5) {
            r0 = 0
            if (r3 == 0) goto Lda
            int r1 = r3.length
            if (r1 == 0) goto Lda
            if (r4 == 0) goto Lda
            int r1 = r4.length
            r2 = 16
            if (r1 < r2) goto Lda
            if (r5 == 0) goto Lda
            int r1 = r5.length
            if (r1 >= r2) goto L14
            goto Lda
        L14:
            javax.crypto.spec.SecretKeySpec r1 = new javax.crypto.spec.SecretKeySpec
            java.lang.String r2 = "AES"
            r1.<init>(r4, r2)
            java.lang.String r4 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r4 = javax.crypto.Cipher.getInstance(r4)     // Catch: javax.crypto.BadPaddingException -> L2f javax.crypto.IllegalBlockSizeException -> L4c java.security.InvalidAlgorithmParameterException -> L68 java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> La0 java.security.NoSuchAlgorithmException -> Lbc
            javax.crypto.spec.IvParameterSpec r2 = new javax.crypto.spec.IvParameterSpec     // Catch: javax.crypto.BadPaddingException -> L2f javax.crypto.IllegalBlockSizeException -> L4c java.security.InvalidAlgorithmParameterException -> L68 java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> La0 java.security.NoSuchAlgorithmException -> Lbc
            r2.<init>(r5)     // Catch: javax.crypto.BadPaddingException -> L2f javax.crypto.IllegalBlockSizeException -> L4c java.security.InvalidAlgorithmParameterException -> L68 java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> La0 java.security.NoSuchAlgorithmException -> Lbc
            r5 = 1
            r4.init(r5, r1, r2)     // Catch: javax.crypto.BadPaddingException -> L2f javax.crypto.IllegalBlockSizeException -> L4c java.security.InvalidAlgorithmParameterException -> L68 java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> La0 java.security.NoSuchAlgorithmException -> Lbc
            byte[] r3 = r4.doFinal(r3)     // Catch: javax.crypto.BadPaddingException -> L2f javax.crypto.IllegalBlockSizeException -> L4c java.security.InvalidAlgorithmParameterException -> L68 java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> La0 java.security.NoSuchAlgorithmException -> Lbc
            return r3
        L2f:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "BadPaddingException: "
            r5.append(r1)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r3)
            goto Ld7
        L4c:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "IllegalBlockSizeException: "
            r5.append(r1)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r3)
            goto Ld7
        L68:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "InvalidAlgorithmParameterException: "
            r5.append(r1)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r3)
            goto Ld7
        L84:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "InvalidKeyException: "
            r5.append(r1)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r3)
            goto Ld7
        La0:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "NoSuchPaddingException: "
            r5.append(r1)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r3)
            goto Ld7
        Lbc:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "NoSuchAlgorithmException: "
            r5.append(r1)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r3)
        Ld7:
            byte[] r3 = new byte[r0]
            return r3
        Lda:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.aes.AesCbc.d
            java.lang.String r4 = "cbc encrypt param is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            byte[] r3 = new byte[r0]
            return r3
    }
}

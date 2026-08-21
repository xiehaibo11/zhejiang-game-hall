package com.huawei.secure.android.common.encrypt.hash;

public abstract class PBKDF2 {
    private static final java.lang.String a = "PBKDF2";
    private static final java.lang.String b = "PBKDF2WithHmacSHA1";
    private static final java.lang.String c = "PBKDF2WithHmacSHA256";
    private static final java.lang.String d = "";
    private static final int e = 8;
    private static final int f = 16;
    private static final int g = 32;
    private static final int h = 10000;
    private static final int i = 1000;

    static {
            return
    }

    public PBKDF2() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean a(byte[] r5, byte[] r6) {
            r0 = 0
            if (r5 == 0) goto L1c
            if (r6 != 0) goto L6
            goto L1c
        L6:
            int r1 = r5.length
            int r2 = r6.length
            r1 = r1 ^ r2
            r2 = r0
        La:
            int r3 = r5.length
            if (r2 >= r3) goto L19
            int r3 = r6.length
            if (r2 >= r3) goto L19
            r3 = r5[r2]
            r4 = r6[r2]
            r3 = r3 ^ r4
            r1 = r1 | r3
            int r2 = r2 + 1
            goto La
        L19:
            if (r1 != 0) goto L1c
            r0 = 1
        L1c:
            return r0
    }

    private static byte[] a(char[] r1, byte[] r2, int r3, int r4, boolean r5) {
            javax.crypto.spec.PBEKeySpec r0 = new javax.crypto.spec.PBEKeySpec     // Catch: java.security.spec.InvalidKeySpecException -> L1d java.security.NoSuchAlgorithmException -> L1f
            r0.<init>(r1, r2, r3, r4)     // Catch: java.security.spec.InvalidKeySpecException -> L1d java.security.NoSuchAlgorithmException -> L1f
            if (r5 == 0) goto Le
            java.lang.String r1 = "PBKDF2WithHmacSHA256"
            javax.crypto.SecretKeyFactory r1 = javax.crypto.SecretKeyFactory.getInstance(r1)     // Catch: java.security.spec.InvalidKeySpecException -> L1d java.security.NoSuchAlgorithmException -> L1f
            goto L14
        Le:
            java.lang.String r1 = "PBKDF2WithHmacSHA1"
            javax.crypto.SecretKeyFactory r1 = javax.crypto.SecretKeyFactory.getInstance(r1)     // Catch: java.security.spec.InvalidKeySpecException -> L1d java.security.NoSuchAlgorithmException -> L1f
        L14:
            javax.crypto.SecretKey r1 = r1.generateSecret(r0)     // Catch: java.security.spec.InvalidKeySpecException -> L1d java.security.NoSuchAlgorithmException -> L1f
            byte[] r1 = r1.getEncoded()     // Catch: java.security.spec.InvalidKeySpecException -> L1d java.security.NoSuchAlgorithmException -> L1f
            return r1
        L1d:
            r1 = move-exception
            goto L20
        L1f:
            r1 = move-exception
        L20:
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.hash.PBKDF2.a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "pbkdf exception : "
            r3.append(r4)
            java.lang.String r1 = r1.getMessage()
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r1)
            r1 = 0
            byte[] r1 = new byte[r1]
            return r1
    }

    public static byte[] pbkdf2(char[] r1, byte[] r2, int r3, int r4) {
            r0 = 0
            byte[] r1 = a(r1, r2, r3, r4, r0)
            return r1
    }

    @java.lang.Deprecated
    public static java.lang.String pbkdf2Encrypt(java.lang.String r1) {
            r0 = 10000(0x2710, float:1.4013E-41)
            java.lang.String r1 = pbkdf2Encrypt(r1, r0)
            return r1
    }

    @java.lang.Deprecated
    public static java.lang.String pbkdf2Encrypt(java.lang.String r2, int r3) {
            r0 = 8
            byte[] r0 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.generateSecureRandom(r0)
            r1 = 32
            java.lang.String r2 = pbkdf2Encrypt(r2, r0, r3, r1)
            return r2
    }

    @java.lang.Deprecated
    public static java.lang.String pbkdf2Encrypt(java.lang.String r3, byte[] r4, int r5, int r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 == 0) goto L10
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.hash.PBKDF2.a
            java.lang.String r4 = "pwd is null."
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
        L10:
            r0 = 1000(0x3e8, float:1.401E-42)
            if (r5 >= r0) goto L1c
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.hash.PBKDF2.a
            java.lang.String r4 = "iterations times is not enough."
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
        L1c:
            if (r4 == 0) goto L51
            int r0 = r4.length
            r2 = 8
            if (r0 >= r2) goto L24
            goto L51
        L24:
            r0 = 32
            if (r6 >= r0) goto L30
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.hash.PBKDF2.a
            java.lang.String r4 = "cipherLen length is not enough"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
        L30:
            char[] r3 = r3.toCharArray()
            int r6 = r6 * r2
            byte[] r3 = pbkdf2(r3, r4, r5, r6)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r4)
            r5.append(r4)
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r3)
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            return r3
        L51:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.hash.PBKDF2.a
            java.lang.String r4 = "salt parameter is null or length is not enough"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
    }

    public static java.lang.String pbkdf2EncryptNew(java.lang.String r1) {
            r0 = 10000(0x2710, float:1.4013E-41)
            java.lang.String r1 = pbkdf2EncryptNew(r1, r0)
            return r1
    }

    public static java.lang.String pbkdf2EncryptNew(java.lang.String r2, int r3) {
            r0 = 16
            byte[] r0 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.generateSecureRandom(r0)
            r1 = 32
            java.lang.String r2 = pbkdf2EncryptNew(r2, r0, r3, r1)
            return r2
    }

    public static java.lang.String pbkdf2EncryptNew(java.lang.String r3, byte[] r4, int r5, int r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 == 0) goto L10
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.hash.PBKDF2.a
            java.lang.String r4 = "pwd is null."
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
        L10:
            r0 = 1000(0x3e8, float:1.401E-42)
            if (r5 >= r0) goto L1c
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.hash.PBKDF2.a
            java.lang.String r4 = "iterations times is not enough."
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
        L1c:
            if (r4 == 0) goto L71
            int r0 = r4.length
            r2 = 16
            if (r0 >= r2) goto L24
            goto L71
        L24:
            r0 = 32
            if (r6 >= r0) goto L30
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.hash.PBKDF2.a
            java.lang.String r4 = "cipherLen length is not enough"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
        L30:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 >= r1) goto L48
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.hash.PBKDF2.a
            java.lang.String r1 = "sha 1"
            com.huawei.secure.android.common.encrypt.utils.b.c(r0, r1)
            char[] r3 = r3.toCharArray()
            int r6 = r6 * 8
            byte[] r3 = pbkdf2(r3, r4, r5, r6)
            goto L59
        L48:
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.hash.PBKDF2.a
            java.lang.String r1 = "sha 256"
            com.huawei.secure.android.common.encrypt.utils.b.c(r0, r1)
            char[] r3 = r3.toCharArray()
            int r6 = r6 * 8
            byte[] r3 = pbkdf2SHA256(r3, r4, r5, r6)
        L59:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r4)
            r5.append(r4)
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r3)
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            return r3
        L71:
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.hash.PBKDF2.a
            java.lang.String r4 = "salt parameter is null or length is not enough"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
    }

    public static byte[] pbkdf2SHA256(char[] r3, byte[] r4, int r5, int r6) {
            r0 = 0
            byte[] r0 = new byte[r0]
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 26
            if (r1 >= r2) goto L11
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.hash.PBKDF2.a
            java.lang.String r4 = "system version not high than 26"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r0
        L11:
            r0 = 1
            byte[] r3 = a(r3, r4, r5, r6, r0)
            return r3
    }

    @java.lang.Deprecated
    public static boolean validatePassword(java.lang.String r1, java.lang.String r2) {
            r0 = 10000(0x2710, float:1.4013E-41)
            boolean r1 = validatePassword(r1, r2, r0)
            return r1
    }

    @java.lang.Deprecated
    public static boolean validatePassword(java.lang.String r3, java.lang.String r4, int r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 != 0) goto L35
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L35
            int r0 = r4.length()
            r2 = 16
            if (r0 >= r2) goto L16
            goto L35
        L16:
            java.lang.String r0 = r4.substring(r1, r2)
            java.lang.String r4 = r4.substring(r2)
            char[] r3 = r3.toCharArray()
            byte[] r0 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r0)
            r1 = 256(0x100, float:3.59E-43)
            byte[] r3 = pbkdf2(r3, r0, r5, r1)
            byte[] r4 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r4)
            boolean r3 = a(r3, r4)
            return r3
        L35:
            return r1
    }

    public static boolean validatePasswordNew(java.lang.String r1, java.lang.String r2) {
            r0 = 10000(0x2710, float:1.4013E-41)
            boolean r1 = validatePasswordNew(r1, r2, r0)
            return r1
    }

    public static boolean validatePasswordNew(java.lang.String r4, java.lang.String r5, int r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 != 0) goto L48
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L48
            int r0 = r5.length()
            r2 = 32
            if (r0 >= r2) goto L16
            goto L48
        L16:
            java.lang.String r0 = r5.substring(r1, r2)
            java.lang.String r5 = r5.substring(r2)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 26
            r3 = 256(0x100, float:3.59E-43)
            if (r1 >= r2) goto L33
            char[] r4 = r4.toCharArray()
            byte[] r0 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r0)
            byte[] r4 = pbkdf2(r4, r0, r6, r3)
            goto L3f
        L33:
            char[] r4 = r4.toCharArray()
            byte[] r0 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r0)
            byte[] r4 = pbkdf2SHA256(r4, r0, r6, r3)
        L3f:
            byte[] r5 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r5)
            boolean r4 = a(r4, r5)
            return r4
        L48:
            return r1
    }
}

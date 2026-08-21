package com.huawei.secure.android.common.encrypt.aes;

public class CipherUtil {
    private static final java.lang.String a = "CipherUtil";
    private static final java.lang.String b = "AES/GCM/NoPadding";
    private static final java.lang.String c = "AES/CBC/PKCS5Padding";
    private static final java.lang.String d = "AES";
    private static final java.lang.String e = "";
    private static final int f = 16;
    private static final int g = 12;
    private static final int h = 16;

    public CipherUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static int a(javax.crypto.Cipher r0, byte[] r1) {
            if (r0 == 0) goto La
            if (r1 == 0) goto La
            int r1 = r1.length
            int r0 = r0.getOutputSize(r1)
            return r0
        La:
            r0 = -1
            return r0
    }

    private static javax.crypto.Cipher a(byte[] r1, byte[] r2, int r3) {
            java.lang.String r0 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r1 = a(r1, r2, r3, r0)
            return r1
    }

    private static javax.crypto.Cipher a(byte[] r4, byte[] r5, int r6, java.lang.String r7) {
            r0 = 0
            java.lang.String r1 = "CipherUtil"
            if (r4 == 0) goto L54
            int r2 = r4.length
            r3 = 16
            if (r2 < r3) goto L54
            if (r5 == 0) goto L54
            int r2 = r5.length
            r3 = 12
            if (r2 < r3) goto L54
            boolean r2 = com.huawei.secure.android.common.encrypt.aes.AesGcm.isBuildVersionHigherThan19()
            if (r2 != 0) goto L18
            goto L54
        L18:
            javax.crypto.spec.SecretKeySpec r2 = new javax.crypto.spec.SecretKeySpec     // Catch: java.security.GeneralSecurityException -> L3a
            java.lang.String r3 = "AES"
            r2.<init>(r4, r3)     // Catch: java.security.GeneralSecurityException -> L3a
            javax.crypto.Cipher r4 = javax.crypto.Cipher.getInstance(r7)     // Catch: java.security.GeneralSecurityException -> L3a
            java.lang.String r3 = "AES/GCM/NoPadding"
            boolean r7 = r3.equals(r7)     // Catch: java.security.GeneralSecurityException -> L3a
            if (r7 == 0) goto L30
            java.security.spec.AlgorithmParameterSpec r5 = com.huawei.secure.android.common.encrypt.aes.AesGcm.getGcmAlgorithmParams(r5)     // Catch: java.security.GeneralSecurityException -> L3a
            goto L36
        L30:
            javax.crypto.spec.IvParameterSpec r7 = new javax.crypto.spec.IvParameterSpec     // Catch: java.security.GeneralSecurityException -> L3a
            r7.<init>(r5)     // Catch: java.security.GeneralSecurityException -> L3a
            r5 = r7
        L36:
            r4.init(r6, r2, r5)     // Catch: java.security.GeneralSecurityException -> L3a
            return r4
        L3a:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "GCM encrypt data error"
            r5.append(r6)
            java.lang.String r4 = r4.getMessage()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
            return r0
        L54:
            java.lang.String r4 = "gcm encrypt param is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
            return r0
    }

    private static javax.crypto.Cipher b(byte[] r1, byte[] r2, int r3) {
            java.lang.String r0 = "AES/GCM/NoPadding"
            javax.crypto.Cipher r1 = a(r1, r2, r3, r0)
            return r1
    }

    public static javax.crypto.Cipher getAesCbcDecryptCipher(byte[] r0, javax.crypto.Cipher r1) {
            byte[] r1 = r1.getIV()
            javax.crypto.Cipher r0 = getAesCbcDecryptCipher(r0, r1)
            return r0
    }

    public static javax.crypto.Cipher getAesCbcDecryptCipher(byte[] r1, byte[] r2) {
            r0 = 2
            javax.crypto.Cipher r1 = a(r1, r2, r0)
            return r1
    }

    public static javax.crypto.Cipher getAesCbcEncryptCipher(byte[] r1) {
            r0 = 16
            byte[] r0 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.generateSecureRandom(r0)
            javax.crypto.Cipher r1 = getAesCbcEncryptCipher(r1, r0)
            return r1
    }

    public static javax.crypto.Cipher getAesCbcEncryptCipher(byte[] r1, byte[] r2) {
            r0 = 1
            javax.crypto.Cipher r1 = a(r1, r2, r0)
            return r1
    }

    public static int getAesCbcEncryptContentLen(byte[] r1, byte[] r2) {
            r0 = 16
            byte[] r0 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.generateSecureRandom(r0)
            int r1 = getAesCbcEncryptContentLen(r1, r2, r0)
            return r1
    }

    public static int getAesCbcEncryptContentLen(byte[] r0, byte[] r1, byte[] r2) {
            javax.crypto.Cipher r1 = getAesCbcEncryptCipher(r1, r2)
            int r0 = a(r1, r0)
            return r0
    }

    public static javax.crypto.Cipher getAesGcmDecryptCipher(byte[] r0, javax.crypto.Cipher r1) {
            byte[] r1 = r1.getIV()
            javax.crypto.Cipher r0 = getAesGcmDecryptCipher(r0, r1)
            return r0
    }

    public static javax.crypto.Cipher getAesGcmDecryptCipher(byte[] r1, byte[] r2) {
            r0 = 2
            javax.crypto.Cipher r1 = b(r1, r2, r0)
            return r1
    }

    public static javax.crypto.Cipher getAesGcmEncryptCipher(byte[] r3) {
            r0 = 12
            byte[] r0 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.generateSecureRandom(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getEncryptCipher: iv is : "
            r1.append(r2)
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r0)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "CipherUtil"
            com.huawei.secure.android.common.encrypt.utils.b.a(r2, r1)
            javax.crypto.Cipher r3 = getAesGcmEncryptCipher(r3, r0)
            return r3
    }

    public static javax.crypto.Cipher getAesGcmEncryptCipher(byte[] r1, byte[] r2) {
            r0 = 1
            javax.crypto.Cipher r1 = b(r1, r2, r0)
            return r1
    }

    public static int getAesGcmEncryptContentLen(byte[] r1, byte[] r2) {
            r0 = 12
            byte[] r0 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.generateSecureRandom(r0)
            int r1 = getAesGcmEncryptContentLen(r1, r2, r0)
            return r1
    }

    public static int getAesGcmEncryptContentLen(byte[] r0, byte[] r1, byte[] r2) {
            javax.crypto.Cipher r1 = getAesGcmEncryptCipher(r1, r2)
            int r0 = a(r1, r0)
            return r0
    }

    public static int getContent(javax.crypto.Cipher r0, byte[] r1, int r2, int r3, byte[] r4, int r5) throws javax.crypto.BadPaddingException, javax.crypto.IllegalBlockSizeException, javax.crypto.ShortBufferException {
            if (r0 == 0) goto La
            if (r1 != 0) goto L5
            goto La
        L5:
            int r0 = r0.doFinal(r1, r2, r3, r4, r5)
            return r0
        La:
            java.lang.String r0 = "CipherUtil"
            java.lang.String r1 = "getEncryptCOntent: cipher is null or content is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r1)
            r0 = -1
            return r0
    }

    public static int getContent(javax.crypto.Cipher r4, byte[] r5, byte[] r6) {
            r0 = -1
            java.lang.String r1 = "CipherUtil"
            if (r4 == 0) goto L21
            if (r5 != 0) goto L8
            goto L21
        L8:
            r2 = 0
            int r3 = r5.length     // Catch: javax.crypto.ShortBufferException -> Lf javax.crypto.IllegalBlockSizeException -> L15 javax.crypto.BadPaddingException -> L1b
            int r4 = r4.doFinal(r5, r2, r3, r6)     // Catch: javax.crypto.ShortBufferException -> Lf javax.crypto.IllegalBlockSizeException -> L15 javax.crypto.BadPaddingException -> L1b
            return r4
        Lf:
            java.lang.String r4 = "getContent: ShortBufferException"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
            goto L20
        L15:
            java.lang.String r4 = "getContent: IllegalBlockSizeException"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
            goto L20
        L1b:
            java.lang.String r4 = "getContent: BadPaddingException"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
        L20:
            return r0
        L21:
            java.lang.String r4 = "getEncryptCOntent: cipher is null or content is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r4)
            return r0
    }

    public static byte[] getContent(javax.crypto.Cipher r3, byte[] r4) {
            r0 = 0
            java.lang.String r1 = "CipherUtil"
            if (r3 == 0) goto L1c
            if (r4 != 0) goto L8
            goto L1c
        L8:
            int r2 = r4.length     // Catch: javax.crypto.IllegalBlockSizeException -> Le javax.crypto.BadPaddingException -> L14
            byte[] r3 = r3.doFinal(r4, r0, r2)     // Catch: javax.crypto.IllegalBlockSizeException -> Le javax.crypto.BadPaddingException -> L14
            return r3
        Le:
            java.lang.String r3 = "getContent: IllegalBlockSizeException"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r3)
            goto L19
        L14:
            java.lang.String r3 = "getContent: BadPaddingException"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r3)
        L19:
            byte[] r3 = new byte[r0]
            return r3
        L1c:
            java.lang.String r3 = "getEncryptCOntent: cipher is null or content is null"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r3)
            byte[] r3 = new byte[r0]
            return r3
    }
}

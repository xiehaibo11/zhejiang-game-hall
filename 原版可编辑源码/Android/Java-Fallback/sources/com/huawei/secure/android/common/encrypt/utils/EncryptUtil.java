package com.huawei.secure.android.common.encrypt.utils;

public class EncryptUtil {
    private static final java.lang.String a = "EncryptUtil";
    private static final java.lang.String b = "RSA";
    private static boolean c = false;
    private static boolean d = true;

    static {
            return
    }

    public EncryptUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.security.SecureRandom a() {
            java.lang.String r0 = "EncryptUtil"
            java.lang.String r1 = "generateSecureRandomNew "
            com.huawei.secure.android.common.encrypt.utils.b.a(r0, r1)
            r1 = 0
            r2 = 0
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L39 java.security.NoSuchAlgorithmException -> L5e
            r4 = 26
            if (r3 < r4) goto L14
            java.security.SecureRandom r2 = java.security.SecureRandom.getInstanceStrong()     // Catch: java.lang.Throwable -> L39 java.security.NoSuchAlgorithmException -> L5e
            goto L1a
        L14:
            java.lang.String r3 = "SHA1PRNG"
            java.security.SecureRandom r2 = java.security.SecureRandom.getInstance(r3)     // Catch: java.lang.Throwable -> L39 java.security.NoSuchAlgorithmException -> L5e
        L1a:
            r3 = 1
            org.bouncycastle.crypto.engines.AESEngine r4 = new org.bouncycastle.crypto.engines.AESEngine     // Catch: java.lang.Throwable -> L39 java.security.NoSuchAlgorithmException -> L5e
            r4.<init>()     // Catch: java.lang.Throwable -> L39 java.security.NoSuchAlgorithmException -> L5e
            r5 = 256(0x100, float:3.59E-43)
            r6 = 384(0x180, float:5.38E-43)
            r7 = 32
            byte[] r7 = new byte[r7]     // Catch: java.lang.Throwable -> L39 java.security.NoSuchAlgorithmException -> L5e
            r2.nextBytes(r7)     // Catch: java.lang.Throwable -> L39 java.security.NoSuchAlgorithmException -> L5e
            org.bouncycastle.crypto.prng.SP800SecureRandomBuilder r8 = new org.bouncycastle.crypto.prng.SP800SecureRandomBuilder     // Catch: java.lang.Throwable -> L39 java.security.NoSuchAlgorithmException -> L5e
            r8.<init>(r2, r3)     // Catch: java.lang.Throwable -> L39 java.security.NoSuchAlgorithmException -> L5e
            org.bouncycastle.crypto.prng.SP800SecureRandomBuilder r3 = r8.setEntropyBitsRequired(r6)     // Catch: java.lang.Throwable -> L39 java.security.NoSuchAlgorithmException -> L5e
            org.bouncycastle.crypto.prng.SP800SecureRandom r0 = r3.buildCTR(r4, r5, r7, r1)     // Catch: java.lang.Throwable -> L39 java.security.NoSuchAlgorithmException -> L5e
            return r0
        L39:
            r3 = move-exception
            boolean r4 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.d
            if (r4 == 0) goto L63
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "exception : "
            r4.append(r5)
            java.lang.String r3 = r3.getMessage()
            r4.append(r3)
            java.lang.String r3 = " , you should implementation bcprov-jdk15on library"
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r3)
            com.huawei.secure.android.common.encrypt.utils.EncryptUtil.d = r1
            goto L63
        L5e:
            java.lang.String r1 = "NoSuchAlgorithmException"
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r1)
        L63:
            return r2
    }

    private static byte[] a(int r1) {
            java.security.SecureRandom r0 = a()
            if (r0 != 0) goto La
            r1 = 0
            byte[] r1 = new byte[r1]
            return r1
        La:
            byte[] r1 = new byte[r1]
            r0.nextBytes(r1)
            return r1
    }

    public static java.security.SecureRandom genSecureRandom() {
            boolean r0 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.c
            if (r0 != 0) goto L1f
            r0 = 0
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.security.NoSuchAlgorithmException -> L17
            r2 = 26
            if (r1 < r2) goto L10
            java.security.SecureRandom r0 = java.security.SecureRandom.getInstanceStrong()     // Catch: java.security.NoSuchAlgorithmException -> L17
            goto L1e
        L10:
            java.lang.String r1 = "SHA1PRNG"
            java.security.SecureRandom r0 = java.security.SecureRandom.getInstance(r1)     // Catch: java.security.NoSuchAlgorithmException -> L17
            goto L1e
        L17:
            java.lang.String r1 = "EncryptUtil"
            java.lang.String r2 = "genSecureRandom: NoSuchAlgorithmException"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r2)
        L1e:
            return r0
        L1f:
            java.security.SecureRandom r0 = a()
            return r0
    }

    public static byte[] generateSecureRandom(int r2) {
            boolean r0 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.c
            if (r0 != 0) goto L26
            byte[] r2 = new byte[r2]
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.security.NoSuchAlgorithmException -> L1b
            r1 = 26
            if (r0 < r1) goto L11
            java.security.SecureRandom r0 = java.security.SecureRandom.getInstanceStrong()     // Catch: java.security.NoSuchAlgorithmException -> L1b
            goto L17
        L11:
            java.lang.String r0 = "SHA1PRNG"
            java.security.SecureRandom r0 = java.security.SecureRandom.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L1b
        L17:
            r0.nextBytes(r2)     // Catch: java.security.NoSuchAlgorithmException -> L1b
            return r2
        L1b:
            java.lang.String r2 = "EncryptUtil"
            java.lang.String r0 = "getSecureRandomBytes: NoSuchAlgorithmException"
            android.util.Log.e(r2, r0)
            r2 = 0
            byte[] r2 = new byte[r2]
            return r2
        L26:
            byte[] r2 = a(r2)
            return r2
    }

    public static java.lang.String generateSecureRandomStr(int r0) {
            byte[] r0 = generateSecureRandom(r0)
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r0)
            return r0
    }

    public static java.security.PrivateKey getPrivateKey(java.lang.String r4) {
            java.lang.String r0 = "EncryptUtil"
            r1 = 0
            r2 = 0
            byte[] r4 = android.util.Base64.decode(r4, r1)     // Catch: java.lang.Exception -> L32 java.lang.IllegalArgumentException -> L4c
            java.security.spec.PKCS8EncodedKeySpec r1 = new java.security.spec.PKCS8EncodedKeySpec     // Catch: java.security.GeneralSecurityException -> L18
            r1.<init>(r4)     // Catch: java.security.GeneralSecurityException -> L18
            java.lang.String r4 = "RSA"
            java.security.KeyFactory r4 = java.security.KeyFactory.getInstance(r4)     // Catch: java.security.GeneralSecurityException -> L18
            java.security.PrivateKey r4 = r4.generatePrivate(r1)     // Catch: java.security.GeneralSecurityException -> L18
            return r4
        L18:
            r4 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "load Key Exception:"
            r1.append(r3)
            java.lang.String r4 = r4.getMessage()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r4)
            return r2
        L32:
            r4 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "base64 decode Exception"
            r1.append(r3)
            java.lang.String r4 = r4.getMessage()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r4)
            return r2
        L4c:
            java.lang.String r4 = "base64 decode IllegalArgumentException"
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r4)
            return r2
    }

    public static java.security.interfaces.RSAPublicKey getPublicKey(java.lang.String r4) {
            java.lang.String r0 = "EncryptUtil"
            r1 = 0
            r2 = 0
            byte[] r4 = android.util.Base64.decode(r4, r1)     // Catch: java.lang.Exception -> L34 java.lang.IllegalArgumentException -> L4e
            java.lang.String r1 = "RSA"
            java.security.KeyFactory r1 = java.security.KeyFactory.getInstance(r1)     // Catch: java.security.GeneralSecurityException -> L1a
            java.security.spec.X509EncodedKeySpec r3 = new java.security.spec.X509EncodedKeySpec     // Catch: java.security.GeneralSecurityException -> L1a
            r3.<init>(r4)     // Catch: java.security.GeneralSecurityException -> L1a
            java.security.PublicKey r4 = r1.generatePublic(r3)     // Catch: java.security.GeneralSecurityException -> L1a
            java.security.interfaces.RSAPublicKey r4 = (java.security.interfaces.RSAPublicKey) r4     // Catch: java.security.GeneralSecurityException -> L1a
            return r4
        L1a:
            r4 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "load Key Exception:"
            r1.append(r3)
            java.lang.String r4 = r4.getMessage()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r4)
            return r2
        L34:
            r4 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "base64 decode Exception"
            r1.append(r3)
            java.lang.String r4 = r4.getMessage()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r4)
            return r2
        L4e:
            java.lang.String r4 = "base64 decode IllegalArgumentException"
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r4)
            return r2
    }

    public static boolean isBouncycastleFlag() {
            boolean r0 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.c
            return r0
    }

    public static void setBouncycastleFlag(boolean r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setBouncycastleFlag: "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "EncryptUtil"
            com.huawei.secure.android.common.encrypt.utils.b.c(r1, r0)
            com.huawei.secure.android.common.encrypt.utils.EncryptUtil.c = r2
            return
    }
}

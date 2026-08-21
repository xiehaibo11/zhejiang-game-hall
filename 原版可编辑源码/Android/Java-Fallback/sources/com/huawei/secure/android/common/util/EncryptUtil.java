package com.huawei.secure.android.common.util;

public class EncryptUtil {
    private static final java.lang.String a = "EncryptUtil";
    private static final java.lang.String b = "RSA";

    static {
            return
    }

    public EncryptUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    @java.lang.Deprecated
    public static byte[] generateSecureRandom(int r2) {
            byte[] r2 = new byte[r2]
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.security.NoSuchAlgorithmException -> L17
            r1 = 26
            if (r0 < r1) goto Ld
            java.security.SecureRandom r0 = java.security.SecureRandom.getInstanceStrong()     // Catch: java.security.NoSuchAlgorithmException -> L17
            goto L13
        Ld:
            java.lang.String r0 = "SHA1PRNG"
            java.security.SecureRandom r0 = java.security.SecureRandom.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L17
        L13:
            r0.nextBytes(r2)     // Catch: java.security.NoSuchAlgorithmException -> L17
            return r2
        L17:
            java.lang.String r2 = com.huawei.secure.android.common.util.EncryptUtil.a
            java.lang.String r0 = "getSecureRandomBytes: NoSuchAlgorithmException"
            android.util.Log.e(r2, r0)
            r2 = 0
            byte[] r2 = new byte[r2]
            return r2
    }

    @java.lang.Deprecated
    public static java.lang.String generateSecureRandomStr(int r0) {
            byte[] r0 = generateSecureRandom(r0)
            java.lang.String r0 = com.huawei.secure.android.common.util.HexUtil.byteArray2HexStr(r0)
            return r0
    }

    @java.lang.Deprecated
    public static java.security.PrivateKey getPrivateKey(java.lang.String r5) {
            r0 = 0
            r1 = 0
            r2 = 1
            byte[] r5 = android.util.Base64.decode(r5, r0)     // Catch: java.lang.Exception -> L33 java.lang.IllegalArgumentException -> L3b
            java.security.spec.PKCS8EncodedKeySpec r0 = new java.security.spec.PKCS8EncodedKeySpec     // Catch: java.security.GeneralSecurityException -> L17
            r0.<init>(r5)     // Catch: java.security.GeneralSecurityException -> L17
            java.lang.String r5 = "RSA"
            java.security.KeyFactory r5 = java.security.KeyFactory.getInstance(r5)     // Catch: java.security.GeneralSecurityException -> L17
            java.security.PrivateKey r5 = r5.generatePrivate(r0)     // Catch: java.security.GeneralSecurityException -> L17
            return r5
        L17:
            r5 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.util.EncryptUtil.a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "load Key Exception:"
            r3.append(r4)
            java.lang.String r5 = r5.getMessage()
            r3.append(r5)
            java.lang.String r5 = r3.toString()
            com.huawei.secure.android.common.util.LogsUtil.e(r0, r5, r2)
            return r1
        L33:
            java.lang.String r5 = com.huawei.secure.android.common.util.EncryptUtil.a
            java.lang.String r0 = "base64 decode Exception"
            com.huawei.secure.android.common.util.LogsUtil.e(r5, r0, r2)
            return r1
        L3b:
            java.lang.String r5 = com.huawei.secure.android.common.util.EncryptUtil.a
            java.lang.String r0 = "base64 decode IllegalArgumentException"
            com.huawei.secure.android.common.util.LogsUtil.e(r5, r0, r2)
            return r1
    }

    @java.lang.Deprecated
    public static java.security.interfaces.RSAPublicKey getPublicKey(java.lang.String r5) {
            r0 = 0
            r1 = 0
            r2 = 1
            byte[] r5 = android.util.Base64.decode(r5, r0)     // Catch: java.lang.Exception -> L35 java.lang.IllegalArgumentException -> L3d
            java.lang.String r0 = "RSA"
            java.security.KeyFactory r0 = java.security.KeyFactory.getInstance(r0)     // Catch: java.security.GeneralSecurityException -> L19
            java.security.spec.X509EncodedKeySpec r3 = new java.security.spec.X509EncodedKeySpec     // Catch: java.security.GeneralSecurityException -> L19
            r3.<init>(r5)     // Catch: java.security.GeneralSecurityException -> L19
            java.security.PublicKey r5 = r0.generatePublic(r3)     // Catch: java.security.GeneralSecurityException -> L19
            java.security.interfaces.RSAPublicKey r5 = (java.security.interfaces.RSAPublicKey) r5     // Catch: java.security.GeneralSecurityException -> L19
            return r5
        L19:
            r5 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.util.EncryptUtil.a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "load Key Exception:"
            r3.append(r4)
            java.lang.String r5 = r5.getMessage()
            r3.append(r5)
            java.lang.String r5 = r3.toString()
            com.huawei.secure.android.common.util.LogsUtil.e(r0, r5, r2)
            return r1
        L35:
            java.lang.String r5 = com.huawei.secure.android.common.util.EncryptUtil.a
            java.lang.String r0 = "base64 decode Exception"
            com.huawei.secure.android.common.util.LogsUtil.e(r5, r0, r2)
            return r1
        L3d:
            java.lang.String r5 = com.huawei.secure.android.common.util.EncryptUtil.a
            java.lang.String r0 = "base64 decode IllegalArgumentException"
            com.huawei.secure.android.common.util.LogsUtil.e(r5, r0, r2)
            return r1
    }
}

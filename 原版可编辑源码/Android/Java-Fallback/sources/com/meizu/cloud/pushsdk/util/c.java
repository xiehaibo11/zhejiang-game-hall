package com.meizu.cloud.pushsdk.util;

public class c {
    private static final java.nio.charset.Charset a = null;

    static {
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            com.meizu.cloud.pushsdk.util.c.a = r0
            return
    }

    public static java.lang.String a(java.lang.String r2, java.lang.String r3) {
            r0 = 0
            if (r2 == 0) goto L39
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L1e
            if (r1 != 0) goto L39
            byte[] r3 = b(r3)     // Catch: java.lang.Exception -> L1e
            java.security.interfaces.RSAPublicKey r2 = a(r2)     // Catch: java.lang.Exception -> L1e
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L1e
            byte[] r2 = a(r2, r3)     // Catch: java.lang.Exception -> L1e
            java.nio.charset.Charset r3 = com.meizu.cloud.pushsdk.util.c.a     // Catch: java.lang.Exception -> L1e
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> L1e
            r0 = r1
            goto L39
        L1e:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "decrypt "
            r3.append(r1)
            java.lang.String r2 = r2.getMessage()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.lang.String r3 = "RSAUtils"
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r2)
        L39:
            return r0
    }

    private static java.security.interfaces.RSAPublicKey a(java.lang.String r3) {
            java.lang.String r0 = "RSAUtils"
            byte[] r3 = b(r3)     // Catch: java.security.spec.InvalidKeySpecException -> L18 java.security.NoSuchAlgorithmException -> L28
            java.lang.String r1 = "RSA"
            java.security.KeyFactory r1 = java.security.KeyFactory.getInstance(r1)     // Catch: java.security.spec.InvalidKeySpecException -> L18 java.security.NoSuchAlgorithmException -> L28
            java.security.spec.X509EncodedKeySpec r2 = new java.security.spec.X509EncodedKeySpec     // Catch: java.security.spec.InvalidKeySpecException -> L18 java.security.NoSuchAlgorithmException -> L28
            r2.<init>(r3)     // Catch: java.security.spec.InvalidKeySpecException -> L18 java.security.NoSuchAlgorithmException -> L28
            java.security.PublicKey r3 = r1.generatePublic(r2)     // Catch: java.security.spec.InvalidKeySpecException -> L18 java.security.NoSuchAlgorithmException -> L28
            java.security.interfaces.RSAPublicKey r3 = (java.security.interfaces.RSAPublicKey) r3     // Catch: java.security.spec.InvalidKeySpecException -> L18 java.security.NoSuchAlgorithmException -> L28
            goto L42
        L18:
            r3 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "loadPublicKey InvalidKeySpecException "
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
            goto L37
        L28:
            r3 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "loadPublicKey NoSuchAlgorithmException "
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
        L37:
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r3)
            r3 = 0
        L42:
            return r3
    }

    private static byte[] a(java.security.PublicKey r2, byte[] r3) {
            java.lang.String r0 = "RSA/ECB/PKCS1Padding"
            javax.crypto.Cipher r0 = javax.crypto.Cipher.getInstance(r0)
            r1 = 2
            r0.init(r1, r2)
            byte[] r2 = r0.doFinal(r3)
            return r2
    }

    private static byte[] b(java.lang.String r0) {
            byte[] r0 = com.meizu.cloud.pushsdk.c.g.a.a(r0)
            return r0
    }
}

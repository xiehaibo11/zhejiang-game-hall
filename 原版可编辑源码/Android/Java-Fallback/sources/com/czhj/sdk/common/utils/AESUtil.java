package com.czhj.sdk.common.utils;

public class AESUtil {
    public AESUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String DecryptString(java.lang.String r4, java.lang.String r5) {
            java.lang.String r0 = "utf-8"
            r1 = 0
            java.lang.System.nanoTime()     // Catch: java.lang.Exception -> L3a
            java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L3a
            int r2 = r5.length()     // Catch: java.lang.Exception -> L3a
            r3 = 16
            if (r2 == r3) goto L12
            return r1
        L12:
            byte[] r5 = r5.getBytes(r0)     // Catch: java.lang.Exception -> L3a
            javax.crypto.spec.SecretKeySpec r2 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L3a
            java.lang.String r3 = "AES"
            r2.<init>(r5, r3)     // Catch: java.lang.Exception -> L3a
            java.lang.String r5 = "AES/ECB/PKCS5Padding"
            javax.crypto.Cipher r5 = javax.crypto.Cipher.getInstance(r5)     // Catch: java.lang.Exception -> L3a
            r3 = 2
            r5.init(r3, r2)     // Catch: java.lang.Exception -> L3a
            byte[] r4 = android.util.Base64.decode(r4, r3)     // Catch: java.lang.Exception -> L3a
            byte[] r4 = r5.doFinal(r4)     // Catch: java.lang.Exception -> L35
            java.lang.String r5 = new java.lang.String     // Catch: java.lang.Exception -> L35
            r5.<init>(r4, r0)     // Catch: java.lang.Exception -> L35
            return r5
        L35:
            r4 = move-exception
            r4.printStackTrace()     // Catch: java.lang.Exception -> L3a
            return r1
        L3a:
            r4 = move-exception
            r4.printStackTrace()
            return r1
    }

    public static byte[] Encrypt(byte[] r2, java.lang.String r3) throws java.lang.Exception {
            int r0 = r2.length
            if (r0 == 0) goto L25
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto La
            goto L25
        La:
            java.lang.String r0 = "utf-8"
            byte[] r3 = r3.getBytes(r0)
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec
            java.lang.String r1 = "AES"
            r0.<init>(r3, r1)
            java.lang.String r3 = "AES/ECB/PKCS5Padding"
            javax.crypto.Cipher r3 = javax.crypto.Cipher.getInstance(r3)
            r1 = 1
            r3.init(r1, r0)
            byte[] r2 = r3.doFinal(r2)
        L25:
            return r2
    }

    public static java.lang.String EncryptString(java.lang.String r3, java.lang.String r4) {
            java.lang.System.nanoTime()
            java.lang.System.currentTimeMillis()
            byte[] r3 = r3.getBytes()
            int r0 = r3.length
            r1 = 0
            if (r0 == 0) goto L52
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L15
            goto L52
        L15:
            r0 = 0
            byte[] r0 = new byte[r0]
            java.lang.String r2 = "utf-8"
            byte[] r0 = r4.getBytes(r2)     // Catch: java.io.UnsupportedEncodingException -> L1f
            goto L23
        L1f:
            r4 = move-exception
            r4.printStackTrace()
        L23:
            javax.crypto.spec.SecretKeySpec r4 = new javax.crypto.spec.SecretKeySpec
            java.lang.String r2 = "AES"
            r4.<init>(r0, r2)
            java.lang.String r0 = "AES/ECB/PKCS5Padding"
            javax.crypto.Cipher r0 = javax.crypto.Cipher.getInstance(r0)     // Catch: javax.crypto.NoSuchPaddingException -> L31 java.security.NoSuchAlgorithmException -> L36
            goto L3b
        L31:
            r3 = move-exception
            r3.printStackTrace()
            return r1
        L36:
            r0 = move-exception
            r0.printStackTrace()
            r0 = r1
        L3b:
            r2 = 1
            r0.init(r2, r4)     // Catch: java.security.InvalidKeyException -> L4e
            byte[] r3 = r0.doFinal(r3)     // Catch: java.lang.Exception -> L49
            r4 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r4)
            return r3
        L49:
            r3 = move-exception
            r3.printStackTrace()
            return r1
        L4e:
            r3 = move-exception
            r3.printStackTrace()
        L52:
            return r1
    }
}

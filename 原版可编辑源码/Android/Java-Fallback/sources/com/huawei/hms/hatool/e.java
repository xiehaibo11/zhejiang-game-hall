package com.huawei.hms.hatool;

public class e {
    public static java.lang.String a(java.lang.String r1, java.lang.String r2) {
            java.lang.String r0 = "UTF-8"
            byte[] r2 = r2.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> Lb
            java.lang.String r1 = a(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> Lb
            return r1
        Lb:
            java.lang.String r1 = "hmsSdk"
            java.lang.String r2 = "Unsupported encoding exception,utf-8"
            com.huawei.hms.hatool.y.c(r1, r2)
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String a(java.lang.String r3, byte[] r4) {
            java.lang.String r0 = ""
            java.lang.String r1 = "hmsSdk"
            if (r4 == 0) goto L24
            int r2 = r4.length
            if (r2 != 0) goto La
            goto L24
        La:
            byte[] r3 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r3)     // Catch: java.security.spec.InvalidKeySpecException -> L1b java.security.NoSuchAlgorithmException -> L1e
            java.security.PublicKey r3 = a(r3)     // Catch: java.security.spec.InvalidKeySpecException -> L1b java.security.NoSuchAlgorithmException -> L1e
            byte[] r3 = a(r4, r3)     // Catch: java.security.spec.InvalidKeySpecException -> L1b java.security.NoSuchAlgorithmException -> L1e
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r3)     // Catch: java.security.spec.InvalidKeySpecException -> L1b java.security.NoSuchAlgorithmException -> L1e
            return r3
        L1b:
            java.lang.String r3 = "encrypt(): Invalid key specification"
            goto L20
        L1e:
            java.lang.String r3 = "encrypt(): getInstance - No such algorithm,transformation"
        L20:
            com.huawei.hms.hatool.y.f(r1, r3)
            return r0
        L24:
            java.lang.String r3 = "encrypt: content is empty or null"
            com.huawei.hms.hatool.y.f(r1, r3)
            return r0
    }

    public static java.security.PublicKey a(byte[] r1) {
            java.security.spec.X509EncodedKeySpec r0 = new java.security.spec.X509EncodedKeySpec
            r0.<init>(r1)
            java.lang.String r1 = "RSA"
            java.security.KeyFactory r1 = java.security.KeyFactory.getInstance(r1)
            java.security.PublicKey r1 = r1.generatePublic(r0)
            return r1
    }

    public static byte[] a(byte[] r3, java.security.PublicKey r4) {
            java.lang.String r0 = "hmsSdk"
            if (r4 == 0) goto L13
            java.lang.String r1 = "RSA/ECB/OAEPWITHSHA-1ANDMGF1PADDING"
            javax.crypto.Cipher r1 = javax.crypto.Cipher.getInstance(r1)     // Catch: javax.crypto.IllegalBlockSizeException -> L1b javax.crypto.BadPaddingException -> L1e javax.crypto.NoSuchPaddingException -> L21 java.security.InvalidKeyException -> L24 java.security.NoSuchAlgorithmException -> L27 java.io.UnsupportedEncodingException -> L2a
            r2 = 1
            r1.init(r2, r4)     // Catch: javax.crypto.IllegalBlockSizeException -> L1b javax.crypto.BadPaddingException -> L1e javax.crypto.NoSuchPaddingException -> L21 java.security.InvalidKeyException -> L24 java.security.NoSuchAlgorithmException -> L27 java.io.UnsupportedEncodingException -> L2a
            byte[] r3 = r1.doFinal(r3)     // Catch: javax.crypto.IllegalBlockSizeException -> L1b javax.crypto.BadPaddingException -> L1e javax.crypto.NoSuchPaddingException -> L21 java.security.InvalidKeyException -> L24 java.security.NoSuchAlgorithmException -> L27 java.io.UnsupportedEncodingException -> L2a
            return r3
        L13:
            java.io.UnsupportedEncodingException r3 = new java.io.UnsupportedEncodingException     // Catch: javax.crypto.IllegalBlockSizeException -> L1b javax.crypto.BadPaddingException -> L1e javax.crypto.NoSuchPaddingException -> L21 java.security.InvalidKeyException -> L24 java.security.NoSuchAlgorithmException -> L27 java.io.UnsupportedEncodingException -> L2a
            java.lang.String r4 = "The loaded public key is null"
            r3.<init>(r4)     // Catch: javax.crypto.IllegalBlockSizeException -> L1b javax.crypto.BadPaddingException -> L1e javax.crypto.NoSuchPaddingException -> L21 java.security.InvalidKeyException -> L24 java.security.NoSuchAlgorithmException -> L27 java.io.UnsupportedEncodingException -> L2a
            throw r3     // Catch: javax.crypto.IllegalBlockSizeException -> L1b javax.crypto.BadPaddingException -> L1e javax.crypto.NoSuchPaddingException -> L21 java.security.InvalidKeyException -> L24 java.security.NoSuchAlgorithmException -> L27 java.io.UnsupportedEncodingException -> L2a
        L1b:
            java.lang.String r3 = "rsaEncrypt(): doFinal - The provided block is not filled with"
            goto L2c
        L1e:
            java.lang.String r3 = "rsaEncrypt():False filling parameters!"
            goto L2c
        L21:
            java.lang.String r3 = "rsaEncrypt():  No such filling parameters "
            goto L2c
        L24:
            java.lang.String r3 = "rsaEncrypt(): init - Invalid key!"
            goto L2c
        L27:
            java.lang.String r3 = "rsaEncrypt(): getInstance - No such algorithm,transformation"
            goto L2c
        L2a:
            java.lang.String r3 = "rsaEncrypt(): getBytes - Unsupported coding format!"
        L2c:
            com.huawei.hms.hatool.y.f(r0, r3)
            r3 = 0
            byte[] r3 = new byte[r3]
            return r3
    }
}

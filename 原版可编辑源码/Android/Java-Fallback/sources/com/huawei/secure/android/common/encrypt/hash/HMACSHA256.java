package com.huawei.secure.android.common.encrypt.hash;

public abstract class HMACSHA256 {
    private static final java.lang.String a = "HMACSHA256";
    private static final java.lang.String b = "HmacSHA256";
    private static final java.lang.String c = "";
    private static final int d = 32;

    static {
            return
    }

    public HMACSHA256() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String hmacSHA256Encrypt(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L16
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Ld
            goto L16
        Ld:
            byte[] r2 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r2)
            java.lang.String r1 = hmacSHA256Encrypt(r1, r2)
            return r1
        L16:
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String hmacSHA256Encrypt(java.lang.String r3, byte[] r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 != 0) goto L58
            if (r4 != 0) goto Lb
            goto L58
        Lb:
            int r0 = r4.length
            r2 = 32
            if (r0 >= r2) goto L18
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.hash.HMACSHA256.a
            java.lang.String r4 = "hmac key length is not right"
            com.huawei.secure.android.common.encrypt.utils.b.b(r3, r4)
            return r1
        L18:
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec     // Catch: java.security.NoSuchAlgorithmException -> L39 java.security.InvalidKeyException -> L3b java.io.UnsupportedEncodingException -> L3d
            java.lang.String r2 = "HmacSHA256"
            r0.<init>(r4, r2)     // Catch: java.security.NoSuchAlgorithmException -> L39 java.security.InvalidKeyException -> L3b java.io.UnsupportedEncodingException -> L3d
            java.lang.String r4 = r0.getAlgorithm()     // Catch: java.security.NoSuchAlgorithmException -> L39 java.security.InvalidKeyException -> L3b java.io.UnsupportedEncodingException -> L3d
            javax.crypto.Mac r4 = javax.crypto.Mac.getInstance(r4)     // Catch: java.security.NoSuchAlgorithmException -> L39 java.security.InvalidKeyException -> L3b java.io.UnsupportedEncodingException -> L3d
            r4.init(r0)     // Catch: java.security.NoSuchAlgorithmException -> L39 java.security.InvalidKeyException -> L3b java.io.UnsupportedEncodingException -> L3d
            java.lang.String r0 = "UTF-8"
            byte[] r3 = r3.getBytes(r0)     // Catch: java.security.NoSuchAlgorithmException -> L39 java.security.InvalidKeyException -> L3b java.io.UnsupportedEncodingException -> L3d
            byte[] r3 = r4.doFinal(r3)     // Catch: java.security.NoSuchAlgorithmException -> L39 java.security.InvalidKeyException -> L3b java.io.UnsupportedEncodingException -> L3d
            java.lang.String r3 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r3)     // Catch: java.security.NoSuchAlgorithmException -> L39 java.security.InvalidKeyException -> L3b java.io.UnsupportedEncodingException -> L3d
            return r3
        L39:
            r3 = move-exception
            goto L3e
        L3b:
            r3 = move-exception
            goto L3e
        L3d:
            r3 = move-exception
        L3e:
            java.lang.String r4 = com.huawei.secure.android.common.encrypt.hash.HMACSHA256.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "hmacsha256 encrypt exception"
            r0.append(r2)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.huawei.secure.android.common.encrypt.utils.b.b(r4, r3)
        L58:
            return r1
    }
}

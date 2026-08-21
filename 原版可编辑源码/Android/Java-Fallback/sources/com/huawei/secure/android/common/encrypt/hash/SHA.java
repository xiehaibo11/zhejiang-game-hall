package com.huawei.secure.android.common.encrypt.hash;

public final class SHA {
    private static final java.lang.String a = "SHA";
    private static final java.lang.String b = "SHA-256";
    private static final java.lang.String c = "";
    private static final java.lang.String[] d = null;

    static {
            java.lang.String r0 = "SHA-256"
            java.lang.String r1 = "SHA-384"
            java.lang.String r2 = "SHA-512"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            com.huawei.secure.android.common.encrypt.hash.SHA.d = r0
            return
    }

    private SHA() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean a(java.lang.String r5) {
            java.lang.String[] r0 = com.huawei.secure.android.common.encrypt.hash.SHA.d
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L5:
            if (r3 >= r1) goto L14
            r4 = r0[r3]
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L11
            r5 = 1
            return r5
        L11:
            int r3 = r3 + 1
            goto L5
        L14:
            return r2
    }

    public static java.lang.String sha256Encrypt(java.lang.String r1) {
            java.lang.String r0 = "SHA-256"
            java.lang.String r1 = shaEncrypt(r1, r0)
            return r1
    }

    public static java.lang.String shaEncrypt(java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            java.lang.String r1 = ""
            if (r0 != 0) goto L43
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Lf
            goto L43
        Lf:
            boolean r0 = a(r3)
            if (r0 != 0) goto L1d
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.hash.SHA.a
            java.lang.String r3 = "algorithm is not safe or legal"
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
            return r1
        L1d:
            java.security.MessageDigest r3 = java.security.MessageDigest.getInstance(r3)     // Catch: java.security.NoSuchAlgorithmException -> L33 java.io.UnsupportedEncodingException -> L3b
            java.lang.String r0 = "UTF-8"
            byte[] r2 = r2.getBytes(r0)     // Catch: java.security.NoSuchAlgorithmException -> L33 java.io.UnsupportedEncodingException -> L3b
            r3.update(r2)     // Catch: java.security.NoSuchAlgorithmException -> L33 java.io.UnsupportedEncodingException -> L3b
            byte[] r2 = r3.digest()     // Catch: java.security.NoSuchAlgorithmException -> L33 java.io.UnsupportedEncodingException -> L3b
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r2)     // Catch: java.security.NoSuchAlgorithmException -> L33 java.io.UnsupportedEncodingException -> L3b
            return r2
        L33:
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.hash.SHA.a
            java.lang.String r3 = "Error in generate SHA NoSuchAlgorithmException"
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
            goto L42
        L3b:
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.hash.SHA.a
            java.lang.String r3 = "Error in generate SHA UnsupportedEncodingException"
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
        L42:
            return r1
        L43:
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.hash.SHA.a
            java.lang.String r3 = "content or algorithm is null."
            com.huawei.secure.android.common.encrypt.utils.b.b(r2, r3)
            return r1
    }

    public static boolean validateSHA(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L1c
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1c
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L13
            goto L1c
        L13:
            java.lang.String r1 = shaEncrypt(r1, r3)
            boolean r1 = r2.equals(r1)
            return r1
        L1c:
            r1 = 0
            return r1
    }

    public static boolean validateSHA256(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L16
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Ld
            goto L16
        Ld:
            java.lang.String r1 = sha256Encrypt(r1)
            boolean r1 = r2.equals(r1)
            return r1
        L16:
            r1 = 0
            return r1
    }
}

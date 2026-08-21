package com.huawei.secure.android.common.encrypt.hash;

public abstract class FileSHA256 {
    private static final int a = 8192;
    private static final java.lang.String b = "SHA-256";
    private static final java.lang.String c = "FileSHA256";
    private static final java.lang.String d = "";
    private static final java.lang.String[] e = null;

    static {
            java.lang.String r0 = "SHA-256"
            java.lang.String r1 = "SHA-384"
            java.lang.String r2 = "SHA-512"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            com.huawei.secure.android.common.encrypt.hash.FileSHA256.e = r0
            return
    }

    public FileSHA256() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean a(java.io.File r4) {
            if (r4 == 0) goto L14
            boolean r0 = r4.exists()
            if (r0 == 0) goto L14
            long r0 = r4.length()
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L14
            r4 = 1
            goto L15
        L14:
            r4 = 0
        L15:
            return r4
    }

    private static boolean a(java.lang.String r5) {
            java.lang.String[] r0 = com.huawei.secure.android.common.encrypt.hash.FileSHA256.e
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

    public static java.lang.String fileSHA256Encrypt(java.io.File r1) {
            java.lang.String r0 = "SHA-256"
            java.lang.String r1 = fileSHAEncrypt(r1, r0)
            return r1
    }

    public static java.lang.String fileSHAEncrypt(java.io.File r5, java.lang.String r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            java.lang.String r1 = ""
            if (r0 != 0) goto L91
            boolean r0 = a(r6)
            if (r0 != 0) goto L10
            goto L91
        L10:
            boolean r0 = a(r5)
            if (r0 != 0) goto L1e
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.hash.FileSHA256.c
            java.lang.String r6 = "file is not valid"
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r6)
            return r1
        L1e:
            r0 = 0
            java.security.MessageDigest r6 = java.security.MessageDigest.getInstance(r6)     // Catch: java.lang.Throwable -> L4c java.io.IOException -> L4e java.security.NoSuchAlgorithmException -> L6b
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L4c java.io.IOException -> L4e java.security.NoSuchAlgorithmException -> L6b
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L4c java.io.IOException -> L4e java.security.NoSuchAlgorithmException -> L6b
            r5 = 8192(0x2000, float:1.148E-41)
            byte[] r5 = new byte[r5]     // Catch: java.io.IOException -> L48 java.security.NoSuchAlgorithmException -> L4a java.lang.Throwable -> L8b
            r2 = 0
            r3 = r2
        L2e:
            int r4 = r1.read(r5)     // Catch: java.io.IOException -> L48 java.security.NoSuchAlgorithmException -> L4a java.lang.Throwable -> L8b
            if (r4 <= 0) goto L39
            r6.update(r5, r2, r4)     // Catch: java.io.IOException -> L48 java.security.NoSuchAlgorithmException -> L4a java.lang.Throwable -> L8b
            r3 = 1
            goto L2e
        L39:
            if (r3 == 0) goto L44
            byte[] r5 = r6.digest()     // Catch: java.io.IOException -> L48 java.security.NoSuchAlgorithmException -> L4a java.lang.Throwable -> L8b
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r5)     // Catch: java.io.IOException -> L48 java.security.NoSuchAlgorithmException -> L4a java.lang.Throwable -> L8b
            r0 = r5
        L44:
            com.huawei.secure.android.common.encrypt.utils.a.a(r1)
            goto L8a
        L48:
            r5 = move-exception
            goto L50
        L4a:
            r5 = move-exception
            goto L6d
        L4c:
            r5 = move-exception
            goto L8d
        L4e:
            r5 = move-exception
            r1 = r0
        L50:
            java.lang.String r6 = com.huawei.secure.android.common.encrypt.hash.FileSHA256.c     // Catch: java.lang.Throwable -> L8b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8b
            r2.<init>()     // Catch: java.lang.Throwable -> L8b
            java.lang.String r3 = "IOException"
            r2.append(r3)     // Catch: java.lang.Throwable -> L8b
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> L8b
            r2.append(r5)     // Catch: java.lang.Throwable -> L8b
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L8b
            com.huawei.secure.android.common.encrypt.utils.b.b(r6, r5)     // Catch: java.lang.Throwable -> L8b
            goto L87
        L6b:
            r5 = move-exception
            r1 = r0
        L6d:
            java.lang.String r6 = com.huawei.secure.android.common.encrypt.hash.FileSHA256.c     // Catch: java.lang.Throwable -> L8b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8b
            r2.<init>()     // Catch: java.lang.Throwable -> L8b
            java.lang.String r3 = "NoSuchAlgorithmException"
            r2.append(r3)     // Catch: java.lang.Throwable -> L8b
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> L8b
            r2.append(r5)     // Catch: java.lang.Throwable -> L8b
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L8b
            com.huawei.secure.android.common.encrypt.utils.b.b(r6, r5)     // Catch: java.lang.Throwable -> L8b
        L87:
            com.huawei.secure.android.common.encrypt.utils.a.a(r1)
        L8a:
            return r0
        L8b:
            r5 = move-exception
            r0 = r1
        L8d:
            com.huawei.secure.android.common.encrypt.utils.a.a(r0)
            throw r5
        L91:
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.hash.FileSHA256.c
            java.lang.String r6 = "algorithm is empty or not safe"
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r6)
            return r1
    }

    public static java.lang.String inputStreamSHA256Encrypt(java.io.InputStream r1) {
            if (r1 != 0) goto L5
            java.lang.String r1 = ""
            return r1
        L5:
            java.lang.String r0 = "SHA-256"
            java.lang.String r1 = inputStreamSHAEncrypt(r1, r0)
            return r1
    }

    public static java.lang.String inputStreamSHAEncrypt(java.io.InputStream r4, java.lang.String r5) {
            java.lang.String r0 = ""
            if (r4 != 0) goto L5
            return r0
        L5:
            r1 = 8192(0x2000, float:1.148E-41)
            byte[] r1 = new byte[r1]
            java.security.MessageDigest r5 = java.security.MessageDigest.getInstance(r5)     // Catch: java.lang.Throwable -> L26 java.lang.Throwable -> L28
        Ld:
            int r2 = r4.read(r1)     // Catch: java.lang.Throwable -> L26 java.lang.Throwable -> L28
            if (r2 < 0) goto L1a
            if (r2 <= 0) goto Ld
            r3 = 0
            r5.update(r1, r3, r2)     // Catch: java.lang.Throwable -> L26 java.lang.Throwable -> L28
            goto Ld
        L1a:
            byte[] r5 = r5.digest()     // Catch: java.lang.Throwable -> L26 java.lang.Throwable -> L28
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r5)     // Catch: java.lang.Throwable -> L26 java.lang.Throwable -> L28
            com.huawei.secure.android.common.encrypt.utils.a.a(r4)
            return r5
        L26:
            r5 = move-exception
            goto L33
        L28:
            java.lang.String r5 = com.huawei.secure.android.common.encrypt.hash.FileSHA256.c     // Catch: java.lang.Throwable -> L26
            java.lang.String r1 = "inputstraem exception"
            com.huawei.secure.android.common.encrypt.utils.b.b(r5, r1)     // Catch: java.lang.Throwable -> L26
            com.huawei.secure.android.common.encrypt.utils.a.a(r4)
            return r0
        L33:
            com.huawei.secure.android.common.encrypt.utils.a.a(r4)
            throw r5
    }

    public static boolean validateFileSHA(java.io.File r1, java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L16
            boolean r0 = a(r3)
            if (r0 != 0) goto Ld
            goto L16
        Ld:
            java.lang.String r1 = fileSHAEncrypt(r1, r3)
            boolean r1 = r2.equals(r1)
            return r1
        L16:
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.hash.FileSHA256.c
            java.lang.String r2 = "hash value is null || algorithm is illegal"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r2)
            r1 = 0
            return r1
    }

    public static boolean validateFileSHA256(java.io.File r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L8
            r1 = 0
            return r1
        L8:
            java.lang.String r1 = fileSHA256Encrypt(r1)
            boolean r1 = r2.equals(r1)
            return r1
    }

    public static boolean validateInputStreamSHA(java.io.InputStream r1, java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L16
            boolean r0 = a(r3)
            if (r0 != 0) goto Ld
            goto L16
        Ld:
            java.lang.String r1 = inputStreamSHAEncrypt(r1, r3)
            boolean r1 = r2.equals(r1)
            return r1
        L16:
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.hash.FileSHA256.c
            java.lang.String r2 = "hash value is null || algorithm is illegal"
            com.huawei.secure.android.common.encrypt.utils.b.b(r1, r2)
            r1 = 0
            return r1
    }

    public static boolean validateInputStreamSHA256(java.io.InputStream r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L8
            r1 = 0
            return r1
        L8:
            java.lang.String r1 = inputStreamSHA256Encrypt(r1)
            boolean r1 = r2.equals(r1)
            return r1
    }
}

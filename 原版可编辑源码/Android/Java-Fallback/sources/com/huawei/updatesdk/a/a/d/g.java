package com.huawei.updatesdk.a.a.d;

public abstract class g {
    public static java.lang.String a(java.lang.String r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "UTF-8"
            java.lang.String r3 = java.net.URLEncoder.encode(r3, r1)     // Catch: java.io.UnsupportedEncodingException -> L23
            java.lang.String r1 = "+"
            java.lang.String r2 = "%20"
            java.lang.String r3 = r3.replace(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> L23
            java.lang.String r1 = "*"
            java.lang.String r2 = "%2A"
            java.lang.String r3 = r3.replace(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> L23
            java.lang.String r1 = "~"
            java.lang.String r2 = "%7E"
            java.lang.String r3 = r3.replace(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> L23
            return r3
        L23:
            r3 = move-exception
            java.lang.String r1 = "StringUtils"
            java.lang.String r2 = "encode2utf8 error"
            com.huawei.updatesdk.a.a.c.a.a.a.a(r1, r2, r3)
            return r0
    }

    public static java.lang.String a(byte[] r9) {
            java.lang.String r0 = "StringUtils"
            java.lang.String r1 = "SHA-256"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.lang.Exception -> L39 java.util.IllegalFormatException -> L3c java.security.NoSuchAlgorithmException -> L3f
            r1.update(r9)     // Catch: java.lang.Exception -> L39 java.util.IllegalFormatException -> L3c java.security.NoSuchAlgorithmException -> L3f
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L39 java.util.IllegalFormatException -> L3c java.security.NoSuchAlgorithmException -> L3f
            r2 = 256(0x100, float:3.59E-43)
            r9.<init>(r2)     // Catch: java.lang.Exception -> L39 java.util.IllegalFormatException -> L3c java.security.NoSuchAlgorithmException -> L3f
            byte[] r1 = r1.digest()     // Catch: java.lang.Exception -> L39 java.util.IllegalFormatException -> L3c java.security.NoSuchAlgorithmException -> L3f
            int r2 = r1.length     // Catch: java.lang.Exception -> L39 java.util.IllegalFormatException -> L3c java.security.NoSuchAlgorithmException -> L3f
            r3 = 0
            r4 = r3
        L19:
            if (r4 >= r2) goto L34
            r5 = r1[r4]     // Catch: java.lang.Exception -> L39 java.util.IllegalFormatException -> L3c java.security.NoSuchAlgorithmException -> L3f
            java.util.Locale r6 = java.util.Locale.ENGLISH     // Catch: java.lang.Exception -> L39 java.util.IllegalFormatException -> L3c java.security.NoSuchAlgorithmException -> L3f
            java.lang.String r7 = "%02X"
            r8 = 1
            java.lang.Object[] r8 = new java.lang.Object[r8]     // Catch: java.lang.Exception -> L39 java.util.IllegalFormatException -> L3c java.security.NoSuchAlgorithmException -> L3f
            java.lang.Byte r5 = java.lang.Byte.valueOf(r5)     // Catch: java.lang.Exception -> L39 java.util.IllegalFormatException -> L3c java.security.NoSuchAlgorithmException -> L3f
            r8[r3] = r5     // Catch: java.lang.Exception -> L39 java.util.IllegalFormatException -> L3c java.security.NoSuchAlgorithmException -> L3f
            java.lang.String r5 = java.lang.String.format(r6, r7, r8)     // Catch: java.lang.Exception -> L39 java.util.IllegalFormatException -> L3c java.security.NoSuchAlgorithmException -> L3f
            r9.append(r5)     // Catch: java.lang.Exception -> L39 java.util.IllegalFormatException -> L3c java.security.NoSuchAlgorithmException -> L3f
            int r4 = r4 + 1
            goto L19
        L34:
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L39 java.util.IllegalFormatException -> L3c java.security.NoSuchAlgorithmException -> L3f
            return r9
        L39:
            java.lang.String r9 = "sha256EncryptStr error:Exception"
            goto L41
        L3c:
            java.lang.String r9 = "sha256EncryptStr error:IllegalFormatException"
            goto L41
        L3f:
            java.lang.String r9 = "sha256EncryptStr error:NoSuchAlgorithmException"
        L41:
            com.huawei.updatesdk.a.a.c.a.a.a.b(r0, r9)
            r9 = 0
            return r9
    }

    public static java.lang.String b(java.lang.String r1) {
            java.lang.String r1 = e(r1)
            if (r1 != 0) goto L8
            r1 = 0
            goto L10
        L8:
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r1 = r1.toLowerCase(r0)
        L10:
            return r1
    }

    public static byte[] c(java.lang.String r6) {
            char[] r6 = r6.toCharArray()
            int r0 = r6.length
            int r0 = r0 / 2
            byte[] r1 = new byte[r0]
            r2 = 0
        La:
            if (r2 >= r0) goto L38
            int r3 = r2 * 2
            char r4 = r6[r3]
            r5 = 16
            int r4 = java.lang.Character.digit(r4, r5)
            int r3 = r3 + 1
            char r3 = r6[r3]
            int r3 = java.lang.Character.digit(r3, r5)
            int r4 = r4 << 4
            r3 = r3 | r4
            r4 = 127(0x7f, float:1.78E-43)
            if (r3 <= r4) goto L27
            int r3 = r3 + (-256)
        L27:
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.Byte r3 = java.lang.Byte.valueOf(r3)
            byte r3 = r3.byteValue()
            r1[r2] = r3
            int r2 = r2 + 1
            goto La
        L38:
            return r1
    }

    public static boolean d(java.lang.String r2) {
            if (r2 == 0) goto L1c
            java.lang.String r0 = r2.trim()
            java.lang.String r1 = "{"
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L1c
            java.lang.String r2 = r2.trim()
            java.lang.String r0 = "}"
            boolean r2 = r2.endsWith(r0)
            if (r2 == 0) goto L1c
            r2 = 1
            goto L1d
        L1c:
            r2 = 0
        L1d:
            return r2
    }

    public static java.lang.String e(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String r0 = "UTF-8"
            byte[] r2 = r2.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L13
            java.lang.String r2 = a(r2)
            return r2
        L13:
            java.lang.String r2 = "StringUtils"
            java.lang.String r0 = "can not getBytes"
            com.huawei.updatesdk.a.a.c.a.a.a.b(r2, r0)
            return r1
    }
}

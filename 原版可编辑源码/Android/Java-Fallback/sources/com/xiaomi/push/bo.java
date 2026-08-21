package com.xiaomi.push;

public class bo {
    private static java.lang.String a(byte r2) {
            r0 = r2 & 127(0x7f, float:1.78E-43)
            if (r2 >= 0) goto L7
            r2 = 128(0x80, float:1.8E-43)
            goto L8
        L7:
            r2 = 0
        L8:
            int r0 = r0 + r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r1 = 16
            if (r0 >= r1) goto L15
            java.lang.String r1 = "0"
            goto L17
        L15:
            java.lang.String r1 = ""
        L17:
            r2.append(r1)
            java.lang.String r0 = java.lang.Integer.toHexString(r0)
            java.lang.String r0 = r0.toLowerCase()
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            return r2
    }

    public static java.lang.String a(java.lang.String r4) {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L2f
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            byte[] r2 = r4.getBytes()
            int r4 = r4.length()
            r3 = 0
            r0.update(r2, r3, r4)
            byte[] r4 = r0.digest()
        L1b:
            int r0 = r4.length
            if (r3 >= r0) goto L2a
            r0 = r4[r3]
            java.lang.String r0 = a(r0)
            r1.append(r0)
            int r3 = r3 + 1
            goto L1b
        L2a:
            java.lang.String r4 = r1.toString()
            return r4
        L2f:
            r4 = 0
            return r4
    }

    public static byte[] a(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L18
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> L18
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Exception -> L18
            r0.update(r1)     // Catch: java.lang.Exception -> L18
            byte[] r1 = r0.digest()     // Catch: java.lang.Exception -> L18
            return r1
        L18:
            r1 = 0
            return r1
    }

    public static java.lang.String b(java.lang.String r2) {
            java.lang.String r2 = a(r2)
            r0 = 8
            r1 = 24
            java.lang.CharSequence r2 = r2.subSequence(r0, r1)
            java.lang.String r2 = r2.toString()
            return r2
    }
}

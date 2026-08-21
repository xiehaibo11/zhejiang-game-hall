package com.huawei.hms.framework.network.grs.d;

public class b {
    private static final java.lang.String a = "b";
    private static final java.util.regex.Pattern b = null;

    static {
            java.lang.String r0 = "[0-9]*[a-z|A-Z]*[一-龥]*"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.huawei.hms.framework.network.grs.d.b.b = r0
            return
    }

    public static java.lang.String a(java.lang.String r1) {
            java.lang.String r0 = "SHA-256"
            java.lang.String r1 = a(r1, r0)
            return r1
    }

    private static java.lang.String a(java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = "UTF-8"
            r1 = 0
            byte[] r2 = r2.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L1c
            java.security.MessageDigest r3 = java.security.MessageDigest.getInstance(r3)     // Catch: java.security.NoSuchAlgorithmException -> L14
            byte[] r2 = r3.digest(r2)     // Catch: java.security.NoSuchAlgorithmException -> L14
            java.lang.String r2 = a(r2)     // Catch: java.security.NoSuchAlgorithmException -> L14
            return r2
        L14:
            java.lang.String r2 = com.huawei.hms.framework.network.grs.d.b.a
            java.lang.String r3 = "encrypt NoSuchAlgorithmException"
        L18:
            com.huawei.hms.framework.common.Logger.w(r2, r3)
            return r1
        L1c:
            java.lang.String r2 = com.huawei.hms.framework.network.grs.d.b.a
            java.lang.String r3 = "encrypt UnsupportedEncodingException"
            goto L18
    }

    private static java.lang.String a(byte[] r5) {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            r1 = 0
        L6:
            int r2 = r5.length
            if (r1 >= r2) goto L23
            r2 = r5[r1]
            r2 = r2 & 255(0xff, float:3.57E-43)
            java.lang.String r2 = java.lang.Integer.toHexString(r2)
            int r3 = r2.length()
            r4 = 1
            if (r3 != r4) goto L1d
            java.lang.String r3 = "0"
            r0.append(r3)
        L1d:
            r0.append(r2)
            int r1 = r1 + 1
            goto L6
        L23:
            java.lang.String r5 = r0.toString()
            return r5
    }

    public static java.lang.String b(java.lang.String r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto L7
            return r6
        L7:
            int r0 = r6.length()
            java.lang.String r1 = "*"
            r2 = 1
            if (r0 != r2) goto L11
            return r1
        L11:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            r3 = 0
        L17:
            int r4 = r6.length()
            if (r3 >= r4) goto L4b
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            char r5 = r6.charAt(r3)
            r4.append(r5)
            java.lang.String r5 = ""
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.util.regex.Pattern r5 = com.huawei.hms.framework.network.grs.d.b.b
            java.util.regex.Matcher r5 = r5.matcher(r4)
            boolean r5 = r5.matches()
            if (r5 == 0) goto L45
            int r5 = r2 % 2
            if (r5 != 0) goto L43
            r4 = r1
        L43:
            int r2 = r2 + 1
        L45:
            r0.append(r4)
            int r3 = r3 + 1
            goto L17
        L4b:
            java.lang.String r6 = r0.toString()
            return r6
    }
}

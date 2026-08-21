package com.tkay.core.common.l;

public final class f {
    public static final java.lang.String a = "MD5";
    private static char[] b;

    static {
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70} // fill-array
            com.tkay.core.common.l.f.b = r0
            return
    }

    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(java.lang.String r5) {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L44
            r0.reset()     // Catch: java.security.NoSuchAlgorithmException -> L44
            byte[] r5 = r5.getBytes()     // Catch: java.security.NoSuchAlgorithmException -> L44
            r0.update(r5)     // Catch: java.security.NoSuchAlgorithmException -> L44
            byte[] r5 = r0.digest()     // Catch: java.security.NoSuchAlgorithmException -> L44
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.security.NoSuchAlgorithmException -> L44
            int r1 = r5.length     // Catch: java.security.NoSuchAlgorithmException -> L44
            int r1 = r1 * 2
            r0.<init>(r1)     // Catch: java.security.NoSuchAlgorithmException -> L44
            int r1 = r5.length     // Catch: java.security.NoSuchAlgorithmException -> L44
            r2 = 0
        L1e:
            if (r2 >= r1) goto L39
            r3 = r5[r2]     // Catch: java.security.NoSuchAlgorithmException -> L44
            r4 = r3 & 240(0xf0, float:3.36E-43)
            int r4 = r4 >>> 4
            java.lang.String r4 = java.lang.Integer.toHexString(r4)     // Catch: java.security.NoSuchAlgorithmException -> L44
            r0.append(r4)     // Catch: java.security.NoSuchAlgorithmException -> L44
            r3 = r3 & 15
            java.lang.String r3 = java.lang.Integer.toHexString(r3)     // Catch: java.security.NoSuchAlgorithmException -> L44
            r0.append(r3)     // Catch: java.security.NoSuchAlgorithmException -> L44
            int r2 = r2 + 1
            goto L1e
        L39:
            java.lang.String r5 = r0.toString()     // Catch: java.security.NoSuchAlgorithmException -> L44
            java.util.Locale r0 = java.util.Locale.US     // Catch: java.security.NoSuchAlgorithmException -> L44
            java.lang.String r5 = r5.toLowerCase(r0)     // Catch: java.security.NoSuchAlgorithmException -> L44
            return r5
        L44:
            r5 = move-exception
            r5.printStackTrace()
            java.lang.String r5 = ""
            return r5
    }

    private static java.lang.String a(byte[] r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r5.length
            int r1 = r1 * 2
            r0.<init>(r1)
            int r1 = r5.length
            r2 = 0
        La:
            if (r2 >= r1) goto L25
            r3 = r5[r2]
            r4 = r3 & 240(0xf0, float:3.36E-43)
            int r4 = r4 >>> 4
            java.lang.String r4 = java.lang.Integer.toHexString(r4)
            r0.append(r4)
            r3 = r3 & 15
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            r0.append(r3)
            int r2 = r2 + 1
            goto La
        L25:
            java.lang.String r5 = r0.toString()
            java.util.Locale r0 = java.util.Locale.US
            java.lang.String r5 = r5.toLowerCase(r0)
            return r5
    }

    public static java.lang.String b(java.lang.String r5) {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L44
            r0.reset()     // Catch: java.security.NoSuchAlgorithmException -> L44
            byte[] r5 = r5.getBytes()     // Catch: java.security.NoSuchAlgorithmException -> L44
            r0.update(r5)     // Catch: java.security.NoSuchAlgorithmException -> L44
            byte[] r5 = r0.digest()     // Catch: java.security.NoSuchAlgorithmException -> L44
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.security.NoSuchAlgorithmException -> L44
            int r1 = r5.length     // Catch: java.security.NoSuchAlgorithmException -> L44
            int r1 = r1 * 2
            r0.<init>(r1)     // Catch: java.security.NoSuchAlgorithmException -> L44
            int r1 = r5.length     // Catch: java.security.NoSuchAlgorithmException -> L44
            r2 = 0
        L1e:
            if (r2 >= r1) goto L39
            r3 = r5[r2]     // Catch: java.security.NoSuchAlgorithmException -> L44
            r4 = r3 & 240(0xf0, float:3.36E-43)
            int r4 = r4 >>> 4
            java.lang.String r4 = java.lang.Integer.toHexString(r4)     // Catch: java.security.NoSuchAlgorithmException -> L44
            r0.append(r4)     // Catch: java.security.NoSuchAlgorithmException -> L44
            r3 = r3 & 15
            java.lang.String r3 = java.lang.Integer.toHexString(r3)     // Catch: java.security.NoSuchAlgorithmException -> L44
            r0.append(r3)     // Catch: java.security.NoSuchAlgorithmException -> L44
            int r2 = r2 + 1
            goto L1e
        L39:
            java.lang.String r5 = r0.toString()     // Catch: java.security.NoSuchAlgorithmException -> L44
            java.util.Locale r0 = java.util.Locale.US     // Catch: java.security.NoSuchAlgorithmException -> L44
            java.lang.String r5 = r5.toUpperCase(r0)     // Catch: java.security.NoSuchAlgorithmException -> L44
            return r5
        L44:
            r5 = move-exception
            r5.printStackTrace()
            java.lang.String r5 = ""
            return r5
    }

    private static java.lang.String b(byte[] r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r5.length
            int r1 = r1 * 2
            r0.<init>(r1)
            int r1 = r5.length
            r2 = 0
        La:
            if (r2 >= r1) goto L25
            r3 = r5[r2]
            r4 = r3 & 240(0xf0, float:3.36E-43)
            int r4 = r4 >>> 4
            java.lang.String r4 = java.lang.Integer.toHexString(r4)
            r0.append(r4)
            r3 = r3 & 15
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            r0.append(r3)
            int r2 = r2 + 1
            goto La
        L25:
            java.lang.String r5 = r0.toString()
            java.util.Locale r0 = java.util.Locale.US
            java.lang.String r5 = r5.toUpperCase(r0)
            return r5
    }

    public static java.lang.String c(java.lang.String r4) {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> L41
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Exception -> L41
            r0.update(r4)     // Catch: java.lang.Exception -> L41
            byte[] r4 = r0.digest()     // Catch: java.lang.Exception -> L41
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L41
            int r1 = r4.length     // Catch: java.lang.Exception -> L41
            int r1 = r1 * 2
            r0.<init>(r1)     // Catch: java.lang.Exception -> L41
            r1 = 0
        L1a:
            int r2 = r4.length     // Catch: java.lang.Exception -> L41
            if (r1 >= r2) goto L38
            char[] r2 = com.tkay.core.common.l.f.b     // Catch: java.lang.Exception -> L41
            r3 = r4[r1]     // Catch: java.lang.Exception -> L41
            r3 = r3 & 240(0xf0, float:3.36E-43)
            int r3 = r3 >>> 4
            char r2 = r2[r3]     // Catch: java.lang.Exception -> L41
            r0.append(r2)     // Catch: java.lang.Exception -> L41
            char[] r2 = com.tkay.core.common.l.f.b     // Catch: java.lang.Exception -> L41
            r3 = r4[r1]     // Catch: java.lang.Exception -> L41
            r3 = r3 & 15
            char r2 = r2[r3]     // Catch: java.lang.Exception -> L41
            r0.append(r2)     // Catch: java.lang.Exception -> L41
            int r1 = r1 + 1
            goto L1a
        L38:
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> L41
            java.lang.String r4 = r4.toLowerCase()     // Catch: java.lang.Exception -> L41
            return r4
        L41:
            java.lang.String r4 = ""
            return r4
    }

    private static java.lang.String c(byte[] r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r4.length
            int r1 = r1 * 2
            r0.<init>(r1)
            r1 = 0
        L9:
            int r2 = r4.length
            if (r1 >= r2) goto L27
            char[] r2 = com.tkay.core.common.l.f.b
            r3 = r4[r1]
            r3 = r3 & 240(0xf0, float:3.36E-43)
            int r3 = r3 >>> 4
            char r2 = r2[r3]
            r0.append(r2)
            char[] r2 = com.tkay.core.common.l.f.b
            r3 = r4[r1]
            r3 = r3 & 15
            char r2 = r2[r3]
            r0.append(r2)
            int r1 = r1 + 1
            goto L9
        L27:
            java.lang.String r4 = r0.toString()
            return r4
    }
}

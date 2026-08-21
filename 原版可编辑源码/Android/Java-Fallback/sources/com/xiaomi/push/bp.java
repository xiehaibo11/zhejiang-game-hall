package com.xiaomi.push;

public class bp {
    public static java.lang.String a(int r5) {
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            r2 = 0
        Lb:
            if (r2 >= r5) goto L1f
            r3 = 62
            int r3 = r0.nextInt(r3)
            java.lang.String r4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"
            char r3 = r4.charAt(r3)
            r1.append(r3)
            int r2 = r2 + 1
            goto Lb
        L1f:
            java.lang.String r5 = r1.toString()
            return r5
    }

    public static java.lang.String a(java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L29
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L28
            byte[] r1 = a(r4)     // Catch: java.security.NoSuchAlgorithmException -> L28
            r0.update(r1)     // Catch: java.security.NoSuchAlgorithmException -> L28
            java.math.BigInteger r1 = new java.math.BigInteger     // Catch: java.security.NoSuchAlgorithmException -> L28
            byte[] r0 = r0.digest()     // Catch: java.security.NoSuchAlgorithmException -> L28
            r2 = 1
            r1.<init>(r2, r0)     // Catch: java.security.NoSuchAlgorithmException -> L28
            java.lang.String r0 = "%1$032X"
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.security.NoSuchAlgorithmException -> L28
            r3 = 0
            r2[r3] = r1     // Catch: java.security.NoSuchAlgorithmException -> L28
            java.lang.String r4 = java.lang.String.format(r0, r2)     // Catch: java.security.NoSuchAlgorithmException -> L28
        L28:
            return r4
        L29:
            java.lang.String r4 = ""
            return r4
    }

    public static java.lang.String a(java.lang.String r5, int r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L9
            java.lang.String r5 = ""
            return r5
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r5.length()
            r2 = 3
            if (r6 <= 0) goto L17
            if (r1 >= r6) goto L21
        L17:
            int r6 = r1 / 3
            r3 = 1
            if (r6 <= r3) goto L1d
            goto L1e
        L1d:
            r6 = r3
        L1e:
            if (r6 <= r2) goto L21
            r6 = r2
        L21:
            r2 = 0
        L22:
            if (r2 >= r1) goto L39
            int r3 = r2 + 1
            int r4 = r3 % r6
            if (r4 != 0) goto L30
            java.lang.String r2 = "*"
            r0.append(r2)
            goto L37
        L30:
            char r2 = r5.charAt(r2)
            r0.append(r2)
        L37:
            r2 = r3
            goto L22
        L39:
            java.lang.String r5 = r0.toString()
            return r5
    }

    public static java.lang.String a(java.util.Collection<?> r0, java.lang.String r1) {
            if (r0 != 0) goto L4
            r0 = 0
            return r0
        L4:
            java.util.Iterator r0 = r0.iterator()
            java.lang.String r0 = a(r0, r1)
            return r0
    }

    public static java.lang.String a(java.util.Iterator<?> r3, java.lang.String r4) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            boolean r0 = r3.hasNext()
            if (r0 != 0) goto Ld
            java.lang.String r3 = ""
            return r3
        Ld:
            java.lang.Object r0 = r3.next()
            boolean r1 = r3.hasNext()
            if (r1 != 0) goto L1c
            java.lang.String r3 = r0.toString()
            return r3
        L1c:
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r2 = 256(0x100, float:3.59E-43)
            r1.<init>(r2)
            if (r0 == 0) goto L28
        L25:
            r1.append(r0)
        L28:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L3a
            if (r4 == 0) goto L33
            r1.append(r4)
        L33:
            java.lang.Object r0 = r3.next()
            if (r0 == 0) goto L28
            goto L25
        L3a:
            java.lang.String r3 = r1.toString()
            return r3
    }

    public static java.lang.String a(byte[] r3) {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> L1f
            r0.update(r3)     // Catch: java.lang.Exception -> L1f
            java.math.BigInteger r3 = new java.math.BigInteger     // Catch: java.lang.Exception -> L1f
            byte[] r0 = r0.digest()     // Catch: java.lang.Exception -> L1f
            r1 = 1
            r3.<init>(r1, r0)     // Catch: java.lang.Exception -> L1f
            java.lang.String r0 = "%1$032X"
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L1f
            r2 = 0
            r1[r2] = r3     // Catch: java.lang.Exception -> L1f
            java.lang.String r3 = java.lang.String.format(r0, r1)     // Catch: java.lang.Exception -> L1f
            goto L21
        L1f:
            java.lang.String r3 = ""
        L21:
            java.lang.String r3 = r3.toLowerCase()
            return r3
    }

    public static java.lang.String a(java.lang.Object[] r2, java.lang.String r3) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            r0 = 0
            int r1 = r2.length
            java.lang.String r2 = a(r2, r3, r0, r1)
            return r2
    }

    public static java.lang.String a(java.lang.Object[] r3, java.lang.String r4, int r5, int r6) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            java.lang.String r0 = ""
            if (r4 != 0) goto L9
            r4 = r0
        L9:
            int r1 = r6 - r5
            if (r1 > 0) goto Le
            return r0
        Le:
            r0 = r3[r5]
            if (r0 != 0) goto L15
            r0 = 16
            goto L1f
        L15:
            r0 = r3[r5]
            java.lang.String r0 = r0.toString()
            int r0 = r0.length()
        L1f:
            int r2 = r4.length()
            int r0 = r0 + r2
            int r1 = r1 * r0
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>(r1)
            r1 = r5
        L2b:
            if (r1 >= r6) goto L3e
            if (r1 <= r5) goto L32
            r0.append(r4)
        L32:
            r2 = r3[r1]
            if (r2 == 0) goto L3b
            r2 = r3[r1]
            r0.append(r2)
        L3b:
            int r1 = r1 + 1
            goto L2b
        L3e:
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static boolean a(java.lang.String r4) {
            if (r4 == 0) goto L19
            r0 = 0
            r1 = r0
        L4:
            int r2 = r4.length()
            if (r1 >= r2) goto L19
            char r2 = r4.charAt(r1)
            if (r2 < 0) goto L18
            r3 = 127(0x7f, float:1.78E-43)
            if (r2 <= r3) goto L15
            goto L18
        L15:
            int r1 = r1 + 1
            goto L4
        L18:
            return r0
        L19:
            r4 = 1
            return r4
    }

    public static byte[] a(java.lang.String r1) {
            java.lang.String r0 = "UTF-8"
            byte[] r1 = r1.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L7
            return r1
        L7:
            byte[] r1 = r1.getBytes()
            return r1
    }

    public static java.lang.String b(java.lang.String r4) {
            if (r4 == 0) goto L25
            java.lang.String r0 = "SHA1"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L24
            byte[] r1 = a(r4)     // Catch: java.security.NoSuchAlgorithmException -> L24
            r0.update(r1)     // Catch: java.security.NoSuchAlgorithmException -> L24
            java.math.BigInteger r1 = new java.math.BigInteger     // Catch: java.security.NoSuchAlgorithmException -> L24
            byte[] r0 = r0.digest()     // Catch: java.security.NoSuchAlgorithmException -> L24
            r2 = 1
            r1.<init>(r2, r0)     // Catch: java.security.NoSuchAlgorithmException -> L24
            java.lang.String r0 = "%1$032X"
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.security.NoSuchAlgorithmException -> L24
            r3 = 0
            r2[r3] = r1     // Catch: java.security.NoSuchAlgorithmException -> L24
            java.lang.String r4 = java.lang.String.format(r0, r2)     // Catch: java.security.NoSuchAlgorithmException -> L24
        L24:
            return r4
        L25:
            r4 = 0
            return r4
    }

    public static java.lang.String b(byte[] r2) {
            if (r2 == 0) goto L13
            int r0 = r2.length
            if (r0 <= 0) goto L13
            java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> Ld
            java.lang.String r1 = "UTF-8"
            r0.<init>(r2, r1)     // Catch: java.io.UnsupportedEncodingException -> Ld
            return r0
        Ld:
            java.lang.String r0 = new java.lang.String
            r0.<init>(r2)
            return r0
        L13:
            r2 = 0
            return r2
    }

    public static boolean b(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L8
            r1 = 0
            return r1
        L8:
            java.lang.String r0 = "^[A-Za-z0-9]+$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            java.util.regex.Matcher r1 = r0.matcher(r1)
            boolean r1 = r1.matches()
            return r1
    }

    public static boolean c(java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            char r0 = r5.charAt(r1)
            r2 = 1
            r3 = r2
        Le:
            int r4 = r5.length()
            if (r3 >= r4) goto L1e
            char r4 = r5.charAt(r3)
            if (r4 == r0) goto L1b
            return r1
        L1b:
            int r3 = r3 + 1
            goto Le
        L1e:
            return r2
    }
}

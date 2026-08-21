package com.tkay.expressad.foundation.h;

public final class p implements com.tkay.expressad.e.a {
    public static final java.lang.String a = "MD5";

    public p() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L7
            return r5
        L7:
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L4b
            r0.reset()     // Catch: java.security.NoSuchAlgorithmException -> L4b
            byte[] r5 = r5.getBytes()     // Catch: java.security.NoSuchAlgorithmException -> L4b
            r0.update(r5)     // Catch: java.security.NoSuchAlgorithmException -> L4b
            byte[] r5 = r0.digest()     // Catch: java.security.NoSuchAlgorithmException -> L4b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.security.NoSuchAlgorithmException -> L4b
            int r1 = r5.length     // Catch: java.security.NoSuchAlgorithmException -> L4b
            int r1 = r1 * 2
            r0.<init>(r1)     // Catch: java.security.NoSuchAlgorithmException -> L4b
            int r1 = r5.length     // Catch: java.security.NoSuchAlgorithmException -> L4b
            r2 = 0
        L25:
            if (r2 >= r1) goto L40
            r3 = r5[r2]     // Catch: java.security.NoSuchAlgorithmException -> L4b
            r4 = r3 & 240(0xf0, float:3.36E-43)
            int r4 = r4 >>> 4
            java.lang.String r4 = java.lang.Integer.toHexString(r4)     // Catch: java.security.NoSuchAlgorithmException -> L4b
            r0.append(r4)     // Catch: java.security.NoSuchAlgorithmException -> L4b
            r3 = r3 & 15
            java.lang.String r3 = java.lang.Integer.toHexString(r3)     // Catch: java.security.NoSuchAlgorithmException -> L4b
            r0.append(r3)     // Catch: java.security.NoSuchAlgorithmException -> L4b
            int r2 = r2 + 1
            goto L25
        L40:
            java.lang.String r5 = r0.toString()     // Catch: java.security.NoSuchAlgorithmException -> L4b
            java.util.Locale r0 = java.util.Locale.US     // Catch: java.security.NoSuchAlgorithmException -> L4b
            java.lang.String r5 = r5.toLowerCase(r0)     // Catch: java.security.NoSuchAlgorithmException -> L4b
            return r5
        L4b:
            r5 = move-exception
            r5.printStackTrace()
            java.lang.String r5 = ""
            return r5
    }

    private static java.lang.String a(byte[] r6) {
            java.lang.String r0 = ""
            if (r6 != 0) goto L5
            return r0
        L5:
            int r1 = r6.length
            if (r1 != 0) goto L9
            return r0
        L9:
            int r0 = r6.length
            int r0 = r0 * 2
            byte[] r1 = new byte[r0]
            r2 = 0
            r3 = r2
        L10:
            if (r3 >= r0) goto L19
            r4 = 48
            r1[r3] = r4
            int r3 = r3 + 1
            goto L10
        L19:
            int r3 = r6.length
            r4 = 1
            int r3 = r3 + r4
            byte[] r3 = new byte[r3]
            r3[r2] = r2
            int r5 = r6.length
            java.lang.System.arraycopy(r6, r2, r3, r4, r5)
            java.math.BigInteger r6 = new java.math.BigInteger
            r6.<init>(r3)
            r3 = 16
            java.lang.String r6 = r6.toString(r3)
            byte[] r6 = r6.getBytes()
            int r3 = r6.length
            int r0 = r0 - r3
            int r3 = r6.length
            java.lang.System.arraycopy(r6, r2, r1, r0, r3)
            java.lang.String r6 = new java.lang.String
            r6.<init>(r1)
            return r6
    }

    private static java.lang.String b(java.lang.String r5) {
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
            java.lang.String r5 = r5.toLowerCase(r0)
            return r5
    }

    private static java.lang.String c(java.lang.String r9) {
            int r0 = r9.length()     // Catch: java.lang.Exception -> Lcf
            java.lang.String r1 = "UTF-16LE"
            byte[] r9 = r9.getBytes(r1)     // Catch: java.lang.Exception -> Lcf
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lcf
            java.lang.String r2 = "b = "
            r1.<init>(r2)     // Catch: java.lang.Exception -> Lcf
            java.lang.String r2 = a(r9)     // Catch: java.lang.Exception -> Lcf
            r1.append(r2)     // Catch: java.lang.Exception -> Lcf
            byte[] r1 = new byte[r0]     // Catch: java.lang.Exception -> Lcf
            r2 = 0
            r3 = r2
            r4 = r3
        L1d:
            int r5 = r9.length     // Catch: java.lang.Exception -> Lcf
            if (r3 >= r5) goto L35
            r5 = r9[r3]     // Catch: java.lang.Exception -> Lcf
            r6 = -1
            if (r5 == r6) goto L32
            r5 = r9[r3]     // Catch: java.lang.Exception -> Lcf
            r6 = -2
            if (r5 == r6) goto L32
            r5 = r9[r3]     // Catch: java.lang.Exception -> Lcf
            r1[r4] = r5     // Catch: java.lang.Exception -> Lcf
            int r4 = r4 + 1
            if (r4 == r0) goto L35
        L32:
            int r3 = r3 + 2
            goto L1d
        L35:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lcf
            java.lang.String r0 = "source = "
            r9.<init>(r0)     // Catch: java.lang.Exception -> Lcf
            java.lang.String r0 = a(r1)     // Catch: java.lang.Exception -> Lcf
            r9.append(r0)     // Catch: java.lang.Exception -> Lcf
            r9 = 16
            char[] r9 = new char[r9]     // Catch: java.lang.Exception -> Lcf
            r0 = 48
            r9[r2] = r0     // Catch: java.lang.Exception -> Lcf
            r0 = 49
            r3 = 1
            r9[r3] = r0     // Catch: java.lang.Exception -> Lcf
            r0 = 50
            r3 = 2
            r9[r3] = r0     // Catch: java.lang.Exception -> Lcf
            r0 = 3
            r3 = 51
            r9[r0] = r3     // Catch: java.lang.Exception -> Lcf
            r0 = 52
            r3 = 4
            r9[r3] = r0     // Catch: java.lang.Exception -> Lcf
            r0 = 5
            r3 = 53
            r9[r0] = r3     // Catch: java.lang.Exception -> Lcf
            r0 = 6
            r3 = 54
            r9[r0] = r3     // Catch: java.lang.Exception -> Lcf
            r0 = 7
            r3 = 55
            r9[r0] = r3     // Catch: java.lang.Exception -> Lcf
            r0 = 8
            r3 = 56
            r9[r0] = r3     // Catch: java.lang.Exception -> Lcf
            r0 = 9
            r3 = 57
            r9[r0] = r3     // Catch: java.lang.Exception -> Lcf
            r0 = 10
            r3 = 97
            r9[r0] = r3     // Catch: java.lang.Exception -> Lcf
            r0 = 11
            r3 = 98
            r9[r0] = r3     // Catch: java.lang.Exception -> Lcf
            r0 = 12
            r3 = 99
            r9[r0] = r3     // Catch: java.lang.Exception -> Lcf
            r0 = 13
            r3 = 100
            r9[r0] = r3     // Catch: java.lang.Exception -> Lcf
            r0 = 14
            r3 = 101(0x65, float:1.42E-43)
            r9[r0] = r3     // Catch: java.lang.Exception -> Lcf
            r0 = 102(0x66, float:1.43E-43)
            r3 = 15
            r9[r3] = r0     // Catch: java.lang.Exception -> Lcf
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> Lcf
            r0.update(r1)     // Catch: java.lang.Exception -> Lcf
            byte[] r0 = r0.digest()     // Catch: java.lang.Exception -> Lcf
            int r1 = r0.length     // Catch: java.lang.Exception -> Lcf
            int r4 = r1 * 2
            char[] r4 = new char[r4]     // Catch: java.lang.Exception -> Lcf
            r5 = r2
        Lb1:
            if (r2 >= r1) goto Lc9
            r6 = r0[r2]     // Catch: java.lang.Exception -> Lcf
            int r7 = r5 + 1
            int r8 = r6 >>> 4
            r8 = r8 & r3
            char r8 = r9[r8]     // Catch: java.lang.Exception -> Lcf
            r4[r5] = r8     // Catch: java.lang.Exception -> Lcf
            int r5 = r7 + 1
            r6 = r6 & 15
            char r6 = r9[r6]     // Catch: java.lang.Exception -> Lcf
            r4[r7] = r6     // Catch: java.lang.Exception -> Lcf
            int r2 = r2 + 1
            goto Lb1
        Lc9:
            java.lang.String r9 = new java.lang.String     // Catch: java.lang.Exception -> Lcf
            r9.<init>(r4)     // Catch: java.lang.Exception -> Lcf
            return r9
        Lcf:
            r9 = move-exception
            r9.printStackTrace()
            java.lang.String r9 = ""
            return r9
    }

    private static java.lang.String c(byte[] r5) {
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

    private static byte[] d(java.lang.String r6) {
            int r0 = r6.length()
            java.lang.String r1 = "UTF-16LE"
            byte[] r6 = r6.getBytes(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "b = "
            r1.<init>(r2)
            java.lang.String r2 = a(r6)
            r1.append(r2)
            byte[] r1 = new byte[r0]
            r2 = 0
            r3 = r2
        L1c:
            int r4 = r6.length
            if (r2 >= r4) goto L34
            r4 = r6[r2]
            r5 = -1
            if (r4 == r5) goto L31
            r4 = r6[r2]
            r5 = -2
            if (r4 == r5) goto L31
            r4 = r6[r2]
            r1[r3] = r4
            int r3 = r3 + 1
            if (r3 == r0) goto L34
        L31:
            int r2 = r2 + 2
            goto L1c
        L34:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "source = "
            r6.<init>(r0)
            java.lang.String r0 = a(r1)
            r6.append(r0)
            return r1
    }
}

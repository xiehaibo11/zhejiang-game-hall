package org.apache.commons.codec1.digest;

public class Md5Crypt {
    static final java.lang.String APR1_PREFIX = "$apr1$";
    private static final int BLOCKSIZE = 16;
    static final java.lang.String MD5_PREFIX = "$1$";
    private static final int ROUNDS = 1000;

    public Md5Crypt() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String apr1Crypt(java.lang.String r1) {
            java.nio.charset.Charset r0 = org.apache.commons.codec1.Charsets.UTF_8
            byte[] r1 = r1.getBytes(r0)
            java.lang.String r1 = apr1Crypt(r1)
            return r1
    }

    public static java.lang.String apr1Crypt(java.lang.String r1, java.lang.String r2) {
            java.nio.charset.Charset r0 = org.apache.commons.codec1.Charsets.UTF_8
            byte[] r1 = r1.getBytes(r0)
            java.lang.String r1 = apr1Crypt(r1, r2)
            return r1
    }

    public static java.lang.String apr1Crypt(byte[] r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "$apr1$"
            r0.<init>(r1)
            r1 = 8
            java.lang.String r1 = org.apache.commons.codec1.digest.B64.getRandomSalt(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = apr1Crypt(r2, r0)
            return r2
    }

    public static java.lang.String apr1Crypt(byte[] r2, java.lang.String r3) {
            java.lang.String r0 = "$apr1$"
            if (r3 == 0) goto L16
            boolean r1 = r3.startsWith(r0)
            if (r1 != 0) goto L16
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
        L16:
            java.lang.String r2 = md5Crypt(r2, r3, r0)
            return r2
    }

    public static java.lang.String md5Crypt(byte[] r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "$1$"
            r0.<init>(r1)
            r1 = 8
            java.lang.String r1 = org.apache.commons.codec1.digest.B64.getRandomSalt(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = md5Crypt(r2, r0)
            return r2
    }

    public static java.lang.String md5Crypt(byte[] r1, java.lang.String r2) {
            java.lang.String r0 = "$1$"
            java.lang.String r1 = md5Crypt(r1, r2, r0)
            return r1
    }

    public static java.lang.String md5Crypt(byte[] r11, java.lang.String r12, java.lang.String r13) {
            int r0 = r11.length
            r1 = 8
            java.lang.String r2 = "$"
            r3 = 1
            if (r12 != 0) goto Le
            java.lang.String r12 = org.apache.commons.codec1.digest.B64.getRandomSalt(r1)
        Lc:
            r4 = r12
            goto L3c
        Le:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "^"
            r4.<init>(r5)
            java.lang.String r5 = "\\$"
            java.lang.String r5 = r13.replace(r2, r5)
            r4.append(r5)
            java.lang.String r5 = "([\\.\\/a-zA-Z0-9]{1,8}).*"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.util.regex.Pattern r4 = java.util.regex.Pattern.compile(r4)
            java.util.regex.Matcher r4 = r4.matcher(r12)
            if (r4 == 0) goto L138
            boolean r5 = r4.find()
            if (r5 == 0) goto L138
            java.lang.String r12 = r4.group(r3)
            goto Lc
        L3c:
            java.nio.charset.Charset r12 = org.apache.commons.codec1.Charsets.UTF_8
            byte[] r5 = r4.getBytes(r12)
            java.security.MessageDigest r6 = org.apache.commons.codec1.digest.DigestUtils.getMd5Digest()
            r6.update(r11)
            java.nio.charset.Charset r12 = org.apache.commons.codec1.Charsets.UTF_8
            byte[] r12 = r13.getBytes(r12)
            r6.update(r12)
            r6.update(r5)
            java.security.MessageDigest r7 = org.apache.commons.codec1.digest.DigestUtils.getMd5Digest()
            r7.update(r11)
            r7.update(r5)
            r7.update(r11)
            byte[] r8 = r7.digest()
            r12 = r0
        L67:
            r9 = 16
            r10 = 0
            if (r12 > 0) goto L12d
            java.util.Arrays.fill(r8, r10)
        L6f:
            if (r0 > 0) goto L11a
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r13 = java.lang.String.valueOf(r13)
            r0.<init>(r13)
            r0.append(r4)
            r0.append(r2)
            java.lang.String r13 = r0.toString()
            r12.<init>(r13)
            byte[] r13 = r6.digest()
            r0 = r10
        L8e:
            r2 = 1000(0x3e8, float:1.401E-42)
            if (r0 < r2) goto Lec
            r0 = r13[r10]
            r2 = 6
            r2 = r13[r2]
            r4 = 12
            r4 = r13[r4]
            r8 = 4
            org.apache.commons.codec1.digest.B64.b64from24bit(r0, r2, r4, r8, r12)
            r0 = r13[r3]
            r2 = 7
            r2 = r13[r2]
            r3 = 13
            r3 = r13[r3]
            org.apache.commons.codec1.digest.B64.b64from24bit(r0, r2, r3, r8, r12)
            r0 = 2
            r2 = r13[r0]
            r1 = r13[r1]
            r3 = 14
            r3 = r13[r3]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r1, r3, r8, r12)
            r1 = 3
            r1 = r13[r1]
            r2 = 9
            r2 = r13[r2]
            r3 = 15
            r3 = r13[r3]
            org.apache.commons.codec1.digest.B64.b64from24bit(r1, r2, r3, r8, r12)
            r1 = r13[r8]
            r2 = 10
            r2 = r13[r2]
            r3 = 5
            r3 = r13[r3]
            org.apache.commons.codec1.digest.B64.b64from24bit(r1, r2, r3, r8, r12)
            r1 = 11
            r1 = r13[r1]
            org.apache.commons.codec1.digest.B64.b64from24bit(r10, r10, r1, r0, r12)
            r6.reset()
            r7.reset()
            java.util.Arrays.fill(r11, r10)
            java.util.Arrays.fill(r5, r10)
            java.util.Arrays.fill(r13, r10)
            java.lang.String r11 = r12.toString()
            return r11
        Lec:
            java.security.MessageDigest r7 = org.apache.commons.codec1.digest.DigestUtils.getMd5Digest()
            r2 = r0 & 1
            if (r2 == 0) goto Lf8
            r7.update(r11)
            goto Lfb
        Lf8:
            r7.update(r13, r10, r9)
        Lfb:
            int r4 = r0 % 3
            if (r4 == 0) goto L102
            r7.update(r5)
        L102:
            int r4 = r0 % 7
            if (r4 == 0) goto L109
            r7.update(r11)
        L109:
            if (r2 == 0) goto L10f
            r7.update(r13, r10, r9)
            goto L112
        L10f:
            r7.update(r11)
        L112:
            byte[] r13 = r7.digest()
            int r0 = r0 + 1
            goto L8e
        L11a:
            r12 = r0 & 1
            if (r12 != r3) goto L124
            r12 = r8[r10]
            r6.update(r12)
            goto L129
        L124:
            r12 = r11[r10]
            r6.update(r12)
        L129:
            int r0 = r0 >> 1
            goto L6f
        L12d:
            if (r12 <= r9) goto L130
            goto L131
        L130:
            r9 = r12
        L131:
            r6.update(r8, r10, r9)
            int r12 = r12 + (-16)
            goto L67
        L138:
            java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            java.lang.String r0 = "Invalid salt value: "
            r13.<init>(r0)
            r13.append(r12)
            java.lang.String r12 = r13.toString()
            r11.<init>(r12)
            throw r11
    }
}

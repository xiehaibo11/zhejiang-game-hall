package org.apache.commons.codec1.digest;

public class Sha2Crypt {
    private static final int ROUNDS_DEFAULT = 5000;
    private static final int ROUNDS_MAX = 999999999;
    private static final int ROUNDS_MIN = 1000;
    private static final java.lang.String ROUNDS_PREFIX = "rounds=";
    private static final java.util.regex.Pattern SALT_PATTERN = null;
    private static final int SHA256_BLOCKSIZE = 32;
    static final java.lang.String SHA256_PREFIX = "$5$";
    private static final int SHA512_BLOCKSIZE = 64;
    static final java.lang.String SHA512_PREFIX = "$6$";

    static {
            java.lang.String r0 = "^\\$([56])\\$(rounds=(\\d+)\\$)?([\\.\\/a-zA-Z0-9]{1,16}).*"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            org.apache.commons.codec1.digest.Sha2Crypt.SALT_PATTERN = r0
            return
    }

    public Sha2Crypt() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String sha256Crypt(byte[] r1) {
            r0 = 0
            java.lang.String r1 = sha256Crypt(r1, r0)
            return r1
    }

    public static java.lang.String sha256Crypt(byte[] r3, java.lang.String r4) {
            java.lang.String r0 = "$5$"
            if (r4 != 0) goto L16
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>(r0)
            r1 = 8
            java.lang.String r1 = org.apache.commons.codec1.digest.B64.getRandomSalt(r1)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
        L16:
            r1 = 32
            java.lang.String r2 = "SHA-256"
            java.lang.String r3 = sha2Crypt(r3, r4, r0, r1, r2)
            return r3
    }

    private static java.lang.String sha2Crypt(byte[] r30, java.lang.String r31, java.lang.String r32, int r33, java.lang.String r34) {
            r0 = r30
            r1 = r31
            r2 = r33
            int r3 = r0.length
            if (r1 == 0) goto L356
            java.util.regex.Pattern r4 = org.apache.commons.codec1.digest.Sha2Crypt.SALT_PATTERN
            java.util.regex.Matcher r4 = r4.matcher(r1)
            if (r4 == 0) goto L342
            boolean r5 = r4.find()
            if (r5 == 0) goto L342
            r5 = 3
            java.lang.String r1 = r4.group(r5)
            r7 = 0
            if (r1 == 0) goto L37
            java.lang.String r1 = r4.group(r5)
            int r1 = java.lang.Integer.parseInt(r1)
            r8 = 1000(0x3e8, float:1.401E-42)
            r9 = 999999999(0x3b9ac9ff, float:0.004723787)
            int r1 = java.lang.Math.min(r9, r1)
            int r1 = java.lang.Math.max(r8, r1)
            r8 = r1
            r9 = 1
            goto L3b
        L37:
            r1 = 5000(0x1388, float:7.006E-42)
            r8 = r1
            r9 = r7
        L3b:
            r10 = 4
            java.lang.String r4 = r4.group(r10)
            java.nio.charset.Charset r1 = org.apache.commons.codec1.Charsets.UTF_8
            byte[] r11 = r4.getBytes(r1)
            int r12 = r11.length
            java.security.MessageDigest r13 = org.apache.commons.codec1.digest.DigestUtils.getDigest(r34)
            r13.update(r0)
            r13.update(r11)
            java.security.MessageDigest r1 = org.apache.commons.codec1.digest.DigestUtils.getDigest(r34)
            r1.update(r0)
            r1.update(r11)
            r1.update(r0)
            byte[] r14 = r1.digest()
            int r1 = r0.length
        L63:
            if (r1 > r2) goto L336
            r13.update(r14, r7, r1)
            int r1 = r0.length
        L69:
            if (r1 > 0) goto L31e
            byte[] r15 = r13.digest()
            java.security.MessageDigest r1 = org.apache.commons.codec1.digest.DigestUtils.getDigest(r34)
            r14 = 1
        L74:
            if (r14 <= r3) goto L30f
            byte[] r1 = r1.digest()
            byte[] r14 = new byte[r3]
            r5 = r7
        L7d:
            int r6 = r3 - r2
            if (r5 < r6) goto L301
            int r6 = r3 - r5
            java.lang.System.arraycopy(r1, r7, r14, r5, r6)
            java.security.MessageDigest r6 = org.apache.commons.codec1.digest.DigestUtils.getDigest(r34)
            r1 = 1
        L8b:
            r5 = r15[r7]
            r5 = r5 & 255(0xff, float:3.57E-43)
            r18 = 16
            int r5 = r5 + 16
            if (r1 <= r5) goto L2f2
            byte[] r5 = r6.digest()
            byte[] r1 = new byte[r12]
        L9b:
            r10 = r7
            int r7 = r12 - r2
            if (r10 < r7) goto L2e4
            int r7 = r12 - r10
            r31 = r15
            r15 = 0
            java.lang.System.arraycopy(r5, r15, r1, r10, r7)
            r7 = r31
            r15 = 0
        Lab:
            int r10 = r8 + (-1)
            if (r15 <= r10) goto L2b0
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r10 = r32
            r3.<init>(r10)
            java.lang.String r10 = "$"
            if (r9 == 0) goto Lc5
            java.lang.String r9 = "rounds="
            r3.append(r9)
            r3.append(r8)
            r3.append(r10)
        Lc5:
            r3.append(r4)
            r3.append(r10)
            r12 = 27
            r15 = 6
            r21 = 26
            r22 = 5
            r23 = 25
            r24 = 24
            r25 = 23
            r26 = 22
            r27 = 21
            r8 = 32
            r28 = 7
            r4 = 2
            if (r2 != r8) goto L16d
            r2 = 0
            r8 = r7[r2]
            r2 = 10
            r2 = r7[r2]
            r29 = 20
            r9 = r7[r29]
            r10 = 4
            org.apache.commons.codec1.digest.B64.b64from24bit(r8, r2, r9, r10, r3)
            r2 = r7[r27]
            r8 = 1
            r8 = r7[r8]
            r9 = 11
            r9 = r7[r9]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r9, r10, r3)
            r2 = 12
            r2 = r7[r2]
            r8 = r7[r26]
            r4 = r7[r4]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r4, r10, r3)
            r2 = 3
            r4 = r7[r2]
            r2 = 13
            r2 = r7[r2]
            r8 = r7[r25]
            org.apache.commons.codec1.digest.B64.b64from24bit(r4, r2, r8, r10, r3)
            r2 = r7[r24]
            r4 = r7[r10]
            r8 = 14
            r8 = r7[r8]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r4, r8, r10, r3)
            r2 = 15
            r2 = r7[r2]
            r4 = r7[r23]
            r8 = r7[r22]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r4, r8, r10, r3)
            r2 = r7[r15]
            r4 = r7[r18]
            r8 = r7[r21]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r4, r8, r10, r3)
            r2 = r7[r12]
            r4 = r7[r28]
            r8 = 17
            r8 = r7[r8]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r4, r8, r10, r3)
            r2 = 18
            r2 = r7[r2]
            r4 = 28
            r4 = r7[r4]
            r8 = 8
            r8 = r7[r8]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r4, r8, r10, r3)
            r2 = 9
            r2 = r7[r2]
            r4 = 19
            r4 = r7[r4]
            r8 = 29
            r8 = r7[r8]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r4, r8, r10, r3)
            r2 = 31
            r2 = r7[r2]
            r4 = 30
            r4 = r7[r4]
            r7 = 3
            r9 = 0
            org.apache.commons.codec1.digest.B64.b64from24bit(r9, r2, r4, r7, r3)
            r7 = r9
            goto L296
        L16d:
            r9 = 0
            r10 = 4
            r2 = r7[r9]
            r9 = r7[r27]
            r19 = 42
            r8 = r7[r19]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r9, r8, r10, r3)
            r2 = r7[r26]
            r8 = 43
            r8 = r7[r8]
            r17 = 1
            r9 = r7[r17]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r9, r10, r3)
            r2 = 44
            r2 = r7[r2]
            r8 = r7[r4]
            r9 = r7[r25]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r9, r10, r3)
            r16 = 3
            r2 = r7[r16]
            r8 = r7[r24]
            r9 = 45
            r9 = r7[r9]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r9, r10, r3)
            r2 = r7[r23]
            r8 = 46
            r8 = r7[r8]
            r9 = r7[r10]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r9, r10, r3)
            r2 = 47
            r2 = r7[r2]
            r8 = r7[r22]
            r9 = r7[r21]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r9, r10, r3)
            r2 = r7[r15]
            r8 = r7[r12]
            r9 = 48
            r9 = r7[r9]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r9, r10, r3)
            r2 = 28
            r2 = r7[r2]
            r8 = 49
            r8 = r7[r8]
            r9 = r7[r28]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r9, r10, r3)
            r2 = 50
            r2 = r7[r2]
            r8 = 8
            r8 = r7[r8]
            r9 = 29
            r9 = r7[r9]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r9, r10, r3)
            r2 = 9
            r2 = r7[r2]
            r8 = 30
            r8 = r7[r8]
            r9 = 51
            r9 = r7[r9]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r9, r10, r3)
            r2 = 31
            r2 = r7[r2]
            r8 = 52
            r8 = r7[r8]
            r9 = 10
            r9 = r7[r9]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r9, r10, r3)
            r2 = 53
            r2 = r7[r2]
            r8 = 11
            r8 = r7[r8]
            r9 = 32
            r9 = r7[r9]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r9, r10, r3)
            r2 = 12
            r2 = r7[r2]
            r8 = 33
            r8 = r7[r8]
            r9 = 54
            r9 = r7[r9]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r9, r10, r3)
            r2 = 34
            r2 = r7[r2]
            r8 = 55
            r8 = r7[r8]
            r9 = 13
            r9 = r7[r9]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r9, r10, r3)
            r2 = 56
            r2 = r7[r2]
            r8 = 14
            r8 = r7[r8]
            r9 = 35
            r9 = r7[r9]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r9, r10, r3)
            r2 = 15
            r2 = r7[r2]
            r8 = 36
            r8 = r7[r8]
            r9 = 57
            r9 = r7[r9]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r9, r10, r3)
            r2 = 37
            r2 = r7[r2]
            r8 = 58
            r8 = r7[r8]
            r9 = r7[r18]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r9, r10, r3)
            r2 = 59
            r2 = r7[r2]
            r8 = 17
            r8 = r7[r8]
            r9 = 38
            r9 = r7[r9]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r9, r10, r3)
            r2 = 18
            r2 = r7[r2]
            r8 = 39
            r8 = r7[r8]
            r9 = 60
            r9 = r7[r9]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r9, r10, r3)
            r2 = 40
            r2 = r7[r2]
            r8 = 61
            r8 = r7[r8]
            r9 = 19
            r9 = r7[r9]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r9, r10, r3)
            r2 = 62
            r2 = r7[r2]
            r8 = 20
            r8 = r7[r8]
            r9 = 41
            r9 = r7[r9]
            org.apache.commons.codec1.digest.B64.b64from24bit(r2, r8, r9, r10, r3)
            r2 = 63
            r2 = r7[r2]
            r7 = 0
            org.apache.commons.codec1.digest.B64.b64from24bit(r7, r7, r2, r4, r3)
        L296:
            java.util.Arrays.fill(r5, r7)
            java.util.Arrays.fill(r14, r7)
            java.util.Arrays.fill(r1, r7)
            r13.reset()
            r6.reset()
            java.util.Arrays.fill(r0, r7)
            java.util.Arrays.fill(r11, r7)
            java.lang.String r0 = r3.toString()
            return r0
        L2b0:
            r13 = 0
            r16 = 3
            r17 = 1
            java.security.MessageDigest r10 = org.apache.commons.codec1.digest.DigestUtils.getDigest(r34)
            r20 = r15 & 1
            if (r20 == 0) goto L2c1
            r10.update(r14, r13, r3)
            goto L2c4
        L2c1:
            r10.update(r7, r13, r2)
        L2c4:
            int r21 = r15 % 3
            if (r21 == 0) goto L2cb
            r10.update(r1, r13, r12)
        L2cb:
            int r21 = r15 % 7
            if (r21 == 0) goto L2d2
            r10.update(r14, r13, r3)
        L2d2:
            if (r20 == 0) goto L2d8
            r10.update(r7, r13, r2)
            goto L2db
        L2d8:
            r10.update(r14, r13, r3)
        L2db:
            byte[] r7 = r10.digest()
            int r15 = r15 + 1
            r13 = r10
            goto Lab
        L2e4:
            r7 = r10
            r31 = r15
            r10 = 0
            r16 = 3
            r17 = 1
            java.lang.System.arraycopy(r5, r10, r1, r7, r2)
            int r7 = r7 + r2
            goto L9b
        L2f2:
            r10 = r7
            r31 = r15
            r16 = 3
            r17 = 1
            r6.update(r11)
            int r1 = r1 + 1
            r10 = 4
            goto L8b
        L301:
            r10 = r7
            r31 = r15
            r16 = 3
            r17 = 1
            java.lang.System.arraycopy(r1, r10, r14, r5, r2)
            int r5 = r5 + r2
            r10 = 4
            goto L7d
        L30f:
            r16 = r5
            r10 = r7
            r31 = r15
            r17 = 1
            r1.update(r0)
            int r14 = r14 + 1
            r10 = 4
            goto L74
        L31e:
            r16 = r5
            r10 = r7
            r17 = 1
            r5 = r1 & 1
            if (r5 == 0) goto L32b
            r13.update(r14, r10, r2)
            goto L32e
        L32b:
            r13.update(r0)
        L32e:
            int r1 = r1 >> 1
            r7 = r10
            r5 = r16
            r10 = 4
            goto L69
        L336:
            r16 = r5
            r10 = r7
            r17 = 1
            r13.update(r14, r10, r2)
            int r1 = r1 - r2
            r10 = 4
            goto L63
        L342:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Invalid salt value: "
            r2.<init>(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.<init>(r1)
            throw r0
        L356:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "Salt must not be null"
            r0.<init>(r1)
            throw r0
    }

    public static java.lang.String sha512Crypt(byte[] r1) {
            r0 = 0
            java.lang.String r1 = sha512Crypt(r1, r0)
            return r1
    }

    public static java.lang.String sha512Crypt(byte[] r3, java.lang.String r4) {
            java.lang.String r0 = "$6$"
            if (r4 != 0) goto L16
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>(r0)
            r1 = 8
            java.lang.String r1 = org.apache.commons.codec1.digest.B64.getRandomSalt(r1)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
        L16:
            r1 = 64
            java.lang.String r2 = "SHA-512"
            java.lang.String r3 = sha2Crypt(r3, r4, r0, r1, r2)
            return r3
    }
}

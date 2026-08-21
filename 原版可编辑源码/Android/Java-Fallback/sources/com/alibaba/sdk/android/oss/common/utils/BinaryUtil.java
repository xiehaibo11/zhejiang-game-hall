package com.alibaba.sdk.android.oss.common.utils;

public class BinaryUtil {
    public BinaryUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String calculateBase64Md5(java.io.FileDescriptor r0) throws java.io.IOException {
            byte[] r0 = calculateMd5(r0)
            java.lang.String r0 = toBase64String(r0)
            return r0
    }

    public static java.lang.String calculateBase64Md5(java.lang.String r0) throws java.io.IOException {
            byte[] r0 = calculateMd5(r0)
            java.lang.String r0 = toBase64String(r0)
            return r0
    }

    public static java.lang.String calculateBase64Md5(byte[] r0) {
            byte[] r0 = calculateMd5(r0)
            java.lang.String r0 = toBase64String(r0)
            return r0
    }

    public static byte[] calculateMd5(java.io.FileDescriptor r4) throws java.io.IOException {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L23
            r1 = 10240(0x2800, float:1.4349E-41)
            byte[] r1 = new byte[r1]     // Catch: java.security.NoSuchAlgorithmException -> L23
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.security.NoSuchAlgorithmException -> L23
            r2.<init>(r4)     // Catch: java.security.NoSuchAlgorithmException -> L23
        Lf:
            int r4 = r2.read(r1)     // Catch: java.security.NoSuchAlgorithmException -> L23
            r3 = -1
            if (r4 == r3) goto L1b
            r3 = 0
            r0.update(r1, r3, r4)     // Catch: java.security.NoSuchAlgorithmException -> L23
            goto Lf
        L1b:
            r2.close()     // Catch: java.security.NoSuchAlgorithmException -> L23
            byte[] r4 = r0.digest()     // Catch: java.security.NoSuchAlgorithmException -> L23
            return r4
        L23:
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            java.lang.String r0 = "MD5 algorithm not found."
            r4.<init>(r0)
            goto L2c
        L2b:
            throw r4
        L2c:
            goto L2b
    }

    public static byte[] calculateMd5(java.lang.String r4) throws java.io.IOException {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L28
            r1 = 10240(0x2800, float:1.4349E-41)
            byte[] r1 = new byte[r1]     // Catch: java.security.NoSuchAlgorithmException -> L28
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.security.NoSuchAlgorithmException -> L28
            java.io.File r3 = new java.io.File     // Catch: java.security.NoSuchAlgorithmException -> L28
            r3.<init>(r4)     // Catch: java.security.NoSuchAlgorithmException -> L28
            r2.<init>(r3)     // Catch: java.security.NoSuchAlgorithmException -> L28
        L14:
            int r4 = r2.read(r1)     // Catch: java.security.NoSuchAlgorithmException -> L28
            r3 = -1
            if (r4 == r3) goto L20
            r3 = 0
            r0.update(r1, r3, r4)     // Catch: java.security.NoSuchAlgorithmException -> L28
            goto L14
        L20:
            r2.close()     // Catch: java.security.NoSuchAlgorithmException -> L28
            byte[] r4 = r0.digest()     // Catch: java.security.NoSuchAlgorithmException -> L28
            return r4
        L28:
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            java.lang.String r0 = "MD5 algorithm not found."
            r4.<init>(r0)
            goto L31
        L30:
            throw r4
        L31:
            goto L30
    }

    public static byte[] calculateMd5(byte[] r1) {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> Le
            r0.update(r1)
            byte[] r1 = r0.digest()
            return r1
        Le:
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r0 = "MD5 algorithm not found."
            r1.<init>(r0)
            throw r1
    }

    public static java.lang.String calculateMd5Str(java.io.FileDescriptor r0) throws java.io.IOException {
            byte[] r0 = calculateMd5(r0)
            java.lang.String r0 = getMd5StrFromBytes(r0)
            return r0
    }

    public static java.lang.String calculateMd5Str(java.lang.String r0) throws java.io.IOException {
            byte[] r0 = calculateMd5(r0)
            java.lang.String r0 = getMd5StrFromBytes(r0)
            return r0
    }

    public static java.lang.String calculateMd5Str(byte[] r0) {
            byte[] r0 = calculateMd5(r0)
            java.lang.String r0 = getMd5StrFromBytes(r0)
            return r0
    }

    private static java.lang.String convertHashToString(byte[] r4) {
            java.lang.String r0 = ""
            r1 = 0
        L3:
            int r2 = r4.length
            if (r1 >= r2) goto L29
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r0 = r4[r1]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 + 256
            r3 = 16
            java.lang.String r0 = java.lang.Integer.toString(r0, r3)
            r3 = 1
            java.lang.String r0 = r0.substring(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            int r1 = r1 + 1
            goto L3
        L29:
            java.lang.String r4 = r0.toLowerCase()
            return r4
    }

    public static java.lang.String fileToSHA1(java.io.FileDescriptor r6) {
            r0 = 0
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L37
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L37
            r6 = 1024(0x400, float:1.435E-42)
            byte[] r6 = new byte[r6]     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            java.lang.String r2 = "SHA-1"
            java.security.MessageDigest r2 = java.security.MessageDigest.getInstance(r2)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            r3 = 0
            r4 = 0
        L12:
            r5 = -1
            if (r4 == r5) goto L1f
            int r4 = r1.read(r6)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            if (r4 <= 0) goto L12
            r2.update(r6, r3, r4)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            goto L12
        L1f:
            byte[] r6 = r2.digest()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            java.lang.String r6 = convertHashToString(r6)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            r1.close()     // Catch: java.lang.Exception -> L2a
        L2a:
            return r6
        L2b:
            r6 = move-exception
            r0 = r1
            goto L31
        L2e:
            goto L38
        L30:
            r6 = move-exception
        L31:
            if (r0 == 0) goto L36
            r0.close()     // Catch: java.lang.Exception -> L36
        L36:
            throw r6
        L37:
            r1 = r0
        L38:
            if (r1 == 0) goto L3d
            r1.close()     // Catch: java.lang.Exception -> L3d
        L3d:
            return r0
    }

    public static java.lang.String fileToSHA1(java.lang.String r6) {
            r0 = 0
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L37
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L37
            r6 = 1024(0x400, float:1.435E-42)
            byte[] r6 = new byte[r6]     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            java.lang.String r2 = "SHA-1"
            java.security.MessageDigest r2 = java.security.MessageDigest.getInstance(r2)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            r3 = 0
            r4 = 0
        L12:
            r5 = -1
            if (r4 == r5) goto L1f
            int r4 = r1.read(r6)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            if (r4 <= 0) goto L12
            r2.update(r6, r3, r4)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            goto L12
        L1f:
            byte[] r6 = r2.digest()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            java.lang.String r6 = convertHashToString(r6)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2e
            r1.close()     // Catch: java.lang.Exception -> L2a
        L2a:
            return r6
        L2b:
            r6 = move-exception
            r0 = r1
            goto L31
        L2e:
            goto L38
        L30:
            r6 = move-exception
        L31:
            if (r0 == 0) goto L36
            r0.close()     // Catch: java.lang.Exception -> L36
        L36:
            throw r6
        L37:
            r1 = r0
        L38:
            if (r1 == 0) goto L3d
            r1.close()     // Catch: java.lang.Exception -> L3d
        L3d:
            return r0
    }

    public static byte[] fromBase64String(java.lang.String r1) {
            r0 = 0
            byte[] r1 = android.util.Base64.decode(r1, r0)
            return r1
    }

    public static java.lang.String getMd5StrFromBytes(byte[] r5) {
            if (r5 != 0) goto L5
            java.lang.String r5 = ""
            return r5
        L5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
            r2 = 0
        Lc:
            int r3 = r5.length
            if (r2 >= r3) goto L26
            r3 = 1
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r4 = r5[r2]
            java.lang.Byte r4 = java.lang.Byte.valueOf(r4)
            r3[r1] = r4
            java.lang.String r4 = "%02x"
            java.lang.String r3 = java.lang.String.format(r4, r3)
            r0.append(r3)
            int r2 = r2 + 1
            goto Lc
        L26:
            java.lang.String r5 = r0.toString()
            return r5
    }

    public static java.lang.String toBase64String(byte[] r2) {
            java.lang.String r0 = new java.lang.String
            r1 = 0
            byte[] r2 = android.util.Base64.encode(r2, r1)
            r0.<init>(r2)
            java.lang.String r2 = r0.trim()
            return r2
    }
}

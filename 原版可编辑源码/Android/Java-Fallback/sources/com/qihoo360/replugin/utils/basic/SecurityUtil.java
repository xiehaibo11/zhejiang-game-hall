package com.qihoo360.replugin.utils.basic;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class SecurityUtil {
    public SecurityUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] MD5(java.io.File r2) {
            r0 = 0
            java.io.FileInputStream r2 = com.qihoo360.replugin.utils.FileUtils.openInputStream(r2)     // Catch: java.lang.Throwable -> Lf java.lang.Exception -> L17
            byte[] r0 = MD5(r2)     // Catch: java.lang.Throwable -> Ld java.lang.Exception -> L18
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r2)
            return r0
        Ld:
            r0 = move-exception
            goto L13
        Lf:
            r2 = move-exception
            r1 = r0
            r0 = r2
            r2 = r1
        L13:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r2)
            throw r0
        L17:
            r2 = r0
        L18:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r2)
            return r0
    }

    public static final byte[] MD5(java.io.InputStream r4) throws java.security.NoSuchAlgorithmException, java.io.IOException {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)
            r1 = 4096(0x1000, float:5.74E-42)
            byte[] r1 = new byte[r1]
        La:
            int r2 = r4.read(r1)
            if (r2 < 0) goto L17
            if (r2 <= 0) goto La
            r3 = 0
            r0.update(r1, r3, r2)
            goto La
        L17:
            byte[] r4 = r0.digest()
            return r4
    }

    public static byte[] MD5(java.lang.String r1) {
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            byte[] r1 = MD5(r0)
            return r1
    }

    public static byte[] MD5(byte[] r2) {
            r0 = 0
            java.lang.String r1 = "MD5"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.security.NoSuchAlgorithmException -> L8
            goto Ld
        L8:
            r1 = move-exception
            r1.printStackTrace()
            r1 = r0
        Ld:
            if (r1 == 0) goto L17
            r1.update(r2)
            byte[] r2 = r1.digest()
            return r2
        L17:
            return r0
    }

    public static java.lang.String getFileMD5(java.lang.String r0) {
            byte[] r0 = MD5(r0)
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            java.lang.String r0 = com.qihoo360.replugin.utils.basic.ByteConvertor.bytesToHexString(r0)
            return r0
    }

    public static java.lang.String getMD5(java.io.InputStream r5) {
            r0 = 0
            java.lang.String r1 = "MD5"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2e
            java.io.BufferedInputStream r2 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2e
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2e
            r5 = 1024(0x400, float:1.435E-42)
            byte[] r5 = new byte[r5]     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L2f
        L10:
            int r3 = r2.read(r5)     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L2f
            r4 = -1
            if (r3 == r4) goto L1c
            r4 = 0
            r1.update(r5, r4, r3)     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L2f
            goto L10
        L1c:
            byte[] r5 = r1.digest()     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L2f
            r2.close()     // Catch: java.lang.Exception -> L35
            goto L35
        L24:
            r5 = move-exception
            r0 = r2
            goto L28
        L27:
            r5 = move-exception
        L28:
            if (r0 == 0) goto L2d
            r0.close()     // Catch: java.lang.Exception -> L2d
        L2d:
            throw r5
        L2e:
            r2 = r0
        L2f:
            if (r2 == 0) goto L34
            r2.close()     // Catch: java.lang.Exception -> L34
        L34:
            r5 = r0
        L35:
            if (r5 != 0) goto L38
            return r0
        L38:
            java.lang.String r5 = com.qihoo360.replugin.utils.basic.ByteConvertor.bytesToHexString(r5)
            return r5
    }

    public static java.lang.String getMD5(java.lang.String r0) {
            if (r0 != 0) goto L5
            java.lang.String r0 = ""
            return r0
        L5:
            byte[] r0 = r0.getBytes()
            java.lang.String r0 = getMD5(r0)
            return r0
    }

    public static java.lang.String getMD5(byte[] r0) {
            byte[] r0 = MD5(r0)
            java.lang.String r0 = com.qihoo360.replugin.utils.basic.ByteConvertor.bytesToHexString(r0)
            return r0
    }

    public static java.lang.String getMd5ByFile(java.io.File r8) {
            r0 = 0
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            java.nio.channels.FileChannel r2 = r1.getChannel()     // Catch: java.lang.Exception -> L2c java.lang.Throwable -> L48
            java.nio.channels.FileChannel$MapMode r3 = java.nio.channels.FileChannel.MapMode.READ_ONLY     // Catch: java.lang.Exception -> L2c java.lang.Throwable -> L48
            r4 = 0
            long r6 = r8.length()     // Catch: java.lang.Exception -> L2c java.lang.Throwable -> L48
            java.nio.MappedByteBuffer r8 = r2.map(r3, r4, r6)     // Catch: java.lang.Exception -> L2c java.lang.Throwable -> L48
            java.lang.String r2 = "MD5"
            java.security.MessageDigest r2 = java.security.MessageDigest.getInstance(r2)     // Catch: java.lang.Exception -> L2c java.lang.Throwable -> L48
            r2.update(r8)     // Catch: java.lang.Exception -> L2c java.lang.Throwable -> L48
            byte[] r8 = r2.digest()     // Catch: java.lang.Exception -> L2c java.lang.Throwable -> L48
            r1.close()     // Catch: java.io.IOException -> L27
            goto L40
        L27:
            r1 = move-exception
            r1.printStackTrace()
            goto L40
        L2c:
            r8 = move-exception
            goto L32
        L2e:
            r8 = move-exception
            goto L4a
        L30:
            r8 = move-exception
            r1 = r0
        L32:
            r8.printStackTrace()     // Catch: java.lang.Throwable -> L48
            if (r1 == 0) goto L3f
            r1.close()     // Catch: java.io.IOException -> L3b
            goto L3f
        L3b:
            r8 = move-exception
            r8.printStackTrace()
        L3f:
            r8 = r0
        L40:
            if (r8 != 0) goto L43
            return r0
        L43:
            java.lang.String r8 = com.qihoo360.replugin.utils.basic.ByteConvertor.bytesToHexString(r8)
            return r8
        L48:
            r8 = move-exception
            r0 = r1
        L4a:
            if (r0 == 0) goto L54
            r0.close()     // Catch: java.io.IOException -> L50
            goto L54
        L50:
            r0 = move-exception
            r0.printStackTrace()
        L54:
            throw r8
    }
}

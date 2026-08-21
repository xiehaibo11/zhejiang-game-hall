package com.ymnsdk.replugin.download;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class CodecUtil {
    private static java.security.MessageDigest MD5;

    static {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> L9
            com.ymnsdk.replugin.download.CodecUtil.MD5 = r0     // Catch: java.lang.Exception -> L9
            goto Ld
        L9:
            r0 = move-exception
            r0.printStackTrace()
        Ld:
            return
    }

    public CodecUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String md5File(java.io.File r4) {
            java.io.FileInputStream r0 = new java.io.FileInputStream     // Catch: java.io.IOException -> L36
            r0.<init>(r4)     // Catch: java.io.IOException -> L36
            r4 = 8192(0x2000, float:1.148E-41)
            byte[] r4 = new byte[r4]     // Catch: java.lang.Throwable -> L2a
        L9:
            int r1 = r0.read(r4)     // Catch: java.lang.Throwable -> L2a
            r2 = -1
            if (r1 == r2) goto L17
            java.security.MessageDigest r2 = com.ymnsdk.replugin.download.CodecUtil.MD5     // Catch: java.lang.Throwable -> L2a
            r3 = 0
            r2.update(r4, r3, r1)     // Catch: java.lang.Throwable -> L2a
            goto L9
        L17:
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Throwable -> L2a
            java.security.MessageDigest r1 = com.ymnsdk.replugin.download.CodecUtil.MD5     // Catch: java.lang.Throwable -> L2a
            byte[] r1 = r1.digest()     // Catch: java.lang.Throwable -> L2a
            char[] r1 = org.apache.commons.codec1.binary.Hex.encodeHex(r1)     // Catch: java.lang.Throwable -> L2a
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L2a
            r0.close()     // Catch: java.io.IOException -> L36
            return r4
        L2a:
            r4 = move-exception
            throw r4     // Catch: java.lang.Throwable -> L2c
        L2c:
            r1 = move-exception
            r0.close()     // Catch: java.lang.Throwable -> L31
            goto L35
        L31:
            r0 = move-exception
            r4.addSuppressed(r0)     // Catch: java.io.IOException -> L36
        L35:
            throw r1     // Catch: java.io.IOException -> L36
        L36:
            r4 = move-exception
            r4.printStackTrace()
            r4 = 0
            return r4
    }

    public static java.lang.String md5File(java.lang.String r1) {
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            java.lang.String r1 = md5File(r0)
            return r1
    }
}

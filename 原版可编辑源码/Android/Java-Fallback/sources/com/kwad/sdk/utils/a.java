package com.kwad.sdk.utils;

public final class a {
    public static byte[] fn(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L8
            r1 = 0
            return r1
        L8:
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            byte[] r1 = getFileMD5Digest(r0)
            return r1
    }

    public static java.lang.String getFileMD5(java.io.File r3) {
            r0 = 0
            byte[] r3 = getFileMD5Digest(r3)     // Catch: java.io.IOException -> L13
            if (r3 == 0) goto L12
            int r1 = r3.length     // Catch: java.io.IOException -> L13
            if (r1 != 0) goto Lb
            goto L12
        Lb:
            r1 = 0
            int r2 = r3.length     // Catch: java.io.IOException -> L13
            java.lang.String r3 = com.kwad.sdk.utils.ad.toHexString(r3, r1, r2)     // Catch: java.io.IOException -> L13
            return r3
        L12:
            return r0
        L13:
            r3 = move-exception
            java.lang.String r1 = "FileMD5Utils"
            java.lang.String r2 = "cannot calculate md5 of file"
            com.kwad.sdk.core.e.c.e(r1, r2, r3)
            return r0
    }

    public static byte[] getFileMD5Digest(java.io.File r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.io.FileInputStream r1 = new java.io.FileInputStream
            r1.<init>(r5)
            java.lang.String r5 = "MD5"
            java.security.MessageDigest r5 = java.security.MessageDigest.getInstance(r5)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            r2 = 4096(0x1000, float:5.74E-42)
            byte[] r2 = new byte[r2]     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
        L13:
            int r3 = r1.read(r2)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            r4 = -1
            if (r3 == r4) goto L1f
            r4 = 0
            r5.update(r2, r4, r3)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            goto L13
        L1f:
            byte[] r5 = r5.digest()     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return r5
        L27:
            r5 = move-exception
            goto L35
        L29:
            r5 = move-exception
            java.lang.String r2 = "FileMD5Utils"
            java.lang.String r3 = "getting file md5 digest error."
            com.kwad.sdk.core.e.c.e(r2, r3, r5)     // Catch: java.lang.Throwable -> L27
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return r0
        L35:
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            throw r5
    }
}

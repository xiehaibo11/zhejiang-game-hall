package com.kwad.sdk.api.loader;

final class s {
    private static final char[] ajn = null;

    static {
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            com.kwad.sdk.api.loader.s.ajn = r0
            return
    }

    private static void b(java.io.Closeable r0) {
            if (r0 == 0) goto L5
            r0.close()     // Catch: java.lang.Throwable -> L5
        L5:
            return
    }

    static java.lang.String getFileMD5(java.io.File r7) {
            r0 = 0
            java.lang.String r1 = "MD5"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L53
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L53
            r2.<init>(r7)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L53
            java.security.DigestInputStream r7 = new java.security.DigestInputStream     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L53
            r7.<init>(r2, r1)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L53
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Exception -> L4c java.lang.Throwable -> L60
        L15:
            int r2 = r7.read(r0)     // Catch: java.lang.Exception -> L4c java.lang.Throwable -> L60
            r3 = -1
            if (r2 == r3) goto L1d
            goto L15
        L1d:
            byte[] r0 = r1.digest()     // Catch: java.lang.Exception -> L4c java.lang.Throwable -> L60
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4c java.lang.Throwable -> L60
            int r2 = r0.length     // Catch: java.lang.Exception -> L4c java.lang.Throwable -> L60
            int r2 = r2 * 2
            r1.<init>(r2)     // Catch: java.lang.Exception -> L4c java.lang.Throwable -> L60
            int r2 = r0.length     // Catch: java.lang.Exception -> L4c java.lang.Throwable -> L60
            r3 = 0
        L2b:
            if (r3 >= r2) goto L44
            r4 = r0[r3]     // Catch: java.lang.Exception -> L4c java.lang.Throwable -> L60
            r4 = r4 & 255(0xff, float:3.57E-43)
            r5 = 16
            if (r4 >= r5) goto L3a
            java.lang.String r5 = "0"
            r1.append(r5)     // Catch: java.lang.Exception -> L4c java.lang.Throwable -> L60
        L3a:
            java.lang.String r4 = java.lang.Integer.toHexString(r4)     // Catch: java.lang.Exception -> L4c java.lang.Throwable -> L60
            r1.append(r4)     // Catch: java.lang.Exception -> L4c java.lang.Throwable -> L60
            int r3 = r3 + 1
            goto L2b
        L44:
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L4c java.lang.Throwable -> L60
            b(r7)
            goto L5f
        L4c:
            r0 = move-exception
            goto L57
        L4e:
            r7 = move-exception
            r6 = r0
            r0 = r7
            r7 = r6
            goto L61
        L53:
            r7 = move-exception
            r6 = r0
            r0 = r7
            r7 = r6
        L57:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L60
            b(r7)
            java.lang.String r0 = ""
        L5f:
            return r0
        L60:
            r0 = move-exception
        L61:
            b(r7)
            throw r0
    }
}

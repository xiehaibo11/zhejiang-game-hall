package com.kwad.sdk.core.diskcache.b;

public final class c {
    static java.lang.String cF(java.lang.String r2) {
            if (r2 != 0) goto L5
            java.lang.String r2 = ""
            return r2
        L5:
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L1b
            byte[] r1 = r2.getBytes()     // Catch: java.security.NoSuchAlgorithmException -> L1b
            r0.update(r1)     // Catch: java.security.NoSuchAlgorithmException -> L1b
            byte[] r0 = r0.digest()     // Catch: java.security.NoSuchAlgorithmException -> L1b
            java.lang.String r2 = e(r0)     // Catch: java.security.NoSuchAlgorithmException -> L1b
            goto L23
        L1b:
            int r2 = r2.hashCode()
            java.lang.String r2 = java.lang.String.valueOf(r2)
        L23:
            return r2
    }

    private static java.lang.String e(byte[] r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
        L6:
            int r2 = r5.length
            if (r1 >= r2) goto L23
            r2 = r5[r1]
            r2 = r2 & 255(0xff, float:3.57E-43)
            java.lang.String r2 = java.lang.Integer.toHexString(r2)
            int r3 = r2.length()
            r4 = 1
            if (r3 != r4) goto L1d
            r3 = 48
            r0.append(r3)
        L1d:
            r0.append(r2)
            int r1 = r1 + 1
            goto L6
        L23:
            java.lang.String r5 = r0.toString()
            return r5
    }
}

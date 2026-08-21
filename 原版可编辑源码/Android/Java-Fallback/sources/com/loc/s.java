package com.loc;

public final class s {
    public static java.lang.String a(java.lang.String r0) {
            if (r0 != 0) goto L4
            r0 = 0
            return r0
        L4:
            byte[] r0 = c(r0)
            java.lang.String r0 = com.loc.x.e(r0)
            return r0
    }

    public static java.lang.String a(byte[] r1) {
            java.lang.String r0 = "ETUQ1"
            java.lang.String r0 = com.loc.x.c(r0)
            byte[] r1 = a(r1, r0)
            java.lang.String r1 = com.loc.x.e(r1)
            return r1
    }

    public static byte[] a(byte[] r1, java.lang.String r2) {
            java.security.MessageDigest r2 = java.security.MessageDigest.getInstance(r2)     // Catch: java.lang.Throwable -> Lc
            r2.update(r1)     // Catch: java.lang.Throwable -> Lc
            byte[] r1 = r2.digest()     // Catch: java.lang.Throwable -> Lc
            goto L15
        Lc:
            r1 = move-exception
            java.lang.String r2 = "MD5"
            java.lang.String r0 = "gmb"
            com.loc.as.a(r1, r2, r0)
            r1 = 0
        L15:
            return r1
    }

    public static java.lang.String b(java.lang.String r0) {
            byte[] r0 = d(r0)
            java.lang.String r0 = com.loc.x.f(r0)
            return r0
    }

    private static byte[] c(java.lang.String r2) {
            byte[] r2 = e(r2)     // Catch: java.lang.Throwable -> L5
            return r2
        L5:
            r2 = move-exception
            java.lang.String r0 = "MD5"
            java.lang.String r1 = "gmb"
            com.loc.as.a(r2, r0, r1)
            r2 = 0
            byte[] r2 = new byte[r2]
            return r2
    }

    private static byte[] d(java.lang.String r0) {
            byte[] r0 = e(r0)     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            byte[] r0 = new byte[r0]
            return r0
    }

    private static byte[] e(java.lang.String r1) throws java.security.NoSuchAlgorithmException, java.io.UnsupportedEncodingException {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.lang.String r0 = "ETUQ1"
            java.lang.String r0 = com.loc.x.c(r0)
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)
            byte[] r1 = com.loc.x.a(r1)
            r0.update(r1)
            byte[] r1 = r0.digest()
            return r1
    }
}

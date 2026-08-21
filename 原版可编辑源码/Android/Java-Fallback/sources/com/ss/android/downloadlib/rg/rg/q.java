package com.ss.android.downloadlib.rg.rg;

public class q {
    public static byte[] rg(java.io.InputStream r3, java.lang.String r4) throws java.lang.Exception {
            java.security.MessageDigest r4 = java.security.MessageDigest.getInstance(r4)
            r0 = 4096(0x1000, float:5.74E-42)
            byte[] r0 = new byte[r0]
        L8:
            int r1 = r3.read(r0)
            if (r1 > 0) goto L13
            byte[] r3 = r4.digest()
            return r3
        L13:
            r2 = 0
            r4.update(r0, r2, r1)
            goto L8
    }

    public static byte[] rg(java.lang.CharSequence r0, java.lang.String r1) throws java.lang.Exception {
            java.lang.String r0 = r0.toString()
            byte[] r0 = r0.getBytes()
            byte[] r0 = rg(r0, r1)
            return r0
    }

    public static byte[] rg(byte[] r1, java.lang.String r2) throws java.lang.Exception {
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            r0.<init>(r1)
            byte[] r1 = rg(r0, r2)
            return r1
    }
}

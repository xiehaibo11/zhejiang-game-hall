package com.tencent.open.utils;

public class e {
    private static final char[] a = null;

    static {
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70} // fill-array
            com.tencent.open.utils.e.a = r0
            return
    }

    public static java.lang.String a(java.lang.String r2, java.lang.String r3, byte[] r4) {
            javax.crypto.spec.IvParameterSpec r0 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L28
            r0.<init>(r4)     // Catch: java.lang.Exception -> L28
            javax.crypto.spec.SecretKeySpec r4 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L28
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Exception -> L28
            java.lang.String r1 = "AES"
            r4.<init>(r3, r1)     // Catch: java.lang.Exception -> L28
            java.lang.String r3 = "AES/GCM/NoPadding"
            javax.crypto.Cipher r3 = javax.crypto.Cipher.getInstance(r3)     // Catch: java.lang.Exception -> L28
            r1 = 1
            r3.init(r1, r4, r0)     // Catch: java.lang.Exception -> L28
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> L28
            byte[] r2 = r3.doFinal(r2)     // Catch: java.lang.Exception -> L28
            r3 = 0
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)     // Catch: java.lang.Exception -> L28
            return r2
        L28:
            r2 = move-exception
            java.lang.String r3 = "DESUtils"
            java.lang.String r4 = "encryptAES"
            com.tencent.open.log.SLog.e(r3, r4, r2)
            r2 = 0
            return r2
    }

    public static java.lang.String a(byte[] r7) {
            if (r7 == 0) goto L2e
            int r0 = r7.length
            if (r0 == 0) goto L2e
            int r0 = r7.length
            int r0 = r0 * 2
            char[] r0 = new char[r0]
            r1 = 0
        Lb:
            int r2 = r7.length
            if (r1 >= r2) goto L28
            r2 = r7[r1]
            int r3 = r1 * 2
            int r4 = r3 + 1
            char[] r5 = com.tencent.open.utils.e.a
            r6 = r2 & 15
            char r6 = r5[r6]
            r0[r4] = r6
            int r2 = r2 >>> 4
            byte r2 = (byte) r2
            r2 = r2 & 15
            char r2 = r5[r2]
            r0[r3] = r2
            int r1 = r1 + 1
            goto Lb
        L28:
            java.lang.String r7 = new java.lang.String
            r7.<init>(r0)
            return r7
        L2e:
            java.lang.String r7 = ""
            return r7
    }

    public static byte[] a(java.lang.String r2) {
            java.lang.String r0 = "SHA-256"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> L12
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> L12
            r0.update(r2)     // Catch: java.lang.Exception -> L12
            byte[] r2 = r0.digest()     // Catch: java.lang.Exception -> L12
            return r2
        L12:
            r2 = move-exception
            java.lang.String r0 = "DESUtils"
            java.lang.String r1 = "encryptSha"
            com.tencent.open.log.SLog.e(r0, r1, r2)
            r2 = 0
            return r2
    }
}

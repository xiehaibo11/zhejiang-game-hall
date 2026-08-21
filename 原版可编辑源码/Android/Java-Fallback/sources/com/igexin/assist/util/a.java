package com.igexin.assist.util;

public class a {
    public static java.lang.String a(java.lang.String r4, java.lang.String r5) {
            r0 = 0
            byte[] r4 = com.igexin.push.util.d.a(r4, r0)     // Catch: java.lang.Throwable -> L46
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L46
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L46
            java.lang.StringBuilder r5 = r0.reverse()     // Catch: java.lang.Throwable -> L46
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L46
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Throwable -> L46
            byte[] r5 = a(r5)     // Catch: java.lang.Throwable -> L46
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Throwable -> L46
            java.lang.String r1 = "AES"
            r0.<init>(r5, r1)     // Catch: java.lang.Throwable -> L46
            java.lang.String r5 = "AES/CFB128/NoPadding"
            javax.crypto.Cipher r5 = javax.crypto.Cipher.getInstance(r5)     // Catch: java.lang.Throwable -> L46
            java.lang.String r1 = ""
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Throwable -> L46
            byte[] r1 = a(r1)     // Catch: java.lang.Throwable -> L46
            r2 = 2
            javax.crypto.spec.IvParameterSpec r3 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Throwable -> L46
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L46
            r5.init(r2, r0, r3)     // Catch: java.lang.Throwable -> L46
            byte[] r4 = r5.doFinal(r4)     // Catch: java.lang.Throwable -> L46
            if (r4 == 0) goto L46
            java.lang.String r5 = new java.lang.String     // Catch: java.lang.Throwable -> L46
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L46
            return r5
        L46:
            r4 = 0
            return r4
    }

    public static byte[] a(byte[] r1) {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> Le
            r0.update(r1)     // Catch: java.lang.Exception -> Le
            byte[] r1 = r0.digest()     // Catch: java.lang.Exception -> Le
            return r1
        Le:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
            return r1
    }
}

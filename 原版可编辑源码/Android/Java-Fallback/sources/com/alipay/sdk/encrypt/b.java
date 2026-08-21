package com.alipay.sdk.encrypt;

public class b {
    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(int r2, java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = "DES"
            javax.crypto.spec.SecretKeySpec r1 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L31
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Exception -> L31
            r1.<init>(r4, r0)     // Catch: java.lang.Exception -> L31
            javax.crypto.Cipher r4 = javax.crypto.Cipher.getInstance(r0)     // Catch: java.lang.Exception -> L31
            r4.init(r2, r1)     // Catch: java.lang.Exception -> L31
            r0 = 2
            if (r2 != r0) goto L1a
            byte[] r3 = com.alipay.sdk.encrypt.a.a(r3)     // Catch: java.lang.Exception -> L31
            goto L20
        L1a:
            java.lang.String r1 = "UTF-8"
            byte[] r3 = r3.getBytes(r1)     // Catch: java.lang.Exception -> L31
        L20:
            byte[] r3 = r4.doFinal(r3)     // Catch: java.lang.Exception -> L31
            if (r2 != r0) goto L2c
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Exception -> L31
            r2.<init>(r3)     // Catch: java.lang.Exception -> L31
            goto L30
        L2c:
            java.lang.String r2 = com.alipay.sdk.encrypt.a.a(r3)     // Catch: java.lang.Exception -> L31
        L30:
            return r2
        L31:
            r2 = move-exception
            com.alipay.sdk.util.c.a(r2)
            r2 = 0
            return r2
    }

    public static java.lang.String a(java.lang.String r1, java.lang.String r2) {
            r0 = 1
            java.lang.String r1 = a(r0, r1, r2)
            return r1
    }

    public static java.lang.String b(java.lang.String r1, java.lang.String r2) {
            r0 = 2
            java.lang.String r1 = a(r0, r1, r2)
            return r1
    }
}

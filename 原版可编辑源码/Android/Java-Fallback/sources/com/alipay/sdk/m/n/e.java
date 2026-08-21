package com.alipay.sdk.m.n;

public class e {
    public static java.lang.String a = "DESede/CBC/PKCS5Padding";

    static {
            return
    }

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(java.lang.String r0, java.lang.String r1, java.lang.String r2) {
            byte[] r1 = com.alipay.sdk.m.n.a.a(r1)     // Catch: java.lang.Exception -> Le
            byte[] r0 = a(r0, r1, r2)     // Catch: java.lang.Exception -> Le
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> Le
            r1.<init>(r0)     // Catch: java.lang.Exception -> Le
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
    }

    public static byte[] a(java.lang.String r2, byte[] r3, java.lang.String r4) {
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L23
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> L23
            java.lang.String r1 = "DESede"
            r0.<init>(r2, r1)     // Catch: java.lang.Exception -> L23
            java.lang.String r2 = com.alipay.sdk.m.n.e.a     // Catch: java.lang.Exception -> L23
            javax.crypto.Cipher r2 = javax.crypto.Cipher.getInstance(r2)     // Catch: java.lang.Exception -> L23
            javax.crypto.spec.IvParameterSpec r1 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L23
            byte[] r4 = com.alipay.sdk.m.n.c.a(r2, r4)     // Catch: java.lang.Exception -> L23
            r1.<init>(r4)     // Catch: java.lang.Exception -> L23
            r4 = 2
            r2.init(r4, r0, r1)     // Catch: java.lang.Exception -> L23
            byte[] r2 = r2.doFinal(r3)     // Catch: java.lang.Exception -> L23
            goto L24
        L23:
            r2 = 0
        L24:
            return r2
    }

    public static java.lang.String b(java.lang.String r0, java.lang.String r1, java.lang.String r2) {
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Exception -> Ld
            byte[] r0 = b(r0, r1, r2)     // Catch: java.lang.Exception -> Ld
            java.lang.String r0 = com.alipay.sdk.m.n.a.a(r0)     // Catch: java.lang.Exception -> Ld
            goto Le
        Ld:
            r0 = 0
        Le:
            return r0
    }

    public static byte[] b(java.lang.String r2, byte[] r3, java.lang.String r4) {
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L23
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> L23
            java.lang.String r1 = "DESede"
            r0.<init>(r2, r1)     // Catch: java.lang.Exception -> L23
            java.lang.String r2 = com.alipay.sdk.m.n.e.a     // Catch: java.lang.Exception -> L23
            javax.crypto.Cipher r2 = javax.crypto.Cipher.getInstance(r2)     // Catch: java.lang.Exception -> L23
            javax.crypto.spec.IvParameterSpec r1 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L23
            byte[] r4 = com.alipay.sdk.m.n.c.a(r2, r4)     // Catch: java.lang.Exception -> L23
            r1.<init>(r4)     // Catch: java.lang.Exception -> L23
            r4 = 1
            r2.init(r4, r0, r1)     // Catch: java.lang.Exception -> L23
            byte[] r2 = r2.doFinal(r3)     // Catch: java.lang.Exception -> L23
            goto L24
        L23:
            r2 = 0
        L24:
            return r2
    }
}

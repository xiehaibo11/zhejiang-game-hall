package com.alipay.sdk.encrypt;

public class e {
    private static java.lang.String a = "DESede/CBC/PKCS5Padding";

    static {
            return
    }

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(java.lang.String r0, java.lang.String r1) {
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Exception -> Ld
            byte[] r0 = a(r0, r1)     // Catch: java.lang.Exception -> Ld
            java.lang.String r0 = com.alipay.sdk.encrypt.a.a(r0)     // Catch: java.lang.Exception -> Ld
            goto Le
        Ld:
            r0 = 0
        Le:
            return r0
    }

    public static byte[] a(java.lang.String r3, byte[] r4) {
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L23
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Exception -> L23
            java.lang.String r1 = "DESede"
            r0.<init>(r3, r1)     // Catch: java.lang.Exception -> L23
            javax.crypto.spec.IvParameterSpec r3 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L23
            r1 = 8
            byte[] r1 = new byte[r1]     // Catch: java.lang.Exception -> L23
            r3.<init>(r1)     // Catch: java.lang.Exception -> L23
            java.lang.String r1 = com.alipay.sdk.encrypt.e.a     // Catch: java.lang.Exception -> L23
            javax.crypto.Cipher r1 = javax.crypto.Cipher.getInstance(r1)     // Catch: java.lang.Exception -> L23
            r2 = 1
            r1.init(r2, r0, r3)     // Catch: java.lang.Exception -> L23
            byte[] r3 = r1.doFinal(r4)     // Catch: java.lang.Exception -> L23
            goto L24
        L23:
            r3 = 0
        L24:
            return r3
    }

    public static java.lang.String b(java.lang.String r0, java.lang.String r1) {
            byte[] r1 = com.alipay.sdk.encrypt.a.a(r1)     // Catch: java.lang.Exception -> Le
            byte[] r0 = b(r0, r1)     // Catch: java.lang.Exception -> Le
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> Le
            r1.<init>(r0)     // Catch: java.lang.Exception -> Le
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
    }

    public static byte[] b(java.lang.String r3, byte[] r4) {
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L23
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Exception -> L23
            java.lang.String r1 = "DESede"
            r0.<init>(r3, r1)     // Catch: java.lang.Exception -> L23
            javax.crypto.spec.IvParameterSpec r3 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L23
            r1 = 8
            byte[] r1 = new byte[r1]     // Catch: java.lang.Exception -> L23
            r3.<init>(r1)     // Catch: java.lang.Exception -> L23
            java.lang.String r1 = com.alipay.sdk.encrypt.e.a     // Catch: java.lang.Exception -> L23
            javax.crypto.Cipher r1 = javax.crypto.Cipher.getInstance(r1)     // Catch: java.lang.Exception -> L23
            r2 = 2
            r1.init(r2, r0, r3)     // Catch: java.lang.Exception -> L23
            byte[] r3 = r1.doFinal(r4)     // Catch: java.lang.Exception -> L23
            goto L24
        L23:
            r3 = 0
        L24:
            return r3
    }
}

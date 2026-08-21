package com.alipay.sdk.m.l0;

public class a {
    public static java.lang.String a(java.lang.String r2) {
            r0 = 0
            byte[] r1 = a()     // Catch: java.lang.Exception -> Le
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> Le
            byte[] r2 = a(r1, r2)     // Catch: java.lang.Exception -> Le
            goto Lf
        Le:
            r2 = r0
        Lf:
            if (r2 == 0) goto L16
            java.lang.String r2 = a(r2)
            return r2
        L16:
            return r0
    }

    public static java.lang.String a(byte[] r3) {
            if (r3 != 0) goto L5
            java.lang.String r3 = ""
            return r3
        L5:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            int r1 = r3.length
            int r1 = r1 * 2
            r0.<init>(r1)
            r1 = 0
        Le:
            int r2 = r3.length
            if (r1 >= r2) goto L19
            r2 = r3[r1]
            a(r0, r2)
            int r1 = r1 + 1
            goto Le
        L19:
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static void a(java.lang.StringBuffer r2, byte r3) {
            int r0 = r3 >> 4
            r0 = r0 & 15
            java.lang.String r1 = "0123456789ABCDEF"
            char r0 = r1.charAt(r0)
            r2.append(r0)
            r3 = r3 & 15
            char r3 = r1.charAt(r3)
            r2.append(r3)
            return
    }

    public static byte[] a() throws java.lang.Exception {
            r0 = 16
            byte[] r0 = new byte[r0]
            r0 = {x000c: FILL_ARRAY_DATA , data: [33, 83, -50, -89, -84, -114, 80, 99, 10, 63, 22, -65, -11, 30, 101, -118} // fill-array
            byte[] r0 = com.alipay.sdk.m.l0.e.a(r0)
            return r0
    }

    public static byte[] a(java.lang.String r5) {
            int r0 = r5.length()
            int r0 = r0 / 2
            byte[] r1 = new byte[r0]
            r2 = 0
        L9:
            if (r2 >= r0) goto L22
            int r3 = r2 * 2
            int r4 = r3 + 2
            java.lang.String r3 = r5.substring(r3, r4)
            r4 = 16
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3, r4)
            byte r3 = r3.byteValue()
            r1[r2] = r3
            int r2 = r2 + 1
            goto L9
        L22:
            return r1
    }

    public static byte[] a(byte[] r3, byte[] r4) throws java.lang.Exception {
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec
            java.lang.String r1 = "AES"
            r0.<init>(r3, r1)
            java.lang.String r3 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r3 = javax.crypto.Cipher.getInstance(r3)
            javax.crypto.spec.IvParameterSpec r1 = new javax.crypto.spec.IvParameterSpec
            byte[] r2 = b()
            r1.<init>(r2)
            r2 = 1
            r3.init(r2, r0, r1)
            byte[] r3 = r3.doFinal(r4)
            return r3
    }

    public static java.lang.String b(java.lang.String r1) {
            byte[] r0 = a()     // Catch: java.lang.Exception -> L12
            byte[] r1 = a(r1)     // Catch: java.lang.Exception -> L12
            byte[] r1 = b(r0, r1)     // Catch: java.lang.Exception -> L12
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Exception -> L12
            r0.<init>(r1)     // Catch: java.lang.Exception -> L12
            return r0
        L12:
            r1 = 0
            return r1
    }

    public static byte[] b() {
            java.lang.String r0 = "IUQSvE6r1TfFPdPEjfklLw=="
            java.lang.String r1 = "UTF-8"
            byte[] r0 = r0.getBytes(r1)     // Catch: java.lang.Exception -> L14
            r1 = 2
            byte[] r0 = com.alipay.sdk.m.l0.b.a(r0, r1)     // Catch: java.lang.Exception -> L14
            if (r0 == 0) goto L14
            byte[] r0 = com.alipay.sdk.m.l0.e.a(r0)     // Catch: java.lang.Exception -> L14
            return r0
        L14:
            r0 = 16
            byte[] r0 = new byte[r0]
            return r0
    }

    public static byte[] b(byte[] r3, byte[] r4) throws java.lang.Exception {
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec
            java.lang.String r1 = "AES"
            r0.<init>(r3, r1)
            java.lang.String r3 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r3 = javax.crypto.Cipher.getInstance(r3)
            javax.crypto.spec.IvParameterSpec r1 = new javax.crypto.spec.IvParameterSpec
            byte[] r2 = b()
            r1.<init>(r2)
            r2 = 2
            r3.init(r2, r0, r1)
            byte[] r3 = r3.doFinal(r4)
            return r3
    }
}

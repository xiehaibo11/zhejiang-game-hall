package com.loc;

public final class ao {
    private static byte[] a;
    private static java.lang.String[] b;
    private static int[] c;

    static {
            java.lang.String r0 = "kp6SsA"
            java.lang.String r1 = "cHE4dQ"
            java.lang.String r2 = "JKekrA"
            java.lang.String r3 = "XBxOHQ"
            java.lang.String r4 = "CSnpKw"
            java.lang.String r5 = "VwcThw"
            java.lang.String r6 = "wkp6Sg"
            java.lang.String r7 = "1cHE4Q"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7}
            com.loc.ao.b = r0
            r0 = 0
            com.loc.ao.c = r0
            return
    }

    private static int a(int r3, int r4) {
            r0 = 0
            r1 = 0
        L2:
            if (r0 >= r4) goto Lc
            int r1 = r1 >> 1
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
            r1 = r1 | r2
            int r0 = r0 + 1
            goto L2
        Lc:
            r0 = r3 & r1
            int r1 = 32 - r4
            int r0 = r0 >>> r1
            int r3 = r3 << r4
            r3 = r3 | r0
            return r3
    }

    public static java.lang.String a() {
            java.security.SecureRandom r0 = new java.security.SecureRandom
            r0.<init>()
            java.lang.String r1 = "EQUVT"
            java.lang.String r1 = com.loc.x.c(r1)     // Catch: java.lang.Throwable -> L21
            javax.crypto.KeyGenerator r1 = javax.crypto.KeyGenerator.getInstance(r1)     // Catch: java.lang.Throwable -> L21
            r2 = 128(0x80, float:1.8E-43)
            r1.init(r2, r0)     // Catch: java.lang.Throwable -> L21
            javax.crypto.SecretKey r0 = r1.generateKey()     // Catch: java.lang.Throwable -> L21
            byte[] r0 = r0.getEncoded()     // Catch: java.lang.Throwable -> L21
            java.lang.String r0 = com.loc.aj.a(r0)     // Catch: java.lang.Throwable -> L21
            return r0
        L21:
            r0 = 0
            return r0
    }

    private static java.lang.String a(int r9) {
            r0 = 4
            char[] r1 = new char[r0]
            r2 = 0
            r3 = 0
        L5:
            if (r3 >= r0) goto L39
            int r4 = 4 - r3
            int r4 = r4 + (-1)
            int r5 = r3 * 8
            int r5 = r9 >>> r5
            r5 = r5 & 255(0xff, float:3.57E-43)
            char r5 = (char) r5
            r1[r4] = r5
            char r4 = r1[r4]
            java.lang.String r5 = " "
            r6 = 0
        L19:
            r7 = 32
            if (r6 >= r7) goto L36
            r7 = -2147483648(0xffffffff80000000, float:-0.0)
            int r7 = r7 >>> r6
            r7 = r7 & r4
            int r8 = 31 - r6
            int r7 = r7 >>> r8
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r8.append(r5)
            r8.append(r7)
            java.lang.String r5 = r8.toString()
            int r6 = r6 + 1
            goto L19
        L36:
            int r3 = r3 + 1
            goto L5
        L39:
            java.lang.String r9 = new java.lang.String
            r9.<init>(r1)
            return r9
    }

    public static java.lang.String a(java.lang.String r0) {
            java.lang.String r0 = com.loc.s.a(r0)
            return r0
    }

    private static java.lang.String a(int[] r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            if (r3 == 0) goto L1f
            r1 = 0
        L8:
            int r2 = r3.length
            if (r1 >= r2) goto L1f
            r2 = r3[r1]
            int r2 = b(r2)
            int r2 = a(r2, r1)
            java.lang.String r2 = a(r2)
            r0.append(r2)
            int r1 = r1 + 1
            goto L8
        L1f:
            java.lang.String r3 = r0.toString()
            return r3
    }

    private static byte[] a(byte[] r4) {
            javax.crypto.spec.IvParameterSpec r0 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L43
            byte[] r1 = com.loc.ao.a     // Catch: java.lang.Exception -> L43
            if (r1 != 0) goto L12
            java.lang.String r1 = "YAAAAAAAAAAAAAAAAAAAAAA"
            java.lang.String r1 = com.loc.x.c(r1)     // Catch: java.lang.Exception -> L43
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Exception -> L43
            com.loc.ao.a = r1     // Catch: java.lang.Exception -> L43
        L12:
            byte[] r1 = com.loc.ao.a     // Catch: java.lang.Exception -> L43
            r0.<init>(r1)     // Catch: java.lang.Exception -> L43
            int[] r1 = b()     // Catch: java.lang.Exception -> L43
            java.lang.String r1 = a(r1)     // Catch: java.lang.Exception -> L43
            javax.crypto.spec.SecretKeySpec r2 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L43
            java.lang.String r3 = "UTF-8"
            byte[] r1 = r1.getBytes(r3)     // Catch: java.lang.Exception -> L43
            java.lang.String r3 = "EQUVT"
            java.lang.String r3 = com.loc.x.c(r3)     // Catch: java.lang.Exception -> L43
            r2.<init>(r1, r3)     // Catch: java.lang.Exception -> L43
            java.lang.String r1 = "CQUVTL0NCQy9QS0NTNVBhZGRpbmc"
            java.lang.String r1 = com.loc.x.c(r1)     // Catch: java.lang.Exception -> L43
            javax.crypto.Cipher r1 = javax.crypto.Cipher.getInstance(r1)     // Catch: java.lang.Exception -> L43
            r3 = 1
            r1.init(r3, r2, r0)     // Catch: java.lang.Exception -> L43
            byte[] r4 = r1.doFinal(r4)     // Catch: java.lang.Exception -> L43
            return r4
        L43:
            r4 = move-exception
            r4.printStackTrace()
            r4 = 0
            return r4
    }

    private static int b(int r4) {
            r0 = 1
            r1 = 0
            r2 = 1
        L3:
            r3 = 15
            if (r1 >= r3) goto Ld
            int r2 = r2 << 2
            r2 = r2 | r0
            int r1 = r1 + 1
            goto L3
        Ld:
            int r1 = r2 << 1
            r1 = r1 & r4
            int r1 = r1 >>> r0
            r4 = r4 & r2
            int r4 = r4 << r0
            r4 = r4 | r1
            return r4
    }

    public static java.lang.String b(java.lang.String r1) {
            java.lang.String r0 = "UTF-8"
            byte[] r1 = r1.getBytes(r0)     // Catch: java.lang.Throwable -> Lf
            byte[] r1 = a(r1)     // Catch: java.lang.Throwable -> Lf
            java.lang.String r1 = com.loc.aj.a(r1)     // Catch: java.lang.Throwable -> Lf
            return r1
        Lf:
            r1 = 0
            return r1
    }

    private static int[] b() {
            int[] r0 = com.loc.ao.c
            if (r0 == 0) goto L5
            return r0
        L5:
            r0 = 8
            int[] r1 = new int[r0]
            r2 = 0
            r3 = 0
        Lb:
            java.lang.String[] r4 = com.loc.ao.b
            int r5 = r4.length
            if (r3 >= r5) goto L36
            r4 = r4[r3]
            byte[] r4 = com.loc.p.b(r4)
            r5 = 3
            r5 = r4[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            r6 = 2
            r6 = r4[r6]
            r6 = r6 & 255(0xff, float:3.57E-43)
            int r6 = r6 << r0
            r5 = r5 | r6
            r6 = 1
            r6 = r4[r6]
            r6 = r6 & 255(0xff, float:3.57E-43)
            int r6 = r6 << 16
            r5 = r5 | r6
            r4 = r4[r2]
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r4 = r4 << 24
            r4 = r4 | r5
            r1[r3] = r4
            int r3 = r3 + 1
            goto Lb
        L36:
            return r1
    }
}

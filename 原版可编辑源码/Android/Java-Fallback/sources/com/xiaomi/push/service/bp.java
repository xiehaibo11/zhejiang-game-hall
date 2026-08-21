package com.xiaomi.push.service;

public class bp {
    private static int a = 8;
    private byte[] a;
    private int b;
    private int c;
    private int d;

    static {
            return
    }

    public bp() {
            r1 = this;
            r1.<init>()
            r0 = -666(0xfffffffffffffd66, float:NaN)
            r1.d = r0
            r0 = 256(0x100, float:3.59E-43)
            byte[] r0 = new byte[r0]
            r1.a = r0
            r0 = 0
            r1.c = r0
            r1.b = r0
            return
    }

    public static int a(byte r0) {
            if (r0 < 0) goto L3
            return r0
        L3:
            int r0 = r0 + 256
            return r0
    }

    private void a() {
            r1 = this;
            r0 = 0
            r1.c = r0
            r1.b = r0
            return
    }

    private void a(int r8, byte[] r9, boolean r10) {
            r7 = this;
            int r0 = r9.length
            r1 = 0
            r2 = r1
        L3:
            r3 = 256(0x100, float:3.59E-43)
            if (r2 >= r3) goto Lf
            byte[] r3 = r7.a
            byte r4 = (byte) r2
            r3[r2] = r4
            int r2 = r2 + 1
            goto L3
        Lf:
            r7.c = r1
            r7.b = r1
        L13:
            int r2 = r7.b
            r4 = 1
            if (r2 >= r8) goto L3d
            int r5 = r7.c
            byte[] r6 = r7.a
            r2 = r6[r2]
            int r2 = a(r2)
            int r5 = r5 + r2
            int r2 = r7.b
            int r2 = r2 % r0
            r2 = r9[r2]
            int r2 = a(r2)
            int r5 = r5 + r2
            int r5 = r5 % r3
            r7.c = r5
            byte[] r2 = r7.a
            int r6 = r7.b
            a(r2, r6, r5)
            int r2 = r7.b
            int r2 = r2 + r4
            r7.b = r2
            goto L13
        L3d:
            if (r8 == r3) goto L56
            int r2 = r7.c
            byte[] r5 = r7.a
            r5 = r5[r8]
            int r5 = a(r5)
            int r2 = r2 + r5
            int r0 = r8 % r0
            r9 = r9[r0]
            int r9 = a(r9)
            int r2 = r2 + r9
            int r2 = r2 % r3
            r7.d = r2
        L56:
            if (r10 == 0) goto Lf1
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "S_"
            r9.append(r10)
            int r10 = r8 + (-1)
            r9.append(r10)
            java.lang.String r0 = ":"
            r9.append(r0)
        L6c:
            if (r1 > r8) goto L81
            java.lang.String r0 = " "
            r9.append(r0)
            byte[] r0 = r7.a
            r0 = r0[r1]
            int r0 = a(r0)
            r9.append(r0)
            int r1 = r1 + 1
            goto L6c
        L81:
            java.lang.String r0 = "   j_"
            r9.append(r0)
            r9.append(r10)
            java.lang.String r1 = "="
            r9.append(r1)
            int r2 = r7.c
            r9.append(r2)
            r9.append(r0)
            r9.append(r8)
            r9.append(r1)
            int r0 = r7.d
            r9.append(r0)
            java.lang.String r0 = "   S_"
            r9.append(r0)
            r9.append(r10)
            java.lang.String r1 = "[j_"
            r9.append(r1)
            r9.append(r10)
            java.lang.String r2 = "]="
            r9.append(r2)
            byte[] r3 = r7.a
            int r5 = r7.c
            r3 = r3[r5]
            int r3 = a(r3)
            r9.append(r3)
            r9.append(r0)
            r9.append(r10)
            r9.append(r1)
            r9.append(r8)
            r9.append(r2)
            byte[] r8 = r7.a
            int r10 = r7.d
            r8 = r8[r10]
            int r8 = a(r8)
            r9.append(r8)
            byte[] r8 = r7.a
            r8 = r8[r4]
            if (r8 == 0) goto Lea
            java.lang.String r8 = "   S[1]!=0"
            r9.append(r8)
        Lea:
            java.lang.String r8 = r9.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r8)
        Lf1:
            return
    }

    private void a(byte[] r3) {
            r2 = this;
            r0 = 256(0x100, float:3.59E-43)
            r1 = 0
            r2.a(r0, r3, r1)
            return
    }

    private static void a(byte[] r2, int r3, int r4) {
            r0 = r2[r3]
            r1 = r2[r4]
            r2[r3] = r1
            r2[r4] = r0
            return
    }

    public static byte[] a(java.lang.String r4, java.lang.String r5) {
            byte[] r4 = com.xiaomi.push.bm.a(r4)
            byte[] r5 = r5.getBytes()
            int r0 = r4.length
            int r0 = r0 + 1
            int r1 = r5.length
            int r0 = r0 + r1
            byte[] r0 = new byte[r0]
            r1 = 0
            r2 = r1
        L11:
            int r3 = r4.length
            if (r2 >= r3) goto L1b
            r3 = r4[r2]
            r0[r2] = r3
            int r2 = r2 + 1
            goto L11
        L1b:
            int r2 = r4.length
            r3 = 95
            r0[r2] = r3
        L20:
            int r2 = r5.length
            if (r1 >= r2) goto L2e
            int r2 = r4.length
            int r2 = r2 + 1
            int r2 = r2 + r1
            r3 = r5[r1]
            r0[r2] = r3
            int r1 = r1 + 1
            goto L20
        L2e:
            return r0
    }

    public static byte[] a(byte[] r0, java.lang.String r1) {
            byte[] r1 = com.xiaomi.push.bm.a(r1)
            byte[] r0 = a(r0, r1)
            return r0
    }

    public static byte[] a(byte[] r4, byte[] r5) {
            int r0 = r5.length
            byte[] r0 = new byte[r0]
            com.xiaomi.push.service.bp r1 = new com.xiaomi.push.service.bp
            r1.<init>()
            r1.a(r4)
            r1.a()
            r4 = 0
        Lf:
            int r2 = r5.length
            if (r4 >= r2) goto L1f
            r2 = r5[r4]
            byte r3 = r1.a()
            r2 = r2 ^ r3
            byte r2 = (byte) r2
            r0[r4] = r2
            int r4 = r4 + 1
            goto Lf
        L1f:
            return r0
    }

    public static byte[] a(byte[] r5, byte[] r6, boolean r7, int r8, int r9) {
            if (r8 < 0) goto L32
            int r0 = r6.length
            if (r8 > r0) goto L32
            int r0 = r8 + r9
            int r1 = r6.length
            if (r0 > r1) goto L32
            r0 = 0
            if (r7 != 0) goto L11
            byte[] r7 = new byte[r9]
            r1 = r0
            goto L13
        L11:
            r7 = r6
            r1 = r8
        L13:
            com.xiaomi.push.service.bp r2 = new com.xiaomi.push.service.bp
            r2.<init>()
            r2.a(r5)
            r2.a()
        L1e:
            if (r0 >= r9) goto L31
            int r5 = r1 + r0
            int r3 = r8 + r0
            r3 = r6[r3]
            byte r4 = r2.a()
            r3 = r3 ^ r4
            byte r3 = (byte) r3
            r7[r5] = r3
            int r0 = r0 + 1
            goto L1e
        L31:
            return r7
        L32:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "start = "
            r6.append(r7)
            r6.append(r8)
            java.lang.String r7 = " len = "
            r6.append(r7)
            r6.append(r9)
            java.lang.String r6 = r6.toString()
            r5.<init>(r6)
            throw r5
    }

    byte a() {
            r4 = this;
            int r0 = r4.b
            int r0 = r0 + 1
            int r0 = r0 % 256
            r4.b = r0
            int r1 = r4.c
            byte[] r2 = r4.a
            r0 = r2[r0]
            int r0 = a(r0)
            int r1 = r1 + r0
            int r1 = r1 % 256
            r4.c = r1
            byte[] r0 = r4.a
            int r2 = r4.b
            a(r0, r2, r1)
            byte[] r0 = r4.a
            int r1 = r4.b
            r1 = r0[r1]
            int r1 = a(r1)
            byte[] r2 = r4.a
            int r3 = r4.c
            r2 = r2[r3]
            int r2 = a(r2)
            int r1 = r1 + r2
            int r1 = r1 % 256
            r0 = r0[r1]
            return r0
    }
}

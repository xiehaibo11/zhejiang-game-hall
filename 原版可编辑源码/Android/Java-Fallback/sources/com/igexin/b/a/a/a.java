package com.igexin.b.a.a;

public class a {
    public static void a(int[] r2, int r3, int r4) {
            r0 = r2[r3]
            r1 = r2[r4]
            r2[r3] = r1
            r2[r4] = r0
            return
    }

    public static boolean a(byte[] r6) {
            int r0 = r6.length
            r1 = 0
            if (r0 <= 0) goto L20
            r2 = 256(0x100, float:3.59E-43)
            if (r0 > r2) goto L20
            int r0 = r6.length
            r2 = r1
            r3 = r2
        Lb:
            if (r2 >= r0) goto L1e
            r4 = r6[r2]
            r4 = r4 & 255(0xff, float:3.57E-43)
            r5 = 14
            if (r4 != r5) goto L1b
            int r3 = r3 + 1
            r4 = 3
            if (r3 <= r4) goto L1b
            return r1
        L1b:
            int r2 = r2 + 1
            goto Lb
        L1e:
            r6 = 1
            return r6
        L20:
            return r1
    }

    public static byte[] a(byte[] r0, java.lang.String r1) {
            byte[] r0 = c(r0, r1)
            return r0
    }

    public static byte[] a(byte[] r9, byte[] r10) {
            boolean r0 = a(r10)
            if (r0 == 0) goto L57
            int r0 = r9.length
            r1 = 1
            if (r0 < r1) goto L4f
            r0 = 256(0x100, float:3.59E-43)
            int[] r2 = new int[r0]
            r3 = 0
            r4 = r3
        L10:
            if (r4 >= r0) goto L17
            r2[r4] = r4
            int r4 = r4 + 1
            goto L10
        L17:
            r4 = r3
            r5 = r4
        L19:
            if (r4 >= r0) goto L2d
            r6 = r2[r4]
            int r5 = r5 + r6
            int r6 = r10.length
            int r6 = r4 % r6
            r6 = r10[r6]
            r6 = r6 & 255(0xff, float:3.57E-43)
            int r5 = r5 + r6
            int r5 = r5 % r0
            a(r2, r4, r5)
            int r4 = r4 + 1
            goto L19
        L2d:
            int r10 = r9.length
            byte[] r4 = new byte[r10]
            r5 = r3
            r6 = r5
        L32:
            if (r3 >= r10) goto L4e
            int r5 = r5 + r1
            int r5 = r5 % r0
            r7 = r2[r5]
            int r6 = r6 + r7
            int r6 = r6 % r0
            a(r2, r5, r6)
            r7 = r2[r5]
            r8 = r2[r6]
            int r7 = r7 + r8
            int r7 = r7 % r0
            r7 = r2[r7]
            r8 = r9[r3]
            r7 = r7 ^ r8
            byte r7 = (byte) r7
            r4[r3] = r7
            int r3 = r3 + 1
            goto L32
        L4e:
            return r4
        L4f:
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.String r10 = "data is fail!"
            r9.<init>(r10)
            throw r9
        L57:
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.String r10 = "key is fail!"
            r9.<init>(r10)
            throw r9
    }

    public static byte[] b(byte[] r0, java.lang.String r1) {
            byte[] r0 = d(r0, r1)
            return r0
    }

    public static byte[] c(byte[] r0, java.lang.String r1) {
            byte[] r1 = r1.getBytes()
            byte[] r0 = a(r0, r1)
            return r0
    }

    public static byte[] d(byte[] r0, java.lang.String r1) {
            byte[] r1 = r1.getBytes()
            byte[] r0 = a(r0, r1)
            return r0
    }
}

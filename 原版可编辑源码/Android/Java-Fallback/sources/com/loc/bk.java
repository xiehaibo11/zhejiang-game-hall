package com.loc;

public final class bk {
    private static int a = 4;

    static {
            return
    }

    public static byte[] a(byte[] r13, byte[] r14) {
            int r0 = r13.length
            if (r0 != 0) goto L4
            return r13
        L4:
            int r0 = r13.length
            int r1 = com.loc.bk.a
            int r2 = r0 % r1
            int r2 = r1 - r2
            int r3 = r0 / r1
            int r3 = r3 + 1
            int r3 = r3 * r1
            byte[] r1 = new byte[r3]
            int r4 = r13.length
            r5 = 0
            java.lang.System.arraycopy(r13, r5, r1, r5, r4)
        L18:
            if (r0 >= r3) goto L20
            byte r13 = (byte) r2
            r1[r0] = r13
            int r0 = r0 + 1
            goto L18
        L20:
            int[] r13 = a(r1)
            int[] r14 = a(r14)
            int r0 = r13.length
            int r0 = r0 + (-1)
            if (r0 <= 0) goto L8f
            int r1 = r14.length
            r2 = 4
            if (r1 >= r2) goto L38
            int[] r1 = new int[r2]
            int r2 = r14.length
            java.lang.System.arraycopy(r14, r5, r1, r5, r2)
            r14 = r1
        L38:
            r1 = r13[r0]
            r2 = 52
            int r3 = r0 + 1
            int r2 = r2 / r3
            int r2 = r2 + 6
            r3 = 0
        L42:
            int r4 = r2 + (-1)
            if (r2 <= 0) goto L8f
            r2 = -1640531527(0xffffffff9e3779b9, float:-9.713111E-21)
            int r3 = r3 + r2
            int r2 = r3 >>> 2
            r2 = r2 & 3
            r6 = 0
        L4f:
            if (r6 >= r0) goto L71
            int r7 = r6 + 1
            r8 = r13[r7]
            r9 = r13[r6]
            int r10 = r1 >>> 5
            int r11 = r8 << 2
            r10 = r10 ^ r11
            int r11 = r8 >>> 3
            int r12 = r1 << 4
            r11 = r11 ^ r12
            int r10 = r10 + r11
            r8 = r8 ^ r3
            r11 = r6 & 3
            r11 = r11 ^ r2
            r11 = r14[r11]
            r1 = r1 ^ r11
            int r8 = r8 + r1
            r1 = r10 ^ r8
            int r1 = r1 + r9
            r13[r6] = r1
            r6 = r7
            goto L4f
        L71:
            r7 = r13[r5]
            r8 = r13[r0]
            int r9 = r1 >>> 5
            int r10 = r7 << 2
            r9 = r9 ^ r10
            int r10 = r7 >>> 3
            int r11 = r1 << 4
            r10 = r10 ^ r11
            int r9 = r9 + r10
            r7 = r7 ^ r3
            r6 = r6 & 3
            r2 = r2 ^ r6
            r2 = r14[r2]
            r1 = r1 ^ r2
            int r7 = r7 + r1
            r1 = r9 ^ r7
            int r1 = r1 + r8
            r13[r0] = r1
            r2 = r4
            goto L42
        L8f:
            int r14 = r13.length
            int r14 = r14 << 2
            byte[] r0 = new byte[r14]
        L94:
            if (r5 >= r14) goto La7
            int r1 = r5 >>> 2
            r1 = r13[r1]
            r2 = r5 & 3
            int r2 = r2 << 3
            int r1 = r1 >>> r2
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r0[r5] = r1
            int r5 = r5 + 1
            goto L94
        La7:
            return r0
    }

    private static int[] a(byte[] r7) {
            int r0 = r7.length
            int r0 = r0 >>> 2
            int[] r0 = new int[r0]
            int r1 = r7.length
            r2 = 0
        L7:
            if (r2 >= r1) goto L1c
            int r3 = r2 >>> 2
            r4 = r0[r3]
            r5 = r7[r2]
            r5 = r5 & 255(0xff, float:3.57E-43)
            r6 = r2 & 3
            int r6 = r6 << 3
            int r5 = r5 << r6
            r4 = r4 | r5
            r0[r3] = r4
            int r2 = r2 + 1
            goto L7
        L1c:
            return r0
    }
}

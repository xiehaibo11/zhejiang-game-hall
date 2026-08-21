package com.sigmob.sdk.archives.tar;

public class f {
    private static final int a = 255;

    private f() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(java.lang.String r4, byte[] r5, int r6, int r7) {
            r0 = 0
            r1 = r0
        L2:
            if (r1 >= r7) goto L16
            int r2 = r4.length()
            if (r1 >= r2) goto L16
            int r2 = r6 + r1
            char r3 = r4.charAt(r1)
            byte r3 = (byte) r3
            r5[r2] = r3
            int r1 = r1 + 1
            goto L2
        L16:
            if (r1 >= r7) goto L1f
            int r4 = r6 + r1
            r5[r4] = r0
            int r1 = r1 + 1
            goto L16
        L1f:
            int r6 = r6 + r7
            return r6
    }

    public static long a(byte[] r5) {
            r0 = 0
            r2 = 0
        L3:
            int r3 = r5.length
            if (r2 >= r3) goto Lf
            r3 = r5[r2]
            r3 = r3 & 255(0xff, float:3.57E-43)
            long r3 = (long) r3
            long r0 = r0 + r3
            int r2 = r2 + 1
            goto L3
        Lf:
            return r0
    }

    public static long a(byte[] r7, int r8, int r9) {
            int r0 = r8 + r9
            r1 = 2
            if (r9 < r1) goto L62
            r1 = r8
        L6:
            if (r1 >= r0) goto L11
            r2 = r7[r1]
            if (r2 == 0) goto Le
            r1 = 0
            goto L12
        Le:
            int r1 = r1 + 1
            goto L6
        L11:
            r1 = 1
        L12:
            r2 = 0
            if (r1 == 0) goto L17
            return r2
        L17:
            r1 = r8
        L18:
            r4 = 32
            if (r1 >= r0) goto L23
            r5 = r7[r1]
            if (r5 != r4) goto L23
            int r1 = r1 + 1
            goto L18
        L23:
            int r5 = r0 + (-1)
            r6 = r7[r5]
            if (r6 == 0) goto L36
            if (r6 != r4) goto L2c
            goto L36
        L2c:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r7 = a(r7, r8, r9, r5, r6)
            r0.<init>(r7)
            throw r0
        L36:
            int r0 = r0 + (-1)
            int r5 = r0 + (-1)
            r5 = r7[r5]
            if (r5 == 0) goto L40
            if (r5 != r4) goto L42
        L40:
            int r0 = r0 + (-1)
        L42:
            if (r1 >= r0) goto L61
            r4 = r7[r1]
            r5 = 48
            if (r4 < r5) goto L57
            r5 = 55
            if (r4 > r5) goto L57
            r5 = 3
            long r2 = r2 << r5
            int r4 = r4 + (-48)
            long r4 = (long) r4
            long r2 = r2 + r4
            int r1 = r1 + 1
            goto L42
        L57:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r7 = a(r7, r8, r9, r1, r4)
            r0.<init>(r7)
            throw r0
        L61:
            return r2
        L62:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "Length "
            r8.append(r0)
            r8.append(r9)
            java.lang.String r9 = " must be at least 2"
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
    }

    private static java.lang.String a(byte[] r2, int r3, int r4, int r5, byte r6) {
            java.lang.String r0 = new java.lang.String
            r0.<init>(r2, r3, r4)
            java.lang.String r2 = "\u0000"
            java.lang.String r1 = "{NUL}"
            java.lang.String r2 = r0.replaceAll(r2, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Invalid byte "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r6 = " at offset "
            r0.append(r6)
            int r5 = r5 - r3
            r0.append(r5)
            java.lang.String r3 = " in '"
            r0.append(r3)
            r0.append(r2)
            java.lang.String r2 = "' len="
            r0.append(r2)
            r0.append(r4)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static void a(long r9, byte[] r11, int r12, int r13) {
            int r0 = r13 + (-1)
            r1 = 0
            int r3 = (r9 > r1 ? 1 : (r9 == r1 ? 0 : -1))
            r4 = 48
            if (r3 != 0) goto L10
            int r9 = r0 + (-1)
            int r0 = r0 + r12
            r11[r0] = r4
            goto L2c
        L10:
            r5 = r9
        L11:
            if (r0 < 0) goto L27
            int r3 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r3 == 0) goto L27
            int r3 = r12 + r0
            r7 = 7
            long r7 = r7 & r5
            int r7 = (int) r7
            byte r7 = (byte) r7
            int r7 = r7 + r4
            byte r7 = (byte) r7
            r11[r3] = r7
            r3 = 3
            long r5 = r5 >>> r3
            int r0 = r0 + (-1)
            goto L11
        L27:
            int r1 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r1 != 0) goto L36
            r9 = r0
        L2c:
            if (r9 < 0) goto L35
            int r10 = r12 + r9
            r11[r10] = r4
            int r9 = r9 + (-1)
            goto L2c
        L35:
            return
        L36:
            java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            r12.append(r9)
            java.lang.String r0 = "="
            r12.append(r0)
            java.lang.String r9 = java.lang.Long.toOctalString(r9)
            r12.append(r9)
            java.lang.String r9 = " will not fit in octal number buffer of length "
            r12.append(r9)
            r12.append(r13)
            java.lang.String r9 = r12.toString()
            r11.<init>(r9)
            throw r11
    }

    public static boolean a(byte[] r0, int r1) {
            r0 = r0[r1]
            r1 = 1
            if (r0 != r1) goto L6
            goto L7
        L6:
            r1 = 0
        L7:
            return r1
    }

    public static int b(long r1, byte[] r3, int r4, int r5) {
            int r0 = r5 + (-2)
            a(r1, r3, r4, r0)
            int r1 = r0 + 1
            int r0 = r0 + r4
            r2 = 32
            r3[r0] = r2
            int r1 = r1 + r4
            r2 = 0
            r3[r1] = r2
            int r4 = r4 + r5
            return r4
    }

    public static java.lang.String b(byte[] r2, int r3, int r4) {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>(r4)
            int r4 = r4 + r3
        L6:
            if (r3 >= r4) goto L16
            r1 = r2[r3]
            if (r1 != 0) goto Ld
            goto L16
        Ld:
            r1 = r1 & 255(0xff, float:3.57E-43)
            char r1 = (char) r1
            r0.append(r1)
            int r3 = r3 + 1
            goto L6
        L16:
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static int c(long r1, byte[] r3, int r4, int r5) {
            int r0 = r5 + (-1)
            a(r1, r3, r4, r0)
            int r0 = r0 + r4
            r1 = 32
            r3[r0] = r1
            int r4 = r4 + r5
            return r4
    }

    public static int d(long r1, byte[] r3, int r4, int r5) {
            int r0 = r5 + (-2)
            a(r1, r3, r4, r0)
            int r1 = r0 + 1
            int r0 = r0 + r4
            r2 = 0
            r3[r0] = r2
            int r1 = r1 + r4
            r2 = 32
            r3[r1] = r2
            int r4 = r4 + r5
            return r4
    }
}

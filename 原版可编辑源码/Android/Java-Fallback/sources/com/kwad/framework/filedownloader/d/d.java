package com.kwad.framework.filedownloader.d;

public final class d {
    public static boolean bA(int r0) {
            if (r0 >= 0) goto L4
            r0 = 1
            return r0
        L4:
            r0 = 0
            return r0
    }

    public static boolean bB(int r0) {
            if (r0 <= 0) goto L4
            r0 = 1
            return r0
        L4:
            r0 = 0
            return r0
    }

    public static boolean f(com.kwad.framework.filedownloader.a r1) {
            byte r0 = r1.sX()
            if (r0 == 0) goto L10
            byte r1 = r1.sX()
            r0 = 3
            if (r1 != r0) goto Le
            goto L10
        Le:
            r1 = 0
            return r1
        L10:
            r1 = 1
            return r1
    }

    public static boolean r(int r6, int r7) {
            r0 = 5
            r1 = 3
            r2 = 0
            if (r6 == r1) goto La
            if (r6 == r0) goto La
            if (r6 != r7) goto La
            return r2
        La:
            boolean r3 = bA(r6)
            if (r3 == 0) goto L11
            return r2
        L11:
            r3 = 6
            if (r6 <= 0) goto L1f
            if (r6 > r3) goto L1f
            r4 = 10
            if (r7 < r4) goto L1f
            r4 = 11
            if (r7 > r4) goto L1f
            return r2
        L1f:
            r4 = 1
            if (r6 == r4) goto L4a
            r5 = 2
            if (r6 == r5) goto L42
            if (r6 == r1) goto L38
            if (r6 == r0) goto L32
            if (r6 == r3) goto L2c
            return r4
        L2c:
            if (r7 == 0) goto L31
            if (r7 == r4) goto L31
            return r4
        L31:
            return r2
        L32:
            if (r7 == r4) goto L37
            if (r7 == r3) goto L37
            return r4
        L37:
            return r2
        L38:
            if (r7 == 0) goto L41
            if (r7 == r4) goto L41
            if (r7 == r5) goto L41
            if (r7 == r3) goto L41
            return r4
        L41:
            return r2
        L42:
            if (r7 == 0) goto L49
            if (r7 == r4) goto L49
            if (r7 == r3) goto L49
            return r4
        L49:
            return r2
        L4a:
            if (r7 == 0) goto L4d
            return r4
        L4d:
            return r2
    }

    public static boolean s(int r8, int r9) {
            r0 = 3
            r1 = 5
            r2 = 0
            if (r8 == r0) goto La
            if (r8 == r1) goto La
            if (r8 != r9) goto La
            return r2
        La:
            boolean r3 = bA(r8)
            if (r3 == 0) goto L11
            return r2
        L11:
            r3 = -2
            r4 = 1
            if (r9 != r3) goto L16
            return r4
        L16:
            r3 = -1
            if (r9 != r3) goto L1a
            return r4
        L1a:
            r3 = 10
            if (r8 == 0) goto L51
            r5 = 6
            if (r8 == r4) goto L4d
            r6 = -3
            r7 = 2
            if (r8 == r7) goto L45
            if (r8 == r0) goto L45
            if (r8 == r1) goto L3f
            if (r8 == r5) goto L3f
            r0 = 11
            if (r8 == r3) goto L3b
            if (r8 == r0) goto L32
            return r2
        L32:
            r8 = -4
            if (r9 == r8) goto L3a
            if (r9 == r6) goto L3a
            if (r9 == r4) goto L3a
            return r2
        L3a:
            return r4
        L3b:
            if (r9 == r0) goto L3e
            return r2
        L3e:
            return r4
        L3f:
            if (r9 == r7) goto L44
            if (r9 == r1) goto L44
            return r2
        L44:
            return r4
        L45:
            if (r9 == r6) goto L4c
            if (r9 == r0) goto L4c
            if (r9 == r1) goto L4c
            return r2
        L4c:
            return r4
        L4d:
            if (r9 == r5) goto L50
            return r2
        L50:
            return r4
        L51:
            if (r9 == r3) goto L54
            return r2
        L54:
            return r4
    }
}

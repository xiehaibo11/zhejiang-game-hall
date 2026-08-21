package com.bytedance.pangle.util;

public final class d {
    public static <T> boolean a(T[] r0) {
            if (r0 == 0) goto L8
            int r0 = r0.length
            if (r0 != 0) goto L6
            goto L8
        L6:
            r0 = 0
            return r0
        L8:
            r0 = 1
            return r0
    }

    private static <T> boolean a(T[] r4, T r5) {
            r0 = 0
            r1 = -1
            if (r4 == 0) goto L1c
            r2 = r0
        L5:
            int r3 = r4.length
            if (r2 >= r3) goto L1c
            r3 = r4[r2]
            if (r3 == r5) goto L1d
            r3 = r4[r2]
            if (r3 == 0) goto L19
            r3 = r4[r2]
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto L19
            goto L1d
        L19:
            int r2 = r2 + 1
            goto L5
        L1c:
            r2 = r1
        L1d:
            if (r2 == r1) goto L21
            r4 = 1
            return r4
        L21:
            return r0
    }

    public static <T> boolean a(T[] r5, T[] r6) {
            r0 = 1
            if (r6 != 0) goto L4
            return r0
        L4:
            int r1 = r6.length
            r2 = 0
            r3 = r2
        L7:
            if (r3 >= r1) goto L15
            r4 = r6[r3]
            boolean r4 = a(r5, r4)
            if (r4 != 0) goto L12
            return r2
        L12:
            int r3 = r3 + 1
            goto L7
        L15:
            return r0
    }
}

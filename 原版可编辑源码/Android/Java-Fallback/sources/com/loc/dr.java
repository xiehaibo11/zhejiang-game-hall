package com.loc;

public final class dr extends com.loc.gc {
    private static int a(com.loc.gb r0) {
            int r0 = r0.b()
            return r0
    }

    public static int a(com.loc.gb r1, int r2) {
            r0 = 1
            r1.b(r0)
            b(r1, r2)
            int r1 = a(r1)
            return r1
    }

    public static int a(com.loc.gb r2, int[] r3) {
            int r0 = r3.length
            r1 = 4
            r2.a(r1, r0, r1)
            int r0 = r3.length
            int r0 = r0 + (-1)
        L8:
            if (r0 < 0) goto L12
            r1 = r3[r0]
            r2.a(r1)
            int r0 = r0 + (-1)
            goto L8
        L12:
            int r2 = r2.a()
            return r2
    }

    private static void b(com.loc.gb r1, int r2) {
            r0 = 0
            r1.b(r0, r2)
            return
    }
}

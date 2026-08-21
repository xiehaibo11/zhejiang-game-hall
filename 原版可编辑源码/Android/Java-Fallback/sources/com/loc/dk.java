package com.loc;

public final class dk extends com.loc.gc {
    private static int a(com.loc.gb r0) {
            int r0 = r0.b()
            return r0
    }

    public static int a(com.loc.gb r1, byte r2, int r3) {
            r0 = 2
            r1.b(r0)
            a(r1, r3)
            a(r1, r2)
            int r1 = a(r1)
            return r1
    }

    public static int a(com.loc.gb r2, byte[] r3) {
            int r0 = r3.length
            r1 = 1
            r2.a(r1, r0, r1)
            int r0 = r3.length
            int r0 = r0 - r1
        L7:
            if (r0 < 0) goto L11
            r1 = r3[r0]
            r2.a(r1)
            int r0 = r0 + (-1)
            goto L7
        L11:
            int r2 = r2.a()
            return r2
    }

    private static void a(com.loc.gb r1, byte r2) {
            r0 = 0
            r1.a(r0, r2)
            return
    }

    private static void a(com.loc.gb r1, int r2) {
            r0 = 1
            r1.b(r0, r2)
            return
    }
}

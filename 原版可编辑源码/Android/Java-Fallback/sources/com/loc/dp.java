package com.loc;

public final class dp extends com.loc.gc {
    public static int a(com.loc.gb r1, int r2, int r3, short r4) {
            r0 = 4
            r1.b(r0)
            b(r1, r3)
            a(r1, r2)
            a(r1, r4)
            a(r1)
            int r1 = b(r1)
            return r1
    }

    private static void a(com.loc.gb r2) {
            r0 = 0
            r1 = 1
            r2.a(r0, r1)
            return
    }

    private static void a(com.loc.gb r1, int r2) {
            r0 = 1
            r1.a(r0, r2)
            return
    }

    private static void a(com.loc.gb r1, short r2) {
            r0 = 3
            r1.a(r0, r2)
            return
    }

    private static int b(com.loc.gb r0) {
            int r0 = r0.b()
            return r0
    }

    private static void b(com.loc.gb r1, int r2) {
            r0 = 2
            r1.a(r0, r2)
            return
    }
}

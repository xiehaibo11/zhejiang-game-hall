package com.loc;

public final class dp extends gc {
    public static int a(gb gbVar, int i, int i2, short s) {
        gbVar.b(4);
        b(gbVar, i2);
        a(gbVar, i);
        a(gbVar, s);
        a(gbVar);
        return b(gbVar);
    }

    private static void a(gb gbVar) {
        gbVar.a(0, (byte) 1);
    }

    private static void a(gb gbVar, int i) {
        gbVar.a(1, i);
    }

    private static void a(gb gbVar, short s) {
        gbVar.a(3, s);
    }

    private static int b(gb gbVar) {
        return gbVar.b();
    }

    private static void b(gb gbVar, int i) {
        gbVar.a(2, i);
    }
}

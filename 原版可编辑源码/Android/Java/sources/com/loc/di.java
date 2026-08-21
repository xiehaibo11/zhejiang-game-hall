package com.loc;

public final class di extends gc {
    private static int a(gb gbVar) {
        return gbVar.b();
    }

    public static int a(gb gbVar, byte b, int i) {
        gbVar.b(2);
        a(gbVar, i);
        a(gbVar, b);
        return a(gbVar);
    }

    private static void a(gb gbVar, byte b) {
        gbVar.a(0, b);
    }

    private static void a(gb gbVar, int i) {
        gbVar.b(1, i);
    }
}

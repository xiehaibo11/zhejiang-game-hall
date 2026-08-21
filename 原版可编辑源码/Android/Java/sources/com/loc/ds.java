package com.loc;

public final class ds extends gc {
    private static int a(gb gbVar) {
        return gbVar.b();
    }

    public static int a(gb gbVar, boolean z, long j, short s, int i, short s2, short s3) {
        gbVar.b(6);
        a(gbVar, j);
        a(gbVar, i);
        c(gbVar, s3);
        b(gbVar, s2);
        a(gbVar, s);
        a(gbVar, z);
        return a(gbVar);
    }

    private static void a(gb gbVar, int i) {
        gbVar.b(3, i);
    }

    private static void a(gb gbVar, long j) {
        gbVar.a(1, j);
    }

    private static void a(gb gbVar, short s) {
        gbVar.a(2, s);
    }

    private static void a(gb gbVar, boolean z) {
        gbVar.a(z);
    }

    private static void b(gb gbVar, short s) {
        gbVar.a(4, s);
    }

    private static void c(gb gbVar, short s) {
        gbVar.a(5, s);
    }
}

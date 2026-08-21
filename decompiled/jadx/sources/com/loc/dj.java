package com.loc;

/* JADX INFO: compiled from: TCellInfo.java */
/* JADX INFO: loaded from: classes2.dex */
public final class dj extends gc {
    private static int a(gb gbVar) {
        return gbVar.b();
    }

    public static int a(gb gbVar, byte b, byte b2, short s, byte b3, int i) {
        gbVar.b(5);
        a(gbVar, i);
        a(gbVar, s);
        c(gbVar, b3);
        b(gbVar, b2);
        a(gbVar, b);
        return a(gbVar);
    }

    private static void a(gb gbVar, byte b) {
        gbVar.a(0, b);
    }

    private static void a(gb gbVar, int i) {
        gbVar.b(4, i);
    }

    private static void a(gb gbVar, short s) {
        gbVar.a(2, s);
    }

    private static void b(gb gbVar, byte b) {
        gbVar.a(1, b);
    }

    private static void c(gb gbVar, byte b) {
        gbVar.a(3, b);
    }
}

package com.loc;

/* JADX INFO: compiled from: TCell.java */
/* JADX INFO: loaded from: classes2.dex */
public final class dh extends gc {
    private static int a(gb gbVar) {
        return gbVar.b();
    }

    public static int a(gb gbVar, int i, byte b, int i2, int i3) {
        gbVar.b(4);
        c(gbVar, i3);
        b(gbVar, i2);
        a(gbVar, i);
        a(gbVar, b);
        return a(gbVar);
    }

    public static int a(gb gbVar, int[] iArr) {
        gbVar.a(4, iArr.length, 4);
        for (int length = iArr.length - 1; length >= 0; length--) {
            gbVar.a(iArr[length]);
        }
        return gbVar.a();
    }

    private static void a(gb gbVar, byte b) {
        gbVar.a(1, b);
    }

    private static void a(gb gbVar, int i) {
        gbVar.b(0, i);
    }

    public static int b(gb gbVar, int[] iArr) {
        gbVar.a(4, iArr.length, 4);
        for (int length = iArr.length - 1; length >= 0; length--) {
            gbVar.a(iArr[length]);
        }
        return gbVar.a();
    }

    private static void b(gb gbVar, int i) {
        gbVar.b(2, i);
    }

    private static void c(gb gbVar, int i) {
        gbVar.b(3, i);
    }
}

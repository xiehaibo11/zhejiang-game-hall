package com.loc;

/* JADX INFO: renamed from: com.loc.do, reason: invalid class name */
/* JADX INFO: compiled from: TMainCellCDMAHistory.java */
/* JADX INFO: loaded from: classes2.dex */
public final class Cdo extends gc {
    public static int a(gb gbVar, int i, int i2, int i3, short s) {
        gbVar.b(5);
        c(gbVar, i3);
        b(gbVar, i2);
        a(gbVar, i);
        a(gbVar, s);
        a(gbVar);
        return b(gbVar);
    }

    private static void a(gb gbVar) {
        gbVar.a(0, (byte) 2);
    }

    private static void a(gb gbVar, int i) {
        gbVar.a(1, i);
    }

    private static void a(gb gbVar, short s) {
        gbVar.a(4, s);
    }

    private static int b(gb gbVar) {
        return gbVar.b();
    }

    private static void b(gb gbVar, int i) {
        gbVar.a(2, i);
    }

    private static void c(gb gbVar, int i) {
        gbVar.a(3, i);
    }
}

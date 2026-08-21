package com.loc;

/* JADX INFO: compiled from: TWifi.java */
/* JADX INFO: loaded from: classes2.dex */
public final class dr extends gc {
    private static int a(gb gbVar) {
        return gbVar.b();
    }

    public static int a(gb gbVar, int i) {
        gbVar.b(1);
        b(gbVar, i);
        return a(gbVar);
    }

    public static int a(gb gbVar, int[] iArr) {
        gbVar.a(4, iArr.length, 4);
        for (int length = iArr.length - 1; length >= 0; length--) {
            gbVar.a(iArr[length]);
        }
        return gbVar.a();
    }

    private static void b(gb gbVar, int i) {
        gbVar.b(0, i);
    }
}

package com.loc;

/* JADX INFO: compiled from: TData.java */
/* JADX INFO: loaded from: classes2.dex */
public final class dk extends gc {
    private static int a(gb gbVar) {
        return gbVar.b();
    }

    public static int a(gb gbVar, byte b, int i) {
        gbVar.b(2);
        a(gbVar, i);
        a(gbVar, b);
        return a(gbVar);
    }

    public static int a(gb gbVar, byte[] bArr) {
        gbVar.a(1, bArr.length, 1);
        for (int length = bArr.length - 1; length >= 0; length--) {
            gbVar.a(bArr[length]);
        }
        return gbVar.a();
    }

    private static void a(gb gbVar, byte b) {
        gbVar.a(0, b);
    }

    private static void a(gb gbVar, int i) {
        gbVar.b(1, i);
    }
}

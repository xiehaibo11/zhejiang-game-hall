package com.loc;

/* JADX INFO: compiled from: RootTUploadData.java */
/* JADX INFO: loaded from: classes2.dex */
public final class df extends gc {
    private static int a(gb gbVar) {
        return gbVar.b();
    }

    public static int a(gb gbVar, int i, int i2, int i3) {
        gbVar.b(3);
        c(gbVar, i3);
        b(gbVar, i2);
        a(gbVar, i);
        return a(gbVar);
    }

    public static int a(gb gbVar, byte[] bArr) {
        gbVar.a(1, bArr.length, 1);
        for (int length = bArr.length - 1; length >= 0; length--) {
            gbVar.a(bArr[length]);
        }
        return gbVar.a();
    }

    public static int a(gb gbVar, int[] iArr) {
        gbVar.a(4, iArr.length, 4);
        for (int length = iArr.length - 1; length >= 0; length--) {
            gbVar.a(iArr[length]);
        }
        return gbVar.a();
    }

    private static void a(gb gbVar, int i) {
        gbVar.b(0, i);
    }

    public static int b(gb gbVar, byte[] bArr) {
        gbVar.a(1, bArr.length, 1);
        for (int length = bArr.length - 1; length >= 0; length--) {
            gbVar.a(bArr[length]);
        }
        return gbVar.a();
    }

    private static void b(gb gbVar, int i) {
        gbVar.b(1, i);
    }

    private static void c(gb gbVar, int i) {
        gbVar.b(2, i);
    }
}

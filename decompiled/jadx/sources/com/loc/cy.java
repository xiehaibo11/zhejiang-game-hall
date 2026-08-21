package com.loc;

import java.util.List;

/* JADX INFO: compiled from: UploadBufferBuilder.java */
/* JADX INFO: loaded from: classes2.dex */
public final class cy extends cv {
    private static cy b = new cy();

    private cy() {
        super(5120);
    }

    private static String a(String str) {
        return str == null ? "" : str;
    }

    public static cy b() {
        return b;
    }

    public final byte[] a(byte[] bArr, byte[] bArr2, List<? extends dc> list) {
        if (list == null) {
            return null;
        }
        try {
            int size = list.size();
            if (size <= 0 || bArr == null) {
                return null;
            }
            a();
            int iA = df.a((gb) this.f2916a, bArr);
            int[] iArr = new int[size];
            for (int i = 0; i < size; i++) {
                dc dcVar = list.get(i);
                iArr[i] = dk.a(this.f2916a, (byte) dcVar.a(), dk.a(this.f2916a, dcVar.b()));
            }
            this.f2916a.c(df.a(this.f2916a, iA, bArr2 != null ? df.b(this.f2916a, bArr2) : 0, df.a(this.f2916a, iArr)));
            return this.f2916a.c();
        } catch (Throwable th) {
            ej.a(th);
            return null;
        }
    }

    public final byte[] c() {
        super.a();
        try {
            this.f2916a.c(ei.a(this.f2916a, eh.a(), this.f2916a.a(eh.f()), this.f2916a.a(eh.c()), (byte) eh.m(), this.f2916a.a(eh.i()), this.f2916a.a(eh.h()), this.f2916a.a(a(eh.g())), this.f2916a.a(a(eh.j())), eg.a(eh.n()), this.f2916a.a(eh.l()), this.f2916a.a(eh.k()), this.f2916a.a(eh.d()), this.f2916a.a(eh.e())));
            return this.f2916a.c();
        } catch (Exception e) {
            ej.a(e);
            return null;
        }
    }
}

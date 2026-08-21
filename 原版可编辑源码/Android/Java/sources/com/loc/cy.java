package com.loc;

import java.util.List;

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
            int iA = df.a((gb) this.a, bArr);
            int[] iArr = new int[size];
            for (int i = 0; i < size; i++) {
                dc dcVar = list.get(i);
                iArr[i] = dk.a(this.a, (byte) dcVar.a(), dk.a(this.a, dcVar.b()));
            }
            this.a.c(df.a(this.a, iA, bArr2 != null ? df.b(this.a, bArr2) : 0, df.a(this.a, iArr)));
            return this.a.c();
        } catch (Throwable th) {
            ej.a(th);
            return null;
        }
    }

    public final byte[] c() {
        super.a();
        try {
            this.a.c(ei.a(this.a, eh.a(), this.a.a(eh.f()), this.a.a(eh.c()), (byte) eh.m(), this.a.a(eh.i()), this.a.a(eh.h()), this.a.a(a(eh.g())), this.a.a(a(eh.j())), eg.a(eh.n()), this.a.a(eh.l()), this.a.a(eh.k()), this.a.a(eh.d()), this.a.a(eh.e())));
            return this.a.c();
        } catch (Exception e) {
            ej.a(e);
            return null;
        }
    }
}

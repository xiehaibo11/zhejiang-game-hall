package com.tkay.expressad.exoplayer.i;

import java.util.Arrays;

/* JADX INFO: loaded from: classes3.dex */
public final class g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f6701a;
    private final f[] b;
    private int c;

    public g(f... fVarArr) {
        this.b = fVarArr;
        this.f6701a = fVarArr.length;
    }

    public final f a(int i) {
        return this.b[i];
    }

    public final f[] a() {
        return (f[]) this.b.clone();
    }

    public final int hashCode() {
        if (this.c == 0) {
            this.c = Arrays.hashCode(this.b) + 527;
        }
        return this.c;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        return Arrays.equals(this.b, ((g) obj).b);
    }
}

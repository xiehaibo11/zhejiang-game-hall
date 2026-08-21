package com.tkay.expressad.exoplayer.e.a;

import com.tkay.expressad.exoplayer.k.af;

/* JADX INFO: loaded from: classes3.dex */
final class m {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final j f6568a;
    public final int b;
    public final long[] c;
    public final int[] d;
    public final int e;
    public final long[] f;
    public final int[] g;
    public final long h;

    public m(j jVar, long[] jArr, int[] iArr, int i, long[] jArr2, int[] iArr2, long j) {
        com.tkay.expressad.exoplayer.k.a.a(iArr.length == jArr2.length);
        com.tkay.expressad.exoplayer.k.a.a(jArr.length == jArr2.length);
        com.tkay.expressad.exoplayer.k.a.a(iArr2.length == jArr2.length);
        this.f6568a = jVar;
        this.c = jArr;
        this.d = iArr;
        this.e = i;
        this.f = jArr2;
        this.g = iArr2;
        this.h = j;
        this.b = jArr.length;
    }

    public final int a(long j) {
        for (int iA = af.a(this.f, j, false); iA >= 0; iA--) {
            if ((this.g[iA] & 1) != 0) {
                return iA;
            }
        }
        return -1;
    }

    public final int b(long j) {
        for (int iA = af.a(this.f, j, true, false); iA < this.f.length; iA++) {
            if ((this.g[iA] & 1) != 0) {
                return iA;
            }
        }
        return -1;
    }
}

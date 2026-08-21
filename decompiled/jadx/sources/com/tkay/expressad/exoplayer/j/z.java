package com.tkay.expressad.exoplayer.j;

import android.net.Uri;

/* JADX INFO: loaded from: classes3.dex */
public final class z implements h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final h f6744a;
    private final g b;
    private boolean c;
    private long d;

    public z(h hVar, g gVar) {
        this.f6744a = (h) com.tkay.expressad.exoplayer.k.a.a(hVar);
        this.b = (g) com.tkay.expressad.exoplayer.k.a.a(gVar);
    }

    @Override // com.tkay.expressad.exoplayer.j.h
    public final long a(k kVar) {
        long jA = this.f6744a.a(kVar);
        this.d = jA;
        if (jA == 0) {
            return 0L;
        }
        if (kVar.g == -1 && this.d != -1) {
            kVar = new k(kVar.c, kVar.e, kVar.f, this.d, kVar.h, kVar.i);
        }
        this.c = true;
        this.b.a(kVar);
        return this.d;
    }

    @Override // com.tkay.expressad.exoplayer.j.h
    public final int a(byte[] bArr, int i, int i2) {
        if (this.d == 0) {
            return -1;
        }
        int iA = this.f6744a.a(bArr, i, i2);
        if (iA > 0) {
            this.b.a(bArr, i, iA);
            long j = this.d;
            if (j != -1) {
                this.d = j - ((long) iA);
            }
        }
        return iA;
    }

    @Override // com.tkay.expressad.exoplayer.j.h
    public final Uri a() {
        return this.f6744a.a();
    }

    @Override // com.tkay.expressad.exoplayer.j.h
    public final void b() {
        try {
            this.f6744a.b();
        } finally {
            if (this.c) {
                this.c = false;
                this.b.a();
            }
        }
    }
}

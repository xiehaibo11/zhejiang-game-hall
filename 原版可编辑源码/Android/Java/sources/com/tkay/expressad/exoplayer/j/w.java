package com.tkay.expressad.exoplayer.j;

import android.net.Uri;

public final class w implements h {
    private final h a;
    private final com.tkay.expressad.exoplayer.k.v b;
    private final int c;

    public w(h hVar, com.tkay.expressad.exoplayer.k.v vVar, int i) {
        this.a = (h) com.tkay.expressad.exoplayer.k.a.a(hVar);
        this.b = (com.tkay.expressad.exoplayer.k.v) com.tkay.expressad.exoplayer.k.a.a(vVar);
        this.c = i;
    }

    @Override
    public final long a(k kVar) {
        this.b.a(this.c);
        return this.a.a(kVar);
    }

    @Override
    public final int a(byte[] bArr, int i, int i2) {
        this.b.a(this.c);
        return this.a.a(bArr, i, i2);
    }

    @Override
    public final Uri a() {
        return this.a.a();
    }

    @Override
    public final void b() {
        this.a.b();
    }
}

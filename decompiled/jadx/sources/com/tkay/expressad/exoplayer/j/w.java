package com.tkay.expressad.exoplayer.j;

import android.net.Uri;

/* JADX INFO: loaded from: classes3.dex */
public final class w implements h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final h f6741a;
    private final com.tkay.expressad.exoplayer.k.v b;
    private final int c;

    public w(h hVar, com.tkay.expressad.exoplayer.k.v vVar, int i) {
        this.f6741a = (h) com.tkay.expressad.exoplayer.k.a.a(hVar);
        this.b = (com.tkay.expressad.exoplayer.k.v) com.tkay.expressad.exoplayer.k.a.a(vVar);
        this.c = i;
    }

    @Override // com.tkay.expressad.exoplayer.j.h
    public final long a(k kVar) {
        this.b.a(this.c);
        return this.f6741a.a(kVar);
    }

    @Override // com.tkay.expressad.exoplayer.j.h
    public final int a(byte[] bArr, int i, int i2) {
        this.b.a(this.c);
        return this.f6741a.a(bArr, i, i2);
    }

    @Override // com.tkay.expressad.exoplayer.j.h
    public final Uri a() {
        return this.f6741a.a();
    }

    @Override // com.tkay.expressad.exoplayer.j.h
    public final void b() {
        this.f6741a.b();
    }
}

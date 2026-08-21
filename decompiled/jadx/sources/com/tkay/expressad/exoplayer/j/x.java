package com.tkay.expressad.exoplayer.j;

import com.tkay.expressad.exoplayer.j.h;

/* JADX INFO: loaded from: classes3.dex */
public final class x implements h.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final h.a f6742a;
    private final com.tkay.expressad.exoplayer.k.v b;
    private final int c;

    private x(h.a aVar, com.tkay.expressad.exoplayer.k.v vVar, int i) {
        this.f6742a = aVar;
        this.b = vVar;
        this.c = i;
    }

    private w b() {
        return new w(this.f6742a.a(), this.b, this.c);
    }

    @Override // com.tkay.expressad.exoplayer.j.h.a
    public final /* synthetic */ h a() {
        return new w(this.f6742a.a(), this.b, this.c);
    }
}

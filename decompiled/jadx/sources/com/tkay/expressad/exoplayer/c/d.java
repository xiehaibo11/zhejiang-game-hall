package com.tkay.expressad.exoplayer.c;

/* JADX INFO: loaded from: classes3.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f6514a;
    public int b;
    public int c;
    public int d;
    public int e;
    public int f;
    public int g;
    public int h;
    public int i;

    private synchronized void a() {
    }

    private void a(d dVar) {
        this.f6514a += dVar.f6514a;
        this.b += dVar.b;
        this.c += dVar.c;
        this.d += dVar.d;
        this.e += dVar.e;
        this.f += dVar.f;
        this.g += dVar.g;
        this.h = Math.max(this.h, dVar.h);
        this.i += dVar.i;
    }
}

package com.tkay.expressad.exoplayer.h.b;

import com.tkay.expressad.exoplayer.j.k;
import com.tkay.expressad.exoplayer.j.t;
import com.tkay.expressad.exoplayer.m;

/* JADX INFO: loaded from: classes3.dex */
public abstract class c implements t.c {
    public final k b;
    public final int c = 1;
    public final m d;
    public final int e;
    public final Object f;
    public final long g;
    public final long h;
    protected final com.tkay.expressad.exoplayer.j.h i;

    public abstract long d();

    public c(com.tkay.expressad.exoplayer.j.h hVar, k kVar, m mVar, int i, Object obj, long j, long j2) {
        this.i = (com.tkay.expressad.exoplayer.j.h) com.tkay.expressad.exoplayer.k.a.a(hVar);
        this.b = (k) com.tkay.expressad.exoplayer.k.a.a(kVar);
        this.d = mVar;
        this.e = i;
        this.f = obj;
        this.g = j;
        this.h = j2;
    }

    private long c() {
        return this.h - this.g;
    }
}

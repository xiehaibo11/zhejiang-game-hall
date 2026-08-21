package com.tkay.expressad.exoplayer.h.b;

import com.tkay.expressad.exoplayer.j.k;
import com.tkay.expressad.exoplayer.m;

/* JADX INFO: loaded from: classes3.dex */
public abstract class a extends i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final long f6635a;
    private b k;
    private int[] l;

    public a(com.tkay.expressad.exoplayer.j.h hVar, k kVar, m mVar, int i, Object obj, long j, long j2, long j3, long j4) {
        super(hVar, kVar, mVar, i, obj, j, j2, j4);
        this.f6635a = j3;
    }

    public final void a(b bVar) {
        this.k = bVar;
        this.l = bVar.a();
    }

    public final int a(int i) {
        return this.l[i];
    }

    protected final b c() {
        return this.k;
    }
}

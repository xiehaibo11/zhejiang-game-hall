package com.tkay.expressad.exoplayer.h.b;

import com.tkay.expressad.exoplayer.j.k;
import com.tkay.expressad.exoplayer.m;

/* JADX INFO: loaded from: classes3.dex */
public abstract class i extends c {
    public final long j;

    public abstract boolean f();

    public i(com.tkay.expressad.exoplayer.j.h hVar, k kVar, m mVar, int i, Object obj, long j, long j2, long j3) {
        super(hVar, kVar, mVar, i, obj, j, j2);
        com.tkay.expressad.exoplayer.k.a.a(mVar);
        this.j = j3;
    }

    public long e() {
        long j = this.j;
        if (j != -1) {
            return j + 1;
        }
        return -1L;
    }
}

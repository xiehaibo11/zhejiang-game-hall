package com.igexin.push.f.b;

import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes2.dex */
public abstract class g extends com.igexin.b.a.d.e {
    long d;

    public g(long j) {
        this(0L, j);
    }

    public g(long j, long j2) {
        super(5);
        j2 = j > 0 ? j2 + (j - System.currentTimeMillis()) : j2;
        this.d = j2;
        a(j2, TimeUnit.MILLISECONDS);
    }

    @Override // com.igexin.b.a.d.e
    public final void b() {
        super.b();
        d_();
    }

    protected abstract void d_();

    @Override // com.igexin.b.a.d.e
    protected void e() {
    }
}

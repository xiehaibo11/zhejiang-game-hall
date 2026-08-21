package com.tkay.expressad.exoplayer.c;

/* JADX INFO: loaded from: classes3.dex */
public abstract class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f6511a;

    public void a() {
        this.f6511a = 0;
    }

    public final boolean b() {
        return c(Integer.MIN_VALUE);
    }

    public final boolean c() {
        return c(4);
    }

    public final boolean d() {
        return c(1);
    }

    public final void a(int i) {
        this.f6511a = i;
    }

    public final void b(int i) {
        this.f6511a = i | this.f6511a;
    }

    private void d(int i) {
        this.f6511a = (~i) & this.f6511a;
    }

    protected final boolean c(int i) {
        return (this.f6511a & i) == i;
    }
}

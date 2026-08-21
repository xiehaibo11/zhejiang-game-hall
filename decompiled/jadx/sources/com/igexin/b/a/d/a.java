package com.igexin.b.a.d;

/* JADX INFO: loaded from: classes2.dex */
public abstract class a implements com.igexin.b.a.d.a.e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private volatile boolean f2449a;
    private long b;
    protected String l = getClass().getName();

    @Override // com.igexin.b.a.d.a.e
    public void a(boolean z) {
        this.f2449a = !z;
    }

    @Override // com.igexin.b.a.d.a.e
    public boolean l() {
        return this.f2449a;
    }

    @Override // com.igexin.b.a.d.a.e
    public long m() {
        return this.b;
    }
}

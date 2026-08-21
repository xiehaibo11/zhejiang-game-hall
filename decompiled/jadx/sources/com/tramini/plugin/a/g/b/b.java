package com.tramini.plugin.a.g.b;

/* JADX INFO: loaded from: classes4.dex */
public abstract class b implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f7865a = 0;
    protected c d;

    public abstract void a();

    final void a(int i) {
        this.f7865a = i;
    }

    private int b() {
        return this.f7865a;
    }

    @Override // java.lang.Runnable
    public void run() {
        a();
    }
}

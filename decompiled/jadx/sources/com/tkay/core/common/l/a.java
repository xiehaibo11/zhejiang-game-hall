package com.tkay.core.common.l;

/* JADX INFO: loaded from: classes3.dex */
public abstract class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f6222a;
    private final com.tkay.core.common.j.a b = com.tkay.core.common.j.c.a();
    private final com.tkay.core.common.j.b c = new com.tkay.core.common.j.b() { // from class: com.tkay.core.common.l.a.1
        @Override // java.lang.Runnable
        public final void run() {
            synchronized (this) {
                if (!a.this.f6222a) {
                    a.b(a.this);
                    a.this.b();
                }
            }
        }
    };

    protected abstract void b();

    static /* synthetic */ boolean b(a aVar) {
        aVar.f6222a = true;
        return true;
    }

    protected final synchronized void a(long j) {
        this.b.a(this.c, j, false);
    }

    public final synchronized void a() {
        this.b.a(this.c);
    }

    private boolean c() {
        return this.f6222a;
    }
}

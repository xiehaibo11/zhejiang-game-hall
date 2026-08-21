package com.tkay.core.common.l;

public abstract class a {
    private boolean a;
    private final com.tkay.core.common.j.a b = com.tkay.core.common.j.c.a();
    private final com.tkay.core.common.j.b c = new com.tkay.core.common.j.b() {
        @Override
        public final void run() {
            synchronized (this) {
                if (!a.this.a) {
                    a.b(a.this);
                    a.this.b();
                }
            }
        }
    };

    protected abstract void b();

    static boolean b(a aVar) {
        aVar.a = true;
        return true;
    }

    protected final synchronized void a(long j) {
        this.b.a(this.c, j, false);
    }

    public final synchronized void a() {
        this.b.a(this.c);
    }

    private boolean c() {
        return this.a;
    }
}

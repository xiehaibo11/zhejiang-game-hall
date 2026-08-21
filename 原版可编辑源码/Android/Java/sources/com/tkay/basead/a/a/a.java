package com.tkay.basead.a.a;

import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;

public abstract class a<R, E> implements c<R, E> {
    private final AtomicBoolean a = new AtomicBoolean(false);
    private final AtomicInteger b = new AtomicInteger(1);
    private b<R, E> c;

    @Override
    public final void a() {
        if (!this.a.get() && this.b.decrementAndGet() == 0) {
            this.a.set(true);
            b<R, E> bVar = this.c;
            if (bVar != null) {
                bVar.a();
            }
        }
    }

    @Override
    public final void a(E e) {
        if (this.a.get()) {
            return;
        }
        this.a.set(true);
        b<R, E> bVar = this.c;
        if (bVar != null) {
            bVar.a(e);
        }
    }

    @Override
    public final void a(int i) {
        this.b.set(i);
    }

    @Override
    public final void a(b<R, E> bVar) {
        this.c = bVar;
    }
}

package com.tkay.basead.a.a;

import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes3.dex */
public abstract class a<R, E> implements c<R, E> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final AtomicBoolean f5561a = new AtomicBoolean(false);
    private final AtomicInteger b = new AtomicInteger(1);
    private b<R, E> c;

    @Override // com.tkay.basead.a.a.c
    public final void a() {
        if (!this.f5561a.get() && this.b.decrementAndGet() == 0) {
            this.f5561a.set(true);
            b<R, E> bVar = this.c;
            if (bVar != null) {
                bVar.a();
            }
        }
    }

    @Override // com.tkay.basead.a.a.c
    public final void a(E e) {
        if (this.f5561a.get()) {
            return;
        }
        this.f5561a.set(true);
        b<R, E> bVar = this.c;
        if (bVar != null) {
            bVar.a(e);
        }
    }

    @Override // com.tkay.basead.a.a.c
    public final void a(int i) {
        this.b.set(i);
    }

    @Override // com.tkay.basead.a.a.c
    public final void a(b<R, E> bVar) {
        this.c = bVar;
    }
}

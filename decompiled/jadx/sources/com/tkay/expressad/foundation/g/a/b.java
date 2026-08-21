package com.tkay.expressad.foundation.g.a;

import android.util.Log;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes3.dex */
public abstract class b<K, V> extends a<K, V> {
    private static final int b = 16;
    private static final int c = 16777216;
    private final int d;
    private final List<V> f = Collections.synchronizedList(new LinkedList());
    private final AtomicInteger e = new AtomicInteger();

    protected abstract int c();

    protected abstract V d();

    private b(int i) {
        this.d = i;
        if (i > 16777216) {
            Log.w("cache", String.format("You set too large memory cache size (more than %1$d Mb)", 16));
        }
    }

    @Override // com.tkay.expressad.foundation.g.a.a, com.tkay.expressad.foundation.g.a.e
    public final boolean a(K k, V v) {
        boolean z;
        int iC = c();
        int i = this.d;
        int iAddAndGet = this.e.get();
        if (iC < i) {
            while (iAddAndGet + iC > i) {
                if (this.f.remove(d())) {
                    iAddAndGet = this.e.addAndGet(-c());
                }
            }
            this.f.add(v);
            this.e.addAndGet(iC);
            z = true;
        } else {
            z = false;
        }
        super.a(k, v);
        return z;
    }

    @Override // com.tkay.expressad.foundation.g.a.a, com.tkay.expressad.foundation.g.a.e
    public final void a(K k) {
        Object objB = super.b(k);
        if (objB != null && this.f.remove(objB)) {
            this.e.addAndGet(-c());
        }
        super.a(k);
    }

    @Override // com.tkay.expressad.foundation.g.a.a, com.tkay.expressad.foundation.g.a.e
    public final void b() {
        this.f.clear();
        this.e.set(0);
        super.b();
    }

    private int e() {
        return this.d;
    }
}

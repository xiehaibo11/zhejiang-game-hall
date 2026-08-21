package com.tkay.expressad.foundation.g.f;

/* JADX INFO: loaded from: classes3.dex */
public final class k<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public T f6930a;
    public com.tkay.expressad.foundation.g.f.a.a b;
    public com.tkay.expressad.foundation.g.f.f.c c;

    private boolean a() {
        return this.b == null;
    }

    public static <T> k<T> a(T t, com.tkay.expressad.foundation.g.f.f.c cVar) {
        return new k<>(t, cVar);
    }

    public static <T> k<T> a(com.tkay.expressad.foundation.g.f.a.a aVar) {
        return new k<>(aVar);
    }

    private k(T t, com.tkay.expressad.foundation.g.f.f.c cVar) {
        this.f6930a = null;
        this.b = null;
        this.c = null;
        this.f6930a = t;
        this.c = cVar;
    }

    private k(com.tkay.expressad.foundation.g.f.a.a aVar) {
        this.f6930a = null;
        this.b = null;
        this.c = null;
        this.b = aVar;
    }
}

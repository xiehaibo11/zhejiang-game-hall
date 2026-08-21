package com.meizu.cloud.pushsdk.c.a;

import com.meizu.cloud.pushsdk.c.c.k;

/* JADX INFO: loaded from: classes3.dex */
public class c<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final T f4520a;
    private final com.meizu.cloud.pushsdk.c.b.a b;
    private k c;

    public c(com.meizu.cloud.pushsdk.c.b.a aVar) {
        this.f4520a = null;
        this.b = aVar;
    }

    public c(T t) {
        this.f4520a = t;
        this.b = null;
    }

    public static <T> c<T> a(com.meizu.cloud.pushsdk.c.b.a aVar) {
        return new c<>(aVar);
    }

    public static <T> c<T> a(T t) {
        return new c<>(t);
    }

    public T a() {
        return this.f4520a;
    }

    public void a(k kVar) {
        this.c = kVar;
    }

    public boolean b() {
        return this.b == null;
    }

    public com.meizu.cloud.pushsdk.c.b.a c() {
        return this.b;
    }
}

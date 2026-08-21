package com.mbridge.msdk.foundation.same.net;

/* JADX INFO: compiled from: Response.java */
/* JADX INFO: loaded from: classes2.dex */
public final class k<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public T f3462a;
    public com.mbridge.msdk.foundation.same.net.a.a b;
    public com.mbridge.msdk.foundation.same.net.e.c c;

    public static <T> k<T> a(T t, com.mbridge.msdk.foundation.same.net.e.c cVar) {
        return new k<>(t, cVar);
    }

    public static <T> k<T> a(com.mbridge.msdk.foundation.same.net.a.a aVar) {
        return new k<>(aVar);
    }

    private k(T t, com.mbridge.msdk.foundation.same.net.e.c cVar) {
        this.f3462a = null;
        this.b = null;
        this.c = null;
        this.f3462a = t;
        this.c = cVar;
    }

    private k(com.mbridge.msdk.foundation.same.net.a.a aVar) {
        this.f3462a = null;
        this.b = null;
        this.c = null;
        this.b = aVar;
    }
}

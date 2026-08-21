package com.meizu.cloud.pushsdk.b;

/* JADX INFO: loaded from: classes3.dex */
public class h<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private T f4509a;
    private T b;

    protected h(T t) {
        if (t == null) {
            throw new RuntimeException("proxy must be has a default implementation");
        }
        this.b = t;
    }

    protected T c() {
        T t = this.f4509a;
        return t != null ? t : this.b;
    }
}

package com.meizu.cloud.pushsdk.b;

public class h<T> {
    private T a;
    private T b;

    protected h(T t) {
        if (t == null) {
            throw new RuntimeException("proxy must be has a default implementation");
        }
        this.b = t;
    }

    protected T c() {
        T t = this.a;
        return t != null ? t : this.b;
    }
}

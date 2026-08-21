package com.bumptech.glide.load.resource;

public class SimpleResource<T> implements com.bumptech.glide.load.engine.Resource<T> {
    protected final T data;

    public SimpleResource(T r2) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L8
            r1.data = r2
            return
        L8:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "Data must not be null"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public final T get() {
            r1 = this;
            T r0 = r1.data
            return r0
    }

    @Override
    public final int getSize() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public void recycle() {
            r0 = this;
            return
    }
}

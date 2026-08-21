package com.kwad.sdk.collector.model.jni;

public abstract class NativeObject {
    protected long mPtr;

    public NativeObject() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void destroy();

    public long getNativePtr() {
            r2 = this;
            long r0 = r2.mPtr
            return r0
    }
}

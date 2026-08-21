package com.kwad.sdk.collector.model.jni;

/* JADX INFO: loaded from: classes2.dex */
public abstract class NativeObject {
    protected long mPtr;

    public abstract void destroy();

    public long getNativePtr() {
        return this.mPtr;
    }
}

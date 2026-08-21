package com.huawei.agconnect.config;

@java.lang.Deprecated
public abstract class LazyInputStream {
    private final android.content.Context mContext;
    private java.io.InputStream mInput;

    public LazyInputStream(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.mContext = r1
            return
    }

    public final void close() {
            r1 = this;
            java.io.InputStream r0 = r1.mInput
            com.huawei.agconnect.config.a.j.a(r0)
            return
    }

    public abstract java.io.InputStream get(android.content.Context r1);

    public java.io.InputStream loadInputStream() {
            r1 = this;
            java.io.InputStream r0 = r1.mInput
            if (r0 != 0) goto Lc
            android.content.Context r0 = r1.mContext
            java.io.InputStream r0 = r1.get(r0)
            r1.mInput = r0
        Lc:
            java.io.InputStream r0 = r1.mInput
            return r0
    }
}

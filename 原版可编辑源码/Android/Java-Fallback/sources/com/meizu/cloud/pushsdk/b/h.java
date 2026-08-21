package com.meizu.cloud.pushsdk.b;

public class h<T> {
    private T a;
    private T b;

    protected h(T r2) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L8
            r1.b = r2
            return
        L8:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r0 = "proxy must be has a default implementation"
            r2.<init>(r0)
            throw r2
    }

    protected T c() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto L5
            return r0
        L5:
            T r0 = r1.b
            return r0
    }
}

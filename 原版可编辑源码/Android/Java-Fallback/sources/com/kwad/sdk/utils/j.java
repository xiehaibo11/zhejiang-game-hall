package com.kwad.sdk.utils;

public abstract class j<T> {
    protected boolean IH;
    protected boolean aIe;

    public j(boolean r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.aIe = r0
            r1.IH = r2
            return
    }

    public final void aO(boolean r1) {
            r0 = this;
            r0.IH = r1
            return
    }

    public final T bO(android.content.Context r3) {
            r2 = this;
            boolean r0 = r2.IH
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            boolean r0 = r2.aIe
            if (r0 == 0) goto Lb
            return r1
        Lb:
            java.lang.Object r3 = r2.bP(r3)     // Catch: java.lang.Throwable -> L10
            return r3
        L10:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
            return r1
    }

    protected abstract T bP(android.content.Context r1);
}

package com.kwad.sdk.utils;

import android.content.Context;

/* JADX INFO: loaded from: classes2.dex */
public abstract class j<T> {
    protected boolean IH;
    protected boolean aIe = false;

    public j(boolean z) {
        this.IH = z;
    }

    public final void aO(boolean z) {
        this.IH = z;
    }

    public final T bO(Context context) {
        if (!this.IH || this.aIe) {
            return null;
        }
        try {
            return bP(context);
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
            return null;
        }
    }

    protected abstract T bP(Context context);
}

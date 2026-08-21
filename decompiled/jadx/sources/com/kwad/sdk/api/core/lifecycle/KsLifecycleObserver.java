package com.kwad.sdk.api.core.lifecycle;

import android.arch.lifecycle.LifecycleObserver;

/* JADX INFO: loaded from: classes2.dex */
public class KsLifecycleObserver {
    LifecycleObserver mBase;

    public LifecycleObserver getBase() {
        return this.mBase;
    }

    public void setBase(LifecycleObserver lifecycleObserver) {
        this.mBase = lifecycleObserver;
    }
}

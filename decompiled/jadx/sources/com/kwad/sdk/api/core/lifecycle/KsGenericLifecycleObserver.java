package com.kwad.sdk.api.core.lifecycle;

import com.kwad.sdk.api.core.lifecycle.KsLifecycle;

/* JADX INFO: loaded from: classes2.dex */
public abstract class KsGenericLifecycleObserver extends KsLifecycleObserver {
    public abstract void onStateChanged(KsLifecycle.KsLifeEvent ksLifeEvent);
}

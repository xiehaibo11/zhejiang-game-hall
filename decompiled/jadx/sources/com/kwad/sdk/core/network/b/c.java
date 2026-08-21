package com.kwad.sdk.core.network.b;

import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.service.a.f;

/* JADX INFO: loaded from: classes2.dex */
public final class c {
    public static b BA() {
        f fVar = (f) ServiceProvider.get(f.class);
        return (fVar == null || !fVar.xD()) ? new a() : new d();
    }
}

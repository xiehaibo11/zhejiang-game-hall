package com.kwad.sdk.service;

import com.kwad.sdk.service.a.d;

/* JADX INFO: loaded from: classes2.dex */
public final class c {
    public static void gatherException(Throwable th) {
        d dVar = (d) ServiceProvider.get(d.class);
        if (dVar != null) {
            dVar.gatherException(th);
        }
    }
}

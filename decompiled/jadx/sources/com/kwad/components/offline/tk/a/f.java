package com.kwad.components.offline.tk.a;

import com.kwad.components.offline.api.tk.IOfflineTKRenderListener;
import com.kwad.sdk.components.k;

/* JADX INFO: loaded from: classes2.dex */
public final class f implements IOfflineTKRenderListener {
    private final k ZR;

    public f(k kVar) {
        this.ZR = kVar;
    }

    @Override // com.kwad.components.offline.api.tk.IOfflineTKRenderListener
    public final void onFailed(Throwable th) {
        k kVar = this.ZR;
        if (kVar != null) {
            kVar.onFailed(th);
        }
    }

    @Override // com.kwad.components.offline.api.tk.IOfflineTKRenderListener
    public final void onSuccess() {
        k kVar = this.ZR;
        if (kVar != null) {
            kVar.onSuccess();
        }
    }
}

package com.kwad.components.offline.tk.a;

import com.kwad.components.offline.api.tk.IOfflineTKRenderListener;
import com.kwad.sdk.components.k;

public final class f implements IOfflineTKRenderListener {
    private final k ZR;

    public f(k kVar) {
        this.ZR = kVar;
    }

    @Override
    public final void onFailed(Throwable th) {
        k kVar = this.ZR;
        if (kVar != null) {
            kVar.onFailed(th);
        }
    }

    @Override
    public final void onSuccess() {
        k kVar = this.ZR;
        if (kVar != null) {
            kVar.onSuccess();
        }
    }
}

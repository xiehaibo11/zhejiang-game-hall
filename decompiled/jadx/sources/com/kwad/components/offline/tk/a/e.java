package com.kwad.components.offline.tk.a;

import com.kwad.components.offline.api.tk.IOfflineTKCallHandler;
import com.kwad.sdk.components.i;

/* JADX INFO: loaded from: classes2.dex */
public final class e implements IOfflineTKCallHandler {
    private final i ZQ;

    public e(i iVar) {
        this.ZQ = iVar;
    }

    @Override // com.kwad.components.offline.api.tk.IOfflineTKCallHandler
    public final void callJS(String str) {
        i iVar = this.ZQ;
        if (iVar != null) {
            iVar.callJS(str);
        }
    }
}

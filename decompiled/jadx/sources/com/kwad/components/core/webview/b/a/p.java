package com.kwad.components.core.webview.b.a;

import com.kwad.components.core.webview.b.b.y;

/* JADX INFO: loaded from: classes2.dex */
public class p extends v {
    private boolean IH = true;

    public final void a(y yVar) {
        if (this.IH) {
            super.b(yVar);
        }
    }

    @Override // com.kwad.components.core.webview.b.a.v, com.kwad.sdk.core.webview.c.a
    public void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        super.a(str, cVar);
    }

    public final void aO(boolean z) {
        this.IH = false;
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "registerVideoProgressListener";
    }
}

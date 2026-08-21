package com.kwad.components.core.webview.b.a;

import com.kwad.components.core.webview.b.b.y;

public class p extends v {
    private boolean IH = true;

    public final void a(y yVar) {
        if (this.IH) {
            super.b(yVar);
        }
    }

    @Override
    public void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        super.a(str, cVar);
    }

    public final void aO(boolean z) {
        this.IH = false;
    }

    @Override
    public final String getKey() {
        return "registerVideoProgressListener";
    }
}

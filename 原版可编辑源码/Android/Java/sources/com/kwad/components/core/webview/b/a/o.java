package com.kwad.components.core.webview.b.a;

public class o extends v {
    private a WF;

    public interface a {
        boolean isMuted();
    }

    public final void a(a aVar) {
        this.WF = aVar;
    }

    @Override
    public void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        super.a(str, cVar);
        if (this.WF != null) {
            com.kwad.components.core.webview.b.b.m mVar = new com.kwad.components.core.webview.b.b.m();
            mVar.Xa = this.WF.isMuted();
            cVar.a(mVar);
        }
    }

    public final void c(com.kwad.components.core.webview.b.b.m mVar) {
        super.b(mVar);
    }

    @Override
    public final String getKey() {
        return "registerMuteStateListener";
    }
}

package com.kwad.components.core.webview.jshandler;

public final class ak implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c Tv;
    private c Vn;

    public static final class a extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
        public int status;
    }

    public interface b {
        void oW();
    }

    public interface c {
        void pa();
    }

    public ak(c cVar) {
        this.Vn = cVar;
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        this.Tv = cVar;
        c cVar2 = this.Vn;
        if (cVar2 != null) {
            cVar2.pa();
        }
    }

    @Override
    public final String getKey() {
        return "registerBackClickListener";
    }

    @Override
    public final void onDestroy() {
        this.Tv = null;
    }

    public final void ry() {
        if (this.Tv != null) {
            a aVar = new a();
            aVar.status = 1;
            this.Tv.a(aVar);
        }
    }
}

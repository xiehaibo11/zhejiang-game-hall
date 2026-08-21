package com.kwad.components.core.webview.jshandler;

public final class ai implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c Tv;
    private a Vj = new a();

    public class a extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
        public int id;
        public int status;

        public a() {
        }
    }

    private void p(int i, int i2) {
        if (this.Tv != null) {
            this.Vj.id = i;
            this.Vj.status = 2;
            this.Tv.a(this.Vj);
        }
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        this.Tv = cVar;
    }

    public final void aN(int i) {
        p(1, 2);
    }

    @Override
    public final String getKey() {
        return "registerAnimationListener";
    }

    @Override
    public final void onDestroy() {
        this.Tv = null;
    }
}

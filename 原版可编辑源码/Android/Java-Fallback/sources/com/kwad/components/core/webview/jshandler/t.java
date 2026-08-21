package com.kwad.components.core.webview.jshandler;

public final class t implements com.kwad.sdk.core.webview.c.a {
    protected final com.kwad.sdk.core.webview.b TL;
    protected com.kwad.components.core.webview.jshandler.t.b Uc;

    public static class a implements com.kwad.sdk.core.b {
        public int height;
        public int width;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final void parseJson(org.json.JSONObject r1) {
                r0 = this;
                return
        }

        @Override
        public final org.json.JSONObject toJson() {
                r3 = this;
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                int r1 = r3.width
                java.lang.String r2 = "width"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                int r1 = r3.height
                java.lang.String r2 = "height"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                return r0
        }
    }

    public interface b {
        void a(com.kwad.components.core.webview.jshandler.t.a r1);
    }

    public t(com.kwad.sdk.core.webview.b r1) {
            r0 = this;
            r0.<init>()
            r0.TL = r1
            return
    }

    public final void a(com.kwad.components.core.webview.jshandler.t.b r1) {
            r0 = this;
            r0.Uc = r1
            return
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            com.kwad.components.core.webview.jshandler.t$a r2 = new com.kwad.components.core.webview.jshandler.t$a
            r2.<init>()
            com.kwad.components.core.webview.jshandler.t$b r0 = r1.Uc
            if (r0 == 0) goto Ld
            r0.a(r2)
            goto L21
        Ld:
            com.kwad.sdk.core.webview.b r0 = r1.TL
            android.view.ViewGroup r0 = r0.MT
            int r0 = r0.getWidth()
            r2.width = r0
            com.kwad.sdk.core.webview.b r0 = r1.TL
            android.view.ViewGroup r0 = r0.MT
            int r0 = r0.getHeight()
            r2.height = r0
        L21:
            r3.a(r2)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "getContainerLimit"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}

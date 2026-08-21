package com.kwad.components.core.webview.b.a;

public final class e extends com.kwad.components.core.webview.b.a.v {
    private final com.kwad.components.core.webview.b.a.e.b Ww;

    static class a implements com.kwad.sdk.core.b {
        public int height;

        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        a(byte r1) {
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
                int r1 = r3.height
                java.lang.String r2 = "height"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                return r0
        }
    }

    public interface b {
        int jj();
    }

    public e(com.kwad.components.core.webview.b.a.e.b r1) {
            r0 = this;
            r0.<init>()
            r0.Ww = r1
            return
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            com.kwad.components.core.webview.b.a.e$a r2 = new com.kwad.components.core.webview.b.a.e$a
            r0 = 0
            r2.<init>(r0)
            com.kwad.components.core.webview.b.a.e$b r0 = r1.Ww
            if (r0 == 0) goto L13
            int r0 = r0.jj()
            r2.height = r0
            r3.a(r2)
        L13:
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "getBottomLimitHeight"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}

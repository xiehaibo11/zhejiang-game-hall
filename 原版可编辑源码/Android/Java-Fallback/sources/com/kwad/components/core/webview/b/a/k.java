package com.kwad.components.core.webview.b.a;

public final class k extends com.kwad.components.core.webview.b.a.v {
    com.kwad.components.core.webview.b.a.k.b WB;
    private com.kwad.sdk.core.webview.c.c nA;


    static class a implements com.kwad.sdk.core.b {
        public long creativeId;

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
                r4 = this;
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                long r1 = r4.creativeId
                java.lang.String r3 = "creativeId"
                com.kwad.sdk.utils.t.putValue(r0, r3, r1)
                return r0
        }
    }

    public interface b {
        void E(long r1);
    }

    public k() {
            r1 = this;
            r1.<init>()
            com.kwad.components.core.webview.b.a.k$1 r0 = new com.kwad.components.core.webview.b.a.k$1
            r0.<init>(r1)
            r1.WB = r0
            return
    }

    static com.kwad.sdk.core.webview.c.c a(com.kwad.components.core.webview.b.a.k r0) {
            com.kwad.sdk.core.webview.c.c r0 = r0.nA
            return r0
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            r0.nA = r2
            com.kwad.components.core.webview.b.a.k$b r1 = r0.WB
            com.kwad.components.core.e.d.a.a(r1)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "registerAdConvertListener"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            com.kwad.components.core.webview.b.a.k$b r0 = r1.WB
            com.kwad.components.core.e.d.a.b(r0)
            return
    }
}

package com.kwad.components.core.webview.jshandler;

public final class am implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c Tv;

    public static final class a implements com.kwad.sdk.core.b {
        private java.lang.String Vo;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        static java.lang.String a(com.kwad.components.core.webview.jshandler.am.a r0, java.lang.String r1) {
                r0.Vo = r1
                return r1
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
                java.lang.String r1 = r3.Vo
                java.lang.String r2 = "lifeStatus"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                return r0
        }
    }

    public am() {
            r0 = this;
            r0.<init>()
            return
    }

    private void aK(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.core.webview.c.c r0 = r1.Tv
            if (r0 == 0) goto L11
            com.kwad.components.core.webview.jshandler.am$a r0 = new com.kwad.components.core.webview.jshandler.am$a
            r0.<init>()
            com.kwad.components.core.webview.jshandler.am.a.a(r0, r2)
            com.kwad.sdk.core.webview.c.c r2 = r1.Tv
            r2.a(r0)
        L11:
            return
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            r0.Tv = r2
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "registerLifecycleListener"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.Tv = r0
            return
    }

    public final void rA() {
            r1 = this;
            java.lang.String r0 = "showEnd"
            r1.aK(r0)
            return
    }

    public final void rB() {
            r1 = this;
            java.lang.String r0 = "hideStart"
            r1.aK(r0)
            return
    }

    public final void rC() {
            r1 = this;
            java.lang.String r0 = "hideEnd"
            r1.aK(r0)
            return
    }

    public final void rD() {
            r1 = this;
            java.lang.String r0 = "pageVisiable"
            r1.aK(r0)
            return
    }

    public final void rE() {
            r1 = this;
            java.lang.String r0 = "pageInvisiable"
            r1.aK(r0)
            return
    }

    public final void rz() {
            r1 = this;
            java.lang.String r0 = "showStart"
            r1.aK(r0)
            return
    }
}

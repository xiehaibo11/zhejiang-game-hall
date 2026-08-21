package com.kwad.components.core.webview.jshandler;

public final class x implements com.kwad.sdk.core.webview.c.a {
    private final com.kwad.sdk.core.webview.b TL;

    public static final class a implements com.kwad.sdk.core.b {
        private int screenOrientation;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        static int a(com.kwad.components.core.webview.jshandler.x.a r0, int r1) {
                r0.screenOrientation = r1
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
                int r1 = r3.screenOrientation
                java.lang.String r2 = "screenOrientation"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                return r0
        }
    }

    public x(com.kwad.sdk.core.webview.b r1) {
            r0 = this;
            r0.<init>()
            r0.TL = r1
            return
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            com.kwad.sdk.core.webview.b r2 = r1.TL
            boolean r2 = r2.DY()
            if (r2 == 0) goto Lf
            r2 = -1
            java.lang.String r0 = "native adTemplate is null"
            r3.onError(r2, r0)
            return
        Lf:
            com.kwad.components.core.webview.jshandler.x$a r2 = new com.kwad.components.core.webview.jshandler.x$a
            r2.<init>()
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            r0.getContext()
            boolean r0 = com.kwad.sdk.utils.ai.IN()
            r0 = r0 ^ 1
            com.kwad.components.core.webview.jshandler.x.a.a(r2, r0)
            r3.a(r2)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "getScreenOrientation"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}

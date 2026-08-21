package com.kwad.components.core.webview.jshandler;

public final class u implements com.kwad.sdk.core.webview.c.a {
    private final com.kwad.sdk.core.webview.b TL;
    private final boolean Ud;
    private com.kwad.sdk.core.network.m<com.kwad.components.core.p.a, com.kwad.components.core.response.model.AdResultData> hZ;




    public static final class a implements com.kwad.sdk.core.b {
        private java.util.List<com.kwad.sdk.core.response.model.AdTemplate> Ug;

        public a(java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r1) {
                r0 = this;
                r0.<init>()
                r0.Ug = r1
                return
        }

        @Override
        public final void parseJson(org.json.JSONObject r1) {
                r0 = this;
                return
        }

        @Override
        public final org.json.JSONObject toJson() {
                r6 = this;
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                org.json.JSONArray r1 = new org.json.JSONArray
                r1.<init>()
                java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r2 = r6.Ug
                java.util.Iterator r2 = r2.iterator()
            L10:
                boolean r3 = r2.hasNext()
                if (r3 == 0) goto L3b
                java.lang.Object r3 = r2.next()
                com.kwad.sdk.core.response.model.AdTemplate r3 = (com.kwad.sdk.core.response.model.AdTemplate) r3
                java.lang.String r4 = r3.mOriginJString
                boolean r4 = android.text.TextUtils.isEmpty(r4)
                if (r4 != 0) goto L33
                org.json.JSONObject r4 = new org.json.JSONObject     // Catch: org.json.JSONException -> L2f
                java.lang.String r5 = r3.mOriginJString     // Catch: org.json.JSONException -> L2f
                r4.<init>(r5)     // Catch: org.json.JSONException -> L2f
                r1.put(r4)     // Catch: org.json.JSONException -> L2f
                goto L10
            L2f:
                r4 = move-exception
                com.kwad.sdk.core.e.c.printStackTrace(r4)
            L33:
                org.json.JSONObject r3 = r3.toJson()
                r1.put(r3)
                goto L10
            L3b:
                java.lang.String r2 = "impAdInfo"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                return r0
        }
    }

    public u(com.kwad.sdk.core.webview.b r1) {
            r0 = this;
            r0.<init>()
            r0.TL = r1
            r1 = 0
            r0.Ud = r1
            return
    }

    private void a(com.kwad.components.core.p.a.b r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            com.kwad.sdk.core.network.m<com.kwad.components.core.p.a, com.kwad.components.core.response.model.AdResultData> r0 = r1.hZ
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            com.kwad.components.core.webview.jshandler.u$1 r0 = new com.kwad.components.core.webview.jshandler.u$1
            r0.<init>(r1, r2)
            r1.hZ = r0
            com.kwad.components.core.webview.jshandler.u$2 r2 = new com.kwad.components.core.webview.jshandler.u$2
            r2.<init>(r1, r3)
            r0.request(r2)
            return
    }

    static void a(com.kwad.components.core.webview.jshandler.u r0, com.kwad.sdk.core.webview.c.c r1) {
            r0.a(r1)
            return
    }

    private void a(com.kwad.sdk.core.webview.c.c r2) {
            r1 = this;
            com.kwad.components.core.webview.jshandler.u$3 r0 = new com.kwad.components.core.webview.jshandler.u$3
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
            return
    }

    @Override
    public final void a(java.lang.String r4, com.kwad.sdk.core.webview.c.c r5) {
            r3 = this;
            boolean r4 = r3.Ud
            if (r4 == 0) goto L33
            com.kwad.sdk.core.webview.b r4 = r3.TL
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.getAdTemplate()
            com.kwad.components.core.p.a.b r0 = new com.kwad.components.core.p.a.b
            com.kwad.sdk.internal.api.SceneImpl r1 = r4.mAdScene
            r0.<init>(r1)
            com.kwad.sdk.internal.api.SceneImpl r1 = r4.mAdScene
            if (r1 == 0) goto L1e
            com.kwad.sdk.internal.api.SceneImpl r1 = r4.mAdScene
            int r1 = r1.getPageScene()
            long r1 = (long) r1
            r0.PO = r1
        L1e:
            r1 = 106(0x6a, double:5.24E-322)
            r0.PP = r1
            com.kwad.sdk.internal.api.SceneImpl r1 = r0.PN
            r2 = 12
            r1.setAdNum(r2)
            java.lang.String r4 = com.kwad.sdk.core.response.b.d.cp(r4)
            r0.sdkExtraData = r4
            r3.a(r0, r5)
            return
        L33:
            com.kwad.sdk.core.webview.b r4 = r3.TL
            boolean r4 = r4.DY()
            if (r4 == 0) goto L42
            r4 = -1
            java.lang.String r0 = "native adTemplate is null"
            r5.onError(r4, r0)
            return
        L42:
            com.kwad.components.core.webview.jshandler.u$a r4 = new com.kwad.components.core.webview.jshandler.u$a
            com.kwad.sdk.core.webview.b r0 = r3.TL
            java.util.List r0 = r0.DX()
            r4.<init>(r0)
            r5.a(r4)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "getKsAdData"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            com.kwad.sdk.core.network.m<com.kwad.components.core.p.a, com.kwad.components.core.response.model.AdResultData> r0 = r1.hZ
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            return
    }
}

package com.kwad.components.core.webview.jshandler;

public class ab implements com.kwad.sdk.core.webview.c.a {
    private final com.kwad.sdk.core.webview.b TL;
    private int UN;
    private com.kwad.components.core.webview.jshandler.ab.a kc;

    public interface a {
        void onAdShow();
    }

    public static final class b extends com.kwad.sdk.core.report.b implements com.kwad.sdk.core.b {
        private int UO;
        private java.lang.String UP;
        private int UQ;
        private com.kwad.sdk.core.response.model.AdTemplate adTemplate;

        public b() {
                r0 = this;
                r0.<init>()
                return
        }

        static int d(com.kwad.components.core.webview.jshandler.ab.b r0) {
                int r0 = r0.UO
                return r0
        }

        static java.lang.String e(com.kwad.components.core.webview.jshandler.ab.b r0) {
                java.lang.String r0 = r0.UP
                return r0
        }

        static com.kwad.sdk.core.response.model.AdTemplate f(com.kwad.components.core.webview.jshandler.ab.b r0) {
                com.kwad.sdk.core.response.model.AdTemplate r0 = r0.adTemplate
                return r0
        }

        static int g(com.kwad.components.core.webview.jshandler.ab.b r0) {
                int r0 = r0.UQ
                return r0
        }

        public final int getActionType() {
                r1 = this;
                int r0 = r1.UO
                return r0
        }

        @Override
        public final void parseJson(org.json.JSONObject r3) {
                r2 = this;
                java.lang.String r0 = "adTemplate"
                if (r3 != 0) goto L5
                return
            L5:
                java.lang.String r1 = "actionType"
                int r1 = r3.optInt(r1)
                r2.UO = r1
                java.lang.String r1 = "refreshType"
                int r1 = r3.optInt(r1)
                r2.UQ = r1
                java.lang.String r1 = "payload"
                java.lang.String r1 = r3.optString(r1)
                r2.UP = r1
                boolean r1 = r3.has(r0)     // Catch: java.lang.Exception -> L3d
                if (r1 == 0) goto L3c
                java.lang.String r3 = r3.getString(r0)     // Catch: java.lang.Exception -> L3d
                com.kwad.sdk.core.response.model.AdTemplate r0 = r2.adTemplate     // Catch: java.lang.Exception -> L3d
                if (r0 != 0) goto L32
                com.kwad.sdk.core.response.model.AdTemplate r0 = new com.kwad.sdk.core.response.model.AdTemplate     // Catch: java.lang.Exception -> L3d
                r0.<init>()     // Catch: java.lang.Exception -> L3d
                r2.adTemplate = r0     // Catch: java.lang.Exception -> L3d
            L32:
                com.kwad.sdk.core.response.model.AdTemplate r0 = r2.adTemplate     // Catch: java.lang.Exception -> L3d
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L3d
                r1.<init>(r3)     // Catch: java.lang.Exception -> L3d
                r0.parseJson(r1)     // Catch: java.lang.Exception -> L3d
            L3c:
                return
            L3d:
                r3 = move-exception
                com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
                return
        }

        public final java.lang.String rw() {
                r1 = this;
                java.lang.String r0 = r1.UP
                return r0
        }

        @Override
        public final org.json.JSONObject toJson() {
                r3 = this;
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                int r1 = r3.UO
                java.lang.String r2 = "actionType"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                java.lang.String r1 = r3.UP
                java.lang.String r2 = "payload"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                int r1 = r3.UQ
                java.lang.String r2 = "refreshType"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                com.kwad.sdk.core.response.model.AdTemplate r1 = r3.adTemplate
                java.lang.String r2 = "adTemplate"
                com.kwad.sdk.utils.t.a(r0, r2, r1)
                return r0
        }
    }

    public ab(com.kwad.sdk.core.webview.b r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.UN = r0
            r1.TL = r2
            return
    }

    private com.kwad.sdk.core.response.model.AdTemplate c(com.kwad.components.core.webview.jshandler.ab.b r2) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = com.kwad.components.core.webview.jshandler.ab.b.f(r2)
            if (r0 == 0) goto Lb
            com.kwad.sdk.core.response.model.AdTemplate r2 = com.kwad.components.core.webview.jshandler.ab.b.f(r2)
            return r2
        Lb:
            com.kwad.sdk.core.webview.b r2 = r1.TL
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.getAdTemplate()
            return r2
    }

    public final void a(com.kwad.components.core.webview.jshandler.ab.a r1) {
            r0 = this;
            r0.kc = r1
            return
    }

    protected void a(com.kwad.components.core.webview.jshandler.ab.b r5) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "handleH5Log actionType actionType"
            r0.<init>(r1)
            int r1 = com.kwad.components.core.webview.jshandler.ab.b.d(r5)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "WebCardLogHandler"
            com.kwad.sdk.core.e.c.d(r1, r0)
            int r0 = com.kwad.components.core.webview.jshandler.ab.b.d(r5)
            r1 = 1
            if (r0 != r1) goto L59
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            java.lang.String r1 = com.kwad.components.core.webview.jshandler.ab.b.e(r5)
            com.kwad.sdk.core.report.j r0 = r0.dt(r1)
            com.kwad.components.core.webview.jshandler.ab$a r1 = r4.kc
            if (r1 == 0) goto L32
            r1.onAdShow()
        L32:
            com.kwad.sdk.core.response.model.AdTemplate r1 = com.kwad.components.core.webview.jshandler.ab.b.f(r5)
            r2 = 0
            if (r1 == 0) goto L4b
            int r1 = r4.UN
            r0.cj(r1)
            com.kwad.components.core.t.b r1 = com.kwad.components.core.t.b.qj()
            com.kwad.sdk.core.response.model.AdTemplate r5 = com.kwad.components.core.webview.jshandler.ab.b.f(r5)
            r1.a(r5, r2, r0)
            goto Lc7
        L4b:
            com.kwad.components.core.t.b r5 = com.kwad.components.core.t.b.qj()
            com.kwad.sdk.core.webview.b r1 = r4.TL
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.getAdTemplate()
            r5.a(r1, r2, r0)
            return
        L59:
            int r0 = com.kwad.components.core.webview.jshandler.ab.b.d(r5)
            r1 = 2
            if (r0 != r1) goto L8f
            com.kwad.sdk.core.webview.b r0 = r4.TL
            com.kwad.sdk.widget.e r0 = r0.aye
            com.kwad.sdk.core.report.j r1 = new com.kwad.sdk.core.report.j
            r1.<init>()
            int r2 = r4.UN
            com.kwad.sdk.core.report.j r1 = r1.cj(r2)
            java.lang.String r2 = com.kwad.components.core.webview.jshandler.ab.b.e(r5)
            com.kwad.sdk.core.report.j r1 = r1.dt(r2)
            if (r0 == 0) goto L80
            com.kwad.sdk.utils.ac$a r0 = r0.getTouchCoords()
            r1.c(r0)
        L80:
            r4.a(r1)
            com.kwad.sdk.core.response.model.AdTemplate r5 = r4.c(r5)
            com.kwad.sdk.core.webview.b r0 = r4.TL
            org.json.JSONObject r0 = r0.mReportExtData
            com.kwad.sdk.core.report.a.a(r5, r1, r0)
            return
        L8f:
            int r0 = com.kwad.components.core.webview.jshandler.ab.b.d(r5)
            r1 = 12006(0x2ee6, float:1.6824E-41)
            if (r0 != r1) goto La9
            com.kwad.components.core.o.a r0 = com.kwad.components.core.o.a.pA()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.c(r5)
            int r5 = com.kwad.components.core.webview.jshandler.ab.b.g(r5)
            int r2 = r4.UN
            r0.a(r1, r5, r2)
            return
        La9:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.c(r5)
            int r1 = com.kwad.components.core.webview.jshandler.ab.b.d(r5)
            com.kwad.sdk.core.webview.b r2 = r4.TL
            org.json.JSONObject r2 = r2.mReportExtData
            java.lang.String r3 = com.kwad.components.core.webview.jshandler.ab.b.e(r5)
            com.kwad.sdk.core.report.a.a(r0, r1, r2, r3)
            com.kwad.components.core.webview.b.d.a r0 = com.kwad.components.core.webview.b.d.a.sb()
            java.lang.String r5 = com.kwad.components.core.webview.jshandler.ab.b.e(r5)
            r0.aQ(r5)
        Lc7:
            return
    }

    protected void a(com.kwad.sdk.core.report.j r1) {
            r0 = this;
            return
    }

    @Override
    public final void a(java.lang.String r4, com.kwad.sdk.core.webview.c.c r5) {
            r3 = this;
            com.kwad.sdk.core.webview.b r0 = r3.TL
            boolean r0 = r0.DY()
            r1 = -1
            if (r0 == 0) goto Le
            java.lang.String r0 = "native adTemplate is null"
            r5.onError(r1, r0)
        Le:
            com.kwad.components.core.webview.jshandler.ab$b r0 = new com.kwad.components.core.webview.jshandler.ab$b     // Catch: org.json.JSONException -> L23
            r0.<init>()     // Catch: org.json.JSONException -> L23
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L23
            r2.<init>(r4)     // Catch: org.json.JSONException -> L23
            r0.parseJson(r2)     // Catch: org.json.JSONException -> L23
            r3.a(r0)     // Catch: org.json.JSONException -> L23
            r4 = 0
            r5.a(r4)     // Catch: org.json.JSONException -> L23
            return
        L23:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r4)
            java.lang.String r4 = r4.getMessage()
            r5.onError(r1, r4)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "log"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}

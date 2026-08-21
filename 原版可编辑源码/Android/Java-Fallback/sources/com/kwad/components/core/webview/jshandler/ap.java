package com.kwad.components.core.webview.jshandler;

public final class ap implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.api.KsAppDownloadListener Tn;
    private com.kwad.sdk.core.webview.c.c Tv;
    private com.kwad.sdk.api.KsAppDownloadListener Vt;
    private final com.kwad.sdk.core.webview.b cE;
    private final com.kwad.components.core.e.d.c mApkDownloadHelper;


    public static final class a implements com.kwad.sdk.core.b {
        public float Vv;
        public long creativeId;
        public int status;
        public long totalBytes;

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
                r4 = this;
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                float r1 = r4.Vv
                java.lang.String r2 = "progress"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                int r1 = r4.status
                java.lang.String r2 = "status"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                long r1 = r4.totalBytes
                java.lang.String r3 = "totalBytes"
                com.kwad.sdk.utils.t.putValue(r0, r3, r1)
                long r1 = r4.creativeId
                java.lang.String r3 = "creativeId"
                com.kwad.sdk.utils.t.putValue(r0, r3, r1)
                return r0
        }
    }

    public ap(com.kwad.sdk.core.webview.b r1, com.kwad.components.core.e.d.c r2) {
            r0 = this;
            r0.<init>()
            r0.cE = r1
            r0.mApkDownloadHelper = r2
            return
    }

    public ap(com.kwad.sdk.core.webview.b r1, com.kwad.components.core.e.d.c r2, com.kwad.sdk.api.KsAppDownloadListener r3) {
            r0 = this;
            r0.<init>()
            r0.cE = r1
            r0.mApkDownloadHelper = r2
            r0.Vt = r3
            return
    }

    static com.kwad.sdk.api.KsAppDownloadListener a(com.kwad.components.core.webview.jshandler.ap r0) {
            com.kwad.sdk.api.KsAppDownloadListener r0 = r0.Vt
            return r0
    }

    private void a(int r2, float r3) {
            r1 = this;
            com.kwad.sdk.core.webview.c.c r0 = r1.Tv
            if (r0 == 0) goto L20
            com.kwad.components.core.webview.jshandler.ap$a r0 = new com.kwad.components.core.webview.jshandler.ap$a
            r0.<init>()
            r0.Vv = r3
            r0.status = r2
            com.kwad.sdk.core.webview.b r2 = r1.cE
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.getAdTemplate()
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            long r2 = r2.totalBytes
            r0.totalBytes = r2
            com.kwad.sdk.core.webview.c.c r2 = r1.Tv
            r2.a(r0)
        L20:
            return
    }

    static void a(com.kwad.components.core.webview.jshandler.ap r0, int r1, float r2) {
            r0.a(r1, r2)
            return
    }

    private com.kwad.sdk.api.KsAppDownloadListener rt() {
            r1 = this;
            com.kwad.components.core.webview.jshandler.ap$1 r0 = new com.kwad.components.core.webview.jshandler.ap$1
            r0.<init>(r1)
            return r0
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            com.kwad.sdk.core.webview.b r2 = r1.cE
            boolean r2 = r2.DY()
            if (r2 == 0) goto Lf
            r2 = -1
            java.lang.String r0 = "native photo is null"
            r3.onError(r2, r0)
            return
        Lf:
            r1.Tv = r3
            com.kwad.components.core.e.d.c r2 = r1.mApkDownloadHelper
            if (r2 == 0) goto L28
            com.kwad.sdk.api.KsAppDownloadListener r3 = r1.Tn
            if (r3 != 0) goto L25
            com.kwad.sdk.api.KsAppDownloadListener r2 = r1.rt()
            r1.Tn = r2
            com.kwad.components.core.e.d.c r3 = r1.mApkDownloadHelper
            r3.b(r2)
            return
        L25:
            r2.d(r3)
        L28:
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "registerProgressListener"
            return r0
    }

    @Override
    public final void onDestroy() {
            r3 = this;
            r0 = 0
            r3.Tv = r0
            com.kwad.components.core.e.d.c r1 = r3.mApkDownloadHelper
            if (r1 == 0) goto L10
            com.kwad.sdk.api.KsAppDownloadListener r2 = r3.Tn
            if (r2 == 0) goto L10
            r1.c(r2)
            r3.Tn = r0
        L10:
            return
    }
}

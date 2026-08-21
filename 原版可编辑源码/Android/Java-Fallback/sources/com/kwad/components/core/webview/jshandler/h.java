package com.kwad.components.core.webview.jshandler;

public final class h implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.components.core.e.d.c JG;
    private com.kwad.sdk.api.KsAppDownloadListener Tn;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private android.content.Context mContext;
    private com.kwad.sdk.core.webview.c.c nA;


    public static class a extends com.kwad.sdk.core.response.a.a {
        public java.lang.String TB;
        public java.lang.String packageName;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class b extends com.kwad.sdk.core.response.a.a {
        public int progress;
        public int status;

        public b() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public h(android.content.Context r1, com.kwad.sdk.core.response.model.AdTemplate r2) {
            r0 = this;
            r0.<init>()
            r0.mContext = r1
            r0.mAdTemplate = r2
            return
    }

    static void a(com.kwad.components.core.webview.jshandler.h r0, int r1, int r2) {
            r0.n(r1, r2)
            return
    }

    private synchronized void j(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            monitor-enter(r3)
            com.kwad.components.core.e.d.c r0 = new com.kwad.components.core.e.d.c     // Catch: java.lang.Throwable -> L1c
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate     // Catch: java.lang.Throwable -> L1c
            r2 = 0
            r0.<init>(r1, r2, r4, r5)     // Catch: java.lang.Throwable -> L1c
            r3.JG = r0     // Catch: java.lang.Throwable -> L1c
            com.kwad.sdk.api.KsAppDownloadListener r4 = r3.Tn     // Catch: java.lang.Throwable -> L1c
            if (r4 != 0) goto L1a
            com.kwad.sdk.api.KsAppDownloadListener r4 = r3.rt()     // Catch: java.lang.Throwable -> L1c
            r3.Tn = r4     // Catch: java.lang.Throwable -> L1c
            com.kwad.components.core.e.d.c r5 = r3.JG     // Catch: java.lang.Throwable -> L1c
            r5.b(r4)     // Catch: java.lang.Throwable -> L1c
        L1a:
            monitor-exit(r3)
            return
        L1c:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    private static boolean k(java.lang.String r0, java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lf
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto Ld
            goto Lf
        Ld:
            r0 = 0
            return r0
        Lf:
            r0 = 1
            return r0
    }

    private void n(int r2, int r3) {
            r1 = this;
            com.kwad.sdk.core.webview.c.c r0 = r1.nA
            if (r0 == 0) goto L12
            com.kwad.components.core.webview.jshandler.h$b r0 = new com.kwad.components.core.webview.jshandler.h$b
            r0.<init>()
            r0.status = r2
            r0.progress = r3
            com.kwad.sdk.core.webview.c.c r2 = r1.nA
            r2.a(r0)
        L12:
            return
    }

    private com.kwad.sdk.api.KsAppDownloadListener rt() {
            r1 = this;
            com.kwad.components.core.webview.jshandler.h$1 r0 = new com.kwad.components.core.webview.jshandler.h$1
            r0.<init>(r1)
            return r0
    }

    @Override
    public final void a(java.lang.String r4, com.kwad.sdk.core.webview.c.c r5) {
            r3 = this;
            r3.nA = r5
            com.kwad.components.core.webview.jshandler.h$a r0 = new com.kwad.components.core.webview.jshandler.h$a
            r0.<init>()
            r1 = -1
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L5c
            r2.<init>(r4)     // Catch: java.lang.Exception -> L5c
            r0.parseJson(r2)     // Catch: java.lang.Exception -> L5c
            java.lang.String r4 = r0.TB
            java.lang.String r2 = r0.packageName
            boolean r4 = k(r4, r2)
            if (r4 == 0) goto L20
            java.lang.String r4 = "param is empty"
            r5.onError(r1, r4)
            return
        L20:
            com.kwad.components.core.e.d.c r4 = r3.JG
            if (r4 != 0) goto L2b
            java.lang.String r4 = r0.TB
            java.lang.String r5 = r0.packageName
            r3.j(r4, r5)
        L2b:
            com.kwad.components.core.e.d.c r4 = r3.JG
            boolean r4 = r4.nF()
            if (r4 == 0) goto L34
            return
        L34:
            com.kwad.components.core.e.d.c r4 = r3.JG
            com.kwad.sdk.api.KsAppDownloadListener r5 = r3.Tn
            r4.d(r5)
            com.kwad.components.core.e.d.a$a r4 = new com.kwad.components.core.e.d.a$a
            android.content.Context r5 = r3.mContext
            r4.<init>(r5)
            r5 = 1
            com.kwad.components.core.e.d.a$a r4 = r4.am(r5)
            r5 = 0
            com.kwad.components.core.e.d.a$a r4 = r4.an(r5)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            com.kwad.components.core.e.d.a$a r4 = r4.P(r0)
            com.kwad.components.core.e.d.a$a r4 = r4.ap(r5)
            com.kwad.components.core.e.d.c r5 = r3.JG
            r5.m(r4)
            return
        L5c:
            java.lang.String r4 = "data parse error"
            r5.onError(r1, r4)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "installAppForDownload"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.nA = r0
            return
    }
}

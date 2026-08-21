package com.kwad.components.core.webview.a;

public final class a {
    private com.kwad.components.core.e.d.c JG;
    private android.webkit.WebView Ms;
    private boolean Td;
    private com.kwad.sdk.api.KsAppDownloadListener Tn;
    private int To;
    private int Tp;
    private com.kwad.sdk.core.webview.b cE;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;



    public static final class a extends com.kwad.sdk.core.response.a.a {
        public java.lang.String packageName;
        public java.lang.String url;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static final class b extends com.kwad.sdk.core.response.a.a {
        public int progress;
        public int status;

        public b() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public a(android.webkit.WebView r2, com.kwad.sdk.core.webview.b r3) {
            r1 = this;
            r1.<init>()
            r0 = -100
            r1.To = r0
            r0 = 0
            r1.Tp = r0
            r1.Ms = r2
            com.kwad.sdk.core.response.model.AdTemplate r2 = r3.getAdTemplate()
            r1.mAdTemplate = r2
            r1.cE = r3
            return
    }

    static void a(com.kwad.components.core.webview.a.a r0, int r1, int r2) {
            r0.n(r1, r2)
            return
    }

    static void a(com.kwad.components.core.webview.a.a r0, java.lang.String r1) {
            r0.aE(r1)
            return
    }

    private void aE(java.lang.String r3) {
            r2 = this;
            com.kwad.components.core.webview.a.a$a r0 = new com.kwad.components.core.webview.a.a$a     // Catch: org.json.JSONException -> L5a
            r0.<init>()     // Catch: org.json.JSONException -> L5a
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L5a
            r1.<init>(r3)     // Catch: org.json.JSONException -> L5a
            r0.parseJson(r1)     // Catch: org.json.JSONException -> L5a
            java.lang.String r3 = r0.url     // Catch: org.json.JSONException -> L5a
            java.lang.String r1 = r0.packageName     // Catch: org.json.JSONException -> L5a
            boolean r3 = k(r3, r1)     // Catch: org.json.JSONException -> L5a
            if (r3 == 0) goto L18
            return
        L18:
            com.kwad.components.core.e.d.c r3 = r2.JG     // Catch: org.json.JSONException -> L5a
            if (r3 != 0) goto L23
            java.lang.String r3 = r0.url     // Catch: org.json.JSONException -> L5a
            java.lang.String r0 = r0.packageName     // Catch: org.json.JSONException -> L5a
            r2.j(r3, r0)     // Catch: org.json.JSONException -> L5a
        L23:
            com.kwad.components.core.e.d.c r3 = r2.JG     // Catch: org.json.JSONException -> L5a
            boolean r3 = r3.nF()     // Catch: org.json.JSONException -> L5a
            if (r3 == 0) goto L2c
            return
        L2c:
            com.kwad.components.core.e.d.c r3 = r2.JG     // Catch: org.json.JSONException -> L5a
            com.kwad.sdk.api.KsAppDownloadListener r0 = r2.Tn     // Catch: org.json.JSONException -> L5a
            r3.d(r0)     // Catch: org.json.JSONException -> L5a
            com.kwad.components.core.e.d.a$a r3 = new com.kwad.components.core.e.d.a$a     // Catch: org.json.JSONException -> L5a
            com.kwad.sdk.core.webview.b r0 = r2.cE     // Catch: org.json.JSONException -> L5a
            android.webkit.WebView r0 = r0.Ms     // Catch: org.json.JSONException -> L5a
            android.content.Context r0 = r0.getContext()     // Catch: org.json.JSONException -> L5a
            r3.<init>(r0)     // Catch: org.json.JSONException -> L5a
            r0 = 1
            com.kwad.components.core.e.d.a$a r3 = r3.am(r0)     // Catch: org.json.JSONException -> L5a
            r0 = 0
            com.kwad.components.core.e.d.a$a r3 = r3.an(r0)     // Catch: org.json.JSONException -> L5a
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate     // Catch: org.json.JSONException -> L5a
            com.kwad.components.core.e.d.a$a r3 = r3.P(r1)     // Catch: org.json.JSONException -> L5a
            com.kwad.components.core.e.d.a$a r3 = r3.ap(r0)     // Catch: org.json.JSONException -> L5a
            com.kwad.components.core.e.d.c r0 = r2.JG     // Catch: org.json.JSONException -> L5a
            r0.m(r3)     // Catch: org.json.JSONException -> L5a
            return
        L5a:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r3)
            return
    }

    private void h(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = r1.Td
            if (r0 == 0) goto L5
            return
        L5:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Lc
            return
        Lc:
            android.webkit.WebView r0 = r1.Ms
            if (r0 != 0) goto L11
            return
        L11:
            com.kwad.sdk.utils.bp.a(r0, r2, r3)
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

    private void n(int r1, int r2) {
            r0 = this;
            r0.Tp = r2
            int r2 = r0.To
            if (r2 == r1) goto L19
            r0.To = r1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "onDownLoadStatusCallback"
            r0.h(r2, r1)
        L19:
            return
    }

    private com.kwad.sdk.api.KsAppDownloadListener rt() {
            r1 = this;
            com.kwad.components.core.webview.a.a$2 r0 = new com.kwad.components.core.webview.a.a$2
            r0.<init>(r1)
            return r0
    }

    public final void destroy() {
            r2 = this;
            r0 = 1
            r2.Td = r0
            com.kwad.components.core.e.d.c r0 = r2.JG
            if (r0 == 0) goto Lc
            com.kwad.sdk.api.KsAppDownloadListener r1 = r2.Tn
            r0.c(r1)
        Lc:
            return
    }

    @android.webkit.JavascriptInterface
    public final int getDownLoadStatus(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = k(r2, r3)
            if (r0 == 0) goto L8
            r2 = 0
            return r2
        L8:
            com.kwad.components.core.e.d.c r0 = r1.JG
            if (r0 != 0) goto Lf
            r1.j(r2, r3)
        Lf:
            com.kwad.components.core.e.d.c r2 = r1.JG
            int r2 = r2.nw()
            return r2
    }

    @android.webkit.JavascriptInterface
    public final int getProgress(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = k(r2, r3)
            if (r0 == 0) goto L8
            r2 = 0
            return r2
        L8:
            com.kwad.components.core.e.d.c r0 = r1.JG
            if (r0 != 0) goto Lf
            r1.j(r2, r3)
        Lf:
            int r2 = r1.Tp
            return r2
    }

    @android.webkit.JavascriptInterface
    public final void handleAdClick(java.lang.String r2) {
            r1 = this;
            com.kwad.components.core.webview.a.a$1 r0 = new com.kwad.components.core.webview.a.a$1
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
            return
    }
}

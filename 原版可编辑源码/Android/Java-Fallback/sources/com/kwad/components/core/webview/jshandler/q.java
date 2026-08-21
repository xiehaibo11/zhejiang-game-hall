package com.kwad.components.core.webview.jshandler;

public final class q implements com.kwad.sdk.core.webview.c.a {
    public q() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.commercial.model.WebViewCommercialMsg r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "handleH5Log actionType actionType"
            r0.<init>(r1)
            java.lang.String r1 = r2.category
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "WebCardLogHandler"
            com.kwad.sdk.core.e.c.d(r1, r0)
            java.lang.String r0 = r2.category
            com.kwad.sdk.core.report.KSLoggerReporter.a(r0, r2)
            return
    }

    @Override
    public final void a(java.lang.String r3, com.kwad.sdk.core.webview.c.c r4) {
            r2 = this;
            com.kwad.sdk.commercial.model.WebViewCommercialMsg r0 = new com.kwad.sdk.commercial.model.WebViewCommercialMsg     // Catch: org.json.JSONException -> L15
            r0.<init>()     // Catch: org.json.JSONException -> L15
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L15
            r1.<init>(r3)     // Catch: org.json.JSONException -> L15
            r0.parseJson(r1)     // Catch: org.json.JSONException -> L15
            a(r0)     // Catch: org.json.JSONException -> L15
            r3 = 0
            r4.a(r3)     // Catch: org.json.JSONException -> L15
            return
        L15:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r3)
            r0 = -1
            java.lang.String r3 = r3.getMessage()
            r4.onError(r0, r3)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "commercialLog"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}

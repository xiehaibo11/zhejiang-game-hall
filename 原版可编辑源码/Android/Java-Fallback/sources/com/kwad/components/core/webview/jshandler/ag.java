package com.kwad.components.core.webview.jshandler;

public final class ag implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private android.content.Context mContext;

    public ag(android.content.Context r1, com.kwad.sdk.core.response.model.AdTemplate r2) {
            r0 = this;
            r0.<init>()
            r0.mContext = r1
            r0.mAdTemplate = r2
            return
    }

    @Override
    public final void a(java.lang.String r7, com.kwad.sdk.core.webview.c.c r8) {
            r6 = this;
            com.kwad.components.core.webview.a.c r0 = new com.kwad.components.core.webview.a.c
            r0.<init>()
            android.content.Context r1 = r6.mContext
            r2 = 2
            r3 = -1
            if (r1 != 0) goto L15
            com.kwad.sdk.core.response.model.AdTemplate r1 = r6.mAdTemplate
            com.kwad.sdk.core.report.a.k(r1, r2)
            java.lang.String r1 = "context为空"
            r8.onError(r3, r1)
        L15:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L49
            r1.<init>(r7)     // Catch: java.lang.Exception -> L49
            r0.parseJson(r1)     // Catch: java.lang.Exception -> L49
            com.kwad.sdk.core.response.model.AdTemplate r7 = r6.mAdTemplate     // Catch: java.lang.Exception -> L49
            com.kwad.sdk.core.response.model.AdInfo r7 = com.kwad.sdk.core.response.b.d.cg(r7)     // Catch: java.lang.Exception -> L49
            boolean r1 = com.kwad.sdk.core.response.b.a.M(r7)     // Catch: java.lang.Exception -> L49
            if (r1 != 0) goto L43
            android.content.Context r1 = r6.mContext     // Catch: java.lang.Exception -> L49
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r7 = r7.adConversionInfo     // Catch: java.lang.Exception -> L49
            com.kwad.sdk.core.response.model.AdInfo$SmallAppJumpInfo r7 = r7.smallAppJumpInfo     // Catch: java.lang.Exception -> L49
            java.lang.String r7 = r7.mediaSmallAppId     // Catch: java.lang.Exception -> L49
            java.lang.String r4 = r0.Ts     // Catch: java.lang.Exception -> L49
            java.lang.String r0 = r0.Tt     // Catch: java.lang.Exception -> L49
            com.kwad.sdk.core.response.model.AdTemplate r5 = r6.mAdTemplate     // Catch: java.lang.Exception -> L49
            int r7 = com.kwad.components.core.e.d.e.a(r1, r7, r4, r0, r5)     // Catch: java.lang.Exception -> L49
            r0 = 1
            if (r7 != r0) goto L43
            r7 = 0
            r8.a(r7)     // Catch: java.lang.Exception -> L49
            goto L57
        L43:
            java.lang.String r7 = "跳转失败"
            r8.onError(r3, r7)     // Catch: java.lang.Exception -> L49
            return
        L49:
            r7 = move-exception
            com.kwad.sdk.core.response.model.AdTemplate r0 = r6.mAdTemplate
            com.kwad.sdk.core.report.a.k(r0, r2)
            java.lang.String r0 = "解析失败"
            r8.onError(r3, r0)
            com.kwad.sdk.core.e.c.printStackTrace(r7)
        L57:
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "openWechatMiniProgram"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}

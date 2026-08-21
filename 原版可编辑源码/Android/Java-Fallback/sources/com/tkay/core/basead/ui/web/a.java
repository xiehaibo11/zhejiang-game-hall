package com.tkay.core.basead.ui.web;

final class a extends android.webkit.WebViewClient {
    private com.tkay.core.basead.ui.web.WebLandPageActivity a;

    public a(com.tkay.core.basead.ui.web.WebLandPageActivity r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public final void onPageFinished(android.webkit.WebView r2, java.lang.String r3) {
            r1 = this;
            super.onPageFinished(r2, r3)
            com.tkay.core.basead.ui.web.WebLandPageActivity r0 = r1.a
            r0.a(r2, r3)
            return
    }

    @Override
    public final void onPageStarted(android.webkit.WebView r1, java.lang.String r2, android.graphics.Bitmap r3) {
            r0 = this;
            super.onPageStarted(r1, r2, r3)
            com.tkay.core.basead.ui.web.WebLandPageActivity r1 = r0.a
            com.tkay.core.basead.ui.web.WebProgressBarView r1 = r1.a()
            if (r1 == 0) goto L12
            r2 = 0
            r1.setVisibility(r2)
            r1.setProgress(r2)
        L12:
            return
    }

    @Override
    public final void onReceivedError(android.webkit.WebView r1, int r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            return
    }

    @Override
    public final boolean onRenderProcessGone(android.webkit.WebView r1, android.webkit.RenderProcessGoneDetail r2) {
            r0 = this;
            com.tkay.core.basead.ui.web.WebLandPageActivity r1 = r0.a
            r1.finish()
            r1 = 1
            return r1
    }

    @Override
    public final boolean shouldOverrideUrlLoading(android.webkit.WebView r5, java.lang.String r6) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 0
            if (r0 != 0) goto L59
            java.lang.String r0 = "about:blank"
            boolean r0 = r0.equals(r6)
            if (r0 == 0) goto L10
            goto L59
        L10:
            com.tkay.core.basead.ui.web.WebLandPageActivity r0 = r4.a
            if (r0 == 0) goto L24
            org.json.JSONArray r2 = r0.b
            if (r2 != 0) goto L1f
            org.json.JSONArray r2 = new org.json.JSONArray
            r2.<init>()
            r0.b = r2
        L1f:
            org.json.JSONArray r0 = r0.b
            r0.put(r6)
        L24:
            android.content.Context r0 = r5.getContext()
            com.tkay.core.common.f.an r0 = com.tkay.core.basead.a.a.a(r0, r6)
            boolean r2 = r0.m
            r3 = 1
            if (r2 == 0) goto L39
            com.tkay.core.basead.ui.web.WebLandPageActivity r5 = r4.a
            if (r5 == 0) goto L38
            r5.a(r0)
        L38:
            return r3
        L39:
            com.tkay.core.basead.ui.web.WebLandPageActivity r2 = r4.a
            if (r2 == 0) goto L40
            r2.a(r0)
        L40:
            com.tkay.core.common.f.an r0 = com.tkay.core.basead.a.a.a(r6)
            com.tkay.core.basead.ui.web.WebLandPageActivity r2 = r4.a
            if (r2 == 0) goto L4b
            r2.a(r0)
        L4b:
            java.lang.String r2 = r0.o
            boolean r6 = android.text.TextUtils.equals(r2, r6)
            if (r6 != 0) goto L59
            java.lang.String r6 = r0.o
            r5.loadUrl(r6)
            return r3
        L59:
            return r1
    }
}

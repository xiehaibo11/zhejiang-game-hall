package com.kwad.components.core.page;

public final class b extends com.kwad.components.core.page.recycle.a {
    private android.webkit.WebView Ms;
    private com.kwad.components.core.widget.FeedVideoView Mt;
    private android.widget.LinearLayout Mu;
    private android.widget.TextView Mv;
    private android.widget.ImageView Mw;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;



    static class a extends com.kwad.components.core.page.recycle.d {
        com.kwad.components.core.page.recycle.e Mz;
        com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
        private android.content.Context mContext;

        a(com.kwad.sdk.core.response.model.AdTemplate r1, android.content.Context r2, com.kwad.components.core.page.recycle.e r3) {
                r0 = this;
                r0.<init>()
                r0.mAdTemplate = r1
                r0.mContext = r2
                r0.Mz = r3
                return
        }

        @Override
        public final void a(com.kwad.components.core.page.recycle.c r1, int r2) {
                r0 = this;
                super.a(r1, r2)
                return
        }

        @Override
        public final com.kwad.components.core.page.recycle.c b(android.view.ViewGroup r4, int r5) {
                r3 = this;
                r0 = 1
                if (r5 != r0) goto L21
                android.content.Context r5 = r3.mContext
                int r0 = com.kwad.sdk.R.layout.ksad_datail_webview_container
                r1 = 0
                android.view.View r4 = com.kwad.sdk.m.l.a(r5, r0, r4, r1)
                com.kwad.sdk.mvp.Presenter r5 = new com.kwad.sdk.mvp.Presenter
                r5.<init>()
                com.kwad.components.core.page.b.b r0 = new com.kwad.components.core.page.b.b
                r0.<init>()
                r5.a(r0)
                com.kwad.components.core.page.recycle.c r0 = new com.kwad.components.core.page.recycle.c
                com.kwad.components.core.page.recycle.e r1 = r3.Mz
                r0.<init>(r4, r5, r1)
                return r0
            L21:
                if (r5 != 0) goto L41
                com.kwad.components.core.widget.FeedVideoView r5 = new com.kwad.components.core.widget.FeedVideoView
                android.content.Context r4 = r4.getContext()
                r5.<init>(r4)
                com.kwad.sdk.mvp.Presenter r4 = new com.kwad.sdk.mvp.Presenter
                r4.<init>()
                com.kwad.components.core.page.b.a r0 = new com.kwad.components.core.page.b.a
                r0.<init>()
                r4.a(r0)
                com.kwad.components.core.page.recycle.c r0 = new com.kwad.components.core.page.recycle.c
                com.kwad.components.core.page.recycle.e r1 = r3.Mz
                r0.<init>(r5, r4, r1)
                return r0
            L41:
                android.view.View r5 = new android.view.View
                android.content.Context r0 = r4.getContext()
                r5.<init>(r0)
                android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
                r1 = -1
                android.content.Context r4 = r4.getContext()
                r2 = 1115684864(0x42800000, float:64.0)
                int r4 = com.kwad.sdk.d.a.a.a(r4, r2)
                r0.<init>(r1, r4)
                r5.setLayoutParams(r0)
                com.kwad.components.core.page.recycle.c r4 = new com.kwad.components.core.page.recycle.c
                com.kwad.sdk.mvp.Presenter r0 = new com.kwad.sdk.mvp.Presenter
                r0.<init>()
                com.kwad.components.core.page.recycle.e r1 = r3.Mz
                r4.<init>(r5, r0, r1)
                return r4
        }

        @Override
        public final int getItemCount() {
                r1 = this;
                com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
                com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
                boolean r0 = com.kwad.sdk.core.response.b.a.ax(r0)
                if (r0 == 0) goto Le
                r0 = 3
                return r0
            Le:
                r0 = 2
                return r0
        }

        @Override
        public final int getItemViewType(int r1) {
                r0 = this;
                return r1
        }

        @Override
        public final void onBindViewHolder(android.support.v7.widget.RecyclerView.ViewHolder r1, int r2) {
                r0 = this;
                com.kwad.components.core.page.recycle.c r1 = (com.kwad.components.core.page.recycle.c) r1
                r0.a(r1, r2)
                return
        }
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.components.core.page.b R(com.kwad.sdk.core.response.model.AdTemplate r4) {
            com.kwad.components.core.page.b r0 = new com.kwad.components.core.page.b
            r0.<init>()
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            org.json.JSONObject r2 = r4.toJson()
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "key_photo"
            r1.putString(r3, r2)
            boolean r4 = r4.mPvReported
            java.lang.String r2 = "key_report"
            r1.putBoolean(r2, r4)
            r0.setArguments(r1)
            return r0
    }

    static android.webkit.WebView a(com.kwad.components.core.page.b r0, android.webkit.WebView r1) {
            r0.Ms = r1
            return r1
    }

    static android.widget.LinearLayout a(com.kwad.components.core.page.b r0) {
            android.widget.LinearLayout r0 = r0.Mu
            return r0
    }

    static com.kwad.components.core.widget.FeedVideoView a(com.kwad.components.core.page.b r0, com.kwad.components.core.widget.FeedVideoView r1) {
            r0.Mt = r1
            return r1
    }

    static void a(com.kwad.components.core.page.b r0, android.view.View r1) {
            r0.v(r1)
            return
    }

    private void v(android.view.View r3) {
            r2 = this;
            int r0 = com.kwad.sdk.R.id.ksad_web_tip_bar
            android.view.View r0 = r3.findViewById(r0)
            android.widget.LinearLayout r0 = (android.widget.LinearLayout) r0
            r2.Mu = r0
            int r0 = com.kwad.sdk.R.id.ksad_web_tip_bar_textview
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.Mv = r0
            int r0 = com.kwad.sdk.R.id.ksad_web_tip_close_btn
            android.view.View r3 = r3.findViewById(r0)
            android.widget.ImageView r3 = (android.widget.ImageView) r3
            r2.Mw = r3
            com.kwad.components.core.page.b$1 r0 = new com.kwad.components.core.page.b$1
            r0.<init>(r2)
            r3.setOnClickListener(r0)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)
            boolean r0 = com.kwad.sdk.core.response.b.a.bn(r3)
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.bj(r3)
            if (r0 == 0) goto L48
            android.widget.LinearLayout r0 = r2.Mu
            r1 = 0
            r0.setVisibility(r1)
            android.widget.TextView r0 = r2.Mv
            r0.setText(r3)
            android.widget.TextView r3 = r2.Mv
            r0 = 1
            r3.setSelected(r0)
            return
        L48:
            android.widget.LinearLayout r3 = r2.Mu
            r0 = 8
            r3.setVisibility(r0)
            return
    }

    @Override
    public final com.kwad.components.core.page.recycle.d a(android.support.v7.widget.RecyclerView r4) {
            r3 = this;
            com.kwad.components.core.page.recycle.e r0 = new com.kwad.components.core.page.recycle.e
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.components.core.e.d.c r2 = r3.mApkDownloadHelper
            r0.<init>(r1, r2, r4)
            com.kwad.components.core.page.b$a r1 = new com.kwad.components.core.page.b$a
            com.kwad.sdk.core.response.model.AdTemplate r2 = r3.mAdTemplate
            android.content.Context r4 = r4.getContext()
            r1.<init>(r2, r4, r0)
            return r1
    }

    @Override
    public final boolean bP() {
            r1 = this;
            android.webkit.WebView r0 = r1.Ms
            if (r0 == 0) goto L11
            boolean r0 = r0.canGoBack()
            if (r0 == 0) goto L11
            android.webkit.WebView r0 = r1.Ms
            r0.goBack()
            r0 = 1
            return r0
        L11:
            com.kwad.components.core.widget.FeedVideoView r0 = r1.Mt
            if (r0 == 0) goto L1a
            boolean r0 = r0.ss()
            return r0
        L1a:
            r0 = 0
            return r0
    }

    @Override
    public final void onCreate(android.os.Bundle r4) {
            r3 = this;
            super.onCreate(r4)
            android.os.Bundle r4 = r3.getArguments()
            java.lang.String r0 = "key_photo"
            java.lang.String r4 = r4.getString(r0)
            com.kwad.sdk.core.response.model.AdTemplate r0 = new com.kwad.sdk.core.response.model.AdTemplate
            r0.<init>()
            if (r4 == 0) goto L21
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1d
            r1.<init>(r4)     // Catch: org.json.JSONException -> L1d
            r0.parseJson(r1)     // Catch: org.json.JSONException -> L1d
            goto L21
        L1d:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r4)
        L21:
            r3.mAdTemplate = r0
            android.os.Bundle r4 = r3.getArguments()
            r1 = 0
            java.lang.String r2 = "key_report"
            boolean r4 = r4.getBoolean(r2, r1)
            r0.mPvReported = r4
            com.kwad.sdk.core.response.model.AdTemplate r4 = r3.mAdTemplate
            r0 = 1
            r4.mAdWebVideoPageShowing = r0
            return
    }

    @Override
    public final void onDestroy() {
            r2 = this;
            super.onDestroy()
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            if (r0 == 0) goto La
            r1 = 0
            r0.mAdWebVideoPageShowing = r1
        La:
            return
    }

    @Override
    public final void onViewCreated(android.view.View r2, android.os.Bundle r3) {
            r1 = this;
            super.onViewCreated(r2, r3)
            android.support.v7.widget.RecyclerView r2 = r1.pd()
            com.kwad.components.core.page.recycle.DetailWebRecycleView r2 = (com.kwad.components.core.page.recycle.DetailWebRecycleView) r2
            r3 = 1
            r2.setInterceptRequestFocusForWeb(r3)
            android.view.ViewTreeObserver r3 = r2.getViewTreeObserver()
            com.kwad.components.core.page.b$2 r0 = new com.kwad.components.core.page.b$2
            r0.<init>(r1, r2)
            r3.addOnGlobalLayoutListener(r0)
            return
    }

    @Override
    public final int ov() {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_detail_webview
            return r0
    }

    public final void setApkDownloadHelper(com.kwad.components.core.e.d.c r1) {
            r0 = this;
            r0.mApkDownloadHelper = r1
            return
    }
}

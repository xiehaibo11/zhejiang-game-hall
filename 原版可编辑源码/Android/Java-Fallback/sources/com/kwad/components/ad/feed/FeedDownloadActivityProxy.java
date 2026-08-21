package com.kwad.components.ad.feed;

@com.kwad.sdk.api.core.KsAdSdkDynamicImpl(com.kwad.sdk.api.proxy.app.FeedDownloadActivity.class)
public class FeedDownloadActivityProxy extends com.kwad.components.core.n.c implements android.view.View.OnClickListener {
    private static final boolean DEBUG = false;
    public static final java.lang.String KEY_AD_DATA = "key_template_json";
    private static final java.lang.String TAG = "FeedDownloadActivity";
    private static com.kwad.components.core.widget.b.a sInnerAdInteractionListener;
    private com.kwad.sdk.core.view.KsAdContainer mAdContainer;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private com.kwad.components.ad.widget.tailframe.appbar.TailFrameBarAppPortraitVertical mAppTailFrameView;
    private com.kwad.components.core.page.widget.TextProgressBar mProgressBarTv;



    public FeedDownloadActivityProxy() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.kwad.sdk.core.response.model.AdInfo access$000(com.kwad.components.ad.feed.FeedDownloadActivityProxy r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static com.kwad.components.ad.widget.tailframe.appbar.TailFrameBarAppPortraitVertical access$100(com.kwad.components.ad.feed.FeedDownloadActivityProxy r0) {
            com.kwad.components.ad.widget.tailframe.appbar.TailFrameBarAppPortraitVertical r0 = r0.mAppTailFrameView
            return r0
    }

    static com.kwad.components.core.page.widget.TextProgressBar access$200(com.kwad.components.ad.feed.FeedDownloadActivityProxy r0) {
            com.kwad.components.core.page.widget.TextProgressBar r0 = r0.mProgressBarTv
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate access$300(com.kwad.components.ad.feed.FeedDownloadActivityProxy r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static void access$400(com.kwad.components.ad.feed.FeedDownloadActivityProxy r0) {
            r0.notifyAdClick()
            return
    }

    private void bindDownloadListener() {
            r4 = this;
            com.kwad.components.core.e.d.c r0 = new com.kwad.components.core.e.d.c
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            com.kwad.components.ad.feed.FeedDownloadActivityProxy$1 r2 = new com.kwad.components.ad.feed.FeedDownloadActivityProxy$1
            r2.<init>(r4)
            r3 = 0
            r0.<init>(r1, r3, r2)
            r4.mApkDownloadHelper = r0
            return
    }

    public static void launch(android.content.Context r2, com.kwad.sdk.core.response.model.AdTemplate r3, com.kwad.components.core.widget.b.a r4) {
            java.lang.Class<com.kwad.sdk.api.proxy.app.FeedDownloadActivity> r0 = com.kwad.sdk.api.proxy.app.FeedDownloadActivity.class
            java.lang.Class<com.kwad.components.ad.feed.FeedDownloadActivityProxy> r1 = com.kwad.components.ad.feed.FeedDownloadActivityProxy.class
            com.kwad.sdk.service.b.a(r0, r1)
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.kwad.sdk.api.proxy.app.FeedDownloadActivity> r1 = com.kwad.sdk.api.proxy.app.FeedDownloadActivity.class
            r0.<init>(r2, r1)
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r0.setFlags(r1)
            org.json.JSONObject r3 = r3.toJson()
            java.lang.String r3 = r3.toString()
            java.lang.String r1 = "key_template_json"
            r0.putExtra(r1, r3)
            com.kwad.components.ad.feed.FeedDownloadActivityProxy.sInnerAdInteractionListener = r4
            r2.startActivity(r0)
            return
    }

    private void notifyAdClick() {
            r3 = this;
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            com.kwad.sdk.core.view.KsAdContainer r1 = r3.mAdContainer
            com.kwad.sdk.utils.ac$a r1 = r1.getTouchCoords()
            com.kwad.sdk.core.report.j r0 = r0.c(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            r2 = 0
            com.kwad.sdk.core.report.a.a(r1, r0, r2)
            com.kwad.components.core.widget.b$a r0 = com.kwad.components.ad.feed.FeedDownloadActivityProxy.sInnerAdInteractionListener
            if (r0 == 0) goto L1c
            r0.onAdClicked()
        L1c:
            return
    }

    public static void register() {
            java.lang.Class<com.kwad.sdk.api.proxy.app.FeedDownloadActivity> r0 = com.kwad.sdk.api.proxy.app.FeedDownloadActivity.class
            java.lang.Class<com.kwad.components.ad.feed.FeedDownloadActivityProxy> r1 = com.kwad.components.ad.feed.FeedDownloadActivityProxy.class
            com.kwad.sdk.service.b.a(r0, r1)
            return
    }

    @Override
    public boolean checkIntentData(android.content.Intent r3) {
            r2 = this;
            android.content.Intent r3 = r2.getIntent()     // Catch: java.lang.Throwable -> L1a
            java.lang.String r0 = "key_template_json"
            java.lang.String r3 = r3.getStringExtra(r0)     // Catch: java.lang.Throwable -> L1a
            com.kwad.sdk.core.response.model.AdTemplate r0 = new com.kwad.sdk.core.response.model.AdTemplate     // Catch: java.lang.Throwable -> L1a
            r0.<init>()     // Catch: java.lang.Throwable -> L1a
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1a
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L1a
            r0.parseJson(r1)     // Catch: java.lang.Throwable -> L1a
            r2.mAdTemplate = r0     // Catch: java.lang.Throwable -> L1a
            goto L1e
        L1a:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r3)
        L1e:
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            if (r3 == 0) goto L24
            r3 = 1
            return r3
        L24:
            r3 = 0
            return r3
    }

    public void destroy() {
            r2 = this;
            com.kwad.components.ad.widget.tailframe.appbar.TailFrameBarAppPortraitVertical r0 = r2.mAppTailFrameView
            if (r0 == 0) goto Le
            r0.kq()
            com.kwad.components.ad.widget.tailframe.appbar.TailFrameBarAppPortraitVertical r0 = r2.mAppTailFrameView
            r1 = 8
            r0.setVisibility(r1)
        Le:
            return
    }

    @Override
    public int getLayoutId() {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_activity_feed_download
            return r0
    }

    @Override
    public java.lang.String getPageName() {
            r1 = this;
            java.lang.String r0 = "FeedDownloadActivityProxy"
            return r0
    }

    @Override
    public void initData() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r1.mAdInfo = r0
            return
    }

    @Override
    public void initView() {
            r2 = this;
            int r0 = com.kwad.sdk.R.id.ksad_container
            android.view.View r0 = r2.findViewById(r0)
            com.kwad.sdk.core.view.KsAdContainer r0 = (com.kwad.sdk.core.view.KsAdContainer) r0
            r2.mAdContainer = r0
            r0.setOnClickListener(r2)
            int r0 = com.kwad.sdk.R.id.ksad_download_container
            android.view.View r0 = r2.findViewById(r0)
            com.kwad.components.ad.widget.tailframe.appbar.TailFrameBarAppPortraitVertical r0 = (com.kwad.components.ad.widget.tailframe.appbar.TailFrameBarAppPortraitVertical) r0
            r2.mAppTailFrameView = r0
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.b(r1)
            com.kwad.components.ad.widget.tailframe.appbar.TailFrameBarAppPortraitVertical r0 = r2.mAppTailFrameView
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            r0.z(r1)
            com.kwad.components.ad.widget.tailframe.appbar.TailFrameBarAppPortraitVertical r0 = r2.mAppTailFrameView
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.components.ad.widget.tailframe.appbar.TailFrameBarAppPortraitVertical r0 = r2.mAppTailFrameView
            com.kwad.components.core.page.widget.TextProgressBar r0 = r0.getTextProgressBar()
            r2.mProgressBarTv = r0
            r0.setOnClickListener(r2)
            r2.bindDownloadListener()
            return
    }

    @Override
    public void onClick(android.view.View r5) {
            r4 = this;
            com.kwad.components.core.page.widget.TextProgressBar r0 = r4.mProgressBarTv
            r1 = 1
            if (r5 != r0) goto L7
            r0 = r1
            goto L8
        L7:
            r0 = 2
        L8:
            com.kwad.components.core.e.d.a$a r2 = new com.kwad.components.core.e.d.a$a
            android.content.Context r3 = r5.getContext()
            r2.<init>(r3)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r4.mAdTemplate
            com.kwad.components.core.e.d.a$a r2 = r2.P(r3)
            com.kwad.components.core.e.d.c r3 = r4.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r2 = r2.b(r3)
            com.kwad.components.core.e.d.a$a r0 = r2.ao(r0)
            com.kwad.components.core.page.widget.TextProgressBar r2 = r4.mProgressBarTv
            if (r5 != r2) goto L26
            goto L27
        L26:
            r1 = 0
        L27:
            com.kwad.components.core.e.d.a$a r5 = r0.am(r1)
            com.kwad.components.ad.feed.FeedDownloadActivityProxy$2 r0 = new com.kwad.components.ad.feed.FeedDownloadActivityProxy$2
            r0.<init>(r4)
            com.kwad.components.core.e.d.a$a r5 = r5.a(r0)
            com.kwad.components.core.e.d.a.a(r5)
            return
    }

    @Override
    public void onDestroy() {
            r0 = this;
            super.onDestroy()
            r0.destroy()
            return
    }

    @Override
    public void onPreCreate(android.os.Bundle r2) {
            r1 = this;
            super.onPreCreate(r2)
            android.content.Intent r2 = r1.getIntent()     // Catch: java.lang.Throwable -> Lc
            java.lang.String r0 = "key_template"
            r2.removeExtra(r0)     // Catch: java.lang.Throwable -> Lc
        Lc:
            return
    }
}

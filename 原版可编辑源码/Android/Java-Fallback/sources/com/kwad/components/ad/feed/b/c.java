package com.kwad.components.ad.feed.b;

public abstract class c extends com.kwad.components.ad.feed.b.a implements android.view.View.OnClickListener, com.kwad.sdk.widget.c {
    private java.util.List<java.lang.Integer> cr;
    private volatile boolean cs;
    private com.kwad.sdk.widget.j ct;
    private android.widget.TextView dC;
    private com.kwad.sdk.api.KsAdVideoPlayConfig dJ;
    private android.widget.ImageView du;
    private android.widget.TextView dv;
    private boolean eA;
    private android.widget.TextView eB;
    private final com.kwad.components.core.video.a.a eC;
    private com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView eD;
    private com.kwad.components.core.offline.api.a.a eE;
    private com.kwad.components.offline.api.core.adlive.IAdLivePlayModule eF;
    private boolean eG;
    private android.view.View eH;
    private com.kwad.components.core.j.a.b eI;
    private final com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener eJ;
    private com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener eK;
    private com.kwad.components.core.video.a.b eL;
    private android.widget.TextView ek;
    private android.widget.ImageView em;
    private android.widget.TextView eo;
    private android.widget.TextView ep;
    private android.view.View eq;
    private com.kwad.components.ad.widget.DownloadProgressView er;
    private com.kwad.sdk.widget.KSRelativeLayout ev;
    private android.widget.ImageView ew;
    private com.kwad.sdk.core.video.videoview.a ex;
    private com.kwad.components.core.video.e ey;
    private com.kwad.components.ad.feed.b.d ez;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private boolean mIsAudioEnable;
    private com.kwad.components.core.widget.KsLogoView mLogoView;











    public c(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.mIsAudioEnable = r1
            r0.cs = r1
            com.kwad.components.ad.feed.b.c$1 r1 = new com.kwad.components.ad.feed.b.c$1
            r1.<init>(r0)
            r0.ct = r1
            com.kwad.components.ad.feed.b.c$3 r1 = new com.kwad.components.ad.feed.b.c$3
            r1.<init>(r0)
            r0.eC = r1
            com.kwad.components.ad.feed.b.c$7 r1 = new com.kwad.components.ad.feed.b.c$7
            r1.<init>(r0)
            r0.eJ = r1
            com.kwad.components.ad.feed.b.c$8 r1 = new com.kwad.components.ad.feed.b.c$8
            r1.<init>(r0)
            r0.eK = r1
            com.kwad.components.ad.feed.b.c$10 r1 = new com.kwad.components.ad.feed.b.c$10
            r1.<init>(r0)
            r0.eL = r1
            return
    }

    static com.kwad.components.ad.feed.b.d a(com.kwad.components.ad.feed.b.c r0, com.kwad.components.ad.feed.b.d r1) {
            r0.ez = r1
            return r1
    }

    static com.kwad.components.offline.api.core.adlive.IAdLivePlayModule a(com.kwad.components.ad.feed.b.c r0, com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r1) {
            r0.eF = r1
            return r1
    }

    static com.kwad.sdk.core.response.model.AdTemplate a(com.kwad.components.ad.feed.b.c r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static void a(com.kwad.components.ad.feed.b.c r0, int r1) {
            r0.aK(r1)
            return
    }

    static void a(com.kwad.components.ad.feed.b.c r0, long r1) {
            r0.c(r1)
            return
    }

    static void a(com.kwad.components.ad.feed.b.c r0, android.view.View r1) {
            r0.c(r1)
            return
    }

    private void a(com.kwad.sdk.core.video.videoview.a r5, boolean r6, int r7) {
            r4 = this;
            if (r5 != 0) goto L6
            boolean r5 = r4.eG
            if (r5 == 0) goto L68
        L6:
            com.kwad.sdk.core.response.model.AdInfo r5 = r4.mAdInfo
            java.lang.String r5 = com.kwad.sdk.core.response.b.a.F(r5)
            boolean r0 = r4.eG
            if (r0 != 0) goto L16
            com.kwad.components.core.video.e r0 = r4.ey
            r1 = 0
            r0.setAutoRelease(r1)
        L16:
            r0 = 1
            if (r6 == 0) goto L1b
            r1 = r0
            goto L1c
        L1b:
            r1 = 2
        L1c:
            boolean r2 = r4.eG
            if (r2 != 0) goto L29
            com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache r2 = com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache.getInstance()
            com.kwad.sdk.core.video.videoview.a r3 = r4.ex
            r2.a(r5, r3)
        L29:
            r4.aY()
            com.kwad.components.core.e.d.a$a r5 = new com.kwad.components.core.e.d.a$a
            android.content.Context r2 = r4.getContext()
            r5.<init>(r2)
            T extends com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
            com.kwad.components.core.e.d.a$a r5 = r5.P(r2)
            com.kwad.components.core.e.d.c r2 = r4.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r5 = r5.b(r2)
            com.kwad.components.core.e.d.a$a r5 = r5.am(r6)
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r6 = r4.eF
            if (r6 != 0) goto L4c
            r2 = 0
            goto L50
        L4c:
            long r2 = r6.getPlayDuration()
        L50:
            com.kwad.components.core.e.d.a$a r5 = r5.s(r2)
            com.kwad.components.core.e.d.a$a r5 = r5.ao(r1)
            com.kwad.components.core.e.d.a$a r5 = r5.aq(r0)
            com.kwad.components.ad.feed.b.c$9 r6 = new com.kwad.components.ad.feed.b.c$9
            r6.<init>(r4, r7)
            com.kwad.components.core.e.d.a$a r5 = r5.a(r6)
            com.kwad.components.core.e.d.a.a(r5)
        L68:
            return
    }

    static boolean a(com.kwad.components.ad.feed.b.c r0, boolean r1) {
            boolean r0 = r0.g(r1)
            return r0
    }

    static void b(com.kwad.components.ad.feed.b.c r0) {
            r0.eb()
            return
    }

    static boolean b(com.kwad.components.ad.feed.b.c r0, boolean r1) {
            r1 = 0
            r0.eA = r1
            return r1
    }

    private void bb() {
            r3 = this;
            int r0 = com.kwad.sdk.R.id.ksad_ad_h5_container
            android.view.View r0 = r3.findViewById(r0)
            r1 = 0
            r0.setVisibility(r1)
            int r0 = com.kwad.sdk.R.id.ksad_ad_download_container
            android.view.View r0 = r3.findViewById(r0)
            r1 = 8
            r0.setVisibility(r1)
            int r0 = com.kwad.sdk.R.id.ksad_h5_desc
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.ep = r0
            int r0 = com.kwad.sdk.R.id.ksad_h5_open_btn
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.dC = r0
            int r0 = com.kwad.sdk.R.id.ksad_h5_open_cover
            android.view.View r0 = r3.findViewById(r0)
            r3.eq = r0
            android.widget.TextView r0 = r3.ep
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            java.lang.String r1 = com.kwad.components.ad.feed.f.c(r1)
            r0.setText(r1)
            android.widget.TextView r0 = r3.dC
            com.kwad.sdk.core.response.model.AdInfo r1 = r3.mAdInfo
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.aw(r1)
            r0.setText(r1)
            android.view.View r0 = r3.eq
            r0.setOnClickListener(r3)
            android.widget.TextView r0 = r3.ep
            r0.setOnClickListener(r3)
            android.widget.TextView r0 = r3.dC
            r0.setOnClickListener(r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.content.Context r1 = r3.getContext()
            android.view.View r2 = r3.eq
            r0.<init>(r1, r2, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.content.Context r1 = r3.getContext()
            android.widget.TextView r2 = r3.ep
            r0.<init>(r1, r2, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.content.Context r1 = r3.getContext()
            android.widget.TextView r2 = r3.dC
            r0.<init>(r1, r2, r3)
            return
    }

    private void bc() {
            r5 = this;
            int r0 = com.kwad.sdk.R.id.ksad_ad_download_container
            android.view.View r0 = r5.findViewById(r0)
            r1 = 0
            r0.setVisibility(r1)
            int r0 = com.kwad.sdk.R.id.ksad_ad_h5_container
            android.view.View r0 = r5.findViewById(r0)
            r2 = 8
            r0.setVisibility(r2)
            int r0 = com.kwad.sdk.R.id.ksad_app_icon
            android.view.View r0 = r5.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r5.du = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_title
            android.view.View r0 = r5.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r5.dv = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_desc
            android.view.View r0 = r5.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r5.eo = r0
            r3 = 3
            android.view.View[] r3 = new android.view.View[r3]
            android.widget.ImageView r4 = r5.du
            r3[r1] = r4
            android.widget.TextView r1 = r5.dv
            r4 = 1
            r3[r4] = r1
            r1 = 2
            r3[r1] = r0
            com.kwad.sdk.d.a.a.a(r5, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.content.Context r1 = r5.getContext()
            android.widget.ImageView r3 = r5.du
            r0.<init>(r1, r3, r5)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.content.Context r1 = r5.getContext()
            android.widget.TextView r3 = r5.dv
            r0.<init>(r1, r3, r5)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.content.Context r1 = r5.getContext()
            android.widget.TextView r3 = r5.eo
            r0.<init>(r1, r3, r5)
            android.widget.TextView r0 = r5.dv
            com.kwad.sdk.core.response.model.AdInfo r1 = r5.mAdInfo
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.ao(r1)
            r0.setText(r1)
            android.widget.ImageView r0 = r5.du
            int r1 = com.kwad.sdk.R.drawable.ksad_default_app_icon
            r0.setImageResource(r1)
            android.widget.ImageView r0 = r5.du
            com.kwad.sdk.core.response.model.AdInfo r1 = r5.mAdInfo
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.bQ(r1)
            T extends com.kwad.sdk.core.response.model.AdTemplate r3 = r5.mAdTemplate
            com.kwad.sdk.core.imageloader.KSImageLoader.loadAppIcon(r0, r1, r3, r2)
            android.widget.TextView r0 = r5.eo
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            java.lang.String r1 = com.kwad.components.ad.feed.f.c(r1)
            r0.setText(r1)
            r5.aZ()
            com.kwad.components.ad.widget.DownloadProgressView r0 = r5.er
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            r0.H(r1)
            com.kwad.components.ad.widget.DownloadProgressView r0 = r5.er
            r0.setOnClickListener(r5)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.content.Context r1 = r5.getContext()
            com.kwad.components.ad.widget.DownloadProgressView r2 = r5.er
            r0.<init>(r1, r2, r5)
            com.kwad.components.core.e.d.c r0 = new com.kwad.components.core.e.d.c
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            com.kwad.components.ad.widget.DownloadProgressView r2 = r5.er
            com.kwad.sdk.api.KsAppDownloadListener r2 = r2.getAppDownloadListener()
            r3 = 0
            r0.<init>(r1, r3, r2)
            r5.mApkDownloadHelper = r0
            com.kwad.components.ad.widget.DownloadProgressView r1 = r5.er
            com.kwad.sdk.api.KsAppDownloadListener r1 = r1.getAppDownloadListener()
            r0.d(r1)
            com.kwad.components.core.e.d.c r0 = r5.mApkDownloadHelper
            r0.setOnShowListener(r5)
            com.kwad.components.core.e.d.c r0 = r5.mApkDownloadHelper
            r0.setOnDismissListener(r5)
            return
    }

    private void be() {
            r1 = this;
            java.lang.Class<com.kwad.components.core.offline.api.a.a> r0 = com.kwad.components.core.offline.api.a.a.class
            com.kwad.sdk.components.a r0 = com.kwad.sdk.components.c.f(r0)
            com.kwad.components.core.offline.api.a.a r0 = (com.kwad.components.core.offline.api.a.a) r0
            r1.eE = r0
            if (r0 == 0) goto L1d
            boolean r0 = r0.hasLiveCompoReady()
            if (r0 == 0) goto L1d
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.cw(r0)
            if (r0 == 0) goto L1d
            r0 = 1
            r1.eG = r0
        L1d:
            return
    }

    private boolean bf() {
            r5 = this;
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r0 = r5.eD
            r1 = 0
            if (r0 == 0) goto L86
            android.view.View r0 = r0.getView()
            if (r0 == 0) goto L86
            boolean r0 = r5.eG
            if (r0 == 0) goto L86
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r0 = r5.eD
            android.view.View r0 = r0.getView()
            android.view.ViewParent r0 = r0.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            com.kwad.sdk.widget.KSRelativeLayout r2 = r5.ev
            if (r0 == r2) goto L7f
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r2 = r5.eD
            android.view.View r2 = r2.getView()
            r0.removeView(r2)
            com.kwad.sdk.widget.KSRelativeLayout r0 = r5.ev
            java.lang.Object r0 = r0.getTag()
            if (r0 == 0) goto L41
            com.kwad.sdk.widget.KSRelativeLayout r0 = r5.ev
            java.lang.Object r2 = r0.getTag()
            android.view.View r2 = (android.view.View) r2
            r0.removeView(r2)
            com.kwad.sdk.widget.KSRelativeLayout r0 = r5.ev
            r2 = 0
            r0.setTag(r2)
        L41:
            com.kwad.sdk.widget.KSRelativeLayout r0 = r5.ev
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r2 = r5.eD
            android.view.View r2 = r2.getView()
            r0.addView(r2)
            com.kwad.sdk.widget.KSRelativeLayout r0 = r5.ev
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r2 = r5.eD
            android.view.View r2 = r2.getView()
            r0.setTag(r2)
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r5.eF
            boolean r2 = r5.mIsAudioEnable
            r0.setAudioEnabled(r2, r1)
            com.kwad.components.core.offline.api.a.a r0 = r5.eE
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r1 = r5.eD
            com.kwad.sdk.KsAdSDKImpl r2 = com.kwad.sdk.KsAdSDKImpl.get()
            java.lang.String r2 = r2.getAppId()
            com.kwad.sdk.core.response.model.AdInfo r3 = r5.mAdInfo
            long r3 = com.kwad.sdk.core.response.b.a.bR(r3)
            java.lang.String r3 = java.lang.String.valueOf(r3)
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r0.getAdLivePlayModule(r1, r2, r3)
            r5.eF = r0
            com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener r1 = r5.eJ
            r0.registerAdLivePlayStateListener(r1)
        L7f:
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r5.eF
            r0.onResume()
            r0 = 1
            return r0
        L86:
            return r1
    }

    private com.kwad.components.offline.api.core.adlive.IAdLivePlayModule bg() {
            r5 = this;
            r5.bh()
            com.kwad.components.core.offline.api.a.a r0 = r5.eE
            android.content.Context r1 = r5.mContext
            r2 = 3
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r0 = r0.getView(r1, r2)
            r5.eD = r0
            com.kwad.components.core.offline.api.a.a r1 = r5.eE
            com.kwad.sdk.api.SdkConfig r2 = com.kwad.sdk.service.ServiceProvider.HE()
            java.lang.String r2 = r2.appId
            com.kwad.sdk.core.response.model.AdInfo r3 = r5.mAdInfo
            long r3 = com.kwad.sdk.core.response.b.a.bR(r3)
            java.lang.String r3 = java.lang.String.valueOf(r3)
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r1.getAdLivePlayModule(r0, r2, r3)
            boolean r1 = r5.mIsAudioEnable
            boolean r1 = r5.g(r1)
            r2 = 0
            r0.setAudioEnabled(r1, r2)
            com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener r1 = r5.eJ
            r0.registerAdLivePlayStateListener(r1)
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r1 = r5.eD
            android.view.View r1 = r1.getView()
            com.kwad.sdk.widget.KSRelativeLayout r2 = r5.ev
            java.lang.Object r2 = r2.getTag()
            if (r2 == 0) goto L52
            com.kwad.sdk.widget.KSRelativeLayout r2 = r5.ev
            java.lang.Object r3 = r2.getTag()
            android.view.View r3 = (android.view.View) r3
            r2.removeView(r3)
            com.kwad.sdk.widget.KSRelativeLayout r2 = r5.ev
            r3 = 0
            r2.setTag(r3)
        L52:
            com.kwad.sdk.widget.KSRelativeLayout r2 = r5.ev
            r2.addView(r1)
            com.kwad.sdk.widget.KSRelativeLayout r2 = r5.ev
            r2.setTag(r1)
            com.kwad.components.ad.feed.b.c$4 r2 = new com.kwad.components.ad.feed.b.c$4
            r2.<init>(r5, r1)
            com.kwad.sdk.utils.bj.postOnUiThread(r2)
            boolean r1 = r5.mIsAudioEnable
            if (r1 == 0) goto L73
            android.content.Context r1 = r5.mContext
            com.kwad.components.core.t.a r1 = com.kwad.components.core.t.a.al(r1)
            com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r2 = r5.eK
            r1.a(r2)
        L73:
            return r0
    }

    private void bh() {
            r5 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r5.mAdInfo
            com.kwad.sdk.core.response.model.b r0 = com.kwad.sdk.core.response.b.a.bi(r0)
            java.lang.String r0 = r0.getUrl()
            android.widget.ImageView r1 = r5.ew
            r2 = 0
            r1.setVisibility(r2)
            android.view.View r1 = r5.eH
            r1.setVisibility(r2)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L3d
            android.widget.ImageView r1 = r5.ew
            r2 = 0
            r1.setImageDrawable(r2)
            android.widget.ImageView r1 = r5.ew
            T extends com.kwad.sdk.core.response.model.AdTemplate r2 = r5.mAdTemplate
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r3 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder
            r3.<init>()
            r4 = 50
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r3 = r3.setBlurRadius(r4)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r3 = r3.build()
            com.kwad.components.ad.feed.b.c$5 r4 = new com.kwad.components.ad.feed.b.c$5
            r4.<init>(r5)
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r1, r0, r2, r3, r4)
            return
        L3d:
            android.widget.ImageView r0 = r5.ew
            int r1 = com.kwad.sdk.R.drawable.ksad_ad_live_end
            r0.setImageResource(r1)
            return
    }

    static com.kwad.components.core.e.d.c c(com.kwad.components.ad.feed.b.c r0) {
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            return r0
    }

    private void c(long r3) {
            r2 = this;
            float r3 = (float) r3
            r4 = 1148846080(0x447a0000, float:1000.0)
            float r3 = r3 / r4
            double r3 = (double) r3
            double r3 = java.lang.Math.ceil(r3)
            int r3 = (int) r3
            java.util.List<java.lang.Integer> r4 = r2.cr
            if (r4 == 0) goto L36
            boolean r4 = r4.isEmpty()
            if (r4 == 0) goto L15
            goto L36
        L15:
            java.util.List<java.lang.Integer> r4 = r2.cr
            java.util.Iterator r4 = r4.iterator()
        L1b:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L36
            java.lang.Object r0 = r4.next()
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            if (r3 < r0) goto L1b
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            r1 = 0
            com.kwad.sdk.core.report.a.a(r0, r3, r1)
            r4.remove()
        L36:
            return
    }

    private void c(android.view.View r2) {
            r1 = this;
            com.kwad.components.ad.feed.b.c$6 r0 = new com.kwad.components.ad.feed.b.c$6
            r0.<init>(r1, r2)
            r2.post(r0)
            return
    }

    static com.kwad.sdk.core.response.model.AdTemplate d(com.kwad.components.ad.feed.b.c r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.sdk.widget.KSRelativeLayout e(com.kwad.components.ad.feed.b.c r0) {
            com.kwad.sdk.widget.KSRelativeLayout r0 = r0.ev
            return r0
    }

    static android.widget.TextView f(com.kwad.components.ad.feed.b.c r0) {
            android.widget.TextView r0 = r0.eB
            return r0
    }

    static com.kwad.components.core.j.a.b g(com.kwad.components.ad.feed.b.c r0) {
            com.kwad.components.core.j.a$b r0 = r0.getCurrentVoiceItem()
            return r0
    }

    private boolean g(boolean r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r3 = com.kwad.sdk.core.config.d.gF()
            r1 = 1
            if (r3 != 0) goto L30
            android.content.Context r3 = r2.mContext
            com.kwad.components.core.t.a r3 = com.kwad.components.core.t.a.al(r3)
            boolean r3 = r3.qi()
            if (r3 != 0) goto L22
            android.content.Context r3 = r2.mContext
            com.kwad.components.core.t.a r3 = com.kwad.components.core.t.a.al(r3)
            boolean r3 = r3.aJ(r0)
            return r3
        L22:
            android.content.Context r3 = r2.mContext
            com.kwad.components.core.t.a r3 = com.kwad.components.core.t.a.al(r3)
            boolean r3 = r3.qh()
            if (r3 != 0) goto L2f
            return r1
        L2f:
            return r0
        L30:
            boolean r3 = r2.eA
            if (r3 != 0) goto L40
            android.content.Context r3 = r2.mContext
            com.kwad.components.core.t.a r3 = com.kwad.components.core.t.a.al(r3)
            boolean r3 = r3.aJ(r1)
            r2.eA = r3
        L40:
            boolean r3 = r2.eA
            return r3
    }

    private com.kwad.components.core.j.a.b getCurrentVoiceItem() {
            r2 = this;
            com.kwad.components.core.j.a$b r0 = r2.eI
            if (r0 != 0) goto L10
            com.kwad.components.core.j.a$b r0 = new com.kwad.components.core.j.a$b
            com.kwad.components.ad.feed.b.c$2 r1 = new com.kwad.components.ad.feed.b.c$2
            r1.<init>(r2)
            r0.<init>(r1)
            r2.eI = r0
        L10:
            com.kwad.components.core.j.a$b r0 = r2.eI
            return r0
    }

    static boolean h(com.kwad.components.ad.feed.b.c r0) {
            boolean r0 = r0.mIsAudioEnable
            return r0
    }

    static com.kwad.components.offline.api.core.adlive.IAdLivePlayModule i(com.kwad.components.ad.feed.b.c r0) {
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r0.eF
            return r0
    }

    static com.kwad.sdk.core.video.videoview.a j(com.kwad.components.ad.feed.b.c r0) {
            com.kwad.sdk.core.video.videoview.a r0 = r0.ex
            return r0
    }

    static com.kwad.components.ad.feed.b.d k(com.kwad.components.ad.feed.b.c r0) {
            com.kwad.components.ad.feed.b.d r0 = r0.ez
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate l(com.kwad.components.ad.feed.b.c r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.sdk.core.response.model.AdInfo m(com.kwad.components.ad.feed.b.c r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate n(com.kwad.components.ad.feed.b.c r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate o(com.kwad.components.ad.feed.b.c r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate p(com.kwad.components.ad.feed.b.c r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.sdk.core.response.model.AdInfo q(com.kwad.components.ad.feed.b.c r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static boolean r(com.kwad.components.ad.feed.b.c r0) {
            boolean r0 = r0.eG
            return r0
    }

    static com.kwad.components.offline.api.core.adlive.IAdLivePlayModule s(com.kwad.components.ad.feed.b.c r0) {
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r0.bg()
            return r0
    }

    @Override
    public final void a(android.view.View r1) {
            r0 = this;
            r0.onClick(r1)
            return
    }

    public final void a(com.kwad.sdk.api.KsAdVideoPlayConfig r6) {
            r5 = this;
            r5.dJ = r6
            boolean r0 = r6 instanceof com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl
            if (r0 == 0) goto L14
            r0 = r6
            com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl r0 = (com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl) r0
            int r0 = r0.getVideoSoundValue()
            if (r0 == 0) goto L14
            boolean r0 = r6.isVideoSoundEnable()
            goto L1a
        L14:
            com.kwad.sdk.core.response.model.AdInfo r0 = r5.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.bH(r0)
        L1a:
            r5.mIsAudioEnable = r0
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r5.mAdTemplate
            boolean r1 = r5.mIsAudioEnable
            r0.mIsAudioEnable = r1
            com.kwad.sdk.core.response.model.AdInfo r0 = r5.mAdInfo
            java.util.List r0 = com.kwad.sdk.core.response.b.a.bd(r0)
            r5.cr = r0
            boolean r0 = r5.eG
            if (r0 == 0) goto L2f
            return
        L2f:
            com.kwad.sdk.core.response.model.AdInfo r0 = r5.mAdInfo
            com.kwad.sdk.core.response.model.b r0 = com.kwad.sdk.core.response.b.a.bi(r0)
            java.lang.String r0 = r0.getUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 != 0) goto L57
            android.widget.ImageView r1 = r5.ew
            android.widget.ImageView$ScaleType r3 = android.widget.ImageView.ScaleType.FIT_CENTER
            r1.setScaleType(r3)
            android.widget.ImageView r1 = r5.ew
            r1.setImageDrawable(r2)
            android.widget.ImageView r1 = r5.ew
            T extends com.kwad.sdk.core.response.model.AdTemplate r3 = r5.mAdTemplate
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r1, r0, r3)
            android.widget.ImageView r0 = r5.ew
            r1 = 0
            goto L5b
        L57:
            android.widget.ImageView r0 = r5.ew
            r1 = 8
        L5b:
            r0.setVisibility(r1)
            com.kwad.sdk.core.video.videoview.a r0 = new com.kwad.sdk.core.video.videoview.a
            android.content.Context r1 = r5.mContext
            r0.<init>(r1)
            r5.ex = r0
            com.kwad.sdk.widget.j r1 = r5.ct
            r0.setVisibleListener(r1)
            com.kwad.sdk.core.video.videoview.a r0 = r5.ex
            r0.setOnClickListener(r5)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.content.Context r1 = r5.getContext()
            com.kwad.sdk.core.video.videoview.a r3 = r5.ex
            r0.<init>(r1, r3, r5)
            com.kwad.sdk.core.video.videoview.a r0 = r5.ex
            java.util.List<java.lang.Integer> r1 = r5.cr
            r0.setTag(r1)
            int r0 = com.kwad.sdk.core.config.d.zz()
            com.kwad.sdk.core.response.model.AdInfo r1 = r5.mAdInfo
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.F(r1)
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            if (r3 == 0) goto L94
            return
        L94:
            if (r0 >= 0) goto Lae
            com.kwad.sdk.core.diskcache.b.a r0 = com.kwad.sdk.core.diskcache.b.a.Au()
            java.io.File r0 = r0.bR(r1)
            if (r0 == 0) goto Lac
            boolean r1 = r0.exists()
            if (r1 == 0) goto Lac
            java.lang.String r0 = r0.getAbsolutePath()
            r1 = r0
            goto Lbb
        Lac:
            r1 = r2
            goto Lbb
        Lae:
            if (r0 != 0) goto Lb1
            goto Lbb
        Lb1:
            android.content.Context r0 = r5.mContext
            com.kwad.sdk.core.videocache.f r0 = com.kwad.sdk.core.videocache.c.a.bj(r0)
            java.lang.String r1 = r0.dN(r1)
        Lbb:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto Lc2
            return
        Lc2:
            com.kwad.sdk.contentalliance.a.a.b$a r0 = new com.kwad.sdk.contentalliance.a.a.b$a
            T extends com.kwad.sdk.core.response.model.AdTemplate r3 = r5.mAdTemplate
            r0.<init>(r3)
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.cn(r1)
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            com.kwad.sdk.core.response.model.PhotoInfo r1 = com.kwad.sdk.core.response.b.d.ch(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.f.b(r1)
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.co(r1)
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            com.kwad.sdk.core.response.model.VideoPlayerStatus r1 = r1.mVideoPlayerStatus
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.a(r1)
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            com.kwad.sdk.contentalliance.a.a.a r1 = com.kwad.sdk.contentalliance.a.a.a.ap(r1)
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.b(r1)
            com.kwad.sdk.contentalliance.a.a.b r0 = r0.yS()
            com.kwad.sdk.core.video.videoview.a r1 = r5.ex
            r1.a(r0, r2)
            com.kwad.sdk.core.video.videoview.a r0 = r5.ex
            boolean r1 = r5.mIsAudioEnable
            boolean r1 = r5.g(r1)
            r0.setVideoSoundEnable(r1)
            com.kwad.components.core.video.e r0 = new com.kwad.components.core.video.e
            android.content.Context r1 = r5.mContext
            T extends com.kwad.sdk.core.response.model.AdTemplate r3 = r5.mAdTemplate
            com.kwad.sdk.core.video.videoview.a r4 = r5.ex
            r0.<init>(r1, r3, r4, r6)
            r5.ey = r0
            com.kwad.components.core.video.a$a r6 = r5.eC
            r0.setAdClickListener(r6)
            long r0 = android.os.SystemClock.elapsedRealtime()
            r5.eh = r0
            com.kwad.components.core.video.e r6 = r5.ey
            com.kwad.components.core.video.a$b r0 = r5.eL
            r6.setVideoPlayCallback(r0)
            com.kwad.sdk.core.video.videoview.a r6 = r5.ex
            com.kwad.components.core.video.e r0 = r5.ey
            r6.setController(r0)
            com.kwad.sdk.widget.KSRelativeLayout r6 = r5.ev
            java.lang.Object r6 = r6.getTag()
            if (r6 == 0) goto L13f
            com.kwad.sdk.widget.KSRelativeLayout r6 = r5.ev
            java.lang.Object r0 = r6.getTag()
            android.view.View r0 = (android.view.View) r0
            r6.removeView(r0)
            com.kwad.sdk.widget.KSRelativeLayout r6 = r5.ev
            r6.setTag(r2)
        L13f:
            com.kwad.sdk.widget.KSRelativeLayout r6 = r5.ev
            com.kwad.sdk.core.video.videoview.a r0 = r5.ex
            r6.addView(r0)
            com.kwad.sdk.widget.KSRelativeLayout r6 = r5.ev
            com.kwad.sdk.core.video.videoview.a r0 = r5.ex
            r6.setTag(r0)
            com.kwad.sdk.widget.KSRelativeLayout r6 = r5.ev
            r0 = 1
            r6.setClickable(r0)
            com.kwad.sdk.widget.KSRelativeLayout r6 = r5.ev
            r6.setOnClickListener(r5)
            com.kwad.sdk.widget.f r6 = new com.kwad.sdk.widget.f
            android.content.Context r0 = r5.getContext()
            com.kwad.sdk.widget.KSRelativeLayout r1 = r5.ev
            r6.<init>(r0, r1, r5)
            boolean r6 = r5.mIsAudioEnable
            if (r6 == 0) goto L172
            android.content.Context r6 = r5.mContext
            com.kwad.components.core.t.a r6 = com.kwad.components.core.t.a.al(r6)
            com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r0 = r5.eK
            r6.a(r0)
        L172:
            return
    }

    @Override
    public final void aK() {
            r2 = this;
            super.aK()
            com.kwad.components.core.video.e r0 = r2.ey
            if (r0 == 0) goto Lc
            com.kwad.components.core.video.a$b r1 = r2.eL
            r0.setVideoPlayCallback(r1)
        Lc:
            com.kwad.components.core.j.a r0 = com.kwad.components.core.j.a.oa()
            com.kwad.components.core.j.a$b r1 = r2.getCurrentVoiceItem()
            r0.a(r1)
            boolean r0 = r2.eG
            if (r0 != 0) goto L1c
            return
        L1c:
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r2.eF
            if (r0 != 0) goto L27
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r2.bg()
            r2.eF = r0
            return
        L27:
            r0.onResume()
            return
    }

    @Override
    public final void aL() {
            r2 = this;
            super.aL()
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r2.eF
            if (r0 == 0) goto La
            r0.onPause()
        La:
            com.kwad.components.core.j.a r0 = com.kwad.components.core.j.a.oa()
            com.kwad.components.core.j.a$b r1 = r2.eI
            r0.c(r1)
            return
    }

    @Override
    public final void aa() {
            r0 = this;
            super.aa()
            return
    }

    @Override
    public final void ab() {
            r2 = this;
            super.ab()
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.utils.l.cz(r0)
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r2.eF
            r1 = 0
            if (r0 == 0) goto L12
            r0.onDestroy()
            r2.eF = r1
        L12:
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r0 = r2.eD
            if (r0 == 0) goto L1b
            r0.onDestroy()
            r2.eD = r1
        L1b:
            com.kwad.components.core.j.a r0 = com.kwad.components.core.j.a.oa()
            com.kwad.components.core.j.a$b r1 = r2.eI
            r0.c(r1)
            return
    }

    @Override
    public final void b(android.view.View r3) {
            r2 = this;
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.c.bV(r0)
            if (r0 == 0) goto L16
            com.kwad.sdk.core.video.videoview.a r0 = r2.ex
            com.kwad.components.ad.widget.DownloadProgressView r1 = r2.er
            if (r3 != r1) goto L10
            r3 = 1
            goto L11
        L10:
            r3 = 0
        L11:
            r1 = 153(0x99, float:2.14E-43)
            r2.a(r0, r3, r1)
        L16:
            return
    }

    @Override
    public final void b(com.kwad.sdk.core.response.model.AdTemplate r3) {
            r2 = this;
            super.b(r3)
            android.widget.TextView r0 = r2.ek
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            java.lang.String r1 = com.kwad.components.ad.feed.f.c(r1)
            r0.setText(r1)
            com.kwad.components.core.widget.KsLogoView r0 = r2.mLogoView
            r0.aa(r3)
            r2.be()
            com.kwad.sdk.core.response.model.AdInfo r3 = r2.mAdInfo
            boolean r3 = com.kwad.sdk.core.response.b.a.ax(r3)
            if (r3 == 0) goto L22
            r2.bc()
            goto L25
        L22:
            r2.bb()
        L25:
            android.widget.TextView r3 = r2.ek
            r3.setOnClickListener(r2)
            com.kwad.sdk.widget.KSRelativeLayout r3 = r2.ev
            r3.setOnClickListener(r2)
            android.widget.ImageView r3 = r2.em
            r3.setOnClickListener(r2)
            com.kwad.sdk.widget.f r3 = new com.kwad.sdk.widget.f
            android.content.Context r0 = r2.getContext()
            android.widget.TextView r1 = r2.ek
            r3.<init>(r0, r1, r2)
            com.kwad.sdk.widget.f r3 = new com.kwad.sdk.widget.f
            android.content.Context r0 = r2.getContext()
            com.kwad.sdk.widget.KSRelativeLayout r1 = r2.ev
            r3.<init>(r0, r1, r2)
            com.kwad.sdk.widget.f r3 = new com.kwad.sdk.widget.f
            android.content.Context r0 = r2.getContext()
            android.widget.ImageView r1 = r2.em
            r3.<init>(r0, r1, r2)
            r2.setOnClickListener(r2)
            return
    }

    @Override
    public final void ba() {
            r2 = this;
            int r0 = com.kwad.sdk.R.id.ksad_ad_desc
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.ek = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_container
            android.view.View r0 = r2.findViewById(r0)
            com.kwad.sdk.widget.KSRelativeLayout r0 = (com.kwad.sdk.widget.KSRelativeLayout) r0
            r2.ev = r0
            r1 = 1057971241(0x3f0f5c29, float:0.56)
            r0.setRatio(r1)
            int r0 = com.kwad.sdk.R.id.ksad_ad_dislike
            android.view.View r0 = r2.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r2.em = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_first_frame_container
            android.view.View r0 = r2.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r2.ew = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_dislike_logo
            android.view.View r0 = r2.findViewById(r0)
            com.kwad.components.core.widget.KsLogoView r0 = (com.kwad.components.core.widget.KsLogoView) r0
            r2.mLogoView = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_download_btn
            android.view.View r0 = r2.findViewById(r0)
            com.kwad.components.ad.widget.DownloadProgressView r0 = (com.kwad.components.ad.widget.DownloadProgressView) r0
            r2.er = r0
            int r0 = com.kwad.sdk.R.id.ksad_live_end_text
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.eB = r0
            int r0 = com.kwad.sdk.R.id.ksad_live_end_bg_mantle
            android.view.View r0 = r2.findViewById(r0)
            r2.eH = r0
            return
    }

    @Override
    public final void bd() {
            r2 = this;
            super.bd()
            com.kwad.components.core.e.d.c r0 = r2.mApkDownloadHelper
            if (r0 == 0) goto L10
            com.kwad.components.ad.widget.DownloadProgressView r1 = r2.er
            com.kwad.sdk.api.KsAppDownloadListener r1 = r1.getAppDownloadListener()
            r0.c(r1)
        L10:
            boolean r0 = r2.mIsAudioEnable
            if (r0 == 0) goto L1f
            android.content.Context r0 = r2.mContext
            com.kwad.components.core.t.a r0 = com.kwad.components.core.t.a.al(r0)
            com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r1 = r2.eK
            r0.b(r1)
        L1f:
            return
    }

    @Override
    public void onClick(android.view.View r5) {
            r4 = this;
            android.widget.ImageView r0 = r4.em
            if (r5 != r0) goto L8
            r4.sm()
            return
        L8:
            com.kwad.sdk.widget.KSRelativeLayout r0 = r4.ev
            if (r5 != r0) goto L2c
            com.kwad.sdk.core.video.videoview.a r0 = r4.ex
            if (r0 == 0) goto L2c
            boolean r0 = r0.isIdle()
            if (r0 == 0) goto L2c
            T extends com.kwad.sdk.core.response.model.AdTemplate r5 = r4.mAdTemplate
            com.kwad.sdk.utils.l.cA(r5)
            T extends com.kwad.sdk.core.response.model.AdTemplate r5 = r4.mAdTemplate
            com.kwad.sdk.contentalliance.a.a.a r5 = com.kwad.sdk.contentalliance.a.a.a.ap(r5)
            com.kwad.sdk.core.video.videoview.a r0 = r4.ex
            r0.setKsPlayLogParam(r5)
            com.kwad.sdk.core.video.videoview.a r5 = r4.ex
            r5.start()
            return
        L2c:
            r0 = 35
            android.widget.TextView r1 = r4.ek
            r2 = 1
            r3 = 100
            if (r5 != r1) goto L38
            r0 = 25
            goto L6b
        L38:
            com.kwad.sdk.widget.KSRelativeLayout r1 = r4.ev
            if (r5 != r1) goto L3e
        L3c:
            r0 = r3
            goto L6b
        L3e:
            com.kwad.components.ad.widget.DownloadProgressView r1 = r4.er
            if (r5 == r1) goto L6a
            android.widget.TextView r1 = r4.dC
            if (r5 == r1) goto L6a
            android.view.View r1 = r4.eq
            if (r5 != r1) goto L4b
            goto L6a
        L4b:
            android.widget.ImageView r1 = r4.du
            if (r5 != r1) goto L52
            r0 = 13
            goto L6b
        L52:
            android.widget.TextView r1 = r4.dv
            if (r5 != r1) goto L59
            r0 = 14
            goto L6b
        L59:
            android.widget.TextView r1 = r4.eo
            if (r5 == r1) goto L67
            android.widget.TextView r1 = r4.ep
            if (r5 != r1) goto L62
            goto L67
        L62:
            com.kwad.sdk.core.video.videoview.a r1 = r4.ex
            if (r5 != r1) goto L6b
            goto L3c
        L67:
            r0 = 101(0x65, float:1.42E-43)
            goto L6b
        L6a:
            r0 = r2
        L6b:
            com.kwad.sdk.core.video.videoview.a r1 = r4.ex
            com.kwad.components.ad.widget.DownloadProgressView r3 = r4.er
            if (r5 != r3) goto L72
            goto L73
        L72:
            r2 = 0
        L73:
            r4.a(r1, r2, r0)
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r3) {
            r2 = this;
            super.onWindowFocusChanged(r3)
            if (r3 == 0) goto L8b
            boolean r3 = r2.bf()
            if (r3 == 0) goto Lc
            return
        Lc:
            com.kwad.sdk.core.video.videoview.a r3 = r2.ex
            if (r3 == 0) goto L7d
            com.kwad.components.core.video.e r0 = r2.ey
            if (r0 == 0) goto L7d
            android.view.ViewParent r3 = r3.getParent()
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            com.kwad.sdk.core.video.videoview.a r0 = r2.ex
            android.view.ViewParent r0 = r0.getParent()
            com.kwad.sdk.widget.KSRelativeLayout r1 = r2.ev
            if (r0 == r1) goto L7d
            com.kwad.sdk.core.video.videoview.a r0 = r2.ex
            r3.removeView(r0)
            com.kwad.sdk.widget.KSRelativeLayout r3 = r2.ev
            java.lang.Object r3 = r3.getTag()
            if (r3 == 0) goto L42
            com.kwad.sdk.widget.KSRelativeLayout r3 = r2.ev
            java.lang.Object r0 = r3.getTag()
            android.view.View r0 = (android.view.View) r0
            r3.removeView(r0)
            com.kwad.sdk.widget.KSRelativeLayout r3 = r2.ev
            r0 = 0
            r3.setTag(r0)
        L42:
            com.kwad.sdk.widget.KSRelativeLayout r3 = r2.ev
            com.kwad.sdk.core.video.videoview.a r0 = r2.ex
            r3.addView(r0)
            com.kwad.sdk.widget.KSRelativeLayout r3 = r2.ev
            com.kwad.sdk.core.video.videoview.a r0 = r2.ex
            r3.setTag(r0)
            com.kwad.sdk.core.response.model.AdInfo r3 = r2.mAdInfo
            com.kwad.sdk.core.response.b.a.F(r3)
            com.kwad.sdk.core.video.videoview.a r3 = r2.ex
            boolean r0 = r2.mIsAudioEnable
            r3.setVideoSoundEnable(r0)
            T extends com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            boolean r0 = r2.mIsAudioEnable
            r3.mIsAudioEnable = r0
            com.kwad.components.core.video.e r3 = r2.ey
            com.kwad.components.core.video.a$a r0 = r2.eC
            r3.setAdClickListener(r0)
            com.kwad.components.core.video.e r3 = r2.ey
            com.kwad.sdk.core.response.model.AdTemplate r3 = r3.getAdTemplate()
            r0 = 0
            r3.mAdWebVideoPageShowing = r0
            com.kwad.components.core.video.e r3 = r2.ey
            r3.qW()
            com.kwad.components.core.video.e r3 = r2.ey
            r0 = 1
            r3.setAutoRelease(r0)
        L7d:
            com.kwad.sdk.core.response.model.AdInfo r3 = r2.mAdInfo
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.F(r3)
            com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache r0 = com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache.getInstance()
            r0.remove(r3)
            return
        L8b:
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r3 = r2.eD
            if (r3 == 0) goto L9a
            android.view.View r3 = r3.getView()
            if (r3 == 0) goto L9a
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r3 = r2.eF
            r3.onPause()
        L9a:
            return
    }

    public void setVideoPlayConfig(com.kwad.sdk.api.KsAdVideoPlayConfig r4) {
            r3 = this;
            r3.dJ = r4
            boolean r0 = r4 instanceof com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl
            if (r0 == 0) goto L67
            com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl r4 = (com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl) r4
            int r0 = r4.getVideoSoundValue()
            if (r0 == 0) goto L13
            boolean r0 = r4.isVideoSoundEnable()
            goto L19
        L13:
            com.kwad.sdk.core.response.model.AdInfo r0 = r3.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.bH(r0)
        L19:
            r3.mIsAudioEnable = r0
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            boolean r1 = r3.mIsAudioEnable
            r0.mIsAudioEnable = r1
            com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r0 = r3.eD
            if (r0 == 0) goto L3a
            android.view.View r0 = r0.getView()
            if (r0 == 0) goto L3a
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r3.eF
            if (r0 == 0) goto L3a
            boolean r1 = r3.mIsAudioEnable
            boolean r1 = r3.g(r1)
            r2 = 0
            r0.setAudioEnabled(r1, r2)
            goto L47
        L3a:
            com.kwad.sdk.core.video.videoview.a r0 = r3.ex
            if (r0 == 0) goto L47
            boolean r1 = r3.mIsAudioEnable
            boolean r1 = r3.g(r1)
            r0.setVideoSoundEnable(r1)
        L47:
            boolean r0 = r3.mIsAudioEnable
            if (r0 == 0) goto L56
            android.content.Context r0 = r3.mContext
            com.kwad.components.core.t.a r0 = com.kwad.components.core.t.a.al(r0)
            com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r1 = r3.eK
            r0.a(r1)
        L56:
            int r0 = r4.getDataFlowAutoStartValue()
            if (r0 == 0) goto L67
            com.kwad.components.core.video.e r0 = r3.ey
            if (r0 == 0) goto L67
            boolean r4 = r4.isDataFlowAutoStart()
            r0.setDataAutoStart(r4)
        L67:
            return
    }
}

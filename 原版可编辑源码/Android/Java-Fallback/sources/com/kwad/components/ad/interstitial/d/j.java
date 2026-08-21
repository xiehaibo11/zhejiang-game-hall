package com.kwad.components.ad.interstitial.d;

public final class j extends com.kwad.components.ad.interstitial.d.b implements com.kwad.sdk.widget.c {
    private java.util.List<java.lang.Integer> cr;
    private com.kwad.sdk.api.KsAdVideoPlayConfig dJ;
    private final com.kwad.components.core.video.a.a eC;
    private android.widget.ImageView ew;
    private com.kwad.sdk.core.video.videoview.a ex;
    private com.kwad.sdk.widget.KSFrameLayout jQ;
    private com.kwad.sdk.widget.KSFrameLayout jR;
    private com.kwad.components.ad.interstitial.d.c jf;
    private com.kwad.components.ad.interstitial.d.h ka;
    private com.kwad.components.core.video.f lb;
    protected com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    protected android.content.Context mContext;
    private boolean mIsAudioEnable;





    public j() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mIsAudioEnable = r0
            com.kwad.components.ad.interstitial.d.j$1 r0 = new com.kwad.components.ad.interstitial.d.j$1
            r0.<init>(r1)
            r1.ka = r0
            com.kwad.components.ad.interstitial.d.j$4 r0 = new com.kwad.components.ad.interstitial.d.j$4
            r0.<init>(r1)
            r1.eC = r0
            return
    }

    private com.kwad.components.ad.interstitial.d.c.b a(android.view.View r2, boolean r3) {
            r1 = this;
            com.kwad.components.ad.interstitial.d.c$b r0 = new com.kwad.components.ad.interstitial.d.c$b
            android.content.Context r2 = r2.getContext()
            r0.<init>(r2)
            com.kwad.components.ad.interstitial.d.c$b r2 = r0.k(r3)
            com.kwad.sdk.widget.KSFrameLayout r3 = r1.jQ
            com.kwad.sdk.utils.ac$a r3 = r3.getTouchCoords()
            com.kwad.components.ad.interstitial.d.c$b r2 = r2.a(r3)
            r3 = 3
            com.kwad.components.ad.interstitial.d.c$b r2 = r2.y(r3)
            r3 = 85
            com.kwad.components.ad.interstitial.d.c$b r2 = r2.z(r3)
            return r2
    }

    static com.kwad.components.core.video.f a(com.kwad.components.ad.interstitial.d.j r0) {
            com.kwad.components.core.video.f r0 = r0.lb
            return r0
    }

    static void a(com.kwad.components.ad.interstitial.d.j r0, long r1) {
            r0.c(r1)
            return
    }

    static com.kwad.components.ad.interstitial.d.c b(com.kwad.components.ad.interstitial.d.j r0) {
            com.kwad.components.ad.interstitial.d.c r0 = r0.jf
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate c(com.kwad.components.ad.interstitial.d.j r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
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
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            r1 = 0
            com.kwad.sdk.core.report.a.a(r0, r3, r1)
            r4.remove()
        L36:
            return
    }

    static com.kwad.sdk.core.video.videoview.a d(com.kwad.components.ad.interstitial.d.j r0) {
            com.kwad.sdk.core.video.videoview.a r0 = r0.ex
            return r0
    }

    static android.content.Context e(com.kwad.components.ad.interstitial.d.j r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    private void ea() {
            r6 = this;
            com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r6.dJ
            boolean r0 = r0.isVideoSoundEnable()
            r6.mIsAudioEnable = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = r6.mAdInfo
            com.kwad.sdk.core.response.model.b r0 = com.kwad.sdk.core.response.b.a.bi(r0)
            java.lang.String r0 = r0.getUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 != 0) goto L29
            android.widget.ImageView r1 = r6.ew
            r1.setImageDrawable(r2)
            android.widget.ImageView r1 = r6.ew
            com.kwad.sdk.core.response.model.AdTemplate r3 = r6.mAdTemplate
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r1, r0, r3)
            android.widget.ImageView r0 = r6.ew
            r1 = 0
            goto L2d
        L29:
            android.widget.ImageView r0 = r6.ew
            r1 = 8
        L2d:
            r0.setVisibility(r1)
            int r0 = com.kwad.sdk.core.config.d.zz()
            com.kwad.sdk.core.response.model.AdInfo r1 = r6.mAdInfo
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.F(r1)
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            if (r3 == 0) goto L41
            return
        L41:
            if (r0 >= 0) goto L5b
            com.kwad.sdk.core.diskcache.b.a r0 = com.kwad.sdk.core.diskcache.b.a.Au()
            java.io.File r0 = r0.bR(r1)
            if (r0 == 0) goto L59
            boolean r1 = r0.exists()
            if (r1 == 0) goto L59
            java.lang.String r0 = r0.getAbsolutePath()
            r1 = r0
            goto L68
        L59:
            r1 = r2
            goto L68
        L5b:
            if (r0 != 0) goto L5e
            goto L68
        L5e:
            android.content.Context r0 = r6.mContext
            com.kwad.sdk.core.videocache.f r0 = com.kwad.sdk.core.videocache.c.a.bj(r0)
            java.lang.String r1 = r0.dN(r1)
        L68:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L6f
            return
        L6f:
            com.kwad.sdk.contentalliance.a.a.b$a r0 = new com.kwad.sdk.contentalliance.a.a.b$a
            com.kwad.sdk.core.response.model.AdTemplate r3 = r6.mAdTemplate
            r0.<init>(r3)
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.cn(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r6.mAdTemplate
            com.kwad.sdk.core.response.model.PhotoInfo r1 = com.kwad.sdk.core.response.b.d.ch(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.f.b(r1)
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.co(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r6.mAdTemplate
            com.kwad.sdk.core.response.model.VideoPlayerStatus r1 = r1.mVideoPlayerStatus
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.a(r1)
            com.kwad.sdk.contentalliance.a.a.a r1 = new com.kwad.sdk.contentalliance.a.a.a
            com.kwad.sdk.core.response.model.AdTemplate r3 = r6.mAdTemplate
            long r4 = java.lang.System.currentTimeMillis()
            r1.<init>(r3, r4)
            com.kwad.sdk.contentalliance.a.a.b$a r0 = r0.b(r1)
            com.kwad.sdk.contentalliance.a.a.b r0 = r0.yS()
            com.kwad.sdk.core.video.videoview.a r1 = r6.ex
            r1.a(r0, r2)
            com.kwad.sdk.core.video.videoview.a r0 = r6.ex
            boolean r1 = r6.mIsAudioEnable
            r0.setVideoSoundEnable(r1)
            com.kwad.components.core.video.f r0 = r6.lb
            com.kwad.components.ad.interstitial.d.j$2 r1 = new com.kwad.components.ad.interstitial.d.j$2
            r1.<init>(r6)
            r0.setVideoPlayCallback(r1)
            com.kwad.sdk.core.video.videoview.a r0 = r6.ex
            com.kwad.components.core.video.f r1 = r6.lb
            r0.setController(r1)
            com.kwad.sdk.widget.KSFrameLayout r0 = r6.jR
            r1 = 1
            r0.setClickable(r1)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            com.kwad.sdk.widget.KSFrameLayout r1 = r6.jR
            android.content.Context r1 = r1.getContext()
            com.kwad.sdk.widget.KSFrameLayout r2 = r6.jR
            r0.<init>(r1, r2, r6)
            com.kwad.sdk.widget.KSFrameLayout r0 = r6.jR
            com.kwad.sdk.core.video.videoview.a r1 = r6.ex
            r0.addView(r1)
            com.kwad.components.ad.interstitial.d.c r0 = r6.jf
            com.kwad.components.ad.interstitial.d.j$3 r1 = new com.kwad.components.ad.interstitial.d.j$3
            r1.<init>(r6)
            r0.jp = r1
            return
    }

    private void eb() {
            r2 = this;
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            boolean r0 = r0.jk
            if (r0 != 0) goto L13
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r0 = r0.hz
            if (r0 == 0) goto L13
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r0 = r0.hz
            r0.onAdClicked()
        L13:
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            r1 = 1
            r0.ji = r1
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            boolean r0 = r0.jk
            if (r0 != 0) goto L23
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            r0.ck()
        L23:
            return
    }

    static void f(com.kwad.components.ad.interstitial.d.j r0) {
            r0.eb()
            return
    }

    static com.kwad.components.core.e.d.c g(com.kwad.components.ad.interstitial.d.j r0) {
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            return r0
    }

    static android.content.Context h(com.kwad.components.ad.interstitial.d.j r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    @Override
    public final void a(android.view.View r3) {
            r2 = this;
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            r1 = 1
            com.kwad.components.ad.interstitial.d.c$b r3 = r2.a(r3, r1)
            r0.a(r3)
            return
    }

    @Override
    public final void ah() {
            r4 = this;
            super.ah()
            java.lang.Object r0 = r4.Gk()
            com.kwad.components.ad.interstitial.d.c r0 = (com.kwad.components.ad.interstitial.d.c) r0
            r4.jf = r0
            com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r0.dJ
            r4.dJ = r0
            com.kwad.components.ad.interstitial.d.c r0 = r4.jf
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r4.mAdTemplate = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r4.mAdInfo = r0
            java.util.List r0 = com.kwad.sdk.core.response.b.a.bd(r0)
            r4.cr = r0
            com.kwad.components.ad.interstitial.d.c r0 = r4.jf
            com.kwad.sdk.core.video.videoview.a r0 = r0.ex
            r4.ex = r0
            java.util.List<java.lang.Integer> r1 = r4.cr
            r0.setTag(r1)
            com.kwad.components.core.video.f r0 = new com.kwad.components.core.video.f
            android.content.Context r1 = r4.mContext
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
            com.kwad.sdk.core.video.videoview.a r3 = r4.ex
            r0.<init>(r1, r2, r3)
            r4.lb = r0
            com.kwad.sdk.api.KsAdVideoPlayConfig r1 = r4.dJ
            boolean r1 = r1.isDataFlowAutoStart()
            r0.setDataFlowAutoStart(r1)
            com.kwad.components.core.video.f r0 = r4.lb
            com.kwad.components.core.video.a$a r1 = r4.eC
            r0.setAdClickListener(r1)
            com.kwad.components.core.video.f r0 = r4.lb
            r0.qC()
            com.kwad.components.ad.interstitial.d.c r0 = r4.jf
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            r4.mApkDownloadHelper = r0
            r4.ea()
            android.content.Context r0 = r4.getContext()
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.dimen.ksad_interstitial_card_radius
            float r0 = r0.getDimension(r1)
            com.kwad.sdk.widget.KSFrameLayout r1 = r4.jR
            r2 = 0
            r1.setRadius(r0, r0, r2, r2)
            com.kwad.components.ad.interstitial.d.c r0 = r4.jf
            com.kwad.components.ad.interstitial.d.h r1 = r4.ka
            r0.a(r1)
            return
    }

    @Override
    public final void b(android.view.View r3) {
            r2 = this;
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            r1 = 0
            com.kwad.components.ad.interstitial.d.c$b r3 = r2.a(r3, r1)
            r0.a(r3)
            return
    }

    @Override
    public final void onCreate() {
            r2 = this;
            super.onCreate()
            android.view.View r0 = r2.getRootView()
            int r1 = com.kwad.sdk.R.id.ksad_container
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.sdk.widget.KSFrameLayout r0 = (com.kwad.sdk.widget.KSFrameLayout) r0
            r2.jQ = r0
            android.view.View r0 = r2.getRootView()
            int r1 = com.kwad.sdk.R.id.ksad_video_container
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.sdk.widget.KSFrameLayout r0 = (com.kwad.sdk.widget.KSFrameLayout) r0
            r2.jR = r0
            android.view.View r0 = r2.getRootView()
            int r1 = com.kwad.sdk.R.id.ksad_video_first_frame_container
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r2.ew = r0
            com.kwad.sdk.widget.KSFrameLayout r0 = r2.jR
            r1 = 4
            r0.setVisibility(r1)
            android.content.Context r0 = r2.getContext()
            r2.mContext = r0
            return
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            super.onDestroy()
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            r1 = 0
            r0.jp = r1
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            com.kwad.components.ad.interstitial.d.h r1 = r2.ka
            r0.b(r1)
            return
    }
}

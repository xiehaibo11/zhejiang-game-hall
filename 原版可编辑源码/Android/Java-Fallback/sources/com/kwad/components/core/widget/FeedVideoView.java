package com.kwad.components.core.widget;

public class FeedVideoView extends com.kwad.components.core.widget.b<com.kwad.sdk.core.response.model.AdTemplate> implements android.support.v4.view.NestedScrollingChild {
    private android.support.v4.view.NestedScrollingChildHelper Of;
    private com.kwad.components.core.video.e Ox;
    private android.view.ViewGroup YA;
    private int YB;
    private boolean YC;
    private boolean YD;
    private long YE;
    private boolean YF;
    private com.kwad.sdk.api.KsAdVideoPlayConfig YG;
    private com.kwad.components.core.widget.FeedVideoView.a YH;
    private android.view.View YI;
    private boolean YJ;
    private java.lang.Runnable YK;
    private com.kwad.components.core.t.n YL;
    private com.kwad.sdk.widget.RatioFrameLayout Yl;
    private android.widget.TextView Ym;
    private android.widget.TextView Yn;
    private android.widget.TextView Yo;
    private android.view.View Yp;
    private com.kwad.components.core.widget.KSCornerImageView Yq;
    private android.widget.TextView Yr;
    private com.kwad.sdk.core.view.ScaleAnimSeekBar Ys;
    private android.widget.ImageView Yt;
    private android.widget.ImageView Yu;
    private android.widget.ImageView Yv;
    private android.view.ViewGroup Yw;
    private android.view.ViewGroup Yx;
    private android.widget.TextView Yy;
    private android.view.ViewGroup Yz;
    private android.view.View.OnClickListener bK;
    private com.kwad.sdk.api.KsAppDownloadListener cn;
    private java.util.List<java.lang.Integer> cr;
    private android.widget.TextView ek;
    private android.widget.ImageView ew;
    private com.kwad.sdk.core.video.videoview.a ex;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;












    public interface a {
        void oG();

        void oH();
    }

    public FeedVideoView(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r2 = 100
            r1.YB = r2
            com.kwad.components.core.widget.FeedVideoView$5 r2 = new com.kwad.components.core.widget.FeedVideoView$5
            r2.<init>(r1)
            r1.YK = r2
            com.kwad.components.core.t.n r0 = new com.kwad.components.core.t.n
            r0.<init>(r2)
            r1.YL = r0
            return
    }

    public FeedVideoView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 100
            r0.YB = r1
            com.kwad.components.core.widget.FeedVideoView$5 r1 = new com.kwad.components.core.widget.FeedVideoView$5
            r1.<init>(r0)
            r0.YK = r1
            com.kwad.components.core.t.n r2 = new com.kwad.components.core.t.n
            r2.<init>(r1)
            r0.YL = r2
            return
    }

    public FeedVideoView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 100
            r0.YB = r1
            com.kwad.components.core.widget.FeedVideoView$5 r1 = new com.kwad.components.core.widget.FeedVideoView$5
            r1.<init>(r0)
            r0.YK = r1
            com.kwad.components.core.t.n r2 = new com.kwad.components.core.t.n
            r2.<init>(r1)
            r0.YL = r2
            return
    }

    static android.widget.TextView a(com.kwad.components.core.widget.FeedVideoView r0) {
            android.widget.TextView r0 = r0.Yo
            return r0
    }

    private void a(com.kwad.components.core.video.a r3, com.kwad.sdk.core.video.videoview.a r4) {
            r2 = this;
            android.view.ViewGroup r0 = r2.Yz
            com.kwad.components.core.widget.FeedVideoView$6 r1 = new com.kwad.components.core.widget.FeedVideoView$6
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            com.kwad.components.core.widget.FeedVideoView$7 r0 = new com.kwad.components.core.widget.FeedVideoView$7
            r0.<init>(r2, r4)
            r3.setVideoPlayCallback(r0)
            com.kwad.components.core.video.e r3 = r2.Ox
            com.kwad.components.core.widget.FeedVideoView$8 r0 = new com.kwad.components.core.widget.FeedVideoView$8
            r0.<init>(r2)
            r3.setAdClickListener(r0)
            com.kwad.sdk.core.view.ScaleAnimSeekBar r3 = r2.Ys
            com.kwad.components.core.widget.FeedVideoView$9 r0 = new com.kwad.components.core.widget.FeedVideoView$9
            r0.<init>(r2, r4)
            r3.setOnSeekBarChangeListener(r0)
            android.widget.ImageView r3 = r2.Yt
            com.kwad.components.core.widget.FeedVideoView$10 r0 = new com.kwad.components.core.widget.FeedVideoView$10
            r0.<init>(r2, r4)
            r3.setOnClickListener(r0)
            android.widget.ImageView r3 = r2.Yv
            com.kwad.components.core.widget.FeedVideoView$11 r4 = new com.kwad.components.core.widget.FeedVideoView$11
            r4.<init>(r2)
            r3.setOnClickListener(r4)
            android.view.ViewGroup r3 = r2.Yx
            com.kwad.components.core.widget.FeedVideoView$2 r4 = new com.kwad.components.core.widget.FeedVideoView$2
            r4.<init>(r2)
            r3.setOnClickListener(r4)
            android.widget.ImageView r3 = r2.Yu
            com.kwad.components.core.widget.FeedVideoView$3 r4 = new com.kwad.components.core.widget.FeedVideoView$3
            r4.<init>(r2)
            r3.setOnClickListener(r4)
            return
    }

    static void a(com.kwad.components.core.widget.FeedVideoView r0, long r1) {
            r0.c(r1)
            return
    }

    static boolean a(com.kwad.components.core.widget.FeedVideoView r0, boolean r1) {
            r1 = 1
            r0.YJ = r1
            return r1
    }

    static android.view.View.OnClickListener b(com.kwad.components.core.widget.FeedVideoView r0) {
            android.view.View$OnClickListener r0 = r0.bK
            return r0
    }

    static boolean b(com.kwad.components.core.widget.FeedVideoView r0, boolean r1) {
            r0.YF = r1
            return r1
    }

    static android.view.ViewGroup c(com.kwad.components.core.widget.FeedVideoView r0) {
            android.view.ViewGroup r0 = r0.Yw
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

    static android.widget.ImageView d(com.kwad.components.core.widget.FeedVideoView r0) {
            android.widget.ImageView r0 = r0.Yv
            return r0
    }

    static com.kwad.components.core.video.e e(com.kwad.components.core.widget.FeedVideoView r0) {
            com.kwad.components.core.video.e r0 = r0.Ox
            return r0
    }

    static com.kwad.sdk.core.video.videoview.a f(com.kwad.components.core.widget.FeedVideoView r0) {
            com.kwad.sdk.core.video.videoview.a r0 = r0.ex
            return r0
    }

    static java.lang.Runnable g(com.kwad.components.core.widget.FeedVideoView r0) {
            java.lang.Runnable r0 = r0.YK
            return r0
    }

    private com.kwad.sdk.api.KsAppDownloadListener getAppDownloadListener() {
            r1 = this;
            com.kwad.sdk.api.KsAppDownloadListener r0 = r1.cn
            if (r0 != 0) goto Lb
            com.kwad.components.core.widget.FeedVideoView$1 r0 = new com.kwad.components.core.widget.FeedVideoView$1
            r0.<init>(r1)
            r1.cn = r0
        Lb:
            com.kwad.sdk.api.KsAppDownloadListener r0 = r1.cn
            return r0
    }

    static com.kwad.components.core.t.n h(com.kwad.components.core.widget.FeedVideoView r0) {
            com.kwad.components.core.t.n r0 = r0.YL
            return r0
    }

    static int i(com.kwad.components.core.widget.FeedVideoView r0) {
            int r0 = r0.YB
            return r0
    }

    static boolean j(com.kwad.components.core.widget.FeedVideoView r0) {
            boolean r0 = r0.YF
            return r0
    }

    static com.kwad.sdk.core.view.ScaleAnimSeekBar k(com.kwad.components.core.widget.FeedVideoView r0) {
            com.kwad.sdk.core.view.ScaleAnimSeekBar r0 = r0.Ys
            return r0
    }

    static android.widget.TextView l(com.kwad.components.core.widget.FeedVideoView r0) {
            android.widget.TextView r0 = r0.Yn
            return r0
    }

    static android.widget.TextView m(com.kwad.components.core.widget.FeedVideoView r0) {
            android.widget.TextView r0 = r0.Ym
            return r0
    }

    static boolean n(com.kwad.components.core.widget.FeedVideoView r0) {
            boolean r0 = r0.YJ
            return r0
    }

    static com.kwad.components.core.e.d.c o(com.kwad.components.core.widget.FeedVideoView r0) {
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            return r0
    }

    static android.widget.ImageView p(com.kwad.components.core.widget.FeedVideoView r0) {
            android.widget.ImageView r0 = r0.Yt
            return r0
    }

    static void q(com.kwad.components.core.widget.FeedVideoView r0) {
            r0.sr()
            return
    }

    static void r(com.kwad.components.core.widget.FeedVideoView r0) {
            r0.sq()
            return
    }

    private boolean sp() {
            r6 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r6.YE
            long r2 = r0 - r2
            r4 = 888(0x378, double:4.387E-321)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L10
            r6.YE = r0
        L10:
            if (r2 <= 0) goto L14
            r0 = 1
            return r0
        L14:
            r0 = 0
            return r0
    }

    private void sq() {
            r8 = this;
            com.kwad.components.core.widget.FeedVideoView$a r0 = r8.YH
            if (r0 == 0) goto L7
            r0.oG()
        L7:
            int r0 = r8.YB
            r1 = 100
            r2 = 1
            r3 = 0
            if (r0 != r1) goto L11
            r0 = r2
            goto L12
        L11:
            r0 = r3
        L12:
            boolean r1 = r8.sp()
            r0 = r0 & r1
            if (r0 == 0) goto Le7
            android.view.ViewGroup r0 = r8.Yx
            r0.setVisibility(r3)
            android.widget.TextView r0 = r8.Yy
            com.kwad.sdk.core.response.model.AdInfo r1 = r8.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r1 = r1.adBaseInfo
            java.lang.String r1 = r1.adDescription
            r0.setText(r1)
            com.kwad.sdk.core.response.model.AdInfo r0 = r8.mAdInfo
            int r0 = com.kwad.sdk.core.response.b.a.L(r0)
            com.kwad.sdk.core.response.model.AdInfo r1 = r8.mAdInfo
            int r1 = com.kwad.sdk.core.response.b.a.K(r1)
            if (r0 <= r1) goto L39
            r0 = r2
            goto L3a
        L39:
            r0 = r3
        L3a:
            android.content.Context r1 = r8.getContext()
            boolean r1 = com.kwad.sdk.utils.ai.ck(r1)
            r8.YC = r1
            r8.getContext()
            boolean r1 = com.kwad.sdk.utils.ai.IN()
            r8.YD = r1
            android.content.Context r1 = r8.getContext()
            if (r0 != 0) goto L57
            com.kwad.sdk.utils.ai.cm(r1)
            goto L5a
        L57:
            com.kwad.sdk.utils.ai.cn(r1)
        L5a:
            android.view.ViewGroup r1 = r8.Yz
            android.view.ViewParent r1 = r1.getParent()
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            r8.YA = r1
            if (r1 == 0) goto L91
            android.view.ViewGroup r4 = r8.Yz
            r1.removeView(r4)
            android.view.View r4 = new android.view.View
            android.view.ViewGroup r5 = r8.Yz
            android.content.Context r5 = r5.getContext()
            r4.<init>(r5)
            r8.YI = r4
            android.view.ViewGroup$LayoutParams r5 = new android.view.ViewGroup$LayoutParams
            android.view.ViewGroup r6 = r8.Yz
            int r6 = r6.getWidth()
            android.view.ViewGroup r7 = r8.Yz
            int r7 = r7.getHeight()
            r5.<init>(r6, r7)
            r4.setLayoutParams(r5)
            android.view.View r4 = r8.YI
            r1.addView(r4)
        L91:
            android.content.Context r1 = r8.getContext()
            com.kwad.sdk.utils.ai.b(r1, r3)
            android.content.Context r1 = r8.getContext()
            android.app.Activity r1 = com.kwad.sdk.m.l.dr(r1)
            if (r1 == 0) goto Le7
            android.view.Window r1 = r1.getWindow()
            android.view.View r1 = r1.getDecorView()
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            android.view.ViewGroup r3 = r8.Yz
            android.view.ViewGroup$LayoutParams r4 = new android.view.ViewGroup$LayoutParams
            int r5 = r1.getWidth()
            int r6 = r1.getHeight()
            r4.<init>(r5, r6)
            r3.setLayoutParams(r4)
            if (r0 != r2) goto Ld7
            int r0 = r1.getWidth()
            if (r0 == 0) goto Ld7
            com.kwad.sdk.widget.RatioFrameLayout r0 = r8.Yl
            int r2 = r1.getHeight()
            float r2 = (float) r2
            int r3 = r1.getWidth()
            float r3 = (float) r3
            float r2 = r2 / r3
            double r2 = (double) r2
            r0.setRatio(r2)
        Ld7:
            android.view.ViewGroup r0 = r8.Yz
            android.widget.FrameLayout$LayoutParams r2 = new android.widget.FrameLayout$LayoutParams
            r3 = -1
            r2.<init>(r3, r3)
            r1.addView(r0, r2)
            r0 = 101(0x65, float:1.42E-43)
            r8.setUIWithStateAndMode(r0)
        Le7:
            return
    }

    private void sr() {
            r5 = this;
            int r0 = r5.YB
            r1 = 1
            r2 = 101(0x65, float:1.42E-43)
            if (r0 != r2) goto L9
            r0 = r1
            goto La
        L9:
            r0 = 0
        La:
            boolean r2 = r5.sp()
            r0 = r0 & r2
            if (r0 == 0) goto L98
            android.view.ViewGroup r0 = r5.Yx
            r2 = 8
            r0.setVisibility(r2)
            boolean r0 = r5.YC
            if (r0 == 0) goto L24
            android.content.Context r0 = r5.getContext()
            com.kwad.sdk.utils.ai.ck(r0)
            goto L2b
        L24:
            android.content.Context r0 = r5.getContext()
            com.kwad.sdk.utils.ai.cl(r0)
        L2b:
            boolean r0 = r5.YD
            if (r0 == 0) goto L37
            android.content.Context r0 = r5.getContext()
            com.kwad.sdk.utils.ai.cn(r0)
            goto L3e
        L37:
            android.content.Context r0 = r5.getContext()
            com.kwad.sdk.utils.ai.cm(r0)
        L3e:
            android.content.Context r0 = r5.getContext()
            com.kwad.sdk.utils.ai.b(r0, r1)
            android.view.ViewGroup r0 = r5.Yz
            android.view.ViewParent r0 = r0.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            if (r0 == 0) goto L54
            android.view.ViewGroup r1 = r5.Yz
            r0.removeView(r1)
        L54:
            android.view.ViewGroup r0 = r5.Yz
            android.view.ViewGroup$LayoutParams r1 = new android.view.ViewGroup$LayoutParams
            android.view.ViewGroup r2 = r5.YA
            int r2 = r2.getWidth()
            android.view.ViewGroup r3 = r5.YA
            int r3 = r3.getHeight()
            r1.<init>(r2, r3)
            r0.setLayoutParams(r1)
            com.kwad.sdk.widget.RatioFrameLayout r0 = r5.Yl
            r1 = 4603219251149406208(0x3fe1eb8520000000, double:0.5600000023841858)
            r0.setRatio(r1)
            android.view.View r0 = r5.YI
            if (r0 == 0) goto L80
            android.view.ViewGroup r1 = r5.YA
            r1.removeView(r0)
            r0 = 0
            r5.YI = r0
        L80:
            android.view.ViewGroup r0 = r5.YA
            android.view.ViewGroup r1 = r5.Yz
            android.widget.FrameLayout$LayoutParams r2 = new android.widget.FrameLayout$LayoutParams
            r3 = -1
            r4 = -2
            r2.<init>(r3, r4)
            r0.addView(r1, r2)
            android.view.ViewGroup r0 = r5.Yz
            r0.requestLayout()
            r0 = 100
            r5.setUIWithStateAndMode(r0)
        L98:
            com.kwad.components.core.widget.FeedVideoView$a r0 = r5.YH
            if (r0 == 0) goto L9f
            r0.oH()
        L9f:
            return
    }

    public final void a(com.kwad.sdk.api.KsAdVideoPlayConfig r10, com.kwad.components.core.e.d.c r11) {
            r9 = this;
            r9.mApkDownloadHelper = r11
            r11 = 0
            r9.YJ = r11
            com.kwad.sdk.core.response.model.AdInfo r0 = r9.mAdInfo
            com.kwad.sdk.core.response.model.b r0 = com.kwad.sdk.core.response.b.a.bi(r0)
            r9.YG = r10
            java.lang.String r0 = r0.getUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            r3 = 8
            if (r1 != 0) goto L2c
            android.widget.ImageView r1 = r9.ew
            r1.setImageDrawable(r2)
            android.widget.ImageView r1 = r9.ew
            T extends com.kwad.sdk.core.response.model.AdTemplate r4 = r9.mAdTemplate
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r1, r0, r4)
            android.widget.ImageView r0 = r9.ew
            r0.setVisibility(r11)
            goto L31
        L2c:
            android.widget.ImageView r0 = r9.ew
            r0.setVisibility(r3)
        L31:
            com.kwad.sdk.core.response.model.AdInfo r0 = r9.mAdInfo
            java.util.List r0 = com.kwad.sdk.core.response.b.a.bd(r0)
            r9.cr = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = r9.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.F(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L46
            return
        L46:
            com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache r1 = com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache.getInstance()
            com.kwad.sdk.core.video.videoview.a r1 = r1.dJ(r0)
            r9.ex = r1
            com.kwad.sdk.core.response.model.AdInfo r1 = r9.mAdInfo
            boolean r1 = com.kwad.sdk.core.response.b.a.ai(r1)
            if (r1 == 0) goto L9e
            android.widget.TextView r1 = r9.ek
            r1.setVisibility(r3)
            android.view.View r1 = r9.Yp
            if (r1 == 0) goto Laa
            r1.setVisibility(r11)
            android.widget.TextView r1 = r9.Yo
            com.kwad.sdk.core.response.model.AdInfo r4 = r9.mAdInfo
            java.lang.String r4 = com.kwad.sdk.core.response.b.a.aw(r4)
            r1.setText(r4)
            android.widget.TextView r1 = r9.Yr
            com.kwad.sdk.core.response.model.AdInfo r4 = r9.mAdInfo
            java.lang.String r4 = com.kwad.sdk.core.response.b.a.bO(r4)
            r1.setText(r4)
            com.kwad.components.core.widget.KSCornerImageView r1 = r9.Yq
            com.kwad.sdk.core.response.model.AdInfo r4 = r9.mAdInfo
            java.lang.String r4 = com.kwad.sdk.core.response.b.a.bQ(r4)
            T extends com.kwad.sdk.core.response.model.AdTemplate r5 = r9.mAdTemplate
            r6 = 4
            com.kwad.sdk.core.imageloader.KSImageLoader.loadAppIcon(r1, r4, r5, r6)
            com.kwad.components.core.e.d.c r1 = r9.mApkDownloadHelper
            if (r1 == 0) goto L93
            com.kwad.sdk.api.KsAppDownloadListener r4 = r9.getAppDownloadListener()
            r1.b(r4)
        L93:
            android.widget.TextView r1 = r9.Yo
            com.kwad.components.core.widget.FeedVideoView$4 r4 = new com.kwad.components.core.widget.FeedVideoView$4
            r4.<init>(r9)
            r1.setOnClickListener(r4)
            goto Laa
        L9e:
            android.view.View r1 = r9.Yp
            if (r1 == 0) goto La5
            r1.setVisibility(r3)
        La5:
            android.widget.TextView r1 = r9.ek
            r1.setVisibility(r11)
        Laa:
            com.kwad.sdk.core.video.videoview.a r1 = r9.ex
            r4 = 1
            if (r1 != 0) goto L12f
            com.kwad.sdk.core.video.videoview.a r1 = new com.kwad.sdk.core.video.videoview.a
            android.content.Context r5 = r9.getContext()
            r1.<init>(r5)
            r9.ex = r1
            com.kwad.sdk.core.response.model.AdInfo r1 = r9.mAdInfo
            com.kwad.sdk.core.response.b.a.T(r1)
            com.kwad.sdk.contentalliance.a.a.b$a r1 = new com.kwad.sdk.contentalliance.a.a.b$a
            T extends com.kwad.sdk.core.response.model.AdTemplate r5 = r9.mAdTemplate
            r1.<init>(r5)
            T extends com.kwad.sdk.core.response.model.AdTemplate r5 = r9.mAdTemplate
            com.kwad.sdk.core.response.model.VideoPlayerStatus r5 = r5.mVideoPlayerStatus
            com.kwad.sdk.contentalliance.a.a.b$a r1 = r1.a(r5)
            T extends com.kwad.sdk.core.response.model.AdTemplate r5 = r9.mAdTemplate
            java.lang.String r5 = com.kwad.sdk.core.response.b.d.ci(r5)
            com.kwad.sdk.contentalliance.a.a.b$a r1 = r1.cn(r5)
            T extends com.kwad.sdk.core.response.model.AdTemplate r5 = r9.mAdTemplate
            com.kwad.sdk.core.response.model.PhotoInfo r5 = com.kwad.sdk.core.response.b.d.ch(r5)
            java.lang.String r5 = com.kwad.sdk.core.response.b.f.b(r5)
            com.kwad.sdk.contentalliance.a.a.b$a r1 = r1.co(r5)
            com.kwad.sdk.contentalliance.a.a.a r5 = new com.kwad.sdk.contentalliance.a.a.a
            T extends com.kwad.sdk.core.response.model.AdTemplate r6 = r9.mAdTemplate
            long r7 = java.lang.System.currentTimeMillis()
            r5.<init>(r6, r7)
            com.kwad.sdk.contentalliance.a.a.b$a r1 = r1.b(r5)
            com.kwad.sdk.contentalliance.a.a.b r1 = r1.yS()
            com.kwad.sdk.core.video.videoview.a r5 = r9.ex
            r5.a(r1, r2)
            com.kwad.components.core.video.e r1 = new com.kwad.components.core.video.e
            android.content.Context r5 = r9.mContext
            T extends com.kwad.sdk.core.response.model.AdTemplate r6 = r9.mAdTemplate
            com.kwad.sdk.core.video.videoview.a r7 = r9.ex
            r1.<init>(r5, r6, r7, r10)
            r9.Ox = r1
            boolean r5 = r10.isDataFlowAutoStart()
            r1.setDataFlowAutoStart(r5)
            com.kwad.sdk.core.video.videoview.a r1 = r9.ex
            com.kwad.components.core.video.e r5 = r9.Ox
            r1.setController(r5)
            com.kwad.components.core.video.e r1 = r9.Ox
            r1.setAutoRelease(r11)
            int r1 = com.kwad.sdk.core.config.d.yY()
            r5 = 2
            if (r1 != r5) goto L159
            com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache r1 = com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache.getInstance()
            com.kwad.sdk.core.video.videoview.a r5 = r9.ex
            r1.a(r0, r5)
            goto L159
        L12f:
            java.lang.Object r0 = r1.getTag()
            if (r0 == 0) goto L144
            com.kwad.sdk.core.video.videoview.a r0 = r9.ex     // Catch: java.lang.Exception -> L140
            java.lang.Object r0 = r0.getTag()     // Catch: java.lang.Exception -> L140
            java.util.List r0 = (java.util.List) r0     // Catch: java.lang.Exception -> L140
            r9.cr = r0     // Catch: java.lang.Exception -> L140
            goto L144
        L140:
            r0 = move-exception
            r0.printStackTrace()
        L144:
            com.kwad.sdk.core.video.videoview.a r0 = r9.ex
            com.kwad.sdk.core.video.videoview.b r0 = r0.getController()
            com.kwad.components.core.video.e r0 = (com.kwad.components.core.video.e) r0
            r9.Ox = r0
            r0.setAutoRelease(r11)
            com.kwad.components.core.video.e r0 = r9.Ox
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            r0.mAdWebVideoPageShowing = r4
        L159:
            com.kwad.sdk.core.video.videoview.a r0 = r9.ex
            boolean r10 = r10.isVideoSoundEnable()
            r0.setVideoSoundEnable(r10)
            com.kwad.sdk.core.video.videoview.a r10 = r9.ex
            android.view.ViewParent r10 = r10.getParent()
            if (r10 == 0) goto L17c
            com.kwad.sdk.core.video.videoview.a r10 = r9.ex
            android.view.ViewParent r10 = r10.getParent()
            android.view.ViewGroup r10 = (android.view.ViewGroup) r10
            com.kwad.sdk.core.video.videoview.a r0 = r9.ex
            r10.removeView(r0)
            com.kwad.components.core.video.e r10 = r9.Ox
            r10.qS()
        L17c:
            com.kwad.sdk.widget.RatioFrameLayout r10 = r9.Yl
            java.lang.Object r10 = r10.getTag()
            if (r10 == 0) goto L194
            com.kwad.sdk.widget.RatioFrameLayout r10 = r9.Yl
            java.lang.Object r0 = r10.getTag()
            android.view.View r0 = (android.view.View) r0
            r10.removeView(r0)
            com.kwad.sdk.widget.RatioFrameLayout r10 = r9.Yl
            r10.setTag(r2)
        L194:
            com.kwad.sdk.widget.RatioFrameLayout r10 = r9.Yl
            com.kwad.sdk.core.video.videoview.a r0 = r9.ex
            r10.addView(r0)
            com.kwad.sdk.widget.RatioFrameLayout r10 = r9.Yl
            com.kwad.sdk.core.video.videoview.a r0 = r9.ex
            r10.setTag(r0)
            android.view.ViewGroup r10 = r9.Yw
            r10.setVisibility(r3)
            android.widget.ImageView r10 = r9.Yv
            r10.setVisibility(r3)
            com.kwad.sdk.core.response.model.AdInfo r10 = r9.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r10 = r10.adConversionInfo
            int r10 = r10.h5Type
            if (r10 != r4) goto L1ba
            android.widget.TextView r10 = r9.ek
            r10.setVisibility(r3)
            goto L1ca
        L1ba:
            android.widget.TextView r10 = r9.ek
            r10.setVisibility(r11)
            android.widget.TextView r10 = r9.ek
            com.kwad.sdk.core.response.model.AdInfo r11 = r9.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r11 = r11.adBaseInfo
            java.lang.String r11 = r11.adDescription
            r10.setText(r11)
        L1ca:
            com.kwad.components.core.video.e r10 = r9.Ox
            com.kwad.sdk.core.video.videoview.a r11 = r9.ex
            r9.a(r10, r11)
            return
    }

    @Override
    public final void aK() {
            r4 = this;
            super.aK()
            com.kwad.sdk.core.video.videoview.a r0 = r4.ex
            if (r0 == 0) goto L2a
            boolean r0 = r0.isPlaying()
            if (r0 != 0) goto L2a
            r4.ps()
            android.os.Handler r0 = r4.getHandler()
            if (r0 == 0) goto L2a
            android.os.Handler r0 = r4.getHandler()
            com.kwad.components.core.t.n r1 = r4.YL
            r0.removeCallbacks(r1)
            android.os.Handler r0 = r4.getHandler()
            com.kwad.components.core.t.n r1 = r4.YL
            r2 = 5000(0x1388, double:2.4703E-320)
            r0.postDelayed(r1, r2)
        L2a:
            return
    }

    @Override
    public final void aL() {
            r4 = this;
            super.aL()
            com.kwad.sdk.core.video.videoview.a r0 = r4.ex
            if (r0 == 0) goto L24
            r4.qA()
            android.os.Handler r0 = r4.getHandler()
            if (r0 == 0) goto L24
            android.os.Handler r0 = r4.getHandler()
            com.kwad.components.core.t.n r1 = r4.YL
            r0.removeCallbacks(r1)
            android.os.Handler r0 = r4.getHandler()
            com.kwad.components.core.t.n r1 = r4.YL
            r2 = 5000(0x1388, double:2.4703E-320)
            r0.postDelayed(r1, r2)
        L24:
            return
    }

    @Override
    public final void b(com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0 = this;
            super.b(r1)
            return
    }

    @Override
    protected final void ba() {
            r3 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = new android.support.v4.view.NestedScrollingChildHelper
            r0.<init>(r3)
            r3.Of = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_container
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.sdk.widget.RatioFrameLayout r0 = (com.kwad.sdk.widget.RatioFrameLayout) r0
            r3.Yl = r0
            r1 = 4603219251149406208(0x3fe1eb8520000000, double:0.5600000023841858)
            r0.setRatio(r1)
            int r0 = com.kwad.sdk.R.id.ksad_video_first_frame_container
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.ew = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_text_below
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.ek = r0
            int r0 = com.kwad.sdk.R.id.ksad_web_video_seek_bar
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.sdk.core.view.ScaleAnimSeekBar r0 = (com.kwad.sdk.core.view.ScaleAnimSeekBar) r0
            r3.Ys = r0
            r1 = 100
            r0.setMaxProgress(r1)
            com.kwad.sdk.core.view.ScaleAnimSeekBar r0 = r3.Ys
            r1 = 0
            r0.setMinProgress(r1)
            int r0 = com.kwad.sdk.R.id.ksad_video_text_below_action_bar
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.Yo = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_text_below_action_icon_layout
            android.view.View r0 = r3.findViewById(r0)
            r3.Yp = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_text_below_action_title
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.Yr = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_text_below_action_icon
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.components.core.widget.KSCornerImageView r0 = (com.kwad.components.core.widget.KSCornerImageView) r0
            r3.Yq = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_control_play_total
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.Ym = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_control_play_duration
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.Yn = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_control_play_button
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.Yt = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_control_play_status
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.Yv = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_control_fullscreen
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.Yu = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_control_container
            android.view.View r0 = r3.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r3.Yw = r0
            int r0 = com.kwad.sdk.R.id.ksad_feed_video_container
            android.view.View r0 = r3.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r3.Yz = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_control_fullscreen_container
            android.view.View r0 = r3.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r3.Yx = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_control_fullscreen_title
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.Yy = r0
            return
    }

    @Override
    public boolean dispatchNestedFling(float r2, float r3, boolean r4) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.Of
            boolean r2 = r0.dispatchNestedFling(r2, r3, r4)
            return r2
    }

    @Override
    public boolean dispatchNestedPreFling(float r2, float r3) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.Of
            boolean r2 = r0.dispatchNestedPreFling(r2, r3)
            return r2
    }

    @Override
    public boolean dispatchNestedPreScroll(int r2, int r3, int[] r4, int[] r5) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.Of
            boolean r2 = r0.dispatchNestedPreScroll(r2, r3, r4, r5)
            return r2
    }

    @Override
    public boolean dispatchNestedScroll(int r7, int r8, int r9, int r10, int[] r11) {
            r6 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r6.Of
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            boolean r7 = r0.dispatchNestedScroll(r1, r2, r3, r4, r5)
            return r7
    }

    @Override
    protected int getLayoutId() {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_feed_video
            return r0
    }

    @Override
    public boolean hasNestedScrollingParent() {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.Of
            boolean r0 = r0.hasNestedScrollingParent()
            return r0
    }

    public final boolean isComplete() {
            r1 = this;
            com.kwad.sdk.core.video.videoview.a r0 = r1.ex
            if (r0 == 0) goto L9
            boolean r0 = r0.isCompleted()
            return r0
        L9:
            r0 = 1
            return r0
    }

    @Override
    public boolean isNestedScrollingEnabled() {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.Of
            boolean r0 = r0.isNestedScrollingEnabled()
            return r0
    }

    public final void po() {
            r1 = this;
            com.kwad.components.core.video.e r0 = r1.Ox
            r0.qS()
            return
    }

    public final void ps() {
            r3 = this;
            com.kwad.components.core.video.e r0 = r3.Ox
            r0.qV()
            com.kwad.components.core.video.e r0 = r3.Ox
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.components.core.video.e r0 = r3.Ox
            r1 = 1065353216(0x3f800000, float:1.0)
            r0.setAlpha(r1)
            android.widget.ImageView r0 = r3.Yt
            android.content.Context r1 = r3.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.drawable.ksad_video_player_pause_btn
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)
            r0.setImageDrawable(r1)
            android.widget.ImageView r0 = r3.Yv
            android.content.Context r1 = r3.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.drawable.ksad_video_player_pause_center
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)
            r0.setImageDrawable(r1)
            return
    }

    public final void qA() {
            r3 = this;
            com.kwad.components.core.video.e r0 = r3.Ox
            r0.qU()
            android.widget.ImageView r0 = r3.Yv
            r1 = 0
            r0.setVisibility(r1)
            android.widget.ImageView r0 = r3.Yv
            android.content.Context r1 = r3.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.drawable.ksad_video_play_176
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)
            r0.setImageDrawable(r1)
            android.widget.ImageView r0 = r3.Yt
            android.content.Context r1 = r3.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.drawable.ksad_video_player_play_btn
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)
            r0.setImageDrawable(r1)
            return
    }

    public final void release() {
            r1 = this;
            com.kwad.components.core.video.e r0 = r1.Ox
            if (r0 == 0) goto L7
            r0.release()
        L7:
            return
    }

    @Override
    public void setNestedScrollingEnabled(boolean r2) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.Of
            r0.setNestedScrollingEnabled(r2)
            return
    }

    public void setOnEndBtnClickListener(android.view.View.OnClickListener r1) {
            r0 = this;
            r0.bK = r1
            return
    }

    protected void setUIWithStateAndMode(int r4) {
            r3 = this;
            r0 = 101(0x65, float:1.42E-43)
            if (r4 != r0) goto L11
            android.widget.ImageView r0 = r3.Yu
            android.content.Context r1 = r3.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.drawable.ksad_video_player_exit_fullscreen_btn
            goto L1d
        L11:
            android.widget.ImageView r0 = r3.Yu
            android.content.Context r1 = r3.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.drawable.ksad_video_player_fullscreen_btn
        L1d:
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)
            r0.setImageDrawable(r1)
            r3.YB = r4
            return
    }

    public void setWindowFullScreenListener(com.kwad.components.core.widget.FeedVideoView.a r1) {
            r0 = this;
            r0.YH = r1
            return
    }

    public final boolean ss() {
            r2 = this;
            int r0 = r2.YB
            r1 = 101(0x65, float:1.42E-43)
            if (r0 != r1) goto Lb
            r2.sr()
            r0 = 1
            return r0
        Lb:
            r0 = 0
            return r0
    }

    @Override
    public boolean startNestedScroll(int r2) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.Of
            boolean r2 = r0.startNestedScroll(r2)
            return r2
    }

    @Override
    public void stopNestedScroll() {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.Of
            r0.stopNestedScroll()
            return
    }

    @Override
    public final void z(android.view.View r1) {
            r0 = this;
            super.z(r1)
            return
    }
}

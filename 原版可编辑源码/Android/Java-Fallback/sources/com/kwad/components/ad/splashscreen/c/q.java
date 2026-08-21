package com.kwad.components.ad.splashscreen.c;

public final class q extends com.kwad.components.ad.splashscreen.c.e implements com.kwad.sdk.core.h.c {
    private boolean CQ;
    private volatile boolean DP;
    private boolean DQ;
    private com.kwad.components.ad.splashscreen.widget.SkipView DR;
    private com.kwad.components.core.video.k DS;
    private android.widget.ImageView gG;
    private com.kwad.sdk.utils.h.a gH;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;




    public q() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.DP = r0
            r1.DQ = r0
            r1.CQ = r0
            com.kwad.components.ad.splashscreen.c.q$1 r0 = new com.kwad.components.ad.splashscreen.c.q$1
            r0.<init>(r1)
            r1.gH = r0
            com.kwad.components.ad.splashscreen.c.q$2 r0 = new com.kwad.components.ad.splashscreen.c.q$2
            r0.<init>(r1)
            r1.DS = r0
            return
    }

    static android.widget.ImageView a(com.kwad.components.ad.splashscreen.c.q r0) {
            android.widget.ImageView r0 = r0.gG
            return r0
    }

    private static void a(com.kwad.components.ad.splashscreen.widget.SkipView r0, com.kwad.sdk.core.response.model.AdInfo r1) {
            boolean r1 = com.kwad.sdk.core.response.b.a.cj(r1)
            r0.setTimerBtnVisible(r1)
            return
    }

    static boolean a(com.kwad.components.ad.splashscreen.c.q r0, com.kwad.sdk.core.response.model.AdInfo r1) {
            boolean r0 = r(r1)
            return r0
    }

    static boolean a(com.kwad.components.ad.splashscreen.c.q r0, boolean r1) {
            r0.DP = r1
            return r1
    }

    static boolean b(com.kwad.components.ad.splashscreen.c.q r0) {
            boolean r0 = r0.DP
            return r0
    }

    static boolean b(com.kwad.components.ad.splashscreen.c.q r0, boolean r1) {
            r1 = 1
            r0.DQ = r1
            return r1
    }

    static android.content.Context c(com.kwad.components.ad.splashscreen.c.q r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static com.kwad.sdk.core.response.model.AdInfo d(com.kwad.components.ad.splashscreen.c.q r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static com.kwad.components.ad.splashscreen.widget.SkipView e(com.kwad.components.ad.splashscreen.c.q r0) {
            com.kwad.components.ad.splashscreen.widget.SkipView r0 = r0.DR
            return r0
    }

    static boolean f(com.kwad.components.ad.splashscreen.c.q r0) {
            boolean r0 = r0.DQ
            return r0
    }

    static boolean g(com.kwad.components.ad.splashscreen.c.q r0) {
            boolean r0 = r0.CQ
            return r0
    }

    static android.content.Context h(com.kwad.components.ad.splashscreen.c.q r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    private static boolean r(com.kwad.sdk.core.response.model.AdInfo r0) {
            boolean r0 = com.kwad.sdk.core.response.b.a.cg(r0)
            if (r0 != 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    @Override
    public final void aK() {
            r0 = this;
            return
    }

    @Override
    public final void aL() {
            r1 = this;
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            com.kwad.components.ad.splashscreen.e.a r0 = r0.Cd
            if (r0 == 0) goto Ld
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            com.kwad.components.ad.splashscreen.e.a r0 = r0.Cd
            r0.pause()
        Ld:
            return
    }

    @Override
    public final void ah() {
            r4 = this;
            super.ah()
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r4.mAdInfo = r0
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            int r1 = com.kwad.sdk.R.id.ksad_splash_video_player
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.core.video.DetailVideoView r0 = (com.kwad.components.core.video.DetailVideoView) r0
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            com.kwad.components.ad.splashscreen.e.a r0 = r0.Cd
            if (r0 == 0) goto L2c
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            com.kwad.components.ad.splashscreen.e.a r0 = r0.Cd
            com.kwad.components.core.video.k r2 = r4.DS
            r0.a(r2)
        L2c:
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            com.kwad.sdk.core.h.a r0 = r0.Ce
            r0.a(r4)
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            com.kwad.sdk.core.response.model.AdInfo r2 = r4.mAdInfo
            android.view.ViewGroup r0 = r0.p(r2)
            int r2 = com.kwad.sdk.R.id.ksad_splash_skip_view
            android.view.View r0 = r0.findViewById(r2)
            com.kwad.components.ad.splashscreen.widget.SkipView r0 = (com.kwad.components.ad.splashscreen.widget.SkipView) r0
            r4.DR = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            boolean r0 = r(r0)
            if (r0 == 0) goto L54
            com.kwad.components.ad.splashscreen.widget.SkipView r0 = r4.DR
            com.kwad.sdk.core.response.model.AdInfo r2 = r4.mAdInfo
            a(r0, r2)
        L54:
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r0 = r0.adSplashInfo
            int r0 = r0.mute
            r2 = 2
            r3 = 1
            if (r0 == r2) goto L74
            r2 = 3
            if (r0 == r2) goto L64
            r4.DP = r1
            goto L76
        L64:
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            android.content.Context r0 = r0.getContext()
            int r0 = com.kwad.sdk.utils.k.bR(r0)
            if (r0 <= 0) goto L73
            goto L74
        L73:
            r3 = r1
        L74:
            r4.DP = r3
        L76:
            android.content.Context r0 = r4.getContext()
            com.kwad.components.core.t.a r0 = com.kwad.components.core.t.a.al(r0)
            boolean r0 = r0.qh()
            if (r0 == 0) goto L86
            r4.DP = r1
        L86:
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            com.kwad.components.ad.splashscreen.e.a r0 = r0.Cd
            if (r0 == 0) goto L9e
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            com.kwad.components.ad.splashscreen.e.a r0 = r0.Cd
            boolean r2 = r4.DP
            r0.setAudioEnabled(r2, r1)
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            com.kwad.components.ad.splashscreen.e.a r0 = r0.Cd
            com.kwad.sdk.utils.h$a r2 = r4.gH
            r0.a(r2)
        L9e:
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            int r2 = com.kwad.sdk.R.id.ksad_splash_sound
            android.view.View r0 = r0.findViewById(r2)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r4.gG = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            boolean r0 = com.kwad.components.ad.splashscreen.f.c.v(r0)
            if (r0 == 0) goto Led
            android.widget.ImageView r0 = r4.gG
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0
            r2 = 51
            r0.gravity = r2
            android.widget.ImageView r2 = r4.gG
            r2.setLayoutParams(r0)
            android.widget.ImageView r0 = r4.gG
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            boolean r2 = r0 instanceof android.view.ViewGroup.MarginLayoutParams
            if (r2 == 0) goto Led
            android.view.ViewGroup$MarginLayoutParams r0 = (android.view.ViewGroup.MarginLayoutParams) r0
            android.widget.ImageView r2 = r4.gG
            android.content.Context r2 = r2.getContext()
            r3 = 1107296256(0x42000000, float:32.0)
            int r2 = com.kwad.sdk.d.a.a.a(r2, r3)
            r0.topMargin = r2
            android.widget.ImageView r2 = r4.gG
            android.content.Context r2 = r2.getContext()
            r3 = 1098907648(0x41800000, float:16.0)
            int r2 = com.kwad.sdk.d.a.a.a(r2, r3)
            r0.leftMargin = r2
        Led:
            android.widget.ImageView r0 = r4.gG
            r0.setVisibility(r1)
            boolean r0 = r4.DP
            if (r0 == 0) goto Lfd
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r0 = r0.adSplashInfo
            java.lang.String r0 = r0.speakerIconUrl
            goto L103
        Lfd:
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r0 = r0.adSplashInfo
            java.lang.String r0 = r0.speakerMuteIconUrl
        L103:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L113
            android.widget.ImageView r1 = r4.gG
            com.kwad.components.ad.splashscreen.h r2 = r4.CM
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r1, r0, r2)
            goto L126
        L113:
            android.widget.ImageView r0 = r4.gG
            android.content.Context r1 = r4.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.drawable.ksad_splash_sound_selector
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)
            r0.setImageDrawable(r1)
        L126:
            android.widget.ImageView r0 = r4.gG
            boolean r1 = r4.DP
            r0.setSelected(r1)
            android.widget.ImageView r0 = r4.gG
            com.kwad.components.ad.splashscreen.c.q$3 r1 = new com.kwad.components.ad.splashscreen.c.q$3
            r1.<init>(r4)
            r0.setOnClickListener(r1)
            return
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            super.onDestroy()
            r0 = 1
            r1.CQ = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.components.ad.splashscreen.e.a r0 = r0.Cd
            if (r0 == 0) goto L1b
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.components.ad.splashscreen.e.a r0 = r0.Cd
            com.kwad.components.core.video.k r1 = r2.DS
            r0.b(r1)
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.components.ad.splashscreen.e.a r0 = r0.Cd
            com.kwad.sdk.utils.h$a r1 = r2.gH
            r0.b(r1)
        L1b:
            com.kwad.components.ad.splashscreen.widget.SkipView r0 = r2.DR
            android.os.Handler r0 = r0.getHandler()
            if (r0 == 0) goto L2d
            com.kwad.components.ad.splashscreen.widget.SkipView r0 = r2.DR
            android.os.Handler r0 = r0.getHandler()
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
        L2d:
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.h.a r0 = r0.Ce
            r0.b(r2)
            return
    }
}

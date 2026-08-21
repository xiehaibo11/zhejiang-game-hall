package com.kwad.components.core.page.splitLandingPage.view;

public final class a {
    private android.widget.ImageView Ib;
    private android.view.WindowManager Ot;
    private com.kwad.components.core.page.splitLandingPage.a.a Ou;
    private android.widget.FrameLayout Ov;
    private android.widget.FrameLayout Ow;
    private com.kwad.components.core.video.e Ox;
    private final android.view.WindowManager.LayoutParams Oy;
    private com.kwad.components.core.page.splitLandingPage.view.a.a Oz;
    private android.widget.ImageView ew;
    private com.kwad.sdk.core.video.videoview.a ex;
    private android.content.Context mContext;
    private android.view.ViewGroup yV;




    public interface a {
        boolean pp();
    }

    public a(android.content.Context r2, com.kwad.components.core.page.splitLandingPage.a.a r3) {
            r1 = this;
            r1.<init>()
            android.view.WindowManager$LayoutParams r0 = new android.view.WindowManager$LayoutParams
            r0.<init>()
            r1.Oy = r0
            if (r2 != 0) goto Ld
            return
        Ld:
            android.content.Context r2 = com.kwad.sdk.m.l.wrapContextIfNeed(r2)
            r1.mContext = r2
            r1.Ou = r3
            java.lang.String r3 = "window"
            java.lang.Object r2 = r2.getSystemService(r3)
            android.view.WindowManager r2 = (android.view.WindowManager) r2
            r1.Ot = r2
            if (r2 != 0) goto L22
            return
        L22:
            android.content.Context r2 = r1.mContext
            android.view.LayoutInflater r2 = android.view.LayoutInflater.from(r2)
            int r3 = com.kwad.sdk.R.layout.ksad_split_mini_video
            r0 = 0
            android.view.View r2 = r2.inflate(r3, r0)
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            r1.yV = r2
            int r3 = com.kwad.sdk.R.id.ksad_split_texture
            android.view.View r2 = r2.findViewById(r3)
            android.widget.FrameLayout r2 = (android.widget.FrameLayout) r2
            r1.Ov = r2
            android.view.ViewGroup r2 = r1.yV
            int r3 = com.kwad.sdk.R.id.ksad_video_container
            android.view.View r2 = r2.findViewById(r3)
            android.widget.FrameLayout r2 = (android.widget.FrameLayout) r2
            r1.Ow = r2
            android.view.ViewGroup r2 = r1.yV
            int r3 = com.kwad.sdk.R.id.ksad_video_first_frame_container
            android.view.View r2 = r2.findViewById(r3)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            r1.ew = r2
            android.view.ViewGroup r2 = r1.yV
            int r3 = com.kwad.sdk.R.id.ksad_split_mini_close_btn
            android.view.View r2 = r2.findViewById(r3)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            r1.Ib = r2
            android.widget.FrameLayout r2 = r1.Ov
            com.kwad.components.core.page.splitLandingPage.view.a$1 r3 = new com.kwad.components.core.page.splitLandingPage.view.a$1
            r3.<init>(r1)
            r2.setOnTouchListener(r3)
            return
    }

    static android.view.WindowManager.LayoutParams a(com.kwad.components.core.page.splitLandingPage.view.a r0) {
            android.view.WindowManager$LayoutParams r0 = r0.Oy
            return r0
    }

    static android.view.WindowManager b(com.kwad.components.core.page.splitLandingPage.view.a r0) {
            android.view.WindowManager r0 = r0.Ot
            return r0
    }

    private void b(com.kwad.sdk.api.KsAdVideoPlayConfig r9) {
            r8 = this;
            com.kwad.components.core.page.splitLandingPage.a.a r0 = r8.Ou
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.sdk.core.response.model.b r2 = com.kwad.sdk.core.response.b.a.bi(r1)
            java.lang.String r2 = r2.getUrl()
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            r4 = 0
            r5 = 0
            if (r3 != 0) goto L2a
            android.widget.ImageView r3 = r8.ew
            r3.setImageDrawable(r5)
            android.widget.ImageView r3 = r8.ew
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r3, r2, r0)
            android.widget.ImageView r2 = r8.ew
            r2.setVisibility(r4)
            goto L31
        L2a:
            android.widget.ImageView r2 = r8.ew
            r3 = 8
            r2.setVisibility(r3)
        L31:
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.F(r1)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto L3c
            return
        L3c:
            com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache r3 = com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache.getInstance()
            com.kwad.sdk.core.video.videoview.a r2 = r3.dJ(r2)
            r8.ex = r2
            if (r2 != 0) goto Lb1
            com.kwad.sdk.core.video.videoview.a r2 = new com.kwad.sdk.core.video.videoview.a
            android.content.Context r3 = r8.mContext
            r2.<init>(r3)
            r8.ex = r2
            com.kwad.sdk.core.response.b.a.T(r1)
            com.kwad.sdk.contentalliance.a.a.b$a r1 = new com.kwad.sdk.contentalliance.a.a.b$a
            r1.<init>(r0)
            com.kwad.sdk.core.response.model.VideoPlayerStatus r2 = r0.mVideoPlayerStatus
            com.kwad.sdk.contentalliance.a.a.b$a r1 = r1.a(r2)
            java.lang.String r2 = com.kwad.sdk.core.response.b.d.ci(r0)
            com.kwad.sdk.contentalliance.a.a.b$a r1 = r1.cn(r2)
            com.kwad.sdk.core.response.model.PhotoInfo r2 = com.kwad.sdk.core.response.b.d.ch(r0)
            java.lang.String r2 = com.kwad.sdk.core.response.b.f.b(r2)
            com.kwad.sdk.contentalliance.a.a.b$a r1 = r1.co(r2)
            com.kwad.sdk.contentalliance.a.a.a r2 = new com.kwad.sdk.contentalliance.a.a.a
            long r6 = java.lang.System.currentTimeMillis()
            r2.<init>(r0, r6)
            com.kwad.sdk.contentalliance.a.a.b$a r1 = r1.b(r2)
            com.kwad.sdk.contentalliance.a.a.b r1 = r1.yS()
            com.kwad.sdk.core.video.videoview.a r2 = r8.ex
            r2.a(r1, r5)
            com.kwad.sdk.core.video.videoview.a r1 = r8.ex
            boolean r2 = r9.isVideoSoundEnable()
            r1.setVideoSoundEnable(r2)
            com.kwad.components.core.video.e r1 = new com.kwad.components.core.video.e
            android.content.Context r2 = r8.mContext
            com.kwad.sdk.core.video.videoview.a r3 = r8.ex
            r1.<init>(r2, r0, r3, r9)
            r8.Ox = r1
            boolean r0 = r9.isDataFlowAutoStart()
            r1.setDataFlowAutoStart(r0)
            com.kwad.sdk.core.video.videoview.a r0 = r8.ex
            com.kwad.components.core.video.e r1 = r8.Ox
            r0.setController(r1)
            com.kwad.components.core.video.e r0 = r8.Ox
            r0.setAutoRelease(r4)
            goto Lc5
        Lb1:
            com.kwad.sdk.core.video.videoview.b r0 = r2.getController()
            com.kwad.components.core.video.e r0 = (com.kwad.components.core.video.e) r0
            r8.Ox = r0
            r0.setAutoRelease(r4)
            com.kwad.components.core.video.e r0 = r8.Ox
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            r1 = 1
            r0.mAdWebVideoPageShowing = r1
        Lc5:
            com.kwad.sdk.core.video.videoview.a r0 = r8.ex
            boolean r9 = r9.isVideoSoundEnable()
            r0.setVideoSoundEnable(r9)
            com.kwad.sdk.core.video.videoview.a r9 = r8.ex
            android.view.ViewParent r9 = r9.getParent()
            if (r9 == 0) goto Le3
            com.kwad.sdk.core.video.videoview.a r9 = r8.ex
            android.view.ViewParent r9 = r9.getParent()
            android.view.ViewGroup r9 = (android.view.ViewGroup) r9
            com.kwad.sdk.core.video.videoview.a r0 = r8.ex
            r9.removeView(r0)
        Le3:
            android.widget.FrameLayout r9 = r8.Ow
            java.lang.Object r9 = r9.getTag()
            if (r9 == 0) goto Lfb
            android.widget.FrameLayout r9 = r8.Ow
            java.lang.Object r0 = r9.getTag()
            android.view.View r0 = (android.view.View) r0
            r9.removeView(r0)
            android.widget.FrameLayout r9 = r8.Ow
            r9.setTag(r5)
        Lfb:
            android.widget.FrameLayout r9 = r8.Ow
            com.kwad.sdk.core.video.videoview.a r0 = r8.ex
            r9.addView(r0)
            android.widget.FrameLayout r9 = r8.Ow
            com.kwad.sdk.core.video.videoview.a r0 = r8.ex
            r9.setTag(r0)
            com.kwad.components.core.video.e r9 = r8.Ox
            r0 = 1008981770(0x3c23d70a, float:0.01)
            r9.setAlpha(r0)
            com.kwad.components.core.video.e r9 = r8.Ox
            com.kwad.components.core.page.splitLandingPage.view.a$3 r0 = new com.kwad.components.core.page.splitLandingPage.view.a$3
            r0.<init>(r8)
            r9.setVideoPlayCallback(r0)
            return
    }

    static android.view.ViewGroup c(com.kwad.components.core.page.splitLandingPage.view.a r0) {
            android.view.ViewGroup r0 = r0.yV
            return r0
    }

    static com.kwad.components.core.page.splitLandingPage.view.a.a d(com.kwad.components.core.page.splitLandingPage.view.a r0) {
            com.kwad.components.core.page.splitLandingPage.view.a$a r0 = r0.Oz
            return r0
    }

    static com.kwad.components.core.page.splitLandingPage.a.a e(com.kwad.components.core.page.splitLandingPage.view.a r0) {
            com.kwad.components.core.page.splitLandingPage.a.a r0 = r0.Ou
            return r0
    }

    public final void a(com.kwad.components.core.page.splitLandingPage.view.a.a r1) {
            r0 = this;
            r0.Oz = r1
            return
    }

    public final android.animation.Animator aC(boolean r5) {
            r4 = this;
            android.animation.AnimatorSet r0 = new android.animation.AnimatorSet
            r0.<init>()
            android.view.ViewGroup r1 = r4.yV
            android.animation.ValueAnimator r1 = com.kwad.components.core.t.m.h(r1, r5)
            android.widget.ImageView r2 = r4.ew
            android.animation.ValueAnimator r5 = com.kwad.components.core.t.m.h(r2, r5)
            r2 = 2
            android.animation.Animator[] r2 = new android.animation.Animator[r2]
            r3 = 0
            r2[r3] = r1
            r1 = 1
            r2[r1] = r5
            r0.playTogether(r2)
            return r0
    }

    public final boolean isVisible() {
            r2 = this;
            android.view.ViewGroup r0 = r2.yV
            float r0 = r0.getAlpha()
            r1 = 0
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 <= 0) goto Ld
            r0 = 1
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public final void po() {
            r1 = this;
            com.kwad.components.core.video.e r0 = r1.Ox
            r0.ab()
            return
    }

    public final boolean pr() {
            r7 = this;
            com.kwad.components.core.page.splitLandingPage.a.a r0 = r7.Ou
            if (r0 == 0) goto L154
            android.view.WindowManager r0 = r7.Ot
            if (r0 != 0) goto La
            goto L154
        La:
            com.kwad.sdk.api.KsAdVideoPlayConfig$Builder r0 = new com.kwad.sdk.api.KsAdVideoPlayConfig$Builder
            r0.<init>()
            com.kwad.components.core.page.splitLandingPage.a.a r1 = r7.Ou
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.getAdTemplate()
            boolean r1 = r1.mIsAudioEnable
            com.kwad.sdk.api.KsAdVideoPlayConfig$Builder r0 = r0.videoSoundEnable(r1)
            com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r0.build()
            r7.b(r0)
            com.kwad.components.core.page.splitLandingPage.a.a r0 = r7.Ou
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            int r1 = com.kwad.sdk.core.response.b.a.L(r0)
            int r0 = com.kwad.sdk.core.response.b.a.K(r0)
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            android.content.Context r3 = r7.mContext
            android.content.res.Resources r3 = r3.getResources()
            android.util.DisplayMetrics r3 = r3.getDisplayMetrics()
            r4 = 1118568448(0x42ac0000, float:86.0)
            r5 = 1132199936(0x437c0000, float:252.0)
            r6 = 1125777408(0x431a0000, float:154.0)
            if (r1 <= r0) goto L6e
            int r0 = r3.widthPixels
            r2.right = r0
            int r0 = r2.right
            android.content.Context r1 = r7.mContext
            int r1 = com.kwad.sdk.d.a.a.a(r1, r4)
            int r0 = r0 - r1
            r2.left = r0
            int r0 = r3.heightPixels
            android.content.Context r1 = r7.mContext
            int r1 = com.kwad.sdk.d.a.a.a(r1, r5)
            int r0 = r0 - r1
            r2.bottom = r0
            int r0 = r2.bottom
            android.content.Context r1 = r7.mContext
            int r1 = com.kwad.sdk.d.a.a.a(r1, r6)
            goto L90
        L6e:
            int r0 = r3.widthPixels
            r2.right = r0
            int r0 = r2.right
            android.content.Context r1 = r7.mContext
            int r1 = com.kwad.sdk.d.a.a.a(r1, r6)
            int r0 = r0 - r1
            r2.left = r0
            int r0 = r3.heightPixels
            android.content.Context r1 = r7.mContext
            int r1 = com.kwad.sdk.d.a.a.a(r1, r5)
            int r0 = r0 - r1
            r2.bottom = r0
            int r0 = r2.bottom
            android.content.Context r1 = r7.mContext
            int r1 = com.kwad.sdk.d.a.a.a(r1, r4)
        L90:
            int r0 = r0 - r1
            r2.top = r0
            int r0 = r2.left
            android.content.Context r1 = r7.mContext
            r4 = 1094713344(0x41400000, float:12.0)
            int r1 = com.kwad.sdk.d.a.a.a(r1, r4)
            int r0 = r0 - r1
            r2.left = r0
            int r0 = r2.right
            android.content.Context r1 = r7.mContext
            int r1 = com.kwad.sdk.d.a.a.a(r1, r4)
            int r0 = r0 - r1
            r2.right = r0
            android.view.WindowManager$LayoutParams r0 = r7.Oy
            r1 = 1003(0x3eb, float:1.406E-42)
            r0.type = r1
            android.view.WindowManager$LayoutParams r0 = r7.Oy
            r1 = 8
            r0.flags = r1
            android.view.WindowManager$LayoutParams r0 = r7.Oy
            r1 = 51
            r0.gravity = r1
            android.view.WindowManager$LayoutParams r0 = r7.Oy
            r1 = 1
            r0.format = r1
            android.view.WindowManager$LayoutParams r0 = r7.Oy
            int r5 = r3.widthPixels
            r0.width = r5
            android.view.WindowManager$LayoutParams r0 = r7.Oy
            int r5 = r3.heightPixels
            r0.height = r5
            android.view.WindowManager$LayoutParams r0 = r7.Oy
            int r5 = r2.left
            r0.x = r5
            android.view.WindowManager$LayoutParams r0 = r7.Oy
            int r5 = r2.top
            r0.y = r5
            android.view.WindowManager$LayoutParams r0 = r7.Oy
            int r5 = r2.right
            int r6 = r2.left
            int r5 = r5 - r6
            android.content.Context r6 = r7.mContext
            int r6 = com.kwad.sdk.d.a.a.a(r6, r4)
            int r5 = r5 + r6
            r0.width = r5
            android.view.WindowManager$LayoutParams r0 = r7.Oy
            int r5 = r2.bottom
            int r6 = r2.top
            int r5 = r5 - r6
            android.content.Context r6 = r7.mContext
            int r4 = com.kwad.sdk.d.a.a.a(r6, r4)
            int r5 = r5 + r4
            r0.height = r5
            int r0 = r2.left
            float r0 = (float) r0
            int r4 = r3.widthPixels
            float r4 = (float) r4
            float r0 = r0 * r4
            int r4 = r2.left
            int r5 = r3.widthPixels
            int r4 = r4 + r5
            int r5 = r2.right
            int r4 = r4 - r5
            float r4 = (float) r4
            float r0 = r0 / r4
            int r4 = r2.top
            float r4 = (float) r4
            int r5 = r3.heightPixels
            float r5 = (float) r5
            float r4 = r4 * r5
            int r5 = r2.top
            int r3 = r3.heightPixels
            int r5 = r5 + r3
            int r2 = r2.bottom
            int r5 = r5 - r2
            float r2 = (float) r5
            float r4 = r4 / r2
            android.view.ViewGroup r2 = r7.yV
            r2.setPivotX(r0)
            android.view.ViewGroup r0 = r7.yV
            r0.setPivotY(r4)
            android.view.ViewGroup r0 = r7.yV
            r2 = 0
            r0.setAlpha(r2)
            android.view.WindowManager r0 = r7.Ot
            if (r0 == 0) goto L149
            android.view.ViewGroup r0 = r7.yV     // Catch: java.lang.Exception -> L142
            android.os.IBinder r0 = r0.getWindowToken()     // Catch: java.lang.Exception -> L142
            if (r0 != 0) goto L149
            android.view.WindowManager r0 = r7.Ot     // Catch: java.lang.Exception -> L142
            android.view.ViewGroup r2 = r7.yV     // Catch: java.lang.Exception -> L142
            android.view.WindowManager$LayoutParams r3 = r7.Oy     // Catch: java.lang.Exception -> L142
            r0.addView(r2, r3)     // Catch: java.lang.Exception -> L142
            goto L149
        L142:
            r0 = move-exception
            com.kwad.components.core.d.a.b(r0)
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        L149:
            android.widget.ImageView r0 = r7.Ib
            com.kwad.components.core.page.splitLandingPage.view.a$2 r2 = new com.kwad.components.core.page.splitLandingPage.view.a$2
            r2.<init>(r7)
            r0.setOnClickListener(r2)
            return r1
        L154:
            r0 = 0
            return r0
    }

    public final void ps() {
            r1 = this;
            com.kwad.sdk.core.video.videoview.a r0 = r1.ex
            if (r0 == 0) goto Lf
            boolean r0 = r0.isPlaying()
            if (r0 != 0) goto Lf
            com.kwad.components.core.video.e r0 = r1.Ox
            r0.qV()
        Lf:
            return
    }
}

package com.kwad.components.ad.reward.presenter;

public final class u extends com.kwad.components.ad.reward.presenter.a {
    private com.kwad.components.core.video.l mVideoPlayStateListener;
    private android.widget.ImageView tA;
    private android.view.ViewGroup.LayoutParams tB;
    private com.kwad.components.core.video.DetailVideoView tx;
    private android.view.ViewGroup ty;
    private android.widget.FrameLayout tz;


    public u() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.tB = r0
            com.kwad.components.ad.reward.presenter.u$1 r0 = new com.kwad.components.ad.reward.presenter.u$1
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            return
    }

    private void N(int r4) {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            android.widget.FrameLayout r1 = r3.tz
            r2 = 0
            android.view.View r4 = com.kwad.sdk.m.l.a(r0, r4, r1, r2)
            android.widget.FrameLayout r0 = r3.tz
            r1 = -1
            r0.addView(r4, r1, r1)
            return
    }

    static com.kwad.components.core.video.DetailVideoView a(com.kwad.components.ad.reward.presenter.u r0) {
            com.kwad.components.core.video.DetailVideoView r0 = r0.tx
            return r0
    }

    private void hS() {
            r1 = this;
            java.lang.Class<com.kwad.sdk.components.DevelopMangerComponents> r0 = com.kwad.sdk.components.DevelopMangerComponents.class
            com.kwad.sdk.components.a r0 = com.kwad.sdk.components.c.f(r0)
            com.kwad.sdk.components.DevelopMangerComponents r0 = (com.kwad.sdk.components.DevelopMangerComponents) r0
            return
    }

    private void hT() {
            r8 = this;
            com.kwad.components.ad.reward.j r0 = r8.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r8.getContext()
            boolean r1 = com.kwad.sdk.utils.ai.IN()
            r2 = 1
            r1 = r1 ^ r2
            boolean r3 = com.kwad.sdk.core.response.b.a.bv(r0)
            boolean r4 = com.kwad.sdk.core.response.b.a.co(r0)
            r5 = 0
            if (r4 == 0) goto L24
            boolean r4 = com.kwad.components.ad.reward.a.b.gP()
            if (r4 == 0) goto L24
            r4 = r2
            goto L25
        L24:
            r4 = r5
        L25:
            com.kwad.components.ad.reward.j r6 = r8.qx
            com.kwad.sdk.core.response.model.AdTemplate r6 = r6.mAdTemplate
            boolean r6 = com.kwad.components.ad.reward.j.r(r6)
            if (r6 != 0) goto L40
            com.kwad.components.ad.reward.j r6 = r8.qx
            com.kwad.sdk.core.response.model.AdTemplate r6 = r6.mAdTemplate
            boolean r6 = com.kwad.components.ad.reward.j.s(r6)
            if (r6 != 0) goto L40
            if (r3 != 0) goto L40
            if (r4 == 0) goto L3e
            goto L40
        L3e:
            r6 = r5
            goto L41
        L40:
            r6 = r2
        L41:
            r7 = 8
            if (r1 == 0) goto L75
            if (r6 == 0) goto L75
            android.view.ViewGroup r1 = r8.ty
            if (r4 == 0) goto L4c
            r5 = 4
        L4c:
            r1.setVisibility(r5)
            if (r3 == 0) goto L59
            android.widget.ImageView r1 = r8.tA
            r1.setVisibility(r7)
            int r1 = com.kwad.sdk.R.layout.ksad_playable_end_info
            goto L5b
        L59:
            int r1 = com.kwad.sdk.R.layout.ksad_activity_apk_info_landscape
        L5b:
            r8.N(r1)
            boolean r0 = com.kwad.sdk.core.response.b.a.aR(r0)
            r0 = r0 ^ r2
            if (r0 == 0) goto L6d
            com.kwad.components.core.video.DetailVideoView r0 = r8.tx
            r1 = 17
            r0.updateTextureViewGravity(r1)
            goto L7a
        L6d:
            com.kwad.components.core.video.DetailVideoView r0 = r8.tx
            r1 = 21
            r0.updateTextureViewGravity(r1)
            return
        L75:
            android.view.ViewGroup r0 = r8.ty
            r0.setVisibility(r7)
        L7a:
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            r2.hS()
            com.kwad.components.core.video.DetailVideoView r0 = r2.tx
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            if (r0 == 0) goto L15
            android.view.ViewGroup$LayoutParams r1 = new android.view.ViewGroup$LayoutParams
            r1.<init>(r0)
            r2.tB = r1
        L15:
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.a(r1)
            r2.hT()
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_video_player
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.components.core.video.DetailVideoView r0 = (com.kwad.components.core.video.DetailVideoView) r0
            r1.tx = r0
            int r0 = com.kwad.sdk.R.id.ksad_play_right_area
            android.view.View r0 = r1.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1.ty = r0
            int r0 = com.kwad.sdk.R.id.ksad_play_right_area_bg_img
            android.view.View r0 = r1.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r1.tA = r0
            int r0 = com.kwad.sdk.R.id.ksad_play_right_area_container
            android.view.View r0 = r1.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1.tz = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.b(r1)
            android.view.ViewGroup$LayoutParams r0 = r2.tB
            if (r0 == 0) goto L36
            com.kwad.components.core.video.DetailVideoView r0 = r2.tx
            if (r0 == 0) goto L36
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            if (r0 == 0) goto L2b
            android.view.ViewGroup$LayoutParams r1 = r2.tB
            int r1 = r1.width
            r0.width = r1
            android.view.ViewGroup$LayoutParams r1 = r2.tB
            int r1 = r1.height
            r0.height = r1
            com.kwad.components.core.video.DetailVideoView r1 = r2.tx
            r1.setLayoutParams(r0)
        L2b:
            com.kwad.components.core.video.DetailVideoView r0 = r2.tx
            if (r0 == 0) goto L33
            r1 = 4
            r0.setVisibility(r1)
        L33:
            r0 = 0
            r2.tB = r0
        L36:
            return
    }
}

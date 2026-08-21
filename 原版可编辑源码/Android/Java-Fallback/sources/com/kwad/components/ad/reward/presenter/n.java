package com.kwad.components.ad.reward.presenter;

public final class n extends com.kwad.components.ad.reward.presenter.a implements android.view.View.OnClickListener, com.kwad.components.ad.reward.presenter.platdetail.actionbar.a {
    private static long sv = 300;
    private android.widget.ImageView eZ;
    private com.kwad.components.ad.reward.e.f mPlayEndPageListener;
    private java.lang.ref.WeakReference<android.view.View> sA;
    private com.kwad.components.ad.reward.presenter.q sB;
    private boolean sC;
    private android.view.ViewGroup sw;
    private android.widget.TextView sx;
    private boolean sy;
    private float sz;




    static {
            return
    }

    public n(com.kwad.components.ad.reward.presenter.q r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.sC = r0
            com.kwad.components.ad.reward.presenter.n$1 r0 = new com.kwad.components.ad.reward.presenter.n$1
            r0.<init>(r1)
            r1.mPlayEndPageListener = r0
            r1.sB = r2
            return
    }

    static android.animation.Animator a(com.kwad.components.ad.reward.presenter.n r0) {
            android.animation.Animator r0 = r0.hG()
            return r0
    }

    private void a(android.view.ViewGroup.LayoutParams r5) {
            r4 = this;
            if (r5 != 0) goto L3
            return
        L3:
            android.view.ViewGroup r0 = r4.sw
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            boolean r1 = r0 instanceof android.view.ViewGroup.MarginLayoutParams
            if (r1 == 0) goto L5a
            android.view.ViewGroup$MarginLayoutParams r0 = (android.view.ViewGroup.MarginLayoutParams) r0
            int r1 = r5.height
            r2 = -1
            if (r1 != r2) goto L23
            android.view.ViewGroup r5 = r4.sw
            android.content.res.Resources r5 = r5.getResources()
            int r1 = com.kwad.sdk.R.dimen.ksad_reward_playable_pre_tips_margin_bottom_without_actionbar
            int r5 = r5.getDimensionPixelSize(r1)
        L20:
            r0.bottomMargin = r5
            goto L55
        L23:
            android.view.ViewGroup r1 = r4.sw
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.dimen.ksad_reward_playable_pre_tips_margin_bottom
            int r1 = r1.getDimensionPixelSize(r2)
            boolean r2 = r5 instanceof android.view.ViewGroup.MarginLayoutParams
            if (r2 == 0) goto L51
            android.view.ViewGroup$MarginLayoutParams r5 = (android.view.ViewGroup.MarginLayoutParams) r5
            r2 = 0
            java.lang.ref.WeakReference<android.view.View> r3 = r4.sA
            if (r3 == 0) goto L40
            java.lang.Object r2 = r3.get()
            android.view.View r2 = (android.view.View) r2
        L40:
            int r3 = r5.height
            if (r3 > 0) goto L4a
            if (r2 == 0) goto L4a
            int r3 = r2.getHeight()
        L4a:
            int r5 = r5.bottomMargin
            int r3 = r3 + r5
            int r3 = r3 + r1
            r0.bottomMargin = r3
            goto L55
        L51:
            int r5 = r5.height
            int r5 = r5 + r1
            goto L20
        L55:
            android.view.ViewGroup r5 = r4.sw
            r5.setLayoutParams(r0)
        L5a:
            return
    }

    private synchronized void hF() {
            r5 = this;
            monitor-enter(r5)
            boolean r0 = r5.sC     // Catch: java.lang.Throwable -> L2b
            if (r0 == 0) goto L7
            monitor-exit(r5)
            return
        L7:
            com.kwad.components.ad.reward.j r0 = r5.qx     // Catch: java.lang.Throwable -> L2b
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate     // Catch: java.lang.Throwable -> L2b
            r1 = 0
            com.kwad.sdk.core.report.j r2 = new com.kwad.sdk.core.report.j     // Catch: java.lang.Throwable -> L2b
            r2.<init>()     // Catch: java.lang.Throwable -> L2b
            r3 = 192(0xc0, float:2.69E-43)
            com.kwad.sdk.core.report.j r2 = r2.ci(r3)     // Catch: java.lang.Throwable -> L2b
            com.kwad.components.ad.reward.j r3 = r5.qx     // Catch: java.lang.Throwable -> L2b
            com.kwad.components.ad.reward.l.d r3 = r3.oV     // Catch: java.lang.Throwable -> L2b
            long r3 = r3.getPlayDuration()     // Catch: java.lang.Throwable -> L2b
            com.kwad.sdk.core.report.j r2 = r2.af(r3)     // Catch: java.lang.Throwable -> L2b
            com.kwad.sdk.core.report.a.d(r0, r1, r2)     // Catch: java.lang.Throwable -> L2b
            r0 = 1
            r5.sC = r0     // Catch: java.lang.Throwable -> L2b
            monitor-exit(r5)
            return
        L2b:
            r0 = move-exception
            monitor-exit(r5)
            throw r0
    }

    private android.animation.Animator hG() {
            r9 = this;
            android.animation.AnimatorSet r0 = new android.animation.AnimatorSet
            r0.<init>()
            android.content.Context r1 = r9.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.dimen.ksad_reward_playable_pre_tips_transx
            float r1 = r1.getDimension(r2)
            android.view.ViewGroup r2 = r9.sw
            r3 = 1
            float[] r4 = new float[r3]
            r5 = 0
            r4[r5] = r1
            java.lang.String r1 = "translationX"
            android.animation.ObjectAnimator r1 = android.animation.ObjectAnimator.ofFloat(r2, r1, r4)
            android.widget.ImageView r2 = r9.eZ
            android.graphics.drawable.Drawable r2 = r2.getBackground()
            boolean r4 = r2 instanceof android.graphics.drawable.ColorDrawable
            r6 = 2
            if (r4 == 0) goto L5d
            android.graphics.drawable.ColorDrawable r2 = (android.graphics.drawable.ColorDrawable) r2
            android.content.Context r4 = r9.getContext()
            android.content.res.Resources r4 = r4.getResources()
            int r7 = com.kwad.sdk.R.color.ksad_playable_pre_tips_icon_bg
            int r4 = r4.getColor(r7)
            android.content.Context r7 = r9.getContext()
            android.content.res.Resources r7 = r7.getResources()
            int r8 = com.kwad.sdk.R.color.ksad_reward_main_color
            int r7 = r7.getColor(r8)
            int[] r8 = new int[r6]
            r8[r5] = r4
            r8[r3] = r7
            android.animation.ValueAnimator r4 = com.kwad.sdk.widget.a.ofArgb(r8)
            com.kwad.components.ad.reward.presenter.n$3 r7 = new com.kwad.components.ad.reward.presenter.n$3
            r7.<init>(r9, r2)
            r4.addUpdateListener(r7)
            goto L5e
        L5d:
            r4 = 0
        L5e:
            android.widget.TextView r2 = r9.sx
            float[] r7 = new float[r6]
            r7 = {x007e: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            java.lang.String r8 = "alpha"
            android.animation.ObjectAnimator r2 = android.animation.ObjectAnimator.ofFloat(r2, r8, r7)
            r7 = 3
            android.animation.Animator[] r7 = new android.animation.Animator[r7]
            r7[r5] = r1
            r7[r3] = r4
            r7[r6] = r2
            r0.playTogether(r7)
            long r1 = com.kwad.components.ad.reward.presenter.n.sv
            r0.setDuration(r1)
            return r0
    }

    private void initView() {
            r3 = this;
            android.view.ViewGroup r0 = r3.sw
            if (r0 != 0) goto L5
            return
        L5:
            int r1 = com.kwad.sdk.R.id.ksad_playabel_pre_tips_icon
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.eZ = r0
            android.content.Context r1 = r3.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.color.ksad_playable_pre_tips_icon_bg
            int r1 = r1.getColor(r2)
            r0.setBackgroundColor(r1)
            android.view.ViewGroup r0 = r3.sw
            int r1 = com.kwad.sdk.R.id.ksad_playabel_pre_tips_text
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.sx = r0
            android.view.ViewGroup r0 = r3.sw
            r0.setOnClickListener(r3)
            return
    }

    public final void J(boolean r4) {
            r3 = this;
            android.view.ViewGroup r0 = r3.sw
            if (r0 != 0) goto L5
            return
        L5:
            int r0 = r0.getVisibility()
            if (r0 != 0) goto Lc
            return
        Lc:
            r3.hF()
            java.lang.ref.WeakReference<android.view.View> r0 = r3.sA
            if (r0 == 0) goto L28
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto L28
            java.lang.ref.WeakReference<android.view.View> r0 = r3.sA
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            r3.a(r0)
        L28:
            android.view.ViewGroup r0 = r3.sw
            r1 = 0
            r0.setVisibility(r1)
            if (r4 == 0) goto L3c
            android.view.ViewGroup r4 = r3.sw
            com.kwad.components.ad.reward.presenter.n$2 r0 = new com.kwad.components.ad.reward.presenter.n$2
            r0.<init>(r3)
            r1 = 2000(0x7d0, double:9.88E-321)
            r4.postDelayed(r0, r1)
        L3c:
            return
    }

    @Override
    public final void a(com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult r3, android.view.View r4) {
            r2 = this;
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r4)
            r2.sA = r0
            android.view.ViewGroup$LayoutParams r4 = r4.getLayoutParams()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onActionBarShown: type: "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = ", params.height: "
            r0.append(r3)
            int r3 = r4.height
            r0.append(r3)
            java.lang.String r3 = ", params.width: "
            r0.append(r3)
            int r3 = r4.width
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "RewardPlayablePreTips"
            com.kwad.sdk.core.e.c.d(r0, r3)
            r2.a(r4)
            return
    }

    @Override
    public final void ah() {
            r3 = this;
            super.ah()
            android.view.ViewGroup r0 = r3.sw
            if (r0 != 0) goto L23
            int r0 = com.kwad.sdk.R.id.ksad_playable_pre_tips_stub
            android.view.View r0 = r3.findViewById(r0)
            android.view.ViewStub r0 = (android.view.ViewStub) r0
            if (r0 == 0) goto L16
            android.view.View r0 = r0.inflate()
            goto L1c
        L16:
            int r0 = com.kwad.sdk.R.id.ksad_playable_pre_tips_root
            android.view.View r0 = r3.findViewById(r0)
        L1c:
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r3.sw = r0
            r3.initView()
        L23:
            com.kwad.components.ad.reward.j r0 = r3.qx
            boolean r0 = r0.fV()
            if (r0 == 0) goto L41
            android.view.ViewGroup r0 = r3.sw
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.dimen.ksad_reward_js_actionbar_height
            int r0 = r0.getDimensionPixelSize(r1)
            android.view.ViewGroup$LayoutParams r1 = new android.view.ViewGroup$LayoutParams
            r2 = -1
            r1.<init>(r2, r0)
            r3.a(r1)
            goto L48
        L41:
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0 = r0.oY
            r0.a(r3)
        L48:
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.ad.reward.e.f r1 = r3.mPlayEndPageListener
            r0.b(r1)
            return
    }

    public final void hide() {
            r2 = this;
            android.view.ViewGroup r0 = r2.sw
            if (r0 != 0) goto L5
            return
        L5:
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    @Override
    public final void onClick(android.view.View r4) {
            r3 = this;
            android.view.ViewGroup r4 = r3.sw
            if (r4 == 0) goto L9
            r0 = 8
            r4.setVisibility(r0)
        L9:
            com.kwad.components.ad.reward.b r4 = com.kwad.components.ad.reward.b.fp()
            com.kwad.components.core.playable.PlayableSource r0 = com.kwad.components.core.playable.PlayableSource.PENDANT_CLICK_NOT_AUTO
            r4.a(r0)
            com.kwad.components.ad.reward.j r4 = r3.qx
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.mAdTemplate
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            r1 = 192(0xc0, float:2.69E-43)
            com.kwad.sdk.core.report.j r0 = r0.ci(r1)
            com.kwad.components.ad.reward.j r1 = r3.qx
            com.kwad.components.ad.reward.l.d r1 = r1.oV
            long r1 = r1.getPlayDuration()
            com.kwad.sdk.core.report.j r0 = r0.af(r1)
            com.kwad.sdk.core.report.a.a(r4, r0)
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            float r0 = com.kwad.components.ad.reward.a.b.gI()
            r1.sz = r0
            boolean r0 = com.kwad.components.ad.reward.a.b.gK()
            if (r0 != 0) goto L17
            boolean r0 = com.kwad.components.ad.reward.a.b.gJ()
            if (r0 == 0) goto L17
            r0 = 1
            goto L18
        L17:
            r0 = 0
        L18:
            r1.sy = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.e.f r1 = r2.mPlayEndPageListener
            r0.c(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0 = r0.oY
            r0.b(r2)
            return
    }
}

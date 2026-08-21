package com.kwad.components.ad.splashscreen.c.a;

public final class a extends com.kwad.components.ad.splashscreen.c.e {
    private android.animation.AnimatorSet Ea;
    private android.widget.TextView Eb;
    private android.view.ViewGroup Ec;
    private android.view.ViewGroup Ed;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private void initView() {
            r1 = this;
            int r0 = com.kwad.sdk.R.id.ksad_ad_developer_text
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.Eb = r0
            int r0 = com.kwad.sdk.R.id.ksad_splash_end_card_native_view
            android.view.View r0 = r1.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1.Ec = r0
            int r0 = com.kwad.sdk.R.id.ksad_splash_end_card_native_dialog_root
            android.view.View r0 = r1.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1.Ed = r0
            return
    }

    private void lu() {
            r8 = this;
            android.view.ViewGroup r0 = r8.Ed
            r1 = 2
            float[] r2 = new float[r1]
            r2 = {x0058: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            java.lang.String r3 = "alpha"
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofFloat(r0, r3, r2)
            android.widget.TextView r2 = r8.Eb
            float[] r4 = new float[r1]
            r4 = {x0060: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            android.animation.ObjectAnimator r2 = android.animation.ObjectAnimator.ofFloat(r2, r3, r4)
            android.view.ViewGroup r3 = r8.Ec
            float[] r4 = new float[r1]
            r4 = {x0068: FILL_ARRAY_DATA , data: [1061997773, 1065353216} // fill-array
            java.lang.String r5 = "scaleX"
            android.animation.ObjectAnimator r3 = android.animation.ObjectAnimator.ofFloat(r3, r5, r4)
            android.view.ViewGroup r4 = r8.Ec
            float[] r5 = new float[r1]
            r5 = {x0070: FILL_ARRAY_DATA , data: [1061997773, 1065353216} // fill-array
            java.lang.String r6 = "scaleY"
            android.animation.ObjectAnimator r4 = android.animation.ObjectAnimator.ofFloat(r4, r6, r5)
            android.animation.AnimatorSet r5 = new android.animation.AnimatorSet
            r5.<init>()
            r8.Ea = r5
            r6 = 4
            android.animation.Animator[] r6 = new android.animation.Animator[r6]
            r7 = 0
            r6[r7] = r0
            r0 = 1
            r6[r0] = r2
            r6[r1] = r3
            r0 = 3
            r6[r0] = r4
            r5.playTogether(r6)
            android.animation.AnimatorSet r0 = r8.Ea
            r1 = 300(0x12c, double:1.48E-321)
            r0.setDuration(r1)
            android.animation.AnimatorSet r0 = r8.Ea
            r0.start()
            return
    }

    @Override
    public final void ah() {
            r0 = this;
            super.ah()
            r0.lu()
            return
    }

    @Override
    public final void onCreate() {
            r0 = this;
            super.onCreate()
            r0.initView()
            return
    }

    @Override
    public final void onUnbind() {
            r1 = this;
            super.onUnbind()
            android.animation.AnimatorSet r0 = r1.Ea
            if (r0 == 0) goto La
            r0.cancel()
        La:
            return
    }
}

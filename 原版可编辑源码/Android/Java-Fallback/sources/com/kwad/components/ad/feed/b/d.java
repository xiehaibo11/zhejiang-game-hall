package com.kwad.components.ad.feed.b;

public final class d extends android.widget.FrameLayout {
    private int count;
    private android.widget.ImageView eP;
    private android.widget.ImageView eQ;
    private android.widget.ImageView eR;
    private android.animation.Animator eS;
    private android.animation.Animator eT;
    private android.view.animation.Animation eU;
    private android.view.animation.Animation eV;




    public d(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    private d(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r3 = 0
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    private d(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r3 = 0
            r0.<init>(r1, r2, r3)
            r0.count = r3
            r0.D(r1)
            return
    }

    private void D(android.content.Context r2) {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_promote_ad_click
            com.kwad.sdk.m.l.inflate(r2, r0, r1)
            int r2 = com.kwad.sdk.R.id.ksad_inside_circle
            android.view.View r2 = r1.findViewById(r2)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            r1.eP = r2
            int r2 = com.kwad.sdk.R.id.ksad_outside_circle
            android.view.View r2 = r1.findViewById(r2)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            r1.eQ = r2
            int r2 = com.kwad.sdk.R.id.ksad_hand
            android.view.View r2 = r1.findViewById(r2)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            r1.eR = r2
            return
    }

    private android.view.animation.Animation a(android.view.View r13, float r14, int r15) {
            r12 = this;
            android.content.Context r0 = r12.getContext()
            r1 = 1092616192(0x41200000, float:10.0)
            int r0 = com.kwad.sdk.d.a.a.a(r0, r1)
            float r0 = (float) r0
            android.view.animation.AlphaAnimation r1 = new android.view.animation.AlphaAnimation
            r2 = 0
            r1.<init>(r14, r2)
            android.view.animation.ScaleAnimation r14 = new android.view.animation.ScaleAnimation
            float r15 = (float) r15
            float r7 = r15 / r0
            r4 = 1065353216(0x3f800000, float:1.0)
            r6 = 1065353216(0x3f800000, float:1.0)
            r8 = 1
            r9 = 1056964608(0x3f000000, float:0.5)
            r10 = 1
            r11 = 1056964608(0x3f000000, float:0.5)
            r3 = r14
            r5 = r7
            r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11)
            android.view.animation.AnimationSet r15 = new android.view.animation.AnimationSet
            r0 = 1
            r15.<init>(r0)
            r15.addAnimation(r1)
            r15.addAnimation(r14)
            r0 = 200(0xc8, double:9.9E-322)
            r15.setDuration(r0)
            com.kwad.components.ad.feed.b.d$3 r14 = new com.kwad.components.ad.feed.b.d$3
            r14.<init>(r12, r13)
            r15.setAnimationListener(r14)
            return r15
    }

    static android.view.animation.Animation a(com.kwad.components.ad.feed.b.d r0) {
            android.view.animation.Animation r0 = r0.eU
            return r0
    }

    static android.widget.ImageView b(com.kwad.components.ad.feed.b.d r0) {
            android.widget.ImageView r0 = r0.eP
            return r0
    }

    private void bn() {
            r3 = this;
            android.widget.ImageView r0 = r3.eR
            android.animation.Animator r0 = r3.d(r0)
            r3.eS = r0
            android.widget.ImageView r0 = r3.eR
            android.animation.Animator r0 = r3.e(r0)
            r3.eT = r0
            android.widget.ImageView r0 = r3.eP
            android.content.Context r1 = r3.getContext()
            r2 = 1107820544(0x42080000, float:34.0)
            int r1 = com.kwad.sdk.d.a.a.a(r1, r2)
            r2 = 1055286886(0x3ee66666, float:0.45)
            android.view.animation.Animation r0 = r3.a(r0, r2, r1)
            r3.eU = r0
            android.widget.ImageView r0 = r3.eQ
            android.content.Context r1 = r3.getContext()
            r2 = 1112014848(0x42480000, float:50.0)
            int r1 = com.kwad.sdk.d.a.a.a(r1, r2)
            r2 = 1056964608(0x3f000000, float:0.5)
            android.view.animation.Animation r0 = r3.a(r0, r2, r1)
            r3.eV = r0
            android.animation.Animator r0 = r3.eS
            com.kwad.components.ad.feed.b.d$1 r1 = new com.kwad.components.ad.feed.b.d$1
            r1.<init>(r3)
            r0.addListener(r1)
            android.animation.Animator r0 = r3.eT
            com.kwad.components.ad.feed.b.d$2 r1 = new com.kwad.components.ad.feed.b.d$2
            r1.<init>(r3)
            r0.addListener(r1)
            return
    }

    static android.view.animation.Animation c(com.kwad.components.ad.feed.b.d r0) {
            android.view.animation.Animation r0 = r0.eV
            return r0
    }

    private android.animation.Animator d(android.view.View r9) {
            r8 = this;
            r0 = 2
            float[] r1 = new float[r0]
            r1 = {x0054: FILL_ARRAY_DATA , data: [0, -1054867456} // fill-array
            java.lang.String r2 = "rotation"
            android.animation.ObjectAnimator r1 = android.animation.ObjectAnimator.ofFloat(r9, r2, r1)
            float[] r2 = new float[r0]
            r3 = 0
            r4 = 0
            r2[r4] = r3
            android.content.Context r5 = r8.getContext()
            r6 = 1092091904(0x41180000, float:9.5)
            int r5 = com.kwad.sdk.d.a.a.a(r5, r6)
            int r5 = -r5
            float r5 = (float) r5
            r7 = 1
            r2[r7] = r5
            java.lang.String r5 = "translationX"
            android.animation.ObjectAnimator r2 = android.animation.ObjectAnimator.ofFloat(r9, r5, r2)
            float[] r5 = new float[r0]
            r5[r4] = r3
            android.content.Context r3 = r8.getContext()
            int r3 = com.kwad.sdk.d.a.a.a(r3, r6)
            int r3 = -r3
            float r3 = (float) r3
            r5[r7] = r3
            java.lang.String r3 = "translationY"
            android.animation.ObjectAnimator r9 = android.animation.ObjectAnimator.ofFloat(r9, r3, r5)
            android.animation.AnimatorSet r3 = new android.animation.AnimatorSet
            r3.<init>()
            r5 = 250(0xfa, double:1.235E-321)
            r3.setDuration(r5)
            r5 = 3
            android.animation.Animator[] r5 = new android.animation.Animator[r5]
            r5[r4] = r1
            r5[r7] = r2
            r5[r0] = r9
            r3.playTogether(r5)
            return r3
    }

    static android.widget.ImageView d(com.kwad.components.ad.feed.b.d r0) {
            android.widget.ImageView r0 = r0.eQ
            return r0
    }

    private android.animation.Animator e(android.view.View r10) {
            r9 = this;
            r0 = 2
            float[] r1 = new float[r0]
            r1 = {x0054: FILL_ARRAY_DATA , data: [-1054867456, 0} // fill-array
            java.lang.String r2 = "rotation"
            android.animation.ObjectAnimator r1 = android.animation.ObjectAnimator.ofFloat(r10, r2, r1)
            float[] r2 = new float[r0]
            android.content.Context r3 = r9.getContext()
            r4 = 1092091904(0x41180000, float:9.5)
            int r3 = com.kwad.sdk.d.a.a.a(r3, r4)
            int r3 = -r3
            float r3 = (float) r3
            r5 = 0
            r2[r5] = r3
            r3 = 0
            r6 = 1
            r2[r6] = r3
            java.lang.String r7 = "translationX"
            android.animation.ObjectAnimator r2 = android.animation.ObjectAnimator.ofFloat(r10, r7, r2)
            float[] r7 = new float[r0]
            android.content.Context r8 = r9.getContext()
            int r4 = com.kwad.sdk.d.a.a.a(r8, r4)
            int r4 = -r4
            float r4 = (float) r4
            r7[r5] = r4
            r7[r6] = r3
            java.lang.String r3 = "translationY"
            android.animation.ObjectAnimator r10 = android.animation.ObjectAnimator.ofFloat(r10, r3, r7)
            android.animation.AnimatorSet r3 = new android.animation.AnimatorSet
            r3.<init>()
            r7 = 250(0xfa, double:1.235E-321)
            r3.setDuration(r7)
            r4 = 3
            android.animation.Animator[] r4 = new android.animation.Animator[r4]
            r4[r5] = r1
            r4[r6] = r2
            r4[r0] = r10
            r3.playTogether(r4)
            return r3
    }

    static android.animation.Animator e(com.kwad.components.ad.feed.b.d r0) {
            android.animation.Animator r0 = r0.eT
            return r0
    }

    static int f(com.kwad.components.ad.feed.b.d r2) {
            int r0 = r2.count
            int r1 = r0 + 1
            r2.count = r1
            return r0
    }

    static int g(com.kwad.components.ad.feed.b.d r0) {
            int r0 = r0.count
            return r0
    }

    static android.animation.Animator h(com.kwad.components.ad.feed.b.d r0) {
            android.animation.Animator r0 = r0.eS
            return r0
    }

    public final void bl() {
            r1 = this;
            r1.bn()
            android.animation.Animator r0 = r1.eS
            r0.start()
            return
    }

    public final void bm() {
            r1 = this;
            android.animation.Animator r0 = r1.eS
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            android.animation.Animator r0 = r1.eT
            if (r0 == 0) goto Le
            r0.cancel()
        Le:
            android.view.animation.Animation r0 = r1.eU
            if (r0 == 0) goto L15
            r0.cancel()
        L15:
            android.view.animation.Animation r0 = r1.eV
            if (r0 == 0) goto L1c
            r0.cancel()
        L1c:
            return
    }
}

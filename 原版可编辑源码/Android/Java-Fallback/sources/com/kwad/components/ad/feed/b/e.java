package com.kwad.components.ad.feed.b;

public final class e extends android.widget.FrameLayout {
    private android.view.View eY;
    private android.widget.ImageView eZ;
    private android.animation.Animator fa;
    private com.kwad.sdk.widget.c fb;




    public e(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    private e(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r3 = 0
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    private e(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r3 = 0
            r0.<init>(r1, r2, r3)
            r0.init(r1)
            return
    }

    private android.animation.Animator a(android.view.View r4, long r5, float r7) {
            r3 = this;
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            r5 = 1046562734(0x3e6147ae, float:0.22)
            r6 = 1058474557(0x3f170a3d, float:0.59)
            r7 = 1052266988(0x3eb851ec, float:0.36)
            r0 = 1065353216(0x3f800000, float:1.0)
            android.view.animation.Interpolator r5 = android.support.v4.view.animation.PathInterpolatorCompat.create(r5, r6, r7, r0)
            android.widget.ImageView r6 = r3.eZ
            int r7 = r4.getWidth()
            float r7 = (float) r7
            r6.setPivotX(r7)
            android.widget.ImageView r6 = r3.eZ
            int r7 = r4.getHeight()
            float r7 = (float) r7
            r6.setPivotY(r7)
            r6 = 1098907648(0x41800000, float:16.0)
            r0 = 100
            android.animation.Animator r7 = com.kwad.components.core.t.m.a(r4, r5, r0, r6)
            android.animation.Animator r2 = com.kwad.components.core.t.m.a(r4, r5, r0, r6)
            android.animation.Animator r4 = com.kwad.components.core.t.m.a(r4, r5, r0, r6)
            android.animation.AnimatorSet r5 = new android.animation.AnimatorSet
            r5.<init>()
            r6 = 3
            android.animation.Animator[] r6 = new android.animation.Animator[r6]
            r0 = 0
            r6[r0] = r7
            r7 = 1
            r6[r7] = r2
            r7 = 2
            r6[r7] = r4
            r5.playSequentially(r6)
            return r5
    }

    static android.animation.Animator a(com.kwad.components.ad.feed.b.e r0) {
            android.animation.Animator r0 = r0.bo()
            return r0
    }

    static android.animation.Animator a(com.kwad.components.ad.feed.b.e r0, android.animation.Animator r1) {
            r0.fa = r1
            return r1
    }

    private android.animation.Animator b(android.view.View r8, int r9) {
            r7 = this;
            if (r8 != 0) goto L4
            r8 = 0
            return r8
        L4:
            int r0 = r8.getWidth()
            float r0 = (float) r0
            r1 = 1073741824(0x40000000, float:2.0)
            float r0 = r0 / r1
            r8.setPivotX(r0)
            int r0 = r8.getHeight()
            float r0 = (float) r0
            float r0 = r0 / r1
            r8.setPivotY(r0)
            int r0 = r8.getHeight()
            int r1 = r8.getWidth()
            int r0 = java.lang.Math.min(r0, r1)
            float r0 = (float) r0
            r1 = 2
            float[] r2 = new float[r1]
            float r9 = (float) r9
            float r9 = r9 / r0
            r0 = 0
            r2[r0] = r9
            r3 = 1065353216(0x3f800000, float:1.0)
            r4 = 1
            r2[r4] = r3
            java.lang.String r5 = "scaleX"
            android.animation.ObjectAnimator r2 = android.animation.ObjectAnimator.ofFloat(r8, r5, r2)
            float[] r5 = new float[r1]
            r5[r0] = r9
            r5[r4] = r3
            java.lang.String r9 = "scaleY"
            android.animation.ObjectAnimator r9 = android.animation.ObjectAnimator.ofFloat(r8, r9, r5)
            float[] r3 = new float[r1]
            r3 = {x006e: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            java.lang.String r5 = "alpha"
            android.animation.ObjectAnimator r3 = android.animation.ObjectAnimator.ofFloat(r8, r5, r3)
            android.animation.AnimatorSet r5 = new android.animation.AnimatorSet
            r5.<init>()
            r6 = 3
            android.animation.Animator[] r6 = new android.animation.Animator[r6]
            r6[r0] = r2
            r6[r4] = r9
            r6[r1] = r3
            r5.playTogether(r6)
            r0 = 500(0x1f4, double:2.47E-321)
            r5.setDuration(r0)
            com.kwad.components.ad.feed.b.e$2 r9 = new com.kwad.components.ad.feed.b.e$2
            r9.<init>(r7, r8)
            r5.addListener(r9)
            return r5
    }

    static android.animation.Animator b(com.kwad.components.ad.feed.b.e r0) {
            android.animation.Animator r0 = r0.fa
            return r0
    }

    private android.animation.Animator bo() {
            r6 = this;
            android.view.View r0 = r6.eY
            if (r0 == 0) goto L4c
            android.widget.ImageView r1 = r6.eZ
            if (r1 == 0) goto L4c
            int r0 = r0.getWidth()
            android.view.View r1 = r6.eY
            int r1 = r1.getHeight()
            int r0 = r0 + r1
            if (r0 == 0) goto L4c
            android.widget.ImageView r0 = r6.eZ
            int r0 = r0.getWidth()
            android.widget.ImageView r1 = r6.eZ
            int r1 = r1.getHeight()
            int r0 = r0 + r1
            if (r0 != 0) goto L25
            goto L4c
        L25:
            android.animation.Animator r0 = r6.bp()
            android.widget.ImageView r1 = r6.eZ
            r2 = 100
            r4 = 1098907648(0x41800000, float:16.0)
            android.animation.Animator r1 = r6.a(r1, r2, r4)
            android.animation.Animator r2 = r6.bq()
            android.animation.AnimatorSet r3 = new android.animation.AnimatorSet
            r3.<init>()
            r4 = 3
            android.animation.Animator[] r4 = new android.animation.Animator[r4]
            r5 = 0
            r4[r5] = r0
            r0 = 1
            r4[r0] = r1
            r0 = 2
            r4[r0] = r2
            r3.playSequentially(r4)
            return r3
        L4c:
            r0 = 0
            return r0
    }

    private android.animation.Animator bp() {
            r5 = this;
            android.view.View r0 = r5.eY
            android.content.Context r1 = r5.getContext()
            r2 = 1124073472(0x43000000, float:128.0)
            int r1 = com.kwad.sdk.d.a.a.a(r1, r2)
            android.animation.Animator r0 = r5.b(r0, r1)
            android.widget.ImageView r1 = r5.eZ
            android.content.Context r2 = r5.getContext()
            r3 = 1116616786(0x428e3852, float:71.11)
            int r2 = com.kwad.sdk.d.a.a.a(r2, r3)
            android.animation.Animator r1 = r5.b(r1, r2)
            android.animation.AnimatorSet r2 = new android.animation.AnimatorSet
            r2.<init>()
            r3 = 500(0x1f4, double:2.47E-321)
            r2.setDuration(r3)
            r3 = 2
            android.animation.Animator[] r3 = new android.animation.Animator[r3]
            r4 = 0
            r3[r4] = r0
            r0 = 1
            r3[r0] = r1
            r2.playTogether(r3)
            return r2
    }

    private android.animation.Animator bq() {
            r5 = this;
            android.view.View r0 = r5.eY
            android.animation.Animator r0 = r5.f(r0)
            android.widget.ImageView r1 = r5.eZ
            android.animation.Animator r1 = r5.f(r1)
            android.animation.AnimatorSet r2 = new android.animation.AnimatorSet
            r2.<init>()
            r3 = 500(0x1f4, double:2.47E-321)
            r2.setDuration(r3)
            r3 = 2
            android.animation.Animator[] r3 = new android.animation.Animator[r3]
            r4 = 0
            r3[r4] = r0
            r0 = 1
            r3[r0] = r1
            r2.playTogether(r3)
            return r2
    }

    static com.kwad.sdk.widget.c c(com.kwad.components.ad.feed.b.e r0) {
            com.kwad.sdk.widget.c r0 = r0.fb
            return r0
    }

    private android.animation.Animator f(android.view.View r5) {
            r4 = this;
            if (r5 != 0) goto L4
            r5 = 0
            return r5
        L4:
            r0 = 2
            float[] r0 = new float[r0]
            r0 = {x0026: FILL_ARRAY_DATA , data: [1065353216, 0} // fill-array
            java.lang.String r1 = "alpha"
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofFloat(r5, r1, r0)
            android.animation.AnimatorSet r1 = new android.animation.AnimatorSet
            r1.<init>()
            r1.play(r0)
            r2 = 500(0x1f4, double:2.47E-321)
            r1.setDuration(r2)
            com.kwad.components.ad.feed.b.e$3 r0 = new com.kwad.components.ad.feed.b.e$3
            r0.<init>(r4, r5)
            r1.addListener(r0)
            return r1
    }

    private void init(android.content.Context r2) {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_feed_shake
            com.kwad.sdk.m.l.inflate(r2, r0, r1)
            r2 = 0
            r1.setClickable(r2)
            int r2 = com.kwad.sdk.R.id.ksad_feed_shake_bg
            android.view.View r2 = r1.findViewById(r2)
            r1.eY = r2
            int r2 = com.kwad.sdk.R.id.ksad_feed_shake_icon
            android.view.View r2 = r1.findViewById(r2)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            r1.eZ = r2
            return
    }

    public final void a(android.animation.AnimatorListenerAdapter r3) {
            r2 = this;
            android.animation.Animator r0 = r2.fa
            if (r0 == 0) goto La
            r0.cancel()
            r0 = 0
            r2.fa = r0
        La:
            android.widget.ImageView r0 = r2.eZ
            com.kwad.components.ad.feed.b.e$1 r1 = new com.kwad.components.ad.feed.b.e$1
            r1.<init>(r2, r3)
            r0.post(r1)
            return
    }

    public final void setOnViewEventListener(com.kwad.sdk.widget.c r1) {
            r0 = this;
            r0.fb = r1
            return
    }
}

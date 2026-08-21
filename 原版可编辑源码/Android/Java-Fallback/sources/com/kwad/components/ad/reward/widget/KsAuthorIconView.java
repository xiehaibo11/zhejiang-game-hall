package com.kwad.components.ad.reward.widget;

public class KsAuthorIconView extends android.widget.FrameLayout implements com.kwad.sdk.utils.bn.a {
    private android.view.ViewGroup AG;
    private com.kwad.components.core.widget.KSCornerImageView AH;
    private com.kwad.components.core.widget.KSCornerImageView AI;
    private com.kwad.components.core.widget.KSCornerImageView AJ;
    private android.widget.TextView AK;
    private android.view.View AL;
    private android.view.View AM;
    private android.widget.ImageView AN;
    private android.view.View AO;
    private android.view.View AP;
    private android.view.View AQ;
    private android.view.View AR;
    private final com.kwad.sdk.utils.bn gx;
    private com.kwad.components.core.widget.KSCornerImageView zO;



    public KsAuthorIconView(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            com.kwad.sdk.utils.bn r0 = new com.kwad.sdk.utils.bn
            r0.<init>(r1)
            r1.gx = r0
            r1.R(r2)
            return
    }

    public KsAuthorIconView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.bn r2 = new com.kwad.sdk.utils.bn
            r2.<init>(r0)
            r0.gx = r2
            r0.R(r1)
            return
    }

    public KsAuthorIconView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            com.kwad.sdk.utils.bn r2 = new com.kwad.sdk.utils.bn
            r2.<init>(r0)
            r0.gx = r2
            r0.R(r1)
            return
    }

    public KsAuthorIconView(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            com.kwad.sdk.utils.bn r2 = new com.kwad.sdk.utils.bn
            r2.<init>(r0)
            r0.gx = r2
            r0.R(r1)
            return
    }

    private void R(android.content.Context r2) {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_author_icon
            com.kwad.sdk.m.l.inflate(r2, r0, r1)
            int r2 = com.kwad.sdk.R.id.ksad_author_icon_frame
            android.view.View r2 = r1.findViewById(r2)
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            r1.AG = r2
            int r2 = com.kwad.sdk.R.id.ksad_author_icon
            android.view.View r2 = r1.findViewById(r2)
            com.kwad.components.core.widget.KSCornerImageView r2 = (com.kwad.components.core.widget.KSCornerImageView) r2
            r1.zO = r2
            int r2 = com.kwad.sdk.R.id.ksad_author_icon_outer
            android.view.View r2 = r1.findViewById(r2)
            com.kwad.components.core.widget.KSCornerImageView r2 = (com.kwad.components.core.widget.KSCornerImageView) r2
            r1.AH = r2
            int r2 = com.kwad.sdk.R.id.ksad_author_animator
            android.view.View r2 = r1.findViewById(r2)
            com.kwad.components.core.widget.KSCornerImageView r2 = (com.kwad.components.core.widget.KSCornerImageView) r2
            r1.AI = r2
            int r2 = com.kwad.sdk.R.id.ksad_author_animator2
            android.view.View r2 = r1.findViewById(r2)
            com.kwad.components.core.widget.KSCornerImageView r2 = (com.kwad.components.core.widget.KSCornerImageView) r2
            r1.AJ = r2
            int r2 = com.kwad.sdk.R.id.ksad_fans_count
            android.view.View r2 = r1.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            r1.AK = r2
            int r2 = com.kwad.sdk.R.id.ksad_fans_hot_icon
            android.view.View r2 = r1.findViewById(r2)
            r1.AM = r2
            int r2 = com.kwad.sdk.R.id.ksad_author_btn_follow
            android.view.View r2 = r1.findViewById(r2)
            r1.AL = r2
            int r2 = com.kwad.sdk.R.id.ksad_author_arrow_down
            android.view.View r2 = r1.findViewById(r2)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            r1.AN = r2
            int r2 = com.kwad.sdk.R.id.ksad_origin_live_bottom_layout
            android.view.View r2 = r1.findViewById(r2)
            r1.AP = r2
            int r2 = com.kwad.sdk.R.id.ksad_top_layout
            android.view.View r2 = r1.findViewById(r2)
            r1.AO = r2
            int r2 = com.kwad.sdk.R.id.ksad_author_icon_layout
            android.view.View r2 = r1.findViewById(r2)
            r1.AR = r2
            int r2 = com.kwad.sdk.R.id.ksad_top_flag_layout
            android.view.View r2 = r1.findViewById(r2)
            r1.AQ = r2
            return
    }

    private void a(com.kwad.components.core.widget.e r3, android.graphics.drawable.Drawable r4) {
            r2 = this;
            boolean r0 = r4 instanceof android.graphics.drawable.GradientDrawable
            if (r0 == 0) goto L17
            android.graphics.drawable.GradientDrawable r4 = (android.graphics.drawable.GradientDrawable) r4
            android.content.res.Resources r0 = r2.getResources()
            int r1 = com.kwad.sdk.R.dimen.ksad_reward_author_icon_stroke_width
            int r0 = r0.getDimensionPixelSize(r1)
            int r3 = r3.sv()
            r4.setStroke(r0, r3)
        L17:
            return
    }

    private android.animation.Animator c(android.view.View r8, long r9) {
            r7 = this;
            if (r8 == 0) goto L5c
            int r0 = r8.getWidth()
            if (r0 == 0) goto L5c
            int r0 = r8.getHeight()
            if (r0 != 0) goto Lf
            goto L5c
        Lf:
            int r0 = r8.getWidth()
            float r0 = (float) r0
            android.content.res.Resources r1 = r7.getResources()
            int r2 = com.kwad.sdk.R.dimen.ksad_reward_author_icon_width
            float r1 = r1.getDimension(r2)
            r2 = 2
            float[] r3 = new float[r2]
            r4 = 0
            r3[r4] = r0
            r0 = 1
            r3[r0] = r1
            android.animation.ValueAnimator r1 = android.animation.ValueAnimator.ofFloat(r3)
            android.animation.ValueAnimator$AnimatorUpdateListener r3 = f(r8, r4)
            r1.addUpdateListener(r3)
            float[] r3 = new float[r2]
            r3 = {x005e: FILL_ARRAY_DATA , data: [1065353216, 0} // fill-array
            java.lang.String r5 = "alpha"
            android.animation.ObjectAnimator r8 = android.animation.ObjectAnimator.ofFloat(r8, r5, r3)
            r3 = 1054280253(0x3ed70a3d, float:0.42)
            r5 = 0
            r6 = 1065353216(0x3f800000, float:1.0)
            android.view.animation.Interpolator r3 = android.support.v4.view.animation.PathInterpolatorCompat.create(r3, r5, r6, r6)
            android.animation.AnimatorSet r5 = new android.animation.AnimatorSet
            r5.<init>()
            r5.setDuration(r9)
            r5.setInterpolator(r3)
            android.animation.Animator[] r9 = new android.animation.Animator[r2]
            r9[r4] = r1
            r9[r0] = r8
            r5.playTogether(r9)
            return r5
        L5c:
            r8 = 0
            return r8
    }

    private static android.animation.Animator e(android.view.View r10, boolean r11) {
            int r11 = r10.getWidth()
            float r11 = (float) r11
            r0 = 0
            int r1 = (r11 > r0 ? 1 : (r11 == r0 ? 0 : -1))
            if (r1 > 0) goto Lc
            r10 = 0
            return r10
        Lc:
            r1 = 1063675494(0x3f666666, float:0.9)
            float r1 = r1 * r11
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "getIconScaleAnimator size: "
            r2.<init>(r3)
            r2.append(r11)
            java.lang.String r3 = ", endSize: "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "KsAuthorIconView"
            com.kwad.sdk.core.e.c.d(r3, r2)
            r2 = 2
            float[] r3 = new float[r2]
            r4 = 0
            r3[r4] = r11
            r5 = 1
            r3[r5] = r1
            android.animation.ValueAnimator r3 = android.animation.ValueAnimator.ofFloat(r3)
            android.animation.ValueAnimator$AnimatorUpdateListener r6 = f(r10, r4)
            r3.addUpdateListener(r6)
            r6 = 1054280253(0x3ed70a3d, float:0.42)
            r7 = 1065353216(0x3f800000, float:1.0)
            android.view.animation.Interpolator r6 = android.support.v4.view.animation.PathInterpolatorCompat.create(r6, r0, r7, r7)
            r8 = 500(0x1f4, double:2.47E-321)
            r3.setDuration(r8)
            r3.setInterpolator(r6)
            float[] r6 = new float[r2]
            r6[r4] = r1
            r6[r5] = r11
            android.animation.ValueAnimator r11 = android.animation.ValueAnimator.ofFloat(r6)
            android.animation.ValueAnimator$AnimatorUpdateListener r10 = f(r10, r4)
            r11.addUpdateListener(r10)
            r10 = 1058306785(0x3f147ae1, float:0.58)
            android.view.animation.Interpolator r10 = android.support.v4.view.animation.PathInterpolatorCompat.create(r0, r0, r10, r7)
            r11.setDuration(r8)
            r11.setInterpolator(r10)
            android.animation.AnimatorSet r10 = new android.animation.AnimatorSet
            r10.<init>()
            android.animation.Animator[] r0 = new android.animation.Animator[r2]
            r0[r4] = r3
            r0[r5] = r11
            r10.playSequentially(r0)
            return r10
    }

    private static android.animation.ValueAnimator.AnimatorUpdateListener f(android.view.View r1, boolean r2) {
            com.kwad.components.ad.reward.widget.KsAuthorIconView$1 r0 = new com.kwad.components.ad.reward.widget.KsAuthorIconView$1
            r0.<init>(r1, r2)
            return r0
    }

    private static android.animation.Animator i(android.view.View r13, int r14) {
            if (r13 != 0) goto L4
            r13 = 0
            return r13
        L4:
            int r14 = r13.getWidth()
            int r0 = r13.getHeight()
            float r14 = (float) r14
            r1 = 1073741824(0x40000000, float:2.0)
            float r14 = r14 / r1
            r13.setPivotX(r14)
            float r14 = (float) r0
            r13.setPivotY(r14)
            android.animation.AnimatorSet r14 = new android.animation.AnimatorSet
            r14.<init>()
            r0 = 1054280253(0x3ed70a3d, float:0.42)
            r1 = 1065353216(0x3f800000, float:1.0)
            r2 = 0
            android.view.animation.Interpolator r0 = android.support.v4.view.animation.PathInterpolatorCompat.create(r0, r2, r1, r1)
            r3 = 3
            float[] r4 = new float[r3]
            r4 = {x0092: FILL_ARRAY_DATA , data: [1065353216, 1066192077, 1065353216} // fill-array
            java.lang.String r5 = "scaleX"
            android.animation.ObjectAnimator r4 = android.animation.ObjectAnimator.ofFloat(r13, r5, r4)
            float[] r6 = new float[r3]
            r6 = {x009c: FILL_ARRAY_DATA , data: [1065353216, 1066192077, 1065353216} // fill-array
            java.lang.String r7 = "scaleY"
            android.animation.ObjectAnimator r6 = android.animation.ObjectAnimator.ofFloat(r13, r7, r6)
            r8 = 2
            android.animation.Animator[] r9 = new android.animation.Animator[r8]
            r10 = 0
            r9[r10] = r4
            r4 = 1
            r9[r4] = r6
            r14.playTogether(r9)
            r14.setInterpolator(r0)
            r11 = 250(0xfa, double:1.235E-321)
            r14.setDuration(r11)
            android.animation.AnimatorSet r0 = new android.animation.AnimatorSet
            r0.<init>()
            r6 = 1058306785(0x3f147ae1, float:0.58)
            android.view.animation.Interpolator r1 = android.support.v4.view.animation.PathInterpolatorCompat.create(r2, r2, r6, r1)
            float[] r2 = new float[r3]
            r2 = {x00a6: FILL_ARRAY_DATA , data: [1065353216, 1066192077, 1065353216} // fill-array
            android.animation.ObjectAnimator r2 = android.animation.ObjectAnimator.ofFloat(r13, r5, r2)
            float[] r3 = new float[r3]
            r3 = {x00b0: FILL_ARRAY_DATA , data: [1065353216, 1066192077, 1065353216} // fill-array
            android.animation.ObjectAnimator r13 = android.animation.ObjectAnimator.ofFloat(r13, r7, r3)
            android.animation.Animator[] r3 = new android.animation.Animator[r8]
            r3[r10] = r2
            r3[r4] = r13
            r0.playTogether(r3)
            r0.setInterpolator(r1)
            r0.setDuration(r11)
            android.animation.AnimatorSet r13 = new android.animation.AnimatorSet
            r13.<init>()
            android.animation.Animator[] r1 = new android.animation.Animator[r8]
            r1[r10] = r14
            r1[r4] = r0
            r13.playSequentially(r1)
            r0 = 500(0x1f4, double:2.47E-321)
            r13.setDuration(r0)
            return r13
    }

    @Override
    public final void a(android.os.Message r10) {
            r9 = this;
            int r10 = r10.what
            r0 = 1
            if (r10 == r0) goto L6
            goto L5c
        L6:
            java.lang.String r10 = "KsAuthorIconView"
            java.lang.String r1 = "handleMsg MSG_CHECKING"
            com.kwad.sdk.core.e.c.d(r10, r1)
            com.kwad.components.core.widget.KSCornerImageView r10 = r9.AI
            r1 = 900(0x384, double:4.447E-321)
            android.animation.Animator r5 = r9.c(r10, r1)
            com.kwad.components.core.widget.KSCornerImageView r10 = r9.AJ
            r1 = 1000(0x3e8, double:4.94E-321)
            android.animation.Animator r6 = r9.c(r10, r1)
            com.kwad.components.core.widget.KSCornerImageView r10 = r9.zO
            r1 = 0
            android.animation.Animator r10 = e(r10, r1)
            android.view.View r2 = r9.AO
            r3 = 500(0x1f4, float:7.0E-43)
            android.animation.Animator r8 = i(r2, r3)
            if (r8 == 0) goto L55
            if (r5 == 0) goto L55
            if (r6 == 0) goto L55
            if (r10 == 0) goto L55
            android.animation.AnimatorSet r2 = new android.animation.AnimatorSet
            r2.<init>()
            r3 = 3
            android.animation.Animator[] r3 = new android.animation.Animator[r3]
            r3[r1] = r10
            r3[r0] = r5
            r0 = 2
            r3[r0] = r6
            r2.playTogether(r3)
            r2.start()
            com.kwad.components.ad.reward.widget.KsAuthorIconView$2 r0 = new com.kwad.components.ad.reward.widget.KsAuthorIconView$2
            r3 = r0
            r4 = r9
            r7 = r10
            r3.<init>(r4, r5, r6, r7, r8)
            r10.addListener(r0)
            return
        L55:
            com.kwad.sdk.utils.bn r10 = r9.gx
            r1 = 500(0x1f4, double:2.47E-321)
            r10.sendEmptyMessageDelayed(r0, r1)
        L5c:
            return
    }

    public final void a(com.kwad.components.core.widget.e r3) {
            r2 = this;
            com.kwad.components.core.t.g.a(r3, r2)
            android.widget.ImageView r0 = r2.AN
            int r1 = com.kwad.sdk.R.drawable.ksad_reward_follow_arrow_down
            r0.setImageResource(r1)
            com.kwad.components.core.widget.KSCornerImageView r0 = r2.AI
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            r2.a(r3, r0)
            com.kwad.components.core.widget.KSCornerImageView r0 = r2.AH
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            r2.a(r3, r0)
            com.kwad.components.core.widget.KSCornerImageView r0 = r2.AJ
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            r2.a(r3, r0)
            android.view.ViewGroup r0 = r2.AG
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            r2.a(r3, r0)
            return
    }

    public final void b(com.kwad.sdk.core.response.model.AdTemplate r4) {
            r3 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r4)
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.bQ(r0)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L13
            com.kwad.components.core.widget.KSCornerImageView r2 = r3.zO
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r2, r1, r4)
        L13:
            int r1 = com.kwad.sdk.core.response.b.a.aX(r0)
            com.kwad.sdk.core.response.model.AdInfo r4 = com.kwad.sdk.core.response.b.d.cg(r4)
            boolean r4 = com.kwad.sdk.core.response.b.a.cw(r4)
            if (r4 == 0) goto L57
            android.widget.TextView r4 = r3.AK
            java.lang.String r0 = "直播中"
            r4.setText(r0)
            android.view.View r4 = r3.AM
            r0 = 8
            r4.setVisibility(r0)
            android.view.View r4 = r3.AL
            r4.setVisibility(r0)
            r4 = 0
            if (r1 != r0) goto L47
            android.view.View r1 = r3.AQ
            r1.setVisibility(r0)
            android.widget.ImageView r1 = r3.AN
            r1.setVisibility(r0)
            android.view.View r0 = r3.AP
            r0.setVisibility(r4)
            goto L60
        L47:
            android.view.View r1 = r3.AP
            r1.setVisibility(r0)
            android.widget.ImageView r1 = r3.AN
            r1.setVisibility(r4)
            android.view.View r4 = r3.AP
            r4.setVisibility(r0)
            goto L60
        L57:
            android.widget.TextView r4 = r3.AK
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.cr(r0)
            r4.setText(r0)
        L60:
            com.kwad.sdk.utils.bn r4 = r3.gx
            r0 = 1
            r1 = 500(0x1f4, double:2.47E-321)
            r4.sendEmptyMessageAtTime(r0, r1)
            return
    }
}

package com.sigmob.sdk.base.views;

public class v extends android.widget.RelativeLayout {
    public static final int a = 1;
    public static final int b = 2;
    private android.widget.ImageView c;
    private android.widget.TextView d;
    private android.widget.TextView e;
    private android.animation.AnimatorSet f;
    private android.animation.ObjectAnimator g;
    private android.animation.ObjectAnimator h;
    private android.view.View i;
    private boolean j;


    public v(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r0.a(r1)
            return
    }

    public v(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a(r1)
            return
    }

    public v(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.a(r1)
            return
    }

    private void a(android.content.Context r2) {
            r1 = this;
            int r0 = r1.b(r2)
            android.view.View.inflate(r2, r0, r1)
            java.lang.String r0 = "sig_shakeImageView"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r2, r0)
            android.view.View r0 = r1.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r1.c = r0
            java.lang.String r0 = "sig_shakeTitleView"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r2, r0)
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.d = r0
            java.lang.String r0 = "sig_shakeDescView"
            int r0 = com.czhj.sdk.common.utils.ResourceUtil.getId(r2, r0)
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.e = r0
            java.lang.String r0 = "sig_shake_view"
            int r2 = com.czhj.sdk.common.utils.ResourceUtil.getId(r2, r0)
            android.view.View r2 = r1.findViewById(r2)
            r1.i = r2
            r1.c()
            r1.b()
            return
    }

    static boolean a(com.sigmob.sdk.base.views.v r0) {
            boolean r0 = r0.j
            return r0
    }

    private int b(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = "sig_shake_view_layout"
            int r2 = com.czhj.sdk.common.utils.ResourceUtil.getLayoutId(r2, r0)
            return r2
    }

    static android.animation.ObjectAnimator b(com.sigmob.sdk.base.views.v r0) {
            android.animation.ObjectAnimator r0 = r0.g
            return r0
    }

    private void b() {
            r3 = this;
            android.widget.ImageView r0 = r3.c
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            int r0 = r0.height
            android.widget.ImageView r1 = r3.c
            android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
            int r1 = r1.width
            android.widget.ImageView r2 = r3.c
            float r1 = (float) r1
            r2.setPivotX(r1)
            android.widget.ImageView r1 = r3.c
            float r0 = (float) r0
            r2 = 1061997773(0x3f4ccccd, float:0.8)
            float r0 = r0 * r2
            r1.setPivotY(r0)
            android.widget.ImageView r0 = r3.c
            r1 = 11
            float[] r1 = new float[r1]
            r1 = {x004c: FILL_ARRAY_DATA , data: [0, 1099956224, 0, -1047527424, 0, 1099956224, 0, -1047527424, 0, 1099956224, 0} // fill-array
            java.lang.String r2 = "rotation"
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofFloat(r0, r2, r1)
            r3.g = r0
            android.view.animation.LinearInterpolator r1 = new android.view.animation.LinearInterpolator
            r1.<init>()
            r0.setInterpolator(r1)
            android.animation.ObjectAnimator r0 = r3.g
            com.sigmob.sdk.base.views.v$1 r1 = new com.sigmob.sdk.base.views.v$1
            r1.<init>(r3)
            r0.addListener(r1)
            android.animation.ObjectAnimator r0 = r3.g
            r1 = 1500(0x5dc, double:7.41E-321)
            r0.setDuration(r1)
            return
    }

    private void c() {
            r3 = this;
            android.view.View r0 = r3.i
            r1 = 5
            float[] r1 = new float[r1]
            r1 = {x0026: FILL_ARRAY_DATA , data: [0, 1106247680, 0, -1041235968, 0} // fill-array
            java.lang.String r2 = "translationY"
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofFloat(r0, r2, r1)
            r3.h = r0
            android.view.animation.LinearInterpolator r1 = new android.view.animation.LinearInterpolator
            r1.<init>()
            r0.setInterpolator(r1)
            android.animation.ObjectAnimator r0 = r3.h
            r1 = 2
            r0.setRepeatCount(r1)
            android.animation.ObjectAnimator r0 = r3.h
            r1 = 400(0x190, double:1.976E-321)
            r0.setDuration(r1)
            return
    }

    void a() {
            r1 = this;
            android.animation.ObjectAnimator r0 = r1.h
            r0.start()
            return
    }

    public void a(int r2) {
            r1 = this;
            r0 = 1
            if (r2 == r0) goto Ld
            r1.j = r0
            android.animation.ObjectAnimator r2 = r1.g
            r2.cancel()
            android.animation.ObjectAnimator r2 = r1.h
            goto Lf
        Ld:
            android.animation.ObjectAnimator r2 = r1.g
        Lf:
            r2.start()
            return
    }
}

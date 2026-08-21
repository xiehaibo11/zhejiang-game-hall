package com.tkay.basead.ui;

public class GuideToClickView extends android.widget.RelativeLayout {
    com.tkay.basead.ui.WaveAnimImageView a;
    com.tkay.basead.ui.WaveAnimImageView b;
    android.widget.ImageView c;
    float d;
    float e;
    float f;
    float g;
    float h;
    float i;
    final int j;
    final int k;
    final float l;
    android.animation.ValueAnimator m;
    android.animation.ValueAnimator n;
    android.view.animation.ScaleAnimation o;


    public GuideToClickView(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r0 = 1000(0x3e8, float:1.401E-42)
            r1.j = r0
            r0 = 200(0xc8, float:2.8E-43)
            r1.k = r0
            r0 = 1060559726(0x3f36db6e, float:0.71428573)
            r1.l = r0
            r1.a(r2)
            return
    }

    public GuideToClickView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r2 = 1000(0x3e8, float:1.401E-42)
            r0.j = r2
            r2 = 200(0xc8, float:2.8E-43)
            r0.k = r2
            r2 = 1060559726(0x3f36db6e, float:0.71428573)
            r0.l = r2
            r0.a(r1)
            return
    }

    public GuideToClickView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r2 = 1000(0x3e8, float:1.401E-42)
            r0.j = r2
            r2 = 200(0xc8, float:2.8E-43)
            r0.k = r2
            r2 = 1060559726(0x3f36db6e, float:0.71428573)
            r0.l = r2
            r0.a(r1)
            return
    }

    private void a() {
            r4 = this;
            android.animation.ValueAnimator r0 = r4.m
            com.tkay.basead.ui.WaveAnimImageView r1 = r4.a
            r2 = 0
            r4.startAnim(r0, r1, r2)
            android.animation.ValueAnimator r0 = r4.n
            com.tkay.basead.ui.WaveAnimImageView r1 = r4.b
            r2 = 800(0x320, double:3.953E-321)
            r4.startAnim(r0, r1, r2)
            android.widget.ImageView r0 = r4.c
            android.view.animation.ScaleAnimation r1 = r4.o
            r0.startAnimation(r1)
            return
    }

    private void a(android.content.Context r4) {
            r3 = this;
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r4)
            java.lang.String r1 = "myoffer_guide_to_click"
            java.lang.String r2 = "layout"
            int r1 = com.tkay.core.common.l.h.a(r4, r1, r2)
            r0.inflate(r1, r3)
            r0 = 1061997773(0x3f4ccccd, float:0.8)
            r3.d = r0
            r0 = 1028443341(0x3d4ccccd, float:0.05)
            r3.e = r0
            r0 = 1082130432(0x40800000, float:4.0)
            int r0 = com.tkay.core.common.l.h.a(r4, r0)
            float r0 = (float) r0
            r3.f = r0
            r0 = 1099956224(0x41900000, float:18.0)
            int r0 = com.tkay.core.common.l.h.a(r4, r0)
            float r0 = (float) r0
            r3.g = r0
            r0 = 1073741824(0x40000000, float:2.0)
            int r0 = com.tkay.core.common.l.h.a(r4, r0)
            float r0 = (float) r0
            r3.h = r0
            r0 = 1109393408(0x42200000, float:40.0)
            int r0 = com.tkay.core.common.l.h.a(r4, r0)
            float r0 = (float) r0
            r3.i = r0
            java.lang.String r0 = "id"
            java.lang.String r1 = "myoffer_wave_anim_image"
            int r1 = com.tkay.core.common.l.h.a(r4, r1, r0)
            android.view.View r1 = r3.findViewById(r1)
            com.tkay.basead.ui.WaveAnimImageView r1 = (com.tkay.basead.ui.WaveAnimImageView) r1
            r3.a = r1
            java.lang.String r1 = "myoffer_wave_anim_image2"
            int r1 = com.tkay.core.common.l.h.a(r4, r1, r0)
            android.view.View r1 = r3.findViewById(r1)
            com.tkay.basead.ui.WaveAnimImageView r1 = (com.tkay.basead.ui.WaveAnimImageView) r1
            r3.b = r1
            r1 = 2
            float[] r2 = new float[r1]
            r2 = {x009e: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            android.animation.ValueAnimator r2 = android.animation.ValueAnimator.ofFloat(r2)
            r3.m = r2
            float[] r2 = new float[r1]
            r2 = {x00a6: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            android.animation.ValueAnimator r2 = android.animation.ValueAnimator.ofFloat(r2)
            r3.n = r2
            java.lang.String r2 = "myoffer_guide_to_click_finger"
            int r4 = com.tkay.core.common.l.h.a(r4, r2, r0)
            android.view.View r4 = r3.findViewById(r4)
            android.widget.ImageView r4 = (android.widget.ImageView) r4
            r3.c = r4
            android.view.animation.ScaleAnimation r4 = new android.view.animation.ScaleAnimation
            r0 = 1066192077(0x3f8ccccd, float:1.1)
            r2 = 1065353216(0x3f800000, float:1.0)
            r4.<init>(r2, r0, r2, r0)
            r3.o = r4
            r4.setRepeatMode(r1)
            android.view.animation.ScaleAnimation r4 = r3.o
            r0 = -1
            r4.setRepeatCount(r0)
            android.view.animation.ScaleAnimation r4 = r3.o
            r0 = 333(0x14d, double:1.645E-321)
            r4.setDuration(r0)
            return
    }

    private void b() {
            r1 = this;
            android.animation.ValueAnimator r0 = r1.m
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            android.animation.ValueAnimator r0 = r1.n
            if (r0 == 0) goto Le
            r0.cancel()
        Le:
            android.view.animation.ScaleAnimation r0 = r1.o
            if (r0 == 0) goto L15
            r0.cancel()
        L15:
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r4 = this;
            super.onAttachedToWindow()
            android.animation.ValueAnimator r0 = r4.m
            com.tkay.basead.ui.WaveAnimImageView r1 = r4.a
            r2 = 0
            r4.startAnim(r0, r1, r2)
            android.animation.ValueAnimator r0 = r4.n
            com.tkay.basead.ui.WaveAnimImageView r1 = r4.b
            r2 = 800(0x320, double:3.953E-321)
            r4.startAnim(r0, r1, r2)
            android.widget.ImageView r0 = r4.c
            android.view.animation.ScaleAnimation r1 = r4.o
            r0.startAnimation(r1)
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            android.animation.ValueAnimator r0 = r1.m
            if (r0 == 0) goto La
            r0.cancel()
        La:
            android.animation.ValueAnimator r0 = r1.n
            if (r0 == 0) goto L11
            r0.cancel()
        L11:
            android.view.animation.ScaleAnimation r0 = r1.o
            if (r0 == 0) goto L18
            r0.cancel()
        L18:
            return
    }

    public void startAnim(android.animation.ValueAnimator r3, com.tkay.basead.ui.WaveAnimImageView r4, long r5) {
            r2 = this;
            if (r3 == 0) goto L23
            r0 = 1
            r3.setRepeatMode(r0)
            r0 = -1
            r3.setRepeatCount(r0)
            r0 = 1400(0x578, double:6.917E-321)
            r3.setDuration(r0)
            r3.removeAllUpdateListeners()
            r3.removeAllListeners()
            com.tkay.basead.ui.GuideToClickView$1 r0 = new com.tkay.basead.ui.GuideToClickView$1
            r0.<init>(r2, r4)
            r3.addUpdateListener(r0)
            r3.setStartDelay(r5)
            r3.start()
        L23:
            return
    }
}

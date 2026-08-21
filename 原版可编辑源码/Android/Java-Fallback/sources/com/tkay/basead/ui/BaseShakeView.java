package com.tkay.basead.ui;

public abstract class BaseShakeView extends android.widget.LinearLayout {
    protected android.widget.ImageView a;
    com.tkay.basead.c.h b;
    private android.view.animation.Animation c;
    private int d;
    private com.tkay.basead.ui.BaseShakeView.a e;


    final class 2 implements android.view.animation.Animation.AnimationListener {
        final com.tkay.basead.ui.BaseShakeView a;

        2(com.tkay.basead.ui.BaseShakeView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onAnimationEnd(android.view.animation.Animation r1) {
                r0 = this;
                return
        }

        @Override
        public final void onAnimationRepeat(android.view.animation.Animation r1) {
                r0 = this;
                com.tkay.basead.ui.BaseShakeView r1 = r0.a
                com.tkay.basead.ui.BaseShakeView.b(r1)
                return
        }

        @Override
        public final void onAnimationStart(android.view.animation.Animation r1) {
                r0 = this;
                return
        }
    }

    final class 3 implements android.view.animation.Interpolator {
        final com.tkay.basead.ui.BaseShakeView a;

        3(com.tkay.basead.ui.BaseShakeView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final float getInterpolation(float r2) {
                r1 = this;
                com.tkay.basead.ui.BaseShakeView r0 = r1.a
                int r0 = com.tkay.basead.ui.BaseShakeView.c(r0)
                int r0 = r0 / 2
                int r0 = r0 % 3
                if (r0 != 0) goto Ld
                r2 = 0
            Ld:
                return r2
        }
    }

    protected interface a {
        boolean a();
    }

    public BaseShakeView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.d = r1
            com.tkay.basead.ui.BaseShakeView$1 r1 = new com.tkay.basead.ui.BaseShakeView$1
            r1.<init>(r0)
            r0.b = r1
            r0.a()
            return
    }

    public BaseShakeView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.d = r1
            com.tkay.basead.ui.BaseShakeView$1 r1 = new com.tkay.basead.ui.BaseShakeView$1
            r1.<init>(r0)
            r0.b = r1
            r0.a()
            return
    }

    public BaseShakeView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 0
            r0.d = r1
            com.tkay.basead.ui.BaseShakeView$1 r1 = new com.tkay.basead.ui.BaseShakeView$1
            r1.<init>(r0)
            r0.b = r1
            r0.a()
            return
    }

    public BaseShakeView(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            r1 = 0
            r0.d = r1
            com.tkay.basead.ui.BaseShakeView$1 r1 = new com.tkay.basead.ui.BaseShakeView$1
            r1.<init>(r0)
            r0.b = r1
            r0.a()
            return
    }

    static com.tkay.basead.ui.BaseShakeView.a a(com.tkay.basead.ui.BaseShakeView r0) {
            com.tkay.basead.ui.BaseShakeView$a r0 = r0.e
            return r0
    }

    static int b(com.tkay.basead.ui.BaseShakeView r2) {
            int r0 = r2.d
            int r1 = r0 + 1
            r2.d = r1
            return r0
    }

    private void b() {
            r8 = this;
            android.widget.ImageView r0 = r8.a
            if (r0 == 0) goto L44
            android.view.animation.RotateAnimation r0 = new android.view.animation.RotateAnimation
            r2 = -1054867456(0xffffffffc1200000, float:-10.0)
            r3 = 1092616192(0x41200000, float:10.0)
            r4 = 1
            r5 = 1061997773(0x3f4ccccd, float:0.8)
            r6 = 1
            r7 = 1061997773(0x3f4ccccd, float:0.8)
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r8.c = r0
            r1 = 150(0x96, double:7.4E-322)
            r0.setDuration(r1)
            android.view.animation.Animation r0 = r8.c
            r1 = 2
            r0.setRepeatMode(r1)
            android.view.animation.Animation r0 = r8.c
            r1 = -1
            r0.setRepeatCount(r1)
            android.view.animation.Animation r0 = r8.c
            com.tkay.basead.ui.BaseShakeView$2 r1 = new com.tkay.basead.ui.BaseShakeView$2
            r1.<init>(r8)
            r0.setAnimationListener(r1)
            android.view.animation.Animation r0 = r8.c
            com.tkay.basead.ui.BaseShakeView$3 r1 = new com.tkay.basead.ui.BaseShakeView$3
            r1.<init>(r8)
            r0.setInterpolator(r1)
            android.widget.ImageView r0 = r8.a
            android.view.animation.Animation r1 = r8.c
            r0.startAnimation(r1)
        L44:
            return
    }

    static int c(com.tkay.basead.ui.BaseShakeView r0) {
            int r0 = r0.d
            return r0
    }

    abstract void a();

    @Override
    protected void onAttachedToWindow() {
            r8 = this;
            super.onAttachedToWindow()
            android.widget.ImageView r0 = r8.a
            if (r0 == 0) goto L47
            android.view.animation.RotateAnimation r0 = new android.view.animation.RotateAnimation
            r2 = -1054867456(0xffffffffc1200000, float:-10.0)
            r3 = 1092616192(0x41200000, float:10.0)
            r4 = 1
            r5 = 1061997773(0x3f4ccccd, float:0.8)
            r6 = 1
            r7 = 1061997773(0x3f4ccccd, float:0.8)
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r8.c = r0
            r1 = 150(0x96, double:7.4E-322)
            r0.setDuration(r1)
            android.view.animation.Animation r0 = r8.c
            r1 = 2
            r0.setRepeatMode(r1)
            android.view.animation.Animation r0 = r8.c
            r1 = -1
            r0.setRepeatCount(r1)
            android.view.animation.Animation r0 = r8.c
            com.tkay.basead.ui.BaseShakeView$2 r1 = new com.tkay.basead.ui.BaseShakeView$2
            r1.<init>(r8)
            r0.setAnimationListener(r1)
            android.view.animation.Animation r0 = r8.c
            com.tkay.basead.ui.BaseShakeView$3 r1 = new com.tkay.basead.ui.BaseShakeView$3
            r1.<init>(r8)
            r0.setInterpolator(r1)
            android.widget.ImageView r0 = r8.a
            android.view.animation.Animation r1 = r8.c
            r0.startAnimation(r1)
        L47:
            com.tkay.expressad.shake.a r0 = com.tkay.expressad.shake.a.a()
            com.tkay.basead.c.h r1 = r8.b
            r0.a(r1)
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r2 = this;
            super.onDetachedFromWindow()
            android.view.animation.Animation r0 = r2.c
            if (r0 == 0) goto La
            r0.cancel()
        La:
            com.tkay.expressad.shake.a r0 = com.tkay.expressad.shake.a.a()
            com.tkay.basead.c.h r1 = r2.b
            r0.b(r1)
            return
    }

    public void setOnShakeListener(com.tkay.basead.ui.BaseShakeView.a r5, com.tkay.core.common.f.j r6) {
            r4 = this;
            com.tkay.basead.c.h r0 = r4.b
            int r1 = r6.N()
            long r2 = r6.O()
            r0.a(r1, r2)
            r4.e = r5
            return
    }
}

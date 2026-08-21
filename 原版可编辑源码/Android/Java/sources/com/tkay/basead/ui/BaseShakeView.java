package com.tkay.basead.ui;

import android.content.Context;
import android.util.AttributeSet;
import android.view.animation.Animation;
import android.view.animation.Interpolator;
import android.view.animation.RotateAnimation;
import android.widget.ImageView;
import android.widget.LinearLayout;
import com.tkay.basead.c.h;
import com.tkay.core.common.f.j;

public abstract class BaseShakeView extends LinearLayout {
    protected ImageView a;
    h b;
    private Animation c;
    private int d;
    private a e;

    protected interface a {
        boolean a();
    }

    abstract void a();

    static int b(BaseShakeView baseShakeView) {
        int i = baseShakeView.d;
        baseShakeView.d = i + 1;
        return i;
    }

    public BaseShakeView(Context context) {
        super(context);
        this.d = 0;
        this.b = new h() {
            @Override
            public final boolean a() {
                if (BaseShakeView.this.isShown() && BaseShakeView.this.e != null) {
                    return BaseShakeView.this.e.a();
                }
                return false;
            }
        };
        a();
    }

    public BaseShakeView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.d = 0;
        this.b = new h() {
            @Override
            public final boolean a() {
                if (BaseShakeView.this.isShown() && BaseShakeView.this.e != null) {
                    return BaseShakeView.this.e.a();
                }
                return false;
            }
        };
        a();
    }

    public BaseShakeView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.d = 0;
        this.b = new h() {
            @Override
            public final boolean a() {
                if (BaseShakeView.this.isShown() && BaseShakeView.this.e != null) {
                    return BaseShakeView.this.e.a();
                }
                return false;
            }
        };
        a();
    }

    public BaseShakeView(Context context, AttributeSet attributeSet, int i, int i2) {
        super(context, attributeSet, i, i2);
        this.d = 0;
        this.b = new h() {
            @Override
            public final boolean a() {
                if (BaseShakeView.this.isShown() && BaseShakeView.this.e != null) {
                    return BaseShakeView.this.e.a();
                }
                return false;
            }
        };
        a();
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (this.a != null) {
            RotateAnimation rotateAnimation = new RotateAnimation(-10.0f, 10.0f, 1, 0.8f, 1, 0.8f);
            this.c = rotateAnimation;
            rotateAnimation.setDuration(150L);
            this.c.setRepeatMode(2);
            this.c.setRepeatCount(-1);
            this.c.setAnimationListener(new 2());
            this.c.setInterpolator(new 3());
            this.a.startAnimation(this.c);
        }
        com.tkay.expressad.shake.a.a().a(this.b);
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        Animation animation = this.c;
        if (animation != null) {
            animation.cancel();
        }
        com.tkay.expressad.shake.a.a().b(this.b);
    }

    private void b() {
        if (this.a != null) {
            RotateAnimation rotateAnimation = new RotateAnimation(-10.0f, 10.0f, 1, 0.8f, 1, 0.8f);
            this.c = rotateAnimation;
            rotateAnimation.setDuration(150L);
            this.c.setRepeatMode(2);
            this.c.setRepeatCount(-1);
            this.c.setAnimationListener(new 2());
            this.c.setInterpolator(new 3());
            this.a.startAnimation(this.c);
        }
    }

    final class 2 implements Animation.AnimationListener {
        @Override
        public final void onAnimationEnd(Animation animation) {
        }

        @Override
        public final void onAnimationStart(Animation animation) {
        }

        2() {
        }

        @Override
        public final void onAnimationRepeat(Animation animation) {
            BaseShakeView.b(BaseShakeView.this);
        }
    }

    final class 3 implements Interpolator {
        3() {
        }

        @Override
        public final float getInterpolation(float f) {
            if ((BaseShakeView.this.d / 2) % 3 == 0) {
                return 0.0f;
            }
            return f;
        }
    }

    public void setOnShakeListener(a aVar, j jVar) {
        this.b.a(jVar.N(), jVar.O());
        this.e = aVar;
    }
}

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

/* JADX INFO: loaded from: classes3.dex */
public abstract class BaseShakeView extends LinearLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected ImageView f5760a;
    h b;
    private Animation c;
    private int d;
    private a e;

    protected interface a {
        boolean a();
    }

    abstract void a();

    static /* synthetic */ int b(BaseShakeView baseShakeView) {
        int i = baseShakeView.d;
        baseShakeView.d = i + 1;
        return i;
    }

    public BaseShakeView(Context context) {
        super(context);
        this.d = 0;
        this.b = new h() { // from class: com.tkay.basead.ui.BaseShakeView.1
            @Override // com.tkay.basead.c.h
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
        this.b = new h() { // from class: com.tkay.basead.ui.BaseShakeView.1
            @Override // com.tkay.basead.c.h
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
        this.b = new h() { // from class: com.tkay.basead.ui.BaseShakeView.1
            @Override // com.tkay.basead.c.h
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
        this.b = new h() { // from class: com.tkay.basead.ui.BaseShakeView.1
            @Override // com.tkay.basead.c.h
            public final boolean a() {
                if (BaseShakeView.this.isShown() && BaseShakeView.this.e != null) {
                    return BaseShakeView.this.e.a();
                }
                return false;
            }
        };
        a();
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (this.f5760a != null) {
            RotateAnimation rotateAnimation = new RotateAnimation(-10.0f, 10.0f, 1, 0.8f, 1, 0.8f);
            this.c = rotateAnimation;
            rotateAnimation.setDuration(150L);
            this.c.setRepeatMode(2);
            this.c.setRepeatCount(-1);
            this.c.setAnimationListener(new AnonymousClass2());
            this.c.setInterpolator(new AnonymousClass3());
            this.f5760a.startAnimation(this.c);
        }
        com.tkay.expressad.shake.a.a().a(this.b);
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        Animation animation = this.c;
        if (animation != null) {
            animation.cancel();
        }
        com.tkay.expressad.shake.a.a().b(this.b);
    }

    private void b() {
        if (this.f5760a != null) {
            RotateAnimation rotateAnimation = new RotateAnimation(-10.0f, 10.0f, 1, 0.8f, 1, 0.8f);
            this.c = rotateAnimation;
            rotateAnimation.setDuration(150L);
            this.c.setRepeatMode(2);
            this.c.setRepeatCount(-1);
            this.c.setAnimationListener(new AnonymousClass2());
            this.c.setInterpolator(new AnonymousClass3());
            this.f5760a.startAnimation(this.c);
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.BaseShakeView$2, reason: invalid class name */
    final class AnonymousClass2 implements Animation.AnimationListener {
        @Override // android.view.animation.Animation.AnimationListener
        public final void onAnimationEnd(Animation animation) {
        }

        @Override // android.view.animation.Animation.AnimationListener
        public final void onAnimationStart(Animation animation) {
        }

        AnonymousClass2() {
        }

        @Override // android.view.animation.Animation.AnimationListener
        public final void onAnimationRepeat(Animation animation) {
            BaseShakeView.b(BaseShakeView.this);
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.BaseShakeView$3, reason: invalid class name */
    final class AnonymousClass3 implements Interpolator {
        AnonymousClass3() {
        }

        @Override // android.animation.TimeInterpolator
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

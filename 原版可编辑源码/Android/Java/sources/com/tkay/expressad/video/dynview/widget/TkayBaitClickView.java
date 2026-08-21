package com.tkay.expressad.video.dynview.widget;

import android.content.Context;
import android.graphics.Bitmap;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.animation.AlphaAnimation;
import android.view.animation.Animation;
import android.view.animation.AnimationSet;
import android.view.animation.RotateAnimation;
import android.view.animation.ScaleAnimation;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.tkay.core.common.b.m;
import com.tkay.expressad.foundation.g.d.b;
import com.tkay.expressad.foundation.g.d.c;
import com.tkay.expressad.foundation.h.i;
import com.tkay.expressad.foundation.h.t;

public class TkayBaitClickView extends RelativeLayout {
    public static final int ANIMATION_TYPE_DOUBLE_CLICK = 4;
    public static final int ANIMATION_TYPE_FAST_SCALE = 1;
    public static final int ANIMATION_TYPE_ROTATE = 5;
    public static final int ANIMATION_TYPE_SLOW_SCALE = 2;
    public static final int ANIMATION_TYPE_SLOW_SCALE_WITH_PAUSE = 3;
    private static final String a = "MBridgeAnimationClickView";
    private TYImageView b;
    private TYImageView c;
    private TextView d;
    private String e;
    private String f;
    private String g;
    private int h;
    private int i;
    private Animation j;
    private Animation k;
    private Animation l;
    private Animation m;

    public TkayBaitClickView(Context context) {
        super(context);
        this.e = "";
        this.f = "";
        this.g = "Click now for details";
        this.h = 1;
        this.i = 1342177280;
    }

    public TkayBaitClickView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.e = "";
        this.f = "";
        this.g = "Click now for details";
        this.h = 1;
        this.i = 1342177280;
    }

    public TkayBaitClickView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.e = "";
        this.f = "";
        this.g = "Click now for details";
        this.h = 1;
        this.i = 1342177280;
    }

    public TkayBaitClickView(Context context, AttributeSet attributeSet, int i, int i2) {
        super(context, attributeSet, i, i2);
        this.e = "";
        this.f = "";
        this.g = "Click now for details";
        this.h = 1;
        this.i = 1342177280;
    }

    public void init(int i) {
        this.h = i;
        init();
    }

    public void init(int i, int i2) {
        this.i = i;
        this.h = i2;
        init();
    }

    public void init(int i, int i2, String str, String str2, String str3) {
        this.i = i;
        this.h = i2;
        this.e = str;
        this.f = str2;
        this.g = str3;
        init();
    }

    public void init() {
        try {
            setBackgroundColor(this.i);
            try {
                this.g = getContext().getString(i.a(getContext(), "tkay_cm_click_for_detail", i.g));
            } catch (Throwable th) {
                th.getMessage();
            }
            RelativeLayout relativeLayout = new RelativeLayout(getContext());
            relativeLayout.setLayoutParams(new RelativeLayout.LayoutParams(-2, -2));
            int iB = t.b(getContext(), 55.0f);
            int iB2 = t.b(getContext(), 33.0f);
            this.c = new TYImageView(getContext());
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(iB, iB);
            layoutParams.setMargins(iB2, iB2, 0, 0);
            this.c.setLayoutParams(layoutParams);
            final int iA = i.a(getContext(), "tkay_icon_click_circle", i.c);
            if (TextUtils.isEmpty(this.f)) {
                this.c.setImageResource(iA);
            } else {
                b.a(m.a().f()).a(this.e, new c() {
                    @Override
                    public final void a(Bitmap bitmap, String str) {
                        if (bitmap.isRecycled()) {
                            return;
                        }
                        TkayBaitClickView.this.c.setImageBitmap(bitmap);
                    }

                    @Override
                    public final void a(String str, String str2) {
                        TkayBaitClickView.this.c.setImageResource(iA);
                    }
                });
            }
            int iB3 = t.b(getContext(), 108.0f);
            int iB4 = t.b(getContext(), 35.0f);
            int iB5 = t.b(getContext(), 43.0f);
            this.b = new TYImageView(getContext());
            RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(iB3, iB3);
            layoutParams2.setMargins(iB4, iB5, 0, 0);
            this.b.setLayoutParams(layoutParams2);
            final int iA2 = i.a(getContext(), "tkay_icon_click_hand", i.c);
            if (TextUtils.isEmpty(this.e)) {
                this.b.setImageResource(iA2);
            } else {
                b.a(m.a().f()).a(this.e, new c() {
                    @Override
                    public final void a(Bitmap bitmap, String str) {
                        if (bitmap.isRecycled()) {
                            return;
                        }
                        TkayBaitClickView.this.b.setImageBitmap(bitmap);
                    }

                    @Override
                    public final void a(String str, String str2) {
                        TkayBaitClickView.this.b.setImageResource(iA2);
                    }
                });
            }
            relativeLayout.addView(this.c);
            relativeLayout.addView(this.b);
            LinearLayout linearLayout = new LinearLayout(getContext());
            RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-2, -2);
            layoutParams3.addRule(13);
            linearLayout.setLayoutParams(layoutParams3);
            linearLayout.setOrientation(1);
            linearLayout.setGravity(1);
            linearLayout.addView(relativeLayout);
            this.d = new TextView(getContext());
            this.d.setLayoutParams(new RelativeLayout.LayoutParams(-2, -2));
            this.d.setText(this.g);
            this.d.setTextColor(-1);
            this.d.setGravity(14);
            linearLayout.addView(this.d);
            addView(linearLayout);
        } catch (Throwable th2) {
            th2.getMessage();
        }
    }

    public void startAnimation() {
        int i = this.h;
        if (i == 2) {
            this.c.setVisibility(4);
            ScaleAnimation scaleAnimation = new ScaleAnimation(1.0f, 0.7f, 1.0f, 0.7f, 1, 0.5f, 1, 0.5f);
            this.j = scaleAnimation;
            scaleAnimation.setDuration(500L);
            this.j.setRepeatCount(-1);
            this.j.setRepeatMode(2);
            TYImageView tYImageView = this.b;
            if (tYImageView != null) {
                tYImageView.startAnimation(this.j);
                return;
            }
            return;
        }
        if (i == 3) {
            TYImageView tYImageView2 = this.c;
            if (tYImageView2 != null) {
                tYImageView2.setVisibility(4);
            }
            ScaleAnimation scaleAnimation2 = new ScaleAnimation(1.0f, 0.7f, 1.0f, 0.7f, 1, 0.5f, 1, 0.5f);
            this.j = scaleAnimation2;
            scaleAnimation2.setDuration(500L);
            this.j.setRepeatCount(1);
            this.j.setRepeatMode(2);
            ScaleAnimation scaleAnimation3 = new ScaleAnimation(0.0f, 1.5f, 0.0f, 1.5f, 1, 0.5f, 1, 0.5f);
            this.k = scaleAnimation3;
            scaleAnimation3.setDuration(1000L);
            this.k.setRepeatCount(0);
            AlphaAnimation alphaAnimation = new AlphaAnimation(1.0f, 0.0f);
            this.l = alphaAnimation;
            alphaAnimation.setDuration(1000L);
            this.l.setRepeatCount(0);
            AnimationSet animationSet = new AnimationSet(true);
            animationSet.addAnimation(this.k);
            animationSet.addAnimation(this.l);
            this.k.setAnimationListener(new 3());
            this.j.setAnimationListener(new 4(animationSet));
            TYImageView tYImageView3 = this.b;
            if (tYImageView3 != null) {
                tYImageView3.startAnimation(this.j);
                return;
            }
            return;
        }
        if (i == 4) {
            this.c.setVisibility(4);
            ScaleAnimation scaleAnimation4 = new ScaleAnimation(0.8f, 1.0f, 0.8f, 1.0f, 1, 0.5f, 1, 0.5f);
            this.j = scaleAnimation4;
            scaleAnimation4.setDuration(200L);
            this.j.setRepeatCount(1);
            this.j.setAnimationListener(new 5());
            TYImageView tYImageView4 = this.b;
            if (tYImageView4 != null) {
                tYImageView4.startAnimation(this.j);
                return;
            }
            return;
        }
        if (i != 5) {
            ScaleAnimation scaleAnimation5 = new ScaleAnimation(1.0f, 0.7f, 1.0f, 0.7f, 1, 0.5f, 1, 0.5f);
            this.j = scaleAnimation5;
            scaleAnimation5.setDuration(200L);
            this.j.setRepeatCount(-1);
            this.j.setRepeatMode(2);
            TYImageView tYImageView5 = this.b;
            if (tYImageView5 != null) {
                tYImageView5.startAnimation(this.j);
            }
            ScaleAnimation scaleAnimation6 = new ScaleAnimation(0.0f, 1.2f, 0.0f, 1.2f, 1, 0.5f, 1, 0.5f);
            this.k = scaleAnimation6;
            scaleAnimation6.setDuration(400L);
            this.k.setRepeatCount(-1);
            AlphaAnimation alphaAnimation2 = new AlphaAnimation(1.0f, 0.3f);
            this.l = alphaAnimation2;
            alphaAnimation2.setDuration(400L);
            this.l.setRepeatCount(-1);
            AnimationSet animationSet2 = new AnimationSet(true);
            animationSet2.addAnimation(this.k);
            animationSet2.addAnimation(this.l);
            TYImageView tYImageView6 = this.c;
            if (tYImageView6 != null) {
                tYImageView6.startAnimation(animationSet2);
                return;
            }
            return;
        }
        RotateAnimation rotateAnimation = new RotateAnimation(-10.0f, 30.0f, 1, 0.5f, 1, 0.5f);
        this.m = rotateAnimation;
        rotateAnimation.setDuration(300L);
        this.m.setRepeatMode(2);
        this.m.setRepeatCount(-1);
        ScaleAnimation scaleAnimation7 = new ScaleAnimation(0.0f, 1.2f, 0.0f, 1.2f, 1, 0.5f, 1, 0.5f);
        this.k = scaleAnimation7;
        scaleAnimation7.setDuration(600L);
        this.k.setRepeatCount(-1);
        AlphaAnimation alphaAnimation3 = new AlphaAnimation(1.0f, 0.0f);
        this.l = alphaAnimation3;
        alphaAnimation3.setDuration(600L);
        this.l.setRepeatCount(-1);
        AnimationSet animationSet3 = new AnimationSet(true);
        animationSet3.addAnimation(this.k);
        animationSet3.addAnimation(this.l);
        TYImageView tYImageView7 = this.b;
        if (tYImageView7 != null) {
            tYImageView7.startAnimation(this.m);
        }
        TYImageView tYImageView8 = this.c;
        if (tYImageView8 != null) {
            tYImageView8.startAnimation(animationSet3);
        }
    }

    private void a() {
        try {
            this.g = getContext().getString(i.a(getContext(), "tkay_cm_click_for_detail", i.g));
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        clearAnimation();
        Animation animation = this.j;
        if (animation != null) {
            animation.cancel();
        }
        Animation animation2 = this.k;
        if (animation2 != null) {
            animation2.cancel();
        }
        Animation animation3 = this.l;
        if (animation3 != null) {
            animation3.cancel();
        }
        Animation animation4 = this.m;
        if (animation4 != null) {
            animation4.cancel();
        }
    }

    private void b() {
        ScaleAnimation scaleAnimation = new ScaleAnimation(1.0f, 0.7f, 1.0f, 0.7f, 1, 0.5f, 1, 0.5f);
        this.j = scaleAnimation;
        scaleAnimation.setDuration(200L);
        this.j.setRepeatCount(-1);
        this.j.setRepeatMode(2);
        TYImageView tYImageView = this.b;
        if (tYImageView != null) {
            tYImageView.startAnimation(this.j);
        }
        ScaleAnimation scaleAnimation2 = new ScaleAnimation(0.0f, 1.2f, 0.0f, 1.2f, 1, 0.5f, 1, 0.5f);
        this.k = scaleAnimation2;
        scaleAnimation2.setDuration(400L);
        this.k.setRepeatCount(-1);
        AlphaAnimation alphaAnimation = new AlphaAnimation(1.0f, 0.3f);
        this.l = alphaAnimation;
        alphaAnimation.setDuration(400L);
        this.l.setRepeatCount(-1);
        AnimationSet animationSet = new AnimationSet(true);
        animationSet.addAnimation(this.k);
        animationSet.addAnimation(this.l);
        TYImageView tYImageView2 = this.c;
        if (tYImageView2 != null) {
            tYImageView2.startAnimation(animationSet);
        }
    }

    private void c() {
        ScaleAnimation scaleAnimation = new ScaleAnimation(1.0f, 0.7f, 1.0f, 0.7f, 1, 0.5f, 1, 0.5f);
        this.j = scaleAnimation;
        scaleAnimation.setDuration(500L);
        this.j.setRepeatCount(-1);
        this.j.setRepeatMode(2);
        TYImageView tYImageView = this.b;
        if (tYImageView != null) {
            tYImageView.startAnimation(this.j);
        }
    }

    private void d() {
        TYImageView tYImageView = this.c;
        if (tYImageView != null) {
            tYImageView.setVisibility(4);
        }
        ScaleAnimation scaleAnimation = new ScaleAnimation(1.0f, 0.7f, 1.0f, 0.7f, 1, 0.5f, 1, 0.5f);
        this.j = scaleAnimation;
        scaleAnimation.setDuration(500L);
        this.j.setRepeatCount(1);
        this.j.setRepeatMode(2);
        ScaleAnimation scaleAnimation2 = new ScaleAnimation(0.0f, 1.5f, 0.0f, 1.5f, 1, 0.5f, 1, 0.5f);
        this.k = scaleAnimation2;
        scaleAnimation2.setDuration(1000L);
        this.k.setRepeatCount(0);
        AlphaAnimation alphaAnimation = new AlphaAnimation(1.0f, 0.0f);
        this.l = alphaAnimation;
        alphaAnimation.setDuration(1000L);
        this.l.setRepeatCount(0);
        AnimationSet animationSet = new AnimationSet(true);
        animationSet.addAnimation(this.k);
        animationSet.addAnimation(this.l);
        this.k.setAnimationListener(new 3());
        this.j.setAnimationListener(new 4(animationSet));
        TYImageView tYImageView2 = this.b;
        if (tYImageView2 != null) {
            tYImageView2.startAnimation(this.j);
        }
    }

    final class 3 implements Animation.AnimationListener {
        @Override
        public final void onAnimationRepeat(Animation animation) {
        }

        3() {
        }

        @Override
        public final void onAnimationStart(Animation animation) {
            if (TkayBaitClickView.this.c != null) {
                TkayBaitClickView.this.c.setVisibility(0);
            }
        }

        @Override
        public final void onAnimationEnd(Animation animation) {
            if (TkayBaitClickView.this.c != null) {
                TkayBaitClickView.this.c.setVisibility(4);
            }
        }
    }

    final class 4 implements Animation.AnimationListener {
        final AnimationSet a;

        @Override
        public final void onAnimationRepeat(Animation animation) {
        }

        4(AnimationSet animationSet) {
            this.a = animationSet;
        }

        @Override
        public final void onAnimationStart(Animation animation) {
            TkayBaitClickView.this.postDelayed(new Runnable() {
                @Override
                public final void run() {
                    if (TkayBaitClickView.this.c != null) {
                        TkayBaitClickView.this.c.startAnimation(4.this.a);
                    }
                }
            }, 550L);
        }

        @Override
        public final void onAnimationEnd(Animation animation) {
            TkayBaitClickView.this.postDelayed(new Runnable() {
                @Override
                public final void run() {
                    if (TkayBaitClickView.this.b != null) {
                        TkayBaitClickView.this.b.startAnimation(TkayBaitClickView.this.j);
                    }
                }
            }, 1000L);
        }
    }

    private void e() {
        ScaleAnimation scaleAnimation = new ScaleAnimation(0.8f, 1.0f, 0.8f, 1.0f, 1, 0.5f, 1, 0.5f);
        this.j = scaleAnimation;
        scaleAnimation.setDuration(200L);
        this.j.setRepeatCount(1);
        this.j.setAnimationListener(new 5());
        TYImageView tYImageView = this.b;
        if (tYImageView != null) {
            tYImageView.startAnimation(this.j);
        }
    }

    final class 5 implements Animation.AnimationListener {
        @Override
        public final void onAnimationRepeat(Animation animation) {
        }

        @Override
        public final void onAnimationStart(Animation animation) {
        }

        5() {
        }

        @Override
        public final void onAnimationEnd(Animation animation) {
            TkayBaitClickView.this.postDelayed(new Runnable() {
                @Override
                public final void run() {
                    if (TkayBaitClickView.this.b != null) {
                        TkayBaitClickView.this.b.startAnimation(TkayBaitClickView.this.j);
                    }
                }
            }, 1000L);
        }
    }

    private void f() {
        RotateAnimation rotateAnimation = new RotateAnimation(-10.0f, 30.0f, 1, 0.5f, 1, 0.5f);
        this.m = rotateAnimation;
        rotateAnimation.setDuration(300L);
        this.m.setRepeatMode(2);
        this.m.setRepeatCount(-1);
        ScaleAnimation scaleAnimation = new ScaleAnimation(0.0f, 1.2f, 0.0f, 1.2f, 1, 0.5f, 1, 0.5f);
        this.k = scaleAnimation;
        scaleAnimation.setDuration(600L);
        this.k.setRepeatCount(-1);
        AlphaAnimation alphaAnimation = new AlphaAnimation(1.0f, 0.0f);
        this.l = alphaAnimation;
        alphaAnimation.setDuration(600L);
        this.l.setRepeatCount(-1);
        AnimationSet animationSet = new AnimationSet(true);
        animationSet.addAnimation(this.k);
        animationSet.addAnimation(this.l);
        TYImageView tYImageView = this.b;
        if (tYImageView != null) {
            tYImageView.startAnimation(this.m);
        }
        TYImageView tYImageView2 = this.c;
        if (tYImageView2 != null) {
            tYImageView2.startAnimation(animationSet);
        }
    }
}

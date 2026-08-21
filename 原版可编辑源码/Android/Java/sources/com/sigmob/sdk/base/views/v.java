package com.sigmob.sdk.base.views;

import android.animation.Animator;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.util.AttributeSet;
import android.view.View;
import android.view.animation.LinearInterpolator;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.czhj.sdk.common.utils.ResourceUtil;

public class v extends RelativeLayout {
    public static final int a = 1;
    public static final int b = 2;
    private ImageView c;
    private TextView d;
    private TextView e;
    private AnimatorSet f;
    private ObjectAnimator g;
    private ObjectAnimator h;
    private View i;
    private boolean j;

    public v(Context context) {
        super(context);
        a(context);
    }

    public v(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        a(context);
    }

    public v(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        a(context);
    }

    private void a(Context context) {
        View.inflate(context, b(context), this);
        this.c = (ImageView) findViewById(ResourceUtil.getId(context, "sig_shakeImageView"));
        this.d = (TextView) findViewById(ResourceUtil.getId(context, "sig_shakeTitleView"));
        this.e = (TextView) findViewById(ResourceUtil.getId(context, "sig_shakeDescView"));
        this.i = findViewById(ResourceUtil.getId(context, "sig_shake_view"));
        c();
        b();
    }

    private int b(Context context) {
        return ResourceUtil.getLayoutId(context, "sig_shake_view_layout");
    }

    private void b() {
        int i = this.c.getLayoutParams().height;
        this.c.setPivotX(this.c.getLayoutParams().width);
        this.c.setPivotY(i * 0.8f);
        ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(this.c, "rotation", 0.0f, 18.0f, 0.0f, -18.0f, 0.0f, 18.0f, 0.0f, -18.0f, 0.0f, 18.0f, 0.0f);
        this.g = objectAnimatorOfFloat;
        objectAnimatorOfFloat.setInterpolator(new LinearInterpolator());
        this.g.addListener(new Animator.AnimatorListener() {
            @Override
            public void onAnimationCancel(Animator animator) {
            }

            @Override
            public void onAnimationEnd(Animator animator) {
                new Handler(Looper.getMainLooper()).postDelayed(new Runnable() {
                    @Override
                    public void run() {
                        if (v.this.j) {
                            return;
                        }
                        v.this.g.start();
                    }
                }, 300L);
            }

            @Override
            public void onAnimationRepeat(Animator animator) {
            }

            @Override
            public void onAnimationStart(Animator animator) {
            }
        });
        this.g.setDuration(1500L);
    }

    private void c() {
        ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(this.i, "translationY", 0.0f, 30.0f, 0.0f, -30.0f, 0.0f);
        this.h = objectAnimatorOfFloat;
        objectAnimatorOfFloat.setInterpolator(new LinearInterpolator());
        this.h.setRepeatCount(2);
        this.h.setDuration(400L);
    }

    void a() {
        this.h.start();
    }

    public void a(int i) {
        ObjectAnimator objectAnimator;
        if (i != 1) {
            this.j = true;
            this.g.cancel();
            objectAnimator = this.h;
        } else {
            objectAnimator = this.g;
        }
        objectAnimator.start();
    }
}

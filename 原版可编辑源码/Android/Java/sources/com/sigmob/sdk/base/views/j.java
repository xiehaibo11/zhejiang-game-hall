package com.sigmob.sdk.base.views;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.Keyframe;
import android.animation.ObjectAnimator;
import android.animation.PropertyValuesHolder;
import android.content.Context;
import android.graphics.Typeface;
import android.graphics.drawable.GradientDrawable;
import android.os.Build;
import android.text.TextUtils;
import android.view.View;
import android.view.animation.Animation;
import android.view.animation.Interpolator;
import android.view.animation.LinearInterpolator;
import android.view.animation.TranslateAnimation;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.network.Networking;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.logger.SigmobLog;
import com.czhj.volley.VolleyError;
import com.czhj.volley.toolbox.ImageLoader;
import com.sigmob.sdk.base.models.BaseAdUnit;

public class j extends RelativeLayout {
    int a;
    private final ImageView b;
    private final TextView c;
    private final TextView d;
    private final int e;
    private TextView f;
    private TextView g;
    private p h;
    private ImageLoader.ImageContainer i;
    private j j;
    private int k;
    private boolean l;
    private int m;
    private int n;
    private boolean o;
    private boolean p;
    private boolean q;
    private LinearLayout r;
    private BaseAdUnit s;

    public j(Context context, BaseAdUnit baseAdUnit, String str, String str2, float f, String str3, int i, int i2, String str4, int i3, int i4, int i5, int i6, int i7, float f2) {
        super(context);
        this.j = null;
        this.k = 0;
        this.a = Dips.asIntPixels(f2, context);
        this.n = Dips.asIntPixels(10.0f, context);
        this.s = baseAdUnit;
        this.k = i;
        this.e = i2;
        TextView textView = new TextView(context);
        this.d = textView;
        textView.setText(str);
        this.d.setTextSize(1, 16.0f);
        this.d.setTextColor(-16777216);
        this.d.setSingleLine();
        this.d.setTypeface(Typeface.defaultFromStyle(0));
        this.d.setEllipsize(TextUtils.TruncateAt.END);
        this.d.setGravity(16);
        this.d.setId(ClientMetadata.generateViewId());
        this.d.setPadding(this.n / 6, 0, 0, 0);
        this.m = i5;
        TextView textView2 = new TextView(context);
        this.c = textView2;
        textView2.setTextSize(1, 14.0f);
        this.c.setTextColor(i4);
        this.c.setGravity(17);
        this.d.setSingleLine();
        this.c.setEllipsize(TextUtils.TruncateAt.END);
        this.c.setText(str2);
        int iAsIntPixels = Dips.asIntPixels(5.0f, context);
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setColor(i3);
        gradientDrawable.setCornerRadius(iAsIntPixels * 6);
        h hVar = new h(context);
        this.b = hVar;
        hVar.setScaleType(ImageView.ScaleType.FIT_START);
        this.b.setId(ClientMetadata.generateViewId());
        ((h) this.b).b = false;
        float f3 = iAsIntPixels * 2;
        ((h) this.b).a = f3;
        if (Build.VERSION.SDK_INT >= 16) {
            this.c.setBackground(gradientDrawable);
        } else {
            this.c.setBackgroundDrawable(gradientDrawable);
        }
        this.c.setId(ClientMetadata.generateViewId());
        GradientDrawable gradientDrawable2 = new GradientDrawable();
        gradientDrawable2.setCornerRadius(f3);
        gradientDrawable2.setColor(i6);
        gradientDrawable2.setAlpha(i7);
        if (Build.VERSION.SDK_INT >= 16) {
            setBackground(gradientDrawable2);
        } else {
            setBackgroundDrawable(gradientDrawable2);
        }
        this.j = this;
        if (this.e == 1) {
            a(context, f);
        } else {
            a(context, str3);
        }
        if (baseAdUnit.getMaterial() != null && baseAdUnit.getMaterial().ad_privacy != null) {
            a(context);
        }
        setupUILayout(context);
        this.b.setVisibility(4);
        a(str4);
        g();
    }

    private void c() {
        int i = this.k;
        if (i == 1) {
            e();
        } else if (i == 2 || i != 3) {
            h();
        } else {
            f();
        }
    }

    private void d() {
        ObjectAnimator objectAnimatorOfPropertyValuesHolder = ObjectAnimator.ofPropertyValuesHolder(this, PropertyValuesHolder.ofFloat("scaleX", 0.3f, 0.5f, 1.0f), PropertyValuesHolder.ofFloat("scaleY", 0.3f, 0.5f, 1.0f));
        objectAnimatorOfPropertyValuesHolder.setInterpolator(new Interpolator() {
            @Override
            public float getInterpolation(float f) {
                SigmobLog.e("input: " + f);
                return (float) ((Math.pow(2.0d, (-10.0f) * f) * Math.sin((((double) (f - 0.13333334f)) * 6.283185307179586d) / 0.4000000059604645d)) + 1.0d);
            }
        });
        f();
        objectAnimatorOfPropertyValuesHolder.setDuration(2000L);
        objectAnimatorOfPropertyValuesHolder.start();
    }

    private void e() {
        Keyframe keyframeOfFloat = Keyframe.ofFloat(0.0f, 0.0f);
        Keyframe keyframeOfFloat2 = Keyframe.ofFloat(0.5f, 0.95f);
        Keyframe keyframeOfFloat3 = Keyframe.ofFloat(0.6f, 0.9f);
        Keyframe keyframeOfFloat4 = Keyframe.ofFloat(0.7f, 1.0f);
        Keyframe keyframeOfFloat5 = Keyframe.ofFloat(0.8f, 0.95f);
        Keyframe keyframeOfFloat6 = Keyframe.ofFloat(1.0f, 1.0f);
        ObjectAnimator objectAnimatorOfPropertyValuesHolder = ObjectAnimator.ofPropertyValuesHolder(this, PropertyValuesHolder.ofKeyframe("scaleX", keyframeOfFloat, keyframeOfFloat2, keyframeOfFloat3, keyframeOfFloat4, keyframeOfFloat5, keyframeOfFloat6), PropertyValuesHolder.ofKeyframe("scaleY", keyframeOfFloat, keyframeOfFloat2, keyframeOfFloat3, keyframeOfFloat4, keyframeOfFloat5, keyframeOfFloat6));
        objectAnimatorOfPropertyValuesHolder.setDuration(1000L);
        f();
        this.q = true;
        objectAnimatorOfPropertyValuesHolder.addListener(new AnimatorListenerAdapter() {
            @Override
            public void onAnimationCancel(Animator animator) {
                super.onAnimationCancel(animator);
                j.this.p = false;
                j.this.q = false;
                j.this.j.clearAnimation();
            }

            @Override
            public void onAnimationEnd(Animator animator) {
                super.onAnimationEnd(animator);
                j.this.p = false;
                j.this.q = false;
                j.this.j.clearAnimation();
            }
        });
        objectAnimatorOfPropertyValuesHolder.start();
    }

    private void f() {
        this.o = true;
        super.setVisibility(0);
    }

    private void g() {
        super.setVisibility(4);
    }

    private void h() {
        SigmobLog.d("startDownToUpAnimator");
        TranslateAnimation translateAnimation = new TranslateAnimation(2, 0.0f, 2, 0.0f, 2, 1.0f, 2, 0.0f);
        translateAnimation.setInterpolator(new LinearInterpolator());
        translateAnimation.setDuration(500L);
        f();
        translateAnimation.setAnimationListener(new Animation.AnimationListener() {
            @Override
            public void onAnimationEnd(Animation animation) {
                j.this.p = false;
                j.this.j.clearAnimation();
                SigmobLog.d("startDownToUpAnimator end");
            }

            @Override
            public void onAnimationRepeat(Animation animation) {
            }

            @Override
            public void onAnimationStart(Animation animation) {
            }
        });
        this.j.startAnimation(translateAnimation);
    }

    private void i() {
        SigmobLog.d("startUpToDownAnimator");
        TranslateAnimation translateAnimation = new TranslateAnimation(2, 0.0f, 2, 0.0f, 2, 0.0f, 2, 1.0f);
        translateAnimation.setInterpolator(new LinearInterpolator());
        translateAnimation.setDuration(500L);
        translateAnimation.setAnimationListener(new Animation.AnimationListener() {
            @Override
            public void onAnimationEnd(Animation animation) {
                j.this.p = true;
                j.this.j.clearAnimation();
                j.this.g();
                SigmobLog.d("startUpToDownAnimator end");
            }

            @Override
            public void onAnimationRepeat(Animation animation) {
            }

            @Override
            public void onAnimationStart(Animation animation) {
            }
        });
        this.j.startAnimation(translateAnimation);
    }

    private void setupUILayout(Context context) {
        int iAsIntPixels = Dips.asIntPixels(60.0f, context);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(iAsIntPixels, iAsIntPixels);
        layoutParams.addRule(15);
        int i = this.n;
        layoutParams.setMargins(i, i / 4, 0, 0);
        addView(this.b, layoutParams);
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-2, (int) (iAsIntPixels / 1.8f));
        layoutParams2.setMargins(0, 0, this.n, 0);
        layoutParams2.addRule(15);
        layoutParams2.addRule(11);
        TextView textView = this.c;
        int i2 = this.n;
        textView.setPadding(i2, 0, i2, 0);
        addView(this.c, layoutParams2);
        LinearLayout linearLayout = new LinearLayout(context);
        linearLayout.setOrientation(1);
        RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams3.setMargins(this.n / 2, 0, 0, 0);
        layoutParams3.addRule(15);
        layoutParams3.addRule(1, this.b.getId());
        layoutParams3.addRule(0, this.c.getId());
        addView(linearLayout, layoutParams3);
        linearLayout.addView(this.d, new RelativeLayout.LayoutParams(-2, -2));
        if (this.f != null) {
            RelativeLayout relativeLayout = new RelativeLayout(context);
            relativeLayout.addView(this.f, new RelativeLayout.LayoutParams(-2, -2));
            RelativeLayout.LayoutParams layoutParams4 = new RelativeLayout.LayoutParams(-2, -2);
            layoutParams4.addRule(1, this.f.getId());
            layoutParams4.addRule(6, this.f.getId());
            layoutParams4.addRule(8, this.f.getId());
            relativeLayout.addView(this.h, layoutParams4);
            linearLayout.addView(relativeLayout, new RelativeLayout.LayoutParams(-2, -2));
        } else if (this.g != null) {
            linearLayout.addView(this.g, new RelativeLayout.LayoutParams(-2, -2));
        }
        if (this.r != null) {
            linearLayout.addView(this.r, new RelativeLayout.LayoutParams(-2, -2));
        }
    }

    public void a(Context context) {
        LinearLayout linearLayout = new LinearLayout(context);
        this.r = linearLayout;
        linearLayout.setOrientation(0);
        this.r.setId(ClientMetadata.generateViewId());
        int iAsIntPixels = Dips.asIntPixels(5.0f, context);
        String[] strArr = {"权限", "开发者", "版本", "隐私协议"};
        for (int i = 0; i < 4; i++) {
            TextView textView = new TextView(context);
            textView.setTextSize(1, 10.0f);
            textView.setText(strArr[i]);
            textView.setTextColor(-7829368);
            textView.setAlpha(0.7f);
            int i2 = iAsIntPixels / 2;
            textView.setPadding(i2, 0, i2, 0);
            LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-2, -2);
            layoutParams.setMargins(0, 0, iAsIntPixels, 0);
            this.r.addView(textView, layoutParams);
        }
    }

    public void a(Context context, float f) {
        TextView textView = new TextView(context);
        this.f = textView;
        textView.setTextSize(1, 14.0f);
        this.f.setId(ClientMetadata.generateViewId());
        this.f.setGravity(17);
        this.f.setTextColor(-7829368);
        if (f > 0.0f) {
            this.f.setText(String.format("%.1f", Float.valueOf(f)));
        }
        this.h = new p(context, f);
    }

    public void a(Context context, String str) {
        TextView textView = new TextView(context);
        this.g = textView;
        textView.setId(ClientMetadata.generateViewId());
        this.g.setTextColor(-7829368);
        this.g.setSingleLine();
        this.g.setGravity(17);
        this.g.setTextSize(1, 14.0f);
        this.g.setEllipsize(TextUtils.TruncateAt.END);
        this.g.setText(str);
    }

    public void a(String str) {
        ImageLoader imageLoader;
        if (TextUtils.isEmpty(str) || (imageLoader = Networking.getImageLoader()) == null) {
            return;
        }
        this.i = imageLoader.get(str, new ImageLoader.ImageListener() {
            @Override
            public void onErrorResponse(VolleyError volleyError) {
            }

            @Override
            public void onResponse(ImageLoader.ImageContainer imageContainer, boolean z) {
                if (imageContainer.getBitmap() != null) {
                    j.this.b.setImageBitmap(imageContainer.getBitmap());
                    j.this.b.setVisibility(0);
                    if (j.this.l) {
                        j.this.c();
                    }
                }
            }
        });
    }

    public boolean a() {
        return this.o;
    }

    public boolean b() {
        return this.p;
    }

    public LinearLayout getFourElementsLayout() {
        return this.r;
    }

    @Override
    public int getVisibility() {
        return super.getVisibility();
    }

    @Override
    public void setOnTouchListener(View.OnTouchListener onTouchListener) {
        if (this.m == 1) {
            this.c.setOnTouchListener(onTouchListener);
        } else {
            super.setOnTouchListener(onTouchListener);
        }
    }

    @Override
    public void setVisibility(int i) {
        if (i == 8) {
            super.setVisibility(i);
            this.i.cancelRequest();
            this.l = false;
        } else {
            if (i == 0) {
                this.l = true;
                if (this.j.getAnimation() == null && !this.q && this.b.getVisibility() == 0) {
                    c();
                    return;
                }
                return;
            }
            if (i != 4) {
                super.setVisibility(i);
            } else {
                if (this.j.getAnimation() != null) {
                    return;
                }
                i();
            }
        }
    }
}

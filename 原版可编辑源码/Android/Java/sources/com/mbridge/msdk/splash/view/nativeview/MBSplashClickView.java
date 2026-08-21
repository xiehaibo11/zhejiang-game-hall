package com.mbridge.msdk.splash.view.nativeview;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import android.graphics.RectF;
import android.graphics.drawable.GradientDrawable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.animation.Animation;
import android.view.animation.ScaleAnimation;
import android.view.animation.TranslateAnimation;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.mbridge.msdk.foundation.tools.ae;
import com.tkay.expressad.foundation.h.i;

public class MBSplashClickView extends RelativeLayout {
    public final int TYPE_SPLASH_BTN_CLICK;
    public final int TYPE_SPLASH_BTN_GO;
    public final int TYPE_SPLASH_BTN_OPEN;
    private final String a;
    private final String b;
    private final String c;
    private final String d;
    private final String e;
    private final String f;
    private final String g;
    private final String h;
    private final String i;
    private final String j;
    private final String k;
    private String l;
    private int m;
    private ImageView n;
    private ImageView o;
    private final RectF p;
    private final Paint q;
    private final Paint r;

    public MBSplashClickView(Context context) {
        super(context);
        this.a = "浏览第三方应用";
        this.b = "View";
        this.c = "打开第三方应用";
        this.d = "Open";
        this.e = "下载第三方应用";
        this.f = "Install";
        this.g = "mbridge_splash_btn_arrow_right";
        this.h = "mbridge_splash_btn_circle";
        this.i = "mbridge_splash_btn_finger";
        this.j = "mbridge_splash_btn_go";
        this.k = "mbridge_splash_btn_light";
        this.TYPE_SPLASH_BTN_OPEN = 1;
        this.TYPE_SPLASH_BTN_GO = 2;
        this.TYPE_SPLASH_BTN_CLICK = 3;
        this.p = new RectF();
        this.q = new Paint();
        this.r = new Paint();
        a();
    }

    public MBSplashClickView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.a = "浏览第三方应用";
        this.b = "View";
        this.c = "打开第三方应用";
        this.d = "Open";
        this.e = "下载第三方应用";
        this.f = "Install";
        this.g = "mbridge_splash_btn_arrow_right";
        this.h = "mbridge_splash_btn_circle";
        this.i = "mbridge_splash_btn_finger";
        this.j = "mbridge_splash_btn_go";
        this.k = "mbridge_splash_btn_light";
        this.TYPE_SPLASH_BTN_OPEN = 1;
        this.TYPE_SPLASH_BTN_GO = 2;
        this.TYPE_SPLASH_BTN_CLICK = 3;
        this.p = new RectF();
        this.q = new Paint();
        this.r = new Paint();
        a();
    }

    public MBSplashClickView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.a = "浏览第三方应用";
        this.b = "View";
        this.c = "打开第三方应用";
        this.d = "Open";
        this.e = "下载第三方应用";
        this.f = "Install";
        this.g = "mbridge_splash_btn_arrow_right";
        this.h = "mbridge_splash_btn_circle";
        this.i = "mbridge_splash_btn_finger";
        this.j = "mbridge_splash_btn_go";
        this.k = "mbridge_splash_btn_light";
        this.TYPE_SPLASH_BTN_OPEN = 1;
        this.TYPE_SPLASH_BTN_GO = 2;
        this.TYPE_SPLASH_BTN_CLICK = 3;
        this.p = new RectF();
        this.q = new Paint();
        this.r = new Paint();
        a();
    }

    public MBSplashClickView(Context context, AttributeSet attributeSet, int i, int i2) {
        super(context, attributeSet, i, i2);
        this.a = "浏览第三方应用";
        this.b = "View";
        this.c = "打开第三方应用";
        this.d = "Open";
        this.e = "下载第三方应用";
        this.f = "Install";
        this.g = "mbridge_splash_btn_arrow_right";
        this.h = "mbridge_splash_btn_circle";
        this.i = "mbridge_splash_btn_finger";
        this.j = "mbridge_splash_btn_go";
        this.k = "mbridge_splash_btn_light";
        this.TYPE_SPLASH_BTN_OPEN = 1;
        this.TYPE_SPLASH_BTN_GO = 2;
        this.TYPE_SPLASH_BTN_CLICK = 3;
        this.p = new RectF();
        this.q = new Paint();
        this.r = new Paint();
    }

    private void a() {
        this.q.setAntiAlias(true);
        this.q.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.SRC_IN));
        this.r.setAntiAlias(true);
        this.r.setColor(-1);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0067  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x00ac  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x00b0  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x00f9  */
    /* JADX WARN: Removed duplicated region for block: B:50:0x0136  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void initView(String str) {
        byte b;
        boolean z;
        int i;
        int i2;
        this.l = str;
        int identifier = 0;
        switch (str.hashCode()) {
            case -672744069:
                b = !str.equals("Install") ? (byte) -1 : (byte) 2;
                break;
            case 2464362:
                b = !str.equals("Open") ? (byte) -1 : (byte) 4;
                break;
            case 2666181:
                b = !str.equals("View") ? (byte) -1 : (byte) 1;
                break;
            case 855294846:
                b = !str.equals("下载第三方应用") ? (byte) -1 : (byte) 3;
                break;
            case 1383132195:
                b = !str.equals("打开第三方应用") ? (byte) -1 : (byte) 5;
                break;
            case 1681333335:
                b = !str.equals("浏览第三方应用") ? (byte) -1 : (byte) 0;
                break;
            default:
                b = -1;
                break;
        }
        if (b == 0 || b == 1) {
            this.m = 2;
        } else if (b == 2 || b == 3) {
            this.m = 3;
        } else {
            if (b != 4 && b != 5) {
                z = false;
                if (!z) {
                    boolean zContains = getContext().getResources().getConfiguration().locale.getLanguage().contains(com.tkay.expressad.video.dynview.a.a.Q);
                    if (TextUtils.isEmpty(this.l)) {
                        this.l = zContains ? "浏览第三方应用" : "View";
                    }
                    this.m = 2;
                }
                i = this.m;
                int color = Color.parseColor("#666666");
                int color2 = Color.parseColor("#8FC31F");
                int color3 = Color.parseColor("#000000");
                GradientDrawable gradientDrawable = new GradientDrawable();
                if (i != 2) {
                    gradientDrawable.setColor(color2);
                } else {
                    gradientDrawable.setColor(color3);
                    gradientDrawable.setStroke(2, color);
                }
                gradientDrawable.setCornerRadius(200);
                setBackground(gradientDrawable);
                TextView textView = new TextView(getContext());
                RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
                layoutParams.addRule(15);
                textView.setLayoutParams(layoutParams);
                textView.setGravity(17);
                textView.setTextSize(20.0f);
                textView.setTextColor(-1);
                textView.setText(this.l);
                this.n = new ImageView(getContext());
                RelativeLayout.LayoutParams layoutParams2 = null;
                i2 = this.m;
                if (i2 != 2) {
                    identifier = getResources().getIdentifier("mbridge_splash_btn_go", i.c, com.mbridge.msdk.foundation.controller.a.f().d());
                    layoutParams2 = new RelativeLayout.LayoutParams(ae.b(getContext(), 35.0f), ae.b(getContext(), 35.0f));
                    layoutParams2.addRule(11);
                    layoutParams2.addRule(15);
                    layoutParams2.rightMargin = ae.b(getContext(), 10.0f);
                } else if (i2 == 1) {
                    identifier = getResources().getIdentifier("mbridge_splash_btn_light", i.c, com.mbridge.msdk.foundation.controller.a.f().d());
                    layoutParams2 = new RelativeLayout.LayoutParams(-2, -1);
                    layoutParams2.leftMargin = 20;
                    layoutParams2.rightMargin = 20;
                    ImageView imageView = new ImageView(getContext());
                    RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-2, -1);
                    layoutParams3.addRule(11);
                    layoutParams3.addRule(15);
                    layoutParams3.rightMargin = ae.b(getContext(), 50.0f);
                    imageView.setImageResource(getResources().getIdentifier("mbridge_splash_btn_arrow_right", i.c, com.mbridge.msdk.foundation.controller.a.f().d()));
                    imageView.setScaleType(ImageView.ScaleType.CENTER);
                    imageView.setLayoutParams(layoutParams3);
                    addView(imageView);
                } else if (i2 == 3) {
                    identifier = getResources().getIdentifier("mbridge_splash_btn_finger", i.c, com.mbridge.msdk.foundation.controller.a.f().d());
                    layoutParams2 = new RelativeLayout.LayoutParams(ae.b(getContext(), 25.0f), ae.b(getContext(), 25.0f));
                    layoutParams2.addRule(11);
                    layoutParams2.rightMargin = ae.b(getContext(), 50.0f);
                    layoutParams2.topMargin = ae.b(getContext(), 18.0f);
                    this.o = new ImageView(getContext());
                    RelativeLayout.LayoutParams layoutParams4 = new RelativeLayout.LayoutParams(ae.b(getContext(), 30.0f), ae.b(getContext(), 30.0f));
                    layoutParams4.addRule(11);
                    layoutParams4.rightMargin = ae.b(getContext(), 50.0f);
                    layoutParams4.topMargin = ae.b(getContext(), 5.0f);
                    this.o.setLayoutParams(layoutParams4);
                    this.o.setImageResource(getResources().getIdentifier("mbridge_splash_btn_circle", i.c, com.mbridge.msdk.foundation.controller.a.f().d()));
                    addView(this.o);
                }
                this.n.setLayoutParams(layoutParams2);
                this.n.setImageResource(identifier);
                addView(textView);
                addView(this.n);
                invalidate();
            }
            this.m = 1;
        }
        z = true;
        if (!z) {
        }
        i = this.m;
        int color4 = Color.parseColor("#666666");
        int color22 = Color.parseColor("#8FC31F");
        int color32 = Color.parseColor("#000000");
        GradientDrawable gradientDrawable2 = new GradientDrawable();
        if (i != 2) {
        }
        gradientDrawable2.setCornerRadius(200);
        setBackground(gradientDrawable2);
        TextView textView2 = new TextView(getContext());
        RelativeLayout.LayoutParams layoutParams5 = new RelativeLayout.LayoutParams(-1, -1);
        layoutParams5.addRule(15);
        textView2.setLayoutParams(layoutParams5);
        textView2.setGravity(17);
        textView2.setTextSize(20.0f);
        textView2.setTextColor(-1);
        textView2.setText(this.l);
        this.n = new ImageView(getContext());
        RelativeLayout.LayoutParams layoutParams22 = null;
        i2 = this.m;
        if (i2 != 2) {
        }
        this.n.setLayoutParams(layoutParams22);
        this.n.setImageResource(identifier);
        addView(textView2);
        addView(this.n);
        invalidate();
    }

    @Override
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        super.onLayout(z, i, i2, i3, i4);
        this.p.set(0.0f, 0.0f, getWidth(), getHeight());
    }

    @Override
    public void draw(Canvas canvas) {
        canvas.saveLayer(this.p, this.r, 31);
        canvas.drawRoundRect(this.p, 200.0f, 200.0f, this.r);
        canvas.saveLayer(this.p, this.q, 31);
        super.draw(canvas);
        canvas.restore();
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        int i = this.m;
        if (i == 2) {
            ScaleAnimation scaleAnimation = new ScaleAnimation(0.8f, 1.0f, 0.8f, 1.0f, 1, 0.5f, 1, 0.5f);
            scaleAnimation.setDuration(500L);
            scaleAnimation.setRepeatCount(-1);
            scaleAnimation.setRepeatMode(2);
            this.n.startAnimation(scaleAnimation);
            return;
        }
        if (i == 1) {
            TranslateAnimation translateAnimation = new TranslateAnimation(0, -100.0f, 0, 1000.0f, 0, 0.0f, 0, 0.0f);
            translateAnimation.setDuration(1000L);
            translateAnimation.setAnimationListener(new Animation.AnimationListener() {
                @Override
                public final void onAnimationRepeat(Animation animation) {
                }

                @Override
                public final void onAnimationStart(Animation animation) {
                    MBSplashClickView.this.n.setVisibility(0);
                }

                @Override
                public final void onAnimationEnd(final Animation animation) {
                    MBSplashClickView.this.n.setVisibility(4);
                    MBSplashClickView.this.n.postDelayed(new Runnable() {
                        @Override
                        public final void run() {
                            MBSplashClickView.this.n.startAnimation(animation);
                        }
                    }, 2000L);
                }
            });
            this.n.startAnimation(translateAnimation);
            return;
        }
        if (i == 3) {
            ScaleAnimation scaleAnimation2 = new ScaleAnimation(1.0f, 0.7f, 1.0f, 0.7f, 1, 0.5f, 1, 0.5f);
            scaleAnimation2.setDuration(400L);
            scaleAnimation2.setRepeatCount(-1);
            scaleAnimation2.setRepeatMode(2);
            final ScaleAnimation scaleAnimation3 = new ScaleAnimation(0.0f, 0.5f, 0.0f, 0.5f, 1, 0.5f, 1, 0.5f);
            scaleAnimation3.setDuration(200L);
            scaleAnimation3.setAnimationListener(new Animation.AnimationListener() {
                @Override
                public final void onAnimationRepeat(Animation animation) {
                }

                @Override
                public final void onAnimationStart(Animation animation) {
                    MBSplashClickView.this.o.setVisibility(0);
                }

                @Override
                public final void onAnimationEnd(Animation animation) {
                    MBSplashClickView.this.o.setVisibility(4);
                    MBSplashClickView.this.o.postDelayed(new Runnable() {
                        @Override
                        public final void run() {
                            MBSplashClickView.this.o.startAnimation(scaleAnimation3);
                        }
                    }, 700L);
                }
            });
            this.o.setVisibility(4);
            this.n.startAnimation(scaleAnimation2);
            this.o.postDelayed(new Runnable() {
                @Override
                public final void run() {
                    MBSplashClickView.this.o.startAnimation(scaleAnimation3);
                }
            }, 500L);
        }
    }
}

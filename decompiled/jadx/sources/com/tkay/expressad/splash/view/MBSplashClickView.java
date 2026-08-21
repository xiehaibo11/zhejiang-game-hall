package com.tkay.expressad.splash.view;

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
import com.tkay.expressad.foundation.h.i;

/* JADX INFO: loaded from: classes3.dex */
public class MBSplashClickView extends RelativeLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f7133a = "MBSplashClickView";
    public final int TYPE_SPLASH_BTN_CLICK;
    public final int TYPE_SPLASH_BTN_GO;
    public final int TYPE_SPLASH_BTN_OPEN;
    private String b;
    private String c;
    private String d;
    private final String e;
    private final String f;
    private final String g;
    private final String h;
    private final String i;
    private String j;
    private int k;
    private ImageView l;
    private ImageView m;
    private final RectF n;
    private final Paint o;
    private final Paint p;

    public MBSplashClickView(Context context) {
        super(context);
        this.b = "";
        this.c = "";
        this.d = "";
        this.e = "tkay_splash_btn_arrow_right";
        this.f = "tkay_splash_btn_circle";
        this.g = "tkay_splash_btn_finger";
        this.h = "tkay_splash_btn_go";
        this.i = "tkay_splash_btn_light";
        this.TYPE_SPLASH_BTN_OPEN = 1;
        this.TYPE_SPLASH_BTN_GO = 2;
        this.TYPE_SPLASH_BTN_CLICK = 3;
        this.n = new RectF();
        this.o = new Paint();
        this.p = new Paint();
        a();
    }

    public MBSplashClickView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.b = "";
        this.c = "";
        this.d = "";
        this.e = "tkay_splash_btn_arrow_right";
        this.f = "tkay_splash_btn_circle";
        this.g = "tkay_splash_btn_finger";
        this.h = "tkay_splash_btn_go";
        this.i = "tkay_splash_btn_light";
        this.TYPE_SPLASH_BTN_OPEN = 1;
        this.TYPE_SPLASH_BTN_GO = 2;
        this.TYPE_SPLASH_BTN_CLICK = 3;
        this.n = new RectF();
        this.o = new Paint();
        this.p = new Paint();
        a();
    }

    public MBSplashClickView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.b = "";
        this.c = "";
        this.d = "";
        this.e = "tkay_splash_btn_arrow_right";
        this.f = "tkay_splash_btn_circle";
        this.g = "tkay_splash_btn_finger";
        this.h = "tkay_splash_btn_go";
        this.i = "tkay_splash_btn_light";
        this.TYPE_SPLASH_BTN_OPEN = 1;
        this.TYPE_SPLASH_BTN_GO = 2;
        this.TYPE_SPLASH_BTN_CLICK = 3;
        this.n = new RectF();
        this.o = new Paint();
        this.p = new Paint();
        a();
    }

    public MBSplashClickView(Context context, AttributeSet attributeSet, int i, int i2) {
        super(context, attributeSet, i, i2);
        this.b = "";
        this.c = "";
        this.d = "";
        this.e = "tkay_splash_btn_arrow_right";
        this.f = "tkay_splash_btn_circle";
        this.g = "tkay_splash_btn_finger";
        this.h = "tkay_splash_btn_go";
        this.i = "tkay_splash_btn_light";
        this.TYPE_SPLASH_BTN_OPEN = 1;
        this.TYPE_SPLASH_BTN_GO = 2;
        this.TYPE_SPLASH_BTN_CLICK = 3;
        this.n = new RectF();
        this.o = new Paint();
        this.p = new Paint();
    }

    private void a() {
        this.o.setAntiAlias(true);
        this.o.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.SRC_IN));
        this.p.setAntiAlias(true);
        this.p.setColor(-1);
        this.b = getContext().getString(i.a(getContext(), "tkay_cm_shake_view_click_default_view", i.g));
        this.c = getContext().getString(i.a(getContext(), "tkay_cm_shake_view_click_default_open", i.g));
        this.d = getContext().getString(i.a(getContext(), "tkay_cm_shake_view_click_default_inst", i.g));
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x002b  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0054  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0058  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x00a3  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x00e0  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void initView(java.lang.String r11) {
        /*
            Method dump skipped, instruction units count: 504
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.splash.view.MBSplashClickView.initView(java.lang.String):void");
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x002b  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0054  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0058  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x00a3  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x00e0  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void b() {
        /*
            Method dump skipped, instruction units count: 504
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.splash.view.MBSplashClickView.b():void");
    }

    private void a(int i) {
        int color = Color.parseColor("#666666");
        int color2 = Color.parseColor("#8FC31F");
        int color3 = Color.parseColor("#000000");
        GradientDrawable gradientDrawable = new GradientDrawable();
        if (i == 2) {
            gradientDrawable.setColor(color2);
        } else {
            gradientDrawable.setColor(color3);
            gradientDrawable.setStroke(2, color);
        }
        gradientDrawable.setCornerRadius(200.0f);
        setBackgroundDrawable(gradientDrawable);
    }

    @Override // android.widget.RelativeLayout, android.view.ViewGroup, android.view.View
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        super.onLayout(z, i, i2, i3, i4);
        this.n.set(0.0f, 0.0f, getWidth(), getHeight());
    }

    @Override // android.view.View
    public void draw(Canvas canvas) {
        canvas.saveLayer(this.n, this.p, 31);
        canvas.drawRoundRect(this.n, 200.0f, 200.0f, this.p);
        canvas.saveLayer(this.n, this.o, 31);
        super.draw(canvas);
        canvas.restore();
    }

    private boolean a(String str) {
        if (TextUtils.equals(str, this.b)) {
            this.k = 2;
            return true;
        }
        if (TextUtils.equals(str, this.d)) {
            this.k = 3;
            return true;
        }
        if (!TextUtils.equals(str, this.c)) {
            return false;
        }
        this.k = 1;
        return true;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        int i = this.k;
        if (i == 2) {
            ScaleAnimation scaleAnimation = new ScaleAnimation(0.8f, 1.0f, 0.8f, 1.0f, 1, 0.5f, 1, 0.5f);
            scaleAnimation.setDuration(500L);
            scaleAnimation.setRepeatCount(-1);
            scaleAnimation.setRepeatMode(2);
            this.l.startAnimation(scaleAnimation);
            return;
        }
        if (i == 1) {
            TranslateAnimation translateAnimation = new TranslateAnimation(0, -100.0f, 0, 1000.0f, 0, 0.0f, 0, 0.0f);
            translateAnimation.setDuration(1000L);
            translateAnimation.setAnimationListener(new AnonymousClass3());
            this.l.startAnimation(translateAnimation);
            return;
        }
        if (i == 3) {
            ScaleAnimation scaleAnimation2 = new ScaleAnimation(1.0f, 0.7f, 1.0f, 0.7f, 1, 0.5f, 1, 0.5f);
            scaleAnimation2.setDuration(400L);
            scaleAnimation2.setRepeatCount(-1);
            scaleAnimation2.setRepeatMode(2);
            ScaleAnimation scaleAnimation3 = new ScaleAnimation(0.0f, 0.5f, 0.0f, 0.5f, 1, 0.5f, 1, 0.5f);
            scaleAnimation3.setDuration(200L);
            scaleAnimation3.setAnimationListener(new AnonymousClass1(scaleAnimation3));
            this.m.setVisibility(4);
            this.l.startAnimation(scaleAnimation2);
            this.m.postDelayed(new AnonymousClass2(scaleAnimation3), 500L);
        }
    }

    private void c() {
        ScaleAnimation scaleAnimation = new ScaleAnimation(1.0f, 0.7f, 1.0f, 0.7f, 1, 0.5f, 1, 0.5f);
        scaleAnimation.setDuration(400L);
        scaleAnimation.setRepeatCount(-1);
        scaleAnimation.setRepeatMode(2);
        ScaleAnimation scaleAnimation2 = new ScaleAnimation(0.0f, 0.5f, 0.0f, 0.5f, 1, 0.5f, 1, 0.5f);
        scaleAnimation2.setDuration(200L);
        scaleAnimation2.setAnimationListener(new AnonymousClass1(scaleAnimation2));
        this.m.setVisibility(4);
        this.l.startAnimation(scaleAnimation);
        this.m.postDelayed(new AnonymousClass2(scaleAnimation2), 500L);
    }

    /* JADX INFO: renamed from: com.tkay.expressad.splash.view.MBSplashClickView$1, reason: invalid class name */
    final class AnonymousClass1 implements Animation.AnimationListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ ScaleAnimation f7134a;

        @Override // android.view.animation.Animation.AnimationListener
        public final void onAnimationRepeat(Animation animation) {
        }

        AnonymousClass1(ScaleAnimation scaleAnimation) {
            this.f7134a = scaleAnimation;
        }

        @Override // android.view.animation.Animation.AnimationListener
        public final void onAnimationStart(Animation animation) {
            MBSplashClickView.this.m.setVisibility(0);
        }

        @Override // android.view.animation.Animation.AnimationListener
        public final void onAnimationEnd(Animation animation) {
            MBSplashClickView.this.m.setVisibility(4);
            MBSplashClickView.this.m.postDelayed(new Runnable() { // from class: com.tkay.expressad.splash.view.MBSplashClickView.1.1
                @Override // java.lang.Runnable
                public final void run() {
                    MBSplashClickView.this.m.startAnimation(AnonymousClass1.this.f7134a);
                }
            }, 700L);
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.splash.view.MBSplashClickView$2, reason: invalid class name */
    final class AnonymousClass2 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ ScaleAnimation f7136a;

        AnonymousClass2(ScaleAnimation scaleAnimation) {
            this.f7136a = scaleAnimation;
        }

        @Override // java.lang.Runnable
        public final void run() {
            MBSplashClickView.this.m.startAnimation(this.f7136a);
        }
    }

    private void d() {
        TranslateAnimation translateAnimation = new TranslateAnimation(0, -100.0f, 0, 1000.0f, 0, 0.0f, 0, 0.0f);
        translateAnimation.setDuration(1000L);
        translateAnimation.setAnimationListener(new AnonymousClass3());
        this.l.startAnimation(translateAnimation);
    }

    /* JADX INFO: renamed from: com.tkay.expressad.splash.view.MBSplashClickView$3, reason: invalid class name */
    final class AnonymousClass3 implements Animation.AnimationListener {
        @Override // android.view.animation.Animation.AnimationListener
        public final void onAnimationRepeat(Animation animation) {
        }

        AnonymousClass3() {
        }

        @Override // android.view.animation.Animation.AnimationListener
        public final void onAnimationStart(Animation animation) {
            MBSplashClickView.this.l.setVisibility(0);
        }

        @Override // android.view.animation.Animation.AnimationListener
        public final void onAnimationEnd(final Animation animation) {
            MBSplashClickView.this.l.setVisibility(4);
            MBSplashClickView.this.l.postDelayed(new Runnable() { // from class: com.tkay.expressad.splash.view.MBSplashClickView.3.1
                @Override // java.lang.Runnable
                public final void run() {
                    MBSplashClickView.this.l.startAnimation(animation);
                }
            }, 2000L);
        }
    }

    private void e() {
        ScaleAnimation scaleAnimation = new ScaleAnimation(0.8f, 1.0f, 0.8f, 1.0f, 1, 0.5f, 1, 0.5f);
        scaleAnimation.setDuration(500L);
        scaleAnimation.setRepeatCount(-1);
        scaleAnimation.setRepeatMode(2);
        this.l.startAnimation(scaleAnimation);
    }
}

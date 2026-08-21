package com.tkay.expressad.splash.view;

public class MBSplashClickView extends android.widget.RelativeLayout {
    private static final java.lang.String a = "MBSplashClickView";
    public final int TYPE_SPLASH_BTN_CLICK;
    public final int TYPE_SPLASH_BTN_GO;
    public final int TYPE_SPLASH_BTN_OPEN;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private final java.lang.String e;
    private final java.lang.String f;
    private final java.lang.String g;
    private final java.lang.String h;
    private final java.lang.String i;
    private java.lang.String j;
    private int k;
    private android.widget.ImageView l;
    private android.widget.ImageView m;
    private final android.graphics.RectF n;
    private final android.graphics.Paint o;
    private final android.graphics.Paint p;

    final class 1 implements android.view.animation.Animation.AnimationListener {
        final android.view.animation.ScaleAnimation a;
        final com.tkay.expressad.splash.view.MBSplashClickView b;


        1(com.tkay.expressad.splash.view.MBSplashClickView r1, android.view.animation.ScaleAnimation r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void onAnimationEnd(android.view.animation.Animation r4) {
                r3 = this;
                com.tkay.expressad.splash.view.MBSplashClickView r4 = r3.b
                android.widget.ImageView r4 = com.tkay.expressad.splash.view.MBSplashClickView.a(r4)
                r0 = 4
                r4.setVisibility(r0)
                com.tkay.expressad.splash.view.MBSplashClickView r4 = r3.b
                android.widget.ImageView r4 = com.tkay.expressad.splash.view.MBSplashClickView.a(r4)
                com.tkay.expressad.splash.view.MBSplashClickView$1$1 r0 = new com.tkay.expressad.splash.view.MBSplashClickView$1$1
                r0.<init>(r3)
                r1 = 700(0x2bc, double:3.46E-321)
                r4.postDelayed(r0, r1)
                return
        }

        @Override
        public final void onAnimationRepeat(android.view.animation.Animation r1) {
                r0 = this;
                return
        }

        @Override
        public final void onAnimationStart(android.view.animation.Animation r2) {
                r1 = this;
                com.tkay.expressad.splash.view.MBSplashClickView r2 = r1.b
                android.widget.ImageView r2 = com.tkay.expressad.splash.view.MBSplashClickView.a(r2)
                r0 = 0
                r2.setVisibility(r0)
                return
        }
    }

    final class 2 implements java.lang.Runnable {
        final android.view.animation.ScaleAnimation a;
        final com.tkay.expressad.splash.view.MBSplashClickView b;

        2(com.tkay.expressad.splash.view.MBSplashClickView r1, android.view.animation.ScaleAnimation r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.tkay.expressad.splash.view.MBSplashClickView r0 = r2.b
                android.widget.ImageView r0 = com.tkay.expressad.splash.view.MBSplashClickView.a(r0)
                android.view.animation.ScaleAnimation r1 = r2.a
                r0.startAnimation(r1)
                return
        }
    }

    final class 3 implements android.view.animation.Animation.AnimationListener {
        final com.tkay.expressad.splash.view.MBSplashClickView a;


        3(com.tkay.expressad.splash.view.MBSplashClickView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onAnimationEnd(android.view.animation.Animation r5) {
                r4 = this;
                com.tkay.expressad.splash.view.MBSplashClickView r0 = r4.a
                android.widget.ImageView r0 = com.tkay.expressad.splash.view.MBSplashClickView.b(r0)
                r1 = 4
                r0.setVisibility(r1)
                com.tkay.expressad.splash.view.MBSplashClickView r0 = r4.a
                android.widget.ImageView r0 = com.tkay.expressad.splash.view.MBSplashClickView.b(r0)
                com.tkay.expressad.splash.view.MBSplashClickView$3$1 r1 = new com.tkay.expressad.splash.view.MBSplashClickView$3$1
                r1.<init>(r4, r5)
                r2 = 2000(0x7d0, double:9.88E-321)
                r0.postDelayed(r1, r2)
                return
        }

        @Override
        public final void onAnimationRepeat(android.view.animation.Animation r1) {
                r0 = this;
                return
        }

        @Override
        public final void onAnimationStart(android.view.animation.Animation r2) {
                r1 = this;
                com.tkay.expressad.splash.view.MBSplashClickView r2 = r1.a
                android.widget.ImageView r2 = com.tkay.expressad.splash.view.MBSplashClickView.b(r2)
                r0 = 0
                r2.setVisibility(r0)
                return
        }
    }

    public MBSplashClickView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = ""
            r0.b = r1
            r0.c = r1
            r0.d = r1
            java.lang.String r1 = "tkay_splash_btn_arrow_right"
            r0.e = r1
            java.lang.String r1 = "tkay_splash_btn_circle"
            r0.f = r1
            java.lang.String r1 = "tkay_splash_btn_finger"
            r0.g = r1
            java.lang.String r1 = "tkay_splash_btn_go"
            r0.h = r1
            java.lang.String r1 = "tkay_splash_btn_light"
            r0.i = r1
            r1 = 1
            r0.TYPE_SPLASH_BTN_OPEN = r1
            r1 = 2
            r0.TYPE_SPLASH_BTN_GO = r1
            r1 = 3
            r0.TYPE_SPLASH_BTN_CLICK = r1
            android.graphics.RectF r1 = new android.graphics.RectF
            r1.<init>()
            r0.n = r1
            android.graphics.Paint r1 = new android.graphics.Paint
            r1.<init>()
            r0.o = r1
            android.graphics.Paint r1 = new android.graphics.Paint
            r1.<init>()
            r0.p = r1
            r0.a()
            return
    }

    public MBSplashClickView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.String r1 = ""
            r0.b = r1
            r0.c = r1
            r0.d = r1
            java.lang.String r1 = "tkay_splash_btn_arrow_right"
            r0.e = r1
            java.lang.String r1 = "tkay_splash_btn_circle"
            r0.f = r1
            java.lang.String r1 = "tkay_splash_btn_finger"
            r0.g = r1
            java.lang.String r1 = "tkay_splash_btn_go"
            r0.h = r1
            java.lang.String r1 = "tkay_splash_btn_light"
            r0.i = r1
            r1 = 1
            r0.TYPE_SPLASH_BTN_OPEN = r1
            r1 = 2
            r0.TYPE_SPLASH_BTN_GO = r1
            r1 = 3
            r0.TYPE_SPLASH_BTN_CLICK = r1
            android.graphics.RectF r1 = new android.graphics.RectF
            r1.<init>()
            r0.n = r1
            android.graphics.Paint r1 = new android.graphics.Paint
            r1.<init>()
            r0.o = r1
            android.graphics.Paint r1 = new android.graphics.Paint
            r1.<init>()
            r0.p = r1
            r0.a()
            return
    }

    public MBSplashClickView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            java.lang.String r1 = ""
            r0.b = r1
            r0.c = r1
            r0.d = r1
            java.lang.String r1 = "tkay_splash_btn_arrow_right"
            r0.e = r1
            java.lang.String r1 = "tkay_splash_btn_circle"
            r0.f = r1
            java.lang.String r1 = "tkay_splash_btn_finger"
            r0.g = r1
            java.lang.String r1 = "tkay_splash_btn_go"
            r0.h = r1
            java.lang.String r1 = "tkay_splash_btn_light"
            r0.i = r1
            r1 = 1
            r0.TYPE_SPLASH_BTN_OPEN = r1
            r1 = 2
            r0.TYPE_SPLASH_BTN_GO = r1
            r1 = 3
            r0.TYPE_SPLASH_BTN_CLICK = r1
            android.graphics.RectF r1 = new android.graphics.RectF
            r1.<init>()
            r0.n = r1
            android.graphics.Paint r1 = new android.graphics.Paint
            r1.<init>()
            r0.o = r1
            android.graphics.Paint r1 = new android.graphics.Paint
            r1.<init>()
            r0.p = r1
            r0.a()
            return
    }

    public MBSplashClickView(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            java.lang.String r1 = ""
            r0.b = r1
            r0.c = r1
            r0.d = r1
            java.lang.String r1 = "tkay_splash_btn_arrow_right"
            r0.e = r1
            java.lang.String r1 = "tkay_splash_btn_circle"
            r0.f = r1
            java.lang.String r1 = "tkay_splash_btn_finger"
            r0.g = r1
            java.lang.String r1 = "tkay_splash_btn_go"
            r0.h = r1
            java.lang.String r1 = "tkay_splash_btn_light"
            r0.i = r1
            r1 = 1
            r0.TYPE_SPLASH_BTN_OPEN = r1
            r1 = 2
            r0.TYPE_SPLASH_BTN_GO = r1
            r1 = 3
            r0.TYPE_SPLASH_BTN_CLICK = r1
            android.graphics.RectF r1 = new android.graphics.RectF
            r1.<init>()
            r0.n = r1
            android.graphics.Paint r1 = new android.graphics.Paint
            r1.<init>()
            r0.o = r1
            android.graphics.Paint r1 = new android.graphics.Paint
            r1.<init>()
            r0.p = r1
            return
    }

    static android.widget.ImageView a(com.tkay.expressad.splash.view.MBSplashClickView r0) {
            android.widget.ImageView r0 = r0.m
            return r0
    }

    private void a() {
            r4 = this;
            android.graphics.Paint r0 = r4.o
            r1 = 1
            r0.setAntiAlias(r1)
            android.graphics.Paint r0 = r4.o
            android.graphics.PorterDuffXfermode r2 = new android.graphics.PorterDuffXfermode
            android.graphics.PorterDuff$Mode r3 = android.graphics.PorterDuff.Mode.SRC_IN
            r2.<init>(r3)
            r0.setXfermode(r2)
            android.graphics.Paint r0 = r4.p
            r0.setAntiAlias(r1)
            android.graphics.Paint r0 = r4.p
            r1 = -1
            r0.setColor(r1)
            android.content.Context r0 = r4.getContext()
            android.content.Context r1 = r4.getContext()
            java.lang.String r2 = "string"
            java.lang.String r3 = "tkay_cm_shake_view_click_default_view"
            int r1 = com.tkay.expressad.foundation.h.i.a(r1, r3, r2)
            java.lang.String r0 = r0.getString(r1)
            r4.b = r0
            android.content.Context r0 = r4.getContext()
            android.content.Context r1 = r4.getContext()
            java.lang.String r3 = "tkay_cm_shake_view_click_default_open"
            int r1 = com.tkay.expressad.foundation.h.i.a(r1, r3, r2)
            java.lang.String r0 = r0.getString(r1)
            r4.c = r0
            android.content.Context r0 = r4.getContext()
            android.content.Context r1 = r4.getContext()
            java.lang.String r3 = "tkay_cm_shake_view_click_default_inst"
            int r1 = com.tkay.expressad.foundation.h.i.a(r1, r3, r2)
            java.lang.String r0 = r0.getString(r1)
            r4.d = r0
            return
    }

    private void a(int r6) {
            r5 = this;
            java.lang.String r0 = "#666666"
            int r0 = android.graphics.Color.parseColor(r0)
            java.lang.String r1 = "#8FC31F"
            int r1 = android.graphics.Color.parseColor(r1)
            java.lang.String r2 = "#000000"
            int r2 = android.graphics.Color.parseColor(r2)
            android.graphics.drawable.GradientDrawable r3 = new android.graphics.drawable.GradientDrawable
            r3.<init>()
            r4 = 2
            if (r6 != r4) goto L1e
            r3.setColor(r1)
            goto L24
        L1e:
            r3.setColor(r2)
            r3.setStroke(r4, r0)
        L24:
            r6 = 1128792064(0x43480000, float:200.0)
            r3.setCornerRadius(r6)
            r5.setBackgroundDrawable(r3)
            return
    }

    private boolean a(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = r2.b
            boolean r0 = android.text.TextUtils.equals(r3, r0)
            r1 = 1
            if (r0 == 0) goto Ld
            r3 = 2
            r2.k = r3
            goto L25
        Ld:
            java.lang.String r0 = r2.d
            boolean r0 = android.text.TextUtils.equals(r3, r0)
            if (r0 == 0) goto L19
            r3 = 3
            r2.k = r3
            goto L25
        L19:
            java.lang.String r0 = r2.c
            boolean r3 = android.text.TextUtils.equals(r3, r0)
            if (r3 == 0) goto L24
            r2.k = r1
            goto L25
        L24:
            r1 = 0
        L25:
            return r1
    }

    static android.widget.ImageView b(com.tkay.expressad.splash.view.MBSplashClickView r0) {
            android.widget.ImageView r0 = r0.l
            return r0
    }

    private void b() {
            r11 = this;
            java.lang.String r0 = r11.j
            java.lang.String r1 = r11.b
            boolean r1 = android.text.TextUtils.equals(r0, r1)
            r2 = 3
            r3 = 0
            r4 = 2
            r5 = 1
            if (r1 == 0) goto L12
            r11.k = r4
        L10:
            r0 = r5
            goto L29
        L12:
            java.lang.String r1 = r11.d
            boolean r1 = android.text.TextUtils.equals(r0, r1)
            if (r1 == 0) goto L1d
            r11.k = r2
            goto L10
        L1d:
            java.lang.String r1 = r11.c
            boolean r0 = android.text.TextUtils.equals(r0, r1)
            if (r0 == 0) goto L28
            r11.k = r5
            goto L10
        L28:
            r0 = r3
        L29:
            if (r0 != 0) goto L39
            java.lang.String r0 = r11.j
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L37
            java.lang.String r0 = r11.b
            r11.j = r0
        L37:
            r11.k = r4
        L39:
            int r0 = r11.k
            java.lang.String r1 = "#666666"
            int r1 = android.graphics.Color.parseColor(r1)
            java.lang.String r6 = "#8FC31F"
            int r6 = android.graphics.Color.parseColor(r6)
            java.lang.String r7 = "#000000"
            int r7 = android.graphics.Color.parseColor(r7)
            android.graphics.drawable.GradientDrawable r8 = new android.graphics.drawable.GradientDrawable
            r8.<init>()
            if (r0 != r4) goto L58
            r8.setColor(r6)
            goto L5e
        L58:
            r8.setColor(r7)
            r8.setStroke(r4, r1)
        L5e:
            r0 = 1128792064(0x43480000, float:200.0)
            r8.setCornerRadius(r0)
            r11.setBackgroundDrawable(r8)
            android.widget.TextView r0 = new android.widget.TextView
            android.content.Context r1 = r11.getContext()
            r0.<init>(r1)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r6 = -1
            r1.<init>(r6, r6)
            r7 = 15
            r1.addRule(r7)
            r0.setLayoutParams(r1)
            r1 = 17
            r0.setGravity(r1)
            r1 = 1101004800(0x41a00000, float:20.0)
            r0.setTextSize(r1)
            r0.setTextColor(r6)
            java.lang.String r1 = r11.j
            r0.setText(r1)
            android.widget.ImageView r1 = new android.widget.ImageView
            android.content.Context r8 = r11.getContext()
            r1.<init>(r8)
            r11.l = r1
            r1 = 0
            int r8 = r11.k
            r9 = 11
            java.lang.String r10 = "drawable"
            if (r8 != r4) goto Le0
            android.content.res.Resources r1 = r11.getResources()
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r2 = r2.a()
            java.lang.String r3 = "tkay_splash_btn_go"
            int r3 = r1.getIdentifier(r3, r10, r2)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r2 = r11.getContext()
            r4 = 1108082688(0x420c0000, float:35.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r4)
            android.content.Context r5 = r11.getContext()
            int r4 = com.tkay.expressad.foundation.h.t.b(r5, r4)
            r1.<init>(r2, r4)
            r1.addRule(r9)
            r1.addRule(r7)
            android.content.Context r2 = r11.getContext()
            r4 = 1092616192(0x41200000, float:10.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r4)
            r1.rightMargin = r2
            goto L1e2
        Le0:
            r4 = 1112014848(0x42480000, float:50.0)
            if (r8 != r5) goto L142
            android.content.res.Resources r1 = r11.getResources()
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r2 = r2.a()
            java.lang.String r3 = "tkay_splash_btn_light"
            int r3 = r1.getIdentifier(r3, r10, r2)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r2 = -2
            r1.<init>(r2, r6)
            r5 = 20
            r1.leftMargin = r5
            r1.rightMargin = r5
            android.widget.ImageView r5 = new android.widget.ImageView
            android.content.Context r8 = r11.getContext()
            r5.<init>(r8)
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams
            r8.<init>(r2, r6)
            r8.addRule(r9)
            r8.addRule(r7)
            android.content.Context r2 = r11.getContext()
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r4)
            r8.rightMargin = r2
            android.content.res.Resources r2 = r11.getResources()
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r4 = r4.a()
            java.lang.String r6 = "tkay_splash_btn_arrow_right"
            int r2 = r2.getIdentifier(r6, r10, r4)
            r5.setImageResource(r2)
            android.widget.ImageView$ScaleType r2 = android.widget.ImageView.ScaleType.CENTER
            r5.setScaleType(r2)
            r5.setLayoutParams(r8)
            r11.addView(r5)
            goto L1e2
        L142:
            if (r8 != r2) goto L1e2
            android.content.res.Resources r1 = r11.getResources()
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r2 = r2.a()
            java.lang.String r3 = "tkay_splash_btn_finger"
            int r3 = r1.getIdentifier(r3, r10, r2)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r2 = r11.getContext()
            r5 = 1103626240(0x41c80000, float:25.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r5)
            android.content.Context r6 = r11.getContext()
            int r5 = com.tkay.expressad.foundation.h.t.b(r6, r5)
            r1.<init>(r2, r5)
            r1.addRule(r9)
            android.content.Context r2 = r11.getContext()
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r4)
            r1.rightMargin = r2
            android.content.Context r2 = r11.getContext()
            r5 = 1099956224(0x41900000, float:18.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r5)
            r1.topMargin = r2
            android.widget.ImageView r2 = new android.widget.ImageView
            android.content.Context r5 = r11.getContext()
            r2.<init>(r5)
            r11.m = r2
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r5 = r11.getContext()
            r6 = 1106247680(0x41f00000, float:30.0)
            int r5 = com.tkay.expressad.foundation.h.t.b(r5, r6)
            android.content.Context r7 = r11.getContext()
            int r6 = com.tkay.expressad.foundation.h.t.b(r7, r6)
            r2.<init>(r5, r6)
            r2.addRule(r9)
            android.content.Context r5 = r11.getContext()
            int r4 = com.tkay.expressad.foundation.h.t.b(r5, r4)
            r2.rightMargin = r4
            android.content.Context r4 = r11.getContext()
            r5 = 1084227584(0x40a00000, float:5.0)
            int r4 = com.tkay.expressad.foundation.h.t.b(r4, r5)
            r2.topMargin = r4
            android.widget.ImageView r4 = r11.m
            r4.setLayoutParams(r2)
            android.content.res.Resources r2 = r11.getResources()
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r4 = r4.a()
            java.lang.String r5 = "tkay_splash_btn_circle"
            int r2 = r2.getIdentifier(r5, r10, r4)
            android.widget.ImageView r4 = r11.m
            r4.setImageResource(r2)
            android.widget.ImageView r2 = r11.m
            r11.addView(r2)
        L1e2:
            android.widget.ImageView r2 = r11.l
            r2.setLayoutParams(r1)
            android.widget.ImageView r1 = r11.l
            r1.setImageResource(r3)
            r11.addView(r0)
            android.widget.ImageView r0 = r11.l
            r11.addView(r0)
            r11.invalidate()
            return
    }

    private void c() {
            r20 = this;
            r0 = r20
            android.view.animation.ScaleAnimation r10 = new android.view.animation.ScaleAnimation
            r2 = 1065353216(0x3f800000, float:1.0)
            r3 = 1060320051(0x3f333333, float:0.7)
            r4 = 1065353216(0x3f800000, float:1.0)
            r5 = 1060320051(0x3f333333, float:0.7)
            r6 = 1
            r7 = 1056964608(0x3f000000, float:0.5)
            r8 = 1
            r9 = 1056964608(0x3f000000, float:0.5)
            r1 = r10
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            r1 = 400(0x190, double:1.976E-321)
            r10.setDuration(r1)
            r1 = -1
            r10.setRepeatCount(r1)
            r1 = 2
            r10.setRepeatMode(r1)
            android.view.animation.ScaleAnimation r1 = new android.view.animation.ScaleAnimation
            r12 = 0
            r13 = 1056964608(0x3f000000, float:0.5)
            r14 = 0
            r15 = 1056964608(0x3f000000, float:0.5)
            r16 = 1
            r17 = 1056964608(0x3f000000, float:0.5)
            r18 = 1
            r19 = 1056964608(0x3f000000, float:0.5)
            r11 = r1
            r11.<init>(r12, r13, r14, r15, r16, r17, r18, r19)
            r2 = 200(0xc8, double:9.9E-322)
            r1.setDuration(r2)
            com.tkay.expressad.splash.view.MBSplashClickView$1 r2 = new com.tkay.expressad.splash.view.MBSplashClickView$1
            r2.<init>(r0, r1)
            r1.setAnimationListener(r2)
            android.widget.ImageView r2 = r0.m
            r3 = 4
            r2.setVisibility(r3)
            android.widget.ImageView r2 = r0.l
            r2.startAnimation(r10)
            android.widget.ImageView r2 = r0.m
            com.tkay.expressad.splash.view.MBSplashClickView$2 r3 = new com.tkay.expressad.splash.view.MBSplashClickView$2
            r3.<init>(r0, r1)
            r4 = 500(0x1f4, double:2.47E-321)
            r2.postDelayed(r3, r4)
            return
    }

    private void d() {
            r10 = this;
            android.view.animation.TranslateAnimation r9 = new android.view.animation.TranslateAnimation
            r1 = 0
            r2 = -1027080192(0xffffffffc2c80000, float:-100.0)
            r3 = 0
            r4 = 1148846080(0x447a0000, float:1000.0)
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r0 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            r0 = 1000(0x3e8, double:4.94E-321)
            r9.setDuration(r0)
            com.tkay.expressad.splash.view.MBSplashClickView$3 r0 = new com.tkay.expressad.splash.view.MBSplashClickView$3
            r0.<init>(r10)
            r9.setAnimationListener(r0)
            android.widget.ImageView r0 = r10.l
            r0.startAnimation(r9)
            return
    }

    private void e() {
            r10 = this;
            android.view.animation.ScaleAnimation r9 = new android.view.animation.ScaleAnimation
            r1 = 1061997773(0x3f4ccccd, float:0.8)
            r2 = 1065353216(0x3f800000, float:1.0)
            r3 = 1061997773(0x3f4ccccd, float:0.8)
            r4 = 1065353216(0x3f800000, float:1.0)
            r5 = 1
            r6 = 1056964608(0x3f000000, float:0.5)
            r7 = 1
            r8 = 1056964608(0x3f000000, float:0.5)
            r0 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            r0 = 500(0x1f4, double:2.47E-321)
            r9.setDuration(r0)
            r0 = -1
            r9.setRepeatCount(r0)
            r0 = 2
            r9.setRepeatMode(r0)
            android.widget.ImageView r0 = r10.l
            r0.startAnimation(r9)
            return
    }

    @Override
    public void draw(android.graphics.Canvas r5) {
            r4 = this;
            android.graphics.RectF r0 = r4.n
            android.graphics.Paint r1 = r4.p
            r2 = 31
            r5.saveLayer(r0, r1, r2)
            android.graphics.RectF r0 = r4.n
            android.graphics.Paint r1 = r4.p
            r3 = 1128792064(0x43480000, float:200.0)
            r5.drawRoundRect(r0, r3, r3, r1)
            android.graphics.RectF r0 = r4.n
            android.graphics.Paint r1 = r4.o
            r5.saveLayer(r0, r1, r2)
            super.draw(r5)
            r5.restore()
            return
    }

    public void initView(java.lang.String r11) {
            r10 = this;
            r10.j = r11
            java.lang.String r0 = r10.b
            boolean r0 = android.text.TextUtils.equals(r11, r0)
            r1 = 3
            r2 = 0
            r3 = 2
            r4 = 1
            if (r0 == 0) goto L12
            r10.k = r3
        L10:
            r11 = r4
            goto L29
        L12:
            java.lang.String r0 = r10.d
            boolean r0 = android.text.TextUtils.equals(r11, r0)
            if (r0 == 0) goto L1d
            r10.k = r1
            goto L10
        L1d:
            java.lang.String r0 = r10.c
            boolean r11 = android.text.TextUtils.equals(r11, r0)
            if (r11 == 0) goto L28
            r10.k = r4
            goto L10
        L28:
            r11 = r2
        L29:
            if (r11 != 0) goto L39
            java.lang.String r11 = r10.j
            boolean r11 = android.text.TextUtils.isEmpty(r11)
            if (r11 == 0) goto L37
            java.lang.String r11 = r10.b
            r10.j = r11
        L37:
            r10.k = r3
        L39:
            int r11 = r10.k
            java.lang.String r0 = "#666666"
            int r0 = android.graphics.Color.parseColor(r0)
            java.lang.String r5 = "#8FC31F"
            int r5 = android.graphics.Color.parseColor(r5)
            java.lang.String r6 = "#000000"
            int r6 = android.graphics.Color.parseColor(r6)
            android.graphics.drawable.GradientDrawable r7 = new android.graphics.drawable.GradientDrawable
            r7.<init>()
            if (r11 != r3) goto L58
            r7.setColor(r5)
            goto L5e
        L58:
            r7.setColor(r6)
            r7.setStroke(r3, r0)
        L5e:
            r11 = 1128792064(0x43480000, float:200.0)
            r7.setCornerRadius(r11)
            r10.setBackgroundDrawable(r7)
            android.widget.TextView r11 = new android.widget.TextView
            android.content.Context r0 = r10.getContext()
            r11.<init>(r0)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r5 = -1
            r0.<init>(r5, r5)
            r6 = 15
            r0.addRule(r6)
            r11.setLayoutParams(r0)
            r0 = 17
            r11.setGravity(r0)
            r0 = 1101004800(0x41a00000, float:20.0)
            r11.setTextSize(r0)
            r11.setTextColor(r5)
            java.lang.String r0 = r10.j
            r11.setText(r0)
            android.widget.ImageView r0 = new android.widget.ImageView
            android.content.Context r7 = r10.getContext()
            r0.<init>(r7)
            r10.l = r0
            r0 = 0
            int r7 = r10.k
            r8 = 11
            java.lang.String r9 = "drawable"
            if (r7 != r3) goto Le0
            android.content.res.Resources r0 = r10.getResources()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.a()
            java.lang.String r2 = "tkay_splash_btn_go"
            int r2 = r0.getIdentifier(r2, r9, r1)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r1 = r10.getContext()
            r3 = 1108082688(0x420c0000, float:35.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r3)
            android.content.Context r4 = r10.getContext()
            int r3 = com.tkay.expressad.foundation.h.t.b(r4, r3)
            r0.<init>(r1, r3)
            r0.addRule(r8)
            r0.addRule(r6)
            android.content.Context r1 = r10.getContext()
            r3 = 1092616192(0x41200000, float:10.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r3)
            r0.rightMargin = r1
            goto L1e2
        Le0:
            r3 = 1112014848(0x42480000, float:50.0)
            if (r7 != r4) goto L142
            android.content.res.Resources r0 = r10.getResources()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.a()
            java.lang.String r2 = "tkay_splash_btn_light"
            int r2 = r0.getIdentifier(r2, r9, r1)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -2
            r0.<init>(r1, r5)
            r4 = 20
            r0.leftMargin = r4
            r0.rightMargin = r4
            android.widget.ImageView r4 = new android.widget.ImageView
            android.content.Context r7 = r10.getContext()
            r4.<init>(r7)
            android.widget.RelativeLayout$LayoutParams r7 = new android.widget.RelativeLayout$LayoutParams
            r7.<init>(r1, r5)
            r7.addRule(r8)
            r7.addRule(r6)
            android.content.Context r1 = r10.getContext()
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r3)
            r7.rightMargin = r1
            android.content.res.Resources r1 = r10.getResources()
            com.tkay.expressad.foundation.b.b r3 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r3 = r3.a()
            java.lang.String r5 = "tkay_splash_btn_arrow_right"
            int r1 = r1.getIdentifier(r5, r9, r3)
            r4.setImageResource(r1)
            android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.CENTER
            r4.setScaleType(r1)
            r4.setLayoutParams(r7)
            r10.addView(r4)
            goto L1e2
        L142:
            if (r7 != r1) goto L1e2
            android.content.res.Resources r0 = r10.getResources()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.a()
            java.lang.String r2 = "tkay_splash_btn_finger"
            int r2 = r0.getIdentifier(r2, r9, r1)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r1 = r10.getContext()
            r4 = 1103626240(0x41c80000, float:25.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r4)
            android.content.Context r5 = r10.getContext()
            int r4 = com.tkay.expressad.foundation.h.t.b(r5, r4)
            r0.<init>(r1, r4)
            r0.addRule(r8)
            android.content.Context r1 = r10.getContext()
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r3)
            r0.rightMargin = r1
            android.content.Context r1 = r10.getContext()
            r4 = 1099956224(0x41900000, float:18.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r4)
            r0.topMargin = r1
            android.widget.ImageView r1 = new android.widget.ImageView
            android.content.Context r4 = r10.getContext()
            r1.<init>(r4)
            r10.m = r1
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r4 = r10.getContext()
            r5 = 1106247680(0x41f00000, float:30.0)
            int r4 = com.tkay.expressad.foundation.h.t.b(r4, r5)
            android.content.Context r6 = r10.getContext()
            int r5 = com.tkay.expressad.foundation.h.t.b(r6, r5)
            r1.<init>(r4, r5)
            r1.addRule(r8)
            android.content.Context r4 = r10.getContext()
            int r3 = com.tkay.expressad.foundation.h.t.b(r4, r3)
            r1.rightMargin = r3
            android.content.Context r3 = r10.getContext()
            r4 = 1084227584(0x40a00000, float:5.0)
            int r3 = com.tkay.expressad.foundation.h.t.b(r3, r4)
            r1.topMargin = r3
            android.widget.ImageView r3 = r10.m
            r3.setLayoutParams(r1)
            android.content.res.Resources r1 = r10.getResources()
            com.tkay.expressad.foundation.b.b r3 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r3 = r3.a()
            java.lang.String r4 = "tkay_splash_btn_circle"
            int r1 = r1.getIdentifier(r4, r9, r3)
            android.widget.ImageView r3 = r10.m
            r3.setImageResource(r1)
            android.widget.ImageView r1 = r10.m
            r10.addView(r1)
        L1e2:
            android.widget.ImageView r1 = r10.l
            r1.setLayoutParams(r0)
            android.widget.ImageView r0 = r10.l
            r0.setImageResource(r2)
            r10.addView(r11)
            android.widget.ImageView r11 = r10.l
            r10.addView(r11)
            r10.invalidate()
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r17 = this;
            r0 = r17
            super.onAttachedToWindow()
            int r1 = r0.k
            r2 = -1
            r3 = 500(0x1f4, double:2.47E-321)
            r5 = 2
            if (r1 != r5) goto L32
            android.view.animation.ScaleAnimation r1 = new android.view.animation.ScaleAnimation
            r7 = 1061997773(0x3f4ccccd, float:0.8)
            r8 = 1065353216(0x3f800000, float:1.0)
            r9 = 1061997773(0x3f4ccccd, float:0.8)
            r10 = 1065353216(0x3f800000, float:1.0)
            r11 = 1
            r12 = 1056964608(0x3f000000, float:0.5)
            r13 = 1
            r14 = 1056964608(0x3f000000, float:0.5)
            r6 = r1
            r6.<init>(r7, r8, r9, r10, r11, r12, r13, r14)
            r1.setDuration(r3)
            r1.setRepeatCount(r2)
            r1.setRepeatMode(r5)
            android.widget.ImageView r2 = r0.l
            r2.startAnimation(r1)
            return
        L32:
            r6 = 1
            if (r1 != r6) goto L58
            android.view.animation.TranslateAnimation r1 = new android.view.animation.TranslateAnimation
            r8 = 0
            r9 = -1027080192(0xffffffffc2c80000, float:-100.0)
            r10 = 0
            r11 = 1148846080(0x447a0000, float:1000.0)
            r12 = 0
            r13 = 0
            r14 = 0
            r15 = 0
            r7 = r1
            r7.<init>(r8, r9, r10, r11, r12, r13, r14, r15)
            r2 = 1000(0x3e8, double:4.94E-321)
            r1.setDuration(r2)
            com.tkay.expressad.splash.view.MBSplashClickView$3 r2 = new com.tkay.expressad.splash.view.MBSplashClickView$3
            r2.<init>(r0)
            r1.setAnimationListener(r2)
            android.widget.ImageView r2 = r0.l
            r2.startAnimation(r1)
            return
        L58:
            r6 = 3
            if (r1 != r6) goto Lb0
            android.view.animation.ScaleAnimation r1 = new android.view.animation.ScaleAnimation
            r8 = 1065353216(0x3f800000, float:1.0)
            r9 = 1060320051(0x3f333333, float:0.7)
            r10 = 1065353216(0x3f800000, float:1.0)
            r11 = 1060320051(0x3f333333, float:0.7)
            r12 = 1
            r13 = 1056964608(0x3f000000, float:0.5)
            r14 = 1
            r15 = 1056964608(0x3f000000, float:0.5)
            r7 = r1
            r7.<init>(r8, r9, r10, r11, r12, r13, r14, r15)
            r6 = 400(0x190, double:1.976E-321)
            r1.setDuration(r6)
            r1.setRepeatCount(r2)
            r1.setRepeatMode(r5)
            android.view.animation.ScaleAnimation r2 = new android.view.animation.ScaleAnimation
            r9 = 0
            r10 = 1056964608(0x3f000000, float:0.5)
            r11 = 0
            r12 = 1056964608(0x3f000000, float:0.5)
            r13 = 1
            r14 = 1056964608(0x3f000000, float:0.5)
            r15 = 1
            r16 = 1056964608(0x3f000000, float:0.5)
            r8 = r2
            r8.<init>(r9, r10, r11, r12, r13, r14, r15, r16)
            r5 = 200(0xc8, double:9.9E-322)
            r2.setDuration(r5)
            com.tkay.expressad.splash.view.MBSplashClickView$1 r5 = new com.tkay.expressad.splash.view.MBSplashClickView$1
            r5.<init>(r0, r2)
            r2.setAnimationListener(r5)
            android.widget.ImageView r5 = r0.m
            r6 = 4
            r5.setVisibility(r6)
            android.widget.ImageView r5 = r0.l
            r5.startAnimation(r1)
            android.widget.ImageView r1 = r0.m
            com.tkay.expressad.splash.view.MBSplashClickView$2 r5 = new com.tkay.expressad.splash.view.MBSplashClickView$2
            r5.<init>(r0, r2)
            r1.postDelayed(r5, r3)
        Lb0:
            return
    }

    @Override
    protected void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
            r0 = this;
            super.onLayout(r1, r2, r3, r4, r5)
            int r1 = r0.getWidth()
            int r2 = r0.getHeight()
            android.graphics.RectF r3 = r0.n
            float r1 = (float) r1
            float r2 = (float) r2
            r4 = 0
            r3.set(r4, r4, r1, r2)
            return
    }
}

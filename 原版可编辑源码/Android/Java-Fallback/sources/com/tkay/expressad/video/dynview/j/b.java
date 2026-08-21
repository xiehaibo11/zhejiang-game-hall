package com.tkay.expressad.video.dynview.j;

public final class b {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private java.lang.String j;
    private java.lang.String k;
    private java.lang.String l;
    private java.lang.String m;
    private java.lang.String n;
    private java.lang.String o;
    private java.lang.String p;
    private java.lang.String q;
    private java.lang.String r;
    private java.lang.String s;
    private java.lang.String t;
    private java.lang.String u;
    private java.lang.String v;
    private java.lang.String w;
    private boolean x;

    public b() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "tkay_top_play_bg"
            r1.a = r0
            java.lang.String r0 = "tkay_top_finger_bg"
            r1.b = r0
            java.lang.String r0 = "tkay_bottom_play_bg"
            r1.c = r0
            java.lang.String r0 = "tkay_bottom_finger_bg"
            r1.d = r0
            java.lang.String r0 = "tkay_tv_count"
            r1.e = r0
            java.lang.String r0 = "tkay_sound_switch"
            r1.f = r0
            java.lang.String r0 = "tkay_top_control"
            r1.g = r0
            java.lang.String r0 = "tkay_tv_title"
            r1.h = r0
            java.lang.String r0 = "tkay_tv_desc"
            r1.i = r0
            java.lang.String r0 = "tkay_tv_install"
            r1.j = r0
            java.lang.String r0 = "tkay_sv_starlevel"
            r1.k = r0
            java.lang.String r0 = "tkay_sv_heat_count_level"
            r1.l = r0
            java.lang.String r0 = "tkay_tv_cta"
            r1.m = r0
            java.lang.String r0 = "tkay_native_ec_controller"
            r1.n = r0
            java.lang.String r0 = "tkay_reward_shape_choice_rl"
            r1.o = r0
            java.lang.String r0 = "#FFFFFF"
            r1.p = r0
            java.lang.String r0 = "#FF000000"
            r1.q = r0
            java.lang.String r0 = "#40000000"
            r1.r = r0
            java.lang.String r0 = "#CAEF79"
            r1.s = r0
            java.lang.String r0 = "#2196F3"
            r1.t = r0
            java.lang.String r0 = "#402196F3"
            r1.u = r0
            java.lang.String r0 = "#8FC31F"
            r1.v = r0
            java.lang.String r0 = "#03A9F4"
            r1.w = r0
            r0 = 0
            r1.x = r0
            return
    }

    private static int a(java.lang.String r2) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r1 = "id"
            int r2 = com.tkay.expressad.foundation.h.i.a(r0, r2, r1)
            return r2
    }

    private static void a() {
            return
    }

    private void a(android.content.Context r3, android.view.View r4, com.tkay.expressad.video.dynview.c r5) {
            r2 = this;
            java.lang.String r0 = r2.f
            int r0 = a(r0)
            android.view.View r4 = r4.findViewById(r0)
            com.tkay.expressad.video.widget.SoundImageView r4 = (com.tkay.expressad.video.widget.SoundImageView) r4
            r0 = 1114636288(0x42700000, float:60.0)
            int r0 = com.tkay.expressad.foundation.h.t.b(r3, r0)
            r1 = 1092616192(0x41200000, float:10.0)
            int r3 = com.tkay.expressad.foundation.h.t.b(r3, r1)
            if (r4 == 0) goto L27
            r5.e()
            android.view.ViewGroup$LayoutParams r4 = r4.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r4 = (android.widget.FrameLayout.LayoutParams) r4
            r5 = 0
            r4.setMargins(r3, r5, r5, r0)
        L27:
            return
    }

    private static int b(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto Lb
            int r1 = r1.hashCode()
            return r1
        Lb:
            r1 = -1
            return r1
    }

    private void b(android.view.View r4) {
            r3 = this;
            java.lang.String r0 = r3.g
            int r0 = a(r0)
            android.view.View r4 = r4.findViewById(r0)
            android.widget.RelativeLayout r4 = (android.widget.RelativeLayout) r4
            if (r4 == 0) goto L37
            int r0 = com.tkay.expressad.video.dynview.a.b.a
            if (r0 != 0) goto L1f
            int r0 = com.tkay.expressad.video.dynview.a.b.b
            if (r0 != 0) goto L1f
            int r0 = com.tkay.expressad.video.dynview.a.b.c
            if (r0 != 0) goto L1f
            int r0 = com.tkay.expressad.video.dynview.a.b.d
            if (r0 != 0) goto L1f
            return
        L1f:
            r0 = 4
            r4.setVisibility(r0)
            android.view.animation.AlphaAnimation r0 = new android.view.animation.AlphaAnimation
            r1 = 0
            r2 = 1120403456(0x42c80000, float:100.0)
            r0.<init>(r1, r2)
            r1 = 200(0xc8, double:9.9E-322)
            r0.setDuration(r1)
            r4.startAnimation(r0)
            r0 = 0
            r4.setVisibility(r0)
        L37:
            return
    }

    private void d(android.view.View r6, com.tkay.expressad.video.dynview.c r7) {
            r5 = this;
            java.lang.String r0 = r5.n
            int r0 = a(r0)
            android.view.View r6 = r6.findViewById(r0)
            android.widget.RelativeLayout r6 = (android.widget.RelativeLayout) r6
            if (r6 == 0) goto L55
            int r7 = r7.e()
            r0 = 1
            r1 = -1
            if (r7 != r0) goto L36
            android.widget.FrameLayout$LayoutParams r7 = new android.widget.FrameLayout$LayoutParams
            r7.<init>(r1, r1)
            int r0 = r7.leftMargin
            int r1 = com.tkay.expressad.video.dynview.a.b.a
            int r0 = r0 + r1
            int r1 = r7.rightMargin
            int r2 = com.tkay.expressad.video.dynview.a.b.b
            int r1 = r1 + r2
            int r2 = r7.topMargin
            int r3 = com.tkay.expressad.video.dynview.a.b.c
            int r2 = r2 + r3
            int r3 = r7.bottomMargin
            int r4 = com.tkay.expressad.video.dynview.a.b.d
            int r3 = r3 + r4
            r7.setMargins(r0, r2, r1, r3)
            r6.setLayoutParams(r7)
            return
        L36:
            android.widget.RelativeLayout$LayoutParams r7 = new android.widget.RelativeLayout$LayoutParams
            r7.<init>(r1, r1)
            int r0 = r7.leftMargin
            int r1 = com.tkay.expressad.video.dynview.a.b.a
            int r0 = r0 + r1
            int r1 = r7.rightMargin
            int r2 = com.tkay.expressad.video.dynview.a.b.b
            int r1 = r1 + r2
            int r2 = r7.topMargin
            int r3 = com.tkay.expressad.video.dynview.a.b.c
            int r2 = r2 + r3
            int r3 = r7.bottomMargin
            int r4 = com.tkay.expressad.video.dynview.a.b.d
            int r3 = r3 + r4
            r7.setMargins(r0, r2, r1, r3)
            r6.setLayoutParams(r7)
        L55:
            return
    }

    public final void a(android.view.View r9) {
            r8 = this;
            if (r9 == 0) goto L96
            boolean r0 = r9 instanceof com.tkay.expressad.video.dynview.widget.TYFramLayout
            if (r0 == 0) goto L96
            r0 = r9
            com.tkay.expressad.video.dynview.widget.TYFramLayout r0 = (com.tkay.expressad.video.dynview.widget.TYFramLayout) r0
            android.animation.AnimatorSet r1 = new android.animation.AnimatorSet
            r1.<init>()
            android.content.Context r2 = r9.getContext()
            if (r2 == 0) goto L96
            r2 = 0
            r8.x = r2
            java.lang.String r3 = r8.a
            int r3 = a(r3)
            android.view.View r3 = r9.findViewById(r3)
            android.widget.ImageView r3 = (android.widget.ImageView) r3
            java.lang.String r4 = r8.b
            int r4 = a(r4)
            android.view.View r4 = r9.findViewById(r4)
            android.widget.ImageView r4 = (android.widget.ImageView) r4
            java.lang.String r5 = r8.c
            int r5 = a(r5)
            android.view.View r5 = r9.findViewById(r5)
            android.widget.ImageView r5 = (android.widget.ImageView) r5
            java.lang.String r6 = r8.d
            int r6 = a(r6)
            android.view.View r9 = r9.findViewById(r6)
            android.widget.ImageView r9 = (android.widget.ImageView) r9
            r6 = 0
            if (r3 == 0) goto L54
            com.tkay.expressad.video.dynview.h.b r7 = new com.tkay.expressad.video.dynview.h.b
            r7.<init>()
            android.animation.ObjectAnimator r3 = com.tkay.expressad.video.dynview.h.b.a(r3)
            goto L55
        L54:
            r3 = r6
        L55:
            if (r4 == 0) goto L61
            com.tkay.expressad.video.dynview.h.b r7 = new com.tkay.expressad.video.dynview.h.b
            r7.<init>()
            android.animation.ObjectAnimator r4 = com.tkay.expressad.video.dynview.h.b.b(r4)
            goto L62
        L61:
            r4 = r6
        L62:
            if (r5 == 0) goto L6e
            com.tkay.expressad.video.dynview.h.b r7 = new com.tkay.expressad.video.dynview.h.b
            r7.<init>()
            android.animation.ObjectAnimator r5 = com.tkay.expressad.video.dynview.h.b.a(r5)
            goto L6f
        L6e:
            r5 = r6
        L6f:
            if (r9 == 0) goto L7a
            com.tkay.expressad.video.dynview.h.b r6 = new com.tkay.expressad.video.dynview.h.b
            r6.<init>()
            android.animation.ObjectAnimator r6 = com.tkay.expressad.video.dynview.h.b.b(r9)
        L7a:
            if (r3 == 0) goto L96
            if (r5 == 0) goto L96
            if (r4 == 0) goto L96
            if (r6 == 0) goto L96
            r9 = 4
            android.animation.Animator[] r9 = new android.animation.Animator[r9]
            r9[r2] = r3
            r2 = 1
            r9[r2] = r5
            r2 = 2
            r9[r2] = r4
            r2 = 3
            r9[r2] = r6
            r1.playTogether(r9)
            r0.setAnimatorSet(r1)
        L96:
            return
    }

    public final void a(android.view.View r12, com.tkay.expressad.video.dynview.c r13) {
            r11 = this;
            if (r12 == 0) goto L7
            android.content.Context r0 = r12.getContext()
            goto L8
        L7:
            r0 = 0
        L8:
            if (r0 == 0) goto Lfb
            if (r13 != 0) goto Le
            goto Lfb
        Le:
            r1 = 0
            r11.x = r1
            java.lang.String r2 = r11.e
            int r2 = a(r2)
            android.view.View r2 = r12.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            java.lang.String r3 = "tkay_reward_click_tv"
            int r3 = a(r3)
            android.view.View r3 = r12.findViewById(r3)
            r4 = r3
            android.widget.TextView r4 = (android.widget.TextView) r4
            if (r2 == 0) goto L45
            java.lang.String r3 = "tkay_reward_shape_progress"
            java.lang.String r5 = "drawable"
            int r0 = com.tkay.expressad.foundation.h.i.a(r0, r3, r5)
            r2.setBackgroundResource(r0)
            java.lang.String r0 = r11.p
            int r0 = android.graphics.Color.parseColor(r0)
            r2.setTextColor(r0)
            r0 = 1093664768(0x41300000, float:11.0)
            r2.setTextSize(r0)
        L45:
            if (r4 == 0) goto L5f
            r0 = 1101004800(0x41a00000, float:20.0)
            r4.setTextSize(r0)
            boolean r0 = r4 instanceof com.tkay.expressad.video.dynview.widget.TYTextView
            if (r0 == 0) goto L5f
            com.tkay.expressad.video.dynview.h.b r0 = new com.tkay.expressad.video.dynview.h.b
            r0.<init>()
            android.animation.ObjectAnimator r0 = com.tkay.expressad.video.dynview.h.b.c(r4)
            r2 = r4
            com.tkay.expressad.video.dynview.widget.TYTextView r2 = (com.tkay.expressad.video.dynview.widget.TYTextView) r2
            r2.setObjectAnimator(r0)
        L5f:
            if (r13 == 0) goto Lfb
            java.lang.String r0 = r11.q
            java.lang.String r2 = r11.s
            r3 = 1065353216(0x3f800000, float:1.0)
            r5 = 1084227584(0x40a00000, float:5.0)
            int r6 = r13.i()
            r7 = 302(0x12e, float:4.23E-43)
            if (r6 == r7) goto L86
            r7 = 802(0x322, float:1.124E-42)
            if (r6 == r7) goto L7a
            java.lang.String r6 = r11.v
            java.lang.String r7 = r11.s
            goto L90
        L7a:
            java.lang.String r6 = r11.p
            java.lang.String r0 = r11.q
            java.lang.String r2 = r11.r
            r3 = 1056964608(0x3f000000, float:0.5)
            r5 = 1103626240(0x41c80000, float:25.0)
            r7 = r6
            goto L90
        L86:
            java.lang.String r6 = r11.t
            java.lang.String r7 = r11.w
            java.lang.String r0 = r11.p
            java.lang.String r2 = r11.u
            r5 = 1092616192(0x41200000, float:10.0)
        L90:
            r10 = r3
            r3 = r2
            r2 = r5
            r5 = r10
            if (r4 == 0) goto Lac
            int r0 = android.graphics.Color.parseColor(r0)
            r4.setTextColor(r0)
            r0 = 2
            java.lang.String[] r8 = new java.lang.String[r0]
            r8[r1] = r6
            r0 = 1
            r8[r0] = r7
            android.graphics.drawable.GradientDrawable$Orientation r9 = android.graphics.drawable.GradientDrawable.Orientation.LEFT_RIGHT
            r6 = r2
            r7 = r3
            com.tkay.expressad.video.dynview.i.b.a.a(r4, r5, r6, r7, r8, r9)
        Lac:
            android.view.View r0 = r13.f()
            if (r0 == 0) goto Lc6
            android.view.View r0 = r13.f()
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0
            r0.setMargins(r1, r1, r1, r1)
            android.view.View r13 = r13.f()
            r13.setLayoutParams(r0)
        Lc6:
            java.lang.String r13 = r11.g
            int r13 = a(r13)
            android.view.View r12 = r12.findViewById(r13)
            android.widget.RelativeLayout r12 = (android.widget.RelativeLayout) r12
            if (r12 == 0) goto Lfb
            int r13 = com.tkay.expressad.video.dynview.a.b.a
            if (r13 != 0) goto Le4
            int r13 = com.tkay.expressad.video.dynview.a.b.b
            if (r13 != 0) goto Le4
            int r13 = com.tkay.expressad.video.dynview.a.b.c
            if (r13 != 0) goto Le4
            int r13 = com.tkay.expressad.video.dynview.a.b.d
            if (r13 == 0) goto Lfb
        Le4:
            r13 = 4
            r12.setVisibility(r13)
            android.view.animation.AlphaAnimation r13 = new android.view.animation.AlphaAnimation
            r0 = 0
            r2 = 1120403456(0x42c80000, float:100.0)
            r13.<init>(r0, r2)
            r2 = 200(0xc8, double:9.9E-322)
            r13.setDuration(r2)
            r12.startAnimation(r13)
            r12.setVisibility(r1)
        Lfb:
            return
    }

    public final void b(android.view.View r12, com.tkay.expressad.video.dynview.c r13) {
            r11 = this;
            if (r12 == 0) goto Lde
            if (r13 == 0) goto Lde
            android.content.Context r0 = r12.getContext()
            if (r0 == 0) goto Lde
            int r1 = r13.e()
            r2 = 1
            if (r1 != r2) goto L59
            java.lang.String r1 = r11.o
            java.lang.String r3 = "drawable"
            int r1 = com.tkay.expressad.foundation.h.i.a(r0, r1, r3)
            android.content.res.Resources r3 = r0.getResources()
            android.graphics.drawable.Drawable r1 = r3.getDrawable(r1)
            r12.setBackgroundDrawable(r1)
            java.lang.String r1 = r11.h
            int r1 = a(r1)
            android.view.View r1 = r12.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            if (r1 == 0) goto L3b
            java.lang.String r3 = r11.q
            int r3 = android.graphics.Color.parseColor(r3)
            r1.setTextColor(r3)
        L3b:
            java.lang.String r1 = r11.i
            int r1 = a(r1)
            android.view.View r1 = r12.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            if (r1 == 0) goto L52
            java.lang.String r3 = r11.q
            int r3 = android.graphics.Color.parseColor(r3)
            r1.setTextColor(r3)
        L52:
            r1 = 1073741824(0x40000000, float:2.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r0, r1)
            goto L68
        L59:
            r1 = 1092616192(0x41200000, float:10.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r0, r1)
            android.graphics.drawable.Drawable r3 = r12.getBackground()
            r4 = 100
            r3.setAlpha(r4)
        L68:
            r3 = 1090519040(0x41000000, float:8.0)
            int r3 = com.tkay.expressad.foundation.h.t.b(r0, r3)
            java.lang.String r4 = r11.j
            int r4 = a(r4)
            android.view.View r4 = r12.findViewById(r4)
            if (r4 == 0) goto Lc4
            android.view.View r5 = r13.f()
            if (r5 == 0) goto L9a
            android.view.View r5 = r13.f()
            boolean r5 = r5 instanceof com.tkay.expressad.video.module.TkayClickCTAView
            if (r5 == 0) goto L9a
            com.tkay.expressad.video.dynview.h.b r5 = new com.tkay.expressad.video.dynview.h.b
            r5.<init>()
            android.animation.ObjectAnimator r5 = com.tkay.expressad.video.dynview.h.b.c(r4)
            android.view.View r13 = r13.f()
            com.tkay.expressad.video.module.TkayClickCTAView r13 = (com.tkay.expressad.video.module.TkayClickCTAView) r13
            r13.setObjectAnimator(r5)
        L9a:
            boolean r13 = r4 instanceof android.widget.TextView
            if (r13 == 0) goto Lc4
            r5 = r4
            android.widget.TextView r5 = (android.widget.TextView) r5
            java.lang.String r13 = r11.p
            int r13 = android.graphics.Color.parseColor(r13)
            r5.setTextColor(r13)
            r13 = 1097859072(0x41700000, float:15.0)
            r5.setTextSize(r13)
            r13 = 2
            java.lang.String[] r9 = new java.lang.String[r13]
            r13 = 0
            java.lang.String r4 = r11.v
            r9[r13] = r4
            java.lang.String r8 = r11.s
            r9[r2] = r8
            r6 = 1065353216(0x3f800000, float:1.0)
            r7 = 1084227584(0x40a00000, float:5.0)
            android.graphics.drawable.GradientDrawable$Orientation r10 = android.graphics.drawable.GradientDrawable.Orientation.LEFT_RIGHT
            com.tkay.expressad.video.dynview.i.b.a.a(r5, r6, r7, r8, r9, r10)
        Lc4:
            android.view.ViewGroup$LayoutParams r13 = r12.getLayoutParams()
            if (r13 != 0) goto Lde
            android.widget.RelativeLayout$LayoutParams r13 = new android.widget.RelativeLayout$LayoutParams
            r2 = -2
            r13.<init>(r2, r2)
            r13.setMargins(r1, r1, r1, r3)
            r1 = 1114636288(0x42700000, float:60.0)
            int r0 = com.tkay.expressad.foundation.h.t.b(r0, r1)
            r13.height = r0
            r12.setLayoutParams(r13)
        Lde:
            return
    }

    public final void c(android.view.View r11, com.tkay.expressad.video.dynview.c r12) {
            r10 = this;
            if (r11 == 0) goto Le8
            if (r12 == 0) goto Le8
            android.content.Context r0 = r11.getContext()
            if (r0 == 0) goto Le0
            r0 = 0
            r10.x = r0
            java.lang.String r1 = r10.k
            int r1 = a(r1)
            android.view.View r1 = r11.findViewById(r1)
            android.widget.LinearLayout r1 = (android.widget.LinearLayout) r1
            java.lang.String r2 = r10.m
            int r2 = a(r2)
            android.view.View r2 = r11.findViewById(r2)
            r9 = 1
            if (r1 == 0) goto L37
            boolean r3 = r1 instanceof com.tkay.expressad.video.dynview.widget.TYLevelLayoutView
            if (r3 == 0) goto L37
            int r3 = r12.e()
            if (r3 != r9) goto L34
            r1.setOrientation(r9)
            goto L37
        L34:
            r1.setOrientation(r0)
        L37:
            java.lang.String r1 = r10.n
            int r1 = a(r1)
            android.view.View r1 = r11.findViewById(r1)
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1
            if (r1 == 0) goto L8b
            int r12 = r12.e()
            r3 = -1
            if (r12 != r9) goto L6c
            android.widget.FrameLayout$LayoutParams r12 = new android.widget.FrameLayout$LayoutParams
            r12.<init>(r3, r3)
            int r3 = r12.leftMargin
            int r4 = com.tkay.expressad.video.dynview.a.b.a
            int r3 = r3 + r4
            int r4 = r12.rightMargin
            int r5 = com.tkay.expressad.video.dynview.a.b.b
            int r4 = r4 + r5
            int r5 = r12.topMargin
            int r6 = com.tkay.expressad.video.dynview.a.b.c
            int r5 = r5 + r6
            int r6 = r12.bottomMargin
            int r7 = com.tkay.expressad.video.dynview.a.b.d
            int r6 = r6 + r7
            r12.setMargins(r3, r5, r4, r6)
            r1.setLayoutParams(r12)
            goto L8b
        L6c:
            android.widget.RelativeLayout$LayoutParams r12 = new android.widget.RelativeLayout$LayoutParams
            r12.<init>(r3, r3)
            int r3 = r12.leftMargin
            int r4 = com.tkay.expressad.video.dynview.a.b.a
            int r3 = r3 + r4
            int r4 = r12.rightMargin
            int r5 = com.tkay.expressad.video.dynview.a.b.b
            int r4 = r4 + r5
            int r5 = r12.topMargin
            int r6 = com.tkay.expressad.video.dynview.a.b.c
            int r5 = r5 + r6
            int r6 = r12.bottomMargin
            int r7 = com.tkay.expressad.video.dynview.a.b.d
            int r6 = r6 + r7
            r12.setMargins(r3, r5, r4, r6)
            r1.setLayoutParams(r12)
        L8b:
            if (r2 == 0) goto Le0
            boolean r12 = r2 instanceof android.widget.TextView
            if (r12 == 0) goto Lb7
            r12 = r2
            android.widget.TextView r12 = (android.widget.TextView) r12
            java.lang.String r1 = r10.p
            int r1 = android.graphics.Color.parseColor(r1)
            r12.setTextColor(r1)
            r1 = 1103626240(0x41c80000, float:25.0)
            r12.setTextSize(r1)
            r12 = 2
            java.lang.String[] r7 = new java.lang.String[r12]
            java.lang.String r12 = r10.v
            r7[r0] = r12
            java.lang.String r6 = r10.s
            r7[r9] = r6
            r4 = 1065353216(0x3f800000, float:1.0)
            r5 = 1084227584(0x40a00000, float:5.0)
            android.graphics.drawable.GradientDrawable$Orientation r8 = android.graphics.drawable.GradientDrawable.Orientation.LEFT_RIGHT
            r3 = r2
            com.tkay.expressad.video.dynview.i.b.a.a(r3, r4, r5, r6, r7, r8)
        Lb7:
            android.animation.AnimatorSet r12 = new android.animation.AnimatorSet
            r12.<init>()
            com.tkay.expressad.video.dynview.h.b r1 = new com.tkay.expressad.video.dynview.h.b
            r1.<init>()
            android.animation.ObjectAnimator r1 = com.tkay.expressad.video.dynview.h.b.c(r2)
            android.animation.Animator[] r2 = new android.animation.Animator[r9]
            r2[r0] = r1
            r12.playTogether(r2)
            boolean r0 = r11 instanceof com.tkay.expressad.video.dynview.widget.TYFramLayout
            if (r0 == 0) goto Ld6
            r0 = r11
            com.tkay.expressad.video.dynview.widget.TYFramLayout r0 = (com.tkay.expressad.video.dynview.widget.TYFramLayout) r0
            r0.setAnimatorSet(r12)
        Ld6:
            boolean r0 = r11 instanceof com.tkay.expressad.video.dynview.widget.TYRelativeLayout
            if (r0 == 0) goto Le0
            r0 = r11
            com.tkay.expressad.video.dynview.widget.TYRelativeLayout r0 = (com.tkay.expressad.video.dynview.widget.TYRelativeLayout) r0
            r0.setAnimatorSet(r12)
        Le0:
            com.tkay.expressad.video.dynview.h.b r12 = new com.tkay.expressad.video.dynview.h.b
            r12.<init>()
            com.tkay.expressad.video.dynview.h.b.e(r11)
        Le8:
            return
    }
}
